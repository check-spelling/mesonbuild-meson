#include "../lib.h"

int get_built_value (void);

SYMBOL_EXPORT
int get_stodep_value (void) {
  return get_built_value ();
}
