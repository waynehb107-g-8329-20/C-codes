//code for checking the grade
#include <iostream>

using namespace std;

int main()
{
 int maths, english, french, sci, cre, avg;
 cout <<"enter marks for five units"<< endl;
 cin>>maths>>english>>french>>sci>>cre;
 avg=(maths+english+french+sci+cre)/5;
 if (avg>=70&&avg<=100)
 {
    cout<<"grade A"<<endl;
 }
else if (avg>=60&&avg<=69)
 {
    cout<<"grade B"<<endl;
 }
 else if(avg>=50&&avg<=59)
 {
    cout<<"grade C";
 }
 else if(avg>=40&&avg<49)
 {
     cout<<"grade D";
 }
 else if(avg<40)
 {
     cout<<"FAIL";
 }
return 0;
}
