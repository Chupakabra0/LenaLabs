#pragma once
#include "Commands\ICommand.h"
#include <memory>

class Application {
public:
    void registerCommand(std::unique_ptr<ICommand> command);
    int execute(int argc, char* argv[]);

private:
    //TODO
};