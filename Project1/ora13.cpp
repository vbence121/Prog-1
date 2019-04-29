#include <iostream>
#include <string>

using namespace std;

struct Elem {
	string data;
	Elem* next;
};

struct Lista {
	Elem* head;
	int count;
	Elem* tail;
};

Elem* addFirst(Elem* head, string data) {
	Elem* uj = new Elem;
	uj->data = data;
	uj->next = head;
	return uj;
}

void printlist(Elem* head) {
	cout << "A lista tartalma: \n";
	while (head) {
		cout << head->data << endl;
		head = head->next;
	}
}

Elem* deleteFirst(Elem* head) {
	if (!head) return head;
	cout << "Task " << head->data << "is done.\n" << endl;
	Elem* kov = head->next;
	delete head;
	return kov;
}

void deleteList(Elem* head) {
	while (head) {
		Elem* kov = head->next;
		delete head;
		head = kov;
		// vagy deleteFirst(head);
	}
}

int main() {
	Elem* head = nullptr;
	string input;
	do {
		getline(cin, input);
		if (input == "exit")
			break;
		if (input == "done" ) {
			head = deleteFirst(head);
			continue;
		}
		head = addFirst(head, input);
		printlist(head);
	} while (input!="exit");
	deleteList(head);
}