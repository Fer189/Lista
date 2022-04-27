#include <iostream>
#include "Lista.h"

int main() {
  Node<float> list(1.3);
  list.push(4.5);
  list.push(6.34);
  list.showList();
  list.push(2.1);
  list.showList();
  list.pop();
  list.showList();
  list.insert(1, 8.3);
  list.showList();
  list.del(6.34);
  list.showList();
  list.delIndex(1);
  list.showList();
}