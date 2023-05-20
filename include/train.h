// Copyright 2022 NNTU-CS
#ifndef INCLUDE_TRAIN_H_
#define INCLUDE_TRAIN_H_

class Train {
 private:
  struct Cage {
    Cage():light(false), next(nullptr), prev(nullptr) {}
    bool light;
    Cage *next;
    Cage *prev;
  };
  int countOp;
  int amount;
  Cage* head;
  Cage* tail;
 public:
  Train();
  void addCage(bool light);
  int getLength(); 
  int getOpCount();    
};
#endif  // INCLUDE_TRAIN_H_
