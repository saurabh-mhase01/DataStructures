#include <iostream>
#include <string>
using namespace std;

class Shirt {
private:
    int sid;
    string sname;
    string type;
    double price;
    string size;
    

public:
    static double change;

    Shirt(int id, const string& name, const string& shirtType, double shirtPrice, const string& shirtSize)
        : sid(id), sname(name), type(shirtType), size(shirtSize) {}

    Shirt()
        : sid(0), sname("Default"), type("Formal"), price(0.0), size("Small") {}


    ~Shirt() {
        cout << "Shirt with ID " << sid << " is destroyed." << endl;
    }


    void ShowShirt() {
        cout << "Shirt Name: " << sname << endl;
        cout << "Shirt ID: " << sid << endl;
        cout << "Shirt Type: " << type << endl;
        cout << "Shirt Size: " << size << endl;
        cout << "Shirt Price: $" << price << endl;
    }
   
    double finalPrice(){
        if (size == "Small") price =price+(change*0);
        else if (size == "Medium") price = price+(change*1);
        else if (size == "Large") price = price+(change*2);
        else if (size == "XLarge") price = price+(change*3);
        else price = price+(change*0);
        return price;
    }
};

double Shirt::change=0.10;
int main() {
    
    Shirt shirt1(1, "Blue Shirt", "Formal", 1000, "Small");
    Shirt shirt2(2, "Red Shirt", "Casual", 1500, "Medium");
    shirt1.ShowShirt();
    printf("%d",shirt1.finalPrice());
    shirt2.ShowShirt();
    printf("%d",shirt2.finalPrice());
    return 0;
}
