#include "TextEditor.h"
string fileName;
string text{};
inline bool exists_test(const std::string& name) {
    ifstream f(name.c_str());
    return f.good();
}

void appending_text() {
    text.clear();
    // letting user choose file
    fstream file{};

    if (exists_test(fileName)) {
        cout << "This File Already Exist\n";
    }
    else cout << "This is a new file. I created it for you :) \n";

    file.open(fileName.c_str(), ios::app);
    char str;

    cout << "Type 'Ctrl+Z' if you want to stop entering the text\n"
            "Enter text: ";
    while (cin >> str, str != '\032') {
        text += str;
    }
    // copying string user entered to file
    file << text;
}


void displaying_content() {
    text.clear();
    fstream file{};
    file.open(fileName.c_str(), ios::in);
    while (getline(file, text)) {
        cout << text << endl;
    }
}

void delete_content() {
    fstream file{};
    file.open(fileName.c_str(), fstream::out | fstream::trunc);
    cout << "File content deleted successfully \n";
}

void encrypting() {
    text.clear();
    fstream file{ fileName.c_str(), ios::in | ios::out };
    char ch;
    while (file.get(ch))
    {
            text += char (ch + 1);
    }
}
void decrypting(){
    text.clear();
    fstream file{ fileName.c_str(), ios::in | ios::out };
    char ch;
    while (file.get(ch))
    {
        text += char (ch - 1);
    }

}

void merging() {
    text.clear();
    char ch;
    fstream file,file2;
    string fileName2{};
    cout << "Enter the name of the second file : ";
    cin >> std::ws;
    getline(cin, fileName2);
    fileName2 += ".txt";
    if ((!file) || (!file2)) {
        cout << "\nError Occurred (First/Second Source File)!";
    }
    file.open(fileName.c_str(), ios:: in);

    while(file.get(ch)){
        text += ch;
    }
    file2.open(fileName2.c_str(), ios:: in);
    while(file2.get(ch)){
        text += ch;
    }
}
void To_upper() {
    text.clear();
    fstream file{ fileName.c_str(), ios::in | ios::out };
    char ch;
    while(file.get(ch)){
        text += toupper(ch);
    }
}

void To_lower() {
    text.clear();
    fstream file{ fileName.c_str(), ios::in | ios::out };
    char ch;
    while(file.get(ch)){
        text += tolower(ch);
    }
}

// return true if the string word_to_find is in the target string
bool find_substring(const string& word_to_find, const string& target) {
    std::size_t found = target.find(word_to_find);
    if (found == string::npos)
        return false;
    else
        return true;
}

void appearance() {
    string word_to_find{};
    string word_read{};
    int match_count{ 0 };
    fstream file{ fileName.c_str() };
    if (!file) {
        cerr << "Problem opening file" << std::endl;

    }
    cout << "Enter the substring to search for: ";
    cin >> word_to_find;
    while (file >> word_read) {
        if (find_substring(word_to_find, word_read)) {
            ++match_count;
        }
    }
    cout << "The substring " << word_to_find << " was found " << match_count << " times " << endl;

}
void searching() {
    string word_to_find{};
    string word_read{};
    bool match{};
    fstream file{ fileName.c_str() };
    if (!file) {
        cerr << "Problem opening file" << std::endl;
    }
    cout << "Enter the substring to search for: ";
    cin >> word_to_find;
    while (file >> word_read) {
        if (find_substring(word_to_find, word_read)) {
            cout << "The substring " << word_to_find << " was found in file"<< endl;
            break;
        }
    }
}

void wordsCount() {
    string word_read;
    int word_count{ 0 };
    fstream file{ fileName.c_str() };
    while (file >> word_read) {
        ++word_count;
    }
    cout << "You have " << word_count << " words in your file";
}

void character_count() {
    char ch;
    int ch_count{ 0 };
    fstream file{ fileName.c_str()};
    while (file >> ch) {
        ch_count++;
    }
    cout << "You have " << ch_count << " characters in your file";
}

void linesCount() {
    string line_read;
    int line_count{ 0 };
    fstream file{ fileName.c_str() };
    while (getline(file, line_read)) {
        ++line_count;
    }
    cout << "You have " << line_count << " lines in your file";
}
void first_char_cap(){
    text.clear();
    char ch;
    fstream file{};
    file.open(fileName.c_str() , ios::in | ios::out);
    while(file.get(ch)){
        text += ch;
    }
    int counter{0};
    for (char i : text) {
        text[0] = toupper(text[0]);
        if(isspace(i)){
            text[counter+1] = toupper(text[counter+1]);
        }
        counter++;
    }

}

void save(string &s) {
    fstream file{ fileName.c_str()};
    string fileSavedName;
    fstream saveFile{};
    cout << "Enter a name for the file you want to save the changes on: ";
    getline(cin, fileSavedName);
    fileSavedName += ".txt";
    if (exists_test(fileSavedName)) {
        cout << "This File Already Exist\n";
        file.open(fileSavedName.c_str() , ios::trunc);
    }
    else cout << "This is a new file. I created it for you :) \n";
    saveFile.open(fileSavedName, ios::app);
    saveFile << s;
    saveFile.close();
}
