#ifndef FILEREPLACE_HPP
#define FILEREPLACE_HPP

#include <string>

class FileReplace
{
public:
    static void replaceInFile(const std::string& filename, const std::string& s1, const std::string& s2);
};

#endif