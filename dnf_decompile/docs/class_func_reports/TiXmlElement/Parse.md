# Parse

`_ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding`

`TiXmlElement::Parse(char const*, TiXmlParsingData*, TiXmlEncoding)`

| 类 | 地址 |
|---|---|
| `TiXmlElement` | `0x087e7d50` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e7d50  _ZN12TiXmlElement5ParseEPKcP16TiXmlParsingData13TiXmlEncoding
#           TiXmlElement::Parse(char const*, TiXmlParsingData*, TiXmlEncoding)
# range [0x087e7d50, 0x087e842e]
087e7d50 +0x000:  push   %ebp
087e7d51 +0x001:  mov    %esp,%ebp
087e7d53 +0x003:  push   %edi
087e7d54 +0x004:  push   %esi
087e7d55 +0x005:  push   %ebx
087e7d56 +0x006:  sub    $0x4c,%esp
087e7d59 +0x009:  mov    0xc(%ebp),%esi
087e7d5c +0x00c:  test   %esi,%esi
087e7d5e +0x00e:  jne    087e7d90 <+0x40>
087e7d60 +0x010:  mov    0x8(%ebp),%edx
087e7d63 +0x013:  mov    %edx,(%esp)
087e7d66 +0x016:  call   087dfed0 <_ZNK9TiXmlNode11GetDocumentEv>  ; TiXmlNode::GetDocument() const
087e7d6b +0x01b:  mov    %eax,-0x30(%ebp)
087e7d6e +0x01e:  mov    -0x30(%ebp),%ecx
087e7d71 +0x021:  test   %ecx,%ecx
087e7d73 +0x023:  jne    087e820b <+0x4bb>
087e7d79 +0x029:  lea    0x0(%esi,%eiz,1),%esi
087e7d80 +0x030:  xor    %esi,%esi
087e7d82 +0x032:  add    $0x4c,%esp
087e7d85 +0x035:  mov    %esi,%eax
087e7d87 +0x037:  pop    %ebx
087e7d88 +0x038:  pop    %esi
087e7d89 +0x039:  pop    %edi
087e7d8a +0x03a:  pop    %ebp
087e7d8b +0x03b:  ret
087e7d8c +0x03c:  lea    0x0(%esi,%eiz,1),%esi
087e7d90 +0x040:  movzbl (%esi),%ebx
087e7d93 +0x043:  test   %bl,%bl
087e7d95 +0x045:  je     087e7d60 <+0x10>
087e7d97 +0x047:  cmpl   $0x1,0x14(%ebp)
087e7d9b +0x04b:  je     087e7dd2 <+0x82>
087e7d9d +0x04d:  movzbl %bl,%eax
087e7da0 +0x050:  mov    %eax,(%esp)
087e7da3 +0x053:  call   0807e280 <_init+0xb78>
087e7da8 +0x058:  cmp    $0xa,%bl
087e7dab +0x05b:  je     087e7db8 <+0x68>
087e7dad +0x05d:  test   %eax,%eax
087e7daf +0x05f:  jne    087e7db8 <+0x68>
087e7db1 +0x061:  cmp    $0xd,%bl
087e7db4 +0x064:  jne    087e7df4 <+0xa4>
087e7db6 +0x066:  xchg   %ax,%ax
087e7db8 +0x068:  add    $0x1,%esi
087e7dbb +0x06b:  movzbl (%esi),%ebx
087e7dbe +0x06e:  test   %bl,%bl
087e7dc0 +0x070:  je     087e7df4 <+0xa4>
087e7dc2 +0x072:  jmp    087e7d9d <+0x4d>
087e7dc4 +0x074:  lea    0x0(%esi,%eiz,1),%esi
087e7dc8 +0x078:  add    $0x1,%esi
087e7dcb +0x07b:  movzbl (%esi),%ebx
087e7dce +0x07e:  test   %bl,%bl
087e7dd0 +0x080:  je     087e7df4 <+0xa4>
087e7dd2 +0x082:  cmpb   $0xef,(%esi)
087e7dd5 +0x085:  je     087e80b8 <+0x368>
087e7ddb +0x08b:  movzbl %bl,%eax
087e7dde +0x08e:  mov    %eax,(%esp)
087e7de1 +0x091:  call   0807e280 <_init+0xb78>
087e7de6 +0x096:  test   %eax,%eax
087e7de8 +0x098:  jne    087e7dc8 <+0x78>
087e7dea +0x09a:  cmp    $0xa,%bl
087e7ded +0x09d:  je     087e7dc8 <+0x78>
087e7def +0x09f:  cmp    $0xd,%bl
087e7df2 +0x0a2:  je     087e7dc8 <+0x78>
087e7df4 +0x0a4:  mov    0x8(%ebp),%eax
087e7df7 +0x0a7:  mov    %eax,(%esp)
087e7dfa +0x0aa:  call   087dfed0 <_ZNK9TiXmlNode11GetDocumentEv>  ; TiXmlNode::GetDocument() const
087e7dff +0x0af:  test   %esi,%esi
087e7e01 +0x0b1:  mov    %eax,-0x30(%ebp)
087e7e04 +0x0b4:  je     087e7d6e <+0x1e>
087e7e0a +0x0ba:  movzbl (%esi),%eax
087e7e0d +0x0bd:  test   %al,%al
087e7e0f +0x0bf:  je     087e7d6e <+0x1e>
087e7e15 +0x0c5:  mov    0x10(%ebp),%edx
087e7e18 +0x0c8:  test   %edx,%edx
087e7e1a +0x0ca:  je     087e7e46 <+0xf6>
087e7e1c +0x0cc:  mov    0x14(%ebp),%eax
087e7e1f +0x0cf:  mov    0x10(%ebp),%edx
087e7e22 +0x0d2:  mov    %esi,0x4(%esp)
087e7e26 +0x0d6:  mov    %eax,0x8(%esp)
087e7e2a +0x0da:  mov    %edx,(%esp)
087e7e2d +0x0dd:  call   087e6020 <_ZN16TiXmlParsingData5StampEPKc13TiXmlEncoding>  ; TiXmlParsingData::Stamp(char const*, TiXmlEncoding)
087e7e32 +0x0e2:  mov    0x10(%ebp),%ecx
087e7e35 +0x0e5:  mov    (%ecx),%eax
087e7e37 +0x0e7:  mov    0x4(%ecx),%edx
087e7e3a +0x0ea:  mov    0x8(%ebp),%ecx
087e7e3d +0x0ed:  mov    %eax,0x4(%ecx)
087e7e40 +0x0f0:  mov    %edx,0x8(%ecx)
087e7e43 +0x0f3:  movzbl (%esi),%eax
087e7e46 +0x0f6:  cmp    $0x3c,%al
087e7e48 +0x0f8:  jne    087e8020 <+0x2d0>
087e7e4e +0x0fe:  mov    %esi,%ebx
087e7e50 +0x100:  add    $0x1,%ebx
087e7e53 +0x103:  jne    087e80e0 <+0x390>
087e7e59 +0x109:  mov    0x8(%ebp),%edi
087e7e5c +0x10c:  mov    0x14(%ebp),%eax
087e7e5f +0x10f:  mov    %ebx,(%esp)
087e7e62 +0x112:  add    $0x20,%edi
087e7e65 +0x115:  mov    %eax,0x8(%esp)
087e7e69 +0x119:  mov    %edi,0x4(%esp)
087e7e6d +0x11d:  call   087e6c30 <_ZN9TiXmlBase8ReadNameEPKcPSs13TiXmlEncoding>  ; TiXmlBase::ReadName(char const*, std::basic_string<char, std::char_traits<char>, std::allocator<char> >*, TiXmlEncoding)
087e7e72 +0x122:  test   %eax,%eax
087e7e74 +0x124:  mov    %eax,%esi
087e7e76 +0x126:  je     087e8160 <+0x410>
087e7e7c +0x12c:  cmpb   $0x0,(%eax)
087e7e7f +0x12f:  je     087e8160 <+0x410>
087e7e85 +0x135:  lea    -0x19(%ebp),%eax
087e7e88 +0x138:  lea    -0x20(%ebp),%edx
087e7e8b +0x13b:  mov    %eax,0x8(%esp)
087e7e8f +0x13f:  movl   $"</",0x4(%esp)
087e7e97 +0x147:  mov    %edx,(%esp)
087e7e9a +0x14a:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
087e7e9f +0x14f:  lea    -0x20(%ebp),%ecx
087e7ea2 +0x152:  mov    %edi,0x4(%esp)
087e7ea6 +0x156:  mov    %ecx,(%esp)
087e7ea9 +0x159:  call   08708140 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1d50>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1d50
087e7eae +0x15e:  mov    0x8(%ebp),%eax
087e7eb1 +0x161:  add    $0x2c,%eax
087e7eb4 +0x164:  mov    %eax,-0x2c(%ebp)
087e7eb7 +0x167:  nop
087e7eb8 +0x168:  movzbl (%esi),%ebx
087e7ebb +0x16b:  test   %bl,%bl
087e7ebd +0x16d:  jne    087e7f08 <+0x1b8>
087e7ebf +0x16f:  mov    -0x20(%ebp),%eax
087e7ec2 +0x172:  sub    $0xc,%eax
087e7ec5 +0x175:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
087e7eca +0x17a:  je     087e7d82 <+0x32>
087e7ed0 +0x180:  mov    $&data#bb92cc41(.plt),%edx
087e7ed5 +0x185:  test   %edx,%edx
087e7ed7 +0x187:  je     087e841f <+0x6cf>
087e7edd +0x18d:  or     $0xffffffff,%edx
087e7ee0 +0x190:  lock xadd %edx,0x8(%eax)
087e7ee5 +0x195:  test   %edx,%edx
087e7ee7 +0x197:  jg     087e7d82 <+0x32>
087e7eed +0x19d:  lea    -0x1a(%ebp),%edx
087e7ef0 +0x1a0:  mov    %edx,0x4(%esp)
087e7ef4 +0x1a4:  mov    %eax,(%esp)
087e7ef7 +0x1a7:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
087e7efc +0x1ac:  jmp    087e7d82 <+0x32>
087e7f01 +0x1b1:  lea    0x0(%esi,%eiz,1),%esi
087e7f08 +0x1b8:  cmpl   $0x1,0x14(%ebp)
087e7f0c +0x1bc:  mov    %esi,%edi
087e7f0e +0x1be:  je     087e8058 <+0x308>
087e7f14 +0x1c4:  movzbl %bl,%eax
087e7f17 +0x1c7:  mov    %eax,(%esp)
087e7f1a +0x1ca:  call   0807e280 <_init+0xb78>
087e7f1f +0x1cf:  cmp    $0xa,%bl
087e7f22 +0x1d2:  je     087e8008 <+0x2b8>
087e7f28 +0x1d8:  test   %eax,%eax
087e7f2a +0x1da:  jne    087e8008 <+0x2b8>
087e7f30 +0x1e0:  cmp    $0xd,%bl
087e7f33 +0x1e3:  je     087e8008 <+0x2b8>
087e7f39 +0x1e9:  test   %edi,%edi
087e7f3b +0x1eb:  je     087e8198 <+0x448>
087e7f41 +0x1f1:  test   %bl,%bl
087e7f43 +0x1f3:  je     087e8198 <+0x448>
087e7f49 +0x1f9:  cmp    $0x2f,%bl
087e7f4c +0x1fc:  lea    0x0(%esi,%eiz,1),%esi
087e7f50 +0x200:  je     087e8228 <+0x4d8>
087e7f56 +0x206:  cmp    $0x3e,%bl
087e7f59 +0x209:  je     087e8268 <+0x518>
087e7f5f +0x20f:  movl   $0x24,(%esp)
087e7f66 +0x216:  call   08724450 <_Znwj>  ; operator new(unsigned int)
087e7f6b +0x21b:  mov    -0x30(%ebp),%edx
087e7f6e +0x21e:  mov    %eax,%ebx
087e7f70 +0x220:  movl   $0xffffffff,0x8(%eax)
087e7f77 +0x227:  mov    0x14(%ebp),%ecx
087e7f7a +0x22a:  movl   $0xffffffff,0x4(%eax)
087e7f81 +0x231:  movl   $0x0,0xc(%eax)
087e7f88 +0x238:  movl   $&_ZTV14TiXmlAttribute+0x8,(%eax)
087e7f8e +0x23e:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,0x14(%eax)
087e7f95 +0x245:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,0x18(%eax)
087e7f9c +0x24c:  movl   $0x0,0x20(%eax)
087e7fa3 +0x253:  movl   $0x0,0x1c(%eax)
087e7faa +0x25a:  mov    %edx,0x10(%eax)
087e7fad +0x25d:  mov    0x10(%ebp),%eax
087e7fb0 +0x260:  mov    %ecx,0xc(%esp)
087e7fb4 +0x264:  mov    %edi,0x4(%esp)
087e7fb8 +0x268:  mov    %ebx,(%esp)
087e7fbb +0x26b:  mov    %eax,0x8(%esp)
087e7fbf +0x26f:  call   *&_ZTV14TiXmlAttribute+0x14
087e7fc5 +0x275:  test   %eax,%eax
087e7fc7 +0x277:  mov    %eax,%esi
087e7fc9 +0x279:  je     087e81d0 <+0x480>
087e7fcf +0x27f:  cmpb   $0x0,(%eax)
087e7fd2 +0x282:  je     087e81d0 <+0x480>
087e7fd8 +0x288:  mov    -0x2c(%ebp),%edx
087e7fdb +0x28b:  lea    0x14(%ebx),%eax
087e7fde +0x28e:  mov    %eax,0x4(%esp)
087e7fe2 +0x292:  mov    %edx,(%esp)
087e7fe5 +0x295:  call   087e0370 <_ZNK17TiXmlAttributeSet4FindERKSs>  ; TiXmlAttributeSet::Find(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) const
087e7fea +0x29a:  test   %eax,%eax
087e7fec +0x29c:  jne    087e82d0 <+0x580>
087e7ff2 +0x2a2:  mov    -0x2c(%ebp),%ecx
087e7ff5 +0x2a5:  mov    %ebx,0x4(%esp)
087e7ff9 +0x2a9:  mov    %ecx,(%esp)
087e7ffc +0x2ac:  call   087e3a40 <_ZN17TiXmlAttributeSet3AddEP14TiXmlAttribute>  ; TiXmlAttributeSet::Add(TiXmlAttribute*)
087e8001 +0x2b1:  jmp    087e7eb8 <+0x168>
087e8006 +0x2b6:  xchg   %ax,%ax
087e8008 +0x2b8:  add    $0x1,%edi
087e800b +0x2bb:  movzbl (%edi),%ebx
087e800e +0x2be:  test   %bl,%bl
087e8010 +0x2c0:  je     087e7f39 <+0x1e9>
087e8016 +0x2c6:  jmp    087e7f14 <+0x1c4>
087e801b +0x2cb:  nop
087e801c +0x2cc:  lea    0x0(%esi,%eiz,1),%esi
087e8020 +0x2d0:  mov    -0x30(%ebp),%edi
087e8023 +0x2d3:  test   %edi,%edi
087e8025 +0x2d5:  je     087e7d80 <+0x30>
087e802b +0x2db:  mov    0x14(%ebp),%eax
087e802e +0x2de:  mov    0x10(%ebp),%edx
087e8031 +0x2e1:  mov    %esi,0x8(%esp)
087e8035 +0x2e5:  mov    %eax,0x10(%esp)
087e8039 +0x2e9:  mov    %edx,0xc(%esp)
087e803d +0x2ed:  mov    -0x30(%ebp),%ecx
087e8040 +0x2f0:  xor    %esi,%esi
087e8042 +0x2f2:  movl   $0x3,0x4(%esp)
087e804a +0x2fa:  mov    %ecx,(%esp)
087e804d +0x2fd:  call   087e6d30 <_ZN13TiXmlDocument8SetErrorEiPKcP16TiXmlParsingData13TiXmlEncoding>  ; TiXmlDocument::SetError(int, char const*, TiXmlParsingData*, TiXmlEncoding)
087e8052 +0x302:  jmp    087e7d82 <+0x32>
087e8057 +0x307:  nop
087e8058 +0x308:  mov    %esi,%edi
087e805a +0x30a:  cmpb   $0xef,(%edi)
087e805d +0x30d:  je     087e8093 <+0x343>
087e805f +0x30f:  nop
087e8060 +0x310:  movzbl %bl,%eax
087e8063 +0x313:  mov    %eax,(%esp)
087e8066 +0x316:  call   0807e280 <_init+0xb78>
087e806b +0x31b:  test   %eax,%eax
087e806d +0x31d:  jne    087e8080 <+0x330>
087e806f +0x31f:  cmp    $0xa,%bl
087e8072 +0x322:  je     087e8080 <+0x330>
087e8074 +0x324:  cmp    $0xd,%bl
087e8077 +0x327:  jne    087e7f39 <+0x1e9>
087e807d +0x32d:  lea    0x0(%esi),%esi
087e8080 +0x330:  add    $0x1,%edi
087e8083 +0x333:  movzbl (%edi),%ebx
087e8086 +0x336:  test   %bl,%bl
087e8088 +0x338:  je     087e7f39 <+0x1e9>
087e808e +0x33e:  cmpb   $0xef,(%edi)
087e8091 +0x341:  jne    087e8060 <+0x310>
087e8093 +0x343:  movzbl 0x1(%edi),%eax
087e8097 +0x347:  cmp    $0xbb,%al
087e8099 +0x349:  je     087e8150 <+0x400>
087e809f +0x34f:  cmp    $0xbf,%al
087e80a1 +0x351:  jne    087e8060 <+0x310>
087e80a3 +0x353:  movzbl 0x2(%edi),%eax
087e80a7 +0x357:  cmp    $0xbe,%al
087e80a9 +0x359:  je     087e80af <+0x35f>
087e80ab +0x35b:  cmp    $0xbf,%al
087e80ad +0x35d:  jne    087e8060 <+0x310>
087e80af +0x35f:  add    $0x3,%edi
087e80b2 +0x362:  jmp    087e8083 <+0x333>
087e80b4 +0x364:  lea    0x0(%esi,%eiz,1),%esi
087e80b8 +0x368:  movzbl 0x1(%esi),%eax
087e80bc +0x36c:  cmp    $0xbb,%al
087e80be +0x36e:  je     087e8128 <+0x3d8>
087e80c0 +0x370:  cmp    $0xbf,%al
087e80c2 +0x372:  jne    087e7ddb <+0x8b>
087e80c8 +0x378:  movzbl 0x2(%esi),%eax
087e80cc +0x37c:  cmp    $0xbe,%al
087e80ce +0x37e:  je     087e80d8 <+0x388>
087e80d0 +0x380:  cmp    $0xbf,%al
087e80d2 +0x382:  jne    087e7ddb <+0x8b>
087e80d8 +0x388:  add    $0x3,%esi
087e80db +0x38b:  jmp    087e7dcb <+0x7b>
087e80e0 +0x390:  movzbl 0x1(%esi),%edx
087e80e4 +0x394:  test   %dl,%dl
087e80e6 +0x396:  je     087e8120 <+0x3d0>
087e80e8 +0x398:  cmpl   $0x1,0x14(%ebp)
087e80ec +0x39c:  je     087e8308 <+0x5b8>
087e80f2 +0x3a2:  mov    %ebx,%esi
087e80f4 +0x3a4:  mov    %edx,%ebx
087e80f6 +0x3a6:  movzbl %bl,%eax
087e80f9 +0x3a9:  mov    %eax,(%esp)
087e80fc +0x3ac:  call   0807e280 <_init+0xb78>
087e8101 +0x3b1:  cmp    $0xa,%bl
087e8104 +0x3b4:  je     087e8138 <+0x3e8>
087e8106 +0x3b6:  test   %eax,%eax
087e8108 +0x3b8:  jne    087e8138 <+0x3e8>
087e810a +0x3ba:  cmp    $0xd,%bl
087e810d +0x3bd:  lea    0x0(%esi),%esi
087e8110 +0x3c0:  je     087e8138 <+0x3e8>
087e8112 +0x3c2:  mov    %esi,%ebx
087e8114 +0x3c4:  jmp    087e7e59 <+0x109>
087e8119 +0x3c9:  lea    0x0(%esi,%eiz,1),%esi
087e8120 +0x3d0:  xor    %ebx,%ebx
087e8122 +0x3d2:  jmp    087e7e59 <+0x109>
087e8127 +0x3d7:  nop
087e8128 +0x3d8:  cmpb   $0xbf,0x2(%esi)
087e812c +0x3dc:  jne    087e7ddb <+0x8b>
087e8132 +0x3e2:  jmp    087e80d8 <+0x388>
087e8134 +0x3e4:  lea    0x0(%esi,%eiz,1),%esi
087e8138 +0x3e8:  add    $0x1,%esi
087e813b +0x3eb:  movzbl (%esi),%ebx
087e813e +0x3ee:  test   %bl,%bl
087e8140 +0x3f0:  jne    087e80f6 <+0x3a6>
087e8142 +0x3f2:  mov    %esi,%ebx
087e8144 +0x3f4:  jmp    087e7e59 <+0x109>
087e8149 +0x3f9:  lea    0x0(%esi,%eiz,1),%esi
087e8150 +0x400:  cmpb   $0xbf,0x2(%edi)
087e8154 +0x404:  jne    087e8060 <+0x310>
087e815a +0x40a:  jmp    087e80af <+0x35f>
087e815f +0x40f:  nop
087e8160 +0x410:  mov    -0x30(%ebp),%esi
087e8163 +0x413:  test   %esi,%esi
087e8165 +0x415:  je     087e7d80 <+0x30>
087e816b +0x41b:  mov    0x14(%ebp),%edx
087e816e +0x41e:  xor    %esi,%esi
087e8170 +0x420:  mov    0x10(%ebp),%ecx
087e8173 +0x423:  mov    -0x30(%ebp),%eax
087e8176 +0x426:  mov    %ebx,0x8(%esp)
087e817a +0x42a:  mov    %edx,0x10(%esp)
087e817e +0x42e:  mov    %ecx,0xc(%esp)
087e8182 +0x432:  movl   $0x4,0x4(%esp)
087e818a +0x43a:  mov    %eax,(%esp)
087e818d +0x43d:  call   087e6d30 <_ZN13TiXmlDocument8SetErrorEiPKcP16TiXmlParsingData13TiXmlEncoding>  ; TiXmlDocument::SetError(int, char const*, TiXmlParsingData*, TiXmlEncoding)
087e8192 +0x442:  jmp    087e7d82 <+0x32>
087e8197 +0x447:  nop
087e8198 +0x448:  mov    -0x30(%ebp),%ebx
087e819b +0x44b:  test   %ebx,%ebx
087e819d +0x44d:  je     087e81c4 <+0x474>
087e819f +0x44f:  mov    0x14(%ebp),%edx
087e81a2 +0x452:  mov    0x10(%ebp),%ecx
087e81a5 +0x455:  mov    -0x30(%ebp),%eax
087e81a8 +0x458:  mov    %esi,0x8(%esp)
087e81ac +0x45c:  mov    %edx,0x10(%esp)
087e81b0 +0x460:  mov    %ecx,0xc(%esp)
087e81b4 +0x464:  movl   $0x6,0x4(%esp)
087e81bc +0x46c:  mov    %eax,(%esp)
087e81bf +0x46f:  call   087e6d30 <_ZN13TiXmlDocument8SetErrorEiPKcP16TiXmlParsingData13TiXmlEncoding>  ; TiXmlDocument::SetError(int, char const*, TiXmlParsingData*, TiXmlEncoding)
087e81c4 +0x474:  xor    %esi,%esi
087e81c6 +0x476:  jmp    087e7ebf <+0x16f>
087e81cb +0x47b:  nop
087e81cc +0x47c:  lea    0x0(%esi,%eiz,1),%esi
087e81d0 +0x480:  mov    -0x30(%ebp),%eax
087e81d3 +0x483:  test   %eax,%eax
087e81d5 +0x485:  je     087e81fc <+0x4ac>
087e81d7 +0x487:  mov    0x14(%ebp),%edx
087e81da +0x48a:  mov    0x10(%ebp),%ecx
087e81dd +0x48d:  mov    -0x30(%ebp),%eax
087e81e0 +0x490:  mov    %edi,0x8(%esp)
087e81e4 +0x494:  mov    %edx,0x10(%esp)
087e81e8 +0x498:  mov    %ecx,0xc(%esp)
087e81ec +0x49c:  movl   $0x3,0x4(%esp)
087e81f4 +0x4a4:  mov    %eax,(%esp)
087e81f7 +0x4a7:  call   087e6d30 <_ZN13TiXmlDocument8SetErrorEiPKcP16TiXmlParsingData13TiXmlEncoding>  ; TiXmlDocument::SetError(int, char const*, TiXmlParsingData*, TiXmlEncoding)
087e81fc +0x4ac:  mov    (%ebx),%eax
087e81fe +0x4ae:  mov    %ebx,(%esp)
087e8201 +0x4b1:  call   *0x4(%eax)
087e8204 +0x4b4:  xor    %esi,%esi
087e8206 +0x4b6:  jmp    087e7ebf <+0x16f>
087e820b +0x4bb:  mov    0x14(%ebp),%edx
087e820e +0x4be:  movl   $0x0,0xc(%esp)
087e8216 +0x4c6:  movl   $0x0,0x8(%esp)
087e821e +0x4ce:  mov    %edx,0x10(%esp)
087e8222 +0x4d2:  jmp    087e803d <+0x2ed>
087e8227 +0x4d7:  nop
087e8228 +0x4d8:  cmpb   $0x3e,0x1(%edi)
087e822c +0x4dc:  lea    0x1(%edi),%eax
087e822f +0x4df:  je     087e8372 <+0x622>
087e8235 +0x4e5:  mov    -0x30(%ebp),%ecx
087e8238 +0x4e8:  test   %ecx,%ecx
087e823a +0x4ea:  je     087e81c4 <+0x474>
087e823c +0x4ec:  mov    0x14(%ebp),%edx
087e823f +0x4ef:  mov    0x10(%ebp),%ecx
087e8242 +0x4f2:  mov    %eax,0x8(%esp)
087e8246 +0x4f6:  mov    -0x30(%ebp),%eax
087e8249 +0x4f9:  movl   $0x7,0x4(%esp)
087e8251 +0x501:  mov    %edx,0x10(%esp)
087e8255 +0x505:  mov    %ecx,0xc(%esp)
087e8259 +0x509:  mov    %eax,(%esp)
087e825c +0x50c:  call   087e6d30 <_ZN13TiXmlDocument8SetErrorEiPKcP16TiXmlParsingData13TiXmlEncoding>  ; TiXmlDocument::SetError(int, char const*, TiXmlParsingData*, TiXmlEncoding)
087e8261 +0x511:  xor    %esi,%esi
087e8263 +0x513:  jmp    087e7ebf <+0x16f>
087e8268 +0x518:  mov    0x14(%ebp),%edx
087e826b +0x51b:  add    $0x1,%edi
087e826e +0x51e:  mov    0x10(%ebp),%ecx
087e8271 +0x521:  mov    0x8(%ebp),%eax
087e8274 +0x524:  mov    %edi,0x4(%esp)
087e8278 +0x528:  mov    %edx,0xc(%esp)
087e827c +0x52c:  mov    %ecx,0x8(%esp)
087e8280 +0x530:  mov    %eax,(%esp)
087e8283 +0x533:  call   087e7500 <_ZN12TiXmlElement9ReadValueEPKcP16TiXmlParsingData13TiXmlEncoding>  ; TiXmlElement::ReadValue(char const*, TiXmlParsingData*, TiXmlEncoding)
087e8288 +0x538:  test   %eax,%eax
087e828a +0x53a:  mov    %eax,%ebx
087e828c +0x53c:  je     087e8297 <+0x547>
087e828e +0x53e:  cmpb   $0x0,(%eax)
087e8291 +0x541:  jne    087e837a <+0x62a>
087e8297 +0x547:  mov    -0x30(%ebp),%edx
087e829a +0x54a:  test   %edx,%edx
087e829c +0x54c:  je     087e81c4 <+0x474>
087e82a2 +0x552:  mov    0x14(%ebp),%edx
087e82a5 +0x555:  mov    0x10(%ebp),%ecx
087e82a8 +0x558:  mov    -0x30(%ebp),%eax
087e82ab +0x55b:  mov    %ebx,0x8(%esp)
087e82af +0x55f:  mov    %edx,0x10(%esp)
087e82b3 +0x563:  mov    %ecx,0xc(%esp)
087e82b7 +0x567:  movl   $0x8,0x4(%esp)
087e82bf +0x56f:  mov    %eax,(%esp)
087e82c2 +0x572:  call   087e6d30 <_ZN13TiXmlDocument8SetErrorEiPKcP16TiXmlParsingData13TiXmlEncoding>  ; TiXmlDocument::SetError(int, char const*, TiXmlParsingData*, TiXmlEncoding)
087e82c7 +0x577:  xor    %esi,%esi
087e82c9 +0x579:  jmp    087e7ebf <+0x16f>
087e82ce +0x57e:  xchg   %ax,%ax
087e82d0 +0x580:  mov    -0x30(%ebp),%esi
087e82d3 +0x583:  test   %esi,%esi
087e82d5 +0x585:  je     087e81fc <+0x4ac>
087e82db +0x58b:  mov    0x14(%ebp),%ecx
087e82de +0x58e:  mov    0x10(%ebp),%eax
087e82e1 +0x591:  mov    -0x30(%ebp),%edx
087e82e4 +0x594:  mov    %edi,0x8(%esp)
087e82e8 +0x598:  mov    %ecx,0x10(%esp)
087e82ec +0x59c:  mov    %eax,0xc(%esp)
087e82f0 +0x5a0:  movl   $0x3,0x4(%esp)
087e82f8 +0x5a8:  mov    %edx,(%esp)
087e82fb +0x5ab:  call   087e6d30 <_ZN13TiXmlDocument8SetErrorEiPKcP16TiXmlParsingData13TiXmlEncoding>  ; TiXmlDocument::SetError(int, char const*, TiXmlParsingData*, TiXmlEncoding)
087e8300 +0x5b0:  jmp    087e81fc <+0x4ac>
087e8305 +0x5b5:  lea    0x0(%esi),%esi
087e8308 +0x5b8:  mov    %ebx,%esi
087e830a +0x5ba:  mov    %edx,%ebx
087e830c +0x5bc:  jmp    087e831e <+0x5ce>
087e830e +0x5be:  xchg   %ax,%ax
087e8310 +0x5c0:  add    $0x1,%esi
087e8313 +0x5c3:  movzbl (%esi),%ebx
087e8316 +0x5c6:  test   %bl,%bl
087e8318 +0x5c8:  je     087e8112 <+0x3c2>
087e831e +0x5ce:  cmpb   $0xef,(%esi)
087e8321 +0x5d1:  je     087e8348 <+0x5f8>
087e8323 +0x5d3:  movzbl %bl,%eax
087e8326 +0x5d6:  mov    %eax,(%esp)
087e8329 +0x5d9:  call   0807e280 <_init+0xb78>
087e832e +0x5de:  test   %eax,%eax
087e8330 +0x5e0:  jne    087e8310 <+0x5c0>
087e8332 +0x5e2:  cmp    $0xa,%bl
087e8335 +0x5e5:  je     087e8310 <+0x5c0>
087e8337 +0x5e7:  cmp    $0xd,%bl
087e833a +0x5ea:  je     087e8310 <+0x5c0>
087e833c +0x5ec:  mov    %esi,%ebx
087e833e +0x5ee:  xchg   %ax,%ax
087e8340 +0x5f0:  jmp    087e7e59 <+0x109>
087e8345 +0x5f5:  lea    0x0(%esi),%esi
087e8348 +0x5f8:  movzbl 0x1(%esi),%eax
087e834c +0x5fc:  cmp    $0xbb,%al
087e834e +0x5fe:  je     087e8368 <+0x618>
087e8350 +0x600:  cmp    $0xbf,%al
087e8352 +0x602:  jne    087e8323 <+0x5d3>
087e8354 +0x604:  movzbl 0x2(%esi),%eax
087e8358 +0x608:  cmp    $0xbe,%al
087e835a +0x60a:  je     087e8360 <+0x610>
087e835c +0x60c:  cmp    $0xbf,%al
087e835e +0x60e:  jne    087e8323 <+0x5d3>
087e8360 +0x610:  add    $0x3,%esi
087e8363 +0x613:  jmp    087e8313 <+0x5c3>
087e8365 +0x615:  lea    0x0(%esi),%esi
087e8368 +0x618:  cmpb   $0xbf,0x2(%esi)
087e836c +0x61c:  jne    087e8323 <+0x5d3>
087e836e +0x61e:  xchg   %ax,%ax
087e8370 +0x620:  jmp    087e8360 <+0x610>
087e8372 +0x622:  lea    0x2(%edi),%esi
087e8375 +0x625:  jmp    087e7ebf <+0x16f>
087e837a +0x62a:  mov    0x14(%ebp),%edx
087e837d +0x62d:  mov    -0x20(%ebp),%eax
087e8380 +0x630:  movl   $0x0,0x8(%esp)
087e8388 +0x638:  mov    %ebx,(%esp)
087e838b +0x63b:  mov    %edx,0xc(%esp)
087e838f +0x63f:  mov    %eax,0x4(%esp)
087e8393 +0x643:  call   087e62f0 <_ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding>  ; TiXmlBase::StringEqual(char const*, char const*, bool, TiXmlEncoding)
087e8398 +0x648:  test   %al,%al
087e839a +0x64a:  je     087e8297 <+0x547>
087e83a0 +0x650:  mov    -0x20(%ebp),%eax
087e83a3 +0x653:  mov    0x14(%ebp),%ecx
087e83a6 +0x656:  add    -0xc(%eax),%ebx
087e83a9 +0x659:  mov    %ecx,0x4(%esp)
087e83ad +0x65d:  mov    %ebx,(%esp)
087e83b0 +0x660:  call   087e6480 <_ZN9TiXmlBase14SkipWhiteSpaceEPKc13TiXmlEncoding>  ; TiXmlBase::SkipWhiteSpace(char const*, TiXmlEncoding)
087e83b5 +0x665:  test   %eax,%eax
087e83b7 +0x667:  je     087e83cc <+0x67c>
087e83b9 +0x669:  movzbl (%eax),%edx
087e83bc +0x66c:  test   %dl,%dl
087e83be +0x66e:  je     087e83cc <+0x67c>
087e83c0 +0x670:  cmp    $0x3e,%dl
087e83c3 +0x673:  lea    0x1(%eax),%esi
087e83c6 +0x676:  je     087e7ebf <+0x16f>
087e83cc +0x67c:  cmpl   $0x0,-0x30(%ebp)
087e83d0 +0x680:  je     087e81c4 <+0x474>
087e83d6 +0x686:  mov    0x14(%ebp),%edx
087e83d9 +0x689:  mov    0x10(%ebp),%ecx
087e83dc +0x68c:  mov    %eax,0x8(%esp)
087e83e0 +0x690:  mov    -0x30(%ebp),%eax
087e83e3 +0x693:  movl   $0x8,0x4(%esp)
087e83eb +0x69b:  mov    %edx,0x10(%esp)
087e83ef +0x69f:  mov    %ecx,0xc(%esp)
087e83f3 +0x6a3:  mov    %eax,(%esp)
087e83f6 +0x6a6:  call   087e6d30 <_ZN13TiXmlDocument8SetErrorEiPKcP16TiXmlParsingData13TiXmlEncoding>  ; TiXmlDocument::SetError(int, char const*, TiXmlParsingData*, TiXmlEncoding)
087e83fb +0x6ab:  xor    %esi,%esi
087e83fd +0x6ad:  jmp    087e7ebf <+0x16f>
087e8402 +0x6b2:  mov    %eax,(%esp)
087e8405 +0x6b5:  call   08ae3750 <_Unwind_Resume>
087e840a +0x6ba:  mov    %eax,%ebx
087e840c +0x6bc:  lea    -0x20(%ebp),%eax
087e840f +0x6bf:  mov    %eax,(%esp)
087e8412 +0x6c2:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
087e8417 +0x6c7:  mov    %ebx,(%esp)
087e841a +0x6ca:  call   08ae3750 <_Unwind_Resume>
087e841f +0x6cf:  mov    0x8(%eax),%edx
087e8422 +0x6d2:  lea    -0x1(%edx),%ecx
087e8425 +0x6d5:  mov    %ecx,0x8(%eax)
087e8428 +0x6d8:  jmp    087e7ee5 <+0x195>
087e842d +0x6dd:  nop
087e842e +0x6de:  xchg   %ax,%ax
```

## 反编译 C

```c
// TiXmlElement::Parse @ 0x87e7d50

