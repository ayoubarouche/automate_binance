#include <string>
#include "Configuration.hpp"
#include "configuration_parameters.hpp"
std::string Configuration::get_api_key()
{
    return api_key;
}

std::string Configuration::get_current_project_version()
{
    return configuration_version;
}

Configuration::Configuration()
{
    api_key = get_binance_api();
    configuration_version = get_project_version();
    // configuration_version = get
}
