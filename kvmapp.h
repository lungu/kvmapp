#ifndef _KVMAPP_H
#define _KVMAPP_H

#define __round_mask(x, y) ((__typeof__(x)) ((y) - 1))
#define round_up(x, y)     ((((x) - 1) | __round_mask(x, y)) + 1)
#define round_down(x, y)   ((x) & ~__round_mask(x, y))

#endif /* _KVMAPP_H */
