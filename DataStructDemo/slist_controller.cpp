#include "slist_controller.h"

#include "单链表\single_list.cpp"
#include <iostream>
#include <memory>

SlistController::SlistController()
{
}

SlistController::~SlistController()
{
}

void SlistController::test() {
	int select = 1;
	std::shared_ptr<SingleList<int>> s_list = std::make_shared<SingleList<int>>();
	//s_list->initList();
	while (select != 0)
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
	    std::cin >> select;
		if (select == 0)
			break;
		switch (select)
		{
		case 1:
			std::cout << "请输入要尾插得数据<-1推出>：" << std::endl;
			while (std::cin >> select && select!=-1)
			{

			}
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 10:
			break;
		case 11:
			break;
		case 12:
			break;
		default:
			break;
		}
	}
}