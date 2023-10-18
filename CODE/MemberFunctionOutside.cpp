#include <bits/stdc++.h> 
using namespace std;
class item{
    private:
    int codeno;
    float price;
    int qty;
    public:
    void show();
};
void item :: show(){
    codeno=121;
    price=200.50;
    qty=20;
    cout<<"Codeno = "<<codeno<<endl;
    cout<<"Price = "<<price<<endl;
    cout<<"Quantity = "<<qty<<endl;
}
int main(){
    item i;
    i.show();
    return 0;
}