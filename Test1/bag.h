#pragma once
#include "Linked_List.h"

class bag {
public :
	typedef std::size_t size_type;
	bag();
	bag(const bag& source);
	~bag();
	void operator =(const bag& source);
	void operator += (const bag& addend);
	bool erase_one(const node::value_type& target);
	size_type count(const node::value_type& target) const;
	node::value_type grab();
	size_type size();
	void insert(const node::value_type& entry);
private :
	node* head_ptr;
	size_type many_nodes;
};