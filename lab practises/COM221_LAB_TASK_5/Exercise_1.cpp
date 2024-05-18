#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main(){
    cout<<"This program checks the user's subscription to a service. The only Values allowable are between 5 and 10. \n \n";
    int daysUntilExpiration; //declaration of the variable daysUntilExpiration
    
    /*If statements*/
    srand(time(0));
    for(int i = 0; i < 12; i++)
    daysUntilExpiration = rand() % 12;   //generates random number between 0 and 11. 

    if(daysUntilExpiration <= 10){
        cout<<"Your subscription will expire soon. Renew now! \n";
    }
    else if (daysUntilExpiration <= 5){
        cout<<"Your subscription expires in" <<daysUntilExpiration;
        cout<<"Renew now and save 10%!";
    }
    else if(daysUntilExpiration == 1){
        cout<<"Your subscription expires within a day! \n";
        cout<<"Renew now and save 20%!";
    }
    else if(daysUntilExpiration > 10){
        cout<<"You have an active subscription \n";
    }
    else{
        cout<<"Your subscription has expired. \n";
    }
    return 0;
}