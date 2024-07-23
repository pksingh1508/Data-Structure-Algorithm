#include<iostream>
using namespace std;
int main(){

         int a,b;
         cout<<"Enter the value of a : "<<endl;
         cin>>a;
         cout<<"Enter the value of b : "<<endl;
         cin>>b;

         char op;
         cout<<"Enter the Operation you want to perform "<<endl;
         cin>>op;

         switch (op)
         {
         case '+':
                    cout<<"The sum of a and b is : "<<a+b;
                    break;

        case '-':
                    cout<<"The difference of a and b is : "<<a-b;
                    break;

        case '*':
                    cout<<"The product of a and b is : "<<a*b;
                    break;


        case '/':
                    cout<<"The division of a and b is : "<<a/b;
                    break;
         
         default:
                    cout<<"Invalid input"<<endl;
            break;
         }

return 0;
}