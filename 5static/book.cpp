#include <iostream>
#include <string.h>
using namespace std;

class Book {
    
    int id;
    char name[20];
    int price;
    char author[20];

    public:
    static int count;
    Book(){
        this->id =0;
        strcpy(this->name,"not given");
        this->price =0;
        strcpy(this->author,"not Mention");
        count = count+1;
    }

    Book( int id,const char* name,int price ,const char* author){
        this->id =id;
        strcpy(this->name,name);
        this->price =price;
        strcpy(this->author,author);
        count = count+1;
    }
    ~Book(){};
    //getters
    static int getCount(){
        return count;
    }
    int getId(){
        return this->id;
    }
    char*  getName(){
        return this->name;
    }
    int getPrice(){
        return this->price;
    } 
    char* getAuthor(){
        return this-> author;
    }

    //setters
    static void setCount(int c){
        count=c;
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
    void setAuthor(const char * author){
         strcpy(this->author,author);
    }

    void showBook(){
        cout<<"Book Information is "<<endl;
        cout<<"Id : "<<this->id<<endl;
        cout<<"Name : "<<this->name<<endl;
        cout<<"Author : "<<this->author<<endl;
        cout<<"Price : "<<this->price<<endl;  
    }
};

int Book::count=0;

int main(){
   
    Book b1( 1,"let us c",200,"name");
    Book b2;
    Book b3;
    b1.showBook();
    cout<<"Count is : "<<Book::count<<endl;
    return 0;
}
