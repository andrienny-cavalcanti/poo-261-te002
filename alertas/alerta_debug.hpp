#ifndef ALERTA_DEBUG_HPP
#define ALERTA_DEBUG_HPP

#include "alerta_info.hpp"
#include <string>

class alerta_debug : public alerta_info {
private:
    std::string contexto_;

public:
    alerta_debug(std::string origem, std::string mensagem, std::string contexto);
    std::string formatar() const override;
};

#endif
