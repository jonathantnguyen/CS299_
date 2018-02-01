#include "CS299_dlist.h"

void find_tail(node * & current, node * & tail, node * & head);
void compare_delete(node * & current, node * & tail, node * & head);

int remove_larger(node * & head)
{
	if(!head)
		return 0;

	node * current = head;
	node * tail;

	find_tail(current, tail, head);
	compare_delete(current, tail, head);


	//current = head;
	return 0;
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
void compare_delete(node * & current, node * & tail, node * & head)
{
	current = head;
	node * temp = head;
 	int head_val;
 	int current_val;
	current = current->next;
	cout << "Head Value: " << head_val << endl;
	while(current != tail)
	{
		temp = current->next;

		cout << "Current Value" << current_val << endl;
		if (head->data > current->data)
		{
			head->next = temp;
			temp->previous = head;
			delete(current);
		}
		current = temp->next;

	}
}