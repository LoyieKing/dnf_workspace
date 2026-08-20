# Parse

`_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding`

`TiXmlDeclaration::Parse(char const*, TiXmlParsingData*, TiXmlEncoding)`

| 类 | 地址 |
|---|---|
| `TiXmlDeclaration` | `0x087e9da0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e9da0  _ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding
#           TiXmlDeclaration::Parse(char const*, TiXmlParsingData*, TiXmlEncoding)
# range [0x087e9da0, 0x087ea70f]
087e9da0 +0x000:  push   %ebp
087e9da1 +0x001:  mov    %esp,%ebp
087e9da3 +0x003:  push   %edi
087e9da4 +0x004:  push   %esi
087e9da5 +0x005:  push   %ebx
087e9da6 +0x006:  sub    $0x6c,%esp
087e9da9 +0x009:  mov    0xc(%ebp),%edx
087e9dac +0x00c:  mov    0x10(%ebp),%edi
087e9daf +0x00f:  mov    0x14(%ebp),%esi
087e9db2 +0x012:  test   %edx,%edx
087e9db4 +0x014:  jne    087e9e28 <+0x88>
087e9db6 +0x016:  mov    0x8(%ebp),%eax
087e9db9 +0x019:  mov    %eax,(%esp)
087e9dbc +0x01c:  call   087dfed0 <_ZNK9TiXmlNode11GetDocumentEv>  ; TiXmlNode::GetDocument() const
087e9dc1 +0x021:  mov    %eax,%ebx
087e9dc3 +0x023:  test   %ebx,%ebx
087e9dc5 +0x025:  je     087e9f5c <+0x1bc>
087e9dcb +0x02b:  cmpb   $0x0,0x2c(%ebx)
087e9dcf +0x02f:  jne    087e9f5c <+0x1bc>
087e9dd5 +0x035:  mov    &_ZN9TiXmlBase11errorStringE+0x2c,%esi
087e9ddb +0x03b:  movb   $0x1,0x2c(%ebx)
087e9ddf +0x03f:  movl   $0xb,0x30(%ebx)
087e9de6 +0x046:  mov    %esi,(%esp)
087e9de9 +0x049:  call   0807e3b0 <_init+0xca8>
087e9dee +0x04e:  mov    %esi,0x4(%esp)
087e9df2 +0x052:  mov    %eax,0x8(%esp)
087e9df6 +0x056:  lea    0x34(%ebx),%eax
087e9df9 +0x059:  mov    %eax,(%esp)
087e9dfc +0x05c:  call   087085a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x21b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x21b0
087e9e01 +0x061:  movl   $0xffffffff,0x40(%ebx)
087e9e08 +0x068:  movl   $0xffffffff,0x3c(%ebx)
087e9e0f +0x06f:  xor    %ebx,%ebx
087e9e11 +0x071:  lea    0x0(%esi,%eiz,1),%esi
087e9e18 +0x078:  add    $0x6c,%esp
087e9e1b +0x07b:  mov    %ebx,%eax
087e9e1d +0x07d:  pop    %ebx
087e9e1e +0x07e:  pop    %esi
087e9e1f +0x07f:  pop    %edi
087e9e20 +0x080:  pop    %ebp
087e9e21 +0x081:  ret
087e9e22 +0x082:  lea    0x0(%esi),%esi
087e9e28 +0x088:  movzbl (%edx),%ebx
087e9e2b +0x08b:  test   %bl,%bl
087e9e2d +0x08d:  je     087e9db6 <+0x16>
087e9e2f +0x08f:  cmp    $0x1,%esi
087e9e32 +0x092:  je     087e9f68 <+0x1c8>
087e9e38 +0x098:  mov    %esi,-0x50(%ebp)
087e9e3b +0x09b:  mov    %edx,%esi
087e9e3d +0x09d:  movzbl %bl,%eax
087e9e40 +0x0a0:  mov    %eax,(%esp)
087e9e43 +0x0a3:  call   0807e280 <_init+0xb78>
087e9e48 +0x0a8:  cmp    $0xa,%bl
087e9e4b +0x0ab:  je     087ea390 <+0x5f0>
087e9e51 +0x0b1:  test   %eax,%eax
087e9e53 +0x0b3:  jne    087ea390 <+0x5f0>
087e9e59 +0x0b9:  cmp    $0xd,%bl
087e9e5c +0x0bc:  je     087ea390 <+0x5f0>
087e9e62 +0x0c2:  mov    0x8(%ebp),%eax
087e9e65 +0x0c5:  mov    %esi,%edx
087e9e67 +0x0c7:  mov    %edx,-0x5c(%ebp)
087e9e6a +0x0ca:  mov    -0x50(%ebp),%esi
087e9e6d +0x0cd:  mov    %eax,(%esp)
087e9e70 +0x0d0:  call   087dfed0 <_ZNK9TiXmlNode11GetDocumentEv>  ; TiXmlNode::GetDocument() const
087e9e75 +0x0d5:  mov    -0x5c(%ebp),%edx
087e9e78 +0x0d8:  test   %edx,%edx
087e9e7a +0x0da:  mov    %eax,%ebx
087e9e7c +0x0dc:  je     087e9dc3 <+0x23>
087e9e82 +0x0e2:  cmpb   $0x0,(%edx)
087e9e85 +0x0e5:  je     087e9dc3 <+0x23>
087e9e8b +0x0eb:  mov    %edx,(%esp)
087e9e8e +0x0ee:  mov    %esi,0xc(%esp)
087e9e92 +0x0f2:  movl   $0x1,0x8(%esp)
087e9e9a +0x0fa:  movl   $"<?xml",0x4(%esp)
087e9ea2 +0x102:  call   087e62f0 <_ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding>  ; TiXmlBase::StringEqual(char const*, char const*, bool, TiXmlEncoding)
087e9ea7 +0x107:  mov    -0x5c(%ebp),%edx
087e9eaa +0x10a:  test   %al,%al
087e9eac +0x10c:  je     087e9dc3 <+0x23>
087e9eb2 +0x112:  test   %edi,%edi
087e9eb4 +0x114:  je     087ea422 <+0x682>
087e9eba +0x11a:  mov    %edx,0x4(%esp)
087e9ebe +0x11e:  mov    %edx,-0x5c(%ebp)
087e9ec1 +0x121:  mov    %esi,0x8(%esp)
087e9ec5 +0x125:  mov    %edi,(%esp)
087e9ec8 +0x128:  call   087e6020 <_ZN16TiXmlParsingData5StampEPKc13TiXmlEncoding>  ; TiXmlParsingData::Stamp(char const*, TiXmlEncoding)
087e9ecd +0x12d:  mov    (%edi),%ecx
087e9ecf +0x12f:  mov    0x4(%edi),%ebx
087e9ed2 +0x132:  mov    0x8(%ebp),%eax
087e9ed5 +0x135:  mov    -0x5c(%ebp),%edx
087e9ed8 +0x138:  mov    %ecx,0x4(%eax)
087e9edb +0x13b:  mov    %ebx,0x8(%eax)
087e9ede +0x13e:  add    $0x2c,%eax
087e9ee1 +0x141:  lea    0x5(%edx),%ebx
087e9ee4 +0x144:  mov    %edx,-0x5c(%ebp)
087e9ee7 +0x147:  mov    %eax,-0x50(%ebp)
087e9eea +0x14a:  movl   $0x0,0x8(%esp)
087e9ef2 +0x152:  movl   $&data#2fb52a47(.rodata),0x4(%esp)
087e9efa +0x15a:  mov    %eax,(%esp)
087e9efd +0x15d:  call   087085a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x21b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x21b0
087e9f02 +0x162:  mov    0x8(%ebp),%eax
087e9f05 +0x165:  movl   $0x0,0x8(%esp)
087e9f0d +0x16d:  movl   $&data#2fb52a47(.rodata),0x4(%esp)
087e9f15 +0x175:  add    $0x30,%eax
087e9f18 +0x178:  mov    %eax,-0x54(%ebp)
087e9f1b +0x17b:  mov    %eax,(%esp)
087e9f1e +0x17e:  call   087085a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x21b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x21b0
087e9f23 +0x183:  mov    0x8(%ebp),%eax
087e9f26 +0x186:  movl   $0x0,0x8(%esp)
087e9f2e +0x18e:  movl   $&data#2fb52a47(.rodata),0x4(%esp)
087e9f36 +0x196:  add    $0x34,%eax
087e9f39 +0x199:  mov    %eax,-0x58(%ebp)
087e9f3c +0x19c:  mov    %eax,(%esp)
087e9f3f +0x19f:  call   087085a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x21b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x21b0
087e9f44 +0x1a4:  test   %ebx,%ebx
087e9f46 +0x1a6:  mov    -0x5c(%ebp),%edx
087e9f49 +0x1a9:  je     087e9e18 <+0x78>
087e9f4f +0x1af:  movzbl 0x5(%edx),%edx
087e9f53 +0x1b3:  nop
087e9f54 +0x1b4:  lea    0x0(%esi,%eiz,1),%esi
087e9f58 +0x1b8:  test   %dl,%dl
087e9f5a +0x1ba:  jne    087e9fc8 <+0x228>
087e9f5c +0x1bc:  xor    %ebx,%ebx
087e9f5e +0x1be:  jmp    087e9e18 <+0x78>
087e9f63 +0x1c3:  nop
087e9f64 +0x1c4:  lea    0x0(%esi,%eiz,1),%esi
087e9f68 +0x1c8:  mov    %esi,-0x50(%ebp)
087e9f6b +0x1cb:  mov    %edx,%esi
087e9f6d +0x1cd:  jmp    087e9f9e <+0x1fe>
087e9f6f +0x1cf:  nop
087e9f70 +0x1d0:  movzbl %bl,%eax
087e9f73 +0x1d3:  mov    %eax,(%esp)
087e9f76 +0x1d6:  call   0807e280 <_init+0xb78>
087e9f7b +0x1db:  test   %eax,%eax
087e9f7d +0x1dd:  jne    087e9f90 <+0x1f0>
087e9f7f +0x1df:  cmp    $0xa,%bl
087e9f82 +0x1e2:  je     087e9f90 <+0x1f0>
087e9f84 +0x1e4:  cmp    $0xd,%bl
087e9f87 +0x1e7:  jne    087e9e62 <+0xc2>
087e9f8d +0x1ed:  lea    0x0(%esi),%esi
087e9f90 +0x1f0:  add    $0x1,%esi
087e9f93 +0x1f3:  movzbl (%esi),%ebx
087e9f96 +0x1f6:  test   %bl,%bl
087e9f98 +0x1f8:  je     087e9e62 <+0xc2>
087e9f9e +0x1fe:  cmpb   $0xef,(%esi)
087e9fa1 +0x201:  jne    087e9f70 <+0x1d0>
087e9fa3 +0x203:  movzbl 0x1(%esi),%eax
087e9fa7 +0x207:  cmp    $0xbb,%al
087e9fa9 +0x209:  je     087ea403 <+0x663>
087e9faf +0x20f:  cmp    $0xbf,%al
087e9fb1 +0x211:  jne    087e9f70 <+0x1d0>
087e9fb3 +0x213:  movzbl 0x2(%esi),%eax
087e9fb7 +0x217:  cmp    $0xbe,%al
087e9fb9 +0x219:  je     087e9fbf <+0x21f>
087e9fbb +0x21b:  cmp    $0xbf,%al
087e9fbd +0x21d:  jne    087e9f70 <+0x1d0>
087e9fbf +0x21f:  add    $0x3,%esi
087e9fc2 +0x222:  jmp    087e9f93 <+0x1f3>
087e9fc4 +0x224:  lea    0x0(%esi,%eiz,1),%esi
087e9fc8 +0x228:  cmp    $0x3e,%dl
087e9fcb +0x22b:  je     087ea382 <+0x5e2>
087e9fd1 +0x231:  test   %dl,%dl
087e9fd3 +0x233:  je     087ea210 <+0x470>
087e9fd9 +0x239:  cmp    $0x1,%esi
087e9fdc +0x23c:  je     087ea318 <+0x578>
087e9fe2 +0x242:  mov    %esi,-0x4c(%ebp)
087e9fe5 +0x245:  mov    %ebx,%esi
087e9fe7 +0x247:  mov    %edx,%ebx
087e9fe9 +0x249:  movzbl %bl,%eax
087e9fec +0x24c:  mov    %eax,(%esp)
087e9fef +0x24f:  call   0807e280 <_init+0xb78>
087e9ff4 +0x254:  cmp    $0xa,%bl
087e9ff7 +0x257:  je     087ea1f8 <+0x458>
087e9ffd +0x25d:  test   %eax,%eax
087e9fff +0x25f:  jne    087ea1f8 <+0x458>
087ea005 +0x265:  cmp    $0xd,%bl
087ea008 +0x268:  je     087ea1f8 <+0x458>
087ea00e +0x26e:  mov    %esi,%ebx
087ea010 +0x270:  mov    -0x4c(%ebp),%esi
087ea013 +0x273:  mov    %esi,0xc(%esp)
087ea017 +0x277:  movl   $0x1,0x8(%esp)
087ea01f +0x27f:  movl   $"version",0x4(%esp)
087ea027 +0x287:  mov    %ebx,(%esp)
087ea02a +0x28a:  call   087e62f0 <_ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding>  ; TiXmlBase::StringEqual(char const*, char const*, bool, TiXmlEncoding)
087ea02f +0x28f:  test   %al,%al
087ea031 +0x291:  je     087ea0f8 <+0x358>
087ea037 +0x297:  lea    -0x44(%ebp),%edx
087ea03a +0x29a:  movl   $0xffffffff,-0x3c(%ebp)
087ea041 +0x2a1:  movl   $0xffffffff,-0x40(%ebp)
087ea048 +0x2a8:  movl   $0x0,-0x38(%ebp)
087ea04f +0x2af:  movl   $&_ZTV14TiXmlAttribute+0x8,-0x44(%ebp)
087ea056 +0x2b6:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,-0x30(%ebp)
087ea05d +0x2bd:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,-0x2c(%ebp)
087ea064 +0x2c4:  movl   $0x0,-0x34(%ebp)
087ea06b +0x2cb:  movl   $0x0,-0x24(%ebp)
087ea072 +0x2d2:  movl   $0x0,-0x28(%ebp)
087ea079 +0x2d9:  mov    %esi,0xc(%esp)
087ea07d +0x2dd:  mov    %edi,0x8(%esp)
087ea081 +0x2e1:  mov    %ebx,0x4(%esp)
087ea085 +0x2e5:  mov    %edx,(%esp)
087ea088 +0x2e8:  call   087e8430 <_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding>  ; TiXmlAttribute::Parse(char const*, TiXmlParsingData*, TiXmlEncoding)
087ea08d +0x2ed:  mov    -0x2c(%ebp),%edx
087ea090 +0x2f0:  mov    %eax,%ebx
087ea092 +0x2f2:  mov    %edx,(%esp)
087ea095 +0x2f5:  mov    %edx,-0x5c(%ebp)
087ea098 +0x2f8:  call   0807e3b0 <_init+0xca8>
087ea09d +0x2fd:  mov    -0x5c(%ebp),%edx
087ea0a0 +0x300:  mov    %edx,0x4(%esp)
087ea0a4 +0x304:  mov    %eax,0x8(%esp)
087ea0a8 +0x308:  mov    -0x50(%ebp),%eax
087ea0ab +0x30b:  mov    %eax,(%esp)
087ea0ae +0x30e:  call   087085a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x21b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x21b0
087ea0b3 +0x313:  mov    -0x2c(%ebp),%eax
087ea0b6 +0x316:  movl   $&_ZTV14TiXmlAttribute+0x8,-0x44(%ebp)
087ea0bd +0x31d:  sub    $0xc,%eax
087ea0c0 +0x320:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
087ea0c5 +0x325:  jne    087ea431 <+0x691>
087ea0cb +0x32b:  mov    -0x30(%ebp),%eax
087ea0ce +0x32e:  mov    $&_ZNSs4_Rep20_S_empty_rep_storageE,%edx
087ea0d3 +0x333:  sub    $0xc,%eax
087ea0d6 +0x336:  cmp    %eax,%edx
087ea0d8 +0x338:  jne    087ea462 <+0x6c2>
087ea0de +0x33e:  movl   $&_ZTV9TiXmlBase+0x8,-0x44(%ebp)
087ea0e5 +0x345:  test   %ebx,%ebx
087ea0e7 +0x347:  je     087e9e18 <+0x78>
087ea0ed +0x34d:  movzbl (%ebx),%edx
087ea0f0 +0x350:  jmp    087e9f58 <+0x1b8>
087ea0f5 +0x355:  lea    0x0(%esi),%esi
087ea0f8 +0x358:  mov    %esi,0xc(%esp)
087ea0fc +0x35c:  movl   $0x1,0x8(%esp)
087ea104 +0x364:  movl   $"encoding",0x4(%esp)
087ea10c +0x36c:  mov    %ebx,(%esp)
087ea10f +0x36f:  call   087e62f0 <_ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding>  ; TiXmlBase::StringEqual(char const*, char const*, bool, TiXmlEncoding)
087ea114 +0x374:  test   %al,%al
087ea116 +0x376:  je     087ea218 <+0x478>
087ea11c +0x37c:  lea    -0x44(%ebp),%eax
087ea11f +0x37f:  movl   $0xffffffff,-0x3c(%ebp)
087ea126 +0x386:  movl   $0xffffffff,-0x40(%ebp)
087ea12d +0x38d:  movl   $0x0,-0x38(%ebp)
087ea134 +0x394:  movl   $&_ZTV14TiXmlAttribute+0x8,-0x44(%ebp)
087ea13b +0x39b:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,-0x30(%ebp)
087ea142 +0x3a2:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,-0x2c(%ebp)
087ea149 +0x3a9:  movl   $0x0,-0x34(%ebp)
087ea150 +0x3b0:  movl   $0x0,-0x24(%ebp)
087ea157 +0x3b7:  movl   $0x0,-0x28(%ebp)
087ea15e +0x3be:  mov    %esi,0xc(%esp)
087ea162 +0x3c2:  mov    %edi,0x8(%esp)
087ea166 +0x3c6:  mov    %ebx,0x4(%esp)
087ea16a +0x3ca:  mov    %eax,(%esp)
087ea16d +0x3cd:  call   087e8430 <_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding>  ; TiXmlAttribute::Parse(char const*, TiXmlParsingData*, TiXmlEncoding)
087ea172 +0x3d2:  mov    -0x2c(%ebp),%edx
087ea175 +0x3d5:  mov    %eax,%ebx
087ea177 +0x3d7:  mov    %edx,(%esp)
087ea17a +0x3da:  mov    %edx,-0x5c(%ebp)
087ea17d +0x3dd:  call   0807e3b0 <_init+0xca8>
087ea182 +0x3e2:  mov    -0x5c(%ebp),%edx
087ea185 +0x3e5:  mov    %edx,0x4(%esp)
087ea189 +0x3e9:  mov    -0x54(%ebp),%edx
087ea18c +0x3ec:  mov    %eax,0x8(%esp)
087ea190 +0x3f0:  mov    %edx,(%esp)
087ea193 +0x3f3:  call   087085a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x21b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x21b0
087ea198 +0x3f8:  mov    -0x2c(%ebp),%eax
087ea19b +0x3fb:  movl   $&_ZTV14TiXmlAttribute+0x8,-0x44(%ebp)
087ea1a2 +0x402:  sub    $0xc,%eax
087ea1a5 +0x405:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
087ea1aa +0x40a:  jne    087ea508 <+0x768>
087ea1b0 +0x410:  mov    -0x30(%ebp),%eax
087ea1b3 +0x413:  mov    $&_ZNSs4_Rep20_S_empty_rep_storageE,%edx
087ea1b8 +0x418:  sub    $0xc,%eax
087ea1bb +0x41b:  cmp    %eax,%edx
087ea1bd +0x41d:  je     087ea0de <+0x33e>
087ea1c3 +0x423:  mov    $&data#bb92cc41(.plt),%edx
087ea1c8 +0x428:  test   %edx,%edx
087ea1ca +0x42a:  je     087ea4fa <+0x75a>
087ea1d0 +0x430:  or     $0xffffffff,%edx
087ea1d3 +0x433:  lock xadd %edx,0x8(%eax)
087ea1d8 +0x438:  test   %edx,%edx
087ea1da +0x43a:  jg     087ea0de <+0x33e>
087ea1e0 +0x440:  lea    -0x1c(%ebp),%edx
087ea1e3 +0x443:  mov    %edx,0x4(%esp)
087ea1e7 +0x447:  mov    %eax,(%esp)
087ea1ea +0x44a:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
087ea1ef +0x44f:  jmp    087ea0de <+0x33e>
087ea1f4 +0x454:  lea    0x0(%esi,%eiz,1),%esi
087ea1f8 +0x458:  add    $0x1,%esi
087ea1fb +0x45b:  movzbl (%esi),%ebx
087ea1fe +0x45e:  test   %bl,%bl
087ea200 +0x460:  je     087ea00e <+0x26e>
087ea206 +0x466:  jmp    087e9fe9 <+0x249>
087ea20b +0x46b:  nop
087ea20c +0x46c:  lea    0x0(%esi,%eiz,1),%esi
087ea210 +0x470:  xor    %ebx,%ebx
087ea212 +0x472:  jmp    087ea013 <+0x273>
087ea217 +0x477:  nop
087ea218 +0x478:  mov    %esi,0xc(%esp)
087ea21c +0x47c:  movl   $0x1,0x8(%esp)
087ea224 +0x484:  movl   $"standalone",0x4(%esp)
087ea22c +0x48c:  mov    %ebx,(%esp)
087ea22f +0x48f:  call   087e62f0 <_ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding>  ; TiXmlBase::StringEqual(char const*, char const*, bool, TiXmlEncoding)
087ea234 +0x494:  test   %al,%al
087ea236 +0x496:  je     087ea3a3 <+0x603>
087ea23c +0x49c:  lea    -0x44(%ebp),%edx
087ea23f +0x49f:  movl   $0xffffffff,-0x3c(%ebp)
087ea246 +0x4a6:  movl   $0xffffffff,-0x40(%ebp)
087ea24d +0x4ad:  movl   $0x0,-0x38(%ebp)
087ea254 +0x4b4:  movl   $&_ZTV14TiXmlAttribute+0x8,-0x44(%ebp)
087ea25b +0x4bb:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,-0x30(%ebp)
087ea262 +0x4c2:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,-0x2c(%ebp)
087ea269 +0x4c9:  movl   $0x0,-0x34(%ebp)
087ea270 +0x4d0:  movl   $0x0,-0x24(%ebp)
087ea277 +0x4d7:  movl   $0x0,-0x28(%ebp)
087ea27e +0x4de:  mov    %esi,0xc(%esp)
087ea282 +0x4e2:  mov    %edi,0x8(%esp)
087ea286 +0x4e6:  mov    %ebx,0x4(%esp)
087ea28a +0x4ea:  mov    %edx,(%esp)
087ea28d +0x4ed:  call   087e8430 <_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding>  ; TiXmlAttribute::Parse(char const*, TiXmlParsingData*, TiXmlEncoding)
087ea292 +0x4f2:  mov    -0x2c(%ebp),%edx
087ea295 +0x4f5:  mov    %eax,%ebx
087ea297 +0x4f7:  mov    %edx,(%esp)
087ea29a +0x4fa:  mov    %edx,-0x5c(%ebp)
087ea29d +0x4fd:  call   0807e3b0 <_init+0xca8>
087ea2a2 +0x502:  mov    -0x5c(%ebp),%edx
087ea2a5 +0x505:  mov    %edx,0x4(%esp)
087ea2a9 +0x509:  mov    %eax,0x8(%esp)
087ea2ad +0x50d:  mov    -0x58(%ebp),%eax
087ea2b0 +0x510:  mov    %eax,(%esp)
087ea2b3 +0x513:  call   087085a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x21b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x21b0
087ea2b8 +0x518:  mov    -0x2c(%ebp),%edx
087ea2bb +0x51b:  movl   $&_ZTV14TiXmlAttribute+0x8,-0x44(%ebp)
087ea2c2 +0x522:  sub    $0xc,%edx
087ea2c5 +0x525:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%edx
087ea2cb +0x52b:  jne    087ea48f <+0x6ef>
087ea2d1 +0x531:  mov    -0x30(%ebp),%edx
087ea2d4 +0x534:  mov    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
087ea2d9 +0x539:  sub    $0xc,%edx
087ea2dc +0x53c:  cmp    %edx,%eax
087ea2de +0x53e:  je     087ea0de <+0x33e>
087ea2e4 +0x544:  mov    $&data#bb92cc41(.plt),%eax
087ea2e9 +0x549:  test   %eax,%eax
087ea2eb +0x54b:  je     087ea535 <+0x795>
087ea2f1 +0x551:  or     $0xffffffff,%eax
087ea2f4 +0x554:  lock xadd %eax,0x8(%edx)
087ea2f9 +0x559:  test   %eax,%eax
087ea2fb +0x55b:  jg     087ea0de <+0x33e>
087ea301 +0x561:  lea    -0x1e(%ebp),%eax
087ea304 +0x564:  mov    %eax,0x4(%esp)
087ea308 +0x568:  mov    %edx,(%esp)
087ea30b +0x56b:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
087ea310 +0x570:  jmp    087ea0de <+0x33e>
087ea315 +0x575:  lea    0x0(%esi),%esi
087ea318 +0x578:  mov    %esi,-0x4c(%ebp)
087ea31b +0x57b:  mov    %ebx,%esi
087ea31d +0x57d:  mov    %edx,%ebx
087ea31f +0x57f:  jmp    087ea34e <+0x5ae>
087ea321 +0x581:  lea    0x0(%esi,%eiz,1),%esi
087ea328 +0x588:  movzbl %bl,%eax
087ea32b +0x58b:  mov    %eax,(%esp)
087ea32e +0x58e:  call   0807e280 <_init+0xb78>
087ea333 +0x593:  test   %eax,%eax
087ea335 +0x595:  jne    087ea348 <+0x5a8>
087ea337 +0x597:  cmp    $0xa,%bl
087ea33a +0x59a:  je     087ea348 <+0x5a8>
087ea33c +0x59c:  cmp    $0xd,%bl
087ea33f +0x59f:  nop
087ea340 +0x5a0:  jne    087ea00e <+0x26e>
087ea346 +0x5a6:  xchg   %ax,%ax
087ea348 +0x5a8:  add    $0x1,%esi
087ea34b +0x5ab:  movzbl (%esi),%ebx
087ea34e +0x5ae:  test   %bl,%bl
087ea350 +0x5b0:  je     087ea00e <+0x26e>
087ea356 +0x5b6:  cmpb   $0xef,(%esi)
087ea359 +0x5b9:  jne    087ea328 <+0x588>
087ea35b +0x5bb:  movzbl 0x1(%esi),%eax
087ea35f +0x5bf:  cmp    $0xbb,%al
087ea361 +0x5c1:  je     087ea378 <+0x5d8>
087ea363 +0x5c3:  cmp    $0xbf,%al
087ea365 +0x5c5:  jne    087ea328 <+0x588>
087ea367 +0x5c7:  movzbl 0x2(%esi),%eax
087ea36b +0x5cb:  cmp    $0xbe,%al
087ea36d +0x5cd:  je     087ea373 <+0x5d3>
087ea36f +0x5cf:  cmp    $0xbf,%al
087ea371 +0x5d1:  jne    087ea328 <+0x588>
087ea373 +0x5d3:  add    $0x3,%esi
087ea376 +0x5d6:  jmp    087ea34b <+0x5ab>
087ea378 +0x5d8:  cmpb   $0xbf,0x2(%esi)
087ea37c +0x5dc:  jne    087ea328 <+0x588>
087ea37e +0x5de:  xchg   %ax,%ax
087ea380 +0x5e0:  jmp    087ea373 <+0x5d3>
087ea382 +0x5e2:  add    $0x1,%ebx
087ea385 +0x5e5:  add    $0x6c,%esp
087ea388 +0x5e8:  mov    %ebx,%eax
087ea38a +0x5ea:  pop    %ebx
087ea38b +0x5eb:  pop    %esi
087ea38c +0x5ec:  pop    %edi
087ea38d +0x5ed:  pop    %ebp
087ea38e +0x5ee:  ret
087ea38f +0x5ef:  nop
087ea390 +0x5f0:  add    $0x1,%esi
087ea393 +0x5f3:  movzbl (%esi),%ebx
087ea396 +0x5f6:  test   %bl,%bl
087ea398 +0x5f8:  je     087e9e62 <+0xc2>
087ea39e +0x5fe:  jmp    087e9e3d <+0x9d>
087ea3a3 +0x603:  test   %ebx,%ebx
087ea3a5 +0x605:  je     087e9e18 <+0x78>
087ea3ab +0x60b:  movzbl (%ebx),%edx
087ea3ae +0x60e:  test   %dl,%dl
087ea3b0 +0x610:  je     087e9f5c <+0x1bc>
087ea3b6 +0x616:  cmp    $0x3e,%dl
087ea3b9 +0x619:  je     087e9f58 <+0x1b8>
087ea3bf +0x61f:  mov    %esi,-0x4c(%ebp)
087ea3c2 +0x622:  mov    %ebx,%esi
087ea3c4 +0x624:  mov    %edx,%ebx
087ea3c6 +0x626:  xchg   %ax,%ax
087ea3c8 +0x628:  movzbl %bl,%eax
087ea3cb +0x62b:  mov    %eax,(%esp)
087ea3ce +0x62e:  call   0807e280 <_init+0xb78>
087ea3d3 +0x633:  cmp    $0xa,%bl
087ea3d6 +0x636:  je     087ea418 <+0x678>
087ea3d8 +0x638:  test   %eax,%eax
087ea3da +0x63a:  jne    087ea418 <+0x678>
087ea3dc +0x63c:  cmp    $0xd,%bl
087ea3df +0x63f:  nop
087ea3e0 +0x640:  je     087ea418 <+0x678>
087ea3e2 +0x642:  add    $0x1,%esi
087ea3e5 +0x645:  je     087ea42a <+0x68a>
087ea3e7 +0x647:  movzbl (%esi),%ebx
087ea3ea +0x64a:  test   %bl,%bl
087ea3ec +0x64c:  je     087e9f5c <+0x1bc>
087ea3f2 +0x652:  cmp    $0x3e,%bl
087ea3f5 +0x655:  jne    087ea3c8 <+0x628>
087ea3f7 +0x657:  mov    %ebx,%edx
087ea3f9 +0x659:  mov    %esi,%ebx
087ea3fb +0x65b:  mov    -0x4c(%ebp),%esi
087ea3fe +0x65e:  jmp    087e9f58 <+0x1b8>
087ea403 +0x663:  cmpb   $0xbf,0x2(%esi)
087ea407 +0x667:  jne    087e9f70 <+0x1d0>
087ea40d +0x66d:  jmp    087e9fbf <+0x21f>
087ea412 +0x672:  lea    0x0(%esi),%esi
087ea418 +0x678:  mov    %esi,%ebx
087ea41a +0x67a:  mov    -0x4c(%ebp),%esi
087ea41d +0x67d:  jmp    087ea0e5 <+0x345>
087ea422 +0x682:  mov    0x8(%ebp),%eax
087ea425 +0x685:  jmp    087e9ede <+0x13e>
087ea42a +0x68a:  mov    %esi,%ebx
087ea42c +0x68c:  jmp    087e9e18 <+0x78>
087ea431 +0x691:  mov    $&data#bb92cc41(.plt),%edx
087ea436 +0x696:  test   %edx,%edx
087ea438 +0x698:  je     087ea54e <+0x7ae>
087ea43e +0x69e:  or     $0xffffffff,%edx
087ea441 +0x6a1:  lock xadd %edx,0x8(%eax)
087ea446 +0x6a6:  test   %edx,%edx
087ea448 +0x6a8:  jg     087ea0cb <+0x32b>
087ea44e +0x6ae:  lea    -0x19(%ebp),%edx
087ea451 +0x6b1:  mov    %edx,0x4(%esp)
087ea455 +0x6b5:  mov    %eax,(%esp)
087ea458 +0x6b8:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
087ea45d +0x6bd:  jmp    087ea0cb <+0x32b>
087ea462 +0x6c2:  mov    $&data#bb92cc41(.plt),%edx
087ea467 +0x6c7:  test   %edx,%edx
087ea469 +0x6c9:  je     087ea4ea <+0x74a>
087ea46b +0x6cb:  or     $0xffffffff,%edx
087ea46e +0x6ce:  lock xadd %edx,0x8(%eax)
087ea473 +0x6d3:  test   %edx,%edx
087ea475 +0x6d5:  jg     087ea0de <+0x33e>
087ea47b +0x6db:  lea    -0x1a(%ebp),%edx
087ea47e +0x6de:  mov    %edx,0x4(%esp)
087ea482 +0x6e2:  mov    %eax,(%esp)
087ea485 +0x6e5:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
087ea48a +0x6ea:  jmp    087ea0de <+0x33e>
087ea48f +0x6ef:  mov    $&data#bb92cc41(.plt),%eax
087ea494 +0x6f4:  test   %eax,%eax
087ea496 +0x6f6:  je     087ea55c <+0x7bc>
087ea49c +0x6fc:  or     $0xffffffff,%eax
087ea49f +0x6ff:  lock xadd %eax,0x8(%edx)
087ea4a4 +0x704:  test   %eax,%eax
087ea4a6 +0x706:  jg     087ea2d1 <+0x531>
087ea4ac +0x70c:  lea    -0x1d(%ebp),%eax
087ea4af +0x70f:  mov    %eax,0x4(%esp)
087ea4b3 +0x713:  mov    %edx,(%esp)
087ea4b6 +0x716:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
087ea4bb +0x71b:  jmp    087ea2d1 <+0x531>
087ea4c0 +0x720:  mov    %eax,%ebx
087ea4c2 +0x722:  lea    -0x44(%ebp),%eax
087ea4c5 +0x725:  mov    %eax,(%esp)
087ea4c8 +0x728:  call   087ea5c0 <+0x820>
087ea4cd +0x72d:  mov    %ebx,(%esp)
087ea4d0 +0x730:  call   08ae3750 <_Unwind_Resume>
087ea4d5 +0x735:  mov    %eax,%ebx
087ea4d7 +0x737:  lea    -0x44(%ebp),%edx
087ea4da +0x73a:  mov    %edx,(%esp)
087ea4dd +0x73d:  call   087ea5c0 <+0x820>
087ea4e2 +0x742:  mov    %ebx,(%esp)
087ea4e5 +0x745:  call   08ae3750 <_Unwind_Resume>
087ea4ea +0x74a:  mov    0x8(%eax),%edx
087ea4ed +0x74d:  lea    -0x1(%edx),%ecx
087ea4f0 +0x750:  mov    %ecx,0x8(%eax)
087ea4f3 +0x753:  jmp    087ea473 <+0x6d3>
087ea4f8 +0x758:  jmp    087ea4d5 <+0x735>
087ea4fa +0x75a:  mov    0x8(%eax),%edx
087ea4fd +0x75d:  lea    -0x1(%edx),%ecx
087ea500 +0x760:  mov    %ecx,0x8(%eax)
087ea503 +0x763:  jmp    087ea1d8 <+0x438>
087ea508 +0x768:  mov    $&data#bb92cc41(.plt),%edx
087ea50d +0x76d:  test   %edx,%edx
087ea50f +0x76f:  je     087ea543 <+0x7a3>
087ea511 +0x771:  or     $0xffffffff,%edx
087ea514 +0x774:  lock xadd %edx,0x8(%eax)
087ea519 +0x779:  test   %edx,%edx
087ea51b +0x77b:  jg     087ea1b0 <+0x410>
087ea521 +0x781:  lea    -0x1b(%ebp),%edx
087ea524 +0x784:  mov    %edx,0x4(%esp)
087ea528 +0x788:  mov    %eax,(%esp)
087ea52b +0x78b:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
087ea530 +0x790:  jmp    087ea1b0 <+0x410>
087ea535 +0x795:  mov    0x8(%edx),%eax
087ea538 +0x798:  lea    -0x1(%eax),%ecx
087ea53b +0x79b:  mov    %ecx,0x8(%edx)
087ea53e +0x79e:  jmp    087ea2f9 <+0x559>
087ea543 +0x7a3:  mov    0x8(%eax),%edx
087ea546 +0x7a6:  lea    -0x1(%edx),%ecx
087ea549 +0x7a9:  mov    %ecx,0x8(%eax)
087ea54c +0x7ac:  jmp    087ea519 <+0x779>
087ea54e +0x7ae:  mov    0x8(%eax),%edx
087ea551 +0x7b1:  lea    -0x1(%edx),%ecx
087ea554 +0x7b4:  mov    %ecx,0x8(%eax)
087ea557 +0x7b7:  jmp    087ea446 <+0x6a6>
087ea55c +0x7bc:  mov    0x8(%edx),%eax
087ea55f +0x7bf:  lea    -0x1(%eax),%ecx
087ea562 +0x7c2:  mov    %ecx,0x8(%edx)
087ea565 +0x7c5:  jmp    087ea4a4 <+0x704>
087ea56a +0x7ca:  nop
087ea56b +0x7cb:  nop
087ea56c +0x7cc:  nop
087ea56d +0x7cd:  nop
087ea56e +0x7ce:  nop
087ea56f +0x7cf:  nop
087ea570 +0x7d0:  push   %ebp
087ea571 +0x7d1:  mov    %esp,%ebp
087ea573 +0x7d3:  mov    0x8(%ebp),%eax
087ea576 +0x7d6:  pop    %ebp
087ea577 +0x7d7:  ret
087ea578 +0x7d8:  nop
087ea579 +0x7d9:  nop
087ea57a +0x7da:  nop
087ea57b +0x7db:  nop
087ea57c +0x7dc:  nop
087ea57d +0x7dd:  nop
087ea57e +0x7de:  nop
087ea57f +0x7df:  nop
087ea580 +0x7e0:  push   %ebp
087ea581 +0x7e1:  mov    %esp,%ebp
087ea583 +0x7e3:  mov    0x8(%ebp),%eax
087ea586 +0x7e6:  pop    %ebp
087ea587 +0x7e7:  ret
087ea588 +0x7e8:  nop
087ea589 +0x7e9:  nop
087ea58a +0x7ea:  nop
087ea58b +0x7eb:  nop
087ea58c +0x7ec:  nop
087ea58d +0x7ed:  nop
087ea58e +0x7ee:  nop
087ea58f +0x7ef:  nop
087ea590 +0x7f0:  push   %ebp
087ea591 +0x7f1:  mov    %esp,%ebp
087ea593 +0x7f3:  sub    $0x18,%esp
087ea596 +0x7f6:  mov    0x10(%ebp),%eax
087ea599 +0x7f9:  movl   $0x0,0xc(%esp)
087ea5a1 +0x801:  mov    %eax,0x8(%esp)
087ea5a5 +0x805:  mov    0xc(%ebp),%eax
087ea5a8 +0x808:  mov    %eax,0x4(%esp)
087ea5ac +0x80c:  mov    0x8(%ebp),%eax
087ea5af +0x80f:  mov    %eax,(%esp)
087ea5b2 +0x812:  call   087e4f70 <_ZNK14TiXmlAttribute5PrintEP8_IO_FILEiPSs>  ; TiXmlAttribute::Print(_IO_FILE*, int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >*) const
087ea5b7 +0x817:  leave
087ea5b8 +0x818:  ret
087ea5b9 +0x819:  nop
087ea5ba +0x81a:  nop
087ea5bb +0x81b:  nop
087ea5bc +0x81c:  nop
087ea5bd +0x81d:  nop
087ea5be +0x81e:  nop
087ea5bf +0x81f:  nop
087ea5c0 +0x820:  push   %ebp
087ea5c1 +0x821:  mov    %esp,%ebp
087ea5c3 +0x823:  push   %ebx
087ea5c4 +0x824:  sub    $0x24,%esp
087ea5c7 +0x827:  mov    0x8(%ebp),%ebx
087ea5ca +0x82a:  mov    0x18(%ebx),%eax
087ea5cd +0x82d:  movl   $&_ZTV14TiXmlAttribute+0x8,(%ebx)
087ea5d3 +0x833:  sub    $0xc,%eax
087ea5d6 +0x836:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
087ea5db +0x83b:  jne    087ea5f8 <+0x858>
087ea5dd +0x83d:  mov    0x14(%ebx),%eax
087ea5e0 +0x840:  mov    $&_ZNSs4_Rep20_S_empty_rep_storageE,%edx
087ea5e5 +0x845:  sub    $0xc,%eax
087ea5e8 +0x848:  cmp    %eax,%edx
087ea5ea +0x84a:  jne    087ea61e <+0x87e>
087ea5ec +0x84c:  movl   $&_ZTV9TiXmlBase+0x8,(%ebx)
087ea5f2 +0x852:  add    $0x24,%esp
087ea5f5 +0x855:  pop    %ebx
087ea5f6 +0x856:  pop    %ebp
087ea5f7 +0x857:  ret
087ea5f8 +0x858:  mov    $&data#bb92cc41(.plt),%edx
087ea5fd +0x85d:  test   %edx,%edx
087ea5ff +0x85f:  je     087ea644 <+0x8a4>
087ea601 +0x861:  or     $0xffffffff,%edx
087ea604 +0x864:  lock xadd %edx,0x8(%eax)
087ea609 +0x869:  test   %edx,%edx
087ea60b +0x86b:  jg     087ea5dd <+0x83d>
087ea60d +0x86d:  lea    -0x9(%ebp),%edx
087ea610 +0x870:  mov    %edx,0x4(%esp)
087ea614 +0x874:  mov    %eax,(%esp)
087ea617 +0x877:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
087ea61c +0x87c:  jmp    087ea5dd <+0x83d>
087ea61e +0x87e:  mov    $&data#bb92cc41(.plt),%edx
087ea623 +0x883:  test   %edx,%edx
087ea625 +0x885:  je     087ea64f <+0x8af>
087ea627 +0x887:  or     $0xffffffff,%edx
087ea62a +0x88a:  lock xadd %edx,0x8(%eax)
087ea62f +0x88f:  test   %edx,%edx
087ea631 +0x891:  jg     087ea5ec <+0x84c>
087ea633 +0x893:  lea    -0xa(%ebp),%edx
087ea636 +0x896:  mov    %edx,0x4(%esp)
087ea63a +0x89a:  mov    %eax,(%esp)
087ea63d +0x89d:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
087ea642 +0x8a2:  jmp    087ea5ec <+0x84c>
087ea644 +0x8a4:  mov    0x8(%eax),%edx
087ea647 +0x8a7:  lea    -0x1(%edx),%ecx
087ea64a +0x8aa:  mov    %ecx,0x8(%eax)
087ea64d +0x8ad:  jmp    087ea609 <+0x869>
087ea64f +0x8af:  mov    0x8(%eax),%edx
087ea652 +0x8b2:  lea    -0x1(%edx),%ecx
087ea655 +0x8b5:  mov    %ecx,0x8(%eax)
087ea658 +0x8b8:  jmp    087ea62f <+0x88f>
087ea65a +0x8ba:  nop
087ea65b +0x8bb:  nop
087ea65c +0x8bc:  nop
087ea65d +0x8bd:  nop
087ea65e +0x8be:  nop
087ea65f +0x8bf:  nop
087ea660 +0x8c0:  push   %ebp
087ea661 +0x8c1:  mov    %esp,%ebp
087ea663 +0x8c3:  push   %ebx
087ea664 +0x8c4:  sub    $0x24,%esp
087ea667 +0x8c7:  mov    0x8(%ebp),%ebx
087ea66a +0x8ca:  mov    0x18(%ebx),%eax
087ea66d +0x8cd:  movl   $&_ZTV14TiXmlAttribute+0x8,(%ebx)
087ea673 +0x8d3:  sub    $0xc,%eax
087ea676 +0x8d6:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
087ea67b +0x8db:  jne    087ea6a0 <+0x900>
087ea67d +0x8dd:  mov    0x14(%ebx),%eax
087ea680 +0x8e0:  mov    $&_ZNSs4_Rep20_S_empty_rep_storageE,%edx
087ea685 +0x8e5:  sub    $0xc,%eax
087ea688 +0x8e8:  cmp    %eax,%edx
087ea68a +0x8ea:  jne    087ea6c6 <+0x926>
087ea68c +0x8ec:  movl   $&_ZTV9TiXmlBase+0x8,(%ebx)
087ea692 +0x8f2:  mov    %ebx,(%esp)
087ea695 +0x8f5:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
087ea69a +0x8fa:  add    $0x24,%esp
087ea69d +0x8fd:  pop    %ebx
087ea69e +0x8fe:  pop    %ebp
087ea69f +0x8ff:  ret
087ea6a0 +0x900:  mov    $&data#bb92cc41(.plt),%edx
087ea6a5 +0x905:  test   %edx,%edx
087ea6a7 +0x907:  je     087ea6ec <+0x94c>
087ea6a9 +0x909:  or     $0xffffffff,%edx
087ea6ac +0x90c:  lock xadd %edx,0x8(%eax)
087ea6b1 +0x911:  test   %edx,%edx
087ea6b3 +0x913:  jg     087ea67d <+0x8dd>
087ea6b5 +0x915:  lea    -0x9(%ebp),%edx
087ea6b8 +0x918:  mov    %edx,0x4(%esp)
087ea6bc +0x91c:  mov    %eax,(%esp)
087ea6bf +0x91f:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
087ea6c4 +0x924:  jmp    087ea67d <+0x8dd>
087ea6c6 +0x926:  mov    $&data#bb92cc41(.plt),%edx
087ea6cb +0x92b:  test   %edx,%edx
087ea6cd +0x92d:  je     087ea6f7 <+0x957>
087ea6cf +0x92f:  or     $0xffffffff,%edx
087ea6d2 +0x932:  lock xadd %edx,0x8(%eax)
087ea6d7 +0x937:  test   %edx,%edx
087ea6d9 +0x939:  jg     087ea68c <+0x8ec>
087ea6db +0x93b:  lea    -0xa(%ebp),%edx
087ea6de +0x93e:  mov    %edx,0x4(%esp)
087ea6e2 +0x942:  mov    %eax,(%esp)
087ea6e5 +0x945:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
087ea6ea +0x94a:  jmp    087ea68c <+0x8ec>
087ea6ec +0x94c:  mov    0x8(%eax),%edx
087ea6ef +0x94f:  lea    -0x1(%edx),%ecx
087ea6f2 +0x952:  mov    %ecx,0x8(%eax)
087ea6f5 +0x955:  jmp    087ea6b1 <+0x911>
087ea6f7 +0x957:  mov    0x8(%eax),%edx
087ea6fa +0x95a:  lea    -0x1(%edx),%ecx
087ea6fd +0x95d:  mov    %ecx,0x8(%eax)
087ea700 +0x960:  jmp    087ea6d7 <+0x937>
087ea702 +0x962:  nop
087ea703 +0x963:  nop
087ea704 +0x964:  nop
087ea705 +0x965:  nop
087ea706 +0x966:  nop
087ea707 +0x967:  nop
087ea708 +0x968:  nop
087ea709 +0x969:  nop
087ea70a +0x96a:  nop
087ea70b +0x96b:  nop
087ea70c +0x96c:  nop
087ea70d +0x96d:  nop
087ea70e +0x96e:  nop
087ea70f +0x96f:  nop
```

