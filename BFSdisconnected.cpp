 #include<bits/stdc++.h>
 using namespace std;
 void add(vector<int>v[],int i,int j){
     v[i].push_back(j);
     v[j].push_back(i);
 }
 void printt(vector<int>v[],int size){
     for(int i=0;i<size;i++){
         for(auto in:v[i]){
             cout<<in<<" ";
         }
         cout<<endl;
     }
 }
 void bfs(vector<int>v[],int size,vector<int>&arr,int s){
//for bfs traversal we need one queue , visited  track array connected graph

  queue<int>q;
  q.push(s);
  arr[s]=1;
  while(!q.empty()){
      int x=q.front();
      q.pop();
      cout<<x<<" ";
      for(auto in: v[x]){
          if(arr[in]==0){
              arr[in]=1;
              q.push(in);
          }
        }
       }
       }

void bfsdis(vector<int>v[],int size){
    vector<int>visited(size,0);
    for(int i=0;i<size;i++){
        if(visited[i]==0){
            bfs(v,size,visited,i);
        }
    }
}
 
 int main(){
     int x=9;
     vector<int>v[9];
     add(v,0,1);
     add(v,0,2);
     add(v,1,2);
     add(v,3,4);
     add(v,6,5);
     add(v,5,7);
     add(v,7,8);
     printt(v,9);
     bfsdis(v,x);
 }
