#include <iostream>
using namespace std;
class shopitem{
    int id;
    float price;
    public:
      void setdata(){
        cout<<"entre the item "<<"id: "<<endl;
        cin>>id;
        cout<<"entre the item price: "<<endl;
        cin>>price;
      }
      void getdata(){
        cout<<"the id of the item is: "<<id<<endl;
        cout<<"the price of the item is: "<<price<<endl;
      }
};
int main() {
    int size;
    cout<<"the no. of items you have: "<<endl;
    cin>>size;
    shopitem *ptr= new shopitem[size];
    for(int i=0; i<size; i++){
        (ptr+i)->setdata();
    }
     for(int i=0; i<size; i++){   
        (ptr+i)->getdata();
     }
    return 0;
}