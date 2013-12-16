#ifndef LINKTEST_MSG_H
#define LINKTEST_MSG_H

typedef nx_struct {
  nx_uint32_t cnt;
} LinkTestMsg;

enum {
  AM_LINKTEST_MSG = 13,
};

#endif
