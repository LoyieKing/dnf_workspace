# ReadText

`_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding`

`TiXmlBase::ReadText(char const*, std::basic_string<char, std::char_traits<char>, std::allocator<char> >*, bool, char const*, bool, TiXmlEncoding)`

| 类 | 地址 |
|---|---|
| `TiXmlBase` | `0x087e8cd0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e8cd0  _ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding
#           TiXmlBase::ReadText(char const*, std::basic_string<char, std::char_traits<char>, std::allocator<char> >*, bool, char const*, bool, TiXmlEncoding)
# range [0x087e8cd0, 0x087e90f9]
087e8cd0 +0x000:  push   %ebp
087e8cd1 +0x001:  mov    %esp,%ebp
087e8cd3 +0x003:  push   %edi
087e8cd4 +0x004:  push   %esi
087e8cd5 +0x005:  push   %ebx
087e8cd6 +0x006:  sub    $0x3c,%esp
087e8cd9 +0x009:  mov    0xc(%ebp),%edi
087e8cdc +0x00c:  movzbl 0x10(%ebp),%esi
087e8ce0 +0x010:  movzbl 0x18(%ebp),%eax
087e8ce4 +0x014:  mov    0x8(%ebp),%ebx
087e8ce7 +0x017:  movl   $0x0,0x8(%esp)
087e8cef +0x01f:  movl   $&data#2fb52a47(.rodata),0x4(%esp)
087e8cf7 +0x027:  mov    %al,-0x2c(%ebp)
087e8cfa +0x02a:  mov    %edi,(%esp)
087e8cfd +0x02d:  call   087085a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x21b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x21b0
087e8d02 +0x032:  mov    %esi,%eax
087e8d04 +0x034:  test   %al,%al
087e8d06 +0x036:  je     087e8d15 <+0x45>
087e8d08 +0x038:  cmpb   $0x0,&_ZN9TiXmlBase18condenseWhiteSpaceE
087e8d0f +0x03f:  jne    087e8e70 <+0x1a0>
087e8d15 +0x045:  test   %ebx,%ebx
087e8d17 +0x047:  je     087e8d3e <+0x6e>
087e8d19 +0x049:  cmpb   $0x0,(%ebx)
087e8d1c +0x04c:  jne    087e8d48 <+0x78>
087e8d1e +0x04e:  test   %ebx,%ebx
087e8d20 +0x050:  je     087e8d3e <+0x6e>
087e8d22 +0x052:  cmpb   $0x0,(%ebx)
087e8d25 +0x055:  je     087e8e80 <+0x1b0>
087e8d2b +0x05b:  mov    0x14(%ebp),%eax
087e8d2e +0x05e:  mov    %eax,(%esp)
087e8d31 +0x061:  call   0807e3b0 <_init+0xca8>
087e8d36 +0x066:  add    %eax,%ebx
087e8d38 +0x068:  jne    087e90e7 <+0x417>
087e8d3e +0x06e:  add    $0x3c,%esp
087e8d41 +0x071:  mov    %ebx,%eax
087e8d43 +0x073:  pop    %ebx
087e8d44 +0x074:  pop    %esi
087e8d45 +0x075:  pop    %edi
087e8d46 +0x076:  pop    %ebp
087e8d47 +0x077:  ret
087e8d48 +0x078:  movzbl -0x2c(%ebp),%eax
087e8d4c +0x07c:  lea    -0x20(%ebp),%esi
087e8d4f +0x07f:  mov    %eax,-0x30(%ebp)
087e8d52 +0x082:  jmp    087e8d7a <+0xaa>
087e8d54 +0x084:  lea    0x0(%esi,%eiz,1),%esi
087e8d58 +0x088:  mov    %al,-0x20(%ebp)
087e8d5b +0x08b:  mov    -0x1c(%ebp),%eax
087e8d5e +0x08e:  add    $0x1,%ebx
087e8d61 +0x091:  mov    %eax,0x8(%esp)
087e8d65 +0x095:  mov    %esi,0x4(%esp)
087e8d69 +0x099:  mov    %edi,(%esp)
087e8d6c +0x09c:  call   08707f10 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1b20>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1b20
087e8d71 +0x0a1:  test   %ebx,%ebx
087e8d73 +0x0a3:  je     087e8d3e <+0x6e>
087e8d75 +0x0a5:  cmpb   $0x0,(%ebx)
087e8d78 +0x0a8:  je     087e8d1e <+0x4e>
087e8d7a +0x0aa:  mov    0x1c(%ebp),%eax
087e8d7d +0x0ad:  mov    %ebx,(%esp)
087e8d80 +0x0b0:  mov    %eax,0xc(%esp)
087e8d84 +0x0b4:  mov    -0x30(%ebp),%eax
087e8d87 +0x0b7:  mov    %eax,0x8(%esp)
087e8d8b +0x0bb:  mov    0x14(%ebp),%eax
087e8d8e +0x0be:  mov    %eax,0x4(%esp)
087e8d92 +0x0c2:  call   087e62f0 <_ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding>  ; TiXmlBase::StringEqual(char const*, char const*, bool, TiXmlEncoding)
087e8d97 +0x0c7:  test   %al,%al
087e8d99 +0x0c9:  jne    087e8d1e <+0x4e>
087e8d9b +0x0cb:  cmpl   $0x1,0x1c(%ebp)
087e8d9f +0x0cf:  movb   $0x0,-0x20(%ebp)
087e8da3 +0x0d3:  movb   $0x0,-0x1f(%ebp)
087e8da7 +0x0d7:  movb   $0x0,-0x1e(%ebp)
087e8dab +0x0db:  movb   $0x0,-0x1d(%ebp)
087e8daf +0x0df:  je     087e8de0 <+0x110>
087e8db1 +0x0e1:  movl   $0x1,-0x1c(%ebp)
087e8db8 +0x0e8:  movzbl (%ebx),%eax
087e8dbb +0x0eb:  cmp    $0x26,%al
087e8dbd +0x0ed:  jne    087e8d58 <+0x88>
087e8dbf +0x0ef:  mov    0x1c(%ebp),%eax
087e8dc2 +0x0f2:  mov    %ebx,(%esp)
087e8dc5 +0x0f5:  mov    %esi,0x4(%esp)
087e8dc9 +0x0f9:  mov    %eax,0xc(%esp)
087e8dcd +0x0fd:  lea    -0x1c(%ebp),%eax
087e8dd0 +0x100:  mov    %eax,0x8(%esp)
087e8dd4 +0x104:  call   087e6560 <_ZN9TiXmlBase9GetEntityEPKcPcPi13TiXmlEncoding>  ; TiXmlBase::GetEntity(char const*, char*, int*, TiXmlEncoding)
087e8dd9 +0x109:  mov    %eax,%ebx
087e8ddb +0x10b:  mov    -0x1c(%ebp),%eax
087e8dde +0x10e:  jmp    087e8d61 <+0x91>
087e8de0 +0x110:  movzbl (%ebx),%eax
087e8de3 +0x113:  mov    &_ZN9TiXmlBase13utf8ByteTableE(,%eax,4),%edx
087e8dea +0x11a:  cmp    $0x4,%edx
087e8ded +0x11d:  mov    %edx,%eax
087e8def +0x11f:  mov    %edx,-0x1c(%ebp)
087e8df2 +0x122:  ja     087e90ba <+0x3ea>
087e8df8 +0x128:  cmp    $0x1,%edx
087e8dfb +0x12b:  je     087e8db8 <+0xe8>
087e8dfd +0x12d:  test   %edx,%edx
087e8dff +0x12f:  je     087e8e48 <+0x178>
087e8e01 +0x131:  movzbl (%ebx),%ecx
087e8e04 +0x134:  xor    %edx,%edx
087e8e06 +0x136:  movl   $0x0,-0x2c(%ebp)
087e8e0d +0x13d:  test   %cl,%cl
087e8e0f +0x13f:  je     087e8e2f <+0x15f>
087e8e11 +0x141:  lea    0x0(%esi,%eiz,1),%esi
087e8e18 +0x148:  mov    -0x2c(%ebp),%eax
087e8e1b +0x14b:  add    $0x1,%edx
087e8e1e +0x14e:  mov    %cl,(%esi,%eax,1)
087e8e21 +0x151:  mov    %edx,-0x2c(%ebp)
087e8e24 +0x154:  movzbl (%ebx,%edx,1),%ecx
087e8e28 +0x158:  test   %cl,%cl
087e8e2a +0x15a:  jne    087e8e38 <+0x168>
087e8e2c +0x15c:  mov    -0x1c(%ebp),%eax
087e8e2f +0x15f:  add    %eax,%ebx
087e8e31 +0x161:  jmp    087e8d61 <+0x91>
087e8e36 +0x166:  xchg   %ax,%ax
087e8e38 +0x168:  mov    -0x1c(%ebp),%eax
087e8e3b +0x16b:  cmp    %eax,%edx
087e8e3d +0x16d:  jl     087e8e18 <+0x148>
087e8e3f +0x16f:  add    %eax,%ebx
087e8e41 +0x171:  jmp    087e8d61 <+0x91>
087e8e46 +0x176:  xchg   %ax,%ax
087e8e48 +0x178:  lea    -0x20(%ebp),%eax
087e8e4b +0x17b:  xor    %ebx,%ebx
087e8e4d +0x17d:  mov    %edi,(%esp)
087e8e50 +0x180:  movl   $0x0,0x8(%esp)
087e8e58 +0x188:  mov    %eax,0x4(%esp)
087e8e5c +0x18c:  call   08707f10 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1b20>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1b20
087e8e61 +0x191:  add    $0x3c,%esp
087e8e64 +0x194:  mov    %ebx,%eax
087e8e66 +0x196:  pop    %ebx
087e8e67 +0x197:  pop    %esi
087e8e68 +0x198:  pop    %edi
087e8e69 +0x199:  pop    %ebp
087e8e6a +0x19a:  ret
087e8e6b +0x19b:  nop
087e8e6c +0x19c:  lea    0x0(%esi,%eiz,1),%esi
087e8e70 +0x1a0:  test   %ebx,%ebx
087e8e72 +0x1a2:  je     087e8d3e <+0x6e>
087e8e78 +0x1a8:  movzbl (%ebx),%edx
087e8e7b +0x1ab:  test   %dl,%dl
087e8e7d +0x1ad:  jne    087e8e8c <+0x1bc>
087e8e7f +0x1af:  nop
087e8e80 +0x1b0:  xor    %ebx,%ebx
087e8e82 +0x1b2:  add    $0x3c,%esp
087e8e85 +0x1b5:  mov    %ebx,%eax
087e8e87 +0x1b7:  pop    %ebx
087e8e88 +0x1b8:  pop    %esi
087e8e89 +0x1b9:  pop    %edi
087e8e8a +0x1ba:  pop    %ebp
087e8e8b +0x1bb:  ret
087e8e8c +0x1bc:  cmpl   $0x1,0x1c(%ebp)
087e8e90 +0x1c0:  je     087e8f6a <+0x29a>
087e8e96 +0x1c6:  mov    %ebx,%esi
087e8e98 +0x1c8:  mov    %edx,%ebx
087e8e9a +0x1ca:  movzbl %bl,%eax
087e8e9d +0x1cd:  mov    %eax,(%esp)
087e8ea0 +0x1d0:  call   0807e280 <_init+0xb78>
087e8ea5 +0x1d5:  cmp    $0xa,%bl
087e8ea8 +0x1d8:  je     087e9082 <+0x3b2>
087e8eae +0x1de:  test   %eax,%eax
087e8eb0 +0x1e0:  jne    087e9082 <+0x3b2>
087e8eb6 +0x1e6:  cmp    $0xd,%bl
087e8eb9 +0x1e9:  je     087e9082 <+0x3b2>
087e8ebf +0x1ef:  mov    %ebx,%edx
087e8ec1 +0x1f1:  mov    %esi,%ebx
087e8ec3 +0x1f3:  test   %ebx,%ebx
087e8ec5 +0x1f5:  je     087e8d3e <+0x6e>
087e8ecb +0x1fb:  test   %dl,%dl
087e8ecd +0x1fd:  je     087e8d1e <+0x4e>
087e8ed3 +0x203:  movzbl -0x2c(%ebp),%eax
087e8ed7 +0x207:  xor    %esi,%esi
087e8ed9 +0x209:  mov    %edi,-0x30(%ebp)
087e8edc +0x20c:  mov    0x1c(%ebp),%edi
087e8edf +0x20f:  mov    %eax,-0x2c(%ebp)
087e8ee2 +0x212:  jmp    087e8ef1 <+0x221>
087e8ee4 +0x214:  lea    0x0(%esi,%eiz,1),%esi
087e8ee8 +0x218:  cmpb   $0x0,(%ebx)
087e8eeb +0x21b:  je     087e8d1e <+0x4e>
087e8ef1 +0x221:  mov    -0x2c(%ebp),%eax
087e8ef4 +0x224:  mov    %edi,0xc(%esp)
087e8ef8 +0x228:  mov    %ebx,(%esp)
087e8efb +0x22b:  mov    %eax,0x8(%esp)
087e8eff +0x22f:  mov    0x14(%ebp),%eax
087e8f02 +0x232:  mov    %eax,0x4(%esp)
087e8f06 +0x236:  call   087e62f0 <_ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding>  ; TiXmlBase::StringEqual(char const*, char const*, bool, TiXmlEncoding)
087e8f0b +0x23b:  test   %al,%al
087e8f0d +0x23d:  jne    087e8d1e <+0x4e>
087e8f13 +0x243:  movzbl (%ebx),%eax
087e8f16 +0x246:  cmp    $0xa,%al
087e8f18 +0x248:  jne    087e8f8c <+0x2bc>
087e8f1a +0x24a:  add    $0x1,%ebx
087e8f1d +0x24d:  mov    $0x1,%esi
087e8f22 +0x252:  test   %ebx,%ebx
087e8f24 +0x254:  jne    087e8ee8 <+0x218>
087e8f26 +0x256:  add    $0x3c,%esp
087e8f29 +0x259:  mov    %ebx,%eax
087e8f2b +0x25b:  pop    %ebx
087e8f2c +0x25c:  pop    %esi
087e8f2d +0x25d:  pop    %edi
087e8f2e +0x25e:  pop    %ebp
087e8f2f +0x25f:  ret
087e8f30 +0x260:  cmpb   $0xbf,0x2(%ebx)
087e8f34 +0x264:  je     087e8f87 <+0x2b7>
087e8f36 +0x266:  xchg   %ax,%ax
087e8f38 +0x268:  movzbl %dl,%eax
087e8f3b +0x26b:  mov    %eax,(%esp)
087e8f3e +0x26e:  mov    %dl,-0x34(%ebp)
087e8f41 +0x271:  call   0807e280 <_init+0xb78>
087e8f46 +0x276:  movzbl -0x34(%ebp),%edx
087e8f4a +0x27a:  test   %eax,%eax
087e8f4c +0x27c:  jne    087e8f5c <+0x28c>
087e8f4e +0x27e:  cmp    $0xa,%dl
087e8f51 +0x281:  je     087e8f5c <+0x28c>
087e8f53 +0x283:  cmp    $0xd,%dl
087e8f56 +0x286:  jne    087e8ec3 <+0x1f3>
087e8f5c +0x28c:  add    $0x1,%ebx
087e8f5f +0x28f:  movzbl (%ebx),%edx
087e8f62 +0x292:  test   %dl,%dl
087e8f64 +0x294:  je     087e8ec3 <+0x1f3>
087e8f6a +0x29a:  cmpb   $0xef,(%ebx)
087e8f6d +0x29d:  jne    087e8f38 <+0x268>
087e8f6f +0x29f:  movzbl 0x1(%ebx),%eax
087e8f73 +0x2a3:  cmp    $0xbb,%al
087e8f75 +0x2a5:  je     087e8f30 <+0x260>
087e8f77 +0x2a7:  cmp    $0xbf,%al
087e8f79 +0x2a9:  jne    087e8f38 <+0x268>
087e8f7b +0x2ab:  movzbl 0x2(%ebx),%eax
087e8f7f +0x2af:  cmp    $0xbe,%al
087e8f81 +0x2b1:  je     087e8f87 <+0x2b7>
087e8f83 +0x2b3:  cmp    $0xbf,%al
087e8f85 +0x2b5:  jne    087e8f38 <+0x268>
087e8f87 +0x2b7:  add    $0x3,%ebx
087e8f8a +0x2ba:  jmp    087e8f5f <+0x28f>
087e8f8c +0x2bc:  cmp    $0xd,%al
087e8f8e +0x2be:  xchg   %ax,%ax
087e8f90 +0x2c0:  je     087e8f1a <+0x24a>
087e8f92 +0x2c2:  movzbl %al,%eax
087e8f95 +0x2c5:  mov    %eax,(%esp)
087e8f98 +0x2c8:  call   0807e280 <_init+0xb78>
087e8f9d +0x2cd:  test   %eax,%eax
087e8f9f +0x2cf:  jne    087e8f1a <+0x24a>
087e8fa5 +0x2d5:  mov    %esi,%eax
087e8fa7 +0x2d7:  test   %al,%al
087e8fa9 +0x2d9:  jne    087e8ff1 <+0x321>
087e8fab +0x2db:  cmp    $0x1,%edi
087e8fae +0x2de:  movb   $0x0,-0x20(%ebp)
087e8fb2 +0x2e2:  movb   $0x0,-0x1f(%ebp)
087e8fb6 +0x2e6:  movb   $0x0,-0x1e(%ebp)
087e8fba +0x2ea:  movb   $0x0,-0x1d(%ebp)
087e8fbe +0x2ee:  je     087e9006 <+0x336>
087e8fc0 +0x2f0:  movl   $0x1,-0x1c(%ebp)
087e8fc7 +0x2f7:  movzbl (%ebx),%eax
087e8fca +0x2fa:  cmp    $0x26,%al
087e8fcc +0x2fc:  je     087e9095 <+0x3c5>
087e8fd2 +0x302:  mov    %al,-0x20(%ebp)
087e8fd5 +0x305:  add    $0x1,%ebx
087e8fd8 +0x308:  movsbl %al,%eax
087e8fdb +0x30b:  xor    %esi,%esi
087e8fdd +0x30d:  mov    %eax,0x4(%esp)
087e8fe1 +0x311:  mov    -0x30(%ebp),%eax
087e8fe4 +0x314:  mov    %eax,(%esp)
087e8fe7 +0x317:  call   08707dc0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x19d0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x19d0
087e8fec +0x31c:  jmp    087e8f22 <+0x252>
087e8ff1 +0x321:  mov    -0x30(%ebp),%eax
087e8ff4 +0x324:  movl   $0x20,0x4(%esp)
087e8ffc +0x32c:  mov    %eax,(%esp)
087e8fff +0x32f:  call   08707dc0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x19d0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x19d0
087e9004 +0x334:  jmp    087e8fab <+0x2db>
087e9006 +0x336:  movzbl (%ebx),%eax
087e9009 +0x339:  mov    &_ZN9TiXmlBase13utf8ByteTableE(,%eax,4),%eax
087e9010 +0x340:  cmp    $0x4,%eax
087e9013 +0x343:  mov    %eax,-0x1c(%ebp)
087e9016 +0x346:  ja     087e90ba <+0x3ea>
087e901c +0x34c:  cmp    $0x1,%eax
087e901f +0x34f:  je     087e8fc7 <+0x2f7>
087e9021 +0x351:  test   %eax,%eax
087e9023 +0x353:  je     087e90b6 <+0x3e6>
087e9029 +0x359:  movzbl (%ebx),%ecx
087e902c +0x35c:  xor    %esi,%esi
087e902e +0x35e:  xor    %edx,%edx
087e9030 +0x360:  test   %cl,%cl
087e9032 +0x362:  je     087e904c <+0x37c>
087e9034 +0x364:  lea    0x0(%esi,%eiz,1),%esi
087e9038 +0x368:  add    $0x1,%edx
087e903b +0x36b:  mov    %cl,-0x20(%ebp,%esi,1)
087e903f +0x36f:  movzbl (%ebx,%edx,1),%ecx
087e9043 +0x373:  mov    %edx,%esi
087e9045 +0x375:  test   %cl,%cl
087e9047 +0x377:  jne    087e9074 <+0x3a4>
087e9049 +0x379:  mov    -0x1c(%ebp),%eax
087e904c +0x37c:  add    %eax,%ebx
087e904e +0x37e:  cmp    $0x1,%eax
087e9051 +0x381:  je     087e90de <+0x40e>
087e9057 +0x387:  mov    %eax,0x8(%esp)
087e905b +0x38b:  lea    -0x20(%ebp),%eax
087e905e +0x38e:  xor    %esi,%esi
087e9060 +0x390:  mov    %eax,0x4(%esp)
087e9064 +0x394:  mov    -0x30(%ebp),%eax
087e9067 +0x397:  mov    %eax,(%esp)
087e906a +0x39a:  call   08707f10 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1b20>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1b20
087e906f +0x39f:  jmp    087e8f22 <+0x252>
087e9074 +0x3a4:  mov    -0x1c(%ebp),%eax
087e9077 +0x3a7:  cmp    %eax,%edx
087e9079 +0x3a9:  jge    087e904c <+0x37c>
087e907b +0x3ab:  nop
087e907c +0x3ac:  lea    0x0(%esi,%eiz,1),%esi
087e9080 +0x3b0:  jmp    087e9038 <+0x368>
087e9082 +0x3b2:  add    $0x1,%esi
087e9085 +0x3b5:  movzbl (%esi),%ebx
087e9088 +0x3b8:  test   %bl,%bl
087e908a +0x3ba:  je     087e8ebf <+0x1ef>
087e9090 +0x3c0:  jmp    087e8e9a <+0x1ca>
087e9095 +0x3c5:  lea    -0x1c(%ebp),%eax
087e9098 +0x3c8:  mov    %eax,0x8(%esp)
087e909c +0x3cc:  lea    -0x20(%ebp),%eax
087e909f +0x3cf:  mov    %ebx,(%esp)
087e90a2 +0x3d2:  mov    %edi,0xc(%esp)
087e90a6 +0x3d6:  mov    %eax,0x4(%esp)
087e90aa +0x3da:  call   087e6560 <_ZN9TiXmlBase9GetEntityEPKcPcPi13TiXmlEncoding>  ; TiXmlBase::GetEntity(char const*, char*, int*, TiXmlEncoding)
087e90af +0x3df:  mov    %eax,%ebx
087e90b1 +0x3e1:  mov    -0x1c(%ebp),%eax
087e90b4 +0x3e4:  jmp    087e904e <+0x37e>
087e90b6 +0x3e6:  xor    %ebx,%ebx
087e90b8 +0x3e8:  jmp    087e9057 <+0x387>
087e90ba +0x3ea:  movl   $&_ZZN9TiXmlBase7GetCharEPKcPcPi13TiXmlEncodingE19__PRETTY_FUNCTION__,0xc(%esp)
087e90c2 +0x3f2:  movl   $0x14d,0x8(%esp)
087e90ca +0x3fa:  movl   $"tinyxml.h",0x4(%esp)
087e90d2 +0x402:  movl   $"*length >= 0 && *length < 5",(%esp)
087e90d9 +0x409:  call   0807dc50 <_init+0x548>
087e90de +0x40e:  movzbl -0x20(%ebp),%eax
087e90e2 +0x412:  jmp    087e8fd8 <+0x308>
087e90e7 +0x417:  cmpb   $0x0,(%ebx)
087e90ea +0x41a:  jne    087e8d3e <+0x6e>
087e90f0 +0x420:  jmp    087e8e80 <+0x1b0>
087e90f5 +0x425:  nop
087e90f6 +0x426:  lea    0x0(%esi),%esi
087e90f9 +0x429:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TiXmlBase::ReadText @ 0x87e8cd0

/* TiXmlBase::ReadText(char const*, std::string*, bool, char const*, bool, TiXmlEncoding) */

byte * TiXmlBase::ReadText(byte *param_1,string *param_2,char param_3,char *param_4,
                          undefined1 param_5,int param_6)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  size_t sVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int local_30;
  byte local_24 [4];
  uint local_20 [4];
  
  std::string::assign(param_2,"",0);
  if ((param_3 == '\0') || (condenseWhiteSpace == '\0')) {
    if (param_1 == (byte *)0x0) {
      return (byte *)0x0;
    }
    if (*param_1 != 0) {
      do {
        cVar3 = StringEqual(param_1,param_4,param_5,param_6);
        if (cVar3 != '\0') break;
        local_24[0] = 0;
        local_24[1] = 0;
        local_24[2] = 0;
        local_24[3] = 0;
        if (param_6 == 1) {
          local_20[0] = *(uint *)(utf8ByteTable + (uint)*param_1 * 4);
          if (4 < local_20[0]) goto LAB_087e90ba;
          if (local_20[0] == 1) goto LAB_087e8db8;
          if (local_20[0] == 0) {
            std::string::append(param_2,(char *)local_24,0);
            return (byte *)0x0;
          }
          bVar5 = *param_1;
          local_30 = 0;
          if (bVar5 == 0) {
LAB_087e8e2f:
            param_1 = param_1 + local_20[0];
          }
          else {
            do {
              iVar6 = local_30 + 1;
              local_24[local_30] = bVar5;
              bVar5 = param_1[iVar6];
              if (bVar5 == 0) goto LAB_087e8e2f;
              local_30 = iVar6;
            } while (iVar6 < (int)local_20[0]);
            param_1 = param_1 + local_20[0];
          }
        }
        else {
          local_20[0] = 1;
LAB_087e8db8:
          bVar5 = *param_1;
          if (bVar5 == 0x26) {
            param_1 = (byte *)GetEntity(param_1,local_24,local_20,param_6);
          }
          else {
            param_1 = param_1 + 1;
            local_24[0] = bVar5;
          }
        }
        std::string::append(param_2,(char *)local_24,local_20[0]);
        if (param_1 == (byte *)0x0) {
          return (byte *)0x0;
        }
      } while (*param_1 != 0);
    }
  }
  else {
    if (param_1 == (byte *)0x0) {
      return (byte *)0x0;
    }
    bVar5 = *param_1;
    if (bVar5 == 0) {
      return (byte *)0x0;
    }
    if (param_6 == 1) {
      do {
        if (*param_1 == 0xef) {
          if (param_1[1] == 0xbb) {
            bVar1 = param_1[2];
joined_r0x087e8f34:
            if (bVar1 != 0xbf) goto LAB_087e8f38;
          }
          else {
            if (param_1[1] != 0xbf) goto LAB_087e8f38;
            bVar1 = param_1[2];
            if (bVar1 != 0xbe) goto joined_r0x087e8f34;
          }
          param_1 = param_1 + 3;
        }
        else {
LAB_087e8f38:
          iVar6 = isspace((uint)bVar5);
          if (((iVar6 == 0) && (bVar5 != 10)) && (bVar5 != 0xd)) break;
          param_1 = param_1 + 1;
        }
        bVar5 = *param_1;
      } while (bVar5 != 0);
    }
    else {
      do {
        iVar6 = isspace((uint)bVar5);
        if (((bVar5 != 10) && (iVar6 == 0)) && (bVar5 != 0xd)) break;
        param_1 = param_1 + 1;
        bVar5 = *param_1;
      } while (bVar5 != 0);
    }
    if (param_1 == (byte *)0x0) {
      return (byte *)0x0;
    }
    if (bVar5 != 0) {
      bVar2 = false;
      do {
        cVar3 = StringEqual(param_1,param_4,param_5,param_6);
        if (cVar3 != '\0') break;
        bVar5 = *param_1;
        if (((bVar5 == 10) || (bVar5 == 0xd)) || (iVar6 = isspace((uint)bVar5), iVar6 != 0)) {
          param_1 = param_1 + 1;
          bVar2 = true;
        }
        else {
          if (bVar2) {
            std::string::push_back(param_2,' ');
          }
          local_24[0] = 0;
          local_24[1] = 0;
          local_24[2] = 0;
          local_24[3] = 0;
          if (param_6 == 1) {
            local_20[0] = *(uint *)(utf8ByteTable + (uint)*param_1 * 4);
            if (4 < local_20[0]) {
LAB_087e90ba:
              local_24[3] = 0;
              local_24[2] = 0;
              local_24[1] = 0;
              local_24[0] = 0;
                    /* WARNING: Subroutine does not return */
              __assert_fail("*length >= 0 && *length < 5","tinyxml.h",0x14d,
                            "static const char* TiXmlBase::GetChar(const char*, char*, int*, TiXmlEncoding)"
                           );
            }
            if (local_20[0] == 1) goto LAB_087e8fc7;
            if (local_20[0] != 0) {
              bVar5 = *param_1;
              if (bVar5 != 0) {
                iVar6 = 0;
                do {
                  iVar7 = iVar6 + 1;
                  local_24[iVar6] = bVar5;
                  bVar5 = param_1[iVar7];
                  if (bVar5 == 0) break;
                  iVar6 = iVar7;
                } while (iVar7 < (int)local_20[0]);
              }
              param_1 = param_1 + local_20[0];
              goto LAB_087e904e;
            }
            param_1 = (byte *)0x0;
LAB_087e9057:
            bVar2 = false;
            std::string::append(param_2,(char *)local_24,local_20[0]);
          }
          else {
            local_20[0] = 1;
LAB_087e8fc7:
            bVar5 = *param_1;
            if (bVar5 == 0x26) {
              param_1 = (byte *)GetEntity(param_1,local_24,local_20,param_6);
LAB_087e904e:
              if (local_20[0] != 1) goto LAB_087e9057;
            }
            else {
              param_1 = param_1 + 1;
              local_24[0] = bVar5;
            }
            bVar2 = false;
            std::string::push_back(param_2,local_24[0]);
          }
        }
        if (param_1 == (byte *)0x0) {
          return (byte *)0x0;
        }
      } while (*param_1 != 0);
    }
  }
  if (param_1 == (byte *)0x0) {
    return (byte *)0x0;
  }
  if (*param_1 != 0) {
    sVar4 = strlen(param_4);
    param_1 = param_1 + sVar4;
    if (param_1 == (byte *)0x0) {
      return (byte *)0x0;
    }
    if (*param_1 != 0) {
      return param_1;
    }
  }
  return (byte *)0x0;
}
```
