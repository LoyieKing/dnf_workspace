# Parse

`_ZN13TiXmlDocument5ParseEPKcP16TiXmlParsingData13TiXmlEncoding`

`TiXmlDocument::Parse(char const*, TiXmlParsingData*, TiXmlEncoding)`

| 类 | 地址 |
|---|---|
| `TiXmlDocument` | `0x087e9960` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e9960  _ZN13TiXmlDocument5ParseEPKcP16TiXmlParsingData13TiXmlEncoding
#           TiXmlDocument::Parse(char const*, TiXmlParsingData*, TiXmlEncoding)
# range [0x087e9960, 0x087e9d9c]
087e9960 +0x000:  push   %ebp
087e9961 +0x001:  mov    %esp,%ebp
087e9963 +0x003:  push   %edi
087e9964 +0x004:  push   %esi
087e9965 +0x005:  push   %ebx
087e9966 +0x006:  sub    $0x4c,%esp
087e9969 +0x009:  mov    0x8(%ebp),%edi
087e996c +0x00c:  mov    0x10(%ebp),%edx
087e996f +0x00f:  mov    0xc(%ebp),%ebx
087e9972 +0x012:  mov    0x14(%ebp),%esi
087e9975 +0x015:  movb   $0x0,0x2c(%edi)
087e9979 +0x019:  lea    0x34(%edi),%eax
087e997c +0x01c:  movl   $0x0,0x30(%edi)
087e9983 +0x023:  mov    %edx,-0x30(%ebp)
087e9986 +0x026:  mov    %eax,-0x2c(%ebp)
087e9989 +0x029:  movl   $0x0,0x8(%esp)
087e9991 +0x031:  movl   $&data#2fb52a47(.rodata),0x4(%esp)
087e9999 +0x039:  mov    %eax,(%esp)
087e999c +0x03c:  call   087085a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x21b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x21b0
087e99a1 +0x041:  test   %ebx,%ebx
087e99a3 +0x043:  mov    -0x30(%ebp),%edx
087e99a6 +0x046:  movl   $0x0,0x40(%edi)
087e99ad +0x04d:  movl   $0x0,0x3c(%edi)
087e99b4 +0x054:  je     087e9cf5 <+0x395>
087e99ba +0x05a:  cmpb   $0x0,(%ebx)
087e99bd +0x05d:  je     087e9cf5 <+0x395>
087e99c3 +0x063:  test   %edx,%edx
087e99c5 +0x065:  movl   $0xffffffff,0x8(%edi)
087e99cc +0x06c:  movl   $0xffffffff,0x4(%edi)
087e99d3 +0x073:  je     087e9cde <+0x37e>
087e99d9 +0x079:  mov    (%edx),%ecx
087e99db +0x07b:  mov    0x4(%edx),%eax
087e99de +0x07e:  mov    %ecx,0x4(%edi)
087e99e1 +0x081:  mov    %eax,0x8(%edi)
087e99e4 +0x084:  mov    0x38(%edi),%edx
087e99e7 +0x087:  test   %esi,%esi
087e99e9 +0x089:  mov    %eax,-0x24(%ebp)
087e99ec +0x08c:  mov    %ecx,-0x28(%ebp)
087e99ef +0x08f:  mov    -0x28(%ebp),%eax
087e99f2 +0x092:  mov    %ebx,-0x20(%ebp)
087e99f5 +0x095:  mov    %edx,-0x1c(%ebp)
087e99f8 +0x098:  mov    -0x24(%ebp),%edx
087e99fb +0x09b:  mov    %eax,0x4(%edi)
087e99fe +0x09e:  mov    %edx,0x8(%edi)
087e9a01 +0x0a1:  je     087e9aa0 <+0x140>
087e9a07 +0x0a7:  movzbl (%ebx),%edx
087e9a0a +0x0aa:  test   %dl,%dl
087e9a0c +0x0ac:  je     087e9d6d <+0x40d>
087e9a12 +0x0b2:  cmp    $0x1,%esi
087e9a15 +0x0b5:  je     087e9a78 <+0x118>
087e9a17 +0x0b7:  movzbl %dl,%eax
087e9a1a +0x0ba:  mov    %eax,(%esp)
087e9a1d +0x0bd:  mov    %dl,-0x30(%ebp)
087e9a20 +0x0c0:  call   0807e280 <_init+0xb78>
087e9a25 +0x0c5:  movzbl -0x30(%ebp),%edx
087e9a29 +0x0c9:  cmp    $0xa,%dl
087e9a2c +0x0cc:  je     087e9a40 <+0xe0>
087e9a2e +0x0ce:  test   %eax,%eax
087e9a30 +0x0d0:  jne    087e9a40 <+0xe0>
087e9a32 +0x0d2:  cmp    $0xd,%dl
087e9a35 +0x0d5:  jne    087e9aea <+0x18a>
087e9a3b +0x0db:  nop
087e9a3c +0x0dc:  lea    0x0(%esi,%eiz,1),%esi
087e9a40 +0x0e0:  add    $0x1,%ebx
087e9a43 +0x0e3:  movzbl (%ebx),%edx
087e9a46 +0x0e6:  test   %dl,%dl
087e9a48 +0x0e8:  je     087e9aea <+0x18a>
087e9a4e +0x0ee:  jmp    087e9a17 <+0xb7>
087e9a50 +0x0f0:  cmpb   $0xbf,0x2(%ebx)
087e9a54 +0x0f4:  je     087e9a95 <+0x135>
087e9a56 +0x0f6:  xchg   %ax,%ax
087e9a58 +0x0f8:  movzbl %dl,%eax
087e9a5b +0x0fb:  mov    %eax,(%esp)
087e9a5e +0x0fe:  mov    %dl,-0x30(%ebp)
087e9a61 +0x101:  call   0807e280 <_init+0xb78>
087e9a66 +0x106:  movzbl -0x30(%ebp),%edx
087e9a6a +0x10a:  test   %eax,%eax
087e9a6c +0x10c:  je     087e9ae0 <+0x180>
087e9a6e +0x10e:  add    $0x1,%ebx
087e9a71 +0x111:  movzbl (%ebx),%edx
087e9a74 +0x114:  test   %dl,%dl
087e9a76 +0x116:  je     087e9aea <+0x18a>
087e9a78 +0x118:  cmpb   $0xef,(%ebx)
087e9a7b +0x11b:  jne    087e9a58 <+0xf8>
087e9a7d +0x11d:  movzbl 0x1(%ebx),%eax
087e9a81 +0x121:  cmp    $0xbb,%al
087e9a83 +0x123:  je     087e9a50 <+0xf0>
087e9a85 +0x125:  cmp    $0xbf,%al
087e9a87 +0x127:  jne    087e9a58 <+0xf8>
087e9a89 +0x129:  movzbl 0x2(%ebx),%eax
087e9a8d +0x12d:  cmp    $0xbe,%al
087e9a8f +0x12f:  je     087e9a95 <+0x135>
087e9a91 +0x131:  cmp    $0xbf,%al
087e9a93 +0x133:  jne    087e9a58 <+0xf8>
087e9a95 +0x135:  add    $0x3,%ebx
087e9a98 +0x138:  jmp    087e9a71 <+0x111>
087e9a9a +0x13a:  lea    0x0(%esi),%esi
087e9aa0 +0x140:  cmpb   $0xef,(%ebx)
087e9aa3 +0x143:  jne    087e9a07 <+0xa7>
087e9aa9 +0x149:  movzbl 0x1(%ebx),%eax
087e9aad +0x14d:  test   %al,%al
087e9aaf +0x14f:  je     087e9a07 <+0xa7>
087e9ab5 +0x155:  cmp    $0xbb,%al
087e9ab7 +0x157:  jne    087e9a07 <+0xa7>
087e9abd +0x15d:  movzbl 0x2(%ebx),%eax
087e9ac1 +0x161:  test   %al,%al
087e9ac3 +0x163:  je     087e9a07 <+0xa7>
087e9ac9 +0x169:  cmp    $0xbf,%al
087e9acb +0x16b:  jne    087e9a07 <+0xa7>
087e9ad1 +0x171:  movb   $0x1,0x44(%edi)
087e9ad5 +0x175:  mov    $0x1,%si
087e9ad9 +0x179:  jmp    087e9a07 <+0xa7>
087e9ade +0x17e:  xchg   %ax,%ax
087e9ae0 +0x180:  cmp    $0xa,%dl
087e9ae3 +0x183:  je     087e9a6e <+0x10e>
087e9ae5 +0x185:  cmp    $0xd,%dl
087e9ae8 +0x188:  je     087e9a6e <+0x10e>
087e9aea +0x18a:  test   %ebx,%ebx
087e9aec +0x18c:  je     087e9d6d <+0x40d>
087e9af2 +0x192:  test   %dl,%dl
087e9af4 +0x194:  jne    087e9b10 <+0x1b0>
087e9af6 +0x196:  mov    0x18(%edi),%eax
087e9af9 +0x199:  test   %eax,%eax
087e9afb +0x19b:  je     087e9d42 <+0x3e2>
087e9b01 +0x1a1:  add    $0x4c,%esp
087e9b04 +0x1a4:  mov    %ebx,%eax
087e9b06 +0x1a6:  pop    %ebx
087e9b07 +0x1a7:  pop    %esi
087e9b08 +0x1a8:  pop    %edi
087e9b09 +0x1a9:  pop    %ebp
087e9b0a +0x1aa:  ret
087e9b0b +0x1ab:  nop
087e9b0c +0x1ac:  lea    0x0(%esi,%eiz,1),%esi
087e9b10 +0x1b0:  mov    %esi,0x8(%esp)
087e9b14 +0x1b4:  mov    %ebx,0x4(%esp)
087e9b18 +0x1b8:  mov    %edi,(%esp)
087e9b1b +0x1bb:  call   087e7230 <_ZN9TiXmlNode8IdentifyEPKc13TiXmlEncoding>  ; TiXmlNode::Identify(char const*, TiXmlEncoding)
087e9b20 +0x1c0:  test   %eax,%eax
087e9b22 +0x1c2:  mov    %eax,%edx
087e9b24 +0x1c4:  je     087e9af6 <+0x196>
087e9b26 +0x1c6:  mov    (%edx),%eax
087e9b28 +0x1c8:  lea    -0x28(%ebp),%ecx
087e9b2b +0x1cb:  mov    %ecx,0x8(%esp)
087e9b2f +0x1cf:  mov    %ebx,0x4(%esp)
087e9b33 +0x1d3:  mov    %edx,(%esp)
087e9b36 +0x1d6:  mov    %edx,-0x30(%ebp)
087e9b39 +0x1d9:  mov    %esi,0xc(%esp)
087e9b3d +0x1dd:  call   *0xc(%eax)
087e9b40 +0x1e0:  mov    -0x30(%ebp),%edx
087e9b43 +0x1e3:  mov    %edi,(%esp)
087e9b46 +0x1e6:  mov    %edx,0x4(%esp)
087e9b4a +0x1ea:  mov    %eax,%ebx
087e9b4c +0x1ec:  call   087e2150 <_ZN9TiXmlNode12LinkEndChildEPS_>  ; TiXmlNode::LinkEndChild(TiXmlNode*)
087e9b51 +0x1f1:  test   %esi,%esi
087e9b53 +0x1f3:  mov    -0x30(%ebp),%edx
087e9b56 +0x1f6:  je     087e9be8 <+0x288>
087e9b5c +0x1fc:  test   %ebx,%ebx
087e9b5e +0x1fe:  je     087e9af6 <+0x196>
087e9b60 +0x200:  movzbl (%ebx),%edx
087e9b63 +0x203:  test   %dl,%dl
087e9b65 +0x205:  je     087e9c68 <+0x308>
087e9b6b +0x20b:  cmp    $0x1,%esi
087e9b6e +0x20e:  je     087e9bba <+0x25a>
087e9b70 +0x210:  movzbl %dl,%eax
087e9b73 +0x213:  mov    %eax,(%esp)
087e9b76 +0x216:  mov    %dl,-0x30(%ebp)
087e9b79 +0x219:  call   0807e280 <_init+0xb78>
087e9b7e +0x21e:  movzbl -0x30(%ebp),%edx
087e9b82 +0x222:  cmp    $0xa,%dl
087e9b85 +0x225:  je     087e9c20 <+0x2c0>
087e9b8b +0x22b:  test   %eax,%eax
087e9b8d +0x22d:  jne    087e9c20 <+0x2c0>
087e9b93 +0x233:  cmp    $0xd,%dl
087e9b96 +0x236:  je     087e9c20 <+0x2c0>
087e9b9c +0x23c:  test   %ebx,%ebx
087e9b9e +0x23e:  xchg   %ax,%ax
087e9ba0 +0x240:  jne    087e9af2 <+0x192>
087e9ba6 +0x246:  jmp    087e9af6 <+0x196>
087e9bab +0x24b:  nop
087e9bac +0x24c:  lea    0x0(%esi,%eiz,1),%esi
087e9bb0 +0x250:  add    $0x1,%ebx
087e9bb3 +0x253:  movzbl (%ebx),%edx
087e9bb6 +0x256:  test   %dl,%dl
087e9bb8 +0x258:  je     087e9b9c <+0x23c>
087e9bba +0x25a:  cmpb   $0xef,(%ebx)
087e9bbd +0x25d:  je     087e9c38 <+0x2d8>
087e9bbf +0x25f:  movzbl %dl,%eax
087e9bc2 +0x262:  mov    %eax,(%esp)
087e9bc5 +0x265:  mov    %dl,-0x30(%ebp)
087e9bc8 +0x268:  call   0807e280 <_init+0xb78>
087e9bcd +0x26d:  movzbl -0x30(%ebp),%edx
087e9bd1 +0x271:  test   %eax,%eax
087e9bd3 +0x273:  jne    087e9bb0 <+0x250>
087e9bd5 +0x275:  cmp    $0xa,%dl
087e9bd8 +0x278:  je     087e9bb0 <+0x250>
087e9bda +0x27a:  cmp    $0xd,%dl
087e9bdd +0x27d:  jne    087e9b9c <+0x23c>
087e9bdf +0x27f:  nop
087e9be0 +0x280:  jmp    087e9bb0 <+0x250>
087e9be2 +0x282:  lea    0x0(%esi),%esi
087e9be8 +0x288:  mov    (%edx),%eax
087e9bea +0x28a:  mov    %edx,(%esp)
087e9bed +0x28d:  lea    0x0(%esi),%esi
087e9bf0 +0x290:  call   *0x3c(%eax)
087e9bf3 +0x293:  mov    -0x30(%ebp),%edx
087e9bf6 +0x296:  test   %eax,%eax
087e9bf8 +0x298:  je     087e9b5c <+0x1fc>
087e9bfe +0x29e:  mov    (%edx),%eax
087e9c00 +0x2a0:  mov    %edx,(%esp)
087e9c03 +0x2a3:  call   *0x3c(%eax)
087e9c06 +0x2a6:  mov    0x30(%eax),%esi
087e9c09 +0x2a9:  test   %esi,%esi
087e9c0b +0x2ab:  je     087e9d77 <+0x417>
087e9c11 +0x2b1:  cmpb   $0x0,(%esi)
087e9c14 +0x2b4:  jne    087e9c70 <+0x310>
087e9c16 +0x2b6:  mov    $0x1,%esi
087e9c1b +0x2bb:  jmp    087e9b5c <+0x1fc>
087e9c20 +0x2c0:  add    $0x1,%ebx
087e9c23 +0x2c3:  movzbl (%ebx),%edx
087e9c26 +0x2c6:  test   %dl,%dl
087e9c28 +0x2c8:  je     087e9b9c <+0x23c>
087e9c2e +0x2ce:  jmp    087e9b70 <+0x210>
087e9c33 +0x2d3:  nop
087e9c34 +0x2d4:  lea    0x0(%esi,%eiz,1),%esi
087e9c38 +0x2d8:  movzbl 0x1(%ebx),%eax
087e9c3c +0x2dc:  cmp    $0xbb,%al
087e9c3e +0x2de:  je     087e9cc8 <+0x368>
087e9c44 +0x2e4:  cmp    $0xbf,%al
087e9c46 +0x2e6:  jne    087e9bbf <+0x25f>
087e9c4c +0x2ec:  movzbl 0x2(%ebx),%eax
087e9c50 +0x2f0:  cmp    $0xbe,%al
087e9c52 +0x2f2:  je     087e9c5c <+0x2fc>
087e9c54 +0x2f4:  cmp    $0xbf,%al
087e9c56 +0x2f6:  jne    087e9bbf <+0x25f>
087e9c5c +0x2fc:  add    $0x3,%ebx
087e9c5f +0x2ff:  jmp    087e9bb3 <+0x253>
087e9c64 +0x304:  lea    0x0(%esi,%eiz,1),%esi
087e9c68 +0x308:  xor    %ebx,%ebx
087e9c6a +0x30a:  jmp    087e9af6 <+0x196>
087e9c6f +0x30f:  nop
087e9c70 +0x310:  movl   $0x0,0xc(%esp)
087e9c78 +0x318:  movl   $0x1,0x8(%esp)
087e9c80 +0x320:  movl   $"UTF-8",0x4(%esp)
087e9c88 +0x328:  mov    %esi,(%esp)
087e9c8b +0x32b:  call   087e62f0 <_ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding>  ; TiXmlBase::StringEqual(char const*, char const*, bool, TiXmlEncoding)
087e9c90 +0x330:  test   %al,%al
087e9c92 +0x332:  jne    087e9c16 <+0x2b6>
087e9c94 +0x334:  mov    %esi,(%esp)
087e9c97 +0x337:  mov    $0x2,%esi
087e9c9c +0x33c:  movl   $0x0,0xc(%esp)
087e9ca4 +0x344:  movl   $0x1,0x8(%esp)
087e9cac +0x34c:  movl   $"UTF8",0x4(%esp)
087e9cb4 +0x354:  call   087e62f0 <_ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding>  ; TiXmlBase::StringEqual(char const*, char const*, bool, TiXmlEncoding)
087e9cb9 +0x359:  test   %al,%al
087e9cbb +0x35b:  je     087e9b5c <+0x1fc>
087e9cc1 +0x361:  jmp    087e9c16 <+0x2b6>
087e9cc6 +0x366:  xchg   %ax,%ax
087e9cc8 +0x368:  cmpb   $0xbf,0x2(%ebx)
087e9ccc +0x36c:  lea    0x0(%esi,%eiz,1),%esi
087e9cd0 +0x370:  jne    087e9bbf <+0x25f>
087e9cd6 +0x376:  add    $0x3,%ebx
087e9cd9 +0x379:  jmp    087e9bb3 <+0x253>
087e9cde +0x37e:  movl   $0x0,0x4(%edi)
087e9ce5 +0x385:  xor    %ecx,%ecx
087e9ce7 +0x387:  xor    %eax,%eax
087e9ce9 +0x389:  movl   $0x0,0x8(%edi)
087e9cf0 +0x390:  jmp    087e99e4 <+0x84>
087e9cf5 +0x395:  xor    %ebx,%ebx
087e9cf7 +0x397:  cmpb   $0x0,0x2c(%edi)
087e9cfb +0x39b:  jne    087e9b01 <+0x1a1>
087e9d01 +0x3a1:  mov    &_ZN9TiXmlBase11errorStringE+0x30,%ebx
087e9d07 +0x3a7:  movb   $0x1,0x2c(%edi)
087e9d0b +0x3ab:  movl   $0xc,0x30(%edi)
087e9d12 +0x3b2:  mov    %ebx,(%esp)
087e9d15 +0x3b5:  call   0807e3b0 <_init+0xca8>
087e9d1a +0x3ba:  mov    -0x2c(%ebp),%ecx
087e9d1d +0x3bd:  mov    %ebx,0x4(%esp)
087e9d21 +0x3c1:  xor    %ebx,%ebx
087e9d23 +0x3c3:  mov    %ecx,(%esp)
087e9d26 +0x3c6:  mov    %eax,0x8(%esp)
087e9d2a +0x3ca:  call   087085a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x21b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x21b0
087e9d2f +0x3cf:  movl   $0xffffffff,0x40(%edi)
087e9d36 +0x3d6:  movl   $0xffffffff,0x3c(%edi)
087e9d3d +0x3dd:  jmp    087e9b01 <+0x1a1>
087e9d42 +0x3e2:  mov    %esi,0x10(%esp)
087e9d46 +0x3e6:  movl   $0x0,0xc(%esp)
087e9d4e +0x3ee:  xor    %ebx,%ebx
087e9d50 +0x3f0:  movl   $0x0,0x8(%esp)
087e9d58 +0x3f8:  movl   $0xc,0x4(%esp)
087e9d60 +0x400:  mov    %edi,(%esp)
087e9d63 +0x403:  call   087e6d30 <_ZN13TiXmlDocument8SetErrorEiPKcP16TiXmlParsingData13TiXmlEncoding>  ; TiXmlDocument::SetError(int, char const*, TiXmlParsingData*, TiXmlEncoding)
087e9d68 +0x408:  jmp    087e9b01 <+0x1a1>
087e9d6d +0x40d:  movl   $0x0,0x10(%esp)
087e9d75 +0x415:  jmp    087e9d46 <+0x3e6>
087e9d77 +0x417:  movl   $&_ZZN13TiXmlDocument5ParseEPKcP16TiXmlParsingData13TiXmlEncodingE19__PRETTY_FUNCTION__,0xc(%esp)
087e9d7f +0x41f:  movl   $0x305,0x8(%esp)
087e9d87 +0x427:  movl   $"tinyxmlparser.cpp",0x4(%esp)
087e9d8f +0x42f:  movl   $"enc",(%esp)
087e9d96 +0x436:  call   0807dc50 <_init+0x548>
087e9d9b +0x43b:  nop
087e9d9c +0x43c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TiXmlDocument::Parse @ 0x87e9960

