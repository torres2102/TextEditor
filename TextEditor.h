#pragma once
#include <iostream>
#include <string>
#include <stdlib.h>
#include <cctype>
#include <typeinfo>
#include <map>
#include <set>
#include <fstream>
#include<conio.h>
#include <regex>
inline bool exists_test(const std::string& name);

void appending_text();

void displaying_content();

void delete_content();

void encrypting();

void decrypting();

void merging();

void save(std::string s);

void To_upper();

void To_lower();

void searching();

void appearance();

void wordsCount();

void character_count();

void linesCount();

void first_char_cap();

using namespace std;
string fileName;
string text{};