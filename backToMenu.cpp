#include<iostream>
#include<cstdlib>
#include<cstring>
#include<cstdio>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

#include "backToMenu.h"
#include "main.h"

    void backToMenu(void) {
      int m;
      cout << "Enter 0 to go back to menu: ";
      cin >> m;
      if (m==0) {
        menu();
      }
    }
