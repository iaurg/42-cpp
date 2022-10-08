#include "Account.hpp"
#include <ctime>
#include <iomanip>
#include <iostream>

int Account::_nbAccounts, Account::_totalAmount, Account::_totalNbDeposits, Account::_totalNbWithdrawals = 0;

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

static void printOut(std::string str, int value, bool useSemicolon)
{
    std::cout << str;
    std::cout << value;
    if (useSemicolon)
        std::cout << ";";
}

Account::Account(int initial_deposit)
{
    _accountIndex = _nbAccounts++;
    this->_totalAmount += initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _amount = initial_deposit;
    _displayTimestamp();
    printOut("index:", _accountIndex, true);
    printOut("amount:", _amount, true);
    std::cout << "created" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Account::~Account()
{
    _nbAccounts--;
    _displayTimestamp();
    printOut("index:", _accountIndex, true);
    printOut("amount:", _amount, true);
    std::cout << "closed" << std::endl;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Account::displayAccountsInfos(void)
{
    _displayTimestamp();
    printOut("accounts:", _nbAccounts, true);
    printOut("total:", _totalAmount, true);
    printOut("deposits:", _totalNbDeposits, true);
    printOut("withdrawals:", _totalNbWithdrawals, false);
    std::cout << std::endl;
}

static void fillWidth(int width, int value)
{
    std::cout << std::setw(width) << std::setfill('0') << value;
}

void Account::_displayTimestamp(void)
{
    time_t now = time(0);
    tm* ltm = localtime(&now);
    std::cout << "[" << 1900 + ltm->tm_year << ltm->tm_mon + 1;
    fillWidth(2, ltm->tm_mday);
    std::cout << "_";
    fillWidth(2, ltm->tm_hour);
    fillWidth(2, ltm->tm_min);
    fillWidth(2, ltm->tm_sec);
    std::cout << "] ";
}

void Account::makeDeposit(int deposit)
{
    _displayTimestamp();
    printOut("index:", _accountIndex, true);
    printOut("p_amount:", _amount, true);
    printOut("deposit:", deposit, true);
    printOut("amount:", _amount + deposit, true);
    printOut("nb_deposits:", _nbDeposits + 1, false);
    std::cout << std::endl;
    this->_amount += deposit;
    this->_totalAmount += deposit;
    this->_nbDeposits++;
    this->_totalNbDeposits++;
}

bool Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    if (this->_amount < withdrawal) {
        printOut("index:", this->_accountIndex, true);
        printOut("p_amount:", this->_amount, true);
        std::cout << "withdrawal:refused" << std::endl;
        return false;
    }
    printOut("index:", this->_accountIndex, true);
    printOut("p_amount:", this->_amount, true);
    printOut("withdrawal:", withdrawal, true);
    printOut("amount:", this->_amount - withdrawal, true);
    printOut("nb_withdrawals:", this->_nbWithdrawals + 1, false);
    std::cout << std::endl;
    this->_amount -= withdrawal;
    this->_totalAmount -= withdrawal;
    this->_nbWithdrawals++;
    _totalNbWithdrawals++;
    return true;
}

int Account::checkAmount(void) const { return this->_amount; }

void Account::displayStatus(void) const
{
    _displayTimestamp();
    printOut("index:", this->_accountIndex, true);
    printOut("amount:", this->_amount, true);
    printOut("deposits:", this->_nbDeposits, true);
    printOut("withdrawals:", this->_nbWithdrawals, false);
    std::cout << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

int Account::getNbAccounts(void) { return _nbAccounts; }

int Account::getTotalAmount(void) { return _totalAmount; }

int Account::getNbDeposits(void) { return _totalNbDeposits; }

int Account::getNbWithdrawals(void) { return _totalNbWithdrawals; };

/* ************************************************************************** */