/* TiXmlDocument::Parse(char const*, TiXmlParsingData*, TiXmlEncoding) */

byte * __thiscall
TiXmlDocument::Parse(TiXmlDocument *this,byte *param_1,undefined4 *param_2,int param_4)

{
  byte bVar1;
  char *pcVar2;
  undefined4 __s;
  char cVar3;
  int iVar4;
  TiXmlNode *pTVar5;
  size_t sVar6;
  byte bVar7;
  undefined4 local_2c;
  undefined4 local_28;
  byte *local_24;
  undefined4 local_20;
  
  this[0x2c] = (TiXmlDocument)0x0;
  *(undefined4 *)(this + 0x30) = 0;
  std::string::assign((string *)(this + 0x34),"",0);
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  __s = TiXmlBase::errorString._48_4_;
  if ((param_1 == (byte *)0x0) || (*param_1 == 0)) {
    if (this[0x2c] != (TiXmlDocument)0x0) {
      return (byte *)0x0;
    }
    this[0x2c] = (TiXmlDocument)0x1;
    *(undefined4 *)(this + 0x30) = 0xc;
    sVar6 = strlen((char *)__s);
    std::string::assign((string *)(this + 0x34),(char *)__s,sVar6);
    *(undefined4 *)(this + 0x40) = 0xffffffff;
    *(undefined4 *)(this + 0x3c) = 0xffffffff;
    return (byte *)0x0;
  }
  *(undefined4 *)(this + 8) = 0xffffffff;
  *(undefined4 *)(this + 4) = 0xffffffff;
  if (param_2 == (undefined4 *)0x0) {
    *(undefined4 *)(this + 4) = 0;
    local_2c = 0;
    local_28 = 0;
    *(undefined4 *)(this + 8) = 0;
  }
  else {
    local_2c = *param_2;
    local_28 = param_2[1];
    *(undefined4 *)(this + 4) = local_2c;
    *(undefined4 *)(this + 8) = local_28;
  }
  local_20 = *(undefined4 *)(this + 0x38);
  local_24 = param_1;
  *(undefined4 *)(this + 4) = local_2c;
  *(undefined4 *)(this + 8) = local_28;
  if ((((param_4 == 0) && (*param_1 == 0xef)) && (param_1[1] != 0)) &&
     (((param_1[1] == 0xbb && (param_1[2] != 0)) && (param_1[2] == 0xbf)))) {
    this[0x44] = (TiXmlDocument)0x1;
    param_4 = 1;
  }
  bVar7 = *param_1;
  if (bVar7 != 0) {
    if (param_4 == 1) {
      do {
        if (*param_1 == 0xef) {
          if (param_1[1] == 0xbb) {
            bVar1 = param_1[2];
joined_r0x087e9a54:
            if (bVar1 != 0xbf) goto LAB_087e9a58;
          }
          else {
            if (param_1[1] != 0xbf) goto LAB_087e9a58;
            bVar1 = param_1[2];
            if (bVar1 != 0xbe) goto joined_r0x087e9a54;
          }
          param_1 = param_1 + 3;
        }
        else {
LAB_087e9a58:
          iVar4 = isspace((uint)bVar7);
          if (((iVar4 == 0) && (bVar7 != 10)) && (bVar7 != 0xd)) break;
          param_1 = param_1 + 1;
        }
        bVar7 = *param_1;
      } while (bVar7 != 0);
    }
    else {
      do {
        iVar4 = isspace((uint)bVar7);
        if (((bVar7 != 10) && (iVar4 == 0)) && (bVar7 != 0xd)) break;
        param_1 = param_1 + 1;
        bVar7 = *param_1;
      } while (bVar7 != 0);
    }
    if (param_1 != (byte *)0x0) {
      do {
        if ((bVar7 == 0) ||
           (pTVar5 = (TiXmlNode *)TiXmlNode::Identify((TiXmlNode *)this,param_1,param_4),
           pTVar5 == (TiXmlNode *)0x0)) break;
        param_1 = (byte *)(**(code **)(*(int *)pTVar5 + 0xc))(pTVar5,param_1,&local_2c,param_4);
        TiXmlNode::LinkEndChild((TiXmlNode *)this,pTVar5);
        if ((param_4 == 0) && (iVar4 = (**(code **)(*(int *)pTVar5 + 0x3c))(pTVar5), iVar4 != 0)) {
          iVar4 = (**(code **)(*(int *)pTVar5 + 0x3c))(pTVar5);
          pcVar2 = *(char **)(iVar4 + 0x30);
          if (pcVar2 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("enc","tinyxmlparser.cpp",0x305,
                          "virtual const char* TiXmlDocument::Parse(const char*, TiXmlParsingData*, TiXmlEncoding)"
                         );
          }
          if ((*pcVar2 != '\0') &&
             (cVar3 = TiXmlBase::StringEqual(pcVar2,"UTF-8",1,0), cVar3 == '\0')) {
            param_4 = 2;
            cVar3 = TiXmlBase::StringEqual(pcVar2,&DAT_08de18b1,1,0);
            if (cVar3 == '\0') goto LAB_087e9b5c;
          }
          param_4 = 1;
        }
LAB_087e9b5c:
        if (param_1 == (byte *)0x0) break;
        bVar7 = *param_1;
        if (bVar7 == 0) {
          param_1 = (byte *)0x0;
          break;
        }
        if (param_4 == 1) {
          do {
            if (*param_1 == 0xef) {
              if (param_1[1] == 0xbb) {
                if (param_1[2] != 0xbf) goto LAB_087e9bbf;
                param_1 = param_1 + 3;
              }
              else {
                if ((param_1[1] != 0xbf) || ((param_1[2] != 0xbe && (param_1[2] != 0xbf))))
                goto LAB_087e9bbf;
                param_1 = param_1 + 3;
              }
            }
            else {
LAB_087e9bbf:
              iVar4 = isspace((uint)bVar7);
              if (((iVar4 == 0) && (bVar7 != 10)) && (bVar7 != 0xd)) break;
              param_1 = param_1 + 1;
            }
            bVar7 = *param_1;
          } while (bVar7 != 0);
        }
        else {
          do {
            iVar4 = isspace((uint)bVar7);
            if (((bVar7 != 10) && (iVar4 == 0)) && (bVar7 != 0xd)) break;
            param_1 = param_1 + 1;
            bVar7 = *param_1;
          } while (bVar7 != 0);
        }
      } while (param_1 != (byte *)0x0);
      if (*(int *)(this + 0x18) != 0) {
        return param_1;
      }
      goto LAB_087e9d46;
    }
  }
  param_4 = 0;
LAB_087e9d46:
  SetError(this,0xc,0,0,param_4);
  return (byte *)0x0;
}
```
