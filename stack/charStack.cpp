#include <iostream>
using namespace std;
class Stack {
    int top,size;
    char * pstack;
    public:
    Stack(int size){
        this->size = size;
        top = -1;
        pstack= new char[size];

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
    bool push(char ele){
        if(isFull()){
            cout<<"\n Stack is full";
            return false;
        }else{
            pstack[++top]=ele;
            return true;
        }
    }
    bool pop(char &x){
        if(isEmpty()){
            return false;
        }else{
            x = pstack[top--];
            return true;
        }
    }
    bool peek(char &t){
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

    string s1;
    cout<<"Enter a string to check palindrom or not"<<endl;
    cin>> s1; 

    int len = s1.length(); 

    Stack stack1(len);

    for(int i =0;i<len;i++){
        stack1.push(s1[i]);
    }
   
    string s2; 

    char ele;
    while(stack1.pop(ele)) {
            s2 += ele;
    }

    if(s1==s2){
        cout<<"String is palindrom";

    }else{
        cout<<" not palindrom";
    }
    
}