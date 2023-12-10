#include "iostream"

int main() 
{
    int number_of_words = 0;
    std::string previous = " ";
    std::string current;

    while(std::cin >> current) {
        ++number_of_words;
        if(previous == current){
            std::cout << "Повторяющееся слово: " << current 
                        << " после " << number_of_words << " слов.\n";
        }
        previous = current;
    }

    return 0;
}