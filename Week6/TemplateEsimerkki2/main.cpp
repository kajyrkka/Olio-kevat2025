#include <iostream>

// Linkitetyn listan solmu
template <typename T>
class Node {
public:
    T data;
    Node* next;

    Node(T value) : data(value), next(nullptr) {}
};

// Linkitetty lista -luokka
template <typename T>
class LinkedList {
private:
    Node<T>* head;

public:
    LinkedList() : head(nullptr) {}

    // Alkion lisääminen listan loppuun
    void append(T value) {
        Node<T>* newNode = new Node<T>(value);
        if (!head) {
            head = newNode;
        } else {
            Node<T>* temp = head;
            while (temp->next) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    // Listan tulostaminen
    void print() const {
        Node<T>* temp = head;
        while (temp) {
            std::cout << temp->data << " -> ";
            temp = temp->next;
        }
        std::cout << "nullptr" << std::endl;
    }

    // Destruktori muistin vapauttamiseen
    ~LinkedList() {
        Node<T>* temp;
        while (head) {
            temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main() {
    // Kokonaislukulista
    LinkedList<int> intList;
    intList.append(1);
    intList.append(2);
    intList.append(3);
    intList.print(); // 1 -> 2 -> 3 -> nullptr

    // Merkkijonolista
    LinkedList<std::string> strList;
    strList.append("Hello");
    strList.append("World");
    strList.append("!");
    strList.print(); // Hello -> World -> ! -> nullptr

    return 0;
}
