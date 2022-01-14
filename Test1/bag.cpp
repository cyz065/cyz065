#include "Linked_List.h"
#include "bag.h"
#include <iostream>
#include <cassert>

bag::bag() {
	head_ptr = NULL;
	many_nodes = 0;
}

bag::bag(const bag& source) {
	node* tail_ptr;
	list_copy(source.head_ptr, head_ptr, tail_ptr);
	many_nodes = source.many_nodes;
}

bag::~bag() {
	list_clear(head_ptr);
	many_nodes = 0;
}

void bag::operator=(const bag& source) {
	node* tail_ptr;
	if (this == &source)
		return;
	list_clear(head_ptr);
	list_copy(source.head_ptr, head_ptr, tail_ptr);
	many_nodes = source.many_nodes;
}

void bag::operator+=(const bag& addend) {
	node* copy_tail_ptr;
	node* copy_head_ptr;
	if (addend.many_nodes > 0) {
		list_copy(addend.head_ptr, copy_head_ptr, copy_tail_ptr);
		copy_tail_ptr->set_link(head_ptr);
		head_ptr = copy_head_ptr;
		many_nodes += addend.many_nodes;
	}
}

bool bag::erase_one(const node::value_type& target) {
	node* target_ptr;
	target_ptr = list_search(head_ptr, target);
	if (target_ptr == NULL)
		return false;
	target_ptr->set_data(head_ptr->data());
	list_head_remove(head_ptr);
	--many_nodes;
	return true;
}

bag::size_type bag::count(const node::value_type& target) const {
	size_type answer = 0;
	const node* cursor;
	cursor = list_search(head_ptr, target);
	while (cursor != NULL) {
		++answer;
		cursor = cursor->link();
		cursor = list_search(cursor, target);
	}
	return answer;
}

bag::size_type bag::size() {
	size_type s = many_nodes;
	return s;
}
node::value_type bag::grab() {
	size_type i;
	const node* cursor;
	assert(size() > 0);
	i = (rand() % size()) + 1;
	cursor = list_locate(head_ptr, i);
	return cursor->data();
}

void bag::insert(const node::value_type& entry) {
	list_head_insert(head_ptr, entry);
	++many_nodes;
}