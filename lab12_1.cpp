#include<iostream>  
#include<cstdlib>
#include<ctime>

 using namespace std;


void Gradefortune(){

    int i = rand()%9 ;
    if(i == 0){
        cout << "You will get A in this 261102." ;    
    }else if(i == 1){
        cout << "You will get B+ in this 261102." ;
    }else if(i == 2){
        cout << "You will get B in this 261102." ;
    }else if(i == 3){
        cout << "You will get C+ in this 261102." ;
    }else if(i == 4){
        cout << "You will get C in this 261102." ;
    }else if(i == 5){
        cout << "You will get D+ in this 261102." ;
    }else if(i == 6){
        cout << "You will get D in this 261102." ;
    }else if(i == 7){
        cout << "You will get F in this 261102." ;
    }else{
        cout << "You will get W in this 261102." ;
    }


 }
 

int main(){

srand(time(0)) ;

    cout << "Press Enter 3 times to reveal your future.";
    cin.get() ;
    cin.get() ;
    cin.get() ;
    Gradefortune() ;


    return 0 ;
 }  
   
   
   
   
   
    