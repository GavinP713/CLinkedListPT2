#include "Node.h"
#include "Student.h"

Node::Node() {
  stu = NULL;
  next = nullptr;
}

Node::~Node() {
  delete stu;
  next = nullptr;
}

void Node::setStudent(Student* newStu) {
  stu = newStu;
}

Student* Node::getStudent() {
  return stu;
}

void Node::setNext(Node* newNext) {
  next = newNext;
}

Node* Node::getNext() {
  return next;
}
