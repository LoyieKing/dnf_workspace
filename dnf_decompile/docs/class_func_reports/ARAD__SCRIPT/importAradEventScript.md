# importAradEventScript

`_ZN4ARAD6SCRIPT21importAradEventScriptERSt6vectorINS0_16SEventPeriodDataESaIS2_EERS1_INS0_17SRewardPeriodDataESaIS6_EE`

`ARAD::SCRIPT::importAradEventScript(std::vector<ARAD::SCRIPT::SEventPeriodData, std::allocator<ARAD::SCRIPT::SEventPeriodData> >&, std::vector<ARAD::SCRIPT::SRewardPeriodData, std::allocator<ARAD::SCRIPT::SRewardPeriodData> >&)`

| 类 | 地址 |
|---|---|
| `ARAD::SCRIPT` | `0x088b3bd8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088b3bd8  _ZN4ARAD6SCRIPT21importAradEventScriptERSt6vectorINS0_16SEventPeriodDataESaIS2_EERS1_INS0_17SRewardPeriodDataESaIS6_EE
#           ARAD::SCRIPT::importAradEventScript(std::vector<ARAD::SCRIPT::SEventPeriodData, std::allocator<ARAD::SCRIPT::SEventPeriodData> >&, std::vector<ARAD::SCRIPT::SRewardPeriodData, std::allocator<ARAD::SCRIPT::SRewardPeriodData> >&)
# range [0x088b3bd8, 0x088b4127]
088b3bd8 +0x000:  push   %ebp
088b3bd9 +0x001:  mov    %esp,%ebp
088b3bdb +0x003:  push   %esi
088b3bdc +0x004:  push   %ebx
088b3bdd +0x005:  sub    $0xa0,%esp
088b3be3 +0x00b:  mov    0x8(%ebp),%eax
088b3be6 +0x00e:  mov    %eax,(%esp)
088b3be9 +0x011:  call   08195f56 <_GLOBAL__I__ZN4ARAD17FnRewardInterfaceclEimsj+0x316>  ; global constructors keyed to ARAD::FnRewardInterface::operator()(int, unsigned long, short, unsigned int)+0x316
088b3bee +0x016:  mov    0xc(%ebp),%eax
088b3bf1 +0x019:  mov    %eax,(%esp)
088b3bf4 +0x01c:  call   088b43f6 <_GLOBAL__I__ZN4ARAD6SCRIPT8readTimeEPs+0xab>  ; global constructors keyed to ARAD::SCRIPT::readTime(short*)+0xab
088b3bf9 +0x021:  movl   $"Etc/AradEventPeroid.etc",0x4(%esp)
088b3c01 +0x029:  movl   $"",(%esp)
088b3c08 +0x030:  call   088bbd29 <_Z18loadRDARScriptFilePKcS0_>  ; loadRDARScriptFile(char const*, char const*)
088b3c0d +0x035:  xor    $0x1,%eax
088b3c10 +0x038:  test   %al,%al
088b3c12 +0x03a:  je     088b3c1e <+0x46>
088b3c14 +0x03c:  mov    $0x0,%ebx
088b3c19 +0x041:  jmp    088b411b <+0x543>
088b3c1e +0x046:  lea    -0x38(%ebp),%eax
088b3c21 +0x049:  mov    %eax,(%esp)
088b3c24 +0x04c:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
088b3c29 +0x051:  movb   $0x0,-0x39(%ebp)
088b3c2d +0x055:  jmp    088b3c30 <+0x58>
088b3c2f +0x057:  nop
088b3c30 +0x058:  movl   $0x1,0x4(%esp)
088b3c38 +0x060:  lea    -0x38(%ebp),%eax
088b3c3b +0x063:  mov    %eax,(%esp)
088b3c3e +0x066:  call   088bc85f <_Z8ScanTypeRSsb>  ; ScanType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool)
088b3c43 +0x06b:  xor    $0x1,%eax
088b3c46 +0x06e:  test   %al,%al
088b3c48 +0x070:  jne    088b4084 <+0x4ac>
088b3c4e +0x076:  movl   $"[event period]",0x4(%esp)
088b3c56 +0x07e:  lea    -0x38(%ebp),%eax
088b3c59 +0x081:  mov    %eax,(%esp)
088b3c5c +0x084:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088b3c61 +0x089:  test   %al,%al
088b3c63 +0x08b:  je     088b3e11 <+0x239>
088b3c69 +0x091:  movl   $0x0,-0x1c(%ebp)
088b3c70 +0x098:  movl   $0x0,-0x42(%ebp)
088b3c77 +0x09f:  movl   $0x0,-0x3e(%ebp)
088b3c7e +0x0a6:  movl   $0x0,-0x4a(%ebp)
088b3c85 +0x0ad:  movl   $0x0,-0x46(%ebp)
088b3c8c +0x0b4:  lea    -0x39(%ebp),%eax
088b3c8f +0x0b7:  mov    %eax,(%esp)
088b3c92 +0x0ba:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088b3c97 +0x0bf:  mov    %eax,-0x1c(%ebp)
088b3c9a +0x0c2:  movzbl -0x39(%ebp),%eax
088b3c9e +0x0c6:  xor    $0x1,%eax
088b3ca1 +0x0c9:  test   %al,%al
088b3ca3 +0x0cb:  je     088b3ca8 <+0xd0>
088b3ca5 +0x0cd:  nop
088b3ca6 +0x0ce:  jmp    088b3c30 <+0x58>
088b3ca8 +0x0d0:  lea    -0x42(%ebp),%eax
088b3cab +0x0d3:  mov    %eax,(%esp)
088b3cae +0x0d6:  call   088b3970 <_ZN4ARAD6SCRIPT8readTimeEPs>  ; ARAD::SCRIPT::readTime(short*)
088b3cb3 +0x0db:  xor    $0x1,%eax
088b3cb6 +0x0de:  test   %al,%al
088b3cb8 +0x0e0:  je     088b3ce6 <+0x10e>
088b3cba +0x0e2:  movl   $0x4,(%esp)
088b3cc1 +0x0e9:  call   08725800 <__cxa_allocate_exception>
088b3cc6 +0x0ee:  mov    %eax,%edx
088b3cc8 +0x0f0:  movl   $"start time",(%edx)
088b3cce +0x0f6:  movl   $0x0,0x8(%esp)
088b3cd6 +0x0fe:  movl   $&_ZTIPKc,0x4(%esp)
088b3cde +0x106:  mov    %eax,(%esp)
088b3ce1 +0x109:  call   08724c50 <__cxa_throw>
088b3ce6 +0x10e:  lea    -0x4a(%ebp),%eax
088b3ce9 +0x111:  mov    %eax,(%esp)
088b3cec +0x114:  call   088b3970 <_ZN4ARAD6SCRIPT8readTimeEPs>  ; ARAD::SCRIPT::readTime(short*)
088b3cf1 +0x119:  xor    $0x1,%eax
088b3cf4 +0x11c:  test   %al,%al
088b3cf6 +0x11e:  je     088b3d24 <+0x14c>
088b3cf8 +0x120:  movl   $0x4,(%esp)
088b3cff +0x127:  call   08725800 <__cxa_allocate_exception>
088b3d04 +0x12c:  mov    %eax,%edx
088b3d06 +0x12e:  movl   $"end time",(%edx)
088b3d0c +0x134:  movl   $0x0,0x8(%esp)
088b3d14 +0x13c:  movl   $&_ZTIPKc,0x4(%esp)
088b3d1c +0x144:  mov    %eax,(%esp)
088b3d1f +0x147:  call   08724c50 <__cxa_throw>
088b3d24 +0x14c:  lea    -0x4a(%ebp),%eax
088b3d27 +0x14f:  mov    %eax,(%esp)
088b3d2a +0x152:  call   088b3b4b <_ZN4ARAD6SCRIPT10uint32TimeEPs>  ; ARAD::SCRIPT::uint32Time(short*)
088b3d2f +0x157:  mov    %eax,%ebx
088b3d31 +0x159:  lea    -0x42(%ebp),%eax
088b3d34 +0x15c:  mov    %eax,(%esp)
088b3d37 +0x15f:  call   088b3b4b <_ZN4ARAD6SCRIPT10uint32TimeEPs>  ; ARAD::SCRIPT::uint32Time(short*)
088b3d3c +0x164:  mov    %ebx,0xc(%esp)
088b3d40 +0x168:  mov    %eax,0x8(%esp)
088b3d44 +0x16c:  mov    -0x1c(%ebp),%eax
088b3d47 +0x16f:  mov    %eax,0x4(%esp)
088b3d4b +0x173:  lea    -0x58(%ebp),%eax
088b3d4e +0x176:  mov    %eax,(%esp)
088b3d51 +0x179:  call   088b4368 <_GLOBAL__I__ZN4ARAD6SCRIPT8readTimeEPs+0x1d>  ; global constructors keyed to ARAD::SCRIPT::readTime(short*)+0x1d
088b3d56 +0x17e:  lea    -0x34(%ebp),%eax
088b3d59 +0x181:  mov    0x8(%ebp),%edx
088b3d5c +0x184:  mov    %edx,0x4(%esp)
088b3d60 +0x188:  mov    %eax,(%esp)
088b3d63 +0x18b:  call   08195f96 <_GLOBAL__I__ZN4ARAD17FnRewardInterfaceclEimsj+0x356>  ; global constructors keyed to ARAD::FnRewardInterface::operator()(int, unsigned long, short, unsigned int)+0x356
088b3d68 +0x190:  sub    $0x4,%esp
088b3d6b +0x193:  lea    -0x30(%ebp),%eax
088b3d6e +0x196:  mov    0x8(%ebp),%edx
088b3d71 +0x199:  mov    %edx,0x4(%esp)
088b3d75 +0x19d:  mov    %eax,(%esp)
088b3d78 +0x1a0:  call   08195f72 <_GLOBAL__I__ZN4ARAD17FnRewardInterfaceclEimsj+0x332>  ; global constructors keyed to ARAD::FnRewardInterface::operator()(int, unsigned long, short, unsigned int)+0x332
088b3d7d +0x1a5:  sub    $0x4,%esp
088b3d80 +0x1a8:  lea    -0x5c(%ebp),%eax
088b3d83 +0x1ab:  lea    -0x58(%ebp),%edx
088b3d86 +0x1ae:  mov    %edx,0xc(%esp)
088b3d8a +0x1b2:  mov    -0x34(%ebp),%edx
088b3d8d +0x1b5:  mov    %edx,0x8(%esp)
088b3d91 +0x1b9:  mov    -0x30(%ebp),%edx
088b3d94 +0x1bc:  mov    %edx,0x4(%esp)
088b3d98 +0x1c0:  mov    %eax,(%esp)
088b3d9b +0x1c3:  call   088b4412 <_GLOBAL__I__ZN4ARAD6SCRIPT8readTimeEPs+0xc7>  ; global constructors keyed to ARAD::SCRIPT::readTime(short*)+0xc7
088b3da0 +0x1c8:  sub    $0x4,%esp
088b3da3 +0x1cb:  lea    -0x2c(%ebp),%eax
088b3da6 +0x1ce:  mov    0x8(%ebp),%edx
088b3da9 +0x1d1:  mov    %edx,0x4(%esp)
088b3dad +0x1d5:  mov    %eax,(%esp)
088b3db0 +0x1d8:  call   08195f96 <_GLOBAL__I__ZN4ARAD17FnRewardInterfaceclEimsj+0x356>  ; global constructors keyed to ARAD::FnRewardInterface::operator()(int, unsigned long, short, unsigned int)+0x356
088b3db5 +0x1dd:  sub    $0x4,%esp
088b3db8 +0x1e0:  lea    -0x2c(%ebp),%eax
088b3dbb +0x1e3:  mov    %eax,0x4(%esp)
088b3dbf +0x1e7:  lea    -0x5c(%ebp),%eax
088b3dc2 +0x1ea:  mov    %eax,(%esp)
088b3dc5 +0x1ed:  call   08196010 <_GLOBAL__I__ZN4ARAD17FnRewardInterfaceclEimsj+0x3d0>  ; global constructors keyed to ARAD::FnRewardInterface::operator()(int, unsigned long, short, unsigned int)+0x3d0
088b3dca +0x1f2:  test   %al,%al
088b3dcc +0x1f4:  je     088b3dfa <+0x222>
088b3dce +0x1f6:  movl   $0x4,(%esp)
088b3dd5 +0x1fd:  call   08725800 <__cxa_allocate_exception>
088b3dda +0x202:  mov    %eax,%edx
088b3ddc +0x204:  movl   $"already exist",(%edx)
088b3de2 +0x20a:  movl   $0x0,0x8(%esp)
088b3dea +0x212:  movl   $&_ZTIPKc,0x4(%esp)
088b3df2 +0x21a:  mov    %eax,(%esp)
088b3df5 +0x21d:  call   08724c50 <__cxa_throw>
088b3dfa +0x222:  lea    -0x58(%ebp),%eax
088b3dfd +0x225:  mov    %eax,0x4(%esp)
088b3e01 +0x229:  mov    0x8(%ebp),%eax
088b3e04 +0x22c:  mov    %eax,(%esp)
088b3e07 +0x22f:  call   088b4466 <_GLOBAL__I__ZN4ARAD6SCRIPT8readTimeEPs+0x11b>  ; global constructors keyed to ARAD::SCRIPT::readTime(short*)+0x11b
088b3e0c +0x234:  jmp    088b3c8c <+0xb4>
088b3e11 +0x239:  movl   $"[reward period]",0x4(%esp)
088b3e19 +0x241:  lea    -0x38(%ebp),%eax
088b3e1c +0x244:  mov    %eax,(%esp)
088b3e1f +0x247:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088b3e24 +0x24c:  test   %al,%al
088b3e26 +0x24e:  je     088b3c2f <+0x57>
088b3e2c +0x254:  movl   $0x0,-0x18(%ebp)
088b3e33 +0x25b:  movl   $0x0,-0x64(%ebp)
088b3e3a +0x262:  movl   $0x0,-0x60(%ebp)
088b3e41 +0x269:  movl   $0x0,-0x6c(%ebp)
088b3e48 +0x270:  movl   $0x0,-0x68(%ebp)
088b3e4f +0x277:  movl   $0x0,-0x14(%ebp)
088b3e56 +0x27e:  movw   $0x0,-0xe(%ebp)
088b3e5c +0x284:  lea    -0x39(%ebp),%eax
088b3e5f +0x287:  mov    %eax,(%esp)
088b3e62 +0x28a:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088b3e67 +0x28f:  mov    %eax,-0x18(%ebp)
088b3e6a +0x292:  movzbl -0x39(%ebp),%eax
088b3e6e +0x296:  xor    $0x1,%eax
088b3e71 +0x299:  test   %al,%al
088b3e73 +0x29b:  je     088b3e7b <+0x2a3>
088b3e75 +0x29d:  nop
088b3e76 +0x29e:  jmp    088b3c30 <+0x58>
088b3e7b +0x2a3:  lea    -0x64(%ebp),%eax
088b3e7e +0x2a6:  mov    %eax,(%esp)
088b3e81 +0x2a9:  call   088b3970 <_ZN4ARAD6SCRIPT8readTimeEPs>  ; ARAD::SCRIPT::readTime(short*)
088b3e86 +0x2ae:  xor    $0x1,%eax
088b3e89 +0x2b1:  test   %al,%al
088b3e8b +0x2b3:  je     088b3eb9 <+0x2e1>
088b3e8d +0x2b5:  movl   $0x4,(%esp)
088b3e94 +0x2bc:  call   08725800 <__cxa_allocate_exception>
088b3e99 +0x2c1:  mov    %eax,%edx
088b3e9b +0x2c3:  movl   $"start time",(%edx)
088b3ea1 +0x2c9:  movl   $0x0,0x8(%esp)
088b3ea9 +0x2d1:  movl   $&_ZTIPKc,0x4(%esp)
088b3eb1 +0x2d9:  mov    %eax,(%esp)
088b3eb4 +0x2dc:  call   08724c50 <__cxa_throw>
088b3eb9 +0x2e1:  lea    -0x6c(%ebp),%eax
088b3ebc +0x2e4:  mov    %eax,(%esp)
088b3ebf +0x2e7:  call   088b3970 <_ZN4ARAD6SCRIPT8readTimeEPs>  ; ARAD::SCRIPT::readTime(short*)
088b3ec4 +0x2ec:  xor    $0x1,%eax
088b3ec7 +0x2ef:  test   %al,%al
088b3ec9 +0x2f1:  je     088b3ef7 <+0x31f>
088b3ecb +0x2f3:  movl   $0x4,(%esp)
088b3ed2 +0x2fa:  call   08725800 <__cxa_allocate_exception>
088b3ed7 +0x2ff:  mov    %eax,%edx
088b3ed9 +0x301:  movl   $"end time",(%edx)
088b3edf +0x307:  movl   $0x0,0x8(%esp)
088b3ee7 +0x30f:  movl   $&_ZTIPKc,0x4(%esp)
088b3eef +0x317:  mov    %eax,(%esp)
088b3ef2 +0x31a:  call   08724c50 <__cxa_throw>
088b3ef7 +0x31f:  lea    -0x39(%ebp),%eax
088b3efa +0x322:  mov    %eax,(%esp)
088b3efd +0x325:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088b3f02 +0x32a:  mov    %eax,-0x14(%ebp)
088b3f05 +0x32d:  movzbl -0x39(%ebp),%eax
088b3f09 +0x331:  xor    $0x1,%eax
088b3f0c +0x334:  test   %al,%al
088b3f0e +0x336:  je     088b3f3c <+0x364>
088b3f10 +0x338:  movl   $0x4,(%esp)
088b3f17 +0x33f:  call   08725800 <__cxa_allocate_exception>
088b3f1c +0x344:  mov    %eax,%edx
088b3f1e +0x346:  movl   $"item index",(%edx)
088b3f24 +0x34c:  movl   $0x0,0x8(%esp)
088b3f2c +0x354:  movl   $&_ZTIPKc,0x4(%esp)
088b3f34 +0x35c:  mov    %eax,(%esp)
088b3f37 +0x35f:  call   08724c50 <__cxa_throw>
088b3f3c +0x364:  lea    -0x39(%ebp),%eax
088b3f3f +0x367:  mov    %eax,(%esp)
088b3f42 +0x36a:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088b3f47 +0x36f:  mov    %ax,-0xe(%ebp)
088b3f4b +0x373:  movzbl -0x39(%ebp),%eax
088b3f4f +0x377:  xor    $0x1,%eax
088b3f52 +0x37a:  test   %al,%al
088b3f54 +0x37c:  je     088b3f82 <+0x3aa>
088b3f56 +0x37e:  movl   $0x4,(%esp)
088b3f5d +0x385:  call   08725800 <__cxa_allocate_exception>
088b3f62 +0x38a:  mov    %eax,%edx
088b3f64 +0x38c:  movl   $"item count",(%edx)
088b3f6a +0x392:  movl   $0x0,0x8(%esp)
088b3f72 +0x39a:  movl   $&_ZTIPKc,0x4(%esp)
088b3f7a +0x3a2:  mov    %eax,(%esp)
088b3f7d +0x3a5:  call   08724c50 <__cxa_throw>
088b3f82 +0x3aa:  lea    -0x6c(%ebp),%eax
088b3f85 +0x3ad:  mov    %eax,(%esp)
088b3f88 +0x3b0:  call   088b3b4b <_ZN4ARAD6SCRIPT10uint32TimeEPs>  ; ARAD::SCRIPT::uint32Time(short*)
088b3f8d +0x3b5:  mov    %eax,%ebx
088b3f8f +0x3b7:  lea    -0x64(%ebp),%eax
088b3f92 +0x3ba:  mov    %eax,(%esp)
088b3f95 +0x3bd:  call   088b3b4b <_ZN4ARAD6SCRIPT10uint32TimeEPs>  ; ARAD::SCRIPT::uint32Time(short*)
088b3f9a +0x3c2:  movswl -0xe(%ebp),%edx
088b3f9e +0x3c6:  mov    %ebx,0x14(%esp)
088b3fa2 +0x3ca:  mov    %eax,0x10(%esp)
088b3fa6 +0x3ce:  mov    %edx,0xc(%esp)
088b3faa +0x3d2:  mov    -0x14(%ebp),%eax
088b3fad +0x3d5:  mov    %eax,0x8(%esp)
088b3fb1 +0x3d9:  mov    -0x18(%ebp),%eax
088b3fb4 +0x3dc:  mov    %eax,0x4(%esp)
088b3fb8 +0x3e0:  lea    -0x80(%ebp),%eax
088b3fbb +0x3e3:  mov    %eax,(%esp)
088b3fbe +0x3e6:  call   088b439c <_GLOBAL__I__ZN4ARAD6SCRIPT8readTimeEPs+0x51>  ; global constructors keyed to ARAD::SCRIPT::readTime(short*)+0x51
088b3fc3 +0x3eb:  lea    -0x28(%ebp),%eax
088b3fc6 +0x3ee:  mov    0xc(%ebp),%edx
088b3fc9 +0x3f1:  mov    %edx,0x4(%esp)
088b3fcd +0x3f5:  mov    %eax,(%esp)
088b3fd0 +0x3f8:  call   0819b41e <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x1104>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x1104
088b3fd5 +0x3fd:  sub    $0x4,%esp
088b3fd8 +0x400:  lea    -0x24(%ebp),%eax
088b3fdb +0x403:  mov    0xc(%ebp),%edx
088b3fde +0x406:  mov    %edx,0x4(%esp)
088b3fe2 +0x40a:  mov    %eax,(%esp)
088b3fe5 +0x40d:  call   0819b3fa <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x10e0>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x10e0
088b3fea +0x412:  sub    $0x4,%esp
088b3fed +0x415:  lea    -0x84(%ebp),%eax
088b3ff3 +0x41b:  lea    -0x80(%ebp),%edx
088b3ff6 +0x41e:  mov    %edx,0xc(%esp)
088b3ffa +0x422:  mov    -0x28(%ebp),%edx
088b3ffd +0x425:  mov    %edx,0x8(%esp)
088b4001 +0x429:  mov    -0x24(%ebp),%edx
088b4004 +0x42c:  mov    %edx,0x4(%esp)
088b4008 +0x430:  mov    %eax,(%esp)
088b400b +0x433:  call   088b44d9 <_GLOBAL__I__ZN4ARAD6SCRIPT8readTimeEPs+0x18e>  ; global constructors keyed to ARAD::SCRIPT::readTime(short*)+0x18e
088b4010 +0x438:  sub    $0x4,%esp
088b4013 +0x43b:  lea    -0x20(%ebp),%eax
088b4016 +0x43e:  mov    0xc(%ebp),%edx
088b4019 +0x441:  mov    %edx,0x4(%esp)
088b401d +0x445:  mov    %eax,(%esp)
088b4020 +0x448:  call   0819b41e <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x1104>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x1104
088b4025 +0x44d:  sub    $0x4,%esp
088b4028 +0x450:  lea    -0x20(%ebp),%eax
088b402b +0x453:  mov    %eax,0x4(%esp)
088b402f +0x457:  lea    -0x84(%ebp),%eax
088b4035 +0x45d:  mov    %eax,(%esp)
088b4038 +0x460:  call   0819b498 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x117e>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x117e
088b403d +0x465:  test   %al,%al
088b403f +0x467:  je     088b406d <+0x495>
088b4041 +0x469:  movl   $0x4,(%esp)
088b4048 +0x470:  call   08725800 <__cxa_allocate_exception>
088b404d +0x475:  mov    %eax,%edx
088b404f +0x477:  movl   $"already exist",(%edx)
088b4055 +0x47d:  movl   $0x0,0x8(%esp)
088b405d +0x485:  movl   $&_ZTIPKc,0x4(%esp)
088b4065 +0x48d:  mov    %eax,(%esp)
088b4068 +0x490:  call   08724c50 <__cxa_throw>
088b406d +0x495:  lea    -0x80(%ebp),%eax
088b4070 +0x498:  mov    %eax,0x4(%esp)
088b4074 +0x49c:  mov    0xc(%ebp),%eax
088b4077 +0x49f:  mov    %eax,(%esp)
088b407a +0x4a2:  call   088b452e <_GLOBAL__I__ZN4ARAD6SCRIPT8readTimeEPs+0x1e3>  ; global constructors keyed to ARAD::SCRIPT::readTime(short*)+0x1e3
088b407f +0x4a7:  jmp    088b3e5c <+0x284>
088b4084 +0x4ac:  nop
088b4085 +0x4ad:  lea    -0x38(%ebp),%eax
088b4088 +0x4b0:  mov    %eax,(%esp)
088b408b +0x4b3:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
088b4090 +0x4b8:  jmp    088b4116 <+0x53e>
088b4095 +0x4bd:  mov    %edx,%ebx
088b4097 +0x4bf:  mov    %eax,%esi
088b4099 +0x4c1:  lea    -0x38(%ebp),%eax
088b409c +0x4c4:  mov    %eax,(%esp)
088b409f +0x4c7:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
088b40a4 +0x4cc:  mov    %esi,%eax
088b40a6 +0x4ce:  mov    %ebx,%edx
088b40a8 +0x4d0:  jmp    088b40aa <+0x4d2>
088b40aa +0x4d2:  cmp    $0x1,%edx
088b40ad +0x4d5:  je     088b40b7 <+0x4df>
088b40af +0x4d7:  mov    %eax,(%esp)
088b40b2 +0x4da:  call   08ae3750 <_Unwind_Resume>
088b40b7 +0x4df:  mov    %eax,(%esp)
088b40ba +0x4e2:  call   08725ce0 <__cxa_begin_catch>
088b40bf +0x4e7:  mov    %eax,-0xc(%ebp)
088b40c2 +0x4ea:  mov    -0xc(%ebp),%eax
088b40c5 +0x4ed:  mov    %eax,0x14(%esp)
088b40c9 +0x4f1:  movl   $"[ARAD SCRIPT] Load fail. AradEventPeroid.etc %s",0x10(%esp)
088b40d1 +0x4f9:  movl   $0x99,0xc(%esp)
088b40d9 +0x501:  movl   $&_ZZN4ARAD6SCRIPT21importAradEventScriptERSt6vectorINS0_16SEventPeriodDataESaIS2_EERS1_INS0_17SRewardPeriodDataESaIS6_EEE12__FUNCTION__,0x8(%esp)
088b40e1 +0x509:  movl   $"../localjapan/Arad_RDARScriptEtcParameter.cpp",0x4(%esp)
088b40e9 +0x511:  movl   $0x1,(%esp)
088b40f0 +0x518:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
088b40f5 +0x51d:  mov    $0x0,%ebx
088b40fa +0x522:  call   08725c30 <__cxa_end_catch>
088b40ff +0x527:  jmp    088b411b <+0x543>
088b4101 +0x529:  mov    %edx,%ebx
088b4103 +0x52b:  mov    %eax,%esi
088b4105 +0x52d:  call   08725c30 <__cxa_end_catch>
088b410a +0x532:  mov    %esi,%eax
088b410c +0x534:  mov    %ebx,%edx
088b410e +0x536:  mov    %eax,(%esp)
088b4111 +0x539:  call   08ae3750 <_Unwind_Resume>
088b4116 +0x53e:  mov    $0x1,%ebx
088b411b +0x543:  mov    %ebx,%eax
088b411d +0x545:  lea    -0x8(%ebp),%esp
088b4120 +0x548:  add    $0x0,%esp
088b4123 +0x54b:  pop    %ebx
088b4124 +0x54c:  pop    %esi
088b4125 +0x54d:  pop    %ebp
088b4126 +0x54e:  ret
088b4127 +0x54f:  nop
```

