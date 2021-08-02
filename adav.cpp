#include<iostream>
using namespace std;
int main()
{
    int i, n, j, sum=0, avg;
    cout<<"How many numbers do you want to add?"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<"enter the no.: "<<endl;
        cin>>j;
        sum = sum+j;
    }
    avg = sum/n;
    cout<<"Sum = "<<sum<<"\t"<<"Average = "<<avg<<endl;
    return 0;
}