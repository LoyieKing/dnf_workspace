# loadScript

`_ZN8WongWork12CMonsterDrop10loadScriptEPKc`

`WongWork::CMonsterDrop::loadScript(char const*)`

| 类 | 地址 |
|---|---|
| `WongWork::CMonsterDrop` | `0x08537938` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08537938  _ZN8WongWork12CMonsterDrop10loadScriptEPKc
#           WongWork::CMonsterDrop::loadScript(char const*)
# range [0x08537938, 0x085380f9]
08537938 +0x000:  push   %ebp
08537939 +0x001:  mov    %esp,%ebp
0853793b +0x003:  push   %esi
0853793c +0x004:  push   %ebx
0853793d +0x005:  sub    $0x90,%esp
08537943 +0x00b:  mov    0xc(%ebp),%eax
08537946 +0x00e:  mov    %eax,0x4(%esp)
0853794a +0x012:  movl   $"",(%esp)
08537951 +0x019:  call   088bbd29 <_Z18loadRDARScriptFilePKcS0_>  ; loadRDARScriptFile(char const*, char const*)
08537956 +0x01e:  xor    $0x1,%eax
08537959 +0x021:  test   %al,%al
0853795b +0x023:  je     08537967 <+0x2f>
0853795d +0x025:  mov    $0x66b,%ebx
08537962 +0x02a:  jmp    085380ed <+0x7b5>
08537967 +0x02f:  lea    -0x60(%ebp),%eax
0853796a +0x032:  mov    %eax,(%esp)
0853796d +0x035:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08537972 +0x03a:  movl   $0x0,-0x40(%ebp)
08537979 +0x041:  movb   $0x0,-0x61(%ebp)
0853797d +0x045:  jmp    08537989 <+0x51>
0853797f +0x047:  nop
08537980 +0x048:  jmp    08537989 <+0x51>
08537982 +0x04a:  nop
08537983 +0x04b:  jmp    08537989 <+0x51>
08537985 +0x04d:  nop
08537986 +0x04e:  jmp    08537989 <+0x51>
08537988 +0x050:  nop
08537989 +0x051:  movl   $0x1,0x4(%esp)
08537991 +0x059:  lea    -0x60(%ebp),%eax
08537994 +0x05c:  mov    %eax,(%esp)
08537997 +0x05f:  call   088bc85f <_Z8ScanTypeRSsb>  ; ScanType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool)
0853799c +0x064:  xor    $0x1,%eax
0853799f +0x067:  test   %al,%al
085379a1 +0x069:  jne    0853809a <+0x762>
085379a7 +0x06f:  movl   $"[drop prob count]",0x4(%esp)
085379af +0x077:  lea    -0x60(%ebp),%eax
085379b2 +0x07a:  mov    %eax,(%esp)
085379b5 +0x07d:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
085379ba +0x082:  test   %al,%al
085379bc +0x084:  je     08537a4c <+0x114>
085379c2 +0x08a:  lea    -0x5c(%ebp),%edx
085379c5 +0x08d:  mov    $0x0,%ecx
085379ca +0x092:  mov    $0x1c,%eax
085379cf +0x097:  mov    %eax,%ebx
085379d1 +0x099:  and    $0xfffffffc,%ebx
085379d4 +0x09c:  mov    $0x0,%eax
085379d9 +0x0a1:  mov    %ecx,(%edx,%eax,1)
085379dc +0x0a4:  add    $0x4,%eax
085379df +0x0a7:  cmp    %ebx,%eax
085379e1 +0x0a9:  jb     085379d9 <+0xa1>
085379e3 +0x0ab:  add    %eax,%edx
085379e5 +0x0ad:  lea    -0x61(%ebp),%eax
085379e8 +0x0b0:  mov    %eax,(%esp)
085379eb +0x0b3:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
085379f0 +0x0b8:  mov    0x8(%ebp),%edx
085379f3 +0x0bb:  lea    0x18(%edx),%ecx
085379f6 +0x0be:  mov    -0x5c(%ebp),%edx
085379f9 +0x0c1:  mov    %edx,0x8(%esp)
085379fd +0x0c5:  mov    -0x58(%ebp),%edx
08537a00 +0x0c8:  mov    %edx,0xc(%esp)
08537a04 +0x0cc:  mov    -0x54(%ebp),%edx
08537a07 +0x0cf:  mov    %edx,0x10(%esp)
08537a0b +0x0d3:  mov    -0x50(%ebp),%edx
08537a0e +0x0d6:  mov    %edx,0x14(%esp)
08537a12 +0x0da:  mov    -0x4c(%ebp),%edx
08537a15 +0x0dd:  mov    %edx,0x18(%esp)
08537a19 +0x0e1:  mov    -0x48(%ebp),%edx
08537a1c +0x0e4:  mov    %edx,0x1c(%esp)
08537a20 +0x0e8:  mov    -0x44(%ebp),%edx
08537a23 +0x0eb:  mov    %edx,0x20(%esp)
08537a27 +0x0ef:  mov    %eax,0x4(%esp)
08537a2b +0x0f3:  mov    %ecx,(%esp)
08537a2e +0x0f6:  call   0853b9f6 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x1c82>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x1c82
08537a33 +0x0fb:  movzbl -0x61(%ebp),%eax
08537a37 +0x0ff:  xor    $0x1,%eax
08537a3a +0x102:  test   %al,%al
08537a3c +0x104:  je     0853797f <+0x47>
08537a42 +0x10a:  mov    $0x679,%ebx
08537a47 +0x10f:  jmp    085380e2 <+0x7aa>
08537a4c +0x114:  movl   $"[drop prob]",0x4(%esp)
08537a54 +0x11c:  lea    -0x60(%ebp),%eax
08537a57 +0x11f:  mov    %eax,(%esp)
08537a5a +0x122:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08537a5f +0x127:  test   %al,%al
08537a61 +0x129:  je     08537b3d <+0x205>
08537a67 +0x12f:  movl   $0x0,-0x3c(%ebp)
08537a6e +0x136:  jmp    08537b1c <+0x1e4>
08537a73 +0x13b:  mov    0x8(%ebp),%eax
08537a76 +0x13e:  lea    0x18(%eax),%edx
08537a79 +0x141:  mov    -0x3c(%ebp),%eax
08537a7c +0x144:  mov    %eax,0x4(%esp)
08537a80 +0x148:  mov    %edx,(%esp)
08537a83 +0x14b:  call   0853b904 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x1b90>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x1b90
08537a88 +0x150:  mov    %eax,-0x38(%ebp)
08537a8b +0x153:  lea    -0x61(%ebp),%eax
08537a8e +0x156:  mov    %eax,(%esp)
08537a91 +0x159:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08537a96 +0x15e:  mov    -0x38(%ebp),%edx
08537a99 +0x161:  mov    %eax,(%edx)
08537a9b +0x163:  movzbl -0x61(%ebp),%eax
08537a9f +0x167:  xor    $0x1,%eax
08537aa2 +0x16a:  test   %al,%al
08537aa4 +0x16c:  je     08537ab0 <+0x178>
08537aa6 +0x16e:  mov    $0x681,%ebx
08537aab +0x173:  jmp    085380e2 <+0x7aa>
08537ab0 +0x178:  lea    -0x61(%ebp),%eax
08537ab3 +0x17b:  mov    %eax,(%esp)
08537ab6 +0x17e:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08537abb +0x183:  mov    -0x38(%ebp),%edx
08537abe +0x186:  mov    %eax,0x4(%edx)
08537ac1 +0x189:  movzbl -0x61(%ebp),%eax
08537ac5 +0x18d:  xor    $0x1,%eax
08537ac8 +0x190:  test   %al,%al
08537aca +0x192:  je     08537ad6 <+0x19e>
08537acc +0x194:  mov    $0x683,%ebx
08537ad1 +0x199:  jmp    085380e2 <+0x7aa>
08537ad6 +0x19e:  movl   $0x0,-0x34(%ebp)
08537add +0x1a5:  jmp    08537b0d <+0x1d5>
08537adf +0x1a7:  mov    -0x34(%ebp),%ebx
08537ae2 +0x1aa:  lea    -0x61(%ebp),%eax
08537ae5 +0x1ad:  mov    %eax,(%esp)
08537ae8 +0x1b0:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08537aed +0x1b5:  mov    -0x38(%ebp),%edx
08537af0 +0x1b8:  mov    %eax,0x8(%edx,%ebx,4)
08537af4 +0x1bc:  movzbl -0x61(%ebp),%eax
08537af8 +0x1c0:  xor    $0x1,%eax
08537afb +0x1c3:  test   %al,%al
08537afd +0x1c5:  je     08537b09 <+0x1d1>
08537aff +0x1c7:  mov    $0x687,%ebx
08537b04 +0x1cc:  jmp    085380e2 <+0x7aa>
08537b09 +0x1d1:  addl   $0x1,-0x34(%ebp)
08537b0d +0x1d5:  cmpl   $0x4,-0x34(%ebp)
08537b11 +0x1d9:  setle  %al
08537b14 +0x1dc:  test   %al,%al
08537b16 +0x1de:  jne    08537adf <+0x1a7>
08537b18 +0x1e0:  addl   $0x1,-0x3c(%ebp)
08537b1c +0x1e4:  mov    0x8(%ebp),%eax
08537b1f +0x1e7:  add    $0x18,%eax
08537b22 +0x1ea:  mov    %eax,(%esp)
08537b25 +0x1ed:  call   0853b8e2 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x1b6e>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x1b6e
08537b2a +0x1f2:  cmp    -0x3c(%ebp),%eax
08537b2d +0x1f5:  seta   %al
08537b30 +0x1f8:  test   %al,%al
08537b32 +0x1fa:  jne    08537a73 <+0x13b>
08537b38 +0x200:  jmp    08537989 <+0x51>
08537b3d +0x205:  movl   $"[basis of rarity dicision]",0x4(%esp)
08537b45 +0x20d:  lea    -0x60(%ebp),%eax
08537b48 +0x210:  mov    %eax,(%esp)
08537b4b +0x213:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08537b50 +0x218:  test   %al,%al
08537b52 +0x21a:  je     08537bc4 <+0x28c>
08537b54 +0x21c:  movl   $0x1,-0x30(%ebp)
08537b5b +0x223:  jmp    08537bb4 <+0x27c>
08537b5d +0x225:  movl   $0x0,-0x2c(%ebp)
08537b64 +0x22c:  jmp    08537ba5 <+0x26d>
08537b66 +0x22e:  mov    -0x30(%ebp),%ebx
08537b69 +0x231:  mov    -0x2c(%ebp),%esi
08537b6c +0x234:  lea    -0x61(%ebp),%eax
08537b6f +0x237:  mov    %eax,(%esp)
08537b72 +0x23a:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08537b77 +0x23f:  mov    %eax,%edx
08537b79 +0x241:  mov    0x8(%ebp),%ecx
08537b7c +0x244:  mov    %ebx,%eax
08537b7e +0x246:  add    %eax,%eax
08537b80 +0x248:  add    %ebx,%eax
08537b82 +0x24a:  add    %eax,%eax
08537b84 +0x24c:  add    %esi,%eax
08537b86 +0x24e:  add    $0xc,%eax
08537b89 +0x251:  mov    %edx,(%ecx,%eax,4)
08537b8c +0x254:  movzbl -0x61(%ebp),%eax
08537b90 +0x258:  xor    $0x1,%eax
08537b93 +0x25b:  test   %al,%al
08537b95 +0x25d:  je     08537ba1 <+0x269>
08537b97 +0x25f:  mov    $0x693,%ebx
08537b9c +0x264:  jmp    085380e2 <+0x7aa>
08537ba1 +0x269:  addl   $0x1,-0x2c(%ebp)
08537ba5 +0x26d:  cmpl   $0x5,-0x2c(%ebp)
08537ba9 +0x271:  setle  %al
08537bac +0x274:  test   %al,%al
08537bae +0x276:  jne    08537b66 <+0x22e>
08537bb0 +0x278:  addl   $0x1,-0x30(%ebp)
08537bb4 +0x27c:  cmpl   $0x4,-0x30(%ebp)
08537bb8 +0x280:  setle  %al
08537bbb +0x283:  test   %al,%al
08537bbd +0x285:  jne    08537b5d <+0x225>
08537bbf +0x287:  jmp    08537989 <+0x51>
08537bc4 +0x28c:  movl   $"[party member drop bonusrate]",0x4(%esp)
08537bcc +0x294:  lea    -0x60(%ebp),%eax
08537bcf +0x297:  mov    %eax,(%esp)
08537bd2 +0x29a:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08537bd7 +0x29f:  test   %al,%al
08537bd9 +0x2a1:  je     08537c49 <+0x311>
08537bdb +0x2a3:  movl   $0x0,-0x28(%ebp)
08537be2 +0x2aa:  jmp    08537c39 <+0x301>
08537be4 +0x2ac:  movl   $0x0,-0x24(%ebp)
08537beb +0x2b3:  jmp    08537c2a <+0x2f2>
08537bed +0x2b5:  mov    -0x28(%ebp),%esi
08537bf0 +0x2b8:  mov    -0x24(%ebp),%ebx
08537bf3 +0x2bb:  lea    -0x61(%ebp),%eax
08537bf6 +0x2be:  mov    %eax,(%esp)
08537bf9 +0x2c1:  call   088bc4e5 <_Z9ScanFloatPb>  ; ScanFloat(bool*)
08537bfe +0x2c6:  mov    0x8(%ebp),%eax
08537c01 +0x2c9:  lea    0x0(,%esi,4),%edx
08537c08 +0x2d0:  add    %ebx,%edx
08537c0a +0x2d2:  add    $0x28,%edx
08537c0d +0x2d5:  fstps  0x8(%eax,%edx,4)
08537c11 +0x2d9:  movzbl -0x61(%ebp),%eax
08537c15 +0x2dd:  xor    $0x1,%eax
08537c18 +0x2e0:  test   %al,%al
08537c1a +0x2e2:  je     08537c26 <+0x2ee>
08537c1c +0x2e4:  mov    $0x69e,%ebx
08537c21 +0x2e9:  jmp    085380e2 <+0x7aa>
08537c26 +0x2ee:  addl   $0x1,-0x24(%ebp)
08537c2a +0x2f2:  cmpl   $0x3,-0x24(%ebp)
08537c2e +0x2f6:  setle  %al
08537c31 +0x2f9:  test   %al,%al
08537c33 +0x2fb:  jne    08537bed <+0x2b5>
08537c35 +0x2fd:  addl   $0x1,-0x28(%ebp)
08537c39 +0x301:  cmpl   $0x4,-0x28(%ebp)
08537c3d +0x305:  setle  %al
08537c40 +0x308:  test   %al,%al
08537c42 +0x30a:  jne    08537be4 <+0x2ac>
08537c44 +0x30c:  jmp    08537989 <+0x51>
08537c49 +0x311:  movl   $"[dungeon difficulty drop bonusrate]",0x4(%esp)
08537c51 +0x319:  lea    -0x60(%ebp),%eax
08537c54 +0x31c:  mov    %eax,(%esp)
08537c57 +0x31f:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08537c5c +0x324:  test   %al,%al
08537c5e +0x326:  je     08537cce <+0x396>
08537c60 +0x328:  movl   $0x0,-0x20(%ebp)
08537c67 +0x32f:  jmp    08537cbe <+0x386>
08537c69 +0x331:  movl   $0x0,-0x1c(%ebp)
08537c70 +0x338:  jmp    08537caf <+0x377>
08537c72 +0x33a:  mov    -0x20(%ebp),%ebx
08537c75 +0x33d:  mov    -0x1c(%ebp),%esi
08537c78 +0x340:  lea    -0x61(%ebp),%eax
08537c7b +0x343:  mov    %eax,(%esp)
08537c7e +0x346:  call   088bc4e5 <_Z9ScanFloatPb>  ; ScanFloat(bool*)
08537c83 +0x34b:  mov    0x8(%ebp),%edx
08537c86 +0x34e:  mov    %ebx,%eax
08537c88 +0x350:  shl    $0x2,%eax
08537c8b +0x353:  add    %ebx,%eax
08537c8d +0x355:  add    %esi,%eax
08537c8f +0x357:  add    $0x3c,%eax
08537c92 +0x35a:  fstps  0x8(%edx,%eax,4)
08537c96 +0x35e:  movzbl -0x61(%ebp),%eax
08537c9a +0x362:  xor    $0x1,%eax
08537c9d +0x365:  test   %al,%al
08537c9f +0x367:  je     08537cab <+0x373>
08537ca1 +0x369:  mov    $0x6ad,%ebx
08537ca6 +0x36e:  jmp    085380e2 <+0x7aa>
08537cab +0x373:  addl   $0x1,-0x1c(%ebp)
08537caf +0x377:  cmpl   $0x4,-0x1c(%ebp)
08537cb3 +0x37b:  setle  %al
08537cb6 +0x37e:  test   %al,%al
08537cb8 +0x380:  jne    08537c72 <+0x33a>
08537cba +0x382:  addl   $0x1,-0x20(%ebp)
08537cbe +0x386:  cmpl   $0x4,-0x20(%ebp)
08537cc2 +0x38a:  setle  %al
08537cc5 +0x38d:  test   %al,%al
08537cc7 +0x38f:  jne    08537c69 <+0x331>
08537cc9 +0x391:  jmp    08537989 <+0x51>
08537cce +0x396:  movl   $"[monster type drop bonusrate]",0x4(%esp)
08537cd6 +0x39e:  lea    -0x60(%ebp),%eax
08537cd9 +0x3a1:  mov    %eax,(%esp)
08537cdc +0x3a4:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08537ce1 +0x3a9:  test   %al,%al
08537ce3 +0x3ab:  je     08537d53 <+0x41b>
08537ce5 +0x3ad:  movl   $0x0,-0x18(%ebp)
08537cec +0x3b4:  jmp    08537d43 <+0x40b>
08537cee +0x3b6:  movl   $0x0,-0x14(%ebp)
08537cf5 +0x3bd:  jmp    08537d34 <+0x3fc>
08537cf7 +0x3bf:  mov    -0x18(%ebp),%esi
08537cfa +0x3c2:  mov    -0x14(%ebp),%ebx
08537cfd +0x3c5:  lea    -0x61(%ebp),%eax
08537d00 +0x3c8:  mov    %eax,(%esp)
08537d03 +0x3cb:  call   088bc4e5 <_Z9ScanFloatPb>  ; ScanFloat(bool*)
08537d08 +0x3d0:  mov    0x8(%ebp),%eax
08537d0b +0x3d3:  lea    0x0(,%esi,4),%edx
08537d12 +0x3da:  add    %ebx,%edx
08537d14 +0x3dc:  add    $0x54,%edx
08537d17 +0x3df:  fstps  0xc(%eax,%edx,4)
08537d1b +0x3e3:  movzbl -0x61(%ebp),%eax
08537d1f +0x3e7:  xor    $0x1,%eax
08537d22 +0x3ea:  test   %al,%al
08537d24 +0x3ec:  je     08537d30 <+0x3f8>
08537d26 +0x3ee:  mov    $0x6b8,%ebx
08537d2b +0x3f3:  jmp    085380e2 <+0x7aa>
08537d30 +0x3f8:  addl   $0x1,-0x14(%ebp)
08537d34 +0x3fc:  cmpl   $0x3,-0x14(%ebp)
08537d38 +0x400:  setle  %al
08537d3b +0x403:  test   %al,%al
08537d3d +0x405:  jne    08537cf7 <+0x3bf>
08537d3f +0x407:  addl   $0x1,-0x18(%ebp)
08537d43 +0x40b:  cmpl   $0x4,-0x18(%ebp)
08537d47 +0x40f:  setle  %al
08537d4a +0x412:  test   %al,%al
08537d4c +0x414:  jne    08537cee <+0x3b6>
08537d4e +0x416:  jmp    08537989 <+0x51>
08537d53 +0x41b:  movl   $"[item drop ref table]",0x4(%esp)
08537d5b +0x423:  lea    -0x60(%ebp),%eax
08537d5e +0x426:  mov    %eax,(%esp)
08537d61 +0x429:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08537d66 +0x42e:  test   %al,%al
08537d68 +0x430:  je     08537e30 <+0x4f8>
08537d6e +0x436:  mov    0x8(%ebp),%eax
08537d71 +0x439:  movb   $0x0,0x1ac(%eax)
08537d78 +0x440:  mov    0x8(%ebp),%eax
08537d7b +0x443:  movb   $0x0,0x1ad(%eax)
08537d82 +0x44a:  movl   $0x1,-0x10(%ebp)
08537d89 +0x451:  jmp    08537e19 <+0x4e1>
08537d8e +0x456:  lea    -0x61(%ebp),%eax
08537d91 +0x459:  mov    %eax,(%esp)
08537d94 +0x45c:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08537d99 +0x461:  mov    %eax,-0x40(%ebp)
08537d9c +0x464:  movzbl -0x61(%ebp),%eax
08537da0 +0x468:  xor    $0x1,%eax
08537da3 +0x46b:  test   %al,%al
08537da5 +0x46d:  je     08537db1 <+0x479>
08537da7 +0x46f:  mov    $0x6c5,%ebx
08537dac +0x474:  jmp    085380e2 <+0x7aa>
08537db1 +0x479:  mov    -0x40(%ebp),%ebx
08537db4 +0x47c:  lea    -0x61(%ebp),%eax
08537db7 +0x47f:  mov    %eax,(%esp)
08537dba +0x482:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08537dbf +0x487:  mov    %eax,%edx
08537dc1 +0x489:  mov    0x8(%ebp),%eax
08537dc4 +0x48c:  lea    0xd0(%ebx),%ecx
08537dca +0x492:  mov    %dl,0xc(%eax,%ecx,2)
08537dce +0x496:  movzbl -0x61(%ebp),%eax
08537dd2 +0x49a:  xor    $0x1,%eax
08537dd5 +0x49d:  test   %al,%al
08537dd7 +0x49f:  je     08537de3 <+0x4ab>
08537dd9 +0x4a1:  mov    $0x6c9,%ebx
08537dde +0x4a6:  jmp    085380e2 <+0x7aa>
08537de3 +0x4ab:  mov    -0x40(%ebp),%ebx
08537de6 +0x4ae:  lea    -0x61(%ebp),%eax
08537de9 +0x4b1:  mov    %eax,(%esp)
08537dec +0x4b4:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08537df1 +0x4b9:  mov    %eax,%edx
08537df3 +0x4bb:  mov    0x8(%ebp),%eax
08537df6 +0x4be:  lea    0xd0(%ebx),%ecx
08537dfc +0x4c4:  mov    %dl,0xd(%eax,%ecx,2)
08537e00 +0x4c8:  movzbl -0x61(%ebp),%eax
08537e04 +0x4cc:  xor    $0x1,%eax
08537e07 +0x4cf:  test   %al,%al
08537e09 +0x4d1:  je     08537e15 <+0x4dd>
08537e0b +0x4d3:  mov    $0x6cd,%ebx
08537e10 +0x4d8:  jmp    085380e2 <+0x7aa>
08537e15 +0x4dd:  addl   $0x1,-0x10(%ebp)
08537e19 +0x4e1:  cmpl   $0xc8,-0x10(%ebp)
08537e20 +0x4e8:  setle  %al
08537e23 +0x4eb:  test   %al,%al
08537e25 +0x4ed:  jne    08537d8e <+0x456>
08537e2b +0x4f3:  jmp    08537989 <+0x51>
08537e30 +0x4f8:  movl   $"[first boss/named mob hunting]",0x4(%esp)
08537e38 +0x500:  lea    -0x60(%ebp),%eax
08537e3b +0x503:  mov    %eax,(%esp)
08537e3e +0x506:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08537e43 +0x50b:  test   %al,%al
08537e45 +0x50d:  je     08537ebc <+0x584>
08537e47 +0x50f:  mov    0x8(%ebp),%eax
08537e4a +0x512:  movl   $0x1,0x25937c(%eax)
08537e54 +0x51c:  mov    0x8(%ebp),%eax
08537e57 +0x51f:  mov    0x25937c(%eax),%edx
08537e5d +0x525:  mov    0x8(%ebp),%eax
08537e60 +0x528:  mov    %edx,0x259378(%eax)
08537e66 +0x52e:  lea    -0x61(%ebp),%eax
08537e69 +0x531:  mov    %eax,(%esp)
08537e6c +0x534:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08537e71 +0x539:  mov    0x8(%ebp),%edx
08537e74 +0x53c:  mov    %eax,0x259378(%edx)
08537e7a +0x542:  movzbl -0x61(%ebp),%eax
08537e7e +0x546:  xor    $0x1,%eax
08537e81 +0x549:  test   %al,%al
08537e83 +0x54b:  je     08537e8f <+0x557>
08537e85 +0x54d:  mov    $0x6d7,%ebx
08537e8a +0x552:  jmp    085380e2 <+0x7aa>
08537e8f +0x557:  lea    -0x61(%ebp),%eax
08537e92 +0x55a:  mov    %eax,(%esp)
08537e95 +0x55d:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08537e9a +0x562:  mov    0x8(%ebp),%edx
08537e9d +0x565:  mov    %eax,0x25937c(%edx)
08537ea3 +0x56b:  movzbl -0x61(%ebp),%eax
08537ea7 +0x56f:  xor    $0x1,%eax
08537eaa +0x572:  test   %al,%al
08537eac +0x574:  je     08537982 <+0x4a>
08537eb2 +0x57a:  mov    $0x6db,%ebx
08537eb7 +0x57f:  jmp    085380e2 <+0x7aa>
08537ebc +0x584:  movl   $"[condition rate]",0x4(%esp)
08537ec4 +0x58c:  lea    -0x60(%ebp),%eax
08537ec7 +0x58f:  mov    %eax,(%esp)
08537eca +0x592:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08537ecf +0x597:  test   %al,%al
08537ed1 +0x599:  je     08537f57 <+0x61f>
08537ed7 +0x59f:  movl   $0x0,-0xc(%ebp)
08537ede +0x5a6:  jmp    08537f47 <+0x60f>
08537ee0 +0x5a8:  mov    -0xc(%ebp),%ebx
08537ee3 +0x5ab:  lea    -0x61(%ebp),%eax
08537ee6 +0x5ae:  mov    %eax,(%esp)
08537ee9 +0x5b1:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08537eee +0x5b6:  mov    %eax,%edx
08537ef0 +0x5b8:  mov    0x8(%ebp),%eax
08537ef3 +0x5bb:  lea    0x964e0(%ebx),%ecx
08537ef9 +0x5c1:  mov    %dx,0x8(%eax,%ecx,4)
08537efe +0x5c6:  movzbl -0x61(%ebp),%eax
08537f02 +0x5ca:  xor    $0x1,%eax
08537f05 +0x5cd:  test   %al,%al
08537f07 +0x5cf:  je     08537f13 <+0x5db>
08537f09 +0x5d1:  mov    $0x6e5,%ebx
08537f0e +0x5d6:  jmp    085380e2 <+0x7aa>
08537f13 +0x5db:  mov    -0xc(%ebp),%ebx
08537f16 +0x5de:  lea    -0x61(%ebp),%eax
08537f19 +0x5e1:  mov    %eax,(%esp)
08537f1c +0x5e4:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08537f21 +0x5e9:  mov    %eax,%edx
08537f23 +0x5eb:  mov    0x8(%ebp),%eax
08537f26 +0x5ee:  mov    %dx,0x25938a(%eax,%ebx,4)
08537f2e +0x5f6:  movzbl -0x61(%ebp),%eax
08537f32 +0x5fa:  xor    $0x1,%eax
08537f35 +0x5fd:  test   %al,%al
08537f37 +0x5ff:  je     08537f43 <+0x60b>
08537f39 +0x601:  mov    $0x6e9,%ebx
08537f3e +0x606:  jmp    085380e2 <+0x7aa>
08537f43 +0x60b:  addl   $0x1,-0xc(%ebp)
08537f47 +0x60f:  cmpl   $0x3,-0xc(%ebp)
08537f4b +0x613:  setle  %al
08537f4e +0x616:  test   %al,%al
08537f50 +0x618:  jne    08537ee0 <+0x5a8>
08537f52 +0x61a:  jmp    08537989 <+0x51>
08537f57 +0x61f:  movl   $"[gold quantity]",0x4(%esp)
08537f5f +0x627:  lea    -0x60(%ebp),%eax
08537f62 +0x62a:  mov    %eax,(%esp)
08537f65 +0x62d:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08537f6a +0x632:  test   %al,%al
08537f6c +0x634:  je     08538026 <+0x6ee>
08537f72 +0x63a:  lea    -0x61(%ebp),%eax
08537f75 +0x63d:  mov    %eax,(%esp)
08537f78 +0x640:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08537f7d +0x645:  mov    %eax,%edx
08537f7f +0x647:  mov    0x8(%ebp),%eax
08537f82 +0x64a:  mov    %dx,0x259398(%eax)
08537f89 +0x651:  movzbl -0x61(%ebp),%eax
08537f8d +0x655:  xor    $0x1,%eax
08537f90 +0x658:  test   %al,%al
08537f92 +0x65a:  je     08537f9e <+0x666>
08537f94 +0x65c:  mov    $0x6f0,%ebx
08537f99 +0x661:  jmp    085380e2 <+0x7aa>
08537f9e +0x666:  lea    -0x61(%ebp),%eax
08537fa1 +0x669:  mov    %eax,(%esp)
08537fa4 +0x66c:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08537fa9 +0x671:  mov    %eax,%edx
08537fab +0x673:  mov    0x8(%ebp),%eax
08537fae +0x676:  mov    %dx,0x25939a(%eax)
08537fb5 +0x67d:  movzbl -0x61(%ebp),%eax
08537fb9 +0x681:  xor    $0x1,%eax
08537fbc +0x684:  test   %al,%al
08537fbe +0x686:  je     08537fca <+0x692>
08537fc0 +0x688:  mov    $0x6f4,%ebx
08537fc5 +0x68d:  jmp    085380e2 <+0x7aa>
08537fca +0x692:  lea    -0x61(%ebp),%eax
08537fcd +0x695:  mov    %eax,(%esp)
08537fd0 +0x698:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08537fd5 +0x69d:  mov    %eax,%edx
08537fd7 +0x69f:  mov    0x8(%ebp),%eax
08537fda +0x6a2:  mov    %dx,0x25939c(%eax)
08537fe1 +0x6a9:  movzbl -0x61(%ebp),%eax
08537fe5 +0x6ad:  xor    $0x1,%eax
08537fe8 +0x6b0:  test   %al,%al
08537fea +0x6b2:  je     08537ff6 <+0x6be>
08537fec +0x6b4:  mov    $0x6f8,%ebx
08537ff1 +0x6b9:  jmp    085380e2 <+0x7aa>
08537ff6 +0x6be:  lea    -0x61(%ebp),%eax
08537ff9 +0x6c1:  mov    %eax,(%esp)
08537ffc +0x6c4:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08538001 +0x6c9:  mov    %eax,%edx
08538003 +0x6cb:  mov    0x8(%ebp),%eax
08538006 +0x6ce:  mov    %dx,0x25939e(%eax)
0853800d +0x6d5:  movzbl -0x61(%ebp),%eax
08538011 +0x6d9:  xor    $0x1,%eax
08538014 +0x6dc:  test   %al,%al
08538016 +0x6de:  je     08537985 <+0x4d>
0853801c +0x6e4:  mov    $0x6fc,%ebx
08538021 +0x6e9:  jmp    085380e2 <+0x7aa>
08538026 +0x6ee:  movl   $"[gold volume]",0x4(%esp)
0853802e +0x6f6:  lea    -0x60(%ebp),%eax
08538031 +0x6f9:  mov    %eax,(%esp)
08538034 +0x6fc:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08538039 +0x701:  test   %al,%al
0853803b +0x703:  je     08538093 <+0x75b>
0853803d +0x705:  lea    -0x61(%ebp),%eax
08538040 +0x708:  mov    %eax,(%esp)
08538043 +0x70b:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08538048 +0x710:  mov    %eax,%edx
0853804a +0x712:  mov    0x8(%ebp),%eax
0853804d +0x715:  mov    %dx,0x2593a0(%eax)
08538054 +0x71c:  movzbl -0x61(%ebp),%eax
08538058 +0x720:  xor    $0x1,%eax
0853805b +0x723:  test   %al,%al
0853805d +0x725:  je     08538066 <+0x72e>
0853805f +0x727:  mov    $0x702,%ebx
08538064 +0x72c:  jmp    085380e2 <+0x7aa>
08538066 +0x72e:  lea    -0x61(%ebp),%eax
08538069 +0x731:  mov    %eax,(%esp)
0853806c +0x734:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08538071 +0x739:  mov    %eax,%edx
08538073 +0x73b:  mov    0x8(%ebp),%eax
08538076 +0x73e:  mov    %dx,0x2593a2(%eax)
0853807d +0x745:  movzbl -0x61(%ebp),%eax
08538081 +0x749:  xor    $0x1,%eax
08538084 +0x74c:  test   %al,%al
08538086 +0x74e:  je     08537988 <+0x50>
0853808c +0x754:  mov    $0x706,%ebx
08538091 +0x759:  jmp    085380e2 <+0x7aa>
08538093 +0x75b:  mov    $0x70a,%ebx
08538098 +0x760:  jmp    085380e2 <+0x7aa>
0853809a +0x762:  nop
0853809b +0x763:  mov    0x8(%ebp),%eax
0853809e +0x766:  lea    0x1ac(%eax),%edx
085380a4 +0x76c:  mov    0x8(%ebp),%eax
085380a7 +0x76f:  add    $0x340,%eax
085380ac +0x774:  movl   $0x1,0x8(%esp)
085380b4 +0x77c:  mov    %edx,0x4(%esp)
085380b8 +0x780:  mov    %eax,(%esp)
085380bb +0x783:  call   0853466c <_ZN8WongWork17CItemGenRateTable13generateTableEPNS_16stGenItemRange_tEb>  ; WongWork::CItemGenRateTable::generateTable(WongWork::stGenItemRange_t*, bool)
085380c0 +0x788:  mov    $0x0,%ebx
085380c5 +0x78d:  jmp    085380e2 <+0x7aa>
085380c7 +0x78f:  mov    %edx,%ebx
085380c9 +0x791:  mov    %eax,%esi
085380cb +0x793:  lea    -0x60(%ebp),%eax
085380ce +0x796:  mov    %eax,(%esp)
085380d1 +0x799:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
085380d6 +0x79e:  mov    %esi,%eax
085380d8 +0x7a0:  mov    %ebx,%edx
085380da +0x7a2:  mov    %eax,(%esp)
085380dd +0x7a5:  call   08ae3750 <_Unwind_Resume>
085380e2 +0x7aa:  lea    -0x60(%ebp),%eax
085380e5 +0x7ad:  mov    %eax,(%esp)
085380e8 +0x7b0:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
085380ed +0x7b5:  mov    %ebx,%eax
085380ef +0x7b7:  add    $0x90,%esp
085380f5 +0x7bd:  pop    %ebx
085380f6 +0x7be:  pop    %esi
085380f7 +0x7bf:  pop    %ebp
085380f8 +0x7c0:  ret
085380f9 +0x7c1:  nop
```

## 反编译 C

```c
// WongWork::CMonsterDrop::loadScript @ 0x8537938

