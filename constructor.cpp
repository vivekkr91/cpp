#include<iostream>
using namespace std;
class wall{
public:
    double length;
    wall()
    {
        cout << "enter length size:- ";
        cin>>length;
        cout<<"constructig wall ....\n";
        cout<<"lenght of wall is "<<length<< endl;   }

};
int main(){
wall wall1;
return 0;
};
