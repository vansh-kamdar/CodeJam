#include <iostream>
#include <string>
using namespace std;
int main() {
  int t;cin>>t;
  for(int p=0;p<t;p++){
    int a[1000][2]={0},b[1000]={0};
    int n;cin>>n;
    for(int i=0;i<n;i++){
      cin>>a[i][0]>>a[i][1];
      b[i]=i;
    }
    int temp1=0,temp2=0,temp3=0;
    for(int i=0;i<n;i++)
    {
      for(int j=i+1;j<n;j++){
        if(a[i][0]>a[j][0]){
          temp1=a[i][0];
          temp2=a[i][1];
          a[i][0]=a[j][0];
          a[i][1]=a[j][1];
          a[j][0]=temp1;
          a[j][1]=temp2;
          temp3=b[i];
          b[i]=b[j];
          b[j]=temp3;
        }
      }

    }
    // for(int i=0;i<n;i++){
    //   cout<<a[i][0]<<a[i][1]<<b[i]<<endl;
      
    // }
    char str[1000]="";
    int j=0,c=0,flag=0;
    for(int i=0;i<n;i++)
    {
      if(j<=a[i][0]){
        str[b[i]]='J';
        j=a[i][1];
      }
      else if(c<=a[i][0]){
        str[b[i]]='C';
        c=a[i][1];
      }
      else{
        cout<<"case #"<<p+1<<":"<<" "<<"IMMPOSSIBLE"<<endl;
        flag=1;
        break;

      }
    }
    if(flag==0)
  cout<<"case #"<<p+1<<":"<<" "<<str<<endl;
  }
}