#ifndef FORMATAVEL_HPP
#define FORMATAVEL_HPP

#include <string>

class formatavel {
public:
    virtual std::string formatar() const = 0;
    virtual ~formatavel() = default;
};

#endif