/* WARNING: Removing unreachable block (ram,0x087e841f) */
/* TiXmlElement::Parse(char const*, TiXmlParsingData*, TiXmlEncoding) */

byte * __thiscall
TiXmlElement::Parse(TiXmlElement *this,byte *param_1,TiXmlParsingData *param_2,int param_4)

{
  int *piVar1;
  byte bVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  byte *pbVar6;
  TiXmlAttribute *pTVar7;
  char *pcVar8;
  byte bVar9;
  byte *pbVar10;
  TiXmlDocument *local_34;
  int local_24;
  allocator local_1d [13];
  
  if ((param_1 == (byte *)0x0) || (bVar9 = *param_1, bVar9 == 0)) {
    local_34 = (TiXmlDocument *)TiXmlNode::GetDocument((TiXmlNode *)this);
  }
  else {
    if (param_4 == 1) {
      do {
        if (*param_1 == 0xef) {
          if (param_1[1] == 0xbb) {
            if (param_1[2] == 0xbf) goto LAB_087e80d8;
            goto LAB_087e7ddb;
          }
          if ((param_1[1] != 0xbf) || ((param_1[2] != 0xbe && (param_1[2] != 0xbf))))
          goto LAB_087e7ddb;
LAB_087e80d8:
          param_1 = param_1 + 3;
        }
        else {
LAB_087e7ddb:
          iVar5 = isspace((uint)bVar9);
          if (((iVar5 == 0) && (bVar9 != 10)) && (bVar9 != 0xd)) break;
          param_1 = param_1 + 1;
        }
        bVar9 = *param_1;
      } while (bVar9 != 0);
    }
    else {
      do {
        iVar5 = isspace((uint)bVar9);
        if (((bVar9 != 10) && (iVar5 == 0)) && (bVar9 != 0xd)) break;
        param_1 = param_1 + 1;
        bVar9 = *param_1;
      } while (bVar9 != 0);
    }
    local_34 = (TiXmlDocument *)TiXmlNode::GetDocument((TiXmlNode *)this);
    if ((param_1 != (byte *)0x0) && (bVar9 = *param_1, bVar9 != 0)) {
      if (param_2 != (TiXmlParsingData *)0x0) {
        TiXmlParsingData::Stamp(param_2,param_1,param_4);
        uVar3 = *(undefined4 *)(param_2 + 4);
        *(undefined4 *)(this + 4) = *(undefined4 *)param_2;
        *(undefined4 *)(this + 8) = uVar3;
        bVar9 = *param_1;
      }
      if (bVar9 == 0x3c) {
        pbVar10 = param_1 + 1;
        if (pbVar10 != (byte *)0x0) {
          bVar9 = param_1[1];
          if (bVar9 == 0) {
            pbVar10 = (byte *)0x0;
          }
          else if (param_4 == 1) {
            do {
              if (*pbVar10 == 0xef) {
                if (pbVar10[1] == 0xbb) {
                  if (pbVar10[2] == 0xbf) goto LAB_087e8360;
                  goto LAB_087e8323;
                }
                if ((pbVar10[1] != 0xbf) || ((pbVar10[2] != 0xbe && (pbVar10[2] != 0xbf))))
                goto LAB_087e8323;
LAB_087e8360:
                pbVar10 = pbVar10 + 3;
              }
              else {
LAB_087e8323:
                iVar5 = isspace((uint)bVar9);
                if (((iVar5 == 0) && (bVar9 != 10)) && (bVar9 != 0xd)) break;
                pbVar10 = pbVar10 + 1;
              }
              bVar9 = *pbVar10;
            } while (bVar9 != 0);
          }
          else {
            do {
              iVar5 = isspace((uint)bVar9);
              if (((bVar9 != 10) && (iVar5 == 0)) && (bVar9 != 0xd)) break;
              pbVar10 = pbVar10 + 1;
              bVar9 = *pbVar10;
            } while (bVar9 != 0);
          }
        }
        pbVar6 = (byte *)TiXmlBase::ReadName(pbVar10,(string *)(this + 0x20),param_4);
        if ((pbVar6 == (byte *)0x0) || (*pbVar6 == 0)) {
          if (local_34 == (TiXmlDocument *)0x0) {
            return (byte *)0x0;
          }
          TiXmlDocument::SetError(local_34,4,pbVar10,param_2,param_4);
          return (byte *)0x0;
        }
                    /* try { // try from 087e7e9a to 087e7e9e has its CatchHandler @ 087e8402 */
        std::string::string((string *)&local_24,"</",local_1d);
                    /* try { // try from 087e7ea9 to 087e8000 has its CatchHandler @ 087e840a */
        std::string::append((string *)&local_24,(string *)(this + 0x20));
LAB_087e7eb8:
        bVar9 = *pbVar6;
        if (bVar9 == 0) {
LAB_087e7ebf:
          if ((allocator *)(local_24 + -0xc) ==
              (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
            return pbVar6;
          }
          LOCK();
          piVar1 = (int *)(local_24 + -4);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 < 1) {
            std::string::_Rep::_M_destroy((allocator *)(local_24 + -0xc));
            return pbVar6;
          }
          return pbVar6;
        }
        pbVar10 = pbVar6;
        if (param_4 == 1) {
          if (*pbVar6 == 0xef) goto LAB_087e8093;
LAB_087e8060:
          iVar5 = isspace((uint)bVar9);
          if (((iVar5 != 0) || (bVar9 == 10)) || (bVar9 == 0xd)) {
            pbVar10 = pbVar10 + 1;
            while( true ) {
              bVar9 = *pbVar10;
              if (bVar9 == 0) goto LAB_087e7f39;
              if (*pbVar10 != 0xef) break;
LAB_087e8093:
              if (pbVar10[1] == 0xbb) {
                bVar2 = pbVar10[2];
joined_r0x087e8154:
                if (bVar2 != 0xbf) break;
              }
              else {
                if (pbVar10[1] != 0xbf) break;
                bVar2 = pbVar10[2];
                if (bVar2 != 0xbe) goto joined_r0x087e8154;
              }
              pbVar10 = pbVar10 + 3;
            }
            goto LAB_087e8060;
          }
        }
        else {
          do {
            iVar5 = isspace((uint)bVar9);
            if (((bVar9 != 10) && (iVar5 == 0)) && (bVar9 != 0xd)) break;
            pbVar10 = pbVar10 + 1;
            bVar9 = *pbVar10;
          } while (bVar9 != 0);
        }
LAB_087e7f39:
        if ((pbVar10 == (byte *)0x0) || (bVar9 == 0)) {
          if (local_34 != (TiXmlDocument *)0x0) {
                    /* try { // try from 087e81bf to 087e83fa has its CatchHandler @ 087e840a */
            TiXmlDocument::SetError(local_34,6,pbVar6,param_2,param_4);
          }
        }
        else {
          if (bVar9 == 0x2f) {
            if (pbVar10[1] == 0x3e) {
              pbVar6 = pbVar10 + 2;
            }
            else {
              if (local_34 == (TiXmlDocument *)0x0) goto LAB_087e81c4;
              TiXmlDocument::SetError(local_34,7,pbVar10 + 1,param_2,param_4);
              pbVar6 = (byte *)0x0;
            }
            goto LAB_087e7ebf;
          }
          if (bVar9 != 0x3e) {
            pTVar7 = operator_new(0x24);
            *(undefined4 *)(pTVar7 + 8) = 0xffffffff;
            *(undefined4 *)(pTVar7 + 4) = 0xffffffff;
            *(undefined4 *)(pTVar7 + 0xc) = 0;
            *(undefined ***)pTVar7 = &PTR__TiXmlAttribute_08de2028;
            *(undefined1 **)(pTVar7 + 0x14) = &DAT_0948ccfc;
            *(undefined1 **)(pTVar7 + 0x18) = &DAT_0948ccfc;
            *(undefined4 *)(pTVar7 + 0x20) = 0;
            *(undefined4 *)(pTVar7 + 0x1c) = 0;
            *(TiXmlDocument **)(pTVar7 + 0x10) = local_34;
            pbVar6 = (byte *)(*(code *)PTR_Parse_08de2034)(pTVar7,pbVar10,param_2,param_4);
            if ((pbVar6 == (byte *)0x0) || (*pbVar6 == 0)) {
              if (local_34 != (TiXmlDocument *)0x0) {
                TiXmlDocument::SetError(local_34,3,pbVar10,param_2,param_4);
              }
LAB_087e81fc:
              (**(code **)(*(int *)pTVar7 + 4))(pTVar7);
              pbVar6 = (byte *)0x0;
              goto LAB_087e7ebf;
            }
            iVar5 = TiXmlAttributeSet::Find
                              ((TiXmlAttributeSet *)(this + 0x2c),(string *)(pTVar7 + 0x14));
            if (iVar5 != 0) {
              if (local_34 != (TiXmlDocument *)0x0) {
                TiXmlDocument::SetError(local_34,3,pbVar10,param_2,param_4);
              }
              goto LAB_087e81fc;
            }
            TiXmlAttributeSet::Add((TiXmlAttributeSet *)(this + 0x2c),pTVar7);
            goto LAB_087e7eb8;
          }
          pcVar8 = (char *)ReadValue(this,pbVar10 + 1,param_2,param_4);
          if (((pcVar8 != (char *)0x0) && (*pcVar8 != '\0')) &&
             (cVar4 = TiXmlBase::StringEqual(pcVar8,local_24,0,param_4), cVar4 != '\0')) {
            pcVar8 = (char *)TiXmlBase::SkipWhiteSpace(pcVar8 + *(int *)(local_24 + -0xc),param_4);
            if (((pcVar8 == (char *)0x0) || (*pcVar8 == '\0')) ||
               (pbVar6 = (byte *)(pcVar8 + 1), *pcVar8 != '>')) {
              if (local_34 == (TiXmlDocument *)0x0) goto LAB_087e81c4;
              TiXmlDocument::SetError(local_34,8,pcVar8,param_2,param_4);
              pbVar6 = (byte *)0x0;
            }
            goto LAB_087e7ebf;
          }
          if (local_34 != (TiXmlDocument *)0x0) {
            TiXmlDocument::SetError(local_34,8,pcVar8,param_2,param_4);
            pbVar6 = (byte *)0x0;
            goto LAB_087e7ebf;
          }
        }
LAB_087e81c4:
        pbVar6 = (byte *)0x0;
        goto LAB_087e7ebf;
      }
      if (local_34 == (TiXmlDocument *)0x0) {
        return (byte *)0x0;
      }
      goto LAB_087e803d;
    }
  }
  if (local_34 == (TiXmlDocument *)0x0) {
    return (byte *)0x0;
  }
  param_2 = (TiXmlParsingData *)0x0;
  param_1 = (byte *)0x0;
LAB_087e803d:
  TiXmlDocument::SetError(local_34,3,param_1,param_2,param_4);
  return (byte *)0x0;
}
```
