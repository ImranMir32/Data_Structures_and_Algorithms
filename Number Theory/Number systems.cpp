#include <bits/stdc++.h>
using namespace std;

// Function to convert decimal to binary
string decimalToBinary(int n) {
    string binary;
    while (n > 0) {
        binary = (n % 2 == 0 ? "0" : "1") + binary;
        n /= 2;
    }
    return binary.empty() ? "0" : binary;
}

// Function to convert decimal to octal
string decimalToOctal(int n) {
    string octal;
    while (n > 0) {
        octal = to_string(n % 8) + octal;
        n /= 8;
    }
    return octal.empty() ? "0" : octal;
}

// Function to convert decimal to hexadecimal
string decimalToHexadecimal(int n) {
    string hexadecimal;
    while (n > 0) {
        int remainder = n % 16;
        if (remainder < 10) {
            hexadecimal = to_string(remainder) + hexadecimal;
        } else {
            hexadecimal = char('A' + remainder - 10) + hexadecimal;
        }
        n /= 16;
    }
    return hexadecimal.empty() ? "0" : hexadecimal;
}

// Function to convert binary to decimal
int binaryToDecimal(const string& binary) {
    int decimal = 0;
    int size = binary.size();

    for (int i = size - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            decimal += pow(2, size - 1 - i);
        }
    }

    return decimal;
}

// Function to convert octal to decimal
int octalToDecimal(const string& octal) {
    int decimal = 0;
    int size = octal.size();

    for (int i = size - 1; i >= 0; i--) {
        decimal += (octal[i] - '0') * pow(8, size - 1 - i);
    }

    return decimal;
}

// Function to convert hexadecimal to decimal
int hexadecimalToDecimal(const string& hexadecimal) {
    int decimal = 0;
    int size = hexadecimal.size();

    for (int i = size - 1; i >= 0; i--) {
        int digit = isdigit(hexadecimal[i]) ? (hexadecimal[i] - '0') : (toupper(hexadecimal[i]) - 'A' + 10);
        decimal += digit * pow(16, size - 1 - i);
    }

    return decimal;
}

int main() {
    int decimalNumber;
    cout << "Enter a decimal number: ";
    cin >> decimalNumber;

    // Convert to binary
    cout << "Binary representation: " << bitset<32>(decimalNumber) << endl;

    // Convert to octal
    cout << "Octal representation: 0" << oct << decimalNumber << endl;

    // Convert to hexadecimal
    cout << "Hexadecimal representation: 0x" << hex << decimalNumber << endl;


    string binary = decimalToBinary(decimalNumber);
    string octal = decimalToOctal(decimalNumber);
    string hexadecimal = decimalToHexadecimal(decimalNumber);

    cout<<"Binary representation: "<<binary<<endl;
    cout<<"Octal representation: " <<octal<<endl;
    cout<<"Hexadecimal representation: "<<hexadecimal<<endl;





    //int decimalFromBinary = binaryToDecimal(binary);
   // int decimalFromOctal = octalToDecimal(octal);
   // int decimalFromHexadecimal = hexadecimalToDecimal(hexadecimal);

   // cout << "Decimal representation of binary: " << decimalFromBinary << endl;
  //  cout << "Decimal representation of octal: " << decimalFromOctal << endl;
   // cout << "Decimal representation of hexadecimal: " << decimalFromHexadecimal << endl;

    return 0;
}
