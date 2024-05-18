#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    srand(time(0));
    int daysUntilExpiration = rand()%12;

    if(daysUntilExpiration >5 && daysUntilExpiration <= 10){
        cout << " Your subscription wil expire soon. Renew now!";
    } else if(daysUntilExpiration >1 && daysUntilExpiration <= 5){
        cout << "Your subdcription will expire in " << daysUntilExpiration << " days. Renew Now and save 10%" << endl;
    }else if(daysUntilExpiration == 1){
        cout << "Your subdcription will expire in " << daysUntilExpiration << "Renew Now and save 20%" << endl;
    }else if(daysUntilExpiration == 0) {
        cout << "Your subdcription has expired."<< endl;
    } else{
            cout << "You have an active subdcription."<< endl;

    }
    return 0;
}
