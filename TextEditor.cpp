#include "TextEditor.h"
int main() {

      while (true) {
         std::cout << "1. Add new text to the end of the file\n"
                  "2. Display the content of the file\n"
                  "3. Empty the file\n"
                  "4. Encrypt the file content\n"
                  "5. Decrypt the file content\n"
                  "6. Merge another file\n"
                  "7. Count the number of words in the file\n"
                  "8. Count the number of characters in the file\n"
                  "9. Count the number of lines in the file\n"
                  "10. Search for a word in the file\n"
                  "11. Count the number of times a word exists in the file\n"
                  "12. Turn the file content to upper case.\n"
                  "13. Turn the file content to lower case.\n"
                  "14. Turn file content to 1st caps (1st char of each word is capital)\n"
                  "15. Save\n"
                  "16. Exit\n";
                  std::cout << " choose operation you want to apply to the file \n";
          int choice;
          std::cin >> choice;
          switch (choice) {

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
              wordsCount;
              break;
          case 8:
              character_count();
              break;
          case 9:
              linesCount();
              break;
          case 10:
              appearance();
              break;
          case 11:
               searching();
              break;
          case 12:
              To_upper();
              break;
          case 13:
              To_lower();
              break;
          case 14:
              first_char_cap();
              break;
          case 15:
                save(text);
          case 16:
                cout << "Thanks for using this Text-Editor";
                return 0;
          }
      }

      return 0;
  }
