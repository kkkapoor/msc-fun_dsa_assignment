//
//  main.cpp
//  Magical_coding_formula
//
//  Created by Kovidh Kapoor on 15/09/25.
//

#include <iostream>
using namespace std;

int main() {
    string name;
    long int i;
    string emojis[3] = {"🔥", "💻", "✨"}; // Fun coding emojis

    cout << "🧪 Welcome to the Code Lab Experiment!\n";
    cout << "Enter your name: ";
    cin >> name;

    // Reverse the name
    string reversed = "";
    for (i = name.length() -1; i >= 0; i--) {
        reversed += name[i];
    }

    // Interleave reversed name with emojis
    string magical = "";
    for (int i = 0; i < reversed.length(); i++) {
        magical += reversed[i];
        magical += emojis[i % 3]; // Cycle through emojis
    }

    cout << "\n✨ Your Magical Coding Formula ✨\n";
    cout << magical << " 🧙‍♂️💡\n";
    cout << "🚀 Use it wisely in your coding adventures! 🐛💻\n";

    return 0;
}
