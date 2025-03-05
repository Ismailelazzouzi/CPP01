#include "header.hpp"

static int isSpace(std::string str)
{
    for (size_t i = 0; i < str.length(); i++)
    {
        if ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
            return (1);
    }
    return (0);
}

int main(int ac, char **av)
{
    if (ac == 4)
    {
        std::string newAv[ac];
        for (int i = 0; i < ac; i++)
        {
            newAv[i] = (std::string)*av;
            if (newAv[i].empty() || isSpace(newAv[i]) || !newAv[i].length())
            {
                std::cout << "Invalid Arguments !" << std::endl;
                return (1);
            }
            av++;    
            std::cout << newAv[i] << std::endl;
        }
        av -= ac;
        std::ifstream   file(newAv[1].c_str());
        if (!file.is_open())
        {
            std::cout << "file doesn't exist or cannot be opened !" << std::endl;
            return (1);
        }
    }
    else
    {
        std::cout << "Incorrect number of arguments !" << std::endl;
        return (1);
    }
    return (0);
}