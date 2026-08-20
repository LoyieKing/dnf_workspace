# verify

`_ZN7PackSet6verifyEv`

`PackSet::verify()`

| 类 | 地址 |
|---|---|
| `PackSet` | `0x08ac6c8a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ac6c8a  _ZN7PackSet6verifyEv
#           PackSet::verify()
# range [0x08ac6c8a, 0x08ac75fd]
08ac6c8a +0x000:  push   %ebp
08ac6c8b +0x001:  mov    %esp,%ebp
08ac6c8d +0x003:  push   %edi
08ac6c8e +0x004:  push   %esi
08ac6c8f +0x005:  push   %ebx
08ac6c90 +0x006:  sub    $0xac,%esp
08ac6c96 +0x00c:  mov    0x8(%ebp),%eax
08ac6c99 +0x00f:  mov    %eax,(%esp)
08ac6c9c +0x012:  call   08ac7674 <_ZN7PackSet18UsingEncryptedFileEv>  ; PackSet::UsingEncryptedFile()
08ac6ca1 +0x017:  test   %al,%al
08ac6ca3 +0x019:  je     08ac6cb5 <+0x2b>
08ac6ca5 +0x01b:  mov    0x8(%ebp),%eax
08ac6ca8 +0x01e:  mov    %eax,(%esp)
08ac6cab +0x021:  call   08ac75fe <_ZN7PackSet19verifyEncryptedFileEv>  ; PackSet::verifyEncryptedFile()
08ac6cb0 +0x026:  jmp    08ac75f2 <+0x968>
08ac6cb5 +0x02b:  movl   $0x500000,-0x48(%ebp)
08ac6cbc +0x032:  movl   $0x0,-0x44(%ebp)
08ac6cc3 +0x039:  movl   $0x0,-0x40(%ebp)
08ac6cca +0x040:  movl   $0x0,-0x3c(%ebp)
08ac6cd1 +0x047:  movl   $0x0,-0x6c(%ebp)
08ac6cd8 +0x04e:  lea    -0x70(%ebp),%eax
08ac6cdb +0x051:  mov    %eax,(%esp)
08ac6cde +0x054:  call   08ac79dc <_ZN16IPackFileProcess15getCommonBufferEj+0x29e>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x29e
08ac6ce3 +0x059:  mov    0x8(%ebp),%eax
08ac6ce6 +0x05c:  mov    %eax,(%esp)
08ac6ce9 +0x05f:  call   08ac4954 <_ZNK7PackSet8is_readyEv>  ; PackSet::is_ready() const
08ac6cee +0x064:  xor    $0x1,%eax
08ac6cf1 +0x067:  test   %al,%al
08ac6cf3 +0x069:  je     08ac6d49 <+0xbf>
08ac6cf5 +0x06b:  mov    &stdout,%eax
08ac6cfa +0x070:  movl   $"Not yet opened",0x8(%esp)
08ac6d02 +0x078:  movl   $"%s\n",0x4(%esp)
08ac6d0a +0x080:  mov    %eax,(%esp)
08ac6d0d +0x083:  call   0807da90 <_init+0x388>
08ac6d12 +0x088:  mov    &stdout,%eax
08ac6d17 +0x08d:  movl   $&_ZZN7PackSet6verifyEvE12__FUNCTION__,0x10(%esp)
08ac6d1f +0x095:  movl   $0x5a5,0xc(%esp)
08ac6d27 +0x09d:  movl   $"../../Include/FilePack/Pack.cpp",0x8(%esp)
08ac6d2f +0x0a5:  movl   $"%s(%d) - %s\n",0x4(%esp)
08ac6d37 +0x0ad:  mov    %eax,(%esp)
08ac6d3a +0x0b0:  call   0807da90 <_init+0x388>
08ac6d3f +0x0b5:  mov    $0x1,%eax
08ac6d44 +0x0ba:  jmp    08ac75f2 <+0x968>
08ac6d49 +0x0bf:  mov    -0x48(%ebp),%eax
08ac6d4c +0x0c2:  mov    %eax,(%esp)
08ac6d4f +0x0c5:  call   08722dc0 <_Znaj>  ; operator new[](unsigned int)
08ac6d54 +0x0ca:  mov    %eax,-0x44(%ebp)
08ac6d57 +0x0cd:  mov    -0x48(%ebp),%eax
08ac6d5a +0x0d0:  mov    %eax,(%esp)
08ac6d5d +0x0d3:  call   08722dc0 <_Znaj>  ; operator new[](unsigned int)
08ac6d62 +0x0d8:  mov    %eax,-0x40(%ebp)
08ac6d65 +0x0db:  movl   $0x0,-0x38(%ebp)
08ac6d6c +0x0e2:  movl   $0x0,-0x34(%ebp)
08ac6d73 +0x0e9:  movl   $0x0,-0x30(%ebp)
08ac6d7a +0x0f0:  movl   $0x0,-0x2c(%ebp)
08ac6d81 +0x0f7:  lea    -0x74(%ebp),%eax
08ac6d84 +0x0fa:  mov    %eax,(%esp)
08ac6d87 +0x0fd:  call   08ade828 <_ZN4TickC1Ev>  ; Tick::Tick()
08ac6d8c +0x102:  lea    -0x78(%ebp),%eax
08ac6d8f +0x105:  mov    %eax,(%esp)
08ac6d92 +0x108:  call   08ade828 <_ZN4TickC1Ev>  ; Tick::Tick()
08ac6d97 +0x10d:  movl   $0x0,-0x28(%ebp)
08ac6d9e +0x114:  mov    $0x0,%eax
08ac6da3 +0x119:  mov    %eax,-0x24(%ebp)
08ac6da6 +0x11c:  movl   $0x0,-0x20(%ebp)
08ac6dad +0x123:  mov    0x8(%ebp),%eax
08ac6db0 +0x126:  lea    0x10(%eax),%edx
08ac6db3 +0x129:  lea    -0x7c(%ebp),%eax
08ac6db6 +0x12c:  mov    %edx,0x4(%esp)
08ac6dba +0x130:  mov    %eax,(%esp)
08ac6dbd +0x133:  call   08ac79ea <_ZN16IPackFileProcess15getCommonBufferEj+0x2ac>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x2ac
08ac6dc2 +0x138:  sub    $0x4,%esp
08ac6dc5 +0x13b:  mov    -0x7c(%ebp),%eax
08ac6dc8 +0x13e:  mov    %eax,-0x70(%ebp)
08ac6dcb +0x141:  jmp    08ac6de9 <+0x15f>
08ac6dcd +0x143:  lea    -0x70(%ebp),%eax
08ac6dd0 +0x146:  mov    %eax,(%esp)
08ac6dd3 +0x149:  call   08ac7a24 <_ZN16IPackFileProcess15getCommonBufferEj+0x2e6>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x2e6
08ac6dd8 +0x14e:  mov    0xc(%eax),%eax
08ac6ddb +0x151:  add    %eax,-0x2c(%ebp)
08ac6dde +0x154:  lea    -0x70(%ebp),%eax
08ac6de1 +0x157:  mov    %eax,(%esp)
08ac6de4 +0x15a:  call   08ac7a0e <_ZN16IPackFileProcess15getCommonBufferEj+0x2d0>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x2d0
08ac6de9 +0x15f:  mov    0x8(%ebp),%eax
08ac6dec +0x162:  lea    0x10(%eax),%edx
08ac6def +0x165:  lea    -0x68(%ebp),%eax
08ac6df2 +0x168:  mov    %edx,0x4(%esp)
08ac6df6 +0x16c:  mov    %eax,(%esp)
08ac6df9 +0x16f:  call   08ac798a <_ZN16IPackFileProcess15getCommonBufferEj+0x24c>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x24c
08ac6dfe +0x174:  sub    $0x4,%esp
08ac6e01 +0x177:  lea    -0x68(%ebp),%eax
08ac6e04 +0x17a:  mov    %eax,0x4(%esp)
08ac6e08 +0x17e:  lea    -0x70(%ebp),%eax
08ac6e0b +0x181:  mov    %eax,(%esp)
08ac6e0e +0x184:  call   08ac79b0 <_ZN16IPackFileProcess15getCommonBufferEj+0x272>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x272
08ac6e13 +0x189:  test   %al,%al
08ac6e15 +0x18b:  jne    08ac6dcd <+0x143>
08ac6e17 +0x18d:  mov    0x8(%ebp),%eax
08ac6e1a +0x190:  add    $0x10,%eax
08ac6e1d +0x193:  mov    %eax,(%esp)
08ac6e20 +0x196:  call   08ac796e <_ZN16IPackFileProcess15getCommonBufferEj+0x230>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x230
08ac6e25 +0x19b:  mov    %eax,-0x34(%ebp)
08ac6e28 +0x19e:  lea    -0x64(%ebp),%eax
08ac6e2b +0x1a1:  mov    %eax,(%esp)
08ac6e2e +0x1a4:  call   08ade844 <_ZN4Tick3nowEv>  ; Tick::now()
08ac6e33 +0x1a9:  sub    $0x4,%esp
08ac6e36 +0x1ac:  mov    -0x64(%ebp),%eax
08ac6e39 +0x1af:  mov    %eax,0x4(%esp)
08ac6e3d +0x1b3:  lea    -0x74(%ebp),%eax
08ac6e40 +0x1b6:  mov    %eax,(%esp)
08ac6e43 +0x1b9:  call   08ade8e0 <_ZN4TickaSES_>  ; Tick::operator=(Tick)
08ac6e48 +0x1be:  lea    -0x60(%ebp),%eax
08ac6e4b +0x1c1:  mov    %eax,(%esp)
08ac6e4e +0x1c4:  call   08ade844 <_ZN4Tick3nowEv>  ; Tick::now()
08ac6e53 +0x1c9:  sub    $0x4,%esp
08ac6e56 +0x1cc:  mov    -0x60(%ebp),%eax
08ac6e59 +0x1cf:  mov    %eax,0x4(%esp)
08ac6e5d +0x1d3:  lea    -0x78(%ebp),%eax
08ac6e60 +0x1d6:  mov    %eax,(%esp)
08ac6e63 +0x1d9:  call   08ade8e0 <_ZN4TickaSES_>  ; Tick::operator=(Tick)
08ac6e68 +0x1de:  mov    0x8(%ebp),%eax
08ac6e6b +0x1e1:  lea    0x10(%eax),%edx
08ac6e6e +0x1e4:  lea    -0x7c(%ebp),%eax
08ac6e71 +0x1e7:  mov    %edx,0x4(%esp)
08ac6e75 +0x1eb:  mov    %eax,(%esp)
08ac6e78 +0x1ee:  call   08ac79ea <_ZN16IPackFileProcess15getCommonBufferEj+0x2ac>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x2ac
08ac6e7d +0x1f3:  sub    $0x4,%esp
08ac6e80 +0x1f6:  mov    -0x7c(%ebp),%eax
08ac6e83 +0x1f9:  mov    %eax,-0x70(%ebp)
08ac6e86 +0x1fc:  jmp    08ac73e7 <+0x75d>
08ac6e8b +0x201:  lea    -0x70(%ebp),%eax
08ac6e8e +0x204:  mov    %eax,(%esp)
08ac6e91 +0x207:  call   08ac7a24 <_ZN16IPackFileProcess15getCommonBufferEj+0x2e6>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x2e6
08ac6e96 +0x20c:  mov    0x10(%eax),%eax
08ac6e99 +0x20f:  cmp    -0x48(%ebp),%eax
08ac6e9c +0x212:  seta   %al
08ac6e9f +0x215:  test   %al,%al
08ac6ea1 +0x217:  je     08ac6f0c <+0x282>
08ac6ea3 +0x219:  cmpl   $0x0,-0x44(%ebp)
08ac6ea7 +0x21d:  je     08ac6ec1 <+0x237>
08ac6ea9 +0x21f:  cmpl   $0x0,-0x44(%ebp)
08ac6ead +0x223:  je     08ac6eba <+0x230>
08ac6eaf +0x225:  mov    -0x44(%ebp),%eax
08ac6eb2 +0x228:  mov    %eax,(%esp)
08ac6eb5 +0x22b:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
08ac6eba +0x230:  movl   $0x0,-0x44(%ebp)
08ac6ec1 +0x237:  cmpl   $0x0,-0x40(%ebp)
08ac6ec5 +0x23b:  je     08ac6edf <+0x255>
08ac6ec7 +0x23d:  cmpl   $0x0,-0x40(%ebp)
08ac6ecb +0x241:  je     08ac6ed8 <+0x24e>
08ac6ecd +0x243:  mov    -0x40(%ebp),%eax
08ac6ed0 +0x246:  mov    %eax,(%esp)
08ac6ed3 +0x249:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
08ac6ed8 +0x24e:  movl   $0x0,-0x40(%ebp)
08ac6edf +0x255:  lea    -0x70(%ebp),%eax
08ac6ee2 +0x258:  mov    %eax,(%esp)
08ac6ee5 +0x25b:  call   08ac7a24 <_ZN16IPackFileProcess15getCommonBufferEj+0x2e6>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x2e6
08ac6eea +0x260:  mov    0x10(%eax),%eax
08ac6eed +0x263:  mov    %eax,-0x48(%ebp)
08ac6ef0 +0x266:  mov    -0x48(%ebp),%eax
08ac6ef3 +0x269:  mov    %eax,(%esp)
08ac6ef6 +0x26c:  call   08722dc0 <_Znaj>  ; operator new[](unsigned int)
08ac6efb +0x271:  mov    %eax,-0x44(%ebp)
08ac6efe +0x274:  mov    -0x48(%ebp),%eax
08ac6f01 +0x277:  mov    %eax,(%esp)
08ac6f04 +0x27a:  call   08722dc0 <_Znaj>  ; operator new[](unsigned int)
08ac6f09 +0x27f:  mov    %eax,-0x40(%ebp)
08ac6f0c +0x282:  mov    -0x44(%ebp),%eax
08ac6f0f +0x285:  movb   $0x0,(%eax)
08ac6f12 +0x288:  mov    -0x40(%ebp),%eax
08ac6f15 +0x28b:  movb   $0x0,(%eax)
08ac6f18 +0x28e:  lea    -0x6c(%ebp),%esi
08ac6f1b +0x291:  lea    -0x70(%ebp),%eax
08ac6f1e +0x294:  mov    %eax,(%esp)
08ac6f21 +0x297:  call   08ac7a24 <_ZN16IPackFileProcess15getCommonBufferEj+0x2e6>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x2e6
08ac6f26 +0x29c:  mov    (%eax),%ebx
08ac6f28 +0x29e:  lea    -0x70(%ebp),%eax
08ac6f2b +0x2a1:  mov    %eax,(%esp)
08ac6f2e +0x2a4:  call   08ac7a24 <_ZN16IPackFileProcess15getCommonBufferEj+0x2e6>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x2e6
08ac6f33 +0x2a9:  lea    0x4(%eax),%edx
08ac6f36 +0x2ac:  mov    %esi,0x14(%esp)
08ac6f3a +0x2b0:  mov    -0x48(%ebp),%eax
08ac6f3d +0x2b3:  mov    %eax,0x10(%esp)
08ac6f41 +0x2b7:  mov    -0x40(%ebp),%eax
08ac6f44 +0x2ba:  mov    %eax,0xc(%esp)
08ac6f48 +0x2be:  mov    %ebx,0x8(%esp)
08ac6f4c +0x2c2:  mov    0x8(%ebp),%eax
08ac6f4f +0x2c5:  mov    %eax,0x4(%esp)
08ac6f53 +0x2c9:  mov    %edx,(%esp)
08ac6f56 +0x2cc:  call   08ac3eac <_ZN10IndexEntry11get_contentEP7PackSetmPhjPj>  ; IndexEntry::get_content(PackSet*, unsigned long, unsigned char*, unsigned int, unsigned int*)
08ac6f5b +0x2d1:  cmp    $0x1,%eax
08ac6f5e +0x2d4:  sete   %al
08ac6f61 +0x2d7:  test   %al,%al
08ac6f63 +0x2d9:  je     08ac6fcc <+0x342>
08ac6f65 +0x2db:  lea    -0x70(%ebp),%eax
08ac6f68 +0x2de:  mov    %eax,(%esp)
08ac6f6b +0x2e1:  call   08ac7a24 <_ZN16IPackFileProcess15getCommonBufferEj+0x2e6>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x2e6
08ac6f70 +0x2e6:  add    $0x8,%eax
08ac6f73 +0x2e9:  mov    %eax,(%esp)
08ac6f76 +0x2ec:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08ac6f7b +0x2f1:  mov    &stdout,%edx
08ac6f81 +0x2f7:  mov    %eax,0x8(%esp)
08ac6f85 +0x2fb:  movl   $"get content. %s",0x4(%esp)
08ac6f8d +0x303:  mov    %edx,(%esp)
08ac6f90 +0x306:  call   0807da90 <_init+0x388>
08ac6f95 +0x30b:  mov    &stdout,%eax
08ac6f9a +0x310:  movl   $&_ZZN7PackSet6verifyEvE12__FUNCTION__,0x10(%esp)
08ac6fa2 +0x318:  movl   $0x5e0,0xc(%esp)
08ac6faa +0x320:  movl   $"../../Include/FilePack/Pack.cpp",0x8(%esp)
08ac6fb2 +0x328:  movl   $"%s(%d) - %s\n",0x4(%esp)
08ac6fba +0x330:  mov    %eax,(%esp)
08ac6fbd +0x333:  call   0807da90 <_init+0x388>
08ac6fc2 +0x338:  mov    $0x1,%eax
08ac6fc7 +0x33d:  jmp    08ac75f2 <+0x968>
08ac6fcc +0x342:  lea    -0x70(%ebp),%eax
08ac6fcf +0x345:  mov    %eax,(%esp)
08ac6fd2 +0x348:  call   08ac7a24 <_ZN16IPackFileProcess15getCommonBufferEj+0x2e6>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x2e6
08ac6fd7 +0x34d:  add    $0x8,%eax
08ac6fda +0x350:  mov    %eax,(%esp)
08ac6fdd +0x353:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08ac6fe2 +0x358:  movl   $"rb",0x4(%esp)
08ac6fea +0x360:  mov    %eax,(%esp)
08ac6fed +0x363:  call   0807e770 <_init+0x1068>
08ac6ff2 +0x368:  mov    %eax,-0x1c(%ebp)
08ac6ff5 +0x36b:  cmpl   $0x0,-0x1c(%ebp)
08ac6ff9 +0x36f:  jne    08ac7062 <+0x3d8>
08ac6ffb +0x371:  lea    -0x70(%ebp),%eax
08ac6ffe +0x374:  mov    %eax,(%esp)
08ac7001 +0x377:  call   08ac7a24 <_ZN16IPackFileProcess15getCommonBufferEj+0x2e6>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x2e6
08ac7006 +0x37c:  add    $0x8,%eax
08ac7009 +0x37f:  mov    %eax,(%esp)
08ac700c +0x382:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08ac7011 +0x387:  mov    &stdout,%edx
08ac7017 +0x38d:  mov    %eax,0x8(%esp)
08ac701b +0x391:  movl   $"fopen failed. %s",0x4(%esp)
08ac7023 +0x399:  mov    %edx,(%esp)
08ac7026 +0x39c:  call   0807da90 <_init+0x388>
08ac702b +0x3a1:  mov    &stdout,%eax
08ac7030 +0x3a6:  movl   $&_ZZN7PackSet6verifyEvE12__FUNCTION__,0x10(%esp)
08ac7038 +0x3ae:  movl   $0x5e7,0xc(%esp)
08ac7040 +0x3b6:  movl   $"../../Include/FilePack/Pack.cpp",0x8(%esp)
08ac7048 +0x3be:  movl   $"%s(%d) - %s\n",0x4(%esp)
08ac7050 +0x3c6:  mov    %eax,(%esp)
08ac7053 +0x3c9:  call   0807da90 <_init+0x388>
08ac7058 +0x3ce:  mov    $0x1,%eax
08ac705d +0x3d3:  jmp    08ac75f2 <+0x968>
08ac7062 +0x3d8:  movl   $0x2,0x8(%esp)
08ac706a +0x3e0:  movl   $0x0,0x4(%esp)
08ac7072 +0x3e8:  mov    -0x1c(%ebp),%eax
08ac7075 +0x3eb:  mov    %eax,(%esp)
08ac7078 +0x3ee:  call   0807e0b0 <_init+0x9a8>
08ac707d +0x3f3:  mov    -0x1c(%ebp),%eax
08ac7080 +0x3f6:  mov    %eax,(%esp)
08ac7083 +0x3f9:  call   0807d9d0 <_init+0x2c8>
08ac7088 +0x3fe:  mov    %eax,-0x3c(%ebp)
08ac708b +0x401:  movl   $0x0,0x8(%esp)
08ac7093 +0x409:  movl   $0x0,0x4(%esp)
08ac709b +0x411:  mov    -0x1c(%ebp),%eax
08ac709e +0x414:  mov    %eax,(%esp)
08ac70a1 +0x417:  call   0807e0b0 <_init+0x9a8>
08ac70a6 +0x41c:  mov    -0x3c(%ebp),%eax
08ac70a9 +0x41f:  mov    -0x1c(%ebp),%edx
08ac70ac +0x422:  mov    %edx,0xc(%esp)
08ac70b0 +0x426:  movl   $0x1,0x8(%esp)
08ac70b8 +0x42e:  mov    %eax,0x4(%esp)
08ac70bc +0x432:  mov    -0x44(%ebp),%eax
08ac70bf +0x435:  mov    %eax,(%esp)
08ac70c2 +0x438:  call   0807dd50 <_init+0x648>
08ac70c7 +0x43d:  mov    -0x1c(%ebp),%eax
08ac70ca +0x440:  mov    %eax,(%esp)
08ac70cd +0x443:  call   0807dea0 <_init+0x798>
08ac70d2 +0x448:  mov    -0x6c(%ebp),%eax
08ac70d5 +0x44b:  cmp    %eax,-0x3c(%ebp)
08ac70d8 +0x44e:  je     08ac7141 <+0x4b7>
08ac70da +0x450:  lea    -0x70(%ebp),%eax
08ac70dd +0x453:  mov    %eax,(%esp)
08ac70e0 +0x456:  call   08ac7a24 <_ZN16IPackFileProcess15getCommonBufferEj+0x2e6>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x2e6
08ac70e5 +0x45b:  add    $0x8,%eax
08ac70e8 +0x45e:  mov    %eax,(%esp)
08ac70eb +0x461:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08ac70f0 +0x466:  mov    &stdout,%edx
08ac70f6 +0x46c:  mov    %eax,0x8(%esp)
08ac70fa +0x470:  movl   $"size is different. %s",0x4(%esp)
08ac7102 +0x478:  mov    %edx,(%esp)
08ac7105 +0x47b:  call   0807da90 <_init+0x388>
08ac710a +0x480:  mov    &stdout,%eax
08ac710f +0x485:  movl   $&_ZZN7PackSet6verifyEvE12__FUNCTION__,0x10(%esp)
08ac7117 +0x48d:  movl   $0x5f4,0xc(%esp)
08ac711f +0x495:  movl   $"../../Include/FilePack/Pack.cpp",0x8(%esp)
08ac7127 +0x49d:  movl   $"%s(%d) - %s\n",0x4(%esp)
08ac712f +0x4a5:  mov    %eax,(%esp)
08ac7132 +0x4a8:  call   0807da90 <_init+0x388>
08ac7137 +0x4ad:  mov    $0x1,%eax
08ac713c +0x4b2:  jmp    08ac75f2 <+0x968>
08ac7141 +0x4b7:  mov    -0x6c(%ebp),%eax
08ac7144 +0x4ba:  mov    %eax,0x8(%esp)
08ac7148 +0x4be:  mov    -0x40(%ebp),%eax
08ac714b +0x4c1:  mov    %eax,0x4(%esp)
08ac714f +0x4c5:  mov    -0x44(%ebp),%eax
08ac7152 +0x4c8:  mov    %eax,(%esp)
08ac7155 +0x4cb:  call   0807dc90 <_init+0x588>
08ac715a +0x4d0:  test   %eax,%eax
08ac715c +0x4d2:  je     08ac71c5 <+0x53b>
08ac715e +0x4d4:  lea    -0x70(%ebp),%eax
08ac7161 +0x4d7:  mov    %eax,(%esp)
08ac7164 +0x4da:  call   08ac7a24 <_ZN16IPackFileProcess15getCommonBufferEj+0x2e6>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x2e6
08ac7169 +0x4df:  add    $0x8,%eax
08ac716c +0x4e2:  mov    %eax,(%esp)
08ac716f +0x4e5:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08ac7174 +0x4ea:  mov    &stdout,%edx
08ac717a +0x4f0:  mov    %eax,0x8(%esp)
08ac717e +0x4f4:  movl   $"contents is different. %s",0x4(%esp)
08ac7186 +0x4fc:  mov    %edx,(%esp)
08ac7189 +0x4ff:  call   0807da90 <_init+0x388>
08ac718e +0x504:  mov    &stdout,%eax
08ac7193 +0x509:  movl   $&_ZZN7PackSet6verifyEvE12__FUNCTION__,0x10(%esp)
08ac719b +0x511:  movl   $0x5fa,0xc(%esp)
08ac71a3 +0x519:  movl   $"../../Include/FilePack/Pack.cpp",0x8(%esp)
08ac71ab +0x521:  movl   $"%s(%d) - %s\n",0x4(%esp)
08ac71b3 +0x529:  mov    %eax,(%esp)
08ac71b6 +0x52c:  call   0807da90 <_init+0x388>
08ac71bb +0x531:  mov    $0x1,%eax
08ac71c0 +0x536:  jmp    08ac75f2 <+0x968>
08ac71c5 +0x53b:  lea    -0x70(%ebp),%eax
08ac71c8 +0x53e:  mov    %eax,(%esp)
08ac71cb +0x541:  call   08ac7a24 <_ZN16IPackFileProcess15getCommonBufferEj+0x2e6>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x2e6
08ac71d0 +0x546:  mov    0xc(%eax),%eax
08ac71d3 +0x549:  add    %eax,-0x30(%ebp)
08ac71d6 +0x54c:  addl   $0x1,-0x38(%ebp)
08ac71da +0x550:  lea    -0x58(%ebp),%eax
08ac71dd +0x553:  mov    %eax,(%esp)
08ac71e0 +0x556:  call   08ade844 <_ZN4Tick3nowEv>  ; Tick::now()
08ac71e5 +0x55b:  sub    $0x4,%esp
08ac71e8 +0x55e:  mov    -0x78(%ebp),%eax
08ac71eb +0x561:  mov    %eax,0x4(%esp)
08ac71ef +0x565:  lea    -0x58(%ebp),%eax
08ac71f2 +0x568:  mov    %eax,(%esp)
08ac71f5 +0x56b:  call   08ade97a <_ZNK4TickmiES_>  ; Tick::operator-(Tick) const
08ac71fa +0x570:  cmp    $0x3e8,%eax
08ac71ff +0x575:  setg   %al
08ac7202 +0x578:  test   %al,%al
08ac7204 +0x57a:  je     08ac73dc <+0x752>
08ac720a +0x580:  lea    -0x54(%ebp),%eax
08ac720d +0x583:  mov    %eax,(%esp)
08ac7210 +0x586:  call   08ade844 <_ZN4Tick3nowEv>  ; Tick::now()
08ac7215 +0x58b:  sub    $0x4,%esp
08ac7218 +0x58e:  mov    -0x54(%ebp),%eax
08ac721b +0x591:  mov    %eax,0x4(%esp)
08ac721f +0x595:  lea    -0x78(%ebp),%eax
08ac7222 +0x598:  mov    %eax,(%esp)
08ac7225 +0x59b:  call   08ade8e0 <_ZN4TickaSES_>  ; Tick::operator=(Tick)
08ac722a +0x5a0:  lea    -0x50(%ebp),%eax
08ac722d +0x5a3:  mov    %eax,(%esp)
08ac7230 +0x5a6:  call   08ade844 <_ZN4Tick3nowEv>  ; Tick::now()
08ac7235 +0x5ab:  sub    $0x4,%esp
08ac7238 +0x5ae:  mov    -0x74(%ebp),%eax
08ac723b +0x5b1:  mov    %eax,0x4(%esp)
08ac723f +0x5b5:  lea    -0x50(%ebp),%eax
08ac7242 +0x5b8:  mov    %eax,(%esp)
08ac7245 +0x5bb:  call   08ade97a <_ZNK4TickmiES_>  ; Tick::operator-(Tick) const
08ac724a +0x5c0:  mov    %eax,-0x28(%ebp)
08ac724d +0x5c3:  fildl  -0x28(%ebp)
08ac7250 +0x5c6:  mov    -0x30(%ebp),%eax
08ac7253 +0x5c9:  mov    $0x0,%edx
08ac7258 +0x5ce:  mov    %eax,-0x88(%ebp)
08ac725e +0x5d4:  mov    %edx,-0x84(%ebp)
08ac7264 +0x5da:  fildll -0x88(%ebp)
08ac726a +0x5e0:  fdivrp %st,%st(1)
08ac726c +0x5e2:  fstps  -0x24(%ebp)
08ac726f +0x5e5:  mov    -0x30(%ebp),%eax
08ac7272 +0x5e8:  mov    -0x2c(%ebp),%edx
08ac7275 +0x5eb:  mov    %edx,%ecx
08ac7277 +0x5ed:  sub    %eax,%ecx
08ac7279 +0x5ef:  mov    %ecx,%eax
08ac727b +0x5f1:  mov    $0x0,%edx
08ac7280 +0x5f6:  mov    %eax,-0x88(%ebp)
08ac7286 +0x5fc:  mov    %edx,-0x84(%ebp)
08ac728c +0x602:  fildll -0x88(%ebp)
08ac7292 +0x608:  fmuls  -0x24(%ebp)
08ac7295 +0x60b:  fnstcw -0x8a(%ebp)
08ac729b +0x611:  movzwl -0x8a(%ebp),%eax
08ac72a2 +0x618:  mov    $0xc,%ah
08ac72a4 +0x61a:  mov    %ax,-0x8c(%ebp)
08ac72ab +0x621:  fldcw  -0x8c(%ebp)
08ac72b1 +0x627:  fistpl -0x20(%ebp)
08ac72b4 +0x62a:  fldcw  -0x8a(%ebp)
08ac72ba +0x630:  mov    -0x20(%ebp),%ebx
08ac72bd +0x633:  mov    $0x45e7b273,%edx
08ac72c2 +0x638:  mov    %ebx,%eax
08ac72c4 +0x63a:  imul   %edx
08ac72c6 +0x63c:  sar    $0xe,%edx
08ac72c9 +0x63f:  mov    %ebx,%eax
08ac72cb +0x641:  sar    $0x1f,%eax
08ac72ce +0x644:  mov    %edx,%ecx
08ac72d0 +0x646:  sub    %eax,%ecx
08ac72d2 +0x648:  imul   $0xea60,%ecx,%eax
08ac72d8 +0x64e:  mov    %ebx,%ecx
08ac72da +0x650:  sub    %eax,%ecx
08ac72dc +0x652:  mov    $0x10624dd3,%edx
08ac72e1 +0x657:  mov    %ecx,%eax
08ac72e3 +0x659:  imul   %edx
08ac72e5 +0x65b:  sar    $0x6,%edx
08ac72e8 +0x65e:  mov    %ecx,%eax
08ac72ea +0x660:  sar    $0x1f,%eax
08ac72ed +0x663:  mov    %edx,%edi
08ac72ef +0x665:  sub    %eax,%edi
08ac72f1 +0x667:  mov    -0x20(%ebp),%ecx
08ac72f4 +0x66a:  mov    $0x45e7b273,%edx
08ac72f9 +0x66f:  mov    %ecx,%eax
08ac72fb +0x671:  imul   %edx
08ac72fd +0x673:  sar    $0xe,%edx
08ac7300 +0x676:  mov    %ecx,%eax
08ac7302 +0x678:  sar    $0x1f,%eax
08ac7305 +0x67b:  mov    %edx,%esi
08ac7307 +0x67d:  sub    %eax,%esi
08ac7309 +0x67f:  mov    -0x28(%ebp),%ebx
08ac730c +0x682:  mov    $0x45e7b273,%edx
08ac7311 +0x687:  mov    %ebx,%eax
08ac7313 +0x689:  imul   %edx
08ac7315 +0x68b:  sar    $0xe,%edx
08ac7318 +0x68e:  mov    %ebx,%eax
08ac731a +0x690:  sar    $0x1f,%eax
08ac731d +0x693:  mov    %edx,%ecx
08ac731f +0x695:  sub    %eax,%ecx
08ac7321 +0x697:  imul   $0xea60,%ecx,%eax
08ac7327 +0x69d:  mov    %ebx,%ecx
08ac7329 +0x69f:  sub    %eax,%ecx
08ac732b +0x6a1:  mov    $0x10624dd3,%edx
08ac7330 +0x6a6:  mov    %ecx,%eax
08ac7332 +0x6a8:  imul   %edx
08ac7334 +0x6aa:  sar    $0x6,%edx
08ac7337 +0x6ad:  mov    %ecx,%eax
08ac7339 +0x6af:  sar    $0x1f,%eax
08ac733c +0x6b2:  mov    %edx,%ebx
08ac733e +0x6b4:  sub    %eax,%ebx
08ac7340 +0x6b6:  mov    -0x28(%ebp),%ecx
08ac7343 +0x6b9:  mov    $0x45e7b273,%edx
08ac7348 +0x6be:  mov    %ecx,%eax
08ac734a +0x6c0:  imul   %edx
08ac734c +0x6c2:  sar    $0xe,%edx
08ac734f +0x6c5:  mov    %ecx,%eax
08ac7351 +0x6c7:  sar    $0x1f,%eax
08ac7354 +0x6ca:  mov    %edx,%ecx
08ac7356 +0x6cc:  sub    %eax,%ecx
08ac7358 +0x6ce:  mov    -0x30(%ebp),%eax
08ac735b +0x6d1:  mov    $0x0,%edx
08ac7360 +0x6d6:  mov    %eax,-0x88(%ebp)
08ac7366 +0x6dc:  mov    %edx,-0x84(%ebp)
08ac736c +0x6e2:  fildll -0x88(%ebp)
08ac7372 +0x6e8:  mov    -0x2c(%ebp),%eax
08ac7375 +0x6eb:  mov    $0x0,%edx
08ac737a +0x6f0:  mov    %eax,-0x88(%ebp)
08ac7380 +0x6f6:  mov    %edx,-0x84(%ebp)
08ac7386 +0x6fc:  fildll -0x88(%ebp)
08ac738c +0x702:  fdivrp %st,%st(1)
08ac738e +0x704:  flds   ""
08ac7394 +0x70a:  fmulp  %st,%st(1)
08ac7396 +0x70c:  fldcw  -0x8c(%ebp)
08ac739c +0x712:  fistpl -0x90(%ebp)
08ac73a2 +0x718:  fldcw  -0x8a(%ebp)
08ac73a8 +0x71e:  mov    -0x90(%ebp),%eax
08ac73ae +0x724:  mov    -0x34(%ebp),%edx
08ac73b1 +0x727:  mov    %edx,0x1c(%esp)
08ac73b5 +0x72b:  mov    -0x38(%ebp),%edx
08ac73b8 +0x72e:  mov    %edx,0x18(%esp)
08ac73bc +0x732:  mov    %edi,0x14(%esp)
08ac73c0 +0x736:  mov    %esi,0x10(%esp)
08ac73c4 +0x73a:  mov    %ebx,0xc(%esp)
08ac73c8 +0x73e:  mov    %ecx,0x8(%esp)
08ac73cc +0x742:  mov    %eax,0x4(%esp)
08ac73d0 +0x746:  movl   $"%3d%% (%2dmin %2dsec)/(%2dmin %2dsec) (%d/%d)    \n",(%esp)
08ac73d7 +0x74d:  call   0807db60 <_init+0x458>
08ac73dc +0x752:  lea    -0x70(%ebp),%eax
08ac73df +0x755:  mov    %eax,(%esp)
08ac73e2 +0x758:  call   08ac7a0e <_ZN16IPackFileProcess15getCommonBufferEj+0x2d0>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x2d0
08ac73e7 +0x75d:  mov    0x8(%ebp),%eax
08ac73ea +0x760:  lea    0x10(%eax),%edx
08ac73ed +0x763:  lea    -0x5c(%ebp),%eax
08ac73f0 +0x766:  mov    %edx,0x4(%esp)
08ac73f4 +0x76a:  mov    %eax,(%esp)
08ac73f7 +0x76d:  call   08ac798a <_ZN16IPackFileProcess15getCommonBufferEj+0x24c>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x24c
08ac73fc +0x772:  sub    $0x4,%esp
08ac73ff +0x775:  lea    -0x5c(%ebp),%eax
08ac7402 +0x778:  mov    %eax,0x4(%esp)
08ac7406 +0x77c:  lea    -0x70(%ebp),%eax
08ac7409 +0x77f:  mov    %eax,(%esp)
08ac740c +0x782:  call   08ac79b0 <_ZN16IPackFileProcess15getCommonBufferEj+0x272>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x272
08ac7411 +0x787:  test   %al,%al
08ac7413 +0x789:  jne    08ac6e8b <+0x201>
08ac7419 +0x78f:  lea    -0x4c(%ebp),%eax
08ac741c +0x792:  mov    %eax,(%esp)
08ac741f +0x795:  call   08ade844 <_ZN4Tick3nowEv>  ; Tick::now()
08ac7424 +0x79a:  sub    $0x4,%esp
08ac7427 +0x79d:  mov    -0x74(%ebp),%eax
08ac742a +0x7a0:  mov    %eax,0x4(%esp)
08ac742e +0x7a4:  lea    -0x4c(%ebp),%eax
08ac7431 +0x7a7:  mov    %eax,(%esp)
08ac7434 +0x7aa:  call   08ade97a <_ZNK4TickmiES_>  ; Tick::operator-(Tick) const
08ac7439 +0x7af:  mov    %eax,-0x28(%ebp)
08ac743c +0x7b2:  fildl  -0x28(%ebp)
08ac743f +0x7b5:  mov    -0x30(%ebp),%eax
08ac7442 +0x7b8:  mov    $0x0,%edx
08ac7447 +0x7bd:  mov    %eax,-0x88(%ebp)
08ac744d +0x7c3:  mov    %edx,-0x84(%ebp)
08ac7453 +0x7c9:  fildll -0x88(%ebp)
08ac7459 +0x7cf:  fdivrp %st,%st(1)
08ac745b +0x7d1:  fstps  -0x24(%ebp)
08ac745e +0x7d4:  mov    -0x30(%ebp),%eax
08ac7461 +0x7d7:  mov    -0x2c(%ebp),%edx
08ac7464 +0x7da:  mov    %edx,%ecx
08ac7466 +0x7dc:  sub    %eax,%ecx
08ac7468 +0x7de:  mov    %ecx,%eax
08ac746a +0x7e0:  mov    $0x0,%edx
08ac746f +0x7e5:  mov    %eax,-0x88(%ebp)
08ac7475 +0x7eb:  mov    %edx,-0x84(%ebp)
08ac747b +0x7f1:  fildll -0x88(%ebp)
08ac7481 +0x7f7:  fmuls  -0x24(%ebp)
08ac7484 +0x7fa:  fnstcw -0x8a(%ebp)
08ac748a +0x800:  movzwl -0x8a(%ebp),%eax
08ac7491 +0x807:  mov    $0xc,%ah
08ac7493 +0x809:  mov    %ax,-0x8c(%ebp)
08ac749a +0x810:  fldcw  -0x8c(%ebp)
08ac74a0 +0x816:  fistpl -0x20(%ebp)
08ac74a3 +0x819:  fldcw  -0x8a(%ebp)
08ac74a9 +0x81f:  mov    -0x20(%ebp),%ebx
08ac74ac +0x822:  mov    $0x45e7b273,%edx
08ac74b1 +0x827:  mov    %ebx,%eax
08ac74b3 +0x829:  imul   %edx
08ac74b5 +0x82b:  sar    $0xe,%edx
08ac74b8 +0x82e:  mov    %ebx,%eax
08ac74ba +0x830:  sar    $0x1f,%eax
08ac74bd +0x833:  mov    %edx,%ecx
08ac74bf +0x835:  sub    %eax,%ecx
08ac74c1 +0x837:  imul   $0xea60,%ecx,%eax
08ac74c7 +0x83d:  mov    %ebx,%ecx
08ac74c9 +0x83f:  sub    %eax,%ecx
08ac74cb +0x841:  mov    $0x10624dd3,%edx
08ac74d0 +0x846:  mov    %ecx,%eax
08ac74d2 +0x848:  imul   %edx
08ac74d4 +0x84a:  sar    $0x6,%edx
08ac74d7 +0x84d:  mov    %ecx,%eax
08ac74d9 +0x84f:  sar    $0x1f,%eax
08ac74dc +0x852:  mov    %edx,%edi
08ac74de +0x854:  sub    %eax,%edi
08ac74e0 +0x856:  mov    -0x20(%ebp),%ecx
08ac74e3 +0x859:  mov    $0x45e7b273,%edx
08ac74e8 +0x85e:  mov    %ecx,%eax
08ac74ea +0x860:  imul   %edx
08ac74ec +0x862:  sar    $0xe,%edx
08ac74ef +0x865:  mov    %ecx,%eax
08ac74f1 +0x867:  sar    $0x1f,%eax
08ac74f4 +0x86a:  mov    %edx,%esi
08ac74f6 +0x86c:  sub    %eax,%esi
08ac74f8 +0x86e:  mov    -0x28(%ebp),%ebx
08ac74fb +0x871:  mov    $0x45e7b273,%edx
08ac7500 +0x876:  mov    %ebx,%eax
08ac7502 +0x878:  imul   %edx
08ac7504 +0x87a:  sar    $0xe,%edx
08ac7507 +0x87d:  mov    %ebx,%eax
08ac7509 +0x87f:  sar    $0x1f,%eax
08ac750c +0x882:  mov    %edx,%ecx
08ac750e +0x884:  sub    %eax,%ecx
08ac7510 +0x886:  imul   $0xea60,%ecx,%eax
08ac7516 +0x88c:  mov    %ebx,%ecx
08ac7518 +0x88e:  sub    %eax,%ecx
08ac751a +0x890:  mov    $0x10624dd3,%edx
08ac751f +0x895:  mov    %ecx,%eax
08ac7521 +0x897:  imul   %edx
08ac7523 +0x899:  sar    $0x6,%edx
08ac7526 +0x89c:  mov    %ecx,%eax
08ac7528 +0x89e:  sar    $0x1f,%eax
08ac752b +0x8a1:  mov    %edx,%ebx
08ac752d +0x8a3:  sub    %eax,%ebx
08ac752f +0x8a5:  mov    -0x28(%ebp),%ecx
08ac7532 +0x8a8:  mov    $0x45e7b273,%edx
08ac7537 +0x8ad:  mov    %ecx,%eax
08ac7539 +0x8af:  imul   %edx
08ac753b +0x8b1:  sar    $0xe,%edx
08ac753e +0x8b4:  mov    %ecx,%eax
08ac7540 +0x8b6:  sar    $0x1f,%eax
08ac7543 +0x8b9:  mov    %edx,%ecx
08ac7545 +0x8bb:  sub    %eax,%ecx
08ac7547 +0x8bd:  mov    -0x30(%ebp),%eax
08ac754a +0x8c0:  mov    $0x0,%edx
08ac754f +0x8c5:  mov    %eax,-0x88(%ebp)
08ac7555 +0x8cb:  mov    %edx,-0x84(%ebp)
08ac755b +0x8d1:  fildll -0x88(%ebp)
08ac7561 +0x8d7:  mov    -0x2c(%ebp),%eax
08ac7564 +0x8da:  mov    $0x0,%edx
08ac7569 +0x8df:  mov    %eax,-0x88(%ebp)
08ac756f +0x8e5:  mov    %edx,-0x84(%ebp)
08ac7575 +0x8eb:  fildll -0x88(%ebp)
08ac757b +0x8f1:  fdivrp %st,%st(1)
08ac757d +0x8f3:  flds   ""
08ac7583 +0x8f9:  fmulp  %st,%st(1)
08ac7585 +0x8fb:  fldcw  -0x8c(%ebp)
08ac758b +0x901:  fistpl -0x90(%ebp)
08ac7591 +0x907:  fldcw  -0x8a(%ebp)
08ac7597 +0x90d:  mov    -0x90(%ebp),%eax
08ac759d +0x913:  mov    -0x34(%ebp),%edx
08ac75a0 +0x916:  mov    %edx,0x1c(%esp)
08ac75a4 +0x91a:  mov    -0x38(%ebp),%edx
08ac75a7 +0x91d:  mov    %edx,0x18(%esp)
08ac75ab +0x921:  mov    %edi,0x14(%esp)
08ac75af +0x925:  mov    %esi,0x10(%esp)
08ac75b3 +0x929:  mov    %ebx,0xc(%esp)
08ac75b7 +0x92d:  mov    %ecx,0x8(%esp)
08ac75bb +0x931:  mov    %eax,0x4(%esp)
08ac75bf +0x935:  movl   $"%3d%% (%2dmin %2dsec)/(%2dmin %2dsec) (%d/%d)    \n",(%esp)
08ac75c6 +0x93c:  call   0807db60 <_init+0x458>
08ac75cb +0x941:  cmpl   $0x0,-0x44(%ebp)
08ac75cf +0x945:  je     08ac75dc <+0x952>
08ac75d1 +0x947:  mov    -0x44(%ebp),%eax
08ac75d4 +0x94a:  mov    %eax,(%esp)
08ac75d7 +0x94d:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
08ac75dc +0x952:  cmpl   $0x0,-0x40(%ebp)
08ac75e0 +0x956:  je     08ac75ed <+0x963>
08ac75e2 +0x958:  mov    -0x40(%ebp),%eax
08ac75e5 +0x95b:  mov    %eax,(%esp)
08ac75e8 +0x95e:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
08ac75ed +0x963:  mov    $0x0,%eax
08ac75f2 +0x968:  lea    -0xc(%ebp),%esp
08ac75f5 +0x96b:  add    $0x0,%esp
08ac75f8 +0x96e:  pop    %ebx
08ac75f9 +0x96f:  pop    %esi
08ac75fa +0x970:  pop    %edi
08ac75fb +0x971:  pop    %ebp
08ac75fc +0x972:  ret
08ac75fd +0x973:  nop
```

