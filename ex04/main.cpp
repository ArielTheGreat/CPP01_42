// chicken replaced by beef
#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::string filename = "receipt.txt";
    std::ifstream file_reader(filename);
    std::ofstream new_file("receipt.replace");
    std::string str;
    std::string str2("chicken");
    std::string str_replace("beef");
    char newline = '\n';

    if (file_reader.is_open())
    {
        while(file_reader.good())
        {
            std::getline(file_reader, str);
            std::size_t position = str.find(str2);
            while(position != std::string::npos)
            {
                str.insert(position,str_replace);
                str.erase(position+str_replace.length(), str2.length());
                position = str.find(str2, position + str_replace.length() + 2);
            }
            if (new_file.is_open())
            {
                new_file.write((const char *)&str.front(),str.length());
                new_file.write((const char *)&newline,1);
            }
            std::cout << str << std::endl;
        }
    }

    file_reader.close();
    new_file.close();

    return 0;
}