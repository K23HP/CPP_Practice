#include <iostream>
#include <string>
using namespace std;

int main() {
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};

    // Get user message to encrypt
    string message {};
    cout << "Enter a message to encrypt: ";
    getline(cin, message);
    // cout << message << endl;

    // Encrypt each character in message with key character
    string encrypted_message {};
    for (char c: message) {
        if (c == ' ') 
            encrypted_message += ' ';
        else
            encrypted_message += key[alphabet.find(c)];
    }

    cout << "Encrypted message: " << encrypted_message << endl;

    cout << endl;

    cout << "Would you like to decrypt the message? (Y/n)" << endl << ">>> ";
    char option {};
    cin >> option;

    if (option == 'y' || option == 'Y') {
        // Decrypt each character in encrypted message with alphabet
        string decrypted_message {};
        for (char c: encrypted_message) {
            if (c == ' ')
                decrypted_message += ' ';
            else
                decrypted_message += alphabet[key.find(c)];
        }

        cout << "Decrypted message: " << decrypted_message << endl;
    }
    else
        cout << "Bye!" << endl;

    return 0;
}