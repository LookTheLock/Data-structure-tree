#include "tree.h"

int main()
{
	int a = 5;
	int b = 23;
	int c = 356;
	int d = 5561;
	int e = 3226;
	int f = 30226;
	int g = 234226;
	int h = 302487;
	node<int> root(a, 0);

	root.add_child(make_shared<node<int>>(b, 1));
	root.add_child(make_shared<node<int>>(c, 2));
	root.add_child(make_shared<node<int>>(d, 3));

	root.m_children[0]->add_child(make_shared<node<int>>(e, 4));
	root.m_children[0]->add_child(make_shared<node<int>>(f, 5));
	root.m_children[1]->add_child(make_shared<node<int>>(b, 6));

	root.m_children[0]->m_children[1]->add_child(make_shared<node<int>>(g, 7));
	root.m_children[0]->m_children[1]->add_child(make_shared<node<int>>(h, 8));



	return 0;
}
