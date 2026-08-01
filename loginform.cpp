#include <iostream>
#include <fstream>
#include <limits>
#include <string>
using namespace std;

class LoginApp
{
  public:
    void login();
    void signup();
    void forgotPassword();
    void exitProgram();
};

int main()
{
  int choice;
  LoginApp app;

  cout << "\n1- Login";
  cout << "\n2- Sign up";
  cout << "\n3- Exit";
  cout << "\n4- Forgot Password";
  cout << "\nEnter your choice : ";
  cin >> choice;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  switch(choice)
  {
    case 1:
      app.login();
      break;
    case 2:
      app.signup();
      break;
    case 3:
      app.exitProgram();
      break;
    case 4:
      app.forgotPassword();
      break;
    default:
      cout << "\nInvalid choice";
  }

  cout << "\nThank you for using the program";
  return 0;
}

void LoginApp::signup()
{
  string username, password;
  cout << "\nEnter username : ";
  getline(cin, username);
  cout << "\nEnter password : ";
  getline(cin, password);

  ofstream file;
  file.open("login.txt", ios::app);
  file << username << " " << password << endl;
  file.close();
  cout << "\nSign up successful";
}

void LoginApp::login()
{
  string username, password, u, p;
  cout << "\nEnter username : ";
  getline(cin, username);
  cout << "\nEnter password : ";
  getline(cin, password);

  ifstream file;
  file.open("login.txt");
  while(file >> u >> p)
  {
    if(u == username && p == password)
    {
      cout << "\nLogin successful";
      return;
    }
  }
  cout << "\nInvalid username or password";
}

void LoginApp::forgotPassword()
{
  string username, password, u, p;
  cout << "\nEnter username : ";
  getline(cin, username);

  ifstream file;
  file.open("login.txt");
  while(file >> u >> p)
  {
    if(u == username)
    {
      cout << "\nYour password is : " << p;
      return;
    }
  }
  cout << "\nUsername not found";
}

void LoginApp::exitProgram()
{
  cout << "\nExiting the program...";
}
