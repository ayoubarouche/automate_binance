#include <iostream>
#include "ConfigurationManager.hpp"
int main(int argc, char const *argv[])
{

    ConfigurationManager *configuration_manager = ConfigurationManager::create_instance();

    if (configuration_manager != nullptr)
    {
        std::cout << "configuration_manager!= null\n";
    }
    std::cout << "maroc life" << std::endl;
    return 0;
}
