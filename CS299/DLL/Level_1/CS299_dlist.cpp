#include "CS299_dlist.h"

void find_tail(node * & current, node * & tail, node * & head);
int compare_delete(int i, node * & current, node * & tail, node * & target, node * & temp, node * & head);

int remove_larger(node * & head)
{
	if(!head)
		return 0;

	node * current = head;
	node * tail;
	node * temp = current;
	node * target = head;
	int i = 0;

	find_tail(current, tail, head);
	current = head;

	return compare_delete(i, current, tail, target, temp, head);

}

void find_tail(node * & current, node * & tail, node * & head)
{
	while (current->next != NULL)
	{
		current = current->next;

		if(current->next == NULL)
			tail = current;
	}

}
int compare_delete(int i, node * & current, node * & tail, node * & target, node * & temp, node * & head)
{
		if (current == NULL)
			return 0;
		if (target == head)
		{
			cout << "true" << endl;
		}

		if((target->data < current->data) && target != head)
		{	temp = current->previous;
			cout << current->data << "Is greater" << endl;
			current = current->next;
			return compare_delete(i, current, tail, target, temp, head);
			delete current;
			current = temp;
			temp = temp->previous;
			i++;
		}
		else
		{
			temp = current->previous;
			current = current->next;
			cout << current->data << "Less" << endl;
			return compare_delete(i, current, tail, target, temp, head);
			current = temp;
			temp = temp->previous;
		}

return i;

}
