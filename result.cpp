#include<iostream>
using namespace std;
int main()
{
    int ben, eng, sst, math, sci;
    float sum, avg, cgpa, percent;
    char gb, ge, gsst, gm, gsci;
    cout<<"Enter Marks of Bengali:"<<"\n";
    cin>>ben;
    cout<<"Enter Marks of English:"<<"\n";
    cin>>eng;
    cout<<"Enter Marks of Social Studies:"<<"\n";
    cin>>sst;
    cout<<"Enter Marks of Mathemetics:"<<"\n";
    cin>>math;
    cout<<"Enter Marks of Science:"<<"\n";
    cin>>sci;
    if(ben>=80)
    {
        gb = 'A';
    }
    else if(ben<80 && ben>=60)
    {
        gb = 'B';
    }
    else
    {
        gb = 'C';
    }
     if(eng>=80)
    {
        ge = 'A';
    }
    else if(eng<80 && eng>=60)
    {
        ge = 'B';
    }
    else
    {
        ge = 'C';
    }
    if(math>=80)
    {
        gm = 'A';
    }
    else if(math<80 && math>=60)
    {
        gm = 'B';
    }
    else
    {
        gm = 'C';
    }
    if(sst>=80)
    {
        gsst = 'A';
    }
    else if(sst<80 && sst>=60)
    {
        gsst = 'B';
    }
    else
    {
        gsst = 'C';
    }
    if(sci>=80)
    {
        gsci = 'A';
    }
    else if(sci<80 && sci>=60)
    {
        gsci = 'B';
    }
    else
    {
        gsci = 'C';
    }    
    sum = ben+eng+sst+math+sci;
    avg = sum/5;
    percent = (sum/500)*100;
    cgpa = percent/5;
    cout<<"\t"<<"result"<<"\t"<<"\n";
    cout<<"Subject"<<"\t"<<"\t"<<"\t"<<"Marks obtained"<<"\t"<<"\t"<<"Grade"<<"\n";
    cout<<"Bengali"<<"\t"<<"\t"<<"\t"<<ben<<"\t"<<"\t"<<"\t"<<gb<<"\n";
    cout<<"English"<<"\t"<<"\t"<<"\t"<<eng<<"\t"<<"\t"<<"\t"<<ge<<"\n";
    cout<<"Mathemetics "<<"\t"<<"\t"<<math<<"\t"<<"\t"<<"\t"<<gm<<"\n";
    cout<<"SST"<<"\t"<<"\t"<<"\t"<<sst<<"\t"<<"\t"<<"\t"<<gsst<<"\n";
    cout<<"Science"<<"\t"<<"\t"<<"\t"<<sci<<"\t"<<"\t"<<"\t"<<gsci<<"\n";
    cout<<"____________________________________________________________"<<"\n";
    cout<<"Total out of 500 "<<"\t"<<sum<<"\n";
    cout<<"Average marks: "<<"\t"<<avg<<"\n";
    cout<<"Percentage of marks obtained: "<<"\t"<<percent<<"%"<<"\n";
    cout<<"CGPA: "<<"\t"<<cgpa<<"\n";
}