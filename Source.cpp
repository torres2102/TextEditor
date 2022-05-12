#include "TextEditor.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <typeinfo>
#include <fstream>
#include<conio.h>
#include <regex>
using namespace std;

inline bool exists_test (const std::string& name) {
    ifstream f(name.c_str());
    return f.good();
}
void appending_text(){
    // letting user choose file
    ofstream file{};
    string fileName;
    cout << "Enter the file name: ";
    cin >> std::ws;
    getline(cin, fileName);
    fileName += ".txt";
    if(exists_test(fileName)){
        cout << "This File Already Exist\n";
    }
    else cout << "This is a new file. I created it for you :) \n";

    file.open(fileName.c_str() , ios::app);
    string str, str2;
    if (!file){
        // error occurred
        cerr << "Error has occurred file can't be opened";
    }
    cout << "Type 'quit123' if you want to stop entering the text\n";
    cout << "Enter text: ";
    while(cin >> str, str != "quit123"){
        str2 += str + " ";
    }
    // copying string user entered to file
    file << str2;
    file.close();
}


void displaying_content(){
    ifstream file{};
    string fileName;
    cout << "Enter the file name: ";
    cin >> std::ws;
    getline(cin, fileName);
    fileName += ".txt";
    file.open(fileName.c_str());
    if (!file){
        // error occurred
        cerr << "Error has occurred file can't be opened";
    }
    string str;
    while(getline(file, str)) {
       cout << str;
    }

}
void delete_content(){
    ofstream file{};
    string fileName;
    cout << "Enter the file name: ";
    cin >> std::ws;
    getline(cin, fileName);
    fileName += ".txt";
    if (!file){
        // error occurred
        cerr << "Error has occurred file can't be opened";
    }
    file.open(fileName.c_str(), std::ofstream::trunc);
    file.close();
}