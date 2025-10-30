#include <iostream>
#include <string>
#include <cctype>
#include <sstream>

int main(){

//Declaring variables
    std::string text;
    int vowel_count = 0;
    int word_count = 0;
    int consonant_count = 0;

//Getting input 
    std::cout << "Please enter a text: ";
    std::getline(std::cin, text);

//This loop counts vowels and consonants
    for(char letter : text){
        if(std::isalpha(letter)){

            //Converting letter to lower case in order not to double check lower and upper case vowels
            char lower_letter = std::tolower(letter);
            if (lower_letter == 'a' || lower_letter == 'i' || lower_letter == 'e' || lower_letter == 'o' || lower_letter == 'u'){
                vowel_count ++;
            }

            else{
                consonant_count ++;
            }
        }
    }

//Turning string to stream to use ">>" operator
    std::stringstream stream_text(text);

//This loop counts the words
    std::string word;
    while (stream_text >> word){
        word_count++;
    }

//Printing the results
    std::cout << "\n---Analysis---" << std::endl;
    std::cout << "Original Text: " << text << std::endl;
    std::cout << "Vowel count: " << vowel_count << std::endl;
    std::cout << "Consonant count: " << consonant_count << std::endl;
    std::cout << "Word count: " << word_count << std::endl;

    return 0;
}







