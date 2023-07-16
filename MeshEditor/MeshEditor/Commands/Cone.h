#pragma once

#include "ICommand.h"

class Cone : public ICommand {
public:
	const std::string& getName() const override;
	int execute(const std::map<std::string, std::string>& args) override;
private:
	//TODO
};

