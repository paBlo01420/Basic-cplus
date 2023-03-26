#include <iostream>

using namespace std;

main(){
    char jawab;
    do {
         cout << "Apakah diulang " << endl;
        cin >> jawab;
    }
   
    while (tolower(jawab) != 't');
    
}
     