## 反编译 C

```c
// PackSet::verify @ 0x8ac6c8a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DWARF original prototype: pack_ret_t verify(PackSet * this) */

pack_ret_t __thiscall PackSet::verify(PackSet *this)

{
  hash_t code;
  bool bVar1;
  pack_ret_t pVar2;
  pair<long_unsigned_int,_IndexEntry> *ppVar3;
  undefined4 uVar4;
  char *__filename;
  int iVar5;
  int32 iVar6;
  vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
  local_80;
  __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
  local_74;
  uint local_70;
  vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
  local_6c;
  vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
  local_60;
  Tick local_54;
  Tick local_50;
  uint local_4c;
  undefined1 *local_48;
  uchar *local_44;
  size_t local_40;
  int local_3c;
  size_t local_38;
  uint local_34;
  uint local_30;
  int32 local_2c;
  float local_28;
  int local_24;
  FILE *local_20;
  
                    /* Unresolved local var: uint buffer_size@[???]
                       Unresolved local var: uchar * buffer_file@[???]
                       Unresolved local var: uchar * buffer_pack@[???]
                       Unresolved local var: int size_file@[???]
                       Unresolved local var: int size_pack@[???]
                       Unresolved local var: index_vector_it it@[???]
                       Unresolved local var: size_t proc_count@[???]
                       Unresolved local var: size_t total_count@[???]
                       Unresolved local var: size_t proc_size@[???]
                       Unresolved local var: size_t total_size@[???]
                       Unresolved local var: Tick start_time@[???]
                       Unresolved local var: Tick update_time@[???]
                       Unresolved local var: int32 run_time@[???]
                       Unresolved local var: float avg_time@[???]
                       Unresolved local var: int32 remain_time@[???] */
  bVar1 = UsingEncryptedFile(this);
  if (bVar1) {
    pVar2 = verifyEncryptedFile(this);
  }
  else {
    local_4c = 0x500000;
    local_48 = (undefined1 *)0x0;
    local_44 = (uchar *)0x0;
    local_40 = 0;
    local_70 = 0;
    __gnu_cxx::
    __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
    ::__normal_iterator(&local_74);
    bVar1 = is_ready(this);
    if (bVar1) {
      local_48 = operator_new__(local_4c);
      local_44 = operator_new__(local_4c);
      local_3c = 0;
      local_38 = 0;
      local_34 = 0;
      local_30 = 0;
      Tick::Tick((Tick *)&local_80.
                          super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                          ._M_impl._M_end_of_storage);
      Tick::Tick((Tick *)&local_80.
                          super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                          ._M_impl._M_finish);
      local_2c = 0;
      local_28 = 0.0;
      local_24 = 0;
      std::
      vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
      ::begin(&local_80);
      local_74._M_current =
           local_80.
           super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
           ._M_impl._M_start;
      while( true ) {
        std::
        vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
        ::end(&local_6c);
        bVar1 = __gnu_cxx::
                operator!=<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                          (&local_74,
                           (__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                            *)&local_6c);
        if (!bVar1) break;
        ppVar3 = __gnu_cxx::
                 __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                 ::operator->(&local_74);
        local_30 = local_30 + (ppVar3->second).size_;
        __gnu_cxx::
        __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
        ::operator++(&local_74);
      }
      local_38 = std::
                 vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                 ::size(&this->indexes_);
      Tick::now((Tick *)&local_6c.
                         super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                         ._M_impl._M_finish);
      Tick::operator=((Tick *)&local_80.
                               super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                               ._M_impl._M_end_of_storage,
                      (Tick)local_6c.
                            super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                            ._M_impl._M_finish);
      Tick::now((Tick *)&local_6c.
                         super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                         ._M_impl._M_end_of_storage);
      Tick::operator=((Tick *)&local_80.
                               super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                               ._M_impl._M_finish,
                      (Tick)local_6c.
                            super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                            ._M_impl._M_end_of_storage);
      std::
      vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
      ::begin(&local_80);
      local_74._M_current =
           local_80.
           super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
           ._M_impl._M_start;
      while( true ) {
        std::
        vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
        ::end(&local_60);
        bVar1 = __gnu_cxx::
                operator!=<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                          (&local_74,
                           (__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                            *)&local_60);
        if (!bVar1) break;
                    /* Unresolved local var: FILE * fp@[???] */
        ppVar3 = __gnu_cxx::
                 __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                 ::operator->(&local_74);
        if (local_4c < (ppVar3->second).aligned_size_) {
          if (local_48 != (undefined1 *)0x0) {
            if (local_48 != (undefined1 *)0x0) {
              operator_delete__(local_48);
            }
            local_48 = (undefined1 *)0x0;
          }
          if (local_44 != (uchar *)0x0) {
            if (local_44 != (uchar *)0x0) {
              operator_delete__(local_44);
            }
            local_44 = (uchar *)0x0;
          }
          ppVar3 = __gnu_cxx::
                   __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                   ::operator->(&local_74);
          local_4c = (ppVar3->second).aligned_size_;
          local_48 = operator_new__(local_4c);
          local_44 = operator_new__(local_4c);
        }
        *local_48 = 0;
        *local_44 = '\0';
        ppVar3 = __gnu_cxx::
                 __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                 ::operator->(&local_74);
        code = ppVar3->first;
        ppVar3 = __gnu_cxx::
                 __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                 ::operator->(&local_74);
        pVar2 = IndexEntry::get_content(&ppVar3->second,this,code,local_44,local_4c,&local_70);
        if (pVar2 == PACK_ERROR) {
          ppVar3 = __gnu_cxx::
                   __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                   ::operator->(&local_74);
          uVar4 = std::string::c_str((string *)&(ppVar3->second).name_);
          fprintf(stdout,"get content. %s",uVar4);
          fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x5e0,"verify");
          return PACK_ERROR;
        }
        ppVar3 = __gnu_cxx::
                 __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                 ::operator->(&local_74);
        __filename = (char *)std::string::c_str((string *)&(ppVar3->second).name_);
        local_20 = fopen(__filename,"rb");
        if (local_20 == (FILE *)0x0) {
          ppVar3 = __gnu_cxx::
                   __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                   ::operator->(&local_74);
          uVar4 = std::string::c_str((string *)&(ppVar3->second).name_);
          fprintf(stdout,"fopen failed. %s",uVar4);
          fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x5e7,"verify");
          return PACK_ERROR;
        }
        fseek(local_20,0,2);
        local_40 = ftell(local_20);
        fseek(local_20,0,0);
        fread(local_48,local_40,1,local_20);
        fclose(local_20);
        if (local_40 != local_70) {
          ppVar3 = __gnu_cxx::
                   __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                   ::operator->(&local_74);
          uVar4 = std::string::c_str((string *)&(ppVar3->second).name_);
          fprintf(stdout,"size is different. %s",uVar4);
          fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x5f4,"verify");
          return PACK_ERROR;
        }
        iVar5 = memcmp(local_48,local_44,local_70);
        if (iVar5 != 0) {
          ppVar3 = __gnu_cxx::
                   __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                   ::operator->(&local_74);
          uVar4 = std::string::c_str((string *)&(ppVar3->second).name_);
          fprintf(stdout,"contents is different. %s",uVar4);
          fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x5fa,"verify");
          return PACK_ERROR;
        }
        ppVar3 = __gnu_cxx::
                 __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                 ::operator->(&local_74);
        local_34 = local_34 + (ppVar3->second).size_;
        local_3c = local_3c + 1;
        Tick::now((Tick *)&local_60.
                           super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                           ._M_impl._M_finish);
        iVar6 = Tick::operator-((Tick *)&local_60.
                                         super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                                         ._M_impl._M_finish,
                                (Tick)local_80.
                                      super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                                      ._M_impl._M_finish);
        if (1000 < iVar6) {
          Tick::now((Tick *)&local_60.
                             super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                             ._M_impl._M_end_of_storage);
          Tick::operator=((Tick *)&local_80.
                                   super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                                   ._M_impl._M_finish,
                          (Tick)local_60.
                                super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                                ._M_impl._M_end_of_storage);
          Tick::now(&local_54);
          local_2c = Tick::operator-(&local_54,
                                     (Tick)local_80.
                                           super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                                           ._M_impl._M_end_of_storage);
          local_28 = (float)local_2c / (float)local_34;
          local_24 = (int)ROUND((float)(local_30 - local_34) * local_28);
          printf("%3d%% (%2dmin %2dsec)/(%2dmin %2dsec) (%d/%d)    \n",
                 (int)ROUND((longdouble)_DAT_08e2eaec *
                            ((longdouble)local_34 / (longdouble)local_30)),local_2c / 60000,
                 (local_2c % 60000) / 1000,local_24 / 60000,(local_24 % 60000) / 1000,local_3c,
                 local_38);
        }
        __gnu_cxx::
        __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
        ::operator++(&local_74);
      }
      Tick::now(&local_50);
      local_2c = Tick::operator-(&local_50,
                                 (Tick)local_80.
                                       super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                                       ._M_impl._M_end_of_storage);
      local_28 = (float)local_2c / (float)local_34;
      local_24 = (int)ROUND((float)(local_30 - local_34) * local_28);
      printf("%3d%% (%2dmin %2dsec)/(%2dmin %2dsec) (%d/%d)    \n",
             (int)ROUND((longdouble)_DAT_08e2eaec * ((longdouble)local_34 / (longdouble)local_30)),
             local_2c / 60000,(local_2c % 60000) / 1000,local_24 / 60000,(local_24 % 60000) / 1000,
             local_3c,local_38);
      if (local_48 != (undefined1 *)0x0) {
        operator_delete__(local_48);
      }
      if (local_44 != (uchar *)0x0) {
        operator_delete__(local_44);
      }
      pVar2 = PACK_OK;
    }
    else {
      fprintf(stdout,"%s\n","Not yet opened");
      fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x5a5,"verify");
      pVar2 = PACK_ERROR;
    }
  }
  return pVar2;
}
```
