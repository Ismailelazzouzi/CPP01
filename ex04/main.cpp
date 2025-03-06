#include "header.hpp"

static int isSpace(std::string str)
{
    size_t len = 0;
    for (size_t i = 0; i < str.length(); i++)
    {
        if ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
            len++;
    }
    if (len == str.length())
        return (1);
    return (0);
}


static std::string replaceFileContent(std::string content, std::string s1, std::string s2)
{
    std::string result;
    
    result = content;
    size_t position = 0;
    while ((position = result.find(s1, position)) != std::string::npos)
    {
        result.erase(position, s1.length());
        result.insert(position, s2);
        position += s2.length();
    }
    return (result);
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
        }
        av -= ac;
        std::ifstream   file(newAv[1].c_str());
        if (!file.is_open())
        {
            std::cout << "file doesn't exist or cannot be opened !" << std::endl;
            return (1);
        }
        std::string content;
        std::string line;
        while (getline(file, line))
            content += line + "\n";
        if (content.empty())
        {
            std::cout << "file is empty !" << std::endl;
            return (1);
        }
        content.pop_back();
        file.close();
        std::string newContent = replaceFileContent(content, newAv[2], newAv[3]);
        std::cout << newContent << std::endl;
        std::string result = newAv[1] + ".replace";
        std::ofstream ofs(result, std::ofstream::out);
        ofs << newContent;
        ofs.close();
    }
    else
    {
        std::cout << "Incorrect number of arguments !" << std::endl;
        return (1);
    }
    return (0);
}