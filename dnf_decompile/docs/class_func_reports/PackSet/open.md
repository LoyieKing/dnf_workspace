# open

`_ZN7PackSet4openEPKcS1_16pack_load_type_t`

`PackSet::open(char const*, char const*, pack_load_type_t)`

| 类 | 地址 |
|---|---|
| `PackSet` | `0x08ac5a52` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ac5a52  _ZN7PackSet4openEPKcS1_16pack_load_type_t
#           PackSet::open(char const*, char const*, pack_load_type_t)
# range [0x08ac5a52, 0x08ac60ef]
08ac5a52 +0x000:  push   %ebp
08ac5a53 +0x001:  mov    %esp,%ebp
08ac5a55 +0x003:  push   %esi
08ac5a56 +0x004:  push   %ebx
08ac5a57 +0x005:  sub    $0x90,%esp
08ac5a5d +0x00b:  mov    0x8(%ebp),%eax
08ac5a60 +0x00e:  mov    %eax,(%esp)
08ac5a63 +0x011:  call   08ac7674 <_ZN7PackSet18UsingEncryptedFileEv>  ; PackSet::UsingEncryptedFile()
08ac5a68 +0x016:  test   %al,%al
08ac5a6a +0x018:  je     08ac5a93 <+0x41>
08ac5a6c +0x01a:  mov    0x14(%ebp),%eax
08ac5a6f +0x01d:  mov    %eax,0xc(%esp)
08ac5a73 +0x021:  mov    0x10(%ebp),%eax
08ac5a76 +0x024:  mov    %eax,0x8(%esp)
08ac5a7a +0x028:  mov    0xc(%ebp),%eax
08ac5a7d +0x02b:  mov    %eax,0x4(%esp)
08ac5a81 +0x02f:  mov    0x8(%ebp),%eax
08ac5a84 +0x032:  mov    %eax,(%esp)
08ac5a87 +0x035:  call   08ac60f0 <_ZN7PackSet17openEncryptedFileEPKcS1_16pack_load_type_t>  ; PackSet::openEncryptedFile(char const*, char const*, pack_load_type_t)
08ac5a8c +0x03a:  mov    %eax,%ebx
08ac5a8e +0x03c:  jmp    08ac60e4 <+0x692>
08ac5a93 +0x041:  lea    -0x50(%ebp),%eax
08ac5a96 +0x044:  mov    %eax,(%esp)
08ac5a99 +0x047:  call   08ac79dc <_ZN16IPackFileProcess15getCommonBufferEj+0x29e>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x29e
08ac5a9e +0x04c:  lea    -0x64(%ebp),%eax
08ac5aa1 +0x04f:  mov    %eax,(%esp)
08ac5aa4 +0x052:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08ac5aa9 +0x057:  mov    0x8(%ebp),%eax
08ac5aac +0x05a:  mov    %eax,(%esp)
08ac5aaf +0x05d:  call   08ac4954 <_ZNK7PackSet8is_readyEv>  ; PackSet::is_ready() const
08ac5ab4 +0x062:  test   %al,%al
08ac5ab6 +0x064:  je     08ac5b0c <+0xba>
08ac5ab8 +0x066:  mov    &stdout,%eax
08ac5abd +0x06b:  movl   $"Already opened",0x8(%esp)
08ac5ac5 +0x073:  movl   $"%s\n",0x4(%esp)
08ac5acd +0x07b:  mov    %eax,(%esp)
08ac5ad0 +0x07e:  call   0807da90 <_init+0x388>
08ac5ad5 +0x083:  mov    &stdout,%eax
08ac5ada +0x088:  movl   $&_ZZN7PackSet4openEPKcS1_16pack_load_type_tE12__FUNCTION__,0x10(%esp)
08ac5ae2 +0x090:  movl   $0x3d8,0xc(%esp)
08ac5aea +0x098:  movl   $"../../Include/FilePack/Pack.cpp",0x8(%esp)
08ac5af2 +0x0a0:  movl   $"%s(%d) - %s\n",0x4(%esp)
08ac5afa +0x0a8:  mov    %eax,(%esp)
08ac5afd +0x0ab:  call   0807da90 <_init+0x388>
08ac5b02 +0x0b0:  mov    $0x1,%ebx
08ac5b07 +0x0b5:  jmp    08ac60d9 <+0x687>
08ac5b0c +0x0ba:  movl   $"rb",0x4(%esp)
08ac5b14 +0x0c2:  mov    0xc(%ebp),%eax
08ac5b17 +0x0c5:  mov    %eax,(%esp)
08ac5b1a +0x0c8:  call   0807e770 <_init+0x1068>
08ac5b1f +0x0cd:  mov    %eax,-0x20(%ebp)
08ac5b22 +0x0d0:  cmpl   $0x0,-0x20(%ebp)
08ac5b26 +0x0d4:  jne    08ac5b7b <+0x129>
08ac5b28 +0x0d6:  mov    &stdout,%eax
08ac5b2d +0x0db:  mov    0xc(%ebp),%edx
08ac5b30 +0x0de:  mov    %edx,0x8(%esp)
08ac5b34 +0x0e2:  movl   $"_tfopen failed. %s",0x4(%esp)
08ac5b3c +0x0ea:  mov    %eax,(%esp)
08ac5b3f +0x0ed:  call   0807da90 <_init+0x388>
08ac5b44 +0x0f2:  mov    &stdout,%eax
08ac5b49 +0x0f7:  movl   $&_ZZN7PackSet4openEPKcS1_16pack_load_type_tE12__FUNCTION__,0x10(%esp)
08ac5b51 +0x0ff:  movl   $0x3e1,0xc(%esp)
08ac5b59 +0x107:  movl   $"../../Include/FilePack/Pack.cpp",0x8(%esp)
08ac5b61 +0x10f:  movl   $"%s(%d) - %s\n",0x4(%esp)
08ac5b69 +0x117:  mov    %eax,(%esp)
08ac5b6c +0x11a:  call   0807da90 <_init+0x388>
08ac5b71 +0x11f:  mov    $0x1,%ebx
08ac5b76 +0x124:  jmp    08ac60d9 <+0x687>
08ac5b7b +0x129:  mov    -0x20(%ebp),%eax
08ac5b7e +0x12c:  mov    %eax,0x4(%esp)
08ac5b82 +0x130:  lea    -0x64(%ebp),%eax
08ac5b85 +0x133:  mov    %eax,(%esp)
08ac5b88 +0x136:  call   08ac3793 <_ZL10_fread_strRSsP8_IO_FILE>  ; _fread_str(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, _IO_FILE*)
08ac5b8d +0x13b:  cmpl   $0x0,0x10(%ebp)
08ac5b91 +0x13f:  je     08ac5c21 <+0x1cf>
08ac5b97 +0x145:  lea    -0x64(%ebp),%eax
08ac5b9a +0x148:  mov    %eax,(%esp)
08ac5b9d +0x14b:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08ac5ba2 +0x150:  mov    0x10(%ebp),%edx
08ac5ba5 +0x153:  mov    %edx,0x4(%esp)
08ac5ba9 +0x157:  mov    %eax,(%esp)
08ac5bac +0x15a:  call   0807e4e0 <_init+0xdd8>
08ac5bb1 +0x15f:  test   %eax,%eax
08ac5bb3 +0x161:  setne  %al
08ac5bb6 +0x164:  test   %al,%al
08ac5bb8 +0x166:  je     08ac5c21 <+0x1cf>
08ac5bba +0x168:  mov    -0x20(%ebp),%eax
08ac5bbd +0x16b:  mov    %eax,(%esp)
08ac5bc0 +0x16e:  call   0807dea0 <_init+0x798>
08ac5bc5 +0x173:  lea    -0x64(%ebp),%eax
08ac5bc8 +0x176:  mov    %eax,(%esp)
08ac5bcb +0x179:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08ac5bd0 +0x17e:  mov    &stdout,%edx
08ac5bd6 +0x184:  mov    %eax,0x8(%esp)
08ac5bda +0x188:  movl   $"tag mismatch. %s",0x4(%esp)
08ac5be2 +0x190:  mov    %edx,(%esp)
08ac5be5 +0x193:  call   0807da90 <_init+0x388>
08ac5bea +0x198:  mov    &stdout,%eax
08ac5bef +0x19d:  movl   $&_ZZN7PackSet4openEPKcS1_16pack_load_type_tE12__FUNCTION__,0x10(%esp)
08ac5bf7 +0x1a5:  movl   $0x3ec,0xc(%esp)
08ac5bff +0x1ad:  movl   $"../../Include/FilePack/Pack.cpp",0x8(%esp)
08ac5c07 +0x1b5:  movl   $"%s(%d) - %s\n",0x4(%esp)
08ac5c0f +0x1bd:  mov    %eax,(%esp)
08ac5c12 +0x1c0:  call   0807da90 <_init+0x388>
08ac5c17 +0x1c5:  mov    $0x1,%ebx
08ac5c1c +0x1ca:  jmp    08ac60d9 <+0x687>
08ac5c21 +0x1cf:  mov    0x8(%ebp),%eax
08ac5c24 +0x1d2:  lea    0x4(%eax),%edx
08ac5c27 +0x1d5:  mov    -0x20(%ebp),%eax
08ac5c2a +0x1d8:  mov    %eax,0xc(%esp)
08ac5c2e +0x1dc:  movl   $0x1,0x8(%esp)
08ac5c36 +0x1e4:  movl   $0x4,0x4(%esp)
08ac5c3e +0x1ec:  mov    %edx,(%esp)
08ac5c41 +0x1ef:  call   0807dd50 <_init+0x648>
08ac5c46 +0x1f4:  mov    -0x20(%ebp),%eax
08ac5c49 +0x1f7:  mov    %eax,0xc(%esp)
08ac5c4d +0x1fb:  movl   $0x1,0x8(%esp)
08ac5c55 +0x203:  movl   $0x4,0x4(%esp)
08ac5c5d +0x20b:  lea    -0x54(%ebp),%eax
08ac5c60 +0x20e:  mov    %eax,(%esp)
08ac5c63 +0x211:  call   0807dd50 <_init+0x648>
08ac5c68 +0x216:  mov    -0x20(%ebp),%eax
08ac5c6b +0x219:  mov    %eax,0xc(%esp)
08ac5c6f +0x21d:  movl   $0x1,0x8(%esp)
08ac5c77 +0x225:  movl   $0x4,0x4(%esp)
08ac5c7f +0x22d:  lea    -0x58(%ebp),%eax
08ac5c82 +0x230:  mov    %eax,(%esp)
08ac5c85 +0x233:  call   0807dd50 <_init+0x648>
08ac5c8a +0x238:  mov    -0x20(%ebp),%eax
08ac5c8d +0x23b:  mov    %eax,0xc(%esp)
08ac5c91 +0x23f:  movl   $0x1,0x8(%esp)
08ac5c99 +0x247:  movl   $0x4,0x4(%esp)
08ac5ca1 +0x24f:  lea    -0x5c(%ebp),%eax
08ac5ca4 +0x252:  mov    %eax,(%esp)
08ac5ca7 +0x255:  call   0807dd50 <_init+0x648>
08ac5cac +0x25a:  mov    -0x54(%ebp),%eax
08ac5caf +0x25d:  mov    %eax,(%esp)
08ac5cb2 +0x260:  call   08722dc0 <_Znaj>  ; operator new[](unsigned int)
08ac5cb7 +0x265:  mov    %eax,-0x1c(%ebp)
08ac5cba +0x268:  mov    -0x54(%ebp),%eax
08ac5cbd +0x26b:  mov    -0x20(%ebp),%edx
08ac5cc0 +0x26e:  mov    %edx,0xc(%esp)
08ac5cc4 +0x272:  movl   $0x1,0x8(%esp)
08ac5ccc +0x27a:  mov    %eax,0x4(%esp)
08ac5cd0 +0x27e:  mov    -0x1c(%ebp),%eax
08ac5cd3 +0x281:  mov    %eax,(%esp)
08ac5cd6 +0x284:  call   0807dd50 <_init+0x648>
08ac5cdb +0x289:  mov    -0x20(%ebp),%eax
08ac5cde +0x28c:  mov    %eax,(%esp)
08ac5ce1 +0x28f:  call   0807d9d0 <_init+0x2c8>
08ac5ce6 +0x294:  mov    %eax,%edx
08ac5ce8 +0x296:  mov    0x8(%ebp),%eax
08ac5ceb +0x299:  mov    %edx,0x8(%eax)
08ac5cee +0x29c:  mov    0x8(%ebp),%eax
08ac5cf1 +0x29f:  mov    -0x20(%ebp),%edx
08ac5cf4 +0x2a2:  mov    %edx,(%eax)
08ac5cf6 +0x2a4:  mov    -0x54(%ebp),%ebx
08ac5cf9 +0x2a7:  mov    -0x58(%ebp),%ecx
08ac5cfc +0x2aa:  mov    -0x58(%ebp),%edx
08ac5cff +0x2ad:  mov    -0x5c(%ebp),%eax
08ac5d02 +0x2b0:  mov    %ebx,0x10(%esp)
08ac5d06 +0x2b4:  mov    -0x1c(%ebp),%ebx
08ac5d09 +0x2b7:  mov    %ebx,0xc(%esp)
08ac5d0d +0x2bb:  mov    %ecx,0x8(%esp)
08ac5d11 +0x2bf:  mov    %edx,0x4(%esp)
08ac5d15 +0x2c3:  mov    %eax,(%esp)
08ac5d18 +0x2c6:  call   08ac398b <_ZL16_decrypt_N_crc32mmmPhj>  ; _decrypt_N_crc32(unsigned long, unsigned long, unsigned long, unsigned char*, unsigned int)
08ac5d1d +0x2cb:  test   %eax,%eax
08ac5d1f +0x2cd:  sete   %al
08ac5d22 +0x2d0:  test   %al,%al
08ac5d24 +0x2d2:  je     08ac5d41 <+0x2ef>
08ac5d26 +0x2d4:  cmpl   $0x0,-0x1c(%ebp)
08ac5d2a +0x2d8:  je     08ac5d37 <+0x2e5>
08ac5d2c +0x2da:  mov    -0x1c(%ebp),%eax
08ac5d2f +0x2dd:  mov    %eax,(%esp)
08ac5d32 +0x2e0:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
08ac5d37 +0x2e5:  mov    $0x1,%ebx
08ac5d3c +0x2ea:  jmp    08ac60d9 <+0x687>
08ac5d41 +0x2ef:  mov    -0x1c(%ebp),%eax
08ac5d44 +0x2f2:  mov    %eax,-0x60(%ebp)
08ac5d47 +0x2f5:  lea    -0x4c(%ebp),%eax
08ac5d4a +0x2f8:  mov    %eax,(%esp)
08ac5d4d +0x2fb:  call   08ac7de4 <_ZN16IPackFileProcess15getCommonBufferEj+0x6a6>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x6a6
08ac5d52 +0x300:  mov    -0x5c(%ebp),%eax
08ac5d55 +0x303:  mov    0x8(%ebp),%edx
08ac5d58 +0x306:  lea    0x10(%edx),%ecx
08ac5d5b +0x309:  lea    -0x4c(%ebp),%edx
08ac5d5e +0x30c:  mov    %edx,0x8(%esp)
08ac5d62 +0x310:  mov    %eax,0x4(%esp)
08ac5d66 +0x314:  mov    %ecx,(%esp)
08ac5d69 +0x317:  call   08ac8052 <_ZN16IPackFileProcess15getCommonBufferEj+0x914>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x914
08ac5d6e +0x31c:  jmp    08ac5d88 <+0x336>
08ac5d70 +0x31e:  mov    %edx,%ebx
08ac5d72 +0x320:  mov    %eax,%esi
08ac5d74 +0x322:  lea    -0x4c(%ebp),%eax
08ac5d77 +0x325:  mov    %eax,(%esp)
08ac5d7a +0x328:  call   08ac77b0 <_ZN16IPackFileProcess15getCommonBufferEj+0x72>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x72
08ac5d7f +0x32d:  mov    %esi,%eax
08ac5d81 +0x32f:  mov    %ebx,%edx
08ac5d83 +0x331:  jmp    08ac60be <+0x66c>
08ac5d88 +0x336:  lea    -0x4c(%ebp),%eax
08ac5d8b +0x339:  mov    %eax,(%esp)
08ac5d8e +0x33c:  call   08ac77b0 <_ZN16IPackFileProcess15getCommonBufferEj+0x72>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x72
08ac5d93 +0x341:  mov    0x8(%ebp),%eax
08ac5d96 +0x344:  lea    0x10(%eax),%edx
08ac5d99 +0x347:  lea    -0x6c(%ebp),%eax
08ac5d9c +0x34a:  mov    %edx,0x4(%esp)
08ac5da0 +0x34e:  mov    %eax,(%esp)
08ac5da3 +0x351:  call   08ac79ea <_ZN16IPackFileProcess15getCommonBufferEj+0x2ac>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x2ac
08ac5da8 +0x356:  sub    $0x4,%esp
08ac5dab +0x359:  mov    -0x6c(%ebp),%eax
08ac5dae +0x35c:  mov    %eax,-0x50(%ebp)
08ac5db1 +0x35f:  jmp    08ac5df6 <+0x3a4>
08ac5db3 +0x361:  lea    -0x50(%ebp),%eax
08ac5db6 +0x364:  mov    %eax,(%esp)
08ac5db9 +0x367:  call   08ac7a24 <_ZN16IPackFileProcess15getCommonBufferEj+0x2e6>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x2e6
08ac5dbe +0x36c:  mov    -0x60(%ebp),%edx
08ac5dc1 +0x36f:  mov    (%edx),%edx
08ac5dc3 +0x371:  mov    %edx,(%eax)
08ac5dc5 +0x373:  mov    -0x60(%ebp),%eax
08ac5dc8 +0x376:  add    $0x4,%eax
08ac5dcb +0x379:  mov    %eax,-0x60(%ebp)
08ac5dce +0x37c:  lea    -0x50(%ebp),%eax
08ac5dd1 +0x37f:  mov    %eax,(%esp)
08ac5dd4 +0x382:  call   08ac7a24 <_ZN16IPackFileProcess15getCommonBufferEj+0x2e6>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x2e6
08ac5dd9 +0x387:  lea    0x4(%eax),%edx
08ac5ddc +0x38a:  lea    -0x60(%ebp),%eax
08ac5ddf +0x38d:  mov    %eax,0x4(%esp)
08ac5de3 +0x391:  mov    %edx,(%esp)
08ac5de6 +0x394:  call   08ac4200 <_ZN10IndexEntry9read_infoERPh>  ; IndexEntry::read_info(unsigned char*&)
08ac5deb +0x399:  lea    -0x50(%ebp),%eax
08ac5dee +0x39c:  mov    %eax,(%esp)
08ac5df1 +0x39f:  call   08ac7a0e <_ZN16IPackFileProcess15getCommonBufferEj+0x2d0>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x2d0
08ac5df6 +0x3a4:  mov    0x8(%ebp),%eax
08ac5df9 +0x3a7:  lea    0x10(%eax),%edx
08ac5dfc +0x3aa:  lea    -0x2c(%ebp),%eax
08ac5dff +0x3ad:  mov    %edx,0x4(%esp)
08ac5e03 +0x3b1:  mov    %eax,(%esp)
08ac5e06 +0x3b4:  call   08ac798a <_ZN16IPackFileProcess15getCommonBufferEj+0x24c>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x24c
08ac5e0b +0x3b9:  sub    $0x4,%esp
08ac5e0e +0x3bc:  lea    -0x2c(%ebp),%eax
08ac5e11 +0x3bf:  mov    %eax,0x4(%esp)
08ac5e15 +0x3c3:  lea    -0x50(%ebp),%eax
08ac5e18 +0x3c6:  mov    %eax,(%esp)
08ac5e1b +0x3c9:  call   08ac79b0 <_ZN16IPackFileProcess15getCommonBufferEj+0x272>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x272
08ac5e20 +0x3ce:  test   %al,%al
08ac5e22 +0x3d0:  jne    08ac5db3 <+0x361>
08ac5e24 +0x3d2:  cmpl   $0x0,-0x1c(%ebp)
08ac5e28 +0x3d6:  je     08ac5e35 <+0x3e3>
08ac5e2a +0x3d8:  mov    -0x1c(%ebp),%eax
08ac5e2d +0x3db:  mov    %eax,(%esp)
08ac5e30 +0x3de:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
08ac5e35 +0x3e3:  cmpl   $0x0,0x14(%ebp)
08ac5e39 +0x3e7:  jne    08ac5f49 <+0x4f7>
08ac5e3f +0x3ed:  movl   $0x2,0x8(%esp)
08ac5e47 +0x3f5:  movl   $0x0,0x4(%esp)
08ac5e4f +0x3fd:  mov    -0x20(%ebp),%eax
08ac5e52 +0x400:  mov    %eax,(%esp)
08ac5e55 +0x403:  call   0807e0b0 <_init+0x9a8>
08ac5e5a +0x408:  mov    -0x20(%ebp),%eax
08ac5e5d +0x40b:  mov    %eax,(%esp)
08ac5e60 +0x40e:  call   0807d9d0 <_init+0x2c8>
08ac5e65 +0x413:  mov    %eax,-0x18(%ebp)
08ac5e68 +0x416:  movl   $0x0,0x8(%esp)
08ac5e70 +0x41e:  movl   $0x0,0x4(%esp)
08ac5e78 +0x426:  mov    -0x20(%ebp),%eax
08ac5e7b +0x429:  mov    %eax,(%esp)
08ac5e7e +0x42c:  call   0807e0b0 <_init+0x9a8>
08ac5e83 +0x431:  mov    -0x18(%ebp),%eax
08ac5e86 +0x434:  mov    %eax,(%esp)
08ac5e89 +0x437:  call   08722dc0 <_Znaj>  ; operator new[](unsigned int)
08ac5e8e +0x43c:  mov    %eax,-0x14(%ebp)
08ac5e91 +0x43f:  mov    -0x20(%ebp),%eax
08ac5e94 +0x442:  mov    %eax,0xc(%esp)
08ac5e98 +0x446:  movl   $0x1,0x8(%esp)
08ac5ea0 +0x44e:  mov    -0x18(%ebp),%eax
08ac5ea3 +0x451:  mov    %eax,0x4(%esp)
08ac5ea7 +0x455:  mov    -0x14(%ebp),%eax
08ac5eaa +0x458:  mov    %eax,(%esp)
08ac5ead +0x45b:  call   0807dd50 <_init+0x648>
08ac5eb2 +0x460:  mov    0x8(%ebp),%eax
08ac5eb5 +0x463:  lea    0x10(%eax),%edx
08ac5eb8 +0x466:  lea    -0x6c(%ebp),%eax
08ac5ebb +0x469:  mov    %edx,0x4(%esp)
08ac5ebf +0x46d:  mov    %eax,(%esp)
08ac5ec2 +0x470:  call   08ac79ea <_ZN16IPackFileProcess15getCommonBufferEj+0x2ac>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x2ac
08ac5ec7 +0x475:  sub    $0x4,%esp
08ac5eca +0x478:  mov    -0x6c(%ebp),%eax
08ac5ecd +0x47b:  mov    %eax,-0x50(%ebp)
08ac5ed0 +0x47e:  jmp    08ac5f01 <+0x4af>
08ac5ed2 +0x480:  lea    -0x50(%ebp),%eax
08ac5ed5 +0x483:  mov    %eax,(%esp)
08ac5ed8 +0x486:  call   08ac7a24 <_ZN16IPackFileProcess15getCommonBufferEj+0x2e6>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x2e6
08ac5edd +0x48b:  lea    0x4(%eax),%edx
08ac5ee0 +0x48e:  mov    0x8(%ebp),%eax
08ac5ee3 +0x491:  mov    %eax,0x8(%esp)
08ac5ee7 +0x495:  mov    -0x14(%ebp),%eax
08ac5eea +0x498:  mov    %eax,0x4(%esp)
08ac5eee +0x49c:  mov    %edx,(%esp)
08ac5ef1 +0x49f:  call   08ac4378 <_ZN10IndexEntry26update_content_from_memoryEPhP7PackSet>  ; IndexEntry::update_content_from_memory(unsigned char*, PackSet*)
08ac5ef6 +0x4a4:  lea    -0x50(%ebp),%eax
08ac5ef9 +0x4a7:  mov    %eax,(%esp)
08ac5efc +0x4aa:  call   08ac7a0e <_ZN16IPackFileProcess15getCommonBufferEj+0x2d0>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x2d0
08ac5f01 +0x4af:  mov    0x8(%ebp),%eax
08ac5f04 +0x4b2:  lea    0x10(%eax),%edx
08ac5f07 +0x4b5:  lea    -0x28(%ebp),%eax
08ac5f0a +0x4b8:  mov    %edx,0x4(%esp)
08ac5f0e +0x4bc:  mov    %eax,(%esp)
08ac5f11 +0x4bf:  call   08ac798a <_ZN16IPackFileProcess15getCommonBufferEj+0x24c>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x24c
08ac5f16 +0x4c4:  sub    $0x4,%esp
08ac5f19 +0x4c7:  lea    -0x28(%ebp),%eax
08ac5f1c +0x4ca:  mov    %eax,0x4(%esp)
08ac5f20 +0x4ce:  lea    -0x50(%ebp),%eax
08ac5f23 +0x4d1:  mov    %eax,(%esp)
08ac5f26 +0x4d4:  call   08ac79b0 <_ZN16IPackFileProcess15getCommonBufferEj+0x272>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x272
08ac5f2b +0x4d9:  test   %al,%al
08ac5f2d +0x4db:  jne    08ac5ed2 <+0x480>
08ac5f2f +0x4dd:  cmpl   $0x0,-0x14(%ebp)
08ac5f33 +0x4e1:  je     08ac60ae <+0x65c>
08ac5f39 +0x4e7:  mov    -0x14(%ebp),%eax
08ac5f3c +0x4ea:  mov    %eax,(%esp)
08ac5f3f +0x4ed:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
08ac5f44 +0x4f2:  jmp    08ac60ae <+0x65c>
08ac5f49 +0x4f7:  movl   $0x2,0x8(%esp)
08ac5f51 +0x4ff:  movl   $0x0,0x4(%esp)
08ac5f59 +0x507:  mov    -0x20(%ebp),%eax
08ac5f5c +0x50a:  mov    %eax,(%esp)
08ac5f5f +0x50d:  call   0807e0b0 <_init+0x9a8>
08ac5f64 +0x512:  mov    -0x20(%ebp),%eax
08ac5f67 +0x515:  mov    %eax,(%esp)
08ac5f6a +0x518:  call   0807d9d0 <_init+0x2c8>
08ac5f6f +0x51d:  mov    %eax,-0x10(%ebp)
08ac5f72 +0x520:  cmpl   $0x0,-0x10(%ebp)
08ac5f76 +0x524:  jle    08ac60ae <+0x65c>
08ac5f7c +0x52a:  movl   $0x0,0x8(%esp)
08ac5f84 +0x532:  movl   $0x0,0x4(%esp)
08ac5f8c +0x53a:  mov    -0x20(%ebp),%eax
08ac5f8f +0x53d:  mov    %eax,(%esp)
08ac5f92 +0x540:  call   0807e0b0 <_init+0x9a8>
08ac5f97 +0x545:  mov    -0x10(%ebp),%eax
08ac5f9a +0x548:  mov    %eax,(%esp)
08ac5f9d +0x54b:  call   08722dc0 <_Znaj>  ; operator new[](unsigned int)
08ac5fa2 +0x550:  mov    %eax,-0xc(%ebp)
08ac5fa5 +0x553:  mov    -0x10(%ebp),%eax
08ac5fa8 +0x556:  mov    -0x20(%ebp),%edx
08ac5fab +0x559:  mov    %edx,0xc(%esp)
08ac5faf +0x55d:  movl   $0x1,0x8(%esp)
08ac5fb7 +0x565:  mov    %eax,0x4(%esp)
08ac5fbb +0x569:  mov    -0xc(%ebp),%eax
08ac5fbe +0x56c:  mov    %eax,(%esp)
08ac5fc1 +0x56f:  call   0807dd50 <_init+0x648>
08ac5fc6 +0x574:  mov    0x8(%ebp),%eax
08ac5fc9 +0x577:  lea    0x10(%eax),%edx
08ac5fcc +0x57a:  lea    -0x6c(%ebp),%eax
08ac5fcf +0x57d:  mov    %edx,0x4(%esp)
08ac5fd3 +0x581:  mov    %eax,(%esp)
08ac5fd6 +0x584:  call   08ac79ea <_ZN16IPackFileProcess15getCommonBufferEj+0x2ac>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x2ac
08ac5fdb +0x589:  sub    $0x4,%esp
08ac5fde +0x58c:  mov    -0x6c(%ebp),%eax
08ac5fe1 +0x58f:  mov    %eax,-0x50(%ebp)
08ac5fe4 +0x592:  jmp    08ac606b <+0x619>
08ac5fe9 +0x597:  lea    -0x50(%ebp),%eax
08ac5fec +0x59a:  mov    %eax,(%esp)
08ac5fef +0x59d:  call   08ac7a24 <_ZN16IPackFileProcess15getCommonBufferEj+0x2e6>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x2e6
08ac5ff4 +0x5a2:  add    $0x4,%eax
08ac5ff7 +0x5a5:  mov    %eax,(%esp)
08ac5ffa +0x5a8:  call   08ac3e64 <_ZNK10IndexEntry4nameEv>  ; IndexEntry::name() const
08ac5fff +0x5ad:  lea    -0x50(%ebp),%eax
08ac6002 +0x5b0:  mov    %eax,(%esp)
08ac6005 +0x5b3:  call   08ac7a24 <_ZN16IPackFileProcess15getCommonBufferEj+0x2e6>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x2e6
08ac600a +0x5b8:  add    $0x4,%eax
08ac600d +0x5bb:  mov    %eax,(%esp)
08ac6010 +0x5be:  call   08ac3e64 <_ZNK10IndexEntry4nameEv>  ; IndexEntry::name() const
08ac6015 +0x5c3:  movl   $0x0,0x8(%esp)
08ac601d +0x5cb:  movl   $".ani",0x4(%esp)
08ac6025 +0x5d3:  mov    %eax,(%esp)
08ac6028 +0x5d6:  call   08706c40 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x850>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x850
08ac602d +0x5db:  mov    &_ZNSs4nposE,%edx
08ac6033 +0x5e1:  cmp    %edx,%eax
08ac6035 +0x5e3:  setne  %al
08ac6038 +0x5e6:  test   %al,%al
08ac603a +0x5e8:  je     08ac6060 <+0x60e>
08ac603c +0x5ea:  lea    -0x50(%ebp),%eax
08ac603f +0x5ed:  mov    %eax,(%esp)
08ac6042 +0x5f0:  call   08ac7a24 <_ZN16IPackFileProcess15getCommonBufferEj+0x2e6>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x2e6
08ac6047 +0x5f5:  lea    0x4(%eax),%edx
08ac604a +0x5f8:  mov    0x8(%ebp),%eax
08ac604d +0x5fb:  mov    %eax,0x8(%esp)
08ac6051 +0x5ff:  mov    -0xc(%ebp),%eax
08ac6054 +0x602:  mov    %eax,0x4(%esp)
08ac6058 +0x606:  mov    %edx,(%esp)
08ac605b +0x609:  call   08ac4378 <_ZN10IndexEntry26update_content_from_memoryEPhP7PackSet>  ; IndexEntry::update_content_from_memory(unsigned char*, PackSet*)
08ac6060 +0x60e:  lea    -0x50(%ebp),%eax
08ac6063 +0x611:  mov    %eax,(%esp)
08ac6066 +0x614:  call   08ac7a0e <_ZN16IPackFileProcess15getCommonBufferEj+0x2d0>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x2d0
08ac606b +0x619:  mov    0x8(%ebp),%eax
08ac606e +0x61c:  lea    0x10(%eax),%edx
08ac6071 +0x61f:  lea    -0x24(%ebp),%eax
08ac6074 +0x622:  mov    %edx,0x4(%esp)
08ac6078 +0x626:  mov    %eax,(%esp)
08ac607b +0x629:  call   08ac798a <_ZN16IPackFileProcess15getCommonBufferEj+0x24c>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x24c
08ac6080 +0x62e:  sub    $0x4,%esp
08ac6083 +0x631:  lea    -0x24(%ebp),%eax
08ac6086 +0x634:  mov    %eax,0x4(%esp)
08ac608a +0x638:  lea    -0x50(%ebp),%eax
08ac608d +0x63b:  mov    %eax,(%esp)
08ac6090 +0x63e:  call   08ac79b0 <_ZN16IPackFileProcess15getCommonBufferEj+0x272>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x272
08ac6095 +0x643:  test   %al,%al
08ac6097 +0x645:  jne    08ac5fe9 <+0x597>
08ac609d +0x64b:  cmpl   $0x0,-0xc(%ebp)
08ac60a1 +0x64f:  je     08ac60ae <+0x65c>
08ac60a3 +0x651:  mov    -0xc(%ebp),%eax
08ac60a6 +0x654:  mov    %eax,(%esp)
08ac60a9 +0x657:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
08ac60ae +0x65c:  mov    0x8(%ebp),%eax
08ac60b1 +0x65f:  mov    0x14(%ebp),%edx
08ac60b4 +0x662:  mov    %edx,0xc(%eax)
08ac60b7 +0x665:  mov    $0x0,%ebx
08ac60bc +0x66a:  jmp    08ac60d9 <+0x687>
08ac60be +0x66c:  mov    %edx,%ebx
08ac60c0 +0x66e:  mov    %eax,%esi
08ac60c2 +0x670:  lea    -0x64(%ebp),%eax
08ac60c5 +0x673:  mov    %eax,(%esp)
08ac60c8 +0x676:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08ac60cd +0x67b:  mov    %esi,%eax
08ac60cf +0x67d:  mov    %ebx,%edx
08ac60d1 +0x67f:  mov    %eax,(%esp)
08ac60d4 +0x682:  call   08ae3750 <_Unwind_Resume>
08ac60d9 +0x687:  lea    -0x64(%ebp),%eax
08ac60dc +0x68a:  mov    %eax,(%esp)
08ac60df +0x68d:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08ac60e4 +0x692:  mov    %ebx,%eax
08ac60e6 +0x694:  lea    -0x8(%ebp),%esp
08ac60e9 +0x697:  add    $0x0,%esp
08ac60ec +0x69a:  pop    %ebx
08ac60ed +0x69b:  pop    %esi
08ac60ee +0x69c:  pop    %ebp
08ac60ef +0x69d:  ret
```

## 反编译 C

```c
// PackSet::open @ 0x8ac5a52

