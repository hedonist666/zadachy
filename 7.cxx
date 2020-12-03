//stack
#include <iostream>
#include <string>

using namespace std;

struct Node {
    int v;
    Node* next;   
    Node(int v) : v{v}, next{nullptr} {};
};

struct List {
    Node* head;
    Node* tail;
    List() : head{nullptr}, tail{nullptr} {};
    ~List() {
        while (head != nullptr) {
            Node* tmp = head;
            head = head->next;
            delete tmp;
        }
    }
    void add(int v) {
        if (tail == nullptr) {
            tail = new Node(v);
        }
        else {
            tail->next = new Node(v);
            tail = tail->next;
        }
        if (head == nullptr) {
            head = tail;
        }
    }
    void show() {
        for (Node* tmp = head; tmp != nullptr; tmp = tmp->next) {
            cout << tmp->v << ' '; 
        }
        cout << endl;
    }
};


int main() {
    int v;
    List lst;
    while (cin >> v) {
        lst.add(v);
    }
    lst.show();
}
