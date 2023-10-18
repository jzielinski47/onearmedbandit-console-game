#include <iostream>
#include <random>

int main() {

	std::cout << "Enter any key to start the game..."; getchar();

	int generationIndex = 0;

	std::random_device rd;
	std::uniform_int_distribution distr(3,5);
	
	do {
		std::cout << "draw n. " << ++generationIndex << std::endl;

		const int arrLength = 3;
		char arr[arrLength];

		for (int i = 0; i < arrLength; i++) {
			
			arr[i] = (char) distr(rd);

		}

		std::cout << "\t" << arr[0] << " | " << arr[1] << " | " << arr[2];
		if (arr[0] == arr[1] && arr[1] == arr[2]) {
			std::cout << std::endl << "You won..." << std::endl;
			generationIndex = 0;
		}
		else {
			std::cout << std::endl << "You lost..." << std::endl;
		}

		std::cout << "Enter any key to continue..."; getchar();

	} while (generationIndex < 5);

	return 0;

}