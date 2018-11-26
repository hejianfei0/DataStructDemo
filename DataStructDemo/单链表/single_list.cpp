#include "single_list.h"
#include <assert.h>

template<typename T>
SingleList<T>::SingleList() {

}

template<typename T>
SingleList<T>::~SingleList() {

}


template<typename T>
SNode<T>* SingleList<T>::GetNewNode(T t) {
	SNode<T>* s = (SNode<T>*)malloc(sizeof(SNode));
	assert(s != nullptr);
	s->data = t;
	s->next = nullptr;
	return s;
}



template<typename T>
void SingleList<T>::initList() {
	SNode<T>* s = GetNewNode(-1);
	first_ = s;
	last_ = s;
	size = 0;
}