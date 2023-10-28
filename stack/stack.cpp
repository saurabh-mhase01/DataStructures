#include <iostream>
using namespace std;
class Stack {
    int top,size;
    int * pstack;
    public:
    Stack(int size){
        this->size = size;
        top = -1;
        pstack= new int[size];

    }
    bool isEmpty(){
        if(top==-1){
            return true;
        }else{
            return false;
        }
    }
    bool isFull(){
        if(top==size-1){
            return true;
        }else{
            return false;
        }
    }
    bool push(int ele){
        if(isFull()){
            cout<<"\n Stack is full";
            return false;
        }else{
            pstack[++top]=ele;
            return true;
        }
    }
    bool pop(int &x){
        if(isEmpty()){
            return false;
        }else{
            x = pstack[top--];
            return true;
        }
    }
    bool peek(int &t){
        if(isEmpty()){
            return false;
        }else{
            t = pstack[top];
            return true;
        }
    }
    void display(){
        if(isEmpty()){
            cout<<"\n Stack is empty";
        }else{
            cout<<endl;
            for(int i=top;i>=0;i--){
                cout<<"\t| "<<pstack[i]<<" |\n";
            }
            cout<<"\t------";
        }
    }
    ~Stack(){
        if(pstack!=NULL){
            delete[] pstack;
        }
    }    
};

int main(){
    int choice =0;
    Stack st(5);
    while(choice !=5){
       const char* a1 = "\n\t\t1.Push\n\t\t2.pop\n\t\t3.peek\n\t\t4.Display\n\t\t5.Exit\nEnter your choice :";
        cout<<a1;
        cin>>choice;
        switch(choice){
            case 1:
            {
                int ele;
                cout<<"\nEnter an element :";
                cin>>ele;
                if(st.push(ele)){
                    cout<<"\nSuccess";
                }
            }
            break;
            case 2:
            {
                int ele;
                if(st.pop(ele)){
                    cout<<"\nSuccess : "<<ele<<" is Popped....";
                }else{
                    cout<<"\nStack is empty";
                }
            }
            break;
            case 3:
            {
                int ele;
                if(st.peek(ele)){
                    cout<<"\nSuccess, "<<ele<<" is on top...";
                }else{
                    cout<<"\nStack is empty";
                }
            }
            break;
            case 4:{
                st.display();
            }
            break;
            case 5:{
                choice = 5;
                break;
            }
        }
    }
}