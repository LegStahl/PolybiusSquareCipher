#include <iostream>
#include "CipherPolibia.h"

int main(int argc, char** argv) {
	CipherPolibia a(2);
	std::string sentence;
	std::string temp;
	std::cout << (-1 % 5);
	std::cout << "Please enter your message: ";
	std::getline(std::cin, sentence);
	temp = a.encryptMessage(sentence);
	std::cout << temp << std::endl;
	a.frequencyAnalysis(temp);
	std::cout << a.decryptMessage(temp) << std::endl;
	return 0;
}