## 反编译 C

```c
// ARAD::SCRIPT::importAradEventScript @ 0x88b3bd8

/* ARAD::SCRIPT::importAradEventScript(std::vector<ARAD::SCRIPT::SEventPeriodData,
   std::allocator<ARAD::SCRIPT::SEventPeriodData> >&, std::vector<ARAD::SCRIPT::SRewardPeriodData,
   std::allocator<ARAD::SCRIPT::SRewardPeriodData> >&) */

undefined4 ARAD::SCRIPT::importAradEventScript(vector *param_1,vector *param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int local_b8 [2];
  int local_b0;
  uint local_a0 [6];
  undefined1 local_88 [4];
  undefined1 local_84 [20];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60 [4];
  undefined1 local_5c [14];
  undefined4 local_4e;
  undefined4 local_4a;
  undefined4 local_46;
  undefined4 local_42;
  char local_3d;
  string local_3c [4];
  int local_38;
  undefined4 local_34;
  undefined1 local_30 [4];
  int local_2c;
  undefined4 local_28;
  undefined1 local_24 [4];
  int local_20;
  int local_1c;
  int local_18;
  short local_12;
  
  piVar7 = (int *)&stack0xffffff54;
  std::vector<ARAD::SCRIPT::SEventPeriodData,std::allocator<ARAD::SCRIPT::SEventPeriodData>>::clear
            ((vector<ARAD::SCRIPT::SEventPeriodData,std::allocator<ARAD::SCRIPT::SEventPeriodData>>
              *)param_1);
  std::vector<ARAD::SCRIPT::SRewardPeriodData,std::allocator<ARAD::SCRIPT::SRewardPeriodData>>::
  clear((vector<ARAD::SCRIPT::SRewardPeriodData,std::allocator<ARAD::SCRIPT::SRewardPeriodData>> *)
        param_2);
  cVar1 = loadRDARScriptFile("","Etc/AradEventPeroid.etc");
  if (cVar1 == '\x01') {
                    /* try { // try from 088b3c24 to 088b3c28 has its CatchHandler @ 088b40aa */
    std::string::string(local_3c);
    local_3d = '\0';
    while( true ) {
      piVar7[1] = 1;
      *piVar7 = (int)local_3c;
                    /* try { // try from 088b3c3e to 088b407e has its CatchHandler @ 088b4095 */
      piVar7[-1] = 0x88b3c43;
      cVar1 = ScanType((string *)*piVar7,SUB41(piVar7[1],0));
      if (cVar1 != '\x01') break;
      piVar7[1] = (int)"[event period]";
      *piVar7 = (int)local_3c;
      piVar7[-1] = 0x88b3c61;
      bVar2 = std::operator==((string *)*piVar7,(char *)piVar7[1]);
      if (bVar2) {
        local_20 = 0;
        local_46 = 0;
        local_42 = 0;
        local_4e = 0;
        local_4a = 0;
        while( true ) {
          *piVar7 = (int)&local_3d;
          piVar7[-1] = 0x88b3c97;
          local_20 = ScanInt((bool *)*piVar7);
          if (local_3d != '\x01') break;
          *piVar7 = (int)&local_46;
          piVar7[-1] = 0x88b3cb3;
          cVar1 = readTime((short *)*piVar7);
          if (cVar1 != '\x01') {
            *piVar7 = 4;
            piVar7[-1] = 0x88b3cc6;
            puVar3 = (undefined4 *)__cxa_allocate_exception();
            *puVar3 = "start time";
            piVar7[2] = 0;
            piVar7[1] = (int)&char_const*::typeinfo;
            *piVar7 = (int)puVar3;
                    /* WARNING: Subroutine does not return */
            piVar7[-1] = 0x88b3ce6;
            __cxa_throw();
          }
          *piVar7 = (int)&local_4e;
          piVar7[-1] = 0x88b3cf1;
          cVar1 = readTime((short *)*piVar7);
          if (cVar1 != '\x01') {
            *piVar7 = 4;
            piVar7[-1] = 0x88b3d04;
            puVar3 = (undefined4 *)__cxa_allocate_exception();
            *puVar3 = "end time";
            piVar7[2] = 0;
            piVar7[1] = (int)&char_const*::typeinfo;
            *piVar7 = (int)puVar3;
                    /* WARNING: Subroutine does not return */
            piVar7[-1] = 0x88b3d24;
            __cxa_throw();
          }
          *piVar7 = (int)&local_4e;
          piVar7[-1] = 0x88b3d2f;
          iVar4 = uint32Time((short *)*piVar7);
          *piVar7 = (int)&local_46;
          piVar7[-1] = 0x88b3d3c;
          iVar5 = uint32Time((short *)*piVar7);
          piVar7[3] = iVar4;
          piVar7[2] = iVar5;
          piVar7[1] = local_20;
          *piVar7 = (int)local_5c;
          piVar7[-1] = 0x88b3d56;
          SEventPeriodData::SEventPeriodData
                    ((SEventPeriodData *)*piVar7,piVar7[1],piVar7[2],piVar7[3]);
          piVar7[1] = (int)param_1;
          *piVar7 = (int)&local_38;
          piVar7[-1] = 0x88b3d68;
          std::vector<ARAD::SCRIPT::SEventPeriodData,std::allocator<ARAD::SCRIPT::SEventPeriodData>>
          ::end();
          piVar7[1] = (int)param_1;
          *piVar7 = (int)&local_34;
          piVar7[-1] = 0x88b3d7d;
          std::vector<ARAD::SCRIPT::SEventPeriodData,std::allocator<ARAD::SCRIPT::SEventPeriodData>>
          ::begin();
          piVar7[3] = (int)local_5c;
          piVar7[2] = local_38;
          piVar7[1] = local_34;
          *piVar7 = (int)local_60;
          piVar7[-1] = 0x88b3da0;
          std::
          find<__gnu_cxx::__normal_iterator<ARAD::SCRIPT::SEventPeriodData*,std::vector<ARAD::SCRIPT::SEventPeriodData,std::allocator<ARAD::SCRIPT::SEventPeriodData>>>,ARAD::SCRIPT::SEventPeriodData>
                    ();
          *piVar7 = (int)param_1;
          piVar7[-1] = (int)local_30;
          piVar7[-2] = 0x88b3db5;
          std::vector<ARAD::SCRIPT::SEventPeriodData,std::allocator<ARAD::SCRIPT::SEventPeriodData>>
          ::end();
          *piVar7 = (int)local_30;
          piVar7[-1] = (int)local_60;
          piVar7[-2] = 0x88b3dca;
          bVar2 = __gnu_cxx::operator!=
                            ((__normal_iterator *)piVar7[-1],(__normal_iterator *)*piVar7);
          if (bVar2) {
            piVar7[-1] = 4;
            piVar7[-2] = 0x88b3dda;
            puVar3 = (undefined4 *)__cxa_allocate_exception();
            *puVar3 = "already exist";
            piVar7[1] = 0;
            *piVar7 = (int)&char_const*::typeinfo;
            piVar7[-1] = (int)puVar3;
                    /* WARNING: Subroutine does not return */
            piVar7[-2] = 0x88b3dfa;
            __cxa_throw();
          }
          *piVar7 = (int)local_5c;
          piVar7[-1] = (int)param_1;
          piVar7[-2] = 0x88b3e0c;
          std::vector<ARAD::SCRIPT::SEventPeriodData,std::allocator<ARAD::SCRIPT::SEventPeriodData>>
          ::push_back((vector<ARAD::SCRIPT::SEventPeriodData,std::allocator<ARAD::SCRIPT::SEventPeriodData>>
                       *)piVar7[-1],(SEventPeriodData *)*piVar7);
          piVar7 = piVar7 + -1;
        }
      }
      else {
        piVar7[1] = (int)"[reward period]";
        *piVar7 = (int)local_3c;
        piVar7[-1] = 0x88b3e24;
        bVar2 = std::operator==((string *)*piVar7,(char *)piVar7[1]);
        if (bVar2) {
          local_1c = 0;
          local_68 = 0;
          local_64 = 0;
          local_70 = 0;
          local_6c = 0;
          local_18 = 0;
          local_12 = 0;
          while( true ) {
            *piVar7 = (int)&local_3d;
            piVar7[-1] = 0x88b3e67;
            local_1c = ScanInt((bool *)*piVar7);
            if (local_3d != '\x01') break;
            *piVar7 = (int)&local_68;
            piVar7[-1] = 0x88b3e86;
            cVar1 = readTime((short *)*piVar7);
            if (cVar1 != '\x01') {
              *piVar7 = 4;
              piVar7[-1] = 0x88b3e99;
              puVar3 = (undefined4 *)__cxa_allocate_exception();
              *puVar3 = "start time";
              piVar7[2] = 0;
              piVar7[1] = (int)&char_const*::typeinfo;
              *piVar7 = (int)puVar3;
                    /* WARNING: Subroutine does not return */
              piVar7[-1] = 0x88b3eb9;
              __cxa_throw();
            }
            *piVar7 = (int)&local_70;
            piVar7[-1] = 0x88b3ec4;
            cVar1 = readTime((short *)*piVar7);
            if (cVar1 != '\x01') {
              *piVar7 = 4;
              piVar7[-1] = 0x88b3ed7;
              puVar3 = (undefined4 *)__cxa_allocate_exception();
              *puVar3 = "end time";
              piVar7[2] = 0;
              piVar7[1] = (int)&char_const*::typeinfo;
              *piVar7 = (int)puVar3;
                    /* WARNING: Subroutine does not return */
              piVar7[-1] = 0x88b3ef7;
              __cxa_throw();
            }
            *piVar7 = (int)&local_3d;
            piVar7[-1] = 0x88b3f02;
            local_18 = ScanInt((bool *)*piVar7);
            if (local_3d != '\x01') {
              *piVar7 = 4;
              piVar7[-1] = 0x88b3f1c;
              puVar3 = (undefined4 *)__cxa_allocate_exception();
              *puVar3 = "item index";
              piVar7[2] = 0;
              piVar7[1] = (int)&char_const*::typeinfo;
              *piVar7 = (int)puVar3;
                    /* WARNING: Subroutine does not return */
              piVar7[-1] = 0x88b3f3c;
              __cxa_throw();
            }
            *piVar7 = (int)&local_3d;
            piVar7[-1] = 0x88b3f47;
            local_12 = ScanInt((bool *)*piVar7);
            if (local_3d != '\x01') {
              *piVar7 = 4;
              piVar7[-1] = 0x88b3f62;
              puVar3 = (undefined4 *)__cxa_allocate_exception();
              *puVar3 = "item count";
              piVar7[2] = 0;
              piVar7[1] = (int)&char_const*::typeinfo;
              *piVar7 = (int)puVar3;
                    /* WARNING: Subroutine does not return */
              piVar7[-1] = 0x88b3f82;
              __cxa_throw();
            }
            *piVar7 = (int)&local_70;
            piVar7[-1] = 0x88b3f8d;
            iVar4 = uint32Time((short *)*piVar7);
            *piVar7 = (int)&local_68;
            piVar7[-1] = 0x88b3f9a;
            iVar5 = uint32Time((short *)*piVar7);
            piVar7[5] = iVar4;
            piVar7[4] = iVar5;
            piVar7[3] = (int)local_12;
            piVar7[2] = local_18;
            piVar7[1] = local_1c;
            *piVar7 = (int)local_84;
            piVar7[-1] = 0x88b3fc3;
            SRewardPeriodData::SRewardPeriodData
                      ((SRewardPeriodData *)*piVar7,piVar7[1],piVar7[2],(short)piVar7[3],piVar7[4],
                       piVar7[5]);
            piVar7[1] = (int)param_2;
            *piVar7 = (int)&local_2c;
            piVar7[-1] = 0x88b3fd5;
            std::
            vector<ARAD::SCRIPT::SRewardPeriodData,std::allocator<ARAD::SCRIPT::SRewardPeriodData>>
            ::end();
            piVar7[1] = (int)param_2;
            *piVar7 = (int)&local_28;
            piVar7[-1] = 0x88b3fea;
            std::
            vector<ARAD::SCRIPT::SRewardPeriodData,std::allocator<ARAD::SCRIPT::SRewardPeriodData>>
            ::begin();
            piVar7[3] = (int)local_84;
            piVar7[2] = local_2c;
            piVar7[1] = local_28;
            *piVar7 = (int)local_88;
            piVar7[-1] = 0x88b4010;
            std::
            find<__gnu_cxx::__normal_iterator<ARAD::SCRIPT::SRewardPeriodData*,std::vector<ARAD::SCRIPT::SRewardPeriodData,std::allocator<ARAD::SCRIPT::SRewardPeriodData>>>,ARAD::SCRIPT::SRewardPeriodData>
                      ();
            *piVar7 = (int)param_2;
            piVar7[-1] = (int)local_24;
            piVar7[-2] = 0x88b4025;
            std::
            vector<ARAD::SCRIPT::SRewardPeriodData,std::allocator<ARAD::SCRIPT::SRewardPeriodData>>
            ::end();
            *piVar7 = (int)local_24;
            piVar7[-1] = (int)local_88;
            piVar7[-2] = 0x88b403d;
            bVar2 = __gnu_cxx::operator!=
                              ((__normal_iterator *)piVar7[-1],(__normal_iterator *)*piVar7);
            if (bVar2) {
              piVar7[-1] = 4;
              piVar7[-2] = 0x88b404d;
              puVar3 = (undefined4 *)__cxa_allocate_exception();
              *puVar3 = "already exist";
              piVar7[1] = 0;
              *piVar7 = (int)&char_const*::typeinfo;
              piVar7[-1] = (int)puVar3;
                    /* WARNING: Subroutine does not return */
              piVar7[-2] = 0x88b406d;
              __cxa_throw();
            }
            *piVar7 = (int)local_84;
            piVar7[-1] = (int)param_2;
            piVar7[-2] = 0x88b407f;
            std::
            vector<ARAD::SCRIPT::SRewardPeriodData,std::allocator<ARAD::SCRIPT::SRewardPeriodData>>
            ::push_back((vector<ARAD::SCRIPT::SRewardPeriodData,std::allocator<ARAD::SCRIPT::SRewardPeriodData>>
                         *)piVar7[-1],(SRewardPeriodData *)*piVar7);
            piVar7 = piVar7 + -1;
          }
        }
      }
    }
    *piVar7 = (int)local_3c;
                    /* try { // try from 088b408b to 088b408f has its CatchHandler @ 088b40aa */
    piVar7[-1] = 0x88b4090;
    std::string::~string((string *)*piVar7);
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}
```
