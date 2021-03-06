#include<bits/stdc++.h>
#include<vector>
#include<queue>
#include<unordered_map>
using namespace std;
vector<int>* get_path(int **edges,int n,int sv,int ev,bool *visited){
    queue<int>bfsQ;
    bfsQ.push(sv);
    unordered_map<int,int>parent;
    visited[sv]=true;
    bool done=false;
    while(!bfsQ.empty() && !done){
        int front=bfsQ.front();
        bfsQ.pop();
        for(int i=0;i<n;i++){
            if(edges[front][i]==1 && !visited[i]){
                parent[i]=front;
                bfsQ.push(i);
                visited[i]=true;
                if(i==ev){
                    done=true;
                    break;
                }
            }
        }
    }
    if(!done){
        return NULL;
    }
    else{
        vector<int>*output=new vector<int>();
        int current=ev;
        output->push_back(ev);
        while(current!=sv){
            current=parent[current];
            output->push_back(current);
        }
        return output;
    }

}
int main(){
    int n,e;
    cin>>n>>e;
    int **edges=new int *[n];
    for(int i=0;i<n;i++){
        edges[i]=new int[n];
        for(int j=0;j<n;j++){
            edges[i][j]=0;
        }
    }
    for(int i=0;i<e;i++){
        int f,s;
        cin>>f>>s;
        edges[f][s]=1;
        edges[s][f]=1;
    }
    bool *visited=new bool[n];
    for(int i=0;i<n;i++){
        visited[i]=false;
    }
    int sv,ev;
    cin>>sv>>ev;
    vector<int>*output=get_path(edges,n,sv,ev,visited);
    if(output!=NULL){
        for(int i=0;i<output->size();i++){
            cout<<output->at(i)<<" ";
        }
    }
    else{
        cout<<"PATH NOT FOUND"<<endl;
    }
    delete []visited;
    for(int i=0;i<n;i++){
        delete []edges[i];
    }
    delete []edges;
    delete output;
}


/*INPUT
4 4
0 1
0 3
1 2
2 3
1 3

OUTPUT
3 0 1
*/
