#ifndef AIC18_CLIENT_CPP_INIT_MESSAGE_H
#define AIC18_CLIENT_CPP_INIT_MESSAGE_H

#include "Message.h"
#include "../../Model/Map.h"
#include "../../Model/Path.h"

class InitMessage final : public Message {
public:

    explicit InitMessage(std::string&& string_form);

    Map parse_map();

    std::vector<Path*> parse_paths(const Map& map);

    void parse_world_constants();

    void parse_unit_constants();

    void parse_tower_constants();
};

#endif // AIC18_CLIENT_CPP_INIT_MESSAGE_H
