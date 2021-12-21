#include "Lab. work 9.h"

/* TASK 25: ввести рядок символів, у якому містяться круглі дужки. Перевірити, чи є баланс дужок у рядку: для кожної дужки,
   яка відкривається, справа має бути дужка, що закривається. Дужки можуть бути вкладені одна в одну. */

int main() {
	std::string str{};
	std::cout << "Please, enter a sentence consists of braces: ";
	getline(std::cin, str);
	labwork_9::input_check_sentence(str.c_str());
}