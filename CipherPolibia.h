
#include <vector>
#include <string>
#include<map>
#include<iostream>
#ifndef CIPHERPOLIBIA
#define CIPHERPOLIBIA
//#include <vector>
////////////////////////////////////////////////////////////////////////////////////////"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"

class CipherPolibia {
private:
	std::vector<std::vector<char>> a = { {'a', 'b', 'c', 'd', 'e', 'f'}, {'g', 'h', 'i', 'j', 'k', 'l'}, {'m', 'n', 'o', 'p', 'q', 'r'}, {'s', 't', 'u', 'v', 'w', 'x'}, {'y', 'z', ' ', '2', '3', '4'} };
	std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
	int key1;
public:
	CipherPolibia(int key1);
	std::string encryptMessage(std::string message);
	std::string decryptMessage(std::string message);
	void frequencyAnalysis(std::string message);
};



#endif
