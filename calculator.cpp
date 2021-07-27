#include<iostream>
#include<limits>
using namespace std;
int main()
{
    int n= std::numeric_limits<int>::max(); 
    int i;
    float a, b, c;
    char o, q;
    for(i=1;i<=n;i++)
    {
        cout<<"Want to use the calculator?"<<"\n"<<"Press y for yes and n for no.";
        cin>>q;
        if(q=='y')
        {
            cout<<"Enter the first number:"<<"\n";
            cin>>a;
            cout<<"Enter the second number"<<"\n";
            cin>>b;
            cout<<"Enter + for addition"<<"\n"<<"Enter - for subtraction"<<"\n"<<"Enter * for multiplication"<<"\n"<<"Enter / for division"<<"\n";
            cin>>o;
            if(o=='+')
            {
                c=a+b;
                cout<<c;
            }
            else if (o=='-')
            {
                c=a-b;
                cout<<c;
            }
            else if(o=='*')
            {
                c=a*b;
                cout<<c;
            }
            else
            {
                c=a/b;
                cout<<c;
            }

            return 0;
        }
        else
        {
            break;
        }
    }
   
}