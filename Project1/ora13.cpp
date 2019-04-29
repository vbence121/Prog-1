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
	cout << "Task " << head->data << " is done.\n";
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

Elem* firstToLast(Elem* head) {
	if (!head || !head->next) return head;
	Elem* akt = head->next;
	Elem* ujelso = head->next;
	while (akt->next) {
		akt = akt->next;
	}
	akt->next = head;
	head->next = nullptr;
	return ujelso;
}

Elem* removeORAdd(Elem* head, string input) {
	if (!head) return addFirst(head, input);
	if (head->data == input) {
		return deleteFirst(head);
	}
	Elem* akt = head;
	bool van = false;
	while (akt->next) {
		if (akt->next->data == input) {
			Elem* torlendo = akt->next;
			cout << "Task " << torlendo->data << " is done.\n";
			akt->next = torlendo->next;
			delete torlendo;
			break;
			}
		akt = akt->next;
	}
	Elem* uj = new Elem;
	akt->next = uj;
	uj->data = input;
	uj->next = nullptr;
	return head;
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
		if (input == "not today") {
			// elem elso elemet a lista vegere teszi
			head = firstToLast(head);
			printlist(head);
			continue;
		}
		//head = addFirst(head, input);
		head = removeORAdd(head, input); // megkeresi a listaban ha bennne van kitorli ha nincs hozza fuzi a vegehez
		printlist(head);
	} while (input!="exit");
	deleteList(head);
}