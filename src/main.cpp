#include <chrono>
#include <iostream>
#include "worker.h"
#include "Player.h"

// worker class implementation

void rw_l ()
{
    Worker worker = Worker("maetyu", 15, 32500, 40);

    int id = worker.return_id();
    int salary = worker.r_slry();
    int whours = worker.r_whrs();

    std::cout << "ID: " << id << std::endl;
    std::cout << "Weekly Hours: " << whours<< std::endl;
    std::cout << "Salary: " << salary << std::endl;
}

// implementing player class and number array loops

int main()
{
  int num[7] = {11, 5, 2, 8, 9, 42, 21};
  int *ptr;

  ptr = num;
  
  std::cout<< "Number Array &Address: " << ptr << std::endl;

  for(int i = 0; i < 7; i++)
  {
      std::cout<< i << ": "<< ptr[i] << std::endl;
  }

  rw_l();

  Player player1 = Player("itzmaetyu", 73.5, 89.3, 65.3, 100.0);
  int ppow = player1.player_power();
  std::cout << player1.player_name << "'s Power Level: " << ppow << std::endl;
  player1.attack_opp();

  return 0;
}

// practising with pointers

void cptr_tester()
{
    std::string name = "maetyu";
    int age = 15;

    std::string *pn = &name;
    int *pa = &age;

    std::cout << "" << std::endl;

    // address

    std::cout << pn << std::endl;
    std::cout << pa << std::endl;

    std::cout << "" << std::endl;

    // output
    std::cout << "Name: " << *pn << std::endl;
    std::cout << "Age: " << *pa << std::endl;

    std::cout << "" << std::endl;

    std::cout << pn << std::endl;
    std::cout << pa << std::endl;

    std::cout << "" << std::endl;

    *pn = "Princess Leia";
    *pa = 23;

    std::cout << "Name: " << *pn << std::endl;
    std::cout << "Age: " << *pa << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
}