/* DWARF original prototype: pack_ret_t open(PackSet * this, NCHAR * name, NCHAR * tag,
   pack_load_type_t type) */

pack_ret_t __thiscall PackSet::open(PackSet *this,NCHAR *name,NCHAR *tag,pack_load_type_t type)

{
  pair<long_unsigned_int,_IndexEntry> __x;
  bool bVar1;
  pack_ret_t pVar2;
  char *__s1;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  pair<long_unsigned_int,_IndexEntry> *ppVar6;
  string *this_00;
  undefined1 in_stack_ffffff78 [20];
  undefined1 local_70 [8];
  tstring local_68;
  pair<long_unsigned_int,_IndexEntry> *local_64;
  ulong local_60;
  ulong local_5c;
  uint local_58;
  __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
  local_54;
  pair<long_unsigned_int,_IndexEntry> local_50;
  undefined1 local_30 [8];
  vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
  local_28;
  uint local_1c;
  uchar *local_18;
  uint local_14;
  uchar *local_10;
  
                    /* Unresolved local var: FILE * fp@[???]
                       Unresolved local var: index_vector_it it@[???]
                       Unresolved local var: uint aligned_index_header_size@[???]
                       Unresolved local var: uint index_header_crc@[???]
                       Unresolved local var: uint index_size@[???]
                       Unresolved local var: uchar * index_header_data@[???]
                       Unresolved local var: uchar * tmp@[???]
                       Unresolved local var: tstring index_tag@[???] */
  bVar1 = UsingEncryptedFile(this);
  if (bVar1) {
    pVar2 = openEncryptedFile(this,name,tag,type);
    return pVar2;
  }
  __gnu_cxx::
  __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
  ::__normal_iterator(&local_54);
  std::string::string((string *)&local_68);
  bVar1 = is_ready(this);
  if (bVar1) {
                    /* try { // try from 08ac5ad0 to 08ac5d51 has its CatchHandler @ 08ac60be */
    fprintf(stdout,"%s\n","Already opened");
    fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x3d8,"open");
    pVar2 = PACK_ERROR;
  }
  else {
    local_28.
    super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
    ._M_impl._M_finish = (pair<long_unsigned_int,_IndexEntry> *)fopen(name,"rb");
    if ((FILE *)local_28.
                super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                ._M_impl._M_finish == (FILE *)0x0) {
      fprintf(stdout,"_tfopen failed. %s",name);
      fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x3e1,"open");
      pVar2 = PACK_ERROR;
    }
    else {
      _fread_str(&local_68,
                 (FILE *)local_28.
                         super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                         ._M_impl._M_finish);
      if (tag != (NCHAR *)0x0) {
        __s1 = (char *)std::string::c_str((string *)&local_68);
        iVar3 = strcmp(__s1,tag);
        if (iVar3 != 0) {
          fclose((FILE *)local_28.
                         super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                         ._M_impl._M_finish);
          uVar4 = std::string::c_str((string *)&local_68);
          fprintf(stdout,"tag mismatch. %s",uVar4);
          fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x3ec,"open");
          pVar2 = PACK_ERROR;
          goto LAB_08ac60d9;
        }
      }
      fread(&this->revision_,4,1,
            (FILE *)local_28.
                    super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                    ._M_impl._M_finish);
      fread(&local_58,4,1,
            (FILE *)local_28.
                    super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                    ._M_impl._M_finish);
      fread(&local_5c,4,1,
            (FILE *)local_28.
                    super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                    ._M_impl._M_finish);
      fread(&local_60,4,1,
            (FILE *)local_28.
                    super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                    ._M_impl._M_finish);
      local_28.
      super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
      ._M_impl._M_end_of_storage = operator_new__(local_58);
      fread(local_28.
            super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
            ._M_impl._M_end_of_storage,local_58,1,
            (FILE *)local_28.
                    super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                    ._M_impl._M_finish);
      uVar5 = ftell((FILE *)local_28.
                            super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                            ._M_impl._M_finish);
      this->header_size_ = uVar5;
      this->pack_file_ =
           (FILE *)local_28.
                   super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                   ._M_impl._M_finish;
      ppVar6 = local_28.
               super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
               ._M_impl._M_end_of_storage;
      iVar3 = _decrypt_N_crc32(local_60,local_5c,local_5c,
                               (uchar *)local_28.
                                        super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                                        ._M_impl._M_end_of_storage,local_58);
      if (iVar3 == 0) {
        if (local_28.
            super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
            ._M_impl._M_end_of_storage != (pair<long_unsigned_int,_IndexEntry> *)0x0) {
          operator_delete__(local_28.
                            super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                            ._M_impl._M_end_of_storage);
        }
        pVar2 = PACK_ERROR;
      }
      else {
        local_64 = local_28.
                   super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                   ._M_impl._M_end_of_storage;
        std::pair<long_unsigned_int,_IndexEntry>::pair(&local_50);
        __x.second.type_ = (entry_type_t)ppVar6;
        __x.first = (ulong)&local_50;
        __x.second.name_._M_dataplus._M_p = (_Alloc_hider)(_Alloc_hider)local_58;
        __x.second.size_ = in_stack_ffffff78._0_4_;
        __x.second.aligned_size_ = in_stack_ffffff78._4_4_;
        __x.second.crc_ = in_stack_ffffff78._8_4_;
        __x.second.offset_ = in_stack_ffffff78._12_4_;
        __x.second.content_ = (uchar *)in_stack_ffffff78._16_4_;
                    /* try { // try from 08ac5d69 to 08ac5d6d has its CatchHandler @ 08ac5d70 */
        std::
        vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
        ::resize(&this->indexes_,local_60,__x);
                    /* try { // try from 08ac5d8e to 08ac6094 has its CatchHandler @ 08ac60be */
        std::pair<long_unsigned_int,_IndexEntry>::~pair(&local_50,local_60);
        std::
        vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
        ::begin((vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                 *)local_70);
        local_54._M_current = (pair<long_unsigned_int,_IndexEntry> *)local_70._0_4_;
        while( true ) {
          std::
          vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
          ::end((vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                 *)local_30);
          bVar1 = __gnu_cxx::
                  operator!=<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                            (&local_54,
                             (__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                              *)local_30);
          if (!bVar1) break;
          ppVar6 = __gnu_cxx::
                   __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                   ::operator->(&local_54);
          ppVar6->first = local_64->first;
          local_64 = (pair<long_unsigned_int,_IndexEntry> *)&local_64->second;
          ppVar6 = __gnu_cxx::
                   __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                   ::operator->(&local_54);
          IndexEntry::read_info(&ppVar6->second,(uchar **)&local_64);
          __gnu_cxx::
          __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
          ::operator++(&local_54);
        }
        if (local_28.
            super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
            ._M_impl._M_end_of_storage != (pair<long_unsigned_int,_IndexEntry> *)0x0) {
          operator_delete__(local_28.
                            super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                            ._M_impl._M_end_of_storage);
        }
        if (type == PACK_LOAD_FULL) {
                    /* Unresolved local var: uint size@[???]
                       Unresolved local var: uchar * content@[???] */
          fseek((FILE *)local_28.
                        super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                        ._M_impl._M_finish,0,2);
          local_1c = ftell((FILE *)local_28.
                                   super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                                   ._M_impl._M_finish);
          fseek((FILE *)local_28.
                        super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                        ._M_impl._M_finish,0,0);
          local_18 = operator_new__(local_1c);
          fread(local_18,local_1c,1,
                (FILE *)local_28.
                        super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                        ._M_impl._M_finish);
          std::
          vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
          ::begin((vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                   *)local_70);
          local_54._M_current = (pair<long_unsigned_int,_IndexEntry> *)local_70._0_4_;
          while( true ) {
            std::
            vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
            ::end((vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                   *)(local_30 + 4));
            bVar1 = __gnu_cxx::
                    operator!=<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                              (&local_54,
                               (__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                                *)(local_30 + 4));
            if (!bVar1) break;
            ppVar6 = __gnu_cxx::
                     __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                     ::operator->(&local_54);
            IndexEntry::update_content_from_memory(&ppVar6->second,local_18,this);
            __gnu_cxx::
            __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
            ::operator++(&local_54);
          }
          if (local_18 != (uchar *)0x0) {
            operator_delete__(local_18);
          }
        }
        else {
                    /* Unresolved local var: int size@[???]
                       Unresolved local var: uchar * content@[???] */
          fseek((FILE *)local_28.
                        super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                        ._M_impl._M_finish,0,2);
          local_14 = ftell((FILE *)local_28.
                                   super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                                   ._M_impl._M_finish);
          if (0 < (int)local_14) {
            fseek((FILE *)local_28.
                          super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                          ._M_impl._M_finish,0,0);
            local_10 = operator_new__(local_14);
            fread(local_10,local_14,1,
                  (FILE *)local_28.
                          super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                          ._M_impl._M_finish);
            std::
            vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
            ::begin((vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                     *)local_70);
            local_54._M_current = (pair<long_unsigned_int,_IndexEntry> *)local_70._0_4_;
            while( true ) {
              std::
              vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
              ::end(&local_28);
              bVar1 = __gnu_cxx::
                      operator!=<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                                (&local_54,
                                 (__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                                  *)&local_28);
              if (!bVar1) break;
              ppVar6 = __gnu_cxx::
                       __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                       ::operator->(&local_54);
              IndexEntry::name(&ppVar6->second);
              ppVar6 = __gnu_cxx::
                       __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                       ::operator->(&local_54);
              this_00 = (string *)IndexEntry::name(&ppVar6->second);
              iVar3 = std::string::find(this_00,".ani",0);
              if (iVar3 != std::string::npos) {
                ppVar6 = __gnu_cxx::
                         __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                         ::operator->(&local_54);
                IndexEntry::update_content_from_memory(&ppVar6->second,local_10,this);
              }
              __gnu_cxx::
              __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
              ::operator++(&local_54);
            }
            if (local_10 != (uchar *)0x0) {
              operator_delete__(local_10);
            }
          }
        }
        this->type_ = type;
        pVar2 = PACK_OK;
      }
    }
  }
LAB_08ac60d9:
  std::string::~string((string *)&local_68);
  return pVar2;
}
```
