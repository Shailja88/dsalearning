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
 void bfs(vector<int>v[],int s,int size){
//for bfs traversal we need one queue , visited  track array
  vector<int>arr(size,0);
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


 
 int main(){
     int x=6;
     vector<int>v[6];
     add(v,0,1);
     add(v,0,5);
     add(v,0,2);
     add(v,1,3);
     add(v,3,5);
     add(v,2,4);
     add(v,4,5);
     printt(v,6);
     bfs(v,0,x);
 }
