#include "Lab. work 9.h"

/* TASK 25: ������ ����� �������, � ����� �������� ����� �����. ���������, �� � ������ ����� � �����: ��� ����� �����,
   ��� �����������, ������ �� ���� �����, �� �����������. ����� ������ ���� ������� ���� � ����. */

int main() {
	std::string sentence;
	std::cout << "Please, enter a sentence consists of braces: ";
	std::cin >> sentence;
	labwork_9::input_sentence(sentence);
	labwork_9::brace_balance(sentence);
	std::cout << "The sentence is: " << sentence << std::endl;
}