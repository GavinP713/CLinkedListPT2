#include <iostream>
#include <cstring>
#include "Node.h"
#include "Student.h"
using namespace std;

void add(Node *head, char input[128]);
void remove();
void print();
double average();

int main() {
  Node *head = NULL;

  char input[128];
  cin >> input;

  // main loop
  while (true) {
    // commands
    if (strcmp(input, "add") == 0) {
      add(head, input);
    }
    else if (strcmp(input, "delete") == 0) {
      remove();
    }
    else if (strcmp(input, "print") == 0) {
      print();
    }
    else if (strcmp(input, "average") == 0) {
      average();
    }
    else if (strcmp(input, "quit") == 0) {
      return 0;
    }
    else {
      cout << "Unkown Command" << endl;
    }
  }
  
  return 0;
}

void add(Node *head, char input[128]) {
  // initialize student and prompt for info
  Student *student = new Student();
  cout << "Name: "; cin >> input; strcpy(student->name, input);
  cout << "ID: "; cin >> input;
  cout << "GPA: "; cin >> input;

  // use and intialize head
  Node *node = NULL;
  if (head == NULL) {
    node = new Node();
  }
  else {
    // get end node recursively
    node = head;
    while (node->next != NULL) {
      node = node->next;
    }
    
    // add new node to end
    node->next = new Node();
    node = node->next;
  }

  // assign student to node
  node->setStudent(student);
}

void remove(Node *head, char input[128]) {
  // prompt for and set id
  int id;
  cout << "ID: "; cin >> input;

  // search through list
  Node *node = head;
}

void print() {
}

double average() {
  return 1;
}

void sort() {
}
