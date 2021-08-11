#include<iostream>
#include <iomanip>
#include<string.h>

int acno,acno_t;
std::string name;
std::string password;
std::string password_t;
float Che = 0,Sav = 0, deposit, withdraw;
char type, type_t, to_do;

void create_account()
{
  std::cout<<"\nEnter The account No: ";
  std::cin>>acno;
  std::cout<<"\n\nEnter The Name of The account Holder: ";
  getline(cin,name);
  std::cout<<"\n\nEnter your password: ";
  getline(cin,password);
  Type_f:
  std::cout<<"\nEnter Type of The account (C/S): ";
  std::cin>>type;
  type=toupper(type);
  if(type == 'C') 
  {
    Che_f:
    std::cout<<"\nEnter The Initial amount >=1000 for current: ";
    std::cin>> Che;
    if(Che < 1000)
    {
      std::cout<<"Please enter The Initial amount >=1000 for current.";
      Che = 0;
      goto Che_f;
    }
  }
  else if(type == 'S')
  {
    Sav_f:
    std::cout<<"\nEnter The Initial amount >=500 for savings: ";
    std::cin>> Sav;
    if(Sav < 500)
    {
      std::cout<<"Please enter The Initial amount >=500 for savings.";
      Sav = 0;
      goto Sav_f;
    }
  }
  else
  {
    std::cout<<"Please enter (C/S)";
    goto Type_f;
  }
  std::cout<<"\n\n\nYour account is created...\n";
}


void show_account()
{
  num_f_s:
  std::cout<<"\nAccount No: ";
  std::cin>>acno_t;
  if(acno_t == acno)
  {
    password_f_s:
    std::cout<<"\nAccount Holder password: ";
    getline(cin,password_t);
    if(password_t == password)
    {
      type_f_s:
      std::cout<<"\nType of Account, ";
      std::cout<<name;
      std::cout<<" .(C/S): ";
      std::cin>>type_t;
      type_t = toupper(type_t);
      if(type_t == 'S')
      {
        std::cout<<"\nYour savings is - $";
        std::cout<<Sav;
        std::cout<<"\n";
      }
      else if(type_t == 'C')
      {
        std::cout<<"Your current amount is - $";
        std::cout<<Che;
        std::cout<<"\n";
      }
      else
      {
        std::cout<<"Please enter a valid type of Account(C/S)";
        goto type_f_s;
      }
    }
    else
    {
      std::cout<<"Wrong password";
      goto password_f_s;
    }
  }
  else
  {
    std::cout<<"Wrong account number";
    goto num_f_s;
  }
}

void deposit_money()
{
  num_f_d:
  std::cout<<"\nAccount No: ";
  std::cin>>acno_t;
  if(acno_t == acno)
  {
    password_f_d:
    std::cout<<"\nAccount Holder password: ";
    getline(cin,password_t);
    if(password_t == password)
    {
      type_f_d:
      std::cout<<"\nType of Account, ";
      std::cout<<name;
      std::cout<<".(C/S): ";
      std::cin>>type_t;
      type_t = toupper(type_t);
      if(type_t == 'S')
      {
        std::cout<<"\nYou currently have now - $";
        std::cout<<Sav;
        negative_s_d:
        std::cout<<"\nHow much would you like to deposit: ";
        std::cin>>deposit;
        if(deposit>0)
        {
          Sav += deposit;
          std::cout<<"\nYou have now - $";
          std::cout<<Sav;
          std::cout<<"\n";
        }
        else
        {
          std::cout<<"Please input positive number.\n";
          goto negative_s_d;
        }
      }
      else if(type_t == 'C')
      {
        std::cout<<"\nYou currently have now - $";
        std::cout<<Che;
        negative_c_d:
        std::cout<<"\nHow much would you like to deposit: ";
        std::cin>>deposit;
        if(deposit>0)
        {
          Che += deposit;
          std::cout<<"\nYou have now - $";
          std::cout<<Che;
          std::cout<<"\n";
        }
        else
        {
          std::cout<<"Please input positive number.\n";
          goto negative_c_d;
        }
      }
      else
      {
        std::cout<<"Please enter a valid type of Account(C/S)";
        goto type_f_d;
      }
    }
    else
    {
      std::cout<<"Wrong password";
      goto password_f_d;
    }
  }
  else
  {
    std::cout<<"Wrong account number";
    goto num_f_d;
  }
}

void withdraw_money()
{
  num_f_w:
  std::cout<<"\nAccount No: ";
  std::cin>>acno_t;
  if(acno_t == acno)
  {
    password_f_w:
    std::cout<<"\nAccount Holder password: ";
    getline(cin,password_t);
    if(password_t == password)
    {
      type_f_w:
      std::cout<<"\nType of Account, ";
      std::cout<<name;
      std::cout<<".(C/S): ";
      std::cin>>type_t;
      type_t = toupper(type_t);
      if(type_t == 'S')
      {
        std::cout<<"\nYou currently have now - $";
        std::cout<<Sav;
        negative_s_w:
        std::cout<<"\nHow much would you like to withdraw: ";
        std::cin>>withdraw;
        if(withdraw>0)
        {
          Sav -= withdraw;
          std::cout<<"\nYou have now - $";
          std::cout<<Sav;
          std::cout<<"\n";
        }
        else
        {
          std::cout<<"Please input positive number.\n";
          goto negative_s_w;
        }
      }
      else if(type_t == 'C')
      {
        std::cout<<"\nYou currently have now - $";
        std::cout<<Che;
        negative_c_w:
        std::cout<<"\nHow much would you like to withdraw: ";
        std::cin>>withdraw;
        if(withdraw>0)
        {
          Sav -= withdraw;
          std::cout<<"\nYou have now - $";
          std::cout<<Che;
          std::cout<<"\n";
        }
        else
        {
          std::cout<<"Please input positive number.\n";
          goto negative_c_w;
        }
      }
      else
      {
        std::cout<<"Please enter a valid type of Account(C/S)";
        goto type_f_w;
      }
    }
    else
    {
      std::cout<<"Wrong password";
      goto password_f_w;
    }   
  }
  else
  {
    std::cout<<"Wrong account number";
    goto num_f_w;
  }
}

int main() 
{
  bool Continue_b = true;
  create_account();
  while(Continue_b == true)
  {
    std::cout<<"What do you want to do?(S,D,W,E)";
    std::cin>>to_do;
    to_do = toupper(to_do);
    if(to_do == 'S')
    {
      show_account();
    }
    else if(to_do == 'D')
    {
      deposit_money();
    }
    else if(to_do == 'W')
    {
      withdraw_money(); 
    }
  }
}