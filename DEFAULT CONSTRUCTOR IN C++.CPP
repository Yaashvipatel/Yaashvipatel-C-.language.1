//DEFAULT CONSTRUCTOR IN C++.CPP
#include<iostream>
using namespace std;
class Stu{
    public: 
            Stu(){
                cout<<"hi\n";
            }
    
};

int main()
{
    cout<<"this is a programme in which we have a constructor : \n";
    Stu s1;
    Stu s2;
    Stu s3;
    return 0;
}

/* DESCRIPTION :

THE CONSTOR HERE IS THE PUBLIC FUCNTION WHICH HAS THE NAME SAME AS THE CLASS IN WHICH IT IS DECLARED 
IT IS ACTIVATED ONCE AN OBJECT IS BEING MADE IN THE CLASS .
HERE S1 S2 AND S3 ARE THE OBJECTS MADE ,AND ONCE THEY ARE MADE ... THE COMMAND GOES TO THE CUNSTRUCTOR 
AND SO , "HI" IS PRINTED THREE TIMES !!

*/
