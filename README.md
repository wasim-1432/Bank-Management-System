# 🏦 Bank Management System (C++ File Handling Project)

A simple **Bank Management System** built using **C++** that demonstrates the use of **file handling** to perform basic banking operations like creating accounts, searching records, depositing money, and withdrawing money.

---

## 🚀 Features

- ✅ **Create Account**  
  - Auto-generates a unique account number  
  - Takes user input for details and saves to a file

- 🔍 **Search Account**  
  - Allows searching by account number  
  - Displays all details if found

- 💰 **Deposit Amount**  
  - Accepts deposit for a valid account  
  - Updates the existing balance in the file

- 💸 **Withdraw Amount**  
  - Checks for sufficient balance before withdrawing  
  - Updates the file with the new balance

---

## 🗂️ File Structure

- `dataSave4.txt`:  
  Main file where all account details are stored.

- `dataSave5.txt`:  
  Temporary file used while updating records (deposit/withdraw), later renamed.

---

## 🧾 Data Fields Stored

Each account stores the following fields:

| Field           | Type     |
|----------------|----------|
| Account Number  | Integer  |
| Name            | String   |
| Father's Name   | String   |
| CNIC            | String   |
| Phone Number    | String   |
| Email           | String   |
| Address         | String   |
| Amount          | Float    |

---

## 🛠️ How It Works

### 1. **Add Account**
```cpp
// Generates AccNo using rand()
// Takes user input for all fields
// Appends to dataSave4.txt

2. Search Account
// Takes account number
// Reads dataSave4.txt line by line
// Displays matching record

3. Deposit
// Takes account number and deposit amount
// Reads from dataSave4.txt and writes to dataSave5.txt
// If account found, updates amount
// Renames dataSave5.txt to dataSave4.txt

4. Withdraw
// Similar to Deposit, but subtracts amount after balance check

📦 Dependencies
Language: C++

Compiler: Any standard C++ compiler (GCC, Turbo C++, etc.)

💡 Future Enhancements
Add login/authentication

Use classes and OOP for better structure

Store transaction history

Use JSON or SQLite instead of plain text files
