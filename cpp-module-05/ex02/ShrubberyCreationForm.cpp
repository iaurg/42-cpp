#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target)
    : AForm("ShrubberyCreationForm", 145, 137)
    , _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& src)
    : AForm(src)
    , _target(src._target)
{
    *this = src;
}

/*z
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const& rhs)
{
    if (this != &rhs) {
        this->_target = rhs.getTarget();
    }
    return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
    std::ofstream file;
    std::stringstream ss;

    ss << this->_target << "_shrubbery";
    file.open(ss.str().c_str());
    if (!file.is_open()) {
        throw ShrubberyCreationForm::FileOpenException();
    }
    file << "          .     .  .      +     .      .          ." << std::endl;
    file << "     .       .      .     #       .           ." << std::endl;
    file << "        .      .         ###            .      .      ." << std::endl;
    file << "      .      .   \"#:. .:##\"##:. .:#\"  .      ." << std::endl;
    file << "          .      . \"####\"###\"####\"  ." << std::endl;
    file << "       .     \"#:.    .:#\"###\"#:.    .:#\"  .        .       ." << std::endl;
    file << "  .             \"#########\"#########\"        .        ." << std::endl;
    file << "        .    \"#:.  \"####\"###\"####\"  .:#\"   .       ." << std::endl;
    file << "     .     .  \"#######\"\"##\"##\"\"#######\"                  ." << std::endl;
    file << "                .\"##\"#####\"#####\"##\"           .      ." << std::endl;
    file << "    .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     ." << std::endl;
    file << "      .     \"#######\"##\"#####\"##\"#######\"      .     ." << std::endl;
    file << "    .    .     \"#####\"\"#######\"\"#####\"    .      ." << std::endl;
    file << "            .     \"      000      \"    .     ." << std::endl;
    file << "       .         .   .   000     .        .       ." << std::endl;
    file << ".. .. ..................O000O........................ ...... ..." << std::endl;
    if (file.bad()) {
        throw ShrubberyCreationForm::FileErrorException();
    }
    file.close();
}

const char* ShrubberyCreationForm::FileOpenException::what() const throw()
{
    return "Shrubbery file open error";
}

const char* ShrubberyCreationForm::FileErrorException::what() const throw()
{
    return "Shrubbery file error";
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string ShrubberyCreationForm::getTarget() const
{
    return _target;
}

/* ************************************************************************** */
