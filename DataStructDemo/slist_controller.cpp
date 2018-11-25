#include "slist_controller.h"
#include <iostream>

SlistController::SlistController()
{
}

SlistController::~SlistController()
{
}

void SlistController::test() {
	int select = 1;
	while (select=std::cin.get())
	{
		std::cout << "*****************************************" << std::endl;
		std::cout << "*[1]   push_back      [2]   push_front  *" << std::endl;
		std::cout << "*[3]   show_list      [4]   pop_back    *" << std::endl;
		std::cout << "*[5]   pop_front      [6]   insert_val  *" << std::endl;
		std::cout << "*[7]   find           [8]   length      *" << std::endl;
		std::cout << "*[9]   delete_val     [10]  sort        *" << std::endl;
		std::cout << "*[11]  resver         [12]  clear       *" << std::endl;
		std::cout << "*[13]  destory        [0]   quit        *" << std::endl;
		std::cout << "*****************************************" << std::endl;
		break;
	}
}