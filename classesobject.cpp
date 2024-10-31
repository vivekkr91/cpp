#include<iostream>
using namespace std;
class person{
    public:
    string name;
    int age;
    
        void introduce()
    {
        cout<<"my name is "<< name <<" and i am "<< age <<" year old"<< endl;
    }
};
int main()
{
    person person1;

    person1.name= "vivek";
    person1.age= 17;


    person1.introduce();
    return 0;
}