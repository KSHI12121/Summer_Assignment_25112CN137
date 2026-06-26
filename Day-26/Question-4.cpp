//Q. 4 : Program to create quiz application
#include <iostream>

int main() {

	std::string questions[] = 	{"1. What year was C++ created?: ",
								 "2. How many bytes does a standard 'int' data type occupy in C++ on a 64-bit system?: ",
								 "3. Which of the following loop structures is guaranteed to execute at least once?: ",
								 "4. In Indian engineering colleges, what does the first-year subject 'PPS' usually stand for?:"};

	std::string options[][4] = 	{{"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
								{"A. 1 Byte", "B. 2 Bytes", "C. 4 Bytes", "D. 8 Bytes"},
								{"A. while", "B. do-while", "C. for", "D. nested-for"},
								{"A. Programming for Problem Solving", "B. Python Programming & Systems", "C. Practical Placement Studies", "D. Principles of Software"}};;

	char answerKey[] = {'C', 'C', 'B', 'A'};

	int size = sizeof(questions)/sizeof(questions[0]);
	char guess;
	int score = 0; // Explicitly initialized to 0 to avoid garbage values

	for(int i = 0; i < size; i++){
		std::cout << "*******************************\n";
		std::cout << questions[i] << '\n';
		std::cout << "*******************************\n";

		for(int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++){
			std::cout << options[i][j] << '\n';
		}
        std::cout << "Guess: ";
		std::cin >> guess;
		guess = toupper(guess);

		if(guess == answerKey[i]){
			std::cout << "CORRECT\n";
			score++;
		}
		else{
			std::cout << "WRONG!\n";
			std::cout << "Answer: " << answerKey[i] << '\n';
		}
	}
	
	// Final results display
	std::cout << "*******************************\n";
	std::cout << "Your Final Score: " << score << " / " << size << '\n';
	std::cout << "*******************************\n";

	return 0;
}
