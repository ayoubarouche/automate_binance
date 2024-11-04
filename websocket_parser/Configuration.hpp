/* this is a model to present a single configuration instance : */

#ifndef CONFIGURATION_H
#define CONFIGURATION_H

#include <string>
class Configuration
{

private:
    std::string api_key;
    std::string configuration_version;

public:
    Configuration();
    ~Configuration();

    std::string get_api_key();
    std::string get_current_project_version();
};
#endif