# _add

`_ZN16CAICharacterList4_addEP12CAICharacter`

`CAICharacterList::_add(CAICharacter*)`

| 类 | 地址 |
|---|---|
| `CAICharacterList` | `0x0834a61c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0834a61c  _ZN16CAICharacterList4_addEP12CAICharacter
#           CAICharacterList::_add(CAICharacter*)
# range [0x0834a61c, 0x0834a9d1]
0834a61c +0x000:  push   %ebp
0834a61d +0x001:  mov    %esp,%ebp
0834a61f +0x003:  push   %esi
0834a620 +0x004:  push   %ebx
0834a621 +0x005:  sub    $0xb0,%esp
0834a627 +0x00b:  mov    0xc(%ebp),%eax
0834a62a +0x00e:  mov    %eax,(%esp)
0834a62d +0x011:  call   08150850 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x185>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x185
0834a632 +0x016:  mov    %eax,-0x6c(%ebp)
0834a635 +0x019:  lea    -0x74(%ebp),%eax
0834a638 +0x01c:  lea    0xc(%ebp),%edx
0834a63b +0x01f:  mov    %edx,0x8(%esp)
0834a63f +0x023:  lea    -0x6c(%ebp),%edx
0834a642 +0x026:  mov    %edx,0x4(%esp)
0834a646 +0x02a:  mov    %eax,(%esp)
0834a649 +0x02d:  call   08388909 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x183a9>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x183a9
0834a64e +0x032:  sub    $0x4,%esp
0834a651 +0x035:  lea    -0x74(%ebp),%eax
0834a654 +0x038:  mov    %eax,0x4(%esp)
0834a658 +0x03c:  lea    -0x7c(%ebp),%eax
0834a65b +0x03f:  mov    %eax,(%esp)
0834a65e +0x042:  call   08388950 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x183f0>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x183f0
0834a663 +0x047:  mov    0x8(%ebp),%edx
0834a666 +0x04a:  lea    -0x84(%ebp),%eax
0834a66c +0x050:  lea    -0x7c(%ebp),%ecx
0834a66f +0x053:  mov    %ecx,0x8(%esp)
0834a673 +0x057:  mov    %edx,0x4(%esp)
0834a677 +0x05b:  mov    %eax,(%esp)
0834a67a +0x05e:  call   08388982 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x18422>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x18422
0834a67f +0x063:  sub    $0x4,%esp
0834a682 +0x066:  movzbl -0x80(%ebp),%eax
0834a686 +0x06a:  xor    $0x1,%eax
0834a689 +0x06d:  test   %al,%al
0834a68b +0x06f:  je     0834a697 <+0x7b>
0834a68d +0x071:  mov    $0x0,%eax
0834a692 +0x076:  jmp    0834a9c7 <+0x3ab>
0834a697 +0x07b:  mov    0xc(%ebp),%eax
0834a69a +0x07e:  mov    %eax,(%esp)
0834a69d +0x081:  call   0815085a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x18f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x18f
0834a6a2 +0x086:  sub    $0x5,%eax
0834a6a5 +0x089:  mov    %eax,-0xc(%ebp)
0834a6a8 +0x08c:  jmp    0834a70e <+0xf2>
0834a6aa +0x08e:  cmpl   $0x62,-0xc(%ebp)
0834a6ae +0x092:  jbe    0834a6e6 <+0xca>
0834a6b0 +0x094:  movl   $0x0,0xc(%esp)
0834a6b8 +0x09c:  movl   $0x537,0x8(%esp)
0834a6c0 +0x0a4:  movl   $&_ZZN16CAICharacterList4_addEP12CAICharacterE19__PRETTY_FUNCTION__,0x4(%esp)
0834a6c8 +0x0ac:  lea    -0x68(%ebp),%eax
0834a6cb +0x0af:  mov    %eax,(%esp)
0834a6ce +0x0b2:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0834a6d3 +0x0b7:  movl   $"aiCharacter Script file load failed",0x4(%esp)
0834a6db +0x0bf:  lea    -0x68(%ebp),%eax
0834a6de +0x0c2:  mov    %eax,(%esp)
0834a6e1 +0x0c5:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0834a6e6 +0x0ca:  mov    -0xc(%ebp),%edx
0834a6e9 +0x0cd:  mov    %edx,%eax
0834a6eb +0x0cf:  add    %eax,%eax
0834a6ed +0x0d1:  add    %edx,%eax
0834a6ef +0x0d3:  shl    $0x2,%eax
0834a6f2 +0x0d6:  add    $0x10,%eax
0834a6f5 +0x0d9:  add    0x8(%ebp),%eax
0834a6f8 +0x0dc:  lea    0x8(%eax),%edx
0834a6fb +0x0df:  lea    0xc(%ebp),%eax
0834a6fe +0x0e2:  mov    %eax,0x4(%esp)
0834a702 +0x0e6:  mov    %edx,(%esp)
0834a705 +0x0e9:  call   083889ae <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1844e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1844e
0834a70a +0x0ee:  addl   $0x1,-0xc(%ebp)
0834a70e +0x0f2:  mov    0xc(%ebp),%eax
0834a711 +0x0f5:  mov    %eax,(%esp)
0834a714 +0x0f8:  call   0815085a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x18f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x18f
0834a719 +0x0fd:  add    $0x5,%eax
0834a71c +0x100:  cmp    -0xc(%ebp),%eax
0834a71f +0x103:  seta   %al
0834a722 +0x106:  test   %al,%al
0834a724 +0x108:  jne    0834a6aa <+0x8e>
0834a726 +0x10a:  mov    0xc(%ebp),%eax
0834a729 +0x10d:  mov    %eax,(%esp)
0834a72c +0x110:  call   08150866 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x19b>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x19b
0834a731 +0x115:  test   %eax,%eax
0834a733 +0x117:  setne  %al
0834a736 +0x11a:  test   %al,%al
0834a738 +0x11c:  je     0834a992 <+0x376>
0834a73e +0x122:  mov    0xc(%ebp),%eax
0834a741 +0x125:  mov    %eax,(%esp)
0834a744 +0x128:  call   08150866 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x19b>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x19b
0834a749 +0x12d:  mov    %eax,-0x58(%ebp)
0834a74c +0x130:  mov    0x8(%ebp),%eax
0834a74f +0x133:  lea    0x4c0(%eax),%ecx
0834a755 +0x139:  lea    -0x88(%ebp),%eax
0834a75b +0x13f:  lea    -0x58(%ebp),%edx
0834a75e +0x142:  mov    %edx,0x8(%esp)
0834a762 +0x146:  mov    %ecx,0x4(%esp)
0834a766 +0x14a:  mov    %eax,(%esp)
0834a769 +0x14d:  call   08388a22 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x184c2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x184c2
0834a76e +0x152:  sub    $0x4,%esp
0834a771 +0x155:  mov    0x8(%ebp),%eax
0834a774 +0x158:  lea    0x4c0(%eax),%edx
0834a77a +0x15e:  lea    -0x54(%ebp),%eax
0834a77d +0x161:  mov    %edx,0x4(%esp)
0834a781 +0x165:  mov    %eax,(%esp)
0834a784 +0x168:  call   08388a4e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x184ee>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x184ee
0834a789 +0x16d:  sub    $0x4,%esp
0834a78c +0x170:  lea    -0x54(%ebp),%eax
0834a78f +0x173:  mov    %eax,0x4(%esp)
0834a793 +0x177:  lea    -0x88(%ebp),%eax
0834a799 +0x17d:  mov    %eax,(%esp)
0834a79c +0x180:  call   08388a74 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x18514>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x18514
0834a7a1 +0x185:  test   %al,%al
0834a7a3 +0x187:  je     0834a7ca <+0x1ae>
0834a7a5 +0x189:  lea    -0x88(%ebp),%eax
0834a7ab +0x18f:  mov    %eax,(%esp)
0834a7ae +0x192:  call   08388a88 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x18528>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x18528
0834a7b3 +0x197:  lea    0x4(%eax),%edx
0834a7b6 +0x19a:  lea    0xc(%ebp),%eax
0834a7b9 +0x19d:  mov    %eax,0x4(%esp)
0834a7bd +0x1a1:  mov    %edx,(%esp)
0834a7c0 +0x1a4:  call   083889ae <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1844e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1844e
0834a7c5 +0x1a9:  jmp    0834a8be <+0x2a2>
0834a7ca +0x1ae:  lea    -0x9c(%ebp),%eax
0834a7d0 +0x1b4:  mov    %eax,(%esp)
0834a7d3 +0x1b7:  call   0838749c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x16f3c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x16f3c
0834a7d8 +0x1bc:  lea    0xc(%ebp),%eax
0834a7db +0x1bf:  mov    %eax,0x4(%esp)
0834a7df +0x1c3:  lea    -0x9c(%ebp),%eax
0834a7e5 +0x1c9:  mov    %eax,(%esp)
0834a7e8 +0x1cc:  call   083889ae <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1844e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1844e
0834a7ed +0x1d1:  mov    0xc(%ebp),%eax
0834a7f0 +0x1d4:  mov    %eax,(%esp)
0834a7f3 +0x1d7:  call   08150866 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x19b>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x19b
0834a7f8 +0x1dc:  mov    %eax,-0x28(%ebp)
0834a7fb +0x1df:  lea    -0x38(%ebp),%eax
0834a7fe +0x1e2:  lea    -0x9c(%ebp),%edx
0834a804 +0x1e8:  mov    %edx,0x8(%esp)
0834a808 +0x1ec:  lea    -0x28(%ebp),%edx
0834a80b +0x1ef:  mov    %edx,0x4(%esp)
0834a80f +0x1f3:  mov    %eax,(%esp)
0834a812 +0x1f6:  call   08388a95 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x18535>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x18535
0834a817 +0x1fb:  sub    $0x4,%esp
0834a81a +0x1fe:  lea    -0x38(%ebp),%eax
0834a81d +0x201:  mov    %eax,0x4(%esp)
0834a821 +0x205:  lea    -0x48(%ebp),%eax
0834a824 +0x208:  mov    %eax,(%esp)
0834a827 +0x20b:  call   08388ae2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x18582>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x18582
0834a82c +0x210:  mov    0x8(%ebp),%eax
0834a82f +0x213:  lea    0x4c0(%eax),%ecx
0834a835 +0x219:  lea    -0x50(%ebp),%eax
0834a838 +0x21c:  lea    -0x48(%ebp),%edx
0834a83b +0x21f:  mov    %edx,0x8(%esp)
0834a83f +0x223:  mov    %ecx,0x4(%esp)
0834a843 +0x227:  mov    %eax,(%esp)
0834a846 +0x22a:  call   08388b1c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x185bc>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x185bc
0834a84b +0x22f:  sub    $0x4,%esp
0834a84e +0x232:  lea    -0x48(%ebp),%eax
0834a851 +0x235:  mov    %eax,(%esp)
0834a854 +0x238:  call   08376c86 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x6726>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x6726
0834a859 +0x23d:  jmp    0834a885 <+0x269>
0834a85b +0x23f:  mov    %edx,%ebx
0834a85d +0x241:  mov    %eax,%esi
0834a85f +0x243:  lea    -0x48(%ebp),%eax
0834a862 +0x246:  mov    %eax,(%esp)
0834a865 +0x249:  call   08376c86 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x6726>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x6726
0834a86a +0x24e:  mov    %esi,%eax
0834a86c +0x250:  mov    %ebx,%edx
0834a86e +0x252:  jmp    0834a870 <+0x254>
0834a870 +0x254:  mov    %edx,%ebx
0834a872 +0x256:  mov    %eax,%esi
0834a874 +0x258:  lea    -0x38(%ebp),%eax
0834a877 +0x25b:  mov    %eax,(%esp)
0834a87a +0x25e:  call   08376c70 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x6710>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x6710
0834a87f +0x263:  mov    %esi,%eax
0834a881 +0x265:  mov    %ebx,%edx
0834a883 +0x267:  jmp    0834a892 <+0x276>
0834a885 +0x269:  lea    -0x38(%ebp),%eax
0834a888 +0x26c:  mov    %eax,(%esp)
0834a88b +0x26f:  call   08376c70 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x6710>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x6710
0834a890 +0x274:  jmp    0834a8b0 <+0x294>
0834a892 +0x276:  mov    %edx,%ebx
0834a894 +0x278:  mov    %eax,%esi
0834a896 +0x27a:  lea    -0x9c(%ebp),%eax
0834a89c +0x280:  mov    %eax,(%esp)
0834a89f +0x283:  call   083874b0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x16f50>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x16f50
0834a8a4 +0x288:  mov    %esi,%eax
0834a8a6 +0x28a:  mov    %ebx,%edx
0834a8a8 +0x28c:  mov    %eax,(%esp)
0834a8ab +0x28f:  call   08ae3750 <_Unwind_Resume>
0834a8b0 +0x294:  lea    -0x9c(%ebp),%eax
0834a8b6 +0x29a:  mov    %eax,(%esp)
0834a8b9 +0x29d:  call   083874b0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x16f50>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x16f50
0834a8be +0x2a2:  mov    0x8(%ebp),%eax
0834a8c1 +0x2a5:  mov    0x4bc(%eax),%ebx
0834a8c7 +0x2ab:  mov    0xc(%ebp),%eax
0834a8ca +0x2ae:  mov    %eax,(%esp)
0834a8cd +0x2b1:  call   08150866 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x19b>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x19b
0834a8d2 +0x2b6:  cmp    %eax,%ebx
0834a8d4 +0x2b8:  jae    0834a8e1 <+0x2c5>
0834a8d6 +0x2ba:  mov    0x8(%ebp),%eax
0834a8d9 +0x2bd:  mov    0x4bc(%eax),%eax
0834a8df +0x2c3:  jmp    0834a8ec <+0x2d0>
0834a8e1 +0x2c5:  mov    0xc(%ebp),%eax
0834a8e4 +0x2c8:  mov    %eax,(%esp)
0834a8e7 +0x2cb:  call   08150866 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x19b>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x19b
0834a8ec +0x2d0:  mov    0x8(%ebp),%edx
0834a8ef +0x2d3:  mov    %eax,0x4bc(%edx)
0834a8f5 +0x2d9:  movl   $0x1,-0x14(%ebp)
0834a8fc +0x2e0:  mov    0xc(%ebp),%eax
0834a8ff +0x2e3:  mov    %eax,(%esp)
0834a902 +0x2e6:  call   08150866 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x19b>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x19b
0834a907 +0x2eb:  mov    %eax,-0x10(%ebp)
0834a90a +0x2ee:  lea    -0x1c(%ebp),%eax
0834a90d +0x2f1:  lea    -0x14(%ebp),%edx
0834a910 +0x2f4:  mov    %edx,0x8(%esp)
0834a914 +0x2f8:  lea    -0x10(%ebp),%edx
0834a917 +0x2fb:  mov    %edx,0x4(%esp)
0834a91b +0x2ff:  mov    %eax,(%esp)
0834a91e +0x302:  call   081b8d41 <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x548>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x548
0834a923 +0x307:  sub    $0x4,%esp
0834a926 +0x30a:  lea    -0x1c(%ebp),%eax
0834a929 +0x30d:  mov    %eax,0x4(%esp)
0834a92d +0x311:  lea    -0x24(%ebp),%eax
0834a930 +0x314:  mov    %eax,(%esp)
0834a933 +0x317:  call   080c6d20 <_GLOBAL__I_g_ServerString_+0x28b>  ; global constructors keyed to g_ServerString_+0x28b
0834a938 +0x31c:  mov    0x8(%ebp),%eax
0834a93b +0x31f:  lea    0x520(%eax),%ecx
0834a941 +0x325:  lea    -0x90(%ebp),%eax
0834a947 +0x32b:  lea    -0x24(%ebp),%edx
0834a94a +0x32e:  mov    %edx,0x8(%esp)
0834a94e +0x332:  mov    %ecx,0x4(%esp)
0834a952 +0x336:  mov    %eax,(%esp)
0834a955 +0x339:  call   080c6d50 <_GLOBAL__I_g_ServerString_+0x2bb>  ; global constructors keyed to g_ServerString_+0x2bb
0834a95a +0x33e:  sub    $0x4,%esp
0834a95d +0x341:  movzbl -0x8c(%ebp),%eax
0834a964 +0x348:  xor    $0x1,%eax
0834a967 +0x34b:  test   %al,%al
0834a969 +0x34d:  je     0834a992 <+0x376>
0834a96b +0x34f:  lea    -0x90(%ebp),%eax
0834a971 +0x355:  mov    %eax,(%esp)
0834a974 +0x358:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
0834a979 +0x35d:  mov    %eax,%ebx
0834a97b +0x35f:  lea    -0x90(%ebp),%eax
0834a981 +0x365:  mov    %eax,(%esp)
0834a984 +0x368:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
0834a989 +0x36d:  mov    0x4(%eax),%eax
0834a98c +0x370:  add    $0x1,%eax
0834a98f +0x373:  mov    %eax,0x4(%ebx)
0834a992 +0x376:  mov    0xc(%ebp),%eax
0834a995 +0x379:  mov    %eax,(%esp)
0834a998 +0x37c:  call   08373a8e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xda5a>  ; global constructors keyed to CServerEvent::m_nExpRate+0xda5a
0834a99d +0x381:  mov    %eax,%edx
0834a99f +0x383:  mov    %edx,%eax
0834a9a1 +0x385:  add    %eax,%eax
0834a9a3 +0x387:  add    %edx,%eax
0834a9a5 +0x389:  shl    $0x2,%eax
0834a9a8 +0x38c:  add    $0x4d0,%eax
0834a9ad +0x391:  add    0x8(%ebp),%eax
0834a9b0 +0x394:  lea    0x8(%eax),%edx
0834a9b3 +0x397:  lea    0xc(%ebp),%eax
0834a9b6 +0x39a:  mov    %eax,0x4(%esp)
0834a9ba +0x39e:  mov    %edx,(%esp)
0834a9bd +0x3a1:  call   083889ae <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1844e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1844e
0834a9c2 +0x3a6:  mov    $0x1,%eax
0834a9c7 +0x3ab:  lea    -0x8(%ebp),%esp
0834a9ca +0x3ae:  add    $0x0,%esp
0834a9cd +0x3b1:  pop    %ebx
0834a9ce +0x3b2:  pop    %esi
0834a9cf +0x3b3:  pop    %ebp
0834a9d0 +0x3b4:  ret
0834a9d1 +0x3b5:  nop
```