/* WongWork::CMonsterDrop::loadScript(char const*) */

undefined4 __thiscall WongWork::CMonsterDrop::loadScript(CMonsterDrop *this,char *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  CMonsterDrop CVar4;
  undefined2 uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  longdouble lVar9;
  bool local_65;
  string local_64;
  undefined4 local_60 [7];
  int local_44;
  uint local_40;
  undefined4 *local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  cVar2 = loadRDARScriptFile("",param_1);
  if (cVar2 == '\x01') {
    std::string::string((string *)&local_64);
    local_44 = 0;
    local_65 = false;
    do {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              while( true ) {
                while( true ) {
                  while( true ) {
                    while( true ) {
                      while( true ) {
                        while( true ) {
                    /* try { // try from 08537997 to 085380bf has its CatchHandler @ 085380c7 */
                          cVar2 = ScanType((string *)&local_64,true);
                          if (cVar2 != '\x01') {
                            CItemGenRateTable::generateTable
                                      ((CItemGenRateTable *)(this + 0x340),
                                       (stGenItemRange_t *)(this + 0x1ac),true);
                            uVar8 = 0;
                            goto LAB_085380e2;
                          }
                          bVar3 = std::operator==(&local_64,"[drop prob count]");
                          if (!bVar3) break;
                          uVar6 = 0;
                          do {
                            *(undefined4 *)((int)local_60 + uVar6) = 0;
                            uVar6 = uVar6 + 4;
                          } while (uVar6 < 0x1c);
                          uVar8 = ScanInt(&local_65);
                          std::
                          vector<WongWork::CMonsterDrop::stGenItemProb_t,std::allocator<WongWork::CMonsterDrop::stGenItemProb_t>>
                          ::resize(this + 0x18,uVar8,local_60[0],local_60[1],local_60[2],local_60[3]
                                   ,local_60[4],local_60[5],local_60[6]);
                          if (local_65 != true) {
                            uVar8 = 0x679;
                            goto LAB_085380e2;
                          }
                        }
                        bVar3 = std::operator==(&local_64,"[drop prob]");
                        if (!bVar3) break;
                        local_40 = 0;
                        while (uVar6 = std::
                                       vector<WongWork::CMonsterDrop::stGenItemProb_t,std::allocator<WongWork::CMonsterDrop::stGenItemProb_t>>
                                       ::size((vector<WongWork::CMonsterDrop::stGenItemProb_t,std::allocator<WongWork::CMonsterDrop::stGenItemProb_t>>
                                               *)(this + 0x18)), local_40 < uVar6) {
                          local_3c = (undefined4 *)
                                     std::
                                     vector<WongWork::CMonsterDrop::stGenItemProb_t,std::allocator<WongWork::CMonsterDrop::stGenItemProb_t>>
                                     ::operator[]((
                                                  vector<WongWork::CMonsterDrop::stGenItemProb_t,std::allocator<WongWork::CMonsterDrop::stGenItemProb_t>>
                                                  *)(this + 0x18),local_40);
                          uVar8 = ScanInt(&local_65);
                          *local_3c = uVar8;
                          if (local_65 != true) {
                            uVar8 = 0x681;
                            goto LAB_085380e2;
                          }
                          uVar8 = ScanInt(&local_65);
                          local_3c[1] = uVar8;
                          if (local_65 != true) {
                            uVar8 = 0x683;
                            goto LAB_085380e2;
                          }
                          for (local_38 = 0; iVar7 = local_38, local_38 < 5; local_38 = local_38 + 1
                              ) {
                            uVar8 = ScanInt(&local_65);
                            local_3c[iVar7 + 2] = uVar8;
                            if (local_65 != true) {
                              uVar8 = 0x687;
                              goto LAB_085380e2;
                            }
                          }
                          local_40 = local_40 + 1;
                        }
                      }
                      bVar3 = std::operator==(&local_64,"[basis of rarity dicision]");
                      if (!bVar3) break;
                      for (local_34 = 1; local_34 < 5; local_34 = local_34 + 1) {
                        for (local_30 = 0; iVar1 = local_30, iVar7 = local_34, local_30 < 6;
                            local_30 = local_30 + 1) {
                          uVar8 = ScanInt(&local_65);
                          *(undefined4 *)(this + (iVar7 * 6 + iVar1) * 4 + 0x30) = uVar8;
                          if (local_65 != true) {
                            uVar8 = 0x693;
                            goto LAB_085380e2;
                          }
                        }
                      }
                    }
                    bVar3 = std::operator==(&local_64,"[party member drop bonusrate]");
                    if (!bVar3) break;
                    for (local_2c = 0; local_2c < 5; local_2c = local_2c + 1) {
                      for (local_28 = 0; iVar1 = local_28, iVar7 = local_2c, local_28 < 4;
                          local_28 = local_28 + 1) {
                        lVar9 = (longdouble)ScanFloat(&local_65);
                        *(float *)(this + (iVar7 * 4 + iVar1 + 0x28) * 4 + 8) = (float)lVar9;
                        if (local_65 != true) {
                          uVar8 = 0x69e;
                          goto LAB_085380e2;
                        }
                      }
                    }
                  }
                  bVar3 = std::operator==(&local_64,"[dungeon difficulty drop bonusrate]");
                  if (!bVar3) break;
                  for (local_24 = 0; local_24 < 5; local_24 = local_24 + 1) {
                    for (local_20 = 0; iVar1 = local_20, iVar7 = local_24, local_20 < 5;
                        local_20 = local_20 + 1) {
                      lVar9 = (longdouble)ScanFloat(&local_65);
                      *(float *)(this + (iVar7 * 5 + iVar1 + 0x3c) * 4 + 8) = (float)lVar9;
                      if (local_65 != true) {
                        uVar8 = 0x6ad;
                        goto LAB_085380e2;
                      }
                    }
                  }
                }
                bVar3 = std::operator==(&local_64,"[monster type drop bonusrate]");
                if (!bVar3) break;
                for (local_1c = 0; local_1c < 5; local_1c = local_1c + 1) {
                  for (local_18 = 0; iVar1 = local_18, iVar7 = local_1c, local_18 < 4;
                      local_18 = local_18 + 1) {
                    lVar9 = (longdouble)ScanFloat(&local_65);
                    *(float *)(this + (iVar7 * 4 + iVar1 + 0x54) * 4 + 0xc) = (float)lVar9;
                    if (local_65 != true) {
                      uVar8 = 0x6b8;
                      goto LAB_085380e2;
                    }
                  }
                }
              }
              bVar3 = std::operator==(&local_64,"[item drop ref table]");
              if (!bVar3) break;
              this[0x1ac] = (CMonsterDrop)0x0;
              this[0x1ad] = (CMonsterDrop)0x0;
              for (local_14 = 1; local_14 < 0xc9; local_14 = local_14 + 1) {
                iVar7 = ScanInt(&local_65);
                local_44 = iVar7;
                if (local_65 != true) {
                  uVar8 = 0x6c5;
                  goto LAB_085380e2;
                }
                CVar4 = (CMonsterDrop)ScanInt(&local_65);
                iVar1 = local_44;
                this[(iVar7 + 0xd0) * 2 + 0xc] = CVar4;
                if (local_65 != true) {
                  uVar8 = 0x6c9;
                  goto LAB_085380e2;
                }
                CVar4 = (CMonsterDrop)ScanInt(&local_65);
                this[(iVar1 + 0xd0) * 2 + 0xd] = CVar4;
                if (local_65 != true) {
                  uVar8 = 0x6cd;
                  goto LAB_085380e2;
                }
              }
            }
            bVar3 = std::operator==(&local_64,"[first boss/named mob hunting]");
            if (!bVar3) break;
            *(undefined4 *)(this + 0x25937c) = 1;
            *(undefined4 *)(this + 0x259378) = *(undefined4 *)(this + 0x25937c);
            uVar8 = ScanInt(&local_65);
            *(undefined4 *)(this + 0x259378) = uVar8;
            if (local_65 != true) {
              uVar8 = 0x6d7;
              goto LAB_085380e2;
            }
            uVar8 = ScanInt(&local_65);
            *(undefined4 *)(this + 0x25937c) = uVar8;
            if (local_65 != true) {
              uVar8 = 0x6db;
              goto LAB_085380e2;
            }
          }
          bVar3 = std::operator==(&local_64,"[condition rate]");
          if (!bVar3) break;
          for (local_10 = 0; iVar7 = local_10, local_10 < 4; local_10 = local_10 + 1) {
            uVar5 = ScanInt(&local_65);
            iVar1 = local_10;
            *(undefined2 *)(this + (iVar7 + 0x964e0) * 4 + 8) = uVar5;
            if (local_65 != true) {
              uVar8 = 0x6e5;
              goto LAB_085380e2;
            }
            uVar5 = ScanInt(&local_65);
            *(undefined2 *)(this + iVar1 * 4 + 0x25938a) = uVar5;
            if (local_65 != true) {
              uVar8 = 0x6e9;
              goto LAB_085380e2;
            }
          }
        }
        bVar3 = std::operator==(&local_64,"[gold quantity]");
        if (!bVar3) break;
        uVar5 = ScanInt(&local_65);
        *(undefined2 *)(this + 0x259398) = uVar5;
        if (local_65 != true) {
          uVar8 = 0x6f0;
          goto LAB_085380e2;
        }
        uVar5 = ScanInt(&local_65);
        *(undefined2 *)(this + 0x25939a) = uVar5;
        if (local_65 != true) {
          uVar8 = 0x6f4;
          goto LAB_085380e2;
        }
        uVar5 = ScanInt(&local_65);
        *(undefined2 *)(this + 0x25939c) = uVar5;
        if (local_65 != true) {
          uVar8 = 0x6f8;
          goto LAB_085380e2;
        }
        uVar5 = ScanInt(&local_65);
        *(undefined2 *)(this + 0x25939e) = uVar5;
        if (local_65 != true) {
          uVar8 = 0x6fc;
          goto LAB_085380e2;
        }
      }
      bVar3 = std::operator==(&local_64,"[gold volume]");
      if (!bVar3) {
        uVar8 = 0x70a;
        goto LAB_085380e2;
      }
      uVar5 = ScanInt(&local_65);
      *(undefined2 *)(this + 0x2593a0) = uVar5;
      if (local_65 != true) {
        uVar8 = 0x702;
        goto LAB_085380e2;
      }
      uVar5 = ScanInt(&local_65);
      *(undefined2 *)(this + 0x2593a2) = uVar5;
    } while (local_65 == true);
    uVar8 = 0x706;
LAB_085380e2:
    std::string::~string((string *)&local_64);
  }
  else {
    uVar8 = 0x66b;
  }
  return uVar8;
}
```
