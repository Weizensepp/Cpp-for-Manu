
#include <iostream>

using namespace std;

int main(){
    int a,b,buffer;

    cout<<"Input first Number: ";
    cin>>a;
    cout<<"Input second Number: ";
    cin>>b;

    buffer = a;
    a = b;
    b = buffer;

    cout<<"After swapping first Number is: "<<a<< "\n";
    cout<<"After swapping second Number is: "<<b<<"\n";      
    cout<<endl;

    return 0;
}