#include<iostream>
using namespace std;

int main()
{
int n;
cin>>n;

while(n!=1){

if(n%2==0){
n=n/2;
cout<<n<<" ";
continue;
}
if(n%2==1){
n=3*n+1;
cout<<n<<" ";
}
}
cout<<endl;
}
