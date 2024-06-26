#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Function to count words and characters in a file
void countWordsAndChars(const string& filename, int& wordCount, int& charCount) {
    ifstream file(filename);
    if (!file.is_open()) {
        cout << "Unable to open file " << filename << endl;
        return;
    }
       
    string word;
    wordCount = 0;
    charCount = 0;

    while (file >> word) {
        // Increment word count
        wordCount++;

        // Increment character count by the length of the word
        charCount += word.length();
    }

    file.close();
}

int main() {
    string filename;
    cout << "Enter the name of the input file: ";
    cin >> filename;

    int wordCount, charCount;
    countWordsAndChars(filename, wordCount, charCount);

    cout << "Number of words: " << wordCount << endl;
    cout << "Number of characters: " << charCount << endl;

    // Pause before exiting
    cout << "Press Enter to continue...";
    cin.ignore();
    cin.get();

    return 0;
}
