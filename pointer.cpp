#include<iostream>
using namespace std;
int main()
{
   int var = 20;
   int *ptr = &var;
   cout<<"value is "<<var<<endl;
   cout<<"adress of pointer is "<<ptr<<endl;
   cout<<*ptr;
   return 0;
};
// change vallue using pointer....................
#include<iostream>
using namespace std;
int main()
{
    int num = 20;
    int *ptr = &num;
    cout<<"original value is "<<num;

    *ptr = 50;
    cout<<"\nchanged value to "<<num;
};
//accessing array using pointer...............
#include<iostream>
using namespace std;
int main()
{
int arr[]={10,20,30,40,50};
int *ptr = arr;
for(int i = 0; i< 5; ++i){
cout<<"element at "<<i <<" indexing is "<<arr[i]<<endl;}
}
//pointer arithematic................
#include<iostream>
using namespace std;
int main()
{
    int a = 20, b = 10;
    int *p = &a,*q=&b;
     
     int sum = *p + *q;
     int diff = *p - *q;
     int mult = *p * *q;
     int div = *p / *q;

     cout<<"sum is "<<sum<<"\n";
     cout<<"diffrence is "<<diff<<"\n";
     cout<<" multiply is "<<mult <<"\ n";
     cout<<"diviso is "<<div;
     return 0;
}