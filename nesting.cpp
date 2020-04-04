#include <iostream>
#include <string>
using namespace std;
int main() {

  int t;cin>>t;
  // string answer[100]={0};
  for(int p=0;p<t;p++){
    string str;cin>>str;
    int a[100]={0};
    for(int i =0;i<str.length();i++)
    {
      a[i]=str[i]-48;
    }
    string fs="";
    int q=0;
    int h=a[0];
    for(int i=0;i<str.length();i++){
      // int j=0;
      if(i==0)
      {
        while(h!=0)
        {
          fs.push_back('(');
          h--;
          q++;
        }  
      fs+=str[i];
      h=a[0];
      continue;
      }
      if(h==a[i])
      {
        fs+=str[i];
        continue;
      }
      else if(h>a[i]){
        while(h>a[i]){
          q--;
          h--;
          fs.push_back(')');
        }
        h=a[i];fs+=str[i];
        continue;
      }
      else if(h<a[i]){
        while(h<a[i]){
          fs.push_back('(');
          h++;
          q++;
        }
         h=a[i];
         fs+=str[i];
        continue;
      }

    }
    while(q--){
      fs.push_back(')');
    }
     cout<<"case #"<<p+1<<":"<<" "<<fs<<endl;
  // cout<<fs;
  }

}