#include <iostream>
using namespace std;

int main(){
    // * 
    // * *
    // * * *
    // * * * *
    // * * * * *
    for(int i =1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
    cout<<endl;

    // * * * * *
    // * * * *
    // * * *
    // * *
    // * 
    for(int i =5;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<"\n";
    }

    cout<<endl;
//second method for reverse 
    // for(int i=1;i<=5;i++){
    //     for(int j=1;j<=6-i;j++){
    //         cout<<"* ";
    //     }
    //     cout<<"\n";
    // }


    // 1 
    // 1 2
    // 1 2 3
    // 1 2 3 4
    // 1 2 3 4 5

    for(int i =1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<"\n";
    }cout<<endl;

    // * 
    // 1 2
    // * * *
    // 1 2 3 4
    // * * * * *
    for(int i =1;i<=5;i++){
        for(int j=1;j<=i;j++){
            if(i%2==0){
                cout<<j<<" ";
            }else{
                cout<<"* ";
            }
        }
        cout<<"\n";
    }cout<<endl;

    // 1 2 3 4 5 
    // 1 2 3 4
    // 1 2 3
    // 1 2
    // 1
    for(int i=1;i<=5;i++){
        for(int j=1;j<=6-i;j++){
            cout<<j<<" ";
        }
        cout<<"\n";
    }cout<<endl;

    // 5 
    // 5 4
    // 5 4 3
    // 5 4 3 2
    // 5 4 3 2 1
    for(int i =1;i<=5;i++){
        for(int j=5;j>=6-i;j--){
            cout<<j<<" ";
        }
        cout<<"\n";
    }cout<<endl;

    // 1 
    // 2 3
    // 4 5 6
    // 7 8 9 10
    // 11 12 13 14 15
    int count =1;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<count++<<" ";
        }
        cout<<"\n";
    }cout<<endl;

    // 1 
    // 2 1
    // 3 2 1
    // 4 3 2 1
    // 5 4 3 2 1
    for(int i =0;i<=5;i++){
        for(int j =i;j>=1;j--){
            cout<<j<<" ";
        }
        cout<<"\n";
    }cout<<endl;

    // A 
    // A B
    // A B C
    // A B C D
    // A B C D E
    // A B C D E F
    for(int i =65;i<=70;i++){
        for(int j =65;j<=i;j++){
            cout<<(char)j<<" ";
        }
        cout<<"\n";
    }cout<<endl;

    // A 
    // B B
    // C C C
    // D D D D
    // E E E E E
    // F F F F F F
    for(int i =65;i<=70;i++){
        for(int j =65;j<=i;j++){
            cout<<(char)i<<" ";
        }
        cout<<"\n";
    }cout<<endl;

    // A 
    // B C
    // C D E
    // D E F G
    // E F G H I
    // F G H I J K
    for(int i =65;i<=70;i++){
        for(int j =i;j<=i+(i-65);j++){
            cout<<(char)j<<" ";
        }
        cout<<"\n";
    }cout<<endl;

    

}