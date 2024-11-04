#include "configuration.hpp"

#ifndef CONFIGURATION_MANAGER_H

#define CONFIGURAITON_MANAGER_H

class ConfigurationManager
{
private:
    /* create a configuration manager based on singleton design pattern */
    /* make the constructor and deconstructor private : */
    ConfigurationManager();
    ~ConfigurationManager();
    /* the pointer to the current configuration  : */
    static ConfigurationManager *current_configuration;

public:
    /* function to create the new instance : */
    static ConfigurationManager *create_instance();
    /* function to destroy the current instance : */
    static void destroy();
};

#endif /* CONFIGURATION_MANAGER_H*/