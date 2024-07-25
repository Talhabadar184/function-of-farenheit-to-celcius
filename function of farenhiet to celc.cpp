#include<iostream>
double farenheit_to_celcius(double farenheit,double celcius)
   {
   	celcius=(farenheit-32)*5/9;
   	return celcius;
   }
using namespace std;
int main(){
    double farenheit,celcius;
    cout<<"Enter a temperature in farenheit: "<<endl;
    cin>>farenheit;
    celcius=farenheit_to_celcius(farenheit,celcius);
    cout<<farenheit<<"  degree farenheit to "<<celcius<<"  degree celcius: ";
    return 0;
}
