#ifndef SIMDJSON_STAGE2_BUILD_TAPE_H
#define SIMDJSON_STAGE2_BUILD_TAPE_H

#include "simdjson/common_defs.h"
#include "simdjson/parsedjson.h"

void init_state_machine();

WARN_UNUSED
bool unified_machine(const uint8_t *buf, size_t len, ParsedJson &pj);


WARN_UNUSED
static inline bool unified_machine(const char *buf, size_t len, ParsedJson &pj) {
    return unified_machine(reinterpret_cast<const uint8_t *>(buf),len,pj);
}

#endif
