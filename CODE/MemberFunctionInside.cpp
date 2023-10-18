#include <bits/stdc++.h> 
using namespace std; 
class item{
    private:              //private section
    int codeno;
    float price;
    int qty;
    public:               //public section
    void show(){
        codeno=125;
        price=200;
        qty=50;
        cout<<"Codeno = "<<codeno<<endl;
        cout<<"Price = "<<price<<endl;
        cout<<"Quantity = "<<qty<<endl;
    }
};
int main(){
    item i;               //Obejct declaration
    i.show();
    return 0;
}
