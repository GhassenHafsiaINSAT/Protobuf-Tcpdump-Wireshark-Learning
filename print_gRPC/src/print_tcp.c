#include "common.h"

struct tcp_hdr* print_tcp(const unsigned char *packet){

    struct tcp_hdr* tcp = (struct tcp_hdr*)(packet + IP6_HEADER_LENGTH); 
    return tcp; 
}