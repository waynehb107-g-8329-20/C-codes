//single inheritance program
#include<iostream>
using namespace std;
class king{
    public:
    void land (){
        cout<<"I have a castle"<<endl;
    }
    void car(){
        cout<<"I own land"<<endl;
    }
};
class prince: public king{
    public:
    void son(){
        cout<<"I have two sons!"<<endl;
    }
};
int main(){
prince queen();
queen.castle()
queen.land();
queen.son();
return 0;
}
