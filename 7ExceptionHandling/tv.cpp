#include <iostream>
#include<string.h>
using namespace std;
class  Tv{
    char name[20];
    int screensize;
    int module_no;
    int price;
    
    Tv(const char * name ,int screensize,int module_no,int price){
        strcpy(this->name,name);
        this->screensize = screensize;
        this->module_no = module_no;
        this->price = price; 
    }
    void display(){
        cout<<"Name : "<<this->name<<endl;
        cout<<"screensize : "<<this->screensize<<endl;
        cout<<"Module no : "<<this->module_no<<endl;
        cout<<"Price : "<<this->price<<endl;
    }
};

int main() {
    char name[20];
    int screensize;
    int module_no;
    int price;
    
    cout<<"Enter Name of Tv";
    cin>>name;

    // Tv tv1(name,screensize,module_no,price);
    while (true) {
        try {
            cout << "Enter Screen size: ";
            cin >> screensize;

            if (screensize < 16 || screensize > 42) {
                throw screensize;
            }
            break; 
        } catch (int a) {
            cout << "Invalid Screen size. Please enter a screen size between 16 and 42.\n";
        }
    }

    while (true) {
        try {
            cout << "Enter Module_no: ";
            cin >> module_no;

            if (module_no < 0 || module_no > 4) {
                throw module_no;
            }
            break; 
        } catch (int c) {
            cout << "Invalid Module_no. Please enter a value between 0 and 4.\n";
        }
    }

    while (true) {
        try {
            cout << "Enter Price: ";
            cin >> price;

            if (price < 0) {
                throw price;
            }
            break; 
        } catch (int c) {
            cout << "Invalid Price. Please enter a non-negative price.\n";
        }
    }

    

    cout << "Valid inputs: Screen size = " << screensize << ", Module_no = " << module_no << ", Price = " << price << endl;

    return 0;
}
