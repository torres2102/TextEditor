#include "TextEditor.h"
int main(){

    while (true) {

        int chioce; 
        cin >> chioce;
        switch (chioce) {

        case 1:
            appending_text();
            break;
        case 2:
            displaying_content();
            break; 
        case 3:
            delete_content();
            break;
        case 4:
            encrypting();
            break;
        case 5:
            decrypting();
            break;
        case 6:
            merging();
            break;
        case 7:
            counting();
            break;
        case 8:
            searching();
            break;
        case 9:
            To_upper();
            break;
        case 10:
            To_lower();
            break;
        case 11:
            first_to_upper()
            break;
        case 12:
            save();
            break;
        case 13:
            return 0;
        }








    }

    return 0;
}

