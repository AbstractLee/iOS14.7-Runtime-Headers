/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKHTTPCookieStore : NSObject <WKObject> {
    struct ObjectStorage<API::HTTPCookieStore> { 
        struct type { 
            unsigned char __lx[72]; 
        } data; 
    }  _cookieStore;
    struct HashMap<const void *, std::__1::unique_ptr<WKHTTPCookieStoreObserver, std::__1::default_delete<WKHTTPCookieStoreObserver>>, WTF::DefaultHash<const void *>, WTF::HashTraits<const void *>, WTF::HashTraits<std::__1::unique_ptr<WKHTTPCookieStoreObserver, std::__1::default_delete<WKHTTPCookieStoreObserver>>>> { 
        struct HashTable<const void *, WTF::KeyValuePair<const void *, std::__1::unique_ptr<WKHTTPCookieStoreObserver, std::__1::default_delete<WKHTTPCookieStoreObserver>>>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<const void *, std::__1::unique_ptr<WKHTTPCookieStoreObserver, std::__1::default_delete<WKHTTPCookieStoreObserver>>>>, WTF::DefaultHash<const void *>, WTF::HashMap<const void *, std::__1::unique_ptr<WKHTTPCookieStoreObserver, std::__1::default_delete<WKHTTPCookieStoreObserver>>, WTF::DefaultHash<const void *>, WTF::HashTraits<const void *>, WTF::HashTraits<std::__1::unique_ptr<WKHTTPCookieStoreObserver, std::__1::default_delete<WKHTTPCookieStoreObserver>>>>::KeyValuePairTraits, WTF::HashTraits<const void *>> { 
            struct KeyValuePair<const void *, std::__1::unique_ptr<WKHTTPCookieStoreObserver, std::__1::default_delete<WKHTTPCookieStoreObserver>>> {} *m_table; 
        } m_impl; 
    }  _observers;
}

@property (readonly) struct Object { int (**x1)(); id x2; }*_apiObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct Object { int (**x1)(); id x2; }*)_apiObject;
- (void)_flushCookiesToDiskWithCompletionHandler:(id /* block */)arg1;
- (void)_getCookiesForURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_setCookieAcceptPolicy:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (void)deleteCookie:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getAllCookies:(id /* block */)arg1;
- (void)removeObserver:(id)arg1;
- (void)setCookie:(id)arg1 completionHandler:(id /* block */)arg2;

@end