/* Generated by RuntimeBrowser
   Image: /usr/lib/libnetwork.dylib
 */

@interface NWOSHostEndpoint : NWConcrete_nw_endpoint {
    NSObject<OS_dispatch_data> * ech_config;
    char * hostname;
    unsigned short  port;
    unsigned short  priority;
    NSObject<OS_nw_txt_record> * txt_record;
    unsigned short  weight;
}

- (void).cxx_destruct;
- (id)copyDictionary;
- (id)copyEndpoint;
- (char *)createDescription:(bool)arg1;
- (void)dealloc;
- (const char *)domainForPolicy;
- (id)echConfig;
- (unsigned long long)getHash;
- (const char *)hostname;
- (bool)isEqualToEndpoint:(id)arg1 matchInterface:(bool)arg2 matchParent:(bool)arg3;
- (unsigned short)port;
- (unsigned short)priority;
- (void)setEchConfig:(id)arg1;
- (void)setPriority:(unsigned short)arg1;
- (void)setTxtRecord:(id)arg1;
- (void)setWeight:(unsigned short)arg1;
- (id)txtRecord;
- (unsigned int)type;
- (unsigned short)weight;

@end