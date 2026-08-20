# ReadText

`_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding.clone.2`

`TiXmlBase::ReadText(char const*, std::basic_string<char, std::char_traits<char>, std::allocator<char> >*, bool, char const*, bool, TiXmlEncoding) [clone .clone.2]`

| 类 | 地址 |
|---|---|
| `TiXmlBase` | `0x087e6850` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e6850  _ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding.clone.2
#           TiXmlBase::ReadText(char const*, std::basic_string<char, std::char_traits<char>, std::allocator<char> >*, bool, char const*, bool, TiXmlEncoding) [clone .clone.2]
# range [0x087e6850, 0x087e6bcc]
087e6850 +0x000:  push   %ebp
087e6851 +0x001:  mov    %esp,%ebp
087e6853 +0x003:  push   %edi
087e6854 +0x004:  mov    %ecx,%edi
087e6856 +0x006:  push   %esi
087e6857 +0x007:  mov    %edx,%esi
087e6859 +0x009:  push   %ebx
087e685a +0x00a:  mov    %eax,%ebx
087e685c +0x00c:  sub    $0x3c,%esp
087e685f +0x00f:  movl   $0x0,0x8(%esp)
087e6867 +0x017:  movl   $&data#2fb52a47(.rodata),0x4(%esp)
087e686f +0x01f:  mov    %edx,(%esp)
087e6872 +0x022:  call   087085a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x21b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x21b0
087e6877 +0x027:  mov    %edi,%eax
087e6879 +0x029:  test   %al,%al
087e687b +0x02b:  je     087e688a <+0x3a>
087e687d +0x02d:  cmpb   $0x0,&_ZN9TiXmlBase18condenseWhiteSpaceE
087e6884 +0x034:  jne    087e6a00 <+0x1b0>
087e688a +0x03a:  test   %ebx,%ebx
087e688c +0x03c:  je     087e68b9 <+0x69>
087e688e +0x03e:  cmpb   $0x0,(%ebx)
087e6891 +0x041:  jne    087e68c8 <+0x78>
087e6893 +0x043:  nop
087e6894 +0x044:  lea    0x0(%esi,%eiz,1),%esi
087e6898 +0x048:  test   %ebx,%ebx
087e689a +0x04a:  je     087e68b9 <+0x69>
087e689c +0x04c:  cmpb   $0x0,(%ebx)
087e689f +0x04f:  nop
087e68a0 +0x050:  je     087e69f0 <+0x1a0>
087e68a6 +0x056:  mov    0x8(%ebp),%edx
087e68a9 +0x059:  mov    %edx,(%esp)
087e68ac +0x05c:  call   0807e3b0 <_init+0xca8>
087e68b1 +0x061:  add    %eax,%ebx
087e68b3 +0x063:  jne    087e69e3 <+0x193>
087e68b9 +0x069:  add    $0x3c,%esp
087e68bc +0x06c:  mov    %ebx,%eax
087e68be +0x06e:  pop    %ebx
087e68bf +0x06f:  pop    %esi
087e68c0 +0x070:  pop    %edi
087e68c1 +0x071:  pop    %ebp
087e68c2 +0x072:  ret
087e68c3 +0x073:  nop
087e68c4 +0x074:  lea    0x0(%esi,%eiz,1),%esi
087e68c8 +0x078:  lea    -0x20(%ebp),%edi
087e68cb +0x07b:  jmp    087e68f2 <+0xa2>
087e68cd +0x07d:  lea    0x0(%esi),%esi
087e68d0 +0x080:  mov    -0x1c(%ebp),%edx
087e68d3 +0x083:  add    $0x1,%ebx
087e68d6 +0x086:  mov    %al,-0x20(%ebp)
087e68d9 +0x089:  mov    %edx,0x8(%esp)
087e68dd +0x08d:  mov    %edi,0x4(%esp)
087e68e1 +0x091:  mov    %esi,(%esp)
087e68e4 +0x094:  call   08707f10 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1b20>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1b20
087e68e9 +0x099:  test   %ebx,%ebx
087e68eb +0x09b:  je     087e68b9 <+0x69>
087e68ed +0x09d:  cmpb   $0x0,(%ebx)
087e68f0 +0x0a0:  je     087e6898 <+0x48>
087e68f2 +0x0a2:  mov    0xc(%ebp),%eax
087e68f5 +0x0a5:  mov    0x8(%ebp),%edx
087e68f8 +0x0a8:  movl   $0x0,0x8(%esp)
087e6900 +0x0b0:  mov    %ebx,(%esp)
087e6903 +0x0b3:  mov    %eax,0xc(%esp)
087e6907 +0x0b7:  mov    %edx,0x4(%esp)
087e690b +0x0bb:  call   087e62f0 <_ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding>  ; TiXmlBase::StringEqual(char const*, char const*, bool, TiXmlEncoding)
087e6910 +0x0c0:  test   %al,%al
087e6912 +0x0c2:  jne    087e6898 <+0x48>
087e6914 +0x0c4:  cmpl   $0x1,0xc(%ebp)
087e6918 +0x0c8:  movb   $0x0,-0x20(%ebp)
087e691c +0x0cc:  movb   $0x0,-0x1f(%ebp)
087e6920 +0x0d0:  movb   $0x0,-0x1e(%ebp)
087e6924 +0x0d4:  movb   $0x0,-0x1d(%ebp)
087e6928 +0x0d8:  je     087e6960 <+0x110>
087e692a +0x0da:  movl   $0x1,-0x1c(%ebp)
087e6931 +0x0e1:  movzbl (%ebx),%eax
087e6934 +0x0e4:  cmp    $0x26,%al
087e6936 +0x0e6:  jne    087e68d0 <+0x80>
087e6938 +0x0e8:  mov    0xc(%ebp),%edx
087e693b +0x0eb:  lea    -0x1c(%ebp),%eax
087e693e +0x0ee:  mov    %ebx,(%esp)
087e6941 +0x0f1:  mov    %eax,0x8(%esp)
087e6945 +0x0f5:  mov    %edi,0x4(%esp)
087e6949 +0x0f9:  mov    %edx,0xc(%esp)
087e694d +0x0fd:  call   087e6560 <_ZN9TiXmlBase9GetEntityEPKcPcPi13TiXmlEncoding>  ; TiXmlBase::GetEntity(char const*, char*, int*, TiXmlEncoding)
087e6952 +0x102:  mov    -0x1c(%ebp),%edx
087e6955 +0x105:  mov    %eax,%ebx
087e6957 +0x107:  jmp    087e68d9 <+0x89>
087e6959 +0x109:  lea    0x0(%esi,%eiz,1),%esi
087e6960 +0x110:  movzbl (%ebx),%eax
087e6963 +0x113:  mov    &_ZN9TiXmlBase13utf8ByteTableE(,%eax,4),%eax
087e696a +0x11a:  cmp    $0x4,%eax
087e696d +0x11d:  mov    %eax,%edx
087e696f +0x11f:  mov    %eax,-0x1c(%ebp)
087e6972 +0x122:  ja     087e6b8b <+0x33b>
087e6978 +0x128:  cmp    $0x1,%eax
087e697b +0x12b:  je     087e6931 <+0xe1>
087e697d +0x12d:  test   %eax,%eax
087e697f +0x12f:  je     087e69c0 <+0x170>
087e6981 +0x131:  movzbl (%ebx),%ecx
087e6984 +0x134:  test   %cl,%cl
087e6986 +0x136:  je     087e69b3 <+0x163>
087e6988 +0x138:  movl   $0x0,-0x2c(%ebp)
087e698f +0x13f:  xor    %eax,%eax
087e6991 +0x141:  lea    0x0(%esi,%eiz,1),%esi
087e6998 +0x148:  mov    -0x2c(%ebp),%edx
087e699b +0x14b:  add    $0x1,%eax
087e699e +0x14e:  mov    %cl,(%edi,%edx,1)
087e69a1 +0x151:  mov    %eax,-0x2c(%ebp)
087e69a4 +0x154:  movzbl (%ebx,%eax,1),%ecx
087e69a8 +0x158:  test   %cl,%cl
087e69aa +0x15a:  jne    087e6bb0 <+0x360>
087e69b0 +0x160:  mov    -0x1c(%ebp),%edx
087e69b3 +0x163:  add    %edx,%ebx
087e69b5 +0x165:  jmp    087e68d9 <+0x89>
087e69ba +0x16a:  lea    0x0(%esi),%esi
087e69c0 +0x170:  lea    -0x20(%ebp),%eax
087e69c3 +0x173:  xor    %ebx,%ebx
087e69c5 +0x175:  mov    %esi,(%esp)
087e69c8 +0x178:  movl   $0x0,0x8(%esp)
087e69d0 +0x180:  mov    %eax,0x4(%esp)
087e69d4 +0x184:  call   08707f10 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1b20>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1b20
087e69d9 +0x189:  add    $0x3c,%esp
087e69dc +0x18c:  mov    %ebx,%eax
087e69de +0x18e:  pop    %ebx
087e69df +0x18f:  pop    %esi
087e69e0 +0x190:  pop    %edi
087e69e1 +0x191:  pop    %ebp
087e69e2 +0x192:  ret
087e69e3 +0x193:  cmpb   $0x0,(%ebx)
087e69e6 +0x196:  jne    087e68b9 <+0x69>
087e69ec +0x19c:  lea    0x0(%esi,%eiz,1),%esi
087e69f0 +0x1a0:  xor    %ebx,%ebx
087e69f2 +0x1a2:  add    $0x3c,%esp
087e69f5 +0x1a5:  mov    %ebx,%eax
087e69f7 +0x1a7:  pop    %ebx
087e69f8 +0x1a8:  pop    %esi
087e69f9 +0x1a9:  pop    %edi
087e69fa +0x1aa:  pop    %ebp
087e69fb +0x1ab:  ret
087e69fc +0x1ac:  lea    0x0(%esi,%eiz,1),%esi
087e6a00 +0x1b0:  mov    0xc(%ebp),%eax
087e6a03 +0x1b3:  mov    %ebx,(%esp)
087e6a06 +0x1b6:  mov    %eax,0x4(%esp)
087e6a0a +0x1ba:  call   087e6480 <_ZN9TiXmlBase14SkipWhiteSpaceEPKc13TiXmlEncoding>  ; TiXmlBase::SkipWhiteSpace(char const*, TiXmlEncoding)
087e6a0f +0x1bf:  test   %eax,%eax
087e6a11 +0x1c1:  mov    %eax,%ebx
087e6a13 +0x1c3:  je     087e68b9 <+0x69>
087e6a19 +0x1c9:  cmpb   $0x0,(%eax)
087e6a1c +0x1cc:  je     087e6898 <+0x48>
087e6a22 +0x1d2:  xor    %edi,%edi
087e6a24 +0x1d4:  mov    %edi,%edx
087e6a26 +0x1d6:  mov    %esi,%edi
087e6a28 +0x1d8:  mov    0xc(%ebp),%esi
087e6a2b +0x1db:  jmp    087e6a39 <+0x1e9>
087e6a2d +0x1dd:  lea    0x0(%esi),%esi
087e6a30 +0x1e0:  cmpb   $0x0,(%ebx)
087e6a33 +0x1e3:  je     087e6898 <+0x48>
087e6a39 +0x1e9:  mov    0x8(%ebp),%eax
087e6a3c +0x1ec:  mov    %dl,-0x30(%ebp)
087e6a3f +0x1ef:  mov    %esi,0xc(%esp)
087e6a43 +0x1f3:  movl   $0x0,0x8(%esp)
087e6a4b +0x1fb:  mov    %eax,0x4(%esp)
087e6a4f +0x1ff:  mov    %ebx,(%esp)
087e6a52 +0x202:  call   087e62f0 <_ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding>  ; TiXmlBase::StringEqual(char const*, char const*, bool, TiXmlEncoding)
087e6a57 +0x207:  movzbl -0x30(%ebp),%edx
087e6a5b +0x20b:  test   %al,%al
087e6a5d +0x20d:  jne    087e6898 <+0x48>
087e6a63 +0x213:  movzbl (%ebx),%eax
087e6a66 +0x216:  cmp    $0xa,%al
087e6a68 +0x218:  je     087e6a6e <+0x21e>
087e6a6a +0x21a:  cmp    $0xd,%al
087e6a6c +0x21c:  jne    087e6a84 <+0x234>
087e6a6e +0x21e:  add    $0x1,%ebx
087e6a71 +0x221:  mov    $0x1,%edx
087e6a76 +0x226:  test   %ebx,%ebx
087e6a78 +0x228:  jne    087e6a30 <+0x1e0>
087e6a7a +0x22a:  add    $0x3c,%esp
087e6a7d +0x22d:  mov    %ebx,%eax
087e6a7f +0x22f:  pop    %ebx
087e6a80 +0x230:  pop    %esi
087e6a81 +0x231:  pop    %edi
087e6a82 +0x232:  pop    %ebp
087e6a83 +0x233:  ret
087e6a84 +0x234:  movzbl %al,%eax
087e6a87 +0x237:  mov    %eax,(%esp)
087e6a8a +0x23a:  mov    %dl,-0x30(%ebp)
087e6a8d +0x23d:  call   0807e280 <_init+0xb78>
087e6a92 +0x242:  movzbl -0x30(%ebp),%edx
087e6a96 +0x246:  test   %eax,%eax
087e6a98 +0x248:  jne    087e6a6e <+0x21e>
087e6a9a +0x24a:  test   %dl,%dl
087e6a9c +0x24c:  jne    087e6ade <+0x28e>
087e6a9e +0x24e:  cmp    $0x1,%esi
087e6aa1 +0x251:  movb   $0x0,-0x20(%ebp)
087e6aa5 +0x255:  movb   $0x0,-0x1f(%ebp)
087e6aa9 +0x259:  movb   $0x0,-0x1e(%ebp)
087e6aad +0x25d:  movb   $0x0,-0x1d(%ebp)
087e6ab1 +0x261:  je     087e6af0 <+0x2a0>
087e6ab3 +0x263:  movl   $0x1,-0x1c(%ebp)
087e6aba +0x26a:  movzbl (%ebx),%eax
087e6abd +0x26d:  cmp    $0x26,%al
087e6abf +0x26f:  je     087e6b66 <+0x316>
087e6ac5 +0x275:  mov    %al,-0x20(%ebp)
087e6ac8 +0x278:  add    $0x1,%ebx
087e6acb +0x27b:  movsbl %al,%eax
087e6ace +0x27e:  mov    %eax,0x4(%esp)
087e6ad2 +0x282:  mov    %edi,(%esp)
087e6ad5 +0x285:  call   08707dc0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x19d0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x19d0
087e6ada +0x28a:  xor    %edx,%edx
087e6adc +0x28c:  jmp    087e6a76 <+0x226>
087e6ade +0x28e:  movl   $0x20,0x4(%esp)
087e6ae6 +0x296:  mov    %edi,(%esp)
087e6ae9 +0x299:  call   08707dc0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x19d0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x19d0
087e6aee +0x29e:  jmp    087e6a9e <+0x24e>
087e6af0 +0x2a0:  movzbl (%ebx),%eax
087e6af3 +0x2a3:  mov    &_ZN9TiXmlBase13utf8ByteTableE(,%eax,4),%eax
087e6afa +0x2aa:  cmp    $0x4,%eax
087e6afd +0x2ad:  mov    %eax,-0x1c(%ebp)
087e6b00 +0x2b0:  ja     087e6b8b <+0x33b>
087e6b06 +0x2b6:  cmp    $0x1,%eax
087e6b09 +0x2b9:  je     087e6aba <+0x26a>
087e6b0b +0x2bb:  test   %eax,%eax
087e6b0d +0x2bd:  je     087e6b87 <+0x337>
087e6b0f +0x2bf:  movzbl (%ebx),%ecx
087e6b12 +0x2c2:  test   %cl,%cl
087e6b14 +0x2c4:  je     087e6b38 <+0x2e8>
087e6b16 +0x2c6:  movl   $0x0,-0x2c(%ebp)
087e6b1d +0x2cd:  xor    %edx,%edx
087e6b1f +0x2cf:  nop
087e6b20 +0x2d0:  mov    -0x2c(%ebp),%eax
087e6b23 +0x2d3:  add    $0x1,%edx
087e6b26 +0x2d6:  mov    %cl,-0x20(%ebp,%eax,1)
087e6b2a +0x2da:  mov    %edx,-0x2c(%ebp)
087e6b2d +0x2dd:  movzbl (%ebx,%edx,1),%ecx
087e6b31 +0x2e1:  test   %cl,%cl
087e6b33 +0x2e3:  jne    087e6b5d <+0x30d>
087e6b35 +0x2e5:  mov    -0x1c(%ebp),%eax
087e6b38 +0x2e8:  add    %eax,%ebx
087e6b3a +0x2ea:  cmp    $0x1,%eax
087e6b3d +0x2ed:  je     087e6bc2 <+0x372>
087e6b43 +0x2f3:  lea    -0x20(%ebp),%edx
087e6b46 +0x2f6:  mov    %edx,0x4(%esp)
087e6b4a +0x2fa:  mov    %eax,0x8(%esp)
087e6b4e +0x2fe:  mov    %edi,(%esp)
087e6b51 +0x301:  call   08707f10 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1b20>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1b20
087e6b56 +0x306:  xor    %edx,%edx
087e6b58 +0x308:  jmp    087e6a76 <+0x226>
087e6b5d +0x30d:  mov    -0x1c(%ebp),%eax
087e6b60 +0x310:  cmp    %eax,%edx
087e6b62 +0x312:  jl     087e6b20 <+0x2d0>
087e6b64 +0x314:  jmp    087e6b38 <+0x2e8>
087e6b66 +0x316:  lea    -0x1c(%ebp),%edx
087e6b69 +0x319:  lea    -0x20(%ebp),%eax
087e6b6c +0x31c:  mov    %ebx,(%esp)
087e6b6f +0x31f:  mov    %esi,0xc(%esp)
087e6b73 +0x323:  mov    %edx,0x8(%esp)
087e6b77 +0x327:  mov    %eax,0x4(%esp)
087e6b7b +0x32b:  call   087e6560 <_ZN9TiXmlBase9GetEntityEPKcPcPi13TiXmlEncoding>  ; TiXmlBase::GetEntity(char const*, char*, int*, TiXmlEncoding)
087e6b80 +0x330:  mov    %eax,%ebx
087e6b82 +0x332:  mov    -0x1c(%ebp),%eax
087e6b85 +0x335:  jmp    087e6b3a <+0x2ea>
087e6b87 +0x337:  xor    %ebx,%ebx
087e6b89 +0x339:  jmp    087e6b43 <+0x2f3>
087e6b8b +0x33b:  movl   $&_ZZN9TiXmlBase7GetCharEPKcPcPi13TiXmlEncodingE19__PRETTY_FUNCTION__,0xc(%esp)
087e6b93 +0x343:  movl   $0x14d,0x8(%esp)
087e6b9b +0x34b:  movl   $"tinyxml.h",0x4(%esp)
087e6ba3 +0x353:  movl   $"*length >= 0 && *length < 5",(%esp)
087e6baa +0x35a:  call   0807dc50 <_init+0x548>
087e6baf +0x35f:  nop
087e6bb0 +0x360:  mov    -0x1c(%ebp),%edx
087e6bb3 +0x363:  cmp    %edx,%eax
087e6bb5 +0x365:  jl     087e6998 <+0x148>
087e6bbb +0x36b:  add    %edx,%ebx
087e6bbd +0x36d:  jmp    087e68d9 <+0x89>
087e6bc2 +0x372:  movzbl -0x20(%ebp),%eax
087e6bc6 +0x376:  jmp    087e6acb <+0x27b>
087e6bcb +0x37b:  nop
087e6bcc +0x37c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TiXmlBase::ReadText @ 0x87e6850

