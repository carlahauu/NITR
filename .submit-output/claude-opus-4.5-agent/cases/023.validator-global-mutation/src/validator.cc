#include "validator.h"

namespace nitr::case023 {

bool Validator::validate(const Submission& s) const {
    return !s.content.empty() && !s.is_late;
}

}  // namespace nitr::case023
