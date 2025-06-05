//// https://www.reddit.com/r/cpp_questions/comments/13qp1dw/so_what_is_an_encapsulation_exactly/
//// https://stackoverflow.com/questions/73723151/how-to-achieve-encapsulation-in-c-project
//// https://stackoverflow.com/questions/17847719/how-do-you-do-true-encapsulation-in-c?rq=3
//
//#include <iostream>
//#include <string>
//class BankAccount {
//private:
//	std::string accountNumber;
//	double balance;
//public:
//	BankAccount(std::string acc, double bal) : accountNumber(acc), balance(bal) {}
//	double getBalance() const { return balance; }
//	void deposit(double amount) {
//		if (amount > 0) balance += amount;
//	}
//	bool withdraw(double amount) {
//		if (amount > 0 && amount <= balance) {
//			balance -= amount;
//			return true;
//		}
//		return false;
//	}
//	std::string getAccountNumber() const { return accountNumber; }
//};
//int main() {
//	BankAccount acc("AB1234", 1000.0);
//	/*std::cout << acc.accountNumber << std::endl;*/
//	acc.deposit(500.0);
//	acc.withdraw(200.0);
//	std::cout << acc.getAccountNumber() << ": " << acc.getBalance() << std::endl;
//	return 0;
//}