/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RenderBox.framework/RenderBox
 */

@interface RBXMLParser : NSObject <NSXMLParserDelegate> {
    bool  _aborted;
    struct { 
        float red; 
        float green; 
        float blue; 
        float alpha; 
    }  _backgroundColor;
    struct objc_ptr<NSURL *> { 
        NSURL *_p; 
    }  _base_url;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> { 
        struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> { 
            struct __rep { 
                union { 
                    struct __long { 
                        char *__data_; 
                        unsigned long long __size_; 
                        unsigned long long __cap_; 
                    } __l; 
                    struct __short { 
                        BOOL __data_[23]; 
                        struct { 
                            unsigned char __size_; 
                        } ; 
                    } __s; 
                    struct __raw { 
                        unsigned long long __words[3]; 
                    } __r; 
                } ; 
            } __value_; 
        } __r_; 
    }  _characters;
    int  _colorMode;
    <RBXMLParserDelegate> * _delegate;
    struct objc_ptr<NSError *> { 
        NSError *_p; 
    }  _error;
    struct objc_ptr<RBFill *> { 
        RBFill *_p; 
    }  _fill;
    struct cf_ptr<__CFDictionary *> { 
        struct __CFDictionary {} *_p; 
    }  _font_cache;
    struct cf_ptr<__CFDictionary *> { 
        struct __CFDictionary {} *_p; 
    }  _image_cache;
    bool  _linear_colors;
    struct objc_ptr<RBDisplayList *> { 
        RBDisplayList *_p; 
    }  _list;
    struct objc_ptr<RBShape *> { 
        RBShape *_p; 
    }  _shape;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    struct State { int (**x1)(); struct State {} *x2; } * _state;
    struct objc_ptr<NSXMLParser *> { 
        NSXMLParser *_p; 
    }  _xml_parser;
}

@property (nonatomic, readonly) struct { float x1; float x2; float x3; float x4; } backgroundColor;
@property (nonatomic, readonly) int colorMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) RBDisplayList *displayList;
@property (nonatomic, readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (readonly) Class superclass;

+ (id)parserWithDelegate:(id)arg1 contentsOfURL:(id)arg2 options:(id)arg3;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)abortParsing:(id)arg1;
- (struct { float x1; float x2; float x3; float x4; })backgroundColor;
- (int)colorMode;
- (void)dealloc;
- (id)displayList;
- (id)error;
- (id)initWithDelegate:(id)arg1 contentsOfURL:(id)arg2 options:(id)arg3;
- (bool)parse;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parserDidEndDocument:(id)arg1;
- (void)parserDidStartDocument:(id)arg1;
- (struct CGSize { double x1; double x2; })size;

@end
