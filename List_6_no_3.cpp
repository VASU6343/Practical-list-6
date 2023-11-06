#include <iostream>
#include <fstream>
#include <string>
int main() 
{
	  cout<<"220130318016";
	  cout<<"Vasu Sapariya";
    std::ifstream file;
    char character;
    int character_count = 0;
    file.open("test.txt");
    if (!file.is_open()) {
        std::cout << "Unable to open the file." << std::endl;
        return 1;
    }
    while (file.get(character)) 
    {
        character_count++;
    }
    file.close();
    std::cout << "Number of characters in the file: " << character_count << std::endl;
    return 0;
}
