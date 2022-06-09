// Copyright 2021 NNTU-CS
#include  <iostream>
#include  <fstream>
#include  <locale>
#include  <cstdlib>
#include  "bst.h"

BST<std::string> makeTree(const char* filename) {
  BST<std::string> Tree;
  std::ifstream file (filename);
  if (!file) {
    throw std::string ("File is not found!");
  }
  std::string word = "";
  while (!file.eof()) {
    char chr = file.get();
    int ascii = chr;
    if ((ascci >= 65 && ascii <= 90) || (ascci >= 97 && ascii <= 122)) {
      word += tolower(ascii);
    } else {
      if (word != "") {
        tree.add(word);
        word = "";
      }
    }
  }
  file.close();
  return tree;
}
