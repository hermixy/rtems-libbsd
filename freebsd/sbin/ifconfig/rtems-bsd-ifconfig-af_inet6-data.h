/* generated by userspace-header-gen.py */
#include <rtems/linkersets.h>
#include "rtems-bsd-ifconfig-data.h"
/* af_inet6.c */
RTEMS_LINKER_RWSET_CONTENT(bsd_prog_ifconfig, static struct in6_ifreq in6_ridreq);
RTEMS_LINKER_RWSET_CONTENT(bsd_prog_ifconfig, static struct in6_aliasreq in6_addreq);
RTEMS_LINKER_RWSET_CONTENT(bsd_prog_ifconfig, static int ip6lifetime);
RTEMS_LINKER_RWSET_CONTENT(bsd_prog_ifconfig, static int explicit_prefix);
RTEMS_LINKER_RWSET_CONTENT(bsd_prog_ifconfig, static char addr_buf[]);
RTEMS_LINKER_RWSET_CONTENT(bsd_prog_ifconfig, static struct sockaddr_in6 *sin6tab[]);
RTEMS_LINKER_RWSET_CONTENT(bsd_prog_ifconfig, static struct cmd inet6_cmds[]);
RTEMS_LINKER_RWSET_CONTENT(bsd_prog_ifconfig, static struct afswtch af_inet6);
RTEMS_LINKER_RWSET_CONTENT(bsd_prog_ifconfig, static struct option in6_Lopt);
