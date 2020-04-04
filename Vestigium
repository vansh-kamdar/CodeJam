#include <iostream>
using namespace std;
int main() {
    int t;cin>>t;
  int b[100][3]={0};
    for(int p=0;p<t;p++){
      int n,a[100][100]={0},tr=0;cin>>n;
      for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
          cin>>a[i][j];
          if(i==j)tr+=a[i][j];
        }
      }
      int y=0,dupr=0,mxr=0;
      
      int z=0,dupc=0,mxc=0;
      for(int y=0;y<n;y++){
      for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
          if(a[i][y]==a[j][y]){
            dupr+=1;
            }
          if(a[y][i]==a[y][j]){
          dupc+=1;
          }
        }
        if(i==n-2){
          
          if(dupr>0)mxr++;
          if(dupc>0)mxc++;
          dupr=0;
          dupc=0;}
      }
      
      }
   b[p][0]=tr;
   b[p][1]=mxc;
   b[p][2]=mxr;
  }
  for(int i=0;i<t;i++){
  
      cout<<"case #"<<i+1<<":"<<" "<<b[i][0]<<" " <<b[i][1]<<" " <<b[i][2]<<endl;
}
}
