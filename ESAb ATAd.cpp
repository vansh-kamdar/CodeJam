#include <bits/stdc++.h>
using namespace std;
int main()
{
  int T,B;
  cin>>T>>B;
  for(int p=1;p<=T;p++)
  {
  	int a[B+1];
  	for(int i=1;i<=B;i++)
  	{
  		cout<<i<<endl;
  		cin>>a[i];
  	}
  	for(int j=1;j<=B;j++){
  		cout<<(char)(a[j]+'0');}
  	char y;
    cout<<endl;
    cin>>y;
  	if(y!='Y') exit(0);
  }
 	return 0;
}