/**
 * @file decode_morse.cpp
 * @author Marcus Martins (marcuspaivamartins@gmail.com)
 * @version 0.1
 * @date 2023-08-13
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <bits/stdc++.h>

using namespace std;

/* // Preloaded Morse code dictionary
unordered_map<string, string> MORSE_CODE = {
    {".-", "A"}, {"-...", "B"}, {"-.-.", "C"}, {"-..", "D"}, {".", "E"},
    {"..-.", "F"}, {"--.", "G"}, {"....", "H"}, {"..", "I"}, {".---", "J"},
    {"-.-", "K"}, {".-..", "L"}, {"--", "M"}, {"-.", "N"}, {"---", "O"},
    {".--.", "P"}, {"--.-", "Q"}, {".-.", "R"}, {"...", "S"}, {"-", "T"},
    {"..-", "U"}, {"...-", "V"}, {".--", "W"}, {"-..-", "X"}, {"-.--", "Y"},
    {"--..", "Z"}, {"-----", "0"}, {".----", "1"}, {"..---", "2"},
    {"...--", "3"}, {"....-", "4"}, {".....", "5"}, {"-....", "6"},
    {"--...", "7"}, {"---..", "8"}, {"----.", "9"}
}; */

string decodeMorse(string morseCode)
{
    string decoded, decoding;

    for (auto character : morseCode)
    {
        if (character != ' ')
            decoding += character;
        else
        {
            if (!decoding.empty())
            {
                // Decode and add character to the result
                if (MORSE_CODE.count(decoding))
                    decoded += MORSE_CODE[decoding];
                
                decoding.clear(); // Clear for the next sequence
            }
            else
            if (!decoded.empty() && decoded.back() != ' ') // Add space between words if not consecutive spaces
            {
                decoded += ' ';
            }
        }
    }

    // Decode the last sequence if not empty
    if (!decoding.empty() && MORSE_CODE.count(decoding))
        decoded += MORSE_CODE[decoding];
    
    // Remove the space at the end of the decoded string
    if (decoded.back() == ' ')
        decoded.pop_back();

 return decoded;
}

/* int main()
{
    string a;
    getline(cin, a);

    cout << decodeMorse(a) << "\n";

 return 0;
} */
