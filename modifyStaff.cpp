#include<iostream>
#include<cstdlib>
#include<cstring>
#include<cstdio>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

  string staffName;
  string staffID;
  string staffRole;
  string birthday;
  string staffSalary;
  string staffCasualLeave;
  string slot1;
  string slot2;
  string slot3;
  string slot4;
  string leavesleft;
  string clID;
  int n;
  int salary;
  string attribute;


    void modifyStaff(void) {
      //opening FILE
      ifstream fin;
      fin.open("staffrec.txt");
      if (fin.fail())
      {
          cout << "Error in file opening!" << endl;
          exit(1);
      }

      string staffrecord[500][10];
      for (int i=0; i<500; i++){
        for (int j=0; j<10; j++){
          fin >> staffrecord[i][j];
        }
      }

      //choose option
      cout << "\n\t\t\t========================================================";
      cout << "\n\t\t\t   Please enter option to modify by stated attribute: " ;
      cout << "\n\t\t\t========================================================";
      cout << "\n";
      cout << "\n\t\t\t____________________________________________";
      cout << "\n";
      cout << "\n\t\t\tOption 1: Staff ID";
      cout << "\n\t\t\t____________________________________________";
      cout << "\n";
      cout << "\n\t\t\tOption 2: Name";
      cout << "\n\t\t\t____________________________________________";
      cout << "\n";
      cout << "\n\t\t\tOption 3: Birthday";
      cout << "\n\t\t\t____________________________________________";
      cout << "\n";
      cout << "\n\t\t\tOption 4: Department";
      cout << "\n\t\t\t____________________________________________";
      cout << "\n";
      cout << "\n\t\t\tOption 5: Salary";
      cout << "\n\t\t\t____________________________________________";
      cout << "\n";
      cout << "\n\t\t\tOption 6: " << staffrecord[0][6];
      cout << "\n\t\t\t____________________________________________";
      cout << "\n";
      cout << "\n\t\t\tOption 7: " << staffrecord[0][7];
      cout << "\n\t\t\t____________________________________________";
      cout << "\n";
      cout << "\n\t\t\tOption 8: " << staffrecord[0][8];
      cout << "\n\t\t\t____________________________________________";
      cout << "\n";
      cout << "\n\t\t\tOption 9: " << staffrecord[0][9];
      cout << "\n\t\t\t____________________________________________";
      cout << "\n\n";

      //input option
      int optionMod;
      cout << "Your option: ";
      cin >> optionMod;
      cout << "\n";

      //declaration
      string newstaffID;
      string newstaffName;
      string newstaffRole;
      string newbirthday;
      string newstaffSalary;
      string newslot1;
      string newslot2;
      string newslot3;
      string newslot4;

      ofstream fout;


      //execute option
      switch(optionMod) {
        default:
          cout << "This option is unavailable \n";
          break;
        case 1: //modify ID
          //input ID
          cout << "Enter ID number of staff you want to modify : ";
          cin >> staffID;
          cout <<endl;

          for (int k=0; k<500; k++)
          {
            if (staffrecord[k][1] == staffID)
            {
              //input new ID
              cout << "Enter new ID number : ";
              cin >> newstaffID;
              cout <<endl;

              // outputting attribute headers
              cout << "===================================================================================================================================================================================";
              cout << endl;
              for (int i=0; i<10; i++){
                cout << setw(8) << staffrecord[0][i] << "     |" << "    " ;
              }
              cout << endl;
              cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------";
              cout << endl;

              //modify file
              staffrecord[k][1] = newstaffID;
              for (int l=0; l<10; l++) {
                cout << setw(8) <<staffrecord[k][l] << "     |" << "    " ;
              }
              cout << "\n";
            }
            else
            {
              continue;
            }
          }

          //add into file
          fout.open("staffrec.txt");
          if (fout.fail()) {
            cout << "Error in file opening!"
                << endl;
              exit(1);
            }

          for (int l=0; l<500; l++){
            if (staffrecord[l][0].length() > 0 )
            {
              for (int m=0; m<10; m++){
                fout << staffrecord[l][m] << " " ;
              }
              fout << endl;
            }
            else {
              break;
            }
          }
          fin.close();
          fout.close();
          backToMenu();
          break;
        case 2: //modify name
        cout << "Enter ID number of staff you want to modify : ";
        cin >> staffID;
        cout <<endl;

          for (int k=0; k<500; k++)
          {
            if (staffrecord[k][1] == staffID)
            {
              //input new name
              cout << "Enter new name : ";
              cin >> newstaffName;
              cout <<endl;

              // outputting attribute headers
              cout << "===================================================================================================================================================================================";
              cout << endl;
              for (int i=0; i<10; i++){
                cout << setw(8) << staffrecord[0][i] << "     |" << "    " ;
              }
              cout << endl;
              cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------";
              cout << endl;

              //modify file
              staffrecord[k][0] = newstaffName;
              for (int l=0; l<10; l++) {
                cout << setw(8) <<staffrecord[k][l] << "     |" << "    " ;
              }
              cout << "\n";
            }
            else
            {
              continue;
            }
          }

          //add into file
          fout.open("staffrec.txt");
          if (fout.fail()) {
            cout << "Error in file opening!"
                << endl;
              exit(1);
            }

          for (int l=0; l<500; l++){
            if (staffrecord[l][0].length() > 0 )
            {
              for (int m=0; m<10; m++){
                fout << staffrecord[l][m] << " " ;
              }
              fout << endl;
            }
            else {
              break;
            }
          }
          fin.close();
          fout.close();
          backToMenu();
          break;
        case 3: //modify Birthday
        cout << "Enter ID number of staff you want to modify : ";
        cin >> staffID;
        cout <<endl;

        for (int k=0; k<500; k++)
        {
          if (staffrecord[k][1] == staffID)
          {
            //input new ID
            cout << "Enter new birthday : ";
            cin >> newbirthday;
            cout <<endl;

            // outputting attribute headers
            cout << "===================================================================================================================================================================================";
            cout << endl;
            for (int i=0; i<10; i++){
              cout << setw(8) << staffrecord[0][i] << "     |" << "    " ;
            }
            cout << endl;
            cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------";
            cout << endl;

            //modify file
            staffrecord[k][3] = newbirthday;
            for (int l=0; l<10; l++) {
              cout << setw(8) <<staffrecord[k][l] << "     |" << "    " ;
            }
            cout << "\n";
          }
          else
          {
            continue;
          }
        }

        //add into file
        fout.open("staffrec.txt");
        if (fout.fail()) {
          cout << "Error in file opening!"
              << endl;
            exit(1);
          }

        for (int l=0; l<500; l++){
          if (staffrecord[l][0].length() > 0 )
          {
            for (int m=0; m<10; m++){
              fout << staffrecord[l][m] << " " ;
            }
            fout << endl;
          }
          else {
            break;
          }
        }
        fin.close();
        fout.close();
        backToMenu();
          break;
        case 4://modify department
        //input ID
        cout << "Enter ID number of staff you want to modify : ";
        cin >> staffID;
        cout <<endl;

        for (int k=0; k<500; k++)
        {
          if (staffrecord[k][1] == staffID)
          {
            //input new ID
            cout << "Enter new department : ";
            cin >> newstaffRole;
            cout <<endl;

            // outputting attribute headers
            cout << "===================================================================================================================================================================================";
            cout << endl;
            for (int i=0; i<10; i++){
              cout << setw(8) << staffrecord[0][i] << "     |" << "    " ;
            }
            cout << endl;
            cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------";
            cout << endl;

            //modify file
            staffrecord[k][2] = newstaffRole;
            for (int l=0; l<10; l++) {
              cout << setw(8) <<staffrecord[k][l] << "     |" << "    " ;
            }
            cout << "\n";
          }
          else
          {
            continue;
          }
        }

        //add into file
        fout.open("staffrec.txt");
        if (fout.fail()) {
          cout << "Error in file opening!"
              << endl;
            exit(1);
          }

        for (int l=0; l<500; l++){
          if (staffrecord[l][0].length() > 0 )
          {
            for (int m=0; m<10; m++){
              fout << staffrecord[l][m] << " " ;
            }
            fout << endl;
          }
          else {
            break;
          }
        }
        fin.close();
        fout.close();
        backToMenu();
          break;
        case 5: //modify SALARY
        //input ID
        cout << "Enter ID number of staff you want to modify : ";
        cin >> staffID;
        cout <<endl;

        for (int k=0; k<500; k++)
        {
          if (staffrecord[k][1] == staffID)
          {
            //input new salary
            cout << "Enter new salary : ";
            cin >> newstaffSalary;
            cout <<endl;

            // outputting attribute headers
            cout << "===================================================================================================================================================================================";
            cout << endl;
            for (int i=0; i<10; i++){
              cout << setw(8) << staffrecord[0][i] << "     |" << "    " ;
            }
            cout << endl;
            cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------";
            cout << endl;

            //modify file
            staffrecord[k][4] = newstaffSalary;
            for (int l=0; l<10; l++) {
              cout << setw(8) <<staffrecord[k][l] << "     |" << "    " ;
            }
            cout << "\n";
          }
          else
          {
            continue;
          }
        }

        //add into file
        fout.open("staffrec.txt");
        if (fout.fail()) {
          cout << "Error in file opening!"
              << endl;
            exit(1);
          }

        for (int l=0; l<500; l++){
          if (staffrecord[l][0].length() > 0 )
          {
            for (int m=0; m<10; m++){
              fout << staffrecord[l][m] << " " ;
            }
            fout << endl;
          }
          else {
            break;
          }
        }
        fin.close();
        fout.close();
        backToMenu();
          break;
        case 6: //modify slot 1
        //input ID
        cout << "Enter ID number of staff you want to modify : ";
        cin >> staffID;
        cout <<endl;

        for (int k=0; k<500; k++)
        {
          if (staffrecord[k][1] == staffID)
          {
            //input new slot 1
            cout << "Enter new " << staffrecord[0][6] << ": ";
            cin >> newslot1;
            cout <<endl;

            // outputting attribute headers
            cout << "===================================================================================================================================================================================";
            cout << endl;
            for (int i=0; i<10; i++){
              cout << setw(8) << staffrecord[0][i] << "     |" << "    " ;
            }
            cout << endl;
            cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------";
            cout << endl;

            //modify file
            staffrecord[k][6] = newslot1;
            for (int l=0; l<10; l++) {
              cout << setw(8) <<staffrecord[k][l] << "     |" << "    " ;
            }
            cout << "\n";
          }
          else
          {
            continue;
          }
        }

        //add into file
        fout.open("staffrec.txt");
        if (fout.fail()) {
          cout << "Error in file opening!"
              << endl;
            exit(1);
          }

        for (int l=0; l<500; l++){
          if (staffrecord[l][0].length() > 0 )
          {
            for (int m=0; m<10; m++){
              fout << staffrecord[l][m] << " " ;
            }
            fout << endl;
          }
          else {
            break;
          }
        }
        fin.close();
        fout.close();
        backToMenu();
          break;
        case 7: //modify slot2
        //input ID
        cout << "Enter ID number of staff you want to modify : ";
        cin >> staffID;
        cout <<endl;

        for (int k=0; k<500; k++)
        {
          if (staffrecord[k][1] == staffID)
          {
            //input new slot 2
            cout << "Enter new " << staffrecord[0][7] << ": ";
            cin >> newslot2;
            cout <<endl;

            // outputting attribute headers
            cout << "===================================================================================================================================================================================";
            cout << endl;
            for (int i=0; i<10; i++){
              cout << setw(8) << staffrecord[0][i] << "     |" << "    " ;
            }
            cout << endl;
            cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------";
            cout << endl;

            //modify file
            staffrecord[k][7] = newslot2;
            for (int l=0; l<10; l++) {
              cout << setw(8) <<staffrecord[k][l] << "     |" << "    " ;
            }
            cout << "\n";
          }
          else {
            break;
          }
        }
        fin.close();
        fout.close();
        backToMenu();
          break;
        case 8: //modify slot3
        //input ID
        cout << "Enter ID number of staff you want to modify : ";
        cin >> staffID;
        cout <<endl;

        for (int k=0; k<500; k++)
        {
          if (staffrecord[k][1] == staffID)
          {
            //input new slot 3
            cout << "Enter new " << staffrecord[0][8] << ": ";
            cin >> newslot3;
            cout <<endl;

            // outputting attribute headers
            cout << "===================================================================================================================================================================================";
            cout << endl;
            for (int i=0; i<10; i++){
              cout << setw(8) << staffrecord[0][i] << "     |" << "    " ;
            }
            cout << endl;
            cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------";
            cout << endl;

            //modify file
            staffrecord[k][8] = newslot3;
            for (int l=0; l<10; l++) {
              cout << setw(8) <<staffrecord[k][l] << "     |" << "    " ;
            }
            cout << "\n";
          }
          else
          {
            continue;
          }
        }

        //add into file
        fout.open("staffrec.txt");
        if (fout.fail()) {
          cout << "Error in file opening!"
              << endl;
            exit(1);
          }

        for (int l=0; l<500; l++){
          if (staffrecord[l][0].length() > 0 )
          {
            for (int m=0; m<10; m++){
              fout << staffrecord[l][m] << " " ;
            }
            fout << endl;
          }
          else {
            break;
          }
        }
        fin.close();
        fout.close();
        backToMenu();
          break;
        case 9:
        //input ID
        cout << "Enter ID number of staff you want to modify : ";
        cin >> staffID;
        cout <<endl;

        for (int k=0; k<500; k++)
        {
          if (staffrecord[k][1] == staffID)
          {
            //input new slot 4
            cout << "Enter new " << staffrecord[0][9] << ": ";
            cin >> newslot4;
            cout <<endl;

            // outputting attribute headers
            cout << "===================================================================================================================================================================================";
            cout << endl;
            for (int i=0; i<10; i++){
              cout << setw(8) << staffrecord[0][i] << "     |" << "    " ;
            }
            cout << endl;
            cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------";
            cout << endl;

            //modify file
            staffrecord[k][9] = newslot4;
            for (int l=0; l<10; l++) {
              cout << setw(8) <<staffrecord[k][l] << "     |" << "    " ;
            }
            cout << "\n";
          }
          else
          {
            continue;
          }
        }

        //add into file
        fout.open("staffrec.txt");
        if (fout.fail()) {
          cout << "Error in file opening!"
              << endl;
            exit(1);
          }

        for (int l=0; l<500; l++){
          if (staffrecord[l][0].length() > 0 )
          {
            for (int m=0; m<10; m++){
              fout << staffrecord[l][m] << " " ;
            }
            fout << endl;
          }
          else {
            break;
          }
        }
        fin.close();
        fout.close();
        backToMenu();
          break;
        }
    }
