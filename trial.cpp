#include <iostream>
#include <pcap/pcap.h>

using namespace std;

int main()
{

    int num, inum, i = 0;
    pcap_if_t *alldevs;
    pcap_t *adhandle;
    struct bpf_program fcode;
    bpf_u_int32 net, mask;
    char *dev;
    string file = "C:\\WiresharkPcap\\test2.pcap";
    char errbuff[PCAP_ERRBUF_SIZE];
    pcap_t *pcap = pcap_open_offline(file.c_str(), errbuff);
    return 0;


 
}