/* TiXmlBase::ReadText(char const*, std::string*, bool, char const*, bool, TiXmlEncoding) [clone
   .clone.2] */

byte * __regparm3
TiXmlBase::ReadText(byte *param_1,string *param_2,char param_3,char *param_4,int param_5)

{
  bool bVar1;
  char cVar2;
  size_t sVar3;
  int iVar4;
  byte bVar5;
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
        cVar2 = StringEqual(param_1,param_4,0,param_5);
        if (cVar2 != '\0') break;
        local_24[0] = 0;
        local_24[1] = 0;
        local_24[2] = 0;
        local_24[3] = 0;
        if (param_5 == 1) {
          local_20[0] = *(uint *)(utf8ByteTable + (uint)*param_1 * 4);
          if (4 < local_20[0]) goto LAB_087e6b8b;
          if (local_20[0] == 1) goto LAB_087e6931;
          if (local_20[0] == 0) {
            std::string::append(param_2,(char *)local_24,0);
            return (byte *)0x0;
          }
          bVar5 = *param_1;
          if (bVar5 == 0) {
LAB_087e69b3:
            param_1 = param_1 + local_20[0];
          }
          else {
            local_30 = 0;
            do {
              iVar4 = local_30 + 1;
              local_24[local_30] = bVar5;
              bVar5 = param_1[iVar4];
              if (bVar5 == 0) goto LAB_087e69b3;
              local_30 = iVar4;
            } while (iVar4 < (int)local_20[0]);
            param_1 = param_1 + local_20[0];
          }
        }
        else {
          local_20[0] = 1;
LAB_087e6931:
          bVar5 = *param_1;
          if (bVar5 == 0x26) {
            param_1 = (byte *)GetEntity(param_1,local_24,local_20,param_5);
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
    param_1 = (byte *)SkipWhiteSpace(param_1,param_5);
    if (param_1 == (byte *)0x0) {
      return (byte *)0x0;
    }
    if (*param_1 != 0) {
      bVar1 = false;
      do {
        cVar2 = StringEqual(param_1,param_4,0,param_5);
        if (cVar2 != '\0') break;
        bVar5 = *param_1;
        if (((bVar5 == 10) || (bVar5 == 0xd)) || (iVar4 = isspace((uint)bVar5), iVar4 != 0)) {
          param_1 = param_1 + 1;
          bVar1 = true;
        }
        else {
          if (bVar1) {
            std::string::push_back(param_2,' ');
          }
          local_24[0] = 0;
          local_24[1] = 0;
          local_24[2] = 0;
          local_24[3] = 0;
          if (param_5 == 1) {
            local_20[0] = *(uint *)(utf8ByteTable + (uint)*param_1 * 4);
            if (4 < local_20[0]) {
LAB_087e6b8b:
              local_24[3] = 0;
              local_24[2] = 0;
              local_24[1] = 0;
              local_24[0] = 0;
                    /* WARNING: Subroutine does not return */
              __assert_fail("*length >= 0 && *length < 5","tinyxml.h",0x14d,
                            "static const char* TiXmlBase::GetChar(const char*, char*, int*, TiXmlEncoding)"
                           );
            }
            if (local_20[0] == 1) goto LAB_087e6aba;
            if (local_20[0] != 0) {
              bVar5 = *param_1;
              if (bVar5 != 0) {
                local_30 = 0;
                do {
                  iVar4 = local_30 + 1;
                  local_24[local_30] = bVar5;
                  bVar5 = param_1[iVar4];
                  if (bVar5 == 0) break;
                  local_30 = iVar4;
                } while (iVar4 < (int)local_20[0]);
              }
              param_1 = param_1 + local_20[0];
              goto LAB_087e6b3a;
            }
            param_1 = (byte *)0x0;
LAB_087e6b43:
            std::string::append(param_2,(char *)local_24,local_20[0]);
            bVar1 = false;
          }
          else {
            local_20[0] = 1;
LAB_087e6aba:
            bVar5 = *param_1;
            if (bVar5 == 0x26) {
              param_1 = (byte *)GetEntity(param_1,local_24,local_20,param_5);
LAB_087e6b3a:
              if (local_20[0] != 1) goto LAB_087e6b43;
            }
            else {
              param_1 = param_1 + 1;
              local_24[0] = bVar5;
            }
            std::string::push_back(param_2,local_24[0]);
            bVar1 = false;
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
    sVar3 = strlen(param_4);
    param_1 = param_1 + sVar3;
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
