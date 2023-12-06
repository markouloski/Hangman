#include <iostream>
#include <string>
int main()
{
    std::cout << "\n________\n";
    std::cout << "|       |\n";
    std::cout << "|        \n";
    std::cout << "|        \n";
    std::cout << "|        \n";
    std::cout << "---\n";
    std::cout << "You have 5 tries left\n";
    int misses = 0;
    char guess = 1;
    std::string UnknownWord = "coco";
    unsigned long long wordLen = UnknownWord.size();
    auto hiddenWord = std::string(UnknownWord.size(), '*');
    for (int i = 0; i < guess; i++)
    {
        bool found = false;
        std::cout << "\nGuess the Word: \n" << hiddenWord;
        std::cin >> guess;
        for (int c = 0; c < wordLen; c++) {
            if (UnknownWord[c] == guess)
            {
                hiddenWord[c] = UnknownWord[c];
                found = true;
            }
        }
        if (found == false)
        {
            misses++;
        }
        if (found == true)
        {
            std::cout << "guess was correct";
        }
        std::cout << "\nMisses: " << misses << std::endl;
        std::cout << hiddenWord << std::endl;
        if (hiddenWord == UnknownWord)
        {
            std::cout << "\nYou win";
            return 0;
        }
        if (misses == 1)
        {
            std::cout << "________\n";
            std::cout << "|       |\n";
            std::cout << "|       O\n";
            std::cout << "|       | \n";
            std::cout << "|        \n";
            std::cout << "---\n";
            std::cout << "You have 4 tries left";
        }
        if (misses == 2)
        {
            std::cout << "________\n";
            std::cout << "|       |\n";
            std::cout << "|       O \n";
            std::cout << "|      /|\\\n";
            std::cout << "|        \n";
            std::cout << "---\n";
            std::cout << "You have 3 tries left";
        }
        if (misses == 3)
        {
            std::cout << "________\n";
            std::cout << "|       |\n";
            std::cout << "|       O \n";
            std::cout << "|      /|\\\n";
            std::cout << "|       | \n";
            std::cout << "---\n";
            std::cout << "You have 2 tries left";
        }
        if (misses == 4)
        {
            std::cout << "________\n";
            std::cout << "|       |\n";
            std::cout << "|       O \n";
            std::cout << "|      /|\\\n";
            std::cout << "|       | \n";
            std::cout << "|      / \\\n";
            std::cout << "---\n";
            std::cout << "You have 1 tries left";
        }
        if (misses == 5)
        {
            std::cout << "You have no tries left and you lose";
            return 0;
        }
    }
}
