# checkWorkState

`_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE`

`global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette` | `0x081a0911` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081a0911  _GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE
#           global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)
# range [0x081a0911, 0x081a0e8b]
081a0911 +0x000:  push   %ebp
081a0912 +0x001:  mov    %esp,%ebp
081a0914 +0x003:  sub    $0x18,%esp
081a0917 +0x006:  movl   $0xffff,0x4(%esp)
081a091f +0x00e:  movl   $0x1,(%esp)
081a0926 +0x015:  call   081a08d1 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
081a092b +0x01a:  leave
081a092c +0x01b:  ret
081a092d +0x01c:  nop
081a092e +0x01d:  push   %ebp
081a092f +0x01e:  mov    %esp,%ebp
081a0931 +0x020:  sub    $0x18,%esp
081a0934 +0x023:  mov    0x8(%ebp),%eax
081a0937 +0x026:  mov    %eax,(%esp)
081a093a +0x029:  call   081a0942 <+0x31>
081a093f +0x02e:  leave
081a0940 +0x02f:  ret
081a0941 +0x030:  nop
081a0942 +0x031:  push   %ebp
081a0943 +0x032:  mov    %esp,%ebp
081a0945 +0x034:  mov    0x8(%ebp),%eax
081a0948 +0x037:  movb   $0x0,(%eax)
081a094b +0x03a:  mov    0x8(%ebp),%eax
081a094e +0x03d:  movb   $0x0,0x1(%eax)
081a0952 +0x041:  mov    0x8(%ebp),%eax
081a0955 +0x044:  movb   $0x0,0x2(%eax)
081a0959 +0x048:  pop    %ebp
081a095a +0x049:  ret
081a095b +0x04a:  nop
081a095c +0x04b:  push   %ebp
081a095d +0x04c:  mov    %esp,%ebp
081a095f +0x04e:  sub    $0x18,%esp
081a0962 +0x051:  mov    0x8(%ebp),%eax
081a0965 +0x054:  mov    %eax,(%esp)
081a0968 +0x057:  call   081a0970 <+0x5f>
081a096d +0x05c:  leave
081a096e +0x05d:  ret
081a096f +0x05e:  nop
081a0970 +0x05f:  push   %ebp
081a0971 +0x060:  mov    %esp,%ebp
081a0973 +0x062:  mov    0x8(%ebp),%eax
081a0976 +0x065:  movw   $0x0,(%eax)
081a097b +0x06a:  mov    0x8(%ebp),%eax
081a097e +0x06d:  movw   $0x0,0x2(%eax)
081a0984 +0x073:  mov    0x8(%ebp),%eax
081a0987 +0x076:  movw   $0x0,0x4(%eax)
081a098d +0x07c:  pop    %ebp
081a098e +0x07d:  ret
081a098f +0x07e:  nop
081a0990 +0x07f:  push   %ebp
081a0991 +0x080:  mov    %esp,%ebp
081a0993 +0x082:  sub    $0x18,%esp
081a0996 +0x085:  mov    0x8(%ebp),%eax
081a0999 +0x088:  mov    %eax,(%esp)
081a099c +0x08b:  call   081a09a4 <+0x93>
081a09a1 +0x090:  leave
081a09a2 +0x091:  ret
081a09a3 +0x092:  nop
081a09a4 +0x093:  push   %ebp
081a09a5 +0x094:  mov    %esp,%ebp
081a09a7 +0x096:  mov    0x8(%ebp),%eax
081a09aa +0x099:  movb   $0x0,(%eax)
081a09ad +0x09c:  mov    0x8(%ebp),%eax
081a09b0 +0x09f:  movl   $0x0,0x1(%eax)
081a09b7 +0x0a6:  mov    0x8(%ebp),%eax
081a09ba +0x0a9:  movl   $0x0,0x5(%eax)
081a09c1 +0x0b0:  pop    %ebp
081a09c2 +0x0b1:  ret
081a09c3 +0x0b2:  nop
081a09c4 +0x0b3:  push   %ebp
081a09c5 +0x0b4:  mov    %esp,%ebp
081a09c7 +0x0b6:  mov    0x8(%ebp),%eax
081a09ca +0x0b9:  movw   $0x0,(%eax)
081a09cf +0x0be:  mov    0x8(%ebp),%eax
081a09d2 +0x0c1:  movw   $0x0,0x2(%eax)
081a09d8 +0x0c7:  mov    0x8(%ebp),%eax
081a09db +0x0ca:  movl   $0x0,0x4(%eax)
081a09e2 +0x0d1:  mov    0x8(%ebp),%eax
081a09e5 +0x0d4:  movl   $0x0,0x8(%eax)
081a09ec +0x0db:  mov    0x8(%ebp),%eax
081a09ef +0x0de:  movl   $0x0,0xc(%eax)
081a09f6 +0x0e5:  pop    %ebp
081a09f7 +0x0e6:  ret
081a09f8 +0x0e7:  push   %ebp
081a09f9 +0x0e8:  mov    %esp,%ebp
081a09fb +0x0ea:  sub    $0x18,%esp
081a09fe +0x0ed:  mov    0x8(%ebp),%eax
081a0a01 +0x0f0:  mov    %eax,(%esp)
081a0a04 +0x0f3:  call   081a09c4 <+0xb3>
081a0a09 +0x0f8:  leave
081a0a0a +0x0f9:  ret
081a0a0b +0x0fa:  nop
081a0a0c +0x0fb:  push   %ebp
081a0a0d +0x0fc:  mov    %esp,%ebp
081a0a0f +0x0fe:  mov    0x8(%ebp),%eax
081a0a12 +0x101:  movw   $0x0,(%eax)
081a0a17 +0x106:  mov    0x8(%ebp),%eax
081a0a1a +0x109:  movw   $0x0,0x2(%eax)
081a0a20 +0x10f:  mov    0x8(%ebp),%eax
081a0a23 +0x112:  movl   $0x0,0x4(%eax)
081a0a2a +0x119:  pop    %ebp
081a0a2b +0x11a:  ret
081a0a2c +0x11b:  push   %ebp
081a0a2d +0x11c:  mov    %esp,%ebp
081a0a2f +0x11e:  sub    $0x18,%esp
081a0a32 +0x121:  mov    0x8(%ebp),%eax
081a0a35 +0x124:  mov    %eax,(%esp)
081a0a38 +0x127:  call   081a0a40 <+0x12f>
081a0a3d +0x12c:  leave
081a0a3e +0x12d:  ret
081a0a3f +0x12e:  nop
081a0a40 +0x12f:  push   %ebp
081a0a41 +0x130:  mov    %esp,%ebp
081a0a43 +0x132:  sub    $0x18,%esp
081a0a46 +0x135:  mov    0x8(%ebp),%eax
081a0a49 +0x138:  movw   $0x0,0x14(%eax)
081a0a4f +0x13e:  mov    0x8(%ebp),%eax
081a0a52 +0x141:  mov    %eax,(%esp)
081a0a55 +0x144:  call   081a0a0c <+0xfb>
081a0a5a +0x149:  mov    0x8(%ebp),%eax
081a0a5d +0x14c:  add    $0x8,%eax
081a0a60 +0x14f:  mov    %eax,(%esp)
081a0a63 +0x152:  call   081a0a0c <+0xfb>
081a0a68 +0x157:  leave
081a0a69 +0x158:  ret
081a0a6a +0x159:  push   %ebp
081a0a6b +0x15a:  mov    %esp,%ebp
081a0a6d +0x15c:  sub    $0x18,%esp
081a0a70 +0x15f:  mov    0x8(%ebp),%eax
081a0a73 +0x162:  mov    %eax,(%esp)
081a0a76 +0x165:  call   081a0a7e <+0x16d>
081a0a7b +0x16a:  leave
081a0a7c +0x16b:  ret
081a0a7d +0x16c:  nop
081a0a7e +0x16d:  push   %ebp
081a0a7f +0x16e:  mov    %esp,%ebp
081a0a81 +0x170:  mov    0x8(%ebp),%eax
081a0a84 +0x173:  movw   $0x0,(%eax)
081a0a89 +0x178:  mov    0x8(%ebp),%eax
081a0a8c +0x17b:  movw   $0x0,0x2(%eax)
081a0a92 +0x181:  mov    0x8(%ebp),%eax
081a0a95 +0x184:  movl   $0x0,0x4(%eax)
081a0a9c +0x18b:  mov    0x8(%ebp),%eax
081a0a9f +0x18e:  movl   $0x0,0x8(%eax)
081a0aa6 +0x195:  mov    0x8(%ebp),%eax
081a0aa9 +0x198:  movw   $0x0,0xc(%eax)
081a0aaf +0x19e:  pop    %ebp
081a0ab0 +0x19f:  ret
081a0ab1 +0x1a0:  nop
081a0ab2 +0x1a1:  push   %ebp
081a0ab3 +0x1a2:  mov    %esp,%ebp
081a0ab5 +0x1a4:  push   %ebx
081a0ab6 +0x1a5:  mov    0x8(%ebp),%eax
081a0ab9 +0x1a8:  mov    0x20(%eax),%eax
081a0abc +0x1ab:  cmp    $0x10,%eax
081a0abf +0x1ae:  ja     081a0ade <+0x1cd>
081a0ac1 +0x1b0:  mov    $0x1,%edx
081a0ac6 +0x1b5:  mov    %edx,%ebx
081a0ac8 +0x1b7:  mov    %eax,%ecx
081a0aca +0x1b9:  shl    %cl,%ebx
081a0acc +0x1bb:  mov    %ebx,%eax
081a0ace +0x1bd:  and    $&_ZL14gUnicodeBuffer+0xc174,%eax
081a0ad3 +0x1c2:  test   %eax,%eax
081a0ad5 +0x1c4:  je     081a0ade <+0x1cd>
081a0ad7 +0x1c6:  mov    $0x1,%eax
081a0adc +0x1cb:  jmp    081a0ae3 <+0x1d2>
081a0ade +0x1cd:  mov    $0x0,%eax
081a0ae3 +0x1d2:  pop    %ebx
081a0ae4 +0x1d3:  pop    %ebp
081a0ae5 +0x1d4:  ret
081a0ae6 +0x1d5:  push   %ebp
081a0ae7 +0x1d6:  mov    %esp,%ebp
081a0ae9 +0x1d8:  mov    $0x0,%eax
081a0aee +0x1dd:  pop    %ebp
081a0aef +0x1de:  ret
081a0af0 +0x1df:  push   %ebp
081a0af1 +0x1e0:  mov    %esp,%ebp
081a0af3 +0x1e2:  mov    $0x0,%eax
081a0af8 +0x1e7:  pop    %ebp
081a0af9 +0x1e8:  ret
081a0afa +0x1e9:  push   %ebp
081a0afb +0x1ea:  mov    %esp,%ebp
081a0afd +0x1ec:  mov    $0x0,%eax
081a0b02 +0x1f1:  pop    %ebp
081a0b03 +0x1f2:  ret
081a0b04 +0x1f3:  push   %ebp
081a0b05 +0x1f4:  mov    %esp,%ebp
081a0b07 +0x1f6:  mov    $0x0,%eax
081a0b0c +0x1fb:  pop    %ebp
081a0b0d +0x1fc:  ret
081a0b0e +0x1fd:  push   %ebp
081a0b0f +0x1fe:  mov    %esp,%ebp
081a0b11 +0x200:  mov    $0x0,%eax
081a0b16 +0x205:  pop    %ebp
081a0b17 +0x206:  ret
081a0b18 +0x207:  push   %ebp
081a0b19 +0x208:  mov    %esp,%ebp
081a0b1b +0x20a:  mov    $0x0,%eax
081a0b20 +0x20f:  pop    %ebp
081a0b21 +0x210:  ret
081a0b22 +0x211:  push   %ebp
081a0b23 +0x212:  mov    %esp,%ebp
081a0b25 +0x214:  mov    $0x0,%eax
081a0b2a +0x219:  pop    %ebp
081a0b2b +0x21a:  ret
081a0b2c +0x21b:  push   %ebp
081a0b2d +0x21c:  mov    %esp,%ebp
081a0b2f +0x21e:  mov    $0x0,%eax
081a0b34 +0x223:  pop    %ebp
081a0b35 +0x224:  ret
081a0b36 +0x225:  push   %ebp
081a0b37 +0x226:  mov    %esp,%ebp
081a0b39 +0x228:  mov    $0x0,%eax
081a0b3e +0x22d:  pop    %ebp
081a0b3f +0x22e:  ret
081a0b40 +0x22f:  push   %ebp
081a0b41 +0x230:  mov    %esp,%ebp
081a0b43 +0x232:  mov    $0x0,%eax
081a0b48 +0x237:  pop    %ebp
081a0b49 +0x238:  ret
081a0b4a +0x239:  push   %ebp
081a0b4b +0x23a:  mov    %esp,%ebp
081a0b4d +0x23c:  mov    $0x0,%eax
081a0b52 +0x241:  pop    %ebp
081a0b53 +0x242:  ret
081a0b54 +0x243:  push   %ebp
081a0b55 +0x244:  mov    %esp,%ebp
081a0b57 +0x246:  mov    $0x0,%eax
081a0b5c +0x24b:  pop    %ebp
081a0b5d +0x24c:  ret
081a0b5e +0x24d:  push   %ebp
081a0b5f +0x24e:  mov    %esp,%ebp
081a0b61 +0x250:  mov    $0x0,%eax
081a0b66 +0x255:  pop    %ebp
081a0b67 +0x256:  ret
081a0b68 +0x257:  push   %ebp
081a0b69 +0x258:  mov    %esp,%ebp
081a0b6b +0x25a:  mov    $0x0,%eax
081a0b70 +0x25f:  pop    %ebp
081a0b71 +0x260:  ret
081a0b72 +0x261:  push   %ebp
081a0b73 +0x262:  mov    %esp,%ebp
081a0b75 +0x264:  mov    $0x0,%eax
081a0b7a +0x269:  pop    %ebp
081a0b7b +0x26a:  ret
081a0b7c +0x26b:  push   %ebp
081a0b7d +0x26c:  mov    %esp,%ebp
081a0b7f +0x26e:  mov    $0x0,%eax
081a0b84 +0x273:  pop    %ebp
081a0b85 +0x274:  ret
081a0b86 +0x275:  push   %ebp
081a0b87 +0x276:  mov    %esp,%ebp
081a0b89 +0x278:  mov    $0x0,%eax
081a0b8e +0x27d:  pop    %ebp
081a0b8f +0x27e:  ret
081a0b90 +0x27f:  push   %ebp
081a0b91 +0x280:  mov    %esp,%ebp
081a0b93 +0x282:  mov    $0x0,%eax
081a0b98 +0x287:  pop    %ebp
081a0b99 +0x288:  ret
081a0b9a +0x289:  push   %ebp
081a0b9b +0x28a:  mov    %esp,%ebp
081a0b9d +0x28c:  mov    0x8(%ebp),%eax
081a0ba0 +0x28f:  mov    0x4(%eax),%eax
081a0ba3 +0x292:  mov    %eax,%edx
081a0ba5 +0x294:  mov    0x8(%ebp),%eax
081a0ba8 +0x297:  mov    (%eax),%eax
081a0baa +0x299:  mov    %edx,%ecx
081a0bac +0x29b:  sub    %eax,%ecx
081a0bae +0x29d:  mov    %ecx,%eax
081a0bb0 +0x29f:  imul   $0x224cc431,%eax,%eax
081a0bb6 +0x2a5:  pop    %ebp
081a0bb7 +0x2a6:  ret
081a0bb8 +0x2a7:  push   %ebp
081a0bb9 +0x2a8:  mov    %esp,%ebp
081a0bbb +0x2aa:  mov    0x8(%ebp),%eax
081a0bbe +0x2ad:  mov    (%eax),%edx
081a0bc0 +0x2af:  mov    0xc(%ebp),%eax
081a0bc3 +0x2b2:  imul   $0x14d1,%eax,%eax
081a0bc9 +0x2b8:  lea    (%edx,%eax,1),%eax
081a0bcc +0x2bb:  pop    %ebp
081a0bcd +0x2bc:  ret
081a0bce +0x2bd:  push   %ebp
081a0bcf +0x2be:  mov    %esp,%ebp
081a0bd1 +0x2c0:  sub    $0x18,%esp
081a0bd4 +0x2c3:  mov    0x8(%ebp),%eax
081a0bd7 +0x2c6:  movl   $&_ZTVN4ARAD10DISPATCHER36Dispatcher_RequestPrcoomDayilyRewardE+0x8,(%eax)
081a0bdd +0x2cc:  mov    0x8(%ebp),%eax
081a0be0 +0x2cf:  mov    %eax,(%esp)
081a0be3 +0x2d2:  call   08125696 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x3f9>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x3f9
081a0be8 +0x2d7:  mov    $0x0,%eax
081a0bed +0x2dc:  test   %al,%al
081a0bef +0x2de:  je     081a0bfc <+0x2eb>
081a0bf1 +0x2e0:  mov    0x8(%ebp),%eax
081a0bf4 +0x2e3:  mov    %eax,(%esp)
081a0bf7 +0x2e6:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081a0bfc +0x2eb:  leave
081a0bfd +0x2ec:  ret
081a0bfe +0x2ed:  push   %ebp
081a0bff +0x2ee:  mov    %esp,%ebp
081a0c01 +0x2f0:  sub    $0x18,%esp
081a0c04 +0x2f3:  mov    0x8(%ebp),%eax
081a0c07 +0x2f6:  mov    %eax,(%esp)
081a0c0a +0x2f9:  call   081a0bce <+0x2bd>
081a0c0f +0x2fe:  mov    0x8(%ebp),%eax
081a0c12 +0x301:  mov    %eax,(%esp)
081a0c15 +0x304:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081a0c1a +0x309:  leave
081a0c1b +0x30a:  ret
081a0c1c +0x30b:  push   %ebp
081a0c1d +0x30c:  mov    %esp,%ebp
081a0c1f +0x30e:  sub    $0x18,%esp
081a0c22 +0x311:  mov    0x8(%ebp),%eax
081a0c25 +0x314:  movl   $&_ZTVN4ARAD10DISPATCHER32Dispatcher_EventCreateDnfRequestE+0x8,(%eax)
081a0c2b +0x31a:  mov    0x8(%ebp),%eax
081a0c2e +0x31d:  mov    %eax,(%esp)
081a0c31 +0x320:  call   08125696 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x3f9>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x3f9
081a0c36 +0x325:  mov    $0x0,%eax
081a0c3b +0x32a:  test   %al,%al
081a0c3d +0x32c:  je     081a0c4a <+0x339>
081a0c3f +0x32e:  mov    0x8(%ebp),%eax
081a0c42 +0x331:  mov    %eax,(%esp)
081a0c45 +0x334:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081a0c4a +0x339:  leave
081a0c4b +0x33a:  ret
081a0c4c +0x33b:  push   %ebp
081a0c4d +0x33c:  mov    %esp,%ebp
081a0c4f +0x33e:  sub    $0x18,%esp
081a0c52 +0x341:  mov    0x8(%ebp),%eax
081a0c55 +0x344:  mov    %eax,(%esp)
081a0c58 +0x347:  call   081a0c1c <+0x30b>
081a0c5d +0x34c:  mov    0x8(%ebp),%eax
081a0c60 +0x34f:  mov    %eax,(%esp)
081a0c63 +0x352:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081a0c68 +0x357:  leave
081a0c69 +0x358:  ret
081a0c6a +0x359:  push   %ebp
081a0c6b +0x35a:  mov    %esp,%ebp
081a0c6d +0x35c:  sub    $0x18,%esp
081a0c70 +0x35f:  mov    0x8(%ebp),%eax
081a0c73 +0x362:  movl   $&_ZTVN4ARAD10DISPATCHER28Dispatcher_AradAvatarConvertE+0x8,(%eax)
081a0c79 +0x368:  mov    0x8(%ebp),%eax
081a0c7c +0x36b:  mov    %eax,(%esp)
081a0c7f +0x36e:  call   08125696 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x3f9>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x3f9
081a0c84 +0x373:  mov    $0x0,%eax
081a0c89 +0x378:  test   %al,%al
081a0c8b +0x37a:  je     081a0c98 <+0x387>
081a0c8d +0x37c:  mov    0x8(%ebp),%eax
081a0c90 +0x37f:  mov    %eax,(%esp)
081a0c93 +0x382:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081a0c98 +0x387:  leave
081a0c99 +0x388:  ret
081a0c9a +0x389:  push   %ebp
081a0c9b +0x38a:  mov    %esp,%ebp
081a0c9d +0x38c:  sub    $0x18,%esp
081a0ca0 +0x38f:  mov    0x8(%ebp),%eax
081a0ca3 +0x392:  mov    %eax,(%esp)
081a0ca6 +0x395:  call   081a0c6a <+0x359>
081a0cab +0x39a:  mov    0x8(%ebp),%eax
081a0cae +0x39d:  mov    %eax,(%esp)
081a0cb1 +0x3a0:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081a0cb6 +0x3a5:  leave
081a0cb7 +0x3a6:  ret
081a0cb8 +0x3a7:  push   %ebp
081a0cb9 +0x3a8:  mov    %esp,%ebp
081a0cbb +0x3aa:  sub    $0x18,%esp
081a0cbe +0x3ad:  mov    0x8(%ebp),%eax
081a0cc1 +0x3b0:  movl   $&_ZTVN4ARAD10DISPATCHER29Dispatcher_AradEmblemCompoundE+0x8,(%eax)
081a0cc7 +0x3b6:  mov    0x8(%ebp),%eax
081a0cca +0x3b9:  mov    %eax,(%esp)
081a0ccd +0x3bc:  call   08125696 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x3f9>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x3f9
081a0cd2 +0x3c1:  mov    $0x0,%eax
081a0cd7 +0x3c6:  test   %al,%al
081a0cd9 +0x3c8:  je     081a0ce6 <+0x3d5>
081a0cdb +0x3ca:  mov    0x8(%ebp),%eax
081a0cde +0x3cd:  mov    %eax,(%esp)
081a0ce1 +0x3d0:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081a0ce6 +0x3d5:  leave
081a0ce7 +0x3d6:  ret
081a0ce8 +0x3d7:  push   %ebp
081a0ce9 +0x3d8:  mov    %esp,%ebp
081a0ceb +0x3da:  sub    $0x18,%esp
081a0cee +0x3dd:  mov    0x8(%ebp),%eax
081a0cf1 +0x3e0:  mov    %eax,(%esp)
081a0cf4 +0x3e3:  call   081a0cb8 <+0x3a7>
081a0cf9 +0x3e8:  mov    0x8(%ebp),%eax
081a0cfc +0x3eb:  mov    %eax,(%esp)
081a0cff +0x3ee:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081a0d04 +0x3f3:  leave
081a0d05 +0x3f4:  ret
081a0d06 +0x3f5:  push   %ebp
081a0d07 +0x3f6:  mov    %esp,%ebp
081a0d09 +0x3f8:  sub    $0x18,%esp
081a0d0c +0x3fb:  mov    0x8(%ebp),%eax
081a0d0f +0x3fe:  movl   $&_ZTVN4ARAD10DISPATCHER32Dispatcher_AradUseAvatarRechargeE+0x8,(%eax)
081a0d15 +0x404:  mov    0x8(%ebp),%eax
081a0d18 +0x407:  mov    %eax,(%esp)
081a0d1b +0x40a:  call   08125696 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x3f9>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x3f9
081a0d20 +0x40f:  mov    $0x0,%eax
081a0d25 +0x414:  test   %al,%al
081a0d27 +0x416:  je     081a0d34 <+0x423>
081a0d29 +0x418:  mov    0x8(%ebp),%eax
081a0d2c +0x41b:  mov    %eax,(%esp)
081a0d2f +0x41e:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081a0d34 +0x423:  leave
081a0d35 +0x424:  ret
081a0d36 +0x425:  push   %ebp
081a0d37 +0x426:  mov    %esp,%ebp
081a0d39 +0x428:  sub    $0x18,%esp
081a0d3c +0x42b:  mov    0x8(%ebp),%eax
081a0d3f +0x42e:  mov    %eax,(%esp)
081a0d42 +0x431:  call   081a0d06 <+0x3f5>
081a0d47 +0x436:  mov    0x8(%ebp),%eax
081a0d4a +0x439:  mov    %eax,(%esp)
081a0d4d +0x43c:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081a0d52 +0x441:  leave
081a0d53 +0x442:  ret
081a0d54 +0x443:  push   %ebp
081a0d55 +0x444:  mov    %esp,%ebp
081a0d57 +0x446:  sub    $0x18,%esp
081a0d5a +0x449:  mov    0x8(%ebp),%eax
081a0d5d +0x44c:  movl   $&_ZTVN4ARAD10DISPATCHER36Dispatcher_AvartarHiddenOptionChangeE+0x8,(%eax)
081a0d63 +0x452:  mov    0x8(%ebp),%eax
081a0d66 +0x455:  mov    %eax,(%esp)
081a0d69 +0x458:  call   08125696 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x3f9>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x3f9
081a0d6e +0x45d:  mov    $0x0,%eax
081a0d73 +0x462:  test   %al,%al
081a0d75 +0x464:  je     081a0d82 <+0x471>
081a0d77 +0x466:  mov    0x8(%ebp),%eax
081a0d7a +0x469:  mov    %eax,(%esp)
081a0d7d +0x46c:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081a0d82 +0x471:  leave
081a0d83 +0x472:  ret
081a0d84 +0x473:  push   %ebp
081a0d85 +0x474:  mov    %esp,%ebp
081a0d87 +0x476:  sub    $0x18,%esp
081a0d8a +0x479:  mov    0x8(%ebp),%eax
081a0d8d +0x47c:  mov    %eax,(%esp)
081a0d90 +0x47f:  call   081a0d54 <+0x443>
081a0d95 +0x484:  mov    0x8(%ebp),%eax
081a0d98 +0x487:  mov    %eax,(%esp)
081a0d9b +0x48a:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081a0da0 +0x48f:  leave
081a0da1 +0x490:  ret
081a0da2 +0x491:  push   %ebp
081a0da3 +0x492:  mov    %esp,%ebp
081a0da5 +0x494:  sub    $0x18,%esp
081a0da8 +0x497:  mov    0x8(%ebp),%eax
081a0dab +0x49a:  movl   $&_ZTVN4ARAD10DISPATCHER31Dispatcher_AradJumpingCharacterE+0x8,(%eax)
081a0db1 +0x4a0:  mov    0x8(%ebp),%eax
081a0db4 +0x4a3:  mov    %eax,(%esp)
081a0db7 +0x4a6:  call   08125696 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x3f9>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x3f9
081a0dbc +0x4ab:  mov    $0x0,%eax
081a0dc1 +0x4b0:  test   %al,%al
081a0dc3 +0x4b2:  je     081a0dd0 <+0x4bf>
081a0dc5 +0x4b4:  mov    0x8(%ebp),%eax
081a0dc8 +0x4b7:  mov    %eax,(%esp)
081a0dcb +0x4ba:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081a0dd0 +0x4bf:  leave
081a0dd1 +0x4c0:  ret
081a0dd2 +0x4c1:  push   %ebp
081a0dd3 +0x4c2:  mov    %esp,%ebp
081a0dd5 +0x4c4:  sub    $0x18,%esp
081a0dd8 +0x4c7:  mov    0x8(%ebp),%eax
081a0ddb +0x4ca:  mov    %eax,(%esp)
081a0dde +0x4cd:  call   081a0da2 <+0x491>
081a0de3 +0x4d2:  mov    0x8(%ebp),%eax
081a0de6 +0x4d5:  mov    %eax,(%esp)
081a0de9 +0x4d8:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081a0dee +0x4dd:  leave
081a0def +0x4de:  ret
081a0df0 +0x4df:  push   %ebp
081a0df1 +0x4e0:  mov    %esp,%ebp
081a0df3 +0x4e2:  sub    $0x18,%esp
081a0df6 +0x4e5:  mov    0x8(%ebp),%eax
081a0df9 +0x4e8:  movl   $&_ZTVN4ARAD10DISPATCHER27Dispatcher_AvartarCoinCountE+0x8,(%eax)
081a0dff +0x4ee:  mov    0x8(%ebp),%eax
081a0e02 +0x4f1:  mov    %eax,(%esp)
081a0e05 +0x4f4:  call   08125696 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x3f9>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x3f9
081a0e0a +0x4f9:  mov    $0x0,%eax
081a0e0f +0x4fe:  test   %al,%al
081a0e11 +0x500:  je     081a0e1e <+0x50d>
081a0e13 +0x502:  mov    0x8(%ebp),%eax
081a0e16 +0x505:  mov    %eax,(%esp)
081a0e19 +0x508:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081a0e1e +0x50d:  leave
081a0e1f +0x50e:  ret
081a0e20 +0x50f:  push   %ebp
081a0e21 +0x510:  mov    %esp,%ebp
081a0e23 +0x512:  sub    $0x18,%esp
081a0e26 +0x515:  mov    0x8(%ebp),%eax
081a0e29 +0x518:  mov    %eax,(%esp)
081a0e2c +0x51b:  call   081a0df0 <+0x4df>
081a0e31 +0x520:  mov    0x8(%ebp),%eax
081a0e34 +0x523:  mov    %eax,(%esp)
081a0e37 +0x526:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081a0e3c +0x52b:  leave
081a0e3d +0x52c:  ret
081a0e3e +0x52d:  push   %ebp
081a0e3f +0x52e:  mov    %esp,%ebp
081a0e41 +0x530:  sub    $0x18,%esp
081a0e44 +0x533:  mov    0x8(%ebp),%eax
081a0e47 +0x536:  movl   $&_ZTVN4ARAD10DISPATCHER26Dispatcher_AvartarRouletteE+0x8,(%eax)
081a0e4d +0x53c:  mov    0x8(%ebp),%eax
081a0e50 +0x53f:  mov    %eax,(%esp)
081a0e53 +0x542:  call   08125696 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x3f9>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x3f9
081a0e58 +0x547:  mov    $0x0,%eax
081a0e5d +0x54c:  test   %al,%al
081a0e5f +0x54e:  je     081a0e6c <+0x55b>
081a0e61 +0x550:  mov    0x8(%ebp),%eax
081a0e64 +0x553:  mov    %eax,(%esp)
081a0e67 +0x556:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081a0e6c +0x55b:  leave
081a0e6d +0x55c:  ret
081a0e6e +0x55d:  push   %ebp
081a0e6f +0x55e:  mov    %esp,%ebp
081a0e71 +0x560:  sub    $0x18,%esp
081a0e74 +0x563:  mov    0x8(%ebp),%eax
081a0e77 +0x566:  mov    %eax,(%esp)
081a0e7a +0x569:  call   081a0e3e <+0x52d>
081a0e7f +0x56e:  mov    0x8(%ebp),%eax
081a0e82 +0x571:  mov    %eax,(%esp)
081a0e85 +0x574:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081a0e8a +0x579:  leave
081a0e8b +0x57a:  ret
```

## 反编译 C

```c
// <global>::global @ 0x81a0911

/* ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&) */

void ARAD::DISPATCHER::Dispatcher_AvartarRoulette::_GLOBAL__I_checkWorkState(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
