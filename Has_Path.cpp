#include<bits/stdc++.h>
#include<vector>
//#include<unordered_map>
using namespace std;

bool has_path(unordered_map<int,vector<int>*>&adjacencylist,int sv,int ev,unordered_map<int,bool>&visited){
    vector<int>*output=adjacencylist[sv];
    for(int i=0;i<output->size();i++){
        if(output->at(i)==ev){
            return true;
        }
    }
    visited[sv]=true;
    for(int i=0;i<output->size();i++){
        if(visited.count(output->at(i)==0)){
            bool ans=has_path(adjacencylist,output->at(i),ev,visited);
            if(ans){
                return true;
            }
        }
    }
    return false;
}

bool has_path(unordered_map<int,vector<int>*>&adjacencylist,int sv,int ev){
    unordered_map<int,bool>visited;
    return has_path(adjacencylist,sv,ev,visited);
}
int main(){
    int n,e;
    cin>>n>>e;
    unordered_map<int,vector<int>*>adjacencylist;
    for(int i=0;i<n;i++){
        vector<int>*v=new vector<int>;
        adjacencylist[i]=v;
    }
    for(int i=0;i<e;i++){
        int source,dest;
        cin>>source>>dest;
        adjacencylist[source]->push_back(dest);
        adjacencylist[dest]->push_back(source);
    }
    int sv,ev;
    cin>>sv>>ev;
    if(has_path(adjacencylist,sv,ev)){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }
   // delete v;
}

