#include <list>
#include <map>
#include <string>
using namespace std;
struct cstree		
{
	struct cstree * father;
	list<cstree *> son;
	string name;
	cstree(){father = NULL;}
};
map<string, cstree*> hash;	//保存名字所对应的指针
cstree *root;
//x hires y y插入x的孩子链表，y的父指针指向x
//fire y 按照y儿子中最先的顺序


void hire(string n1, string n2)	//hire对n1添加孩子节点指针，在list的最后
{
	cstree *s1 = hash[n1];
	cstree *s2 = new cstree();
	s2->name = n1;
	s1->son.push_back(s2);
	s2->father = s1;
	hash[n2] = s2;
}
void fire(string n1)
{
	cstree *s1 = hash[n1];
	cstree *sf = s1->father;
	hash.erase(s1);
	while(s1->son.size() != 0)
	{
		s1->name = s1->son.front()->name;
		hash[s1->name] = s1;
		s1 = s1->son.front();
	}
	s1->father->son.remove(s1);
	delete s1;
}
int main()
{
	return 0;
}

void print(cstree *cur, int depth)		//先序便利这棵树，按照depth输出+
{
	if(!cur)		return;
	for(; iter != cur->son.end(); iter++)
		print(*iter, depth + 1);
}
