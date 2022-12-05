#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug(void)
{
    std::cout << "[debug]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
    std::cout << "[info]\nI cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "[warning]\nI think I deserve to have some extra bacon for free.\n I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
    std::cout << "[error]\nThis is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level )
{
    void (Harl::*func[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levels[4] = {"debug", "info", "warning", "error"};

    int i = 0;
    for (; i < 4; i++)
    {
        if (level == levels[i])
            break;
    }
    switch (i)
    {
        case 0:
            (this->*func[0])();
            (this->*func[1])();
            (this->*func[2])();
            (this->*func[3])();
            break;
            
        case 1:
            (this->*func[1])();
            (this->*func[2])();
            (this->*func[3])();
            break;
          
        case 2:
            (this->*func[2])();
            (this->*func[3])();
            break;
        case 3:
            (this->*func[3])();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
    }
}
