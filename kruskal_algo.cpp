#include<bits/stdc++.h>
using namespace std;

class edge{
    public:
    int source;
    int dest;
    int weight;
};
bool comparator(edge e1,edge e2){
    return e1.weight<e2.weight;
}

int findparent(int v,int*parent){
    if(parent[v]==v){
        return v;
    }
    return parent[v]=findparent(parent[v],parent);
}

void kruskal(edge*input,int n,int e){
    //sorts the array in ascending order based on their weights

    sort(input,input+e,comparator);

    int *parent=new int [n];
    int *rank=new int [n];
    for(int i=0;i<n;i++){
        parent[i]=i;
        rank[i]=0;
    }

    edge*output=new edge[n-1];
    int count=0; //currently how many edges are added in our MST
    int i=0; //currently in which edge we are working
    while(count!=n-1){
        edge currentedge=input[i];
        //check if we can add the currentedge in MST or not
        int sourceparent=findparent(currentedge.source,parent);
        int destparent=findparent(currentedge.dest,parent);

        if(sourceparent!=destparent){
            // Attach smaller rank tree under root of high
    		// rank tree (Union by Rank)
            if(rank[sourceparent]>rank[destparent]){
                parent[destparent]=sourceparent;

            }
            else if(rank[sourceparent]<rank[destparent]){
                parent[sourceparent]=destparent;

            }

             // If ranks are same, then make one as root and
        	 // increment its rank by one
            else{
                parent[sourceparent]=destparent;
                rank[destparent]+=1;
            }
            output[count]=currentedge;
            count++;
        }
        i++;
    }
    for(int i=0;i<n-1;i++){
        if(output[i].source<output[i].dest){
            cout<<output[i].source<<" "<<output[i].dest<<" "<<output[i].weight<<endl;
        }
        else{
           cout<<output[i].dest<<" "<<output[i].source<<" "<<output[i].weight<<endl;
        }
    }
}


int main(){
    //To take input. nis no. of vertices and e is no. of edges
    int n,e;
    cin>>n>>e;
    edge*input=new edge[e];
    for(int i=0;i<e;i++){
        int s,d,w;
        cin>>s>>d>>w;
        input[i].source=s;
        input[i].dest=d;
        input[i].weight=w;
    }
    kruskal(input,n,e);
}
