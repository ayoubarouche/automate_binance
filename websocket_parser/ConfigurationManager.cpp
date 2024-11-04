#include "ConfigurationManager.hpp"

/* set the initiale value to null pointer : */
ConfigurationManager *ConfigurationManager::current_configuration = nullptr;

ConfigurationManager *ConfigurationManager::create_instance()
{
    if (current_configuration == nullptr)
    {
        current_configuration = new ConfigurationManager();
    }

    return current_configuration;
}

void ConfigurationManager::destroy()
{
    if (current_configuration != nullptr)
    {
        delete current_configuration;
        current_configuration = nullptr;
    }
}

ConfigurationManager::ConfigurationManager()
{
}

ConfigurationManager::~ConfigurationManager()
{
    destroy();
}
