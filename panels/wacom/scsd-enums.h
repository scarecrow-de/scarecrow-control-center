/* We copy scsd-wacom-device from gnome-settings-daemon.
 * It include "scsd-enums.h" because the include directory
 * is known. As gnome-settings-daemon's pkg-config file
 * prefixes this, we need a little help to avoid this
 * one line difference */

#include <gnome-settings-daemon/scsd-enums.h>
