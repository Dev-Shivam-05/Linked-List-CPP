#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *link;
};

int main()
{
    Node *n1 = nullptr;
    n1 = new Node();
    cout << "Enter A Number :- ";
    cin >> n1->data;
    n1->data = 25;
    n1->link = NULL;

    Node *n2 = nullptr;
    n2 = new Node();
    cout << "Enter Another Number :- ";
    cin >> n2->data;
    n2->link = NULL;
    n1->link = n2;

    Node *n3 = nullptr;
    n3 = new Node();
    cout << "Enter One More Number :- ";
    cin >> n3->data;
    n3->link = NULL;
    n2->link = n3;

    cout << endl << "---- Node - 1 ----" << endl;
    cout << "Address = " << n1 << endl;
    cout << "Data = " << n1->data << endl;
    cout << "Next Node Address = " << n1->link << endl << endl;
    cout << "---- Node - 2 ----" << endl;
    cout << "Address = " << n2 << endl;
    cout << "Data = " << n2->data << endl;
    cout << "Next Node Address = " << n2->link << endl << endl;
    cout << "---- Node - 3 ----" << endl;
    cout << "Address = " << n3 << endl;
    cout << "Data = " << n3->data << endl;
    cout << "Next Node Address = " << n3->link << endl;

    return 0;
}