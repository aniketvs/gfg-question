#include<bits/stdc++.h>
using namespace std;
void printspell(int n){
     if (n==0)
    {
     return;
    }
    
     printspell(n/10);
    int k=n%10;
    if(k==0){
        cout<<" zero ";
        return;
    }
    if(k==1){
        cout<<" one ";
        return;
    }
     if(k==2){
        cout<<" two ";
        return;
    }
     if(k==3){
        cout<<" three ";
        return;
    }
     if(k==4){
        cout<<" four ";
        return;
    }
    if(k==5){
        cout<<" five ";
        return;
    }
     if(k==6){
        cout<<" six ";
        return;
    } if(k==7){
        cout<<" seven  ";
        return;
    }
     if(k==8){
        cout<<" eight ";
        return;
    } if(k==9){
        cout<<" nine ";
        return;
    }
   
   
    
  





}

int main(){
   int n, reversed_number = 0, remainder;
    cin>>n;
  
    

    printspell(n);

}