#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main(){
    cout<<"This program checks the user's subscription to a service \n \n";
    int daysUntilExpiration;

    srand(time(0));
    for(int i = 0; i < 11; i++)
    daysUntilExpiration = rand() % 12;
    
    /*Switch condition and the case labels*/
    switch ((rand() % 12)){
        case 1: (daysUntilExpiration = daysUntilExpiration <= 10);
                cout<<"Your subscription will expire soon. Renew now! \n";
                break;
        case 2: (daysUntilExpiration = daysUntilExpiration <= 5);
                cout<<"Your subscription expires in   " <<daysUntilExpiration <<"   days";
                cout<<"Renew now and save 10%!";
                break;
        case 3: (daysUntilExpiration = daysUntilExpiration == 1);
                cout<<"Your subscription expires within a day! \n";
                cout<<"Renew now and save 20%!";
                break;
        case 4: (daysUntilExpiration = daysUntilExpiration > 10);
                cout<<"You have an active subscription \n";
                break;
        default: cout<<"Your subscription has expired. \n";
    }  
    return 0;
}