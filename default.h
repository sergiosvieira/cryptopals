#ifndef DEFAULT_H
#define DEFAULT_H

#include <vector>
#include <ostream>
#include <iomanip>

using Data = std::vector<uint8_t>;

Data read(const std::string& str) {
    return {str.begin(), str.end()};
}

std::ostream& operator<<(std::ostream& out,
                         const Data& data) {
    for (const auto& d: data) {
        out << std::hex << static_cast<int>(d);
    }
    return out;
}

#endif // DEFAULT_H
