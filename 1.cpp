#include <iostream>
using namespace std;

int main(){
int a,b,s;
cin>>a>>b;
s=a+b;
cout<<s;
}

///////////////////////////////////////////////////////////////////////////////////



#include <iostream>
using namespace std;

int sum(int a, int b){
return b ? sum(++a,--b) : a;
}

int main(){
int a,b,s;
cin>>a>>b;
s=sum(a,b);
cout<<s;
}
