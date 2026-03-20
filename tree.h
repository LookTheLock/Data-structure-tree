
#include <iostream>
#include <vector>
#include <memory>
#include <set>
using namespace std;

template <class T>
struct node
{
	// member variables
	T m_data;
	int m_id;
	vector <shared_ptr<node>> m_children;
	shared_ptr<node> m_parent;


	node(T& data, int id):m_data(data), m_id(id) {}

	void add_child(shared_ptr<node> child) {
		m_children.push_back(child);
		m_children.back()->m_parent=shared_ptr<node>(this);
	}


	void erase_child(int id) {
		for (size_t i = 0; i < m_children.size(); i++) {
			if (m_children[i]->m_id == id) {
				m_children[i]->m_parent.reset(nullptr);
				m_children.erase(m_children.begin() + i);
			}
		}
	}



};

