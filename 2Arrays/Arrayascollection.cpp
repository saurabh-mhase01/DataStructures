#include<iostream>
using namespace std;

class MyArray{
    int* ptr;
    int size;
    int index;

    public:
    MyArray(int size){
        this->size = size;
        ptr = new int[size];
        index = -1;
    }
    bool addElement(int ele){
        if(index<=size){
            ptr[++index]=ele;
            return true;
        }else{
            cout<<"\n Memory block full";
            return false;
        }
        
    }
    int searchElement(int ele){
        if(index==-1){
            cout<<"\nNo elements to search";
            
        }else{
            for(int i =0;i<=index;i++){
                if(ele == ptr[i]){
                    if(ele == ptr[i]){
                        return i;
                    }
                }
            }
            return 0;
        }
    }

    bool deleteElement(int ele){
        if(index==-1){
            cout<<"\nNo elements to delete";
            return false;
        }else{
            int i= searchElement(ele);
            cout<<"\n"<<i<<index;
            
            while(i<index){
                ptr[i]=ptr[i+1];
                i++;
            }
            index--;
            
        }
    }
    void display(){
        if(index==-1){
            cout<<"\n Array is empty";
        }else{
            for(int i =0;i<size;i++){
                cout<<ptr[i]<<"\t";
            }
        }
        
    }
};

int main(){
    MyArray a1(1);
    const char* str ={"\n\t\t1.AddElement\n\t\t2.Display all elements\n\t\t3Search element\n\t\t10exit\nEnter yout choice :"};
    int choice =0;
   
    while(choice!=10){
        cout<<str;
        cin>>choice;
        switch(choice){
            case 1:{
                int ele;
                cout<<"\nEnter the element";
                cin>>ele;
                if(a1.addElement(ele)){
                    cout<<"\nSuccess";
                    
                }
                else{
                    cout<<"\nFailed";
                }
                
            }break;
            case 2:{
                a1.display();
            }
            break;
            case 3:{
                int ele;
                cout<<"\nEnter the element you want to search";
                cin>>ele;
                if(a1.searchElement(ele)){
                    cout<<"\nSuccess";
                }else{
                    cout<<"\nFailed";
                }
            }
            case 4:{
                int ele ;
                cout<<"\nEnter the element you wnat to delete";
                cin>>ele;
                if(a1.deleteElement(ele)){
                    cout<<"\nsuccess";

                }else{
                    cout<<"\nFailed";

                }
                break;
            }
            case 10:{
                choice == 10;
                break;
            }
            

        }
        
    }
}