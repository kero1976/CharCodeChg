#include "pch.h"
#include "Sjis.h"
#include "spdlog/spdlog.h"

#include "spdlog/sinks/basic_file_sink.h"
#include "spdlog/logger.h"

std::string Sjis::toJis(unsigned char c1, unsigned char c2) {
    auto file_logger = spdlog::basic_logger_mt("basic_logger", "basic.txt");
    file_logger->info("ˆ—‘OFc1={},c2={}",c1, c2);
    if (c1 >= 0xe0) { c1 = c1 - 0x40; }
    if (c2 >= 0x80) { c2 = c2 - 1; }
    if (c2 >= 0x9e) {
        c1 = (c1 - 0x70) * 2;
        c2 = c2 - 0x7d;
    }
    else {
        c1 = ((c1 - 0x70) * 2) - 1;
        c2 = c2 - 0x1f;
    }
    file_logger->info("ˆ—ŒãFc1={},c2={}", c1, c2);
    return "a";
}