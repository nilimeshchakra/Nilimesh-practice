#include<iostream>
using namespace std;
int main()
{
    int ben, eng, sst, math, sci;
    float sum, avg, cgpa, percent;
    cout<<"Enter Marks of Bengali:"<<"\n";
    cin>>ben;
    cout<<"Enter Marks of English:"<<"\n";
    cin>>eng;
    cout<<"Enter Marks of Social Studies:"<<"\n";
    cin>>sst;
    cout<<"Enter Marks of Mathemetic:"<<"\n";
    cin>>math;
    cout<<"Enter Marks of Science:"<<"\n";
    cin>>sci;
    sum = ben+eng+sst+math+sci;
    avg = sum/5;
    percent = (sum/500)*100;
    cgpa = percent/5;
    cout<<"\t"<<"result"<<"\t"<<"\n";
    cout<<"Subject"<<"\t"<<"\t"<<"\t"<<"Marks obtained"<<"\n";
    cout<<"Bengali"<<"\t"<<"\t"<<"\t"<<ben<<"\n";
    cout<<"English"<<"\t"<<"\t"<<"\t"<<eng<<"\n";
    cout<<"Mathemetics "<<"\t"<<"\t"<<math<<"\n";
    cout<<"SST"<<"\t"<<"\t"<<"\t"<<sst<<"\n";
    cout<<"Science"<<"\t"<<"\t"<<"\t"<<sci<<"\n";
    cout<<"________________________________________"<<"\n";
    cout<<"Total out of 500 "<<"\t"<<sum<<"\n";
    cout<<"Average marks: "<<"\t"<<avg<<"\n";
    cout<<"Percentage of marks obtained: "<<"\t"<<percent<<"%"<<"\n";
    cout<<"CGPA: "<<"\t"<<cgpa<<"\n";
}