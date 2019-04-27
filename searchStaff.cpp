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

    void searchStaff(void) {
      cout << "\n\t\t\t========================================================";
      cout << "\n\t\t\t   Please enter option to search by stated attribute: " ;
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
      cout << "\n\n";

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

    int option;
    cout << "Your option: ";
    cin >> option;
    cout << "\n";

    if ( option == 1){
        cout << "Enter ID number: ";
        string idnum;
        cin >> idnum;
        cout << endl;
        bool found = false;

    // outputting attribute headers
    cout << "===================================================================================================================================================================================";
    cout << endl;
    for (int i=0; i<10; i++){
      cout << setw(8) << staffrecord[0][i] << "     |" << "    " ;
    }

    // output searched staff details
    for (int k=0; k<500; k++){
      if ( staffrecord[k][1] == idnum) {
        cout << "\n";
        cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl;
        for (int l=0; l<10; l++){
          cout << setw(8) <<staffrecord[k][l] << "     |" << "    " ;
        }
        found = true;
        cout << "\n";
      }
      else if ((k==499) && (found == false))
      {
        cout << "Employee not found!" << endl;
      }
    }
    cout << endl;
  }

    else if (option == 2){

        cout << "Enter employee's name: ";
        string name;
        cin >> name;
        cout << endl;
        bool found = false;

        // outputting attribute headers
        cout << "===================================================================================================================================================================================";
        cout << endl;
        for (int i=0; i<10; i++){
          cout << setw(8) << staffrecord[0][i] << "     |" << "    " ;
        }

        // output searched staff details
        for (int m=0; m<500; m++){
          if ( staffrecord[m][0] == name) {
            cout << "\n";
            cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------";
            cout << endl << endl;
            for (int n=0; n<10; n++){
              cout << setw(8) <<staffrecord[m][n] << "     |" << "    " ;
            }
            found = true;
            cout << "\n";
          }
          else if ((m==499) && (found == false))
          {
            cout << "Employee not found!" << endl;
          }
        }
        cout << endl;
      }

      else if (option == 3){

          cout << "Enter birthday in this format (DD/MM/YYYY): ";
          string bday;
          cin >> bday;
          cout<< endl;
          bool found = false;

          // outputting attribute headers
          cout << "===================================================================================================================================================================================";
          cout << endl;
          for (int i=0; i<10; i++){
            cout << setw(8) << staffrecord[0][i] << "     |" << "    " ;
          }

          // output searched staff details
          for (int p=0; p<500; p++){
            if ( staffrecord[p][3] == bday) {
              cout << "\n";
              cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------";
              cout << endl << endl;
              for (int q=0; q<10; q++){
                cout << setw(8) << staffrecord[p][q] << "     |" << "    " ;
              }
              found = true;
              cout << "\n";
            }
            else if ((p==499) && (found == false))
            {
              cout << "Employee not found!" << endl;
            }
          }
          cout << endl;
        }

        else if (option == 4){

            cout << "Enter employee's role: ";
            string role;
            cin >> role;
            cout << endl;
            bool found = false;

            // outputting attribute headers
            cout << "===================================================================================================================================================================================";
            cout << endl;
            for (int i=0; i<10; i++){
              cout << setw(8) << staffrecord[0][i] << "     |" << "    " ;
            }

            // output searched staff details
            for (int r=0; r<500; r++){
              if ( staffrecord[r][2] == role) {
                cout << "\n";
                cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------";
                cout << endl << endl;
                for (int s=0; s<10; s++){
                  cout << setw(8) << staffrecord[r][s] << "     |" << "    " ;
                }
                found = true;
                cout << "\n";
              }
              else if ((r==499) && (found == false))
              {
                cout << "Employee not found!" << endl;
              }
            }
            cout << endl;
          }

      fin.close();
      backToMenu();
    }
