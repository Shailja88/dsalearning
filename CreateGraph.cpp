//creating a graph
#include<bits/stdc++.h>
using namespace std;
void add(vector<int>g[],int i,int j){
    g[i].push_back(j);
    g[j].push_back(i);
}
void printt(vector<int>g[],int size){
    for(int i=0;i<size;i++){
        for(auto in:g[i]){
            cout<<in<<" ";
        }
         cout<<endl;
    }
   
}

int main(){
    int size=4;
    
    vector<int>g[size];
    add(g,0,1);
    add(g,0,2);
    add(g,1,2);
    
    add(g,2,3);
    printt(g,size);
}
