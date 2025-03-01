#ifndef PACKET_DATA_HPP
#define PACKET_DATA_HPP

#include <cstdint>
#include <vector>

#include "sbpt_generated_includes.hpp"

struct PacketHeader {
    PacketType type;
    uint32_t size_of_data_without_header;
};

struct PacketWithSize {
    std::vector<char> data; // Use std::vector<char> to hold packet data
    size_t size;            // Size of the packet data 1 unit equals 1 byte = 8 bits
};

#endif // PACKET_DATA_HPP
