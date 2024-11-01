#include<iostream>
using namespace std;
//creatig a class
class Room{

public:
double length;
double breadth;
double calculatearea()
{
    return length * breadth;
}
double calculateperimeter()
{
    return (length + breadth)*2;
}

};
int main()
{
    Room room1;
    cout << "enter length value :-";
    cin >> room1.length;
    cout << "enter breadth value:-";
    cin >> room1.breadth;
    cout<< "area of rectangle is :- "<< room1.calculatearea() << endl;
    cout<< " perimeter of rectangle is :- "<< room1.calculateperimeter() << endl;
    return 0;
};