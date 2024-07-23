#include<iostream>
using namespace std;
int main(){

        int n,rem;
        cout<<"Enter the money : ";
        cin>>n;

        int i = 1;

            switch(i)
            {
                case 1:
                        rem = n/100;
                        cout<<"The Rs 100 note require :"<< rem << endl;
                       // break;

                case 2:
                        n = n - rem*100;
                        rem = n/50;
                        cout<<"The Rs 50 note require :"<< rem << endl;
                       // break;

                case 3:
                        n = n - rem*50;
                        rem = n/20;
                        cout<<"The Rs 20 note require :"<< rem << endl;
                        //break;

                case 4:
                         n = n - rem*20;
                        cout<<"The Rs 1 note require :"<< n << endl;
                        break; 

                                               
            }

return 0;
}