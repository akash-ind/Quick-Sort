#include<iostream>
#include"quickSort.cpp"
#include"dataClass.cpp"
#include<time.h>
#include<stdlib.h>
using namespace std;
int main()
{
    Data a[10];
    int i=0;
    cout<<"generating random numbers"<<endl;
    srand(time(NULL));
    while(i!=10)
    {
        a[i].i=rand()%1000;
        a[i].j=rand()%1000;
        i++;
    }
    for(int i=0;i<10;i++)
    {
        cout<<"{"<<a[i].i<<" "<<a[i].j<<"}"<<" ";
    }
    Data::comparator c;
    c.compare='i';
    QuickSort::sort(a,c);
    cout<<sizeof(a)/sizeof(a[0])<<endl;
    for(int k=0;k<10;k++)
    {
        cout<<"{"<<a[k].i<<" "<<a[k].j<<"}"<<" ";
    }
}

