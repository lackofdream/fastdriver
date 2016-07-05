#ifndef FASTODP_H
#define FASTODP_H

#include <string>
#include <cryptopp/aes.h>
namespace fastdriver{
    std::string encrypt(std::string, std::string);
    std::string decrypt(std::string, std::string);
}

#endif //FASTODP_H