## 反编译 C

```c
// TiXmlDeclaration::Parse @ 0x87e9da0

/* WARNING: Removing unreachable block (ram,0x087ea535) */
/* WARNING: Removing unreachable block (ram,0x087ea55c) */
/* WARNING: Removing unreachable block (ram,0x087ea543) */
/* WARNING: Removing unreachable block (ram,0x087ea54e) */
/* WARNING: Removing unreachable block (ram,0x087ea4fa) */
/* WARNING: Removing unreachable block (ram,0x087ea4ea) */
/* TiXmlDeclaration::Parse(char const*, TiXmlParsingData*, TiXmlEncoding) */

byte * __thiscall
TiXmlDeclaration::Parse(TiXmlDeclaration *this,byte *param_1,TiXmlParsingData *param_2,int param_4)

{
  int *piVar1;
  byte bVar2;
  undefined4 uVar3;
  char *pcVar4;
  char cVar5;
  int iVar6;
  size_t sVar7;
  byte *pbVar8;
  uint uVar9;
  byte bVar10;
  undefined **local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 *local_34;
  char *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  if ((param_1 == (byte *)0x0) || (bVar10 = *param_1, bVar10 == 0)) {
    iVar6 = TiXmlNode::GetDocument((TiXmlNode *)this);
  }
  else {
    if (param_4 == 1) {
      do {
        if (*param_1 == 0xef) {
          if (param_1[1] == 0xbb) {
            bVar2 = param_1[2];
joined_r0x087ea407:
            if (bVar2 != 0xbf) goto LAB_087e9f70;
          }
          else {
            if (param_1[1] != 0xbf) goto LAB_087e9f70;
            bVar2 = param_1[2];
            if (bVar2 != 0xbe) goto joined_r0x087ea407;
          }
          param_1 = param_1 + 3;
        }
        else {
LAB_087e9f70:
          iVar6 = isspace((uint)bVar10);
          if (((iVar6 == 0) && (bVar10 != 10)) && (bVar10 != 0xd)) break;
          param_1 = param_1 + 1;
        }
        bVar10 = *param_1;
      } while (bVar10 != 0);
    }
    else {
      do {
        iVar6 = isspace((uint)bVar10);
        if (((bVar10 != 10) && (iVar6 == 0)) && (bVar10 != 0xd)) break;
        param_1 = param_1 + 1;
        bVar10 = *param_1;
      } while (bVar10 != 0);
    }
    iVar6 = TiXmlNode::GetDocument((TiXmlNode *)this);
    if (((param_1 != (byte *)0x0) && (*param_1 != 0)) &&
       (cVar5 = TiXmlBase::StringEqual(param_1,"<?xml",1,param_4), cVar5 != '\0')) {
      if (param_2 != (TiXmlParsingData *)0x0) {
        TiXmlParsingData::Stamp(param_2,param_1,param_4);
        uVar3 = *(undefined4 *)(param_2 + 4);
        *(undefined4 *)(this + 4) = *(undefined4 *)param_2;
        *(undefined4 *)(this + 8) = uVar3;
      }
      pbVar8 = param_1 + 5;
      std::string::assign((string *)(this + 0x2c),"",0);
      std::string::assign((string *)(this + 0x30),"",0);
      std::string::assign((string *)(this + 0x34),"",0);
      if (pbVar8 == (byte *)0x0) {
        return (byte *)0x0;
      }
      uVar9 = (uint)param_1[5];
LAB_087e9f58:
      do {
        cVar5 = (char)uVar9;
        if (cVar5 == '\0') {
          return (byte *)0x0;
        }
        if (cVar5 == '>') {
          return pbVar8 + 1;
        }
        if (cVar5 == '\0') {
          pbVar8 = (byte *)0x0;
        }
        else if (param_4 == 1) {
          while (cVar5 = (char)uVar9, cVar5 != '\0') {
            if (*pbVar8 == 0xef) {
              if (pbVar8[1] == 0xbb) {
                bVar10 = pbVar8[2];
joined_r0x087ea37c:
                if (bVar10 != 0xbf) goto LAB_087ea328;
              }
              else {
                if (pbVar8[1] != 0xbf) goto LAB_087ea328;
                bVar10 = pbVar8[2];
                if (bVar10 != 0xbe) goto joined_r0x087ea37c;
              }
              pbVar8 = pbVar8 + 3;
            }
            else {
LAB_087ea328:
              iVar6 = isspace(uVar9);
              if (((iVar6 == 0) && (cVar5 != '\n')) && (cVar5 != '\r')) break;
              pbVar8 = pbVar8 + 1;
            }
            uVar9 = (uint)*pbVar8;
          }
        }
        else {
          do {
            iVar6 = isspace(uVar9);
            if ((((char)uVar9 != '\n') && (iVar6 == 0)) && ((char)uVar9 != '\r')) break;
            pbVar8 = pbVar8 + 1;
            uVar9 = (uint)*pbVar8;
          } while (*pbVar8 != 0);
        }
        cVar5 = TiXmlBase::StringEqual(pbVar8,"version",1,param_4);
        if (cVar5 != '\0') {
          local_40 = 0xffffffff;
          local_44 = 0xffffffff;
          local_3c = 0;
          local_48 = &PTR__TiXmlAttribute_08de2028;
          local_34 = &DAT_0948ccfc;
          local_30 = &DAT_0948ccfc;
          local_38 = 0;
          local_28 = 0;
          local_2c = 0;
                    /* try { // try from 087ea088 to 087ea0b2 has its CatchHandler @ 087ea4d5 */
          pbVar8 = (byte *)TiXmlAttribute::Parse((TiXmlAttribute *)&local_48,pbVar8,param_2,param_4)
          ;
          pcVar4 = local_30;
          sVar7 = strlen(local_30);
          std::string::assign((string *)(this + 0x2c),pcVar4,sVar7);
          local_48 = &PTR__TiXmlAttribute_08de2028;
          if ((allocator *)(local_30 + -0xc) !=
              (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
            LOCK();
            piVar1 = (int *)(local_30 + -4);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 < 1) {
              std::string::_Rep::_M_destroy((allocator *)(local_30 + -0xc));
            }
          }
          if ((allocator *)(local_34 + -0xc) !=
              (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
            LOCK();
            piVar1 = (int *)(local_34 + -4);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 < 1) {
              std::string::_Rep::_M_destroy((allocator *)(local_34 + -0xc));
            }
          }
LAB_087ea0de:
          local_48 = &PTR__TiXmlBase_08de13f8;
LAB_087ea0e5:
          if (pbVar8 == (byte *)0x0) {
            return (byte *)0x0;
          }
          uVar9 = (uint)*pbVar8;
          goto LAB_087e9f58;
        }
        cVar5 = TiXmlBase::StringEqual(pbVar8,"encoding",1,param_4);
        if (cVar5 != '\0') {
          local_40 = 0xffffffff;
          local_44 = 0xffffffff;
          local_3c = 0;
          local_48 = &PTR__TiXmlAttribute_08de2028;
          local_34 = &DAT_0948ccfc;
          local_30 = &DAT_0948ccfc;
          local_38 = 0;
          local_28 = 0;
          local_2c = 0;
                    /* try { // try from 087ea16d to 087ea197 has its CatchHandler @ 087ea4c0 */
          pbVar8 = (byte *)TiXmlAttribute::Parse((TiXmlAttribute *)&local_48,pbVar8,param_2,param_4)
          ;
          pcVar4 = local_30;
          sVar7 = strlen(local_30);
          std::string::assign((string *)(this + 0x30),pcVar4,sVar7);
          local_48 = &PTR__TiXmlAttribute_08de2028;
          if ((allocator *)(local_30 + -0xc) !=
              (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
            LOCK();
            piVar1 = (int *)(local_30 + -4);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 < 1) {
              std::string::_Rep::_M_destroy((allocator *)(local_30 + -0xc));
            }
          }
          if ((allocator *)(local_34 + -0xc) !=
              (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
            LOCK();
            piVar1 = (int *)(local_34 + -4);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 < 1) {
              std::string::_Rep::_M_destroy((allocator *)(local_34 + -0xc));
            }
          }
          goto LAB_087ea0de;
        }
        cVar5 = TiXmlBase::StringEqual(pbVar8,"standalone",1,param_4);
        if (cVar5 != '\0') {
          local_40 = 0xffffffff;
          local_44 = 0xffffffff;
          local_3c = 0;
          local_48 = &PTR__TiXmlAttribute_08de2028;
          local_34 = &DAT_0948ccfc;
          local_30 = &DAT_0948ccfc;
          local_38 = 0;
          local_28 = 0;
          local_2c = 0;
                    /* try { // try from 087ea28d to 087ea2b7 has its CatchHandler @ 087ea4f8 */
          pbVar8 = (byte *)TiXmlAttribute::Parse((TiXmlAttribute *)&local_48,pbVar8,param_2,param_4)
          ;
          pcVar4 = local_30;
          sVar7 = strlen(local_30);
          std::string::assign((string *)(this + 0x34),pcVar4,sVar7);
          local_48 = &PTR__TiXmlAttribute_08de2028;
          if ((allocator *)(local_30 + -0xc) !=
              (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
            LOCK();
            piVar1 = (int *)(local_30 + -4);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 < 1) {
              std::string::_Rep::_M_destroy((allocator *)(local_30 + -0xc));
            }
          }
          if ((allocator *)(local_34 + -0xc) !=
              (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
            LOCK();
            piVar1 = (int *)(local_34 + -4);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 < 1) {
              std::string::_Rep::_M_destroy((allocator *)(local_34 + -0xc));
            }
          }
          goto LAB_087ea0de;
        }
        if (pbVar8 == (byte *)0x0) {
          return (byte *)0x0;
        }
        bVar10 = *pbVar8;
        uVar9 = (uint)bVar10;
        if (bVar10 == 0) {
          return (byte *)0x0;
        }
        if (bVar10 != 0x3e) {
          do {
            iVar6 = isspace(uVar9);
            if ((((char)uVar9 == '\n') || (iVar6 != 0)) || ((char)uVar9 == '\r')) goto LAB_087ea0e5;
            pbVar8 = pbVar8 + 1;
            if (pbVar8 == (byte *)0x0) {
              return (byte *)0x0;
            }
            bVar10 = *pbVar8;
            uVar9 = (uint)bVar10;
            if (bVar10 == 0) {
              return (byte *)0x0;
            }
          } while (bVar10 != 0x3e);
          uVar9 = 0x3e;
        }
      } while( true );
    }
  }
  uVar3 = TiXmlBase::errorString._44_4_;
  if ((iVar6 != 0) && (*(char *)(iVar6 + 0x2c) == '\0')) {
    *(undefined1 *)(iVar6 + 0x2c) = 1;
    *(undefined4 *)(iVar6 + 0x30) = 0xb;
    sVar7 = strlen((char *)uVar3);
    std::string::assign((string *)(iVar6 + 0x34),(char *)uVar3,sVar7);
    *(undefined4 *)(iVar6 + 0x40) = 0xffffffff;
    *(undefined4 *)(iVar6 + 0x3c) = 0xffffffff;
    return (byte *)0x0;
  }
  return (byte *)0x0;
}
```
