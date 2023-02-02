#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <iostream>
# include <vector>


template <typename T>
int easyfind(T &container, int value)
{
    if (std::find(container.begin(), container.end(), value) != container.end())
        return (std::cout << "Found: ", value);
    else
        throw std::exception();
}

#endif