#include<iostream.h>
#include<math.h>
using namespace std;

int main()
{
    float p,r,t,ci;

    cout<<"Enter Principle (Amount): ";
    cin>>p;
    cout<<"\n Enter Rate of Interest: ";
    cin>>r;
    cout<<"\n Enter Time Period: ";
    cin>>t;

    ci = p*pow((1+r/100),t);

    cout<<"\nThe Calculated Compound Interest is = "<<ci<<"\n";

    return 0;
}
