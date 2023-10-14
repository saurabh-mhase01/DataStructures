#include <iostream>
#include <string.h>
using namespace std;

class Product {
    
    int id;
    char name[20];
    int price;
    int quantity;
                   
    public:
    static float discount;   
    Product(){
        this->id =0;
        strcpy(this->name,"not given");
        this->price =0;
        this->quantity =0;
    }

    Product( int id,const char* name,int price ,int quantity){
        this->id =id;
        strcpy(this->name,name);
        this->price =price;
        this->quantity=quantity;
    }
    ~Product(){};
    //getters
   
    int getId(){
        return this->id;
    }
    char*  getName(){
        return this->name;
    }
    int getPrice(){
        return this->price;
    } 
    int getQuantity(){
        return this-> quantity;
    }

    //setters
    static void setDiscount(float d){
        discount=d;
    }
    void setId(int id){
         this->id=id;
    }
    void  setName(const char* name){
        strcpy( this->name,name);
    }
    void setPrice(int price){
        this->price=price;
    } 
    void setQuantity(int quantity){
        this->quantity=quantity;
    }

    void showProduct(){
        cout<<"Product Information is "<<endl;
        cout<<"Id : "<<this->id<<endl;
        cout<<"Name : "<<this->name<<endl;
        cout<<"Quantity : "<<this->quantity<<endl;
        cout<<"Price : "<<this->price<<endl;  
    }
    float getDiscount(){
        return this->price -(this->price*discount);
    }
};

float Product::discount =0.10;

int main(){
   
    Product b1( 1,"let us c",200,20);
    Product b2;
    Product b3;
    b1.showProduct();
    cout<<"discount is : "<<b1.getDiscount();
    return 0;
}
