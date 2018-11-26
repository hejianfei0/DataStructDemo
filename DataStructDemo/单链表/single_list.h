#include <iostream>

template<typename T>
struct  SNode
{
	T data;
	SNode<T>* next;
};

template<typename T>
class SingleList {
public:
	SingleList();
	~SingleList();
	void initList();
	SNode<T>* GetNewNode(T t);
	//bool push_back(T data); 
	//bool push_front(T data);
	//void show_list();
	//bool pop_back();
	//bool pop_front();
	//bool insert_val(T data);
	//SNode* find(T data);
	//int length();
	//bool delete_Val(T data);
	//bool sort();
	//bool resver();
	//bool clear();
	//bool destory();


private:
	SNode<T> * first_;
	SNode<T>* last_;
	int size;

};