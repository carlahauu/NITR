#include "validator.h"

namespace nitr::case023 {

bool Validator::validate(const Submission& s) const {
    if (s.content.empty() || s.is_late) {
        return false;
    }
    return true;
}

}  // namespace nitr::case023
