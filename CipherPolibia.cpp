#include "CipherPolibia.h"

CipherPolibia::CipherPolibia(int key1) {
	this->key1 = key1;
}


std::string CipherPolibia::encryptMessage(std::string message) {
	std::string encryptedMessage;
	for (int i = 0; i < message.size(); i++) {
		for (int j = 0; j < a.size(); j++) {
			std::vector<char>::iterator it = std::find(a[j].begin(), a[j].end(), message[i]);
			if (it != a[j].end()) {
				int index2 = std::distance(a[j].begin(), it);
				int newIndex1 = (j + this->key1) % a.size();
				encryptedMessage = encryptedMessage + a[newIndex1][index2];
				break;
			}
			else {
				//encryptedMessage = encryptedMessage + message[i];
			}
		}
	}
	return encryptedMessage;
}

std::string CipherPolibia::decryptMessage(std::string message) {
	std::string decryptedMessage;
	for (int i = 0; i < message.size(); i++) {
		for (int j = 0; j < a.size(); j++) {
			std::vector<char>::iterator it = std::find(a[j].begin(), a[j].end(), message[i]);
			if (it != a[j].end()) {
				int index2 = std::distance(a[j].begin(), it);
				int newIndex1 = (j - this->key1);
				if (newIndex1 < 0) {
					newIndex1 += a.size();
				}
				decryptedMessage = decryptedMessage + a[newIndex1][index2];
				break;
			}
			else {
				//decryptedMessage = decryptedMessage + message[i];
			}
		}
	}
	return decryptedMessage;
}

void CipherPolibia::frequencyAnalysis(std::string message) {
	std::map<char, int> myMap;
	for (int i = 0; i < this->alphabet.size(); i++) {
		myMap.insert(std::make_pair(this->alphabet[i], 0));
	}
	std::map<char, int>::iterator it;
	for (int i = 0; i < message.size(); i++) {
		it = myMap.find(message[i]);
		if (it != myMap.end()) {
			it->second++;
		}

	}
	it = myMap.begin();
	for (it; it != myMap.end(); it++) {
		std::cout << "Letter:  " << it->first << "    Count of entering in message:  " << it->second << std::endl;
	}

}