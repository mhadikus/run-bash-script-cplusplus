#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    std::string script_path;
    std::string wait_to_finish;
    std::cout << std::endl;
    std::cout << "Enter path to bash script: ";
    std::getline(std::cin, script_path);

    std::cout << "Wait for command to finish? (y/n): ";
    std::cin >> wait_to_finish;
    if (wait_to_finish == "n")
    {
        script_path += " &";
    }

    std::cout << "Executing \"" << script_path << "\" ..." ;
    std::cout << std::endl;

    int exit_code = system(script_path.c_str());
    std::cout << "Exit code = " << exit_code;
    std::cout << std::endl;
}