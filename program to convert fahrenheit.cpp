//program to covert fahrenheit
#include <iostream>

using namespace std;
float d(int fahrenheit);
int main()
{
    int fahrenheit;
    float celcius;
    cout<<"enter fahrenheit" <<endl;
    cin>> fahrenheit;
    celcius=d(fahrenheit);
    cout<<"celcius is"<< celcius<<endl;

return 0;
}
float d(int fahrenheit){
     float celcius;
     celcius=0.5555*(fahrenheit-32);
     return celcius;
     }
