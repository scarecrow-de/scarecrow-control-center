/* We copy scsd-wacom-device from scarecrow-settings-daemon.
 * It include "scsd-enums.h" because the include directory
 * is known. As scarecrow-settings-daemon's pkg-config file
 * prefixes this, we need a little help to avoid this
 * one line difference */

#include <scarecrow-settings-daemon/scsd-enums.h>
