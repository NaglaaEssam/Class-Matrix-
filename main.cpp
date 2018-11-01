#include <iostream>
#include "Matrix.h"

using namespace std;
int main()
{
    int x,y;
    Matrix mat1(0,0), mat2(0,0), mat3(0,0),mat4(0,0),mat5(0,0);
    cout<<"enter your mat1"<<endl;
    cin>>mat1;
    cout<<"enter your mat2"<<endl;
    cin>>mat2;
    cout<<"enter your mat3"<<endl;
    cin>>mat3;
    cout << mat1 ;
    cout<<"             ************    "<<endl;
    ++mat1;
    cout << mat1 ;
    cout<<"             ************    "<<endl;
    mat1=mat1+3;
    cout << mat1 ;
    cout<<"             ************    "<<endl;
    cout << mat2 ;
    cout<<"             ************    "<<endl;
    cout << mat3 ;
    cout<<"             ************    "<<endl;
    mat4=mat2+mat3;
    cout << (mat4) ;
    cout<<"             ************    "<<endl;
    mat4=mat3+mat3;
    cout << (mat4) ;
    cout<<"             ************    "<<endl;
    mat1+=mat2;
    cout<<mat1;
    cout<<"             ************    "<<endl;
    mat5=mat1*mat2;
    cout<<mat5;
    cout<<"             ************    "<<endl;
    cout<<(mat1+5);
    cout<<"             ************    "<<endl;
    cout <<  (mat3 == mat2) <<endl ;
    cout<<"             ************    "<<endl;
    cout << ( mat1 != mat2 )<<endl ;
    cout<<"             ************    "<<endl;
    cout << mat1.isSymetric()<<endl ;
    cout<<"             ************    "<<endl;
    cout << mat1.isIdentity()<<endl;
    cout<<"             ************    "<<endl;
    cout<< mat1.transpose()<<endl ;
    cout<<"             ************    "<<endl;
    return 0;
}
