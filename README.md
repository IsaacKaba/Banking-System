# 🏦 Mini Banking System  

[![Build](https://img.shields.io/badge/build-passing-brightgreen)]()  
[![Language](https://img.shields.io/badge/language-C-blue)]()  
[![License](https://img.shields.io/badge/license-MIT-orange)]()  

A **command-line banking application** that simulates basic banking operations: creating accounts, depositing and withdrawing money, and checking balances.  

This project demonstrates **core programming concepts** such as:  
- *Data Structures*  
- *File Handling* (data persistence)  
- *Business Logic*  

---

### 🚀 Features

- **Create Account**  
  Enter your name and details to create a new account. Each account gets a **unique account number** and starts with a **zero balance**.  

- **View Account Information**  
  Display account details (owner’s name, account number, and balance) by entering the account number.  

- **Deposit Money**  
  Add funds to an account. The **balance is updated and saved automatically**.  

- **Withdraw Money**  
  Withdraw funds if sufficient balance is available. The system prevents overdrafts and shows an **error message** if funds are insufficient.  

- **List All Accounts**  
  An **admin feature** that displays all registered accounts with basic information.  

- **Data Persistence**  
  All data is stored in a file:
  

  Accounts are **loaded at startup** and **saved after each operation**, ensuring nothing is lost.  

---

### 📌 Why This Project?

This project is **more than just a coding exercise** — it demonstrates skills that are highly valued:  

- **Data Structures** → Efficient data organization and management.  
- **File Management** → Persistent storage for reliable data handling.  
- **Business Logic** → Real-world scenarios with validation, unique IDs, and error handling.  

---

#### 📂 Project Structure
```sh
Mini-Banking-System/
├── src/
│ ├── main.c
│ ├── account_manager.c
│ ├── account_manager.h
│ ├── file_manager.c
│ ├── file_manager.h
├── data/
│ └── accounts.dat
├── README.md
├── Makefile
```
---
📝 Getting Started

Clone this repository:
```sh

git clone https://github.com/your-username/Mini-Banking-System.git
cd Mini-Banking-System
```

### ⚙️ How to Build and Run
```sh
make
./banking_system
