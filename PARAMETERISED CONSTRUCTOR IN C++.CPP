//PARAMETERISED CONSTRUCTOR IN C++.CPP
#include<iostream>
using namespace std;
class Stu{
    public: 
            Stu(){//DEFAULT CONSTRUCTOR
                cout<<"THIS IS A DEFAULT CUNSTRUCTOR \n";
            }
            Stu(int a , int b)//PERAMETERISED CONSTRUCTOR
            {
                cout<<"\nthis is a parameterised constructor\n";
                cout<<a<<"\t"<<b;
            }
    };

int main()
{
    cout<<"this is a programme in which we have a constructor : \n";
    Stu s1;
    Stu s2(4,5);
    Stu s3(6,7);
    return 0;
}

/* DESCRIPTION :

the PERAMETERISED CUNSTRUCTOR is the one being made in which perameters are also passed 
and is activated when the object is being made in the class.

*/
