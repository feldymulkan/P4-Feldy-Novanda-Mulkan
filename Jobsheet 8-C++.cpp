#include <iostream>
using namespace std;
int main ()
{
int x[5],i;
cout<<"Akhiran NIM : 5\n";
for(i=1;i<=5;i++)
{
cout<<"Masukkan nim "<<i<<" : ";
cin>>x[i];
}
cout<<endl;
for(i=1;i<=5;i++)
{
cout<<"angka ke :  "<<i<<" = "<<x[i]<<endl;
} cout<<endl;

return 0;
}
