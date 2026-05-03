/* We copy gsd-wacom-device from scarecrow-settings-daemon.
 * It include "gsd-enums.h" because the include directory
 * is known. As scarecrow-settings-daemon's pkg-config file
 * prefixes this, we need a little help to avoid this
 * one line difference */

#include <scarecrow-settings-daemon/gsd-enums.h>
