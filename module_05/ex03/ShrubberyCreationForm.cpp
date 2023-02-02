#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shrubbery Creation", 145, 137) {
    this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : Form(other) {
    this->target = other.target;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) {
    if (this != &other) {
        Form::operator=(other);
        this->target = other.target;
    }
    return *this;
}



void ShrubberyCreationForm::execute(const Bureaucrat& executor) const {
    checkExecution(executor);
    std::ofstream file;
    file.open(this->target + "_shrubbery");
    file << "    cxcxcc c  ccxcc" << std::endl;
    file << "  ccxcxc ccc  cxcxccc" << std::endl;
    file << " cccc xxcxcc ccc cccx" << std::endl;
    file << "  cxc c cxcxc  xcxxcxc" << std::endl;
    file << "  cxc xccxcccc c ccc" << std::endl;
    file << "    ccc\\cc\\  /c/c" << std::endl;
    file << "        \\ \\/ /" << std::endl;
    file << "         |   /" << std::endl;
    file << "         |  |" << std::endl;
    file << "         |  |" << std::endl;
    file << "         |  |" << std::endl;
    file << "         |  |" << std::endl;
    file << "         |  |" << std::endl;
    file << "  ______/____\\____" << std::endl;
    file << "  .....//||||\\...." << std::endl;
    file.close();
}