## 反编译 C

```c
// CAICharacterList::_add @ 0x834a61c

/* CAICharacterList::_add(CAICharacter*) */

undefined4 __thiscall CAICharacterList::_add(CAICharacterList *this,CAICharacter *param_1)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  vector<CAICharacter*,std::allocator<CAICharacter*>> local_a0 [12];
  _Rb_tree_iterator<std::pair<int_const,int>> local_94 [4];
  char local_90;
  _Rb_tree_iterator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>
  local_8c [4];
  pair local_88 [4];
  char local_84;
  pair<int_const,CAICharacter*> local_80 [8];
  uint local_78 [2];
  CAICharacter *local_70;
  cMyTrace local_6c [16];
  undefined4 local_5c;
  map<int,std::vector<CAICharacter*,std::allocator<CAICharacter*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>>
  local_58 [4];
  pair local_54 [8];
  pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>> local_4c [16];
  pair<int,std::vector<CAICharacter*,std::allocator<CAICharacter*>>> local_3c [16];
  undefined4 local_2c;
  pair<int_const,int> local_28 [8];
  int local_20 [2];
  undefined4 local_18;
  int local_14;
  uint local_10;
  
  local_70 = (CAICharacter *)CAICharacter::getIdx(param_1);
  std::make_pair<unsigned_int,CAICharacter*&>(local_78,&local_70);
  std::pair<int_const,CAICharacter*>::pair<unsigned_int,CAICharacter*>(local_80,(pair *)local_78);
  std::map<int,CAICharacter*,std::less<int>,std::allocator<std::pair<int_const,CAICharacter*>>>::
  insert(local_88);
  if (local_84 == '\x01') {
    iVar4 = CAICharacter::getLevel(param_1);
    local_10 = iVar4 - 5;
    while( true ) {
      iVar4 = CAICharacter::getLevel(param_1);
      if (iVar4 + 5U <= local_10) break;
      if (0x62 < local_10) {
        cMyTrace::cMyTrace(local_6c,"bool CAICharacterList::_add(CAICharacter*)",0x537,0);
        cMyTrace::operator()(local_6c,"aiCharacter Script file load failed");
      }
      std::vector<CAICharacter*,std::allocator<CAICharacter*>>::push_back
                ((vector<CAICharacter*,std::allocator<CAICharacter*>> *)
                 (this + local_10 * 0xc + 0x18),&param_1);
      local_10 = local_10 + 1;
    }
    iVar4 = CAICharacter::getAppearancePoint(param_1);
    if (iVar4 != 0) {
      local_5c = CAICharacter::getAppearancePoint(param_1);
      std::
      map<int,std::vector<CAICharacter*,std::allocator<CAICharacter*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>>
      ::find((int *)local_8c);
      std::
      map<int,std::vector<CAICharacter*,std::allocator<CAICharacter*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>>
      ::end(local_58);
      cVar2 = std::
              _Rb_tree_iterator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>
              ::operator!=(local_8c,(_Rb_tree_iterator *)local_58);
      if (cVar2 == '\0') {
        std::vector<CAICharacter*,std::allocator<CAICharacter*>>::vector(local_a0);
                    /* try { // try from 0834a7e8 to 0834a816 has its CatchHandler @ 0834a892 */
        std::vector<CAICharacter*,std::allocator<CAICharacter*>>::push_back(local_a0,&param_1);
        local_2c = CAICharacter::getAppearancePoint(param_1);
        std::make_pair<int,std::vector<CAICharacter*,std::allocator<CAICharacter*>>&>
                  ((int *)local_3c,(vector *)&local_2c);
                    /* try { // try from 0834a827 to 0834a82b has its CatchHandler @ 0834a870 */
        std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>::
        pair<int,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>(local_4c,local_3c);
                    /* try { // try from 0834a846 to 0834a84a has its CatchHandler @ 0834a85b */
        std::
        map<int,std::vector<CAICharacter*,std::allocator<CAICharacter*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>>
        ::insert(local_54);
                    /* try { // try from 0834a854 to 0834a858 has its CatchHandler @ 0834a870 */
        std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>::~pair
                  (local_4c);
                    /* try { // try from 0834a88b to 0834a88f has its CatchHandler @ 0834a892 */
        std::pair<int,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>::~pair(local_3c);
        std::vector<CAICharacter*,std::allocator<CAICharacter*>>::~vector(local_a0);
      }
      else {
        iVar4 = std::
                _Rb_tree_iterator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>
                ::operator->(local_8c);
        std::vector<CAICharacter*,std::allocator<CAICharacter*>>::push_back
                  ((vector<CAICharacter*,std::allocator<CAICharacter*>> *)(iVar4 + 4),&param_1);
      }
      uVar1 = *(uint *)(this + 0x4bc);
      uVar5 = CAICharacter::getAppearancePoint(param_1);
      if (uVar1 < uVar5) {
        uVar3 = *(undefined4 *)(this + 0x4bc);
      }
      else {
        uVar3 = CAICharacter::getAppearancePoint(param_1);
      }
      *(undefined4 *)(this + 0x4bc) = uVar3;
      local_18 = 1;
      local_14 = CAICharacter::getAppearancePoint(param_1);
      std::make_pair<int,int>(local_20,&local_14);
      std::pair<int_const,int>::pair<int,int>(local_28,(pair *)local_20);
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert(local_94);
      if (local_90 != '\x01') {
        iVar4 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_94);
        iVar6 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_94);
        *(int *)(iVar4 + 4) = *(int *)(iVar6 + 4) + 1;
      }
    }
    iVar4 = CAICharacter::getRarity(param_1);
    std::vector<CAICharacter*,std::allocator<CAICharacter*>>::push_back
              ((vector<CAICharacter*,std::allocator<CAICharacter*>> *)(this + iVar4 * 0xc + 0x4d8),
               &param_1);
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
