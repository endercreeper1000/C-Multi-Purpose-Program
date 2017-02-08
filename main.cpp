#include <iostream>
#include <cmath>
using namespace std;
 
 
 
int f;
int ce;
int con;
 
 
void convert() {
 
    double ccon,f,c,fcon;
 
    cout<< " Enter the fahrenheit degree in Double "<<endl;
    cin>>f;
    fcon = (((f - 32) * 5) / 9);
    cout<<" the celsius degrees equivalent to given fahrenheit is " << fcon <<endl;
 
}
 
void pot() {
    int a;
    int b;
    int c;
    cout << "Enter the smallest leg. \n";
    cin >> a;
    cout << "enter the other leg\n";
    cin >> b;
    c = sqrt((a*a) + (b*b));
    cout << "This is the hypotnuse\n" << c << endl;
}
 
int main()
{
    convert();
    return 0;
}
