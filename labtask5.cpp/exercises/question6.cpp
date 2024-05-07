#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

using namespace std;

int count_vowels(const string& data) {
    int count = 0;
    for (char c : data) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            count++;
        }
    }
    return count;
}

int count_words(const string& data) {
    int count = 0;
    bool in_word = false;
    for (char c : data) {
        if (isspace(c)) {
            in_word = false;
        } else if (!in_word) {
            in_word = true;
            count++;
        }
    }
    return count;
}

string reverse(const string& data) {
    return string(data.rbegin(), data.rend());
}

string capitalize_second_letter(const string& data) {
    string result = data;
    bool in_word = false;
    for (char& c : result) {
        if (isspace(c)) {
            in_word = false;
        } else if (!in_word) {
            in_word = true;
        } else {
            c = toupper(c);
            in_word = false;
        }
    }
    return result;
}

int main() {
    ifstream file("textfile.txt");
    if (!file) {
        cerr << "Could not open file\n";
        return 1;
    }

    string fileData((istreambuf_iterator<char>(file)), istreambuf_iterator<char>());

    cout << "Number of vowels: " << count_vowels(fileData) << '\n';
    cout << "Number of words: " << count_words(fileData) << '\n';
    cout << "Reversed statement: " << reverse(fileData) << '\n';
    cout << "Capitalized statement: " << capitalize_second_letter(fileData) << '\n';

    return 0;
}
