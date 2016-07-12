#ifndef _IO_H
#define _IO_H

#if HAVE_CONFIG_H
#  include <config.h>
#endif

int io(int tun_fd, const char* peer_file_path, const char *self_addr_v4, const char *self_addr_v6, int listener_port, const char *ipset_name);

void trigger_peer_reset();

void trigger_io_loop_stop();

#endif
