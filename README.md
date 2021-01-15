
# Bank Managment System

**Bank management system** is developed in C language.

## Overview

![bank-managment-system menu](https://raw.githubusercontent.com/darshan09200/Bank-Management-System/master/system_menu.png)

This is just an overview of the menu once you have signed in or signed up.

**It also uses concept of file handling**

## Features
- Sign In / Sign Up
- Add / Delete Customer (with nominee)
  - Single Account
  - Joint Account
- Generate Credit / Debit Card
- Search Customer
- Withdraw / Deposit
- Cash / Cheque Transactions
- New Cheque Book
- View Passbook

## First Run

![bank-managment-system first run](https://raw.githubusercontent.com/darshan09200/Bank-Management-System/master/system_init.gif)

When you run the code for the first time it will create some necessary folders and files required for the code to be operational completely. Even if you delete the folders next time when you run the code the folders and files will be created when necessary but the data won't be persisted.

## Sign In / Sign Up

![bank-managment-system sign up](https://raw.githubusercontent.com/darshan09200/Bank-Management-System/master/account_create.gif)

The first time you run this code it will ask you to create an account if it doesn't exist.

It store credentials in file in basic txt file in plain text. If the file is deleted it will ask you to create an account if the file is not found while running the code.

After signing in 

## Add / Delete Customer (with nominee)

![bank-managment-system add-customer-single-account](https://raw.githubusercontent.com/darshan09200/Bank-Management-System/master/create_customer.gif)

The above gif demonstrates the following:
- Creation of a new customer with single account and nomimee
- Demonstration of validation applied on phone number and email
  - Phone Number validation
    - Should be 10 characters only
    - Numbers only
  - Email validation
    - Min 4 characters before @ 
    - Min 4 characters after @ and before . (in case professional email is there the domain should be min 4 length)
    - Min 2 characters after . (in case of professional email min top level domain has min length 2)
    
You can try creating a new customer by selecting joint account.

Note: Keep a note of the account number generated. Don't forget the number of 0's.
## Generate Credit / Debit Card

While creating customer after all the process is completed you would be asked to create debit card and/or credit card. Based on your selection it would be generated.
You might be worried that using C we can only select one option at a time. Dont worry you can still create the second card once the first card is created. Thanks to do-while loop.

# Search Customer

Once you select this option you need to enter the account number. (Forgot! Told you to rember it)


**README.md pending, Will update soon. Sorry for inconvenience**

- Withdraw / Deposit
- Cash / Cheque Transactions
- New Cheque Book
- View Passbook
