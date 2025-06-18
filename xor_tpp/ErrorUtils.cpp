#include "ErrorUtils.h"
#include <iostream>

using std::cerr;
using std::endl;

namespace error_utils {

void printErr(const char *what) {
    cerr << "Exception: " << what << endl;
}

} // namespace error_utils