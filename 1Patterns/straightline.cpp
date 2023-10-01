#include <iostream>
using namespace std;

int main(){

    // * * * * *
    for(int i =0;i<5;i++){

        cout<<"* ";
    }cout<<endl;

    //1 * 3 * 5 * 
    for(int i =1;i<=6;i++){

        if(i%2==0){
            cout<<"* ";
        }else{
            cout<<i<<" ";
        }
    }cout<<endl;

    // * * * * *
    // * * * * *
    // * * * * *
    // * * * * *
    // * * * * *
    for(int i =0;i<=5;i++){
        for(int j =0;j<5;j++){
            cout<<"* ";
        }
        cout<<"\n";
    }cout<<endl;

    // 1 2 3 4 5 
    // 1 2 3 4 5
    // 1 2 3 4 5
    // 1 2 3 4 5
    // 1 2 3 4 5

    for(int i =1;i<=5;i++){
        for(int j =1;j<=5;j++){
            cout<<j<<" ";
        }
        cout<<"\n";
    }cout<<endl;
    

    // 1 1 1 1 1 
    // 2 2 2 2 2
    // 3 3 3 3 3
    // 4 4 4 4 4
    // 5 5 5 5 5
    for(int i =1;i<=5;i++){
        for(int j =1;j<=5;j++){
            cout<<i<<" ";
        }
        cout<<"\n";
    }cout<<endl;

    // 5 5 5 5 5 
    // 4 4 4 4 4
    // 3 3 3 3 3
    // 2 2 2 2 2
    // 1 1 1 1 1
    for(int i =5;i>=1;i--){
        for(int j =1;j<=5;j++){
            cout<<i<<" ";
        }
        cout<<"\n";
    }cout<<endl;


    // 5 4 3 2 1 
    // 5 4 3 2 1
    // 5 4 3 2 1
    // 5 4 3 2 1
    // 5 4 3 2 1
     for(int i =5;i>=1;i--){
        for(int j =5;j>=1;j--){
            cout<<j<<" ";
        }
        cout<<"\n";
    }cout<<endl;

    // 1 2 3 4 5 
    // * * * * *
    // 1 2 3 4 5
    // * * * * *
    // 1 2 3 4 5
    for(int i =1;i<=5;i++){
        for(int j =1;j<=5;j++){
            if(i%2!=0){
                cout<<j<<" ";
            }else{
                cout<<"* ";
            }
        }
        cout<<"\n";
    }cout<<endl;


    // 5 4 3 2 1 
    // 1 2 3 4 5 
    // 5 4 3 2 1 
    // 1 2 3 4 5 
    // 5 4 3 2 1 
    // 1 2 3 4 5
    for(int i =1;i<=6;i++){
            if(i%2==0){
                for(int j =1;j<=5;j++){
                    cout<<j<<" ";
                }
            }else{
                for(int j =5;j>=1;j--){
                    cout<<j<<" ";
                }
            }
        
        cout<<"\n";
    }cout<<endl;

    // 1 2 3 4 5 
    // 6 7 8 9 10
    // 11 12 13 14 15
    // 16 17 18 19 20
    // 21 22 23 24 25
    int count =1;
    for(int i =1;i<=5;i++){
        for(int j =1;j<=5;j++){
            cout<<count<<" ";
            count ++;
        }
        cout<<"\n";
    }cout<<endl;
    // A B C D E F 
    // A B C D E F
    // A B C D E F
    // A B C D E F
    // A B C D E F
    for(int i=1;i<=5;i++){
        for(int j=65;j<=70;j++){
            cout<<(char)j<<" ";
        }
        cout<<"\n";
    }cout<<endl;
    // A A A A A 
    // B B B B B
    // C C C C C
    // D D D D D
    // E E E E E
    // F F F F F
    for(int j=65;j<=70;j++ ){
        for(int i=1;i<=5;i++){
            cout<<(char)j<<" ";
        }
        cout<<"\n";
    }
    cout<<endl;
    // A B C D E 
    // F G H I J
    // K L M N O
    // P Q R S T
    // U V W X Y
    int count =65;
    for(int i =1;i<=5;i++){
        for(int j =1;j<=5;j++){
            cout<<(char)count<<" ";
            count ++;
        }
        cout<<"\n";
    }cout<<endl;

    // A B C D E F 
    // B C D E F G
    // C D E F G H
    // D E F G H I
    // E F G H I J
    // F G H I J K
    
    for(int i =65;i<=70;i++){
        for(int j =i;j<=i+5;j++){
            cout<<(char)j<<" ";
        }
        cout<<"\n";
    }cout<<endl;


    // 1 2 3 4 5 6 
    // 2 3 4 5 6 7
    // 3 4 5 6 7 8
    // 4 5 6 7 8 9
    // 5 6 7 8 9 10
    for(int i =1;i<=5;i++){
        for(int j =i;j<=i+5;j++){
            cout<<j<<" ";
        }
        cout<<"\n";
    }cout<<endl;
    

}