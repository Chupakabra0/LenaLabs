#pragma once

#include <string>
#include <map>

class ICommand {
public:
	virtual ~ICommand() = default;
	virtual const std::string & getName() const = 0;
	virtual int execute(const std::map<std::string, std::string>& args) = 0;
};
