# CDisjointMachine

`_GLOBAL__I__ZN10expert_job16CDisjointMachineC2EP5CUserPKcicii`

`global constructors keyed to expert_job::CDisjointMachine::CDisjointMachine(CUser*, char const*, int, char, int, int)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to expert_job::CDisjointMachine` | `0x085d3b0b` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d3b0b  _GLOBAL__I__ZN10expert_job16CDisjointMachineC2EP5CUserPKcicii
#           global constructors keyed to expert_job::CDisjointMachine::CDisjointMachine(CUser*, char const*, int, char, int, int)
# range [0x085d3b0b, 0x085d459f]
085d3b0b +0x000:  push   %ebp
085d3b0c +0x001:  mov    %esp,%ebp
085d3b0e +0x003:  sub    $0x18,%esp
085d3b11 +0x006:  movl   $0xffff,0x4(%esp)
085d3b19 +0x00e:  movl   $0x1,(%esp)
085d3b20 +0x015:  call   085d3acb <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
085d3b25 +0x01a:  leave
085d3b26 +0x01b:  ret
085d3b27 +0x01c:  nop
085d3b28 +0x01d:  push   %ebp
085d3b29 +0x01e:  mov    %esp,%ebp
085d3b2b +0x020:  mov    0x8(%ebp),%eax
085d3b2e +0x023:  movzbl 0x1(%eax),%edx
085d3b32 +0x027:  mov    0xc(%ebp),%eax
085d3b35 +0x02a:  movzbl 0x1(%eax),%eax
085d3b39 +0x02e:  cmp    %al,%dl
085d3b3b +0x030:  jae    085d3b44 <+0x39>
085d3b3d +0x032:  mov    $0x1,%eax
085d3b42 +0x037:  jmp    085d3b9b <+0x90>
085d3b44 +0x039:  mov    0x8(%ebp),%eax
085d3b47 +0x03c:  movzbl 0x1(%eax),%edx
085d3b4b +0x040:  mov    0xc(%ebp),%eax
085d3b4e +0x043:  movzbl 0x1(%eax),%eax
085d3b52 +0x047:  cmp    %al,%dl
085d3b54 +0x049:  jne    085d3b96 <+0x8b>
085d3b56 +0x04b:  mov    0x8(%ebp),%eax
085d3b59 +0x04e:  movzbl (%eax),%edx
085d3b5c +0x051:  mov    0xc(%ebp),%eax
085d3b5f +0x054:  movzbl (%eax),%eax
085d3b62 +0x057:  cmp    %al,%dl
085d3b64 +0x059:  jae    085d3b6d <+0x62>
085d3b66 +0x05b:  mov    $0x1,%eax
085d3b6b +0x060:  jmp    085d3b9b <+0x90>
085d3b6d +0x062:  mov    0x8(%ebp),%eax
085d3b70 +0x065:  movzbl (%eax),%edx
085d3b73 +0x068:  mov    0xc(%ebp),%eax
085d3b76 +0x06b:  movzbl (%eax),%eax
085d3b79 +0x06e:  cmp    %al,%dl
085d3b7b +0x070:  jne    085d3b96 <+0x8b>
085d3b7d +0x072:  mov    0x8(%ebp),%eax
085d3b80 +0x075:  movzbl 0x2(%eax),%edx
085d3b84 +0x079:  mov    0xc(%ebp),%eax
085d3b87 +0x07c:  movzbl 0x2(%eax),%eax
085d3b8b +0x080:  cmp    %al,%dl
085d3b8d +0x082:  jae    085d3b96 <+0x8b>
085d3b8f +0x084:  mov    $0x1,%eax
085d3b94 +0x089:  jmp    085d3b9b <+0x90>
085d3b96 +0x08b:  mov    $0x0,%eax
085d3b9b +0x090:  pop    %ebp
085d3b9c +0x091:  ret
085d3b9d +0x092:  nop
085d3b9e +0x093:  push   %ebp
085d3b9f +0x094:  mov    %esp,%ebp
085d3ba1 +0x096:  sub    $0xc,%esp
085d3ba4 +0x099:  mov    0xc(%ebp),%ecx
085d3ba7 +0x09c:  mov    0x10(%ebp),%edx
085d3baa +0x09f:  mov    0x14(%ebp),%eax
085d3bad +0x0a2:  mov    %cl,-0x4(%ebp)
085d3bb0 +0x0a5:  mov    %dl,-0x8(%ebp)
085d3bb3 +0x0a8:  mov    %al,-0xc(%ebp)
085d3bb6 +0x0ab:  mov    0x8(%ebp),%eax
085d3bb9 +0x0ae:  movzbl -0x8(%ebp),%edx
085d3bbd +0x0b2:  mov    %dl,(%eax)
085d3bbf +0x0b4:  mov    0x8(%ebp),%eax
085d3bc2 +0x0b7:  movzbl -0x4(%ebp),%edx
085d3bc6 +0x0bb:  mov    %dl,0x1(%eax)
085d3bc9 +0x0be:  mov    0x8(%ebp),%eax
085d3bcc +0x0c1:  movzbl -0xc(%ebp),%edx
085d3bd0 +0x0c5:  mov    %dl,0x2(%eax)
085d3bd3 +0x0c8:  leave
085d3bd4 +0x0c9:  ret
085d3bd5 +0x0ca:  nop
085d3bd6 +0x0cb:  push   %ebp
085d3bd7 +0x0cc:  mov    %esp,%ebp
085d3bd9 +0x0ce:  mov    0x8(%ebp),%eax
085d3bdc +0x0d1:  movl   $0x0,(%eax)
085d3be2 +0x0d7:  mov    0x8(%ebp),%eax
085d3be5 +0x0da:  movl   $0x0,0x4(%eax)
085d3bec +0x0e1:  mov    0x8(%ebp),%eax
085d3bef +0x0e4:  mov    $0x0,%edx
085d3bf4 +0x0e9:  mov    %edx,0x8(%eax)
085d3bf7 +0x0ec:  mov    0x8(%ebp),%eax
085d3bfa +0x0ef:  movl   $0x0,0xc(%eax)
085d3c01 +0x0f6:  mov    0x8(%ebp),%eax
085d3c04 +0x0f9:  movl   $0x0,0x10(%eax)
085d3c0b +0x100:  pop    %ebp
085d3c0c +0x101:  ret
085d3c0d +0x102:  nop
085d3c0e +0x103:  push   %ebp
085d3c0f +0x104:  mov    %esp,%ebp
085d3c11 +0x106:  sub    $0x18,%esp
085d3c14 +0x109:  mov    0x8(%ebp),%eax
085d3c17 +0x10c:  add    $0x260,%eax
085d3c1c +0x111:  mov    %eax,(%esp)
085d3c1f +0x114:  call   085d3f66 <+0x45b>
085d3c24 +0x119:  leave
085d3c25 +0x11a:  ret
085d3c26 +0x11b:  push   %ebp
085d3c27 +0x11c:  mov    %esp,%ebp
085d3c29 +0x11e:  sub    $0x28,%esp
085d3c2c +0x121:  mov    0x8(%ebp),%eax
085d3c2f +0x124:  add    $0x260,%eax
085d3c34 +0x129:  mov    %eax,(%esp)
085d3c37 +0x12c:  call   085d3f66 <+0x45b>
085d3c3c +0x131:  mov    0xc(%ebp),%edx
085d3c3f +0x134:  sub    $0x1,%edx
085d3c42 +0x137:  cmp    %edx,%eax
085d3c44 +0x139:  setbe  %al
085d3c47 +0x13c:  test   %al,%al
085d3c49 +0x13e:  je     085d3c52 <+0x147>
085d3c4b +0x140:  mov    $0x0,%eax
085d3c50 +0x145:  jmp    085d3c72 <+0x167>
085d3c52 +0x147:  mov    0xc(%ebp),%eax
085d3c55 +0x14a:  lea    -0x1(%eax),%edx
085d3c58 +0x14d:  mov    0x8(%ebp),%eax
085d3c5b +0x150:  add    $0x260,%eax
085d3c60 +0x155:  mov    %edx,0x4(%esp)
085d3c64 +0x159:  mov    %eax,(%esp)
085d3c67 +0x15c:  call   085d3f82 <+0x477>
085d3c6c +0x161:  mov    %eax,-0xc(%ebp)
085d3c6f +0x164:  mov    -0xc(%ebp),%eax
085d3c72 +0x167:  leave
085d3c73 +0x168:  ret
085d3c74 +0x169:  push   %ebp
085d3c75 +0x16a:  mov    %esp,%ebp
085d3c77 +0x16c:  push   %ebx
085d3c78 +0x16d:  sub    $0x34,%esp
085d3c7b +0x170:  mov    0xc(%ebp),%eax
085d3c7e +0x173:  mov    %eax,0x4(%esp)
085d3c82 +0x177:  mov    0x8(%ebp),%eax
085d3c85 +0x17a:  mov    %eax,(%esp)
085d3c88 +0x17d:  call   085d3c26 <+0x11b>
085d3c8d +0x182:  mov    %eax,-0xc(%ebp)
085d3c90 +0x185:  cmpl   $0x0,-0xc(%ebp)
085d3c94 +0x189:  jne    085d3c9d <+0x192>
085d3c96 +0x18b:  mov    $0x0,%eax
085d3c9b +0x190:  jmp    085d3cc2 <+0x1b7>
085d3c9d +0x192:  mov    -0xc(%ebp),%eax
085d3ca0 +0x195:  mov    (%eax),%ecx
085d3ca2 +0x197:  mov    -0xc(%ebp),%eax
085d3ca5 +0x19a:  mov    (%eax),%eax
085d3ca7 +0x19c:  imul   0x10(%ebp),%eax
085d3cab +0x1a0:  mov    -0xc(%ebp),%edx
085d3cae +0x1a3:  mov    0x4(%edx),%edx
085d3cb1 +0x1a6:  mov    %edx,-0x1c(%ebp)
085d3cb4 +0x1a9:  mov    %eax,%edx
085d3cb6 +0x1ab:  sar    $0x1f,%edx
085d3cb9 +0x1ae:  idivl  -0x1c(%ebp)
085d3cbc +0x1b1:  mov    %ecx,%edx
085d3cbe +0x1b3:  sub    %eax,%edx
085d3cc0 +0x1b5:  mov    %edx,%eax
085d3cc2 +0x1b7:  add    $0x34,%esp
085d3cc5 +0x1ba:  pop    %ebx
085d3cc6 +0x1bb:  pop    %ebp
085d3cc7 +0x1bc:  ret
085d3cc8 +0x1bd:  push   %ebp
085d3cc9 +0x1be:  mov    %esp,%ebp
085d3ccb +0x1c0:  sub    $0x38,%esp
085d3cce +0x1c3:  mov    0xc(%ebp),%eax
085d3cd1 +0x1c6:  mov    %eax,0x4(%esp)
085d3cd5 +0x1ca:  mov    0x8(%ebp),%eax
085d3cd8 +0x1cd:  mov    %eax,(%esp)
085d3cdb +0x1d0:  call   085d3c26 <+0x11b>
085d3ce0 +0x1d5:  mov    %eax,-0x10(%ebp)
085d3ce3 +0x1d8:  cmpl   $0x0,-0x10(%ebp)
085d3ce7 +0x1dc:  jne    085d3cf0 <+0x1e5>
085d3ce9 +0x1de:  mov    $0x0,%eax
085d3cee +0x1e3:  jmp    085d3d38 <+0x22d>
085d3cf0 +0x1e5:  mov    -0x10(%ebp),%eax
085d3cf3 +0x1e8:  mov    (%eax),%eax
085d3cf5 +0x1ea:  mov    -0x10(%ebp),%edx
085d3cf8 +0x1ed:  mov    0x4(%edx),%edx
085d3cfb +0x1f0:  mov    %edx,-0x1c(%ebp)
085d3cfe +0x1f3:  mov    %eax,%edx
085d3d00 +0x1f5:  sar    $0x1f,%edx
085d3d03 +0x1f8:  idivl  -0x1c(%ebp)
085d3d06 +0x1fb:  mov    %eax,-0xc(%ebp)
085d3d09 +0x1fe:  cmpl   $0x0,-0xc(%ebp)
085d3d0d +0x202:  jg     085d3d16 <+0x20b>
085d3d0f +0x204:  mov    $0x0,%eax
085d3d14 +0x209:  jmp    085d3d38 <+0x22d>
085d3d16 +0x20b:  mov    0x10(%ebp),%eax
085d3d19 +0x20e:  mov    %eax,%edx
085d3d1b +0x210:  sar    $0x1f,%edx
085d3d1e +0x213:  idivl  -0xc(%ebp)
085d3d21 +0x216:  mov    %edx,%eax
085d3d23 +0x218:  mov    0x10(%ebp),%edx
085d3d26 +0x21b:  sub    %eax,%edx
085d3d28 +0x21d:  mov    0x14(%ebp),%eax
085d3d2b +0x220:  mov    %edx,(%eax)
085d3d2d +0x222:  mov    0x10(%ebp),%eax
085d3d30 +0x225:  mov    %eax,%edx
085d3d32 +0x227:  sar    $0x1f,%edx
085d3d35 +0x22a:  idivl  -0xc(%ebp)
085d3d38 +0x22d:  leave
085d3d39 +0x22e:  ret
085d3d3a +0x22f:  push   %ebp
085d3d3b +0x230:  mov    %esp,%ebp
085d3d3d +0x232:  sub    $0x18,%esp
085d3d40 +0x235:  mov    0x8(%ebp),%eax
085d3d43 +0x238:  add    $0x278,%eax
085d3d48 +0x23d:  mov    %eax,(%esp)
085d3d4b +0x240:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
085d3d50 +0x245:  cmp    0xc(%ebp),%eax
085d3d53 +0x248:  setbe  %al
085d3d56 +0x24b:  test   %al,%al
085d3d58 +0x24d:  je     085d3d61 <+0x256>
085d3d5a +0x24f:  mov    $0x0,%eax
085d3d5f +0x254:  jmp    085d3d7b <+0x270>
085d3d61 +0x256:  mov    0x8(%ebp),%eax
085d3d64 +0x259:  lea    0x278(%eax),%edx
085d3d6a +0x25f:  mov    0xc(%ebp),%eax
085d3d6d +0x262:  mov    %eax,0x4(%esp)
085d3d71 +0x266:  mov    %edx,(%esp)
085d3d74 +0x269:  call   08096c72 <_GLOBAL__I_g_maxTotalDefenseRate+0x262>  ; global constructors keyed to g_maxTotalDefenseRate+0x262
085d3d79 +0x26e:  mov    (%eax),%eax
085d3d7b +0x270:  leave
085d3d7c +0x271:  ret
085d3d7d +0x272:  nop
085d3d7e +0x273:  push   %ebp
085d3d7f +0x274:  mov    %esp,%ebp
085d3d81 +0x276:  sub    $0x18,%esp
085d3d84 +0x279:  mov    0x8(%ebp),%eax
085d3d87 +0x27c:  mov    %eax,(%esp)
085d3d8a +0x27f:  call   082845aa <_GLOBAL__I__ZN9CTimeGate15put_object_infoER11PacketGuard+0x26>  ; global constructors keyed to CTimeGate::put_object_info(PacketGuard&)+0x26
085d3d8f +0x284:  mov    0x8(%ebp),%eax
085d3d92 +0x287:  movl   $&_ZTVN10expert_job16CDisjointMachineE+0x8,(%eax)
085d3d98 +0x28d:  mov    0x8(%ebp),%eax
085d3d9b +0x290:  add    $0x4,%eax
085d3d9e +0x293:  mov    %eax,(%esp)
085d3da1 +0x296:  call   085cb45a <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x170>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x170
085d3da6 +0x29b:  mov    0x8(%ebp),%eax
085d3da9 +0x29e:  movl   $0x0,0x14(%eax)
085d3db0 +0x2a5:  mov    0x8(%ebp),%eax
085d3db3 +0x2a8:  add    $0x18,%eax
085d3db6 +0x2ab:  mov    %eax,(%esp)
085d3db9 +0x2ae:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
085d3dbe +0x2b3:  mov    0x8(%ebp),%eax
085d3dc1 +0x2b6:  movl   $0x0,0x1c(%eax)
085d3dc8 +0x2bd:  mov    0x8(%ebp),%eax
085d3dcb +0x2c0:  movb   $0x0,0x20(%eax)
085d3dcf +0x2c4:  mov    0x8(%ebp),%eax
085d3dd2 +0x2c7:  movl   $0x0,0x24(%eax)
085d3dd9 +0x2ce:  mov    0x8(%ebp),%eax
085d3ddc +0x2d1:  movl   $0x0,0x28(%eax)
085d3de3 +0x2d8:  leave
085d3de4 +0x2d9:  ret
085d3de5 +0x2da:  nop
085d3de6 +0x2db:  push   %ebp
085d3de7 +0x2dc:  mov    %esp,%ebp
085d3de9 +0x2de:  sub    $0x18,%esp
085d3dec +0x2e1:  mov    0xc(%ebp),%eax
085d3def +0x2e4:  lea    0x4(%eax),%edx
085d3df2 +0x2e7:  mov    0x8(%ebp),%eax
085d3df5 +0x2ea:  add    $0x4,%eax
085d3df8 +0x2ed:  mov    %edx,0x4(%esp)
085d3dfc +0x2f1:  mov    %eax,(%esp)
085d3dff +0x2f4:  call   085cb492 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x1a8>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x1a8
085d3e04 +0x2f9:  leave
085d3e05 +0x2fa:  ret
085d3e06 +0x2fb:  push   %ebp
085d3e07 +0x2fc:  mov    %esp,%ebp
085d3e09 +0x2fe:  mov    0x8(%ebp),%eax
085d3e0c +0x301:  mov    0x1c(%eax),%eax
085d3e0f +0x304:  pop    %ebp
085d3e10 +0x305:  ret
085d3e11 +0x306:  nop
085d3e12 +0x307:  push   %ebp
085d3e13 +0x308:  mov    %esp,%ebp
085d3e15 +0x30a:  mov    0x8(%ebp),%eax
085d3e18 +0x30d:  movzbl 0x20(%eax),%eax
085d3e1c +0x311:  pop    %ebp
085d3e1d +0x312:  ret
085d3e1e +0x313:  push   %ebp
085d3e1f +0x314:  mov    %esp,%ebp
085d3e21 +0x316:  sub    $0x18,%esp
085d3e24 +0x319:  mov    0x8(%ebp),%eax
085d3e27 +0x31c:  movl   $0x0,0x14(%eax)
085d3e2e +0x323:  mov    0x8(%ebp),%eax
085d3e31 +0x326:  add    $0x18,%eax
085d3e34 +0x329:  mov    %eax,(%esp)
085d3e37 +0x32c:  call   08708dd0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x29e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x29e0
085d3e3c +0x331:  mov    0x8(%ebp),%eax
085d3e3f +0x334:  movl   $0x0,0x1c(%eax)
085d3e46 +0x33b:  mov    0x8(%ebp),%eax
085d3e49 +0x33e:  movb   $0x0,0x20(%eax)
085d3e4d +0x342:  leave
085d3e4e +0x343:  ret
085d3e4f +0x344:  nop
085d3e50 +0x345:  push   %ebp
085d3e51 +0x346:  mov    %esp,%ebp
085d3e53 +0x348:  sub    $0x18,%esp
085d3e56 +0x34b:  mov    0x8(%ebp),%eax
085d3e59 +0x34e:  add    $0x8,%eax
085d3e5c +0x351:  mov    %eax,(%esp)
085d3e5f +0x354:  call   085d3e06 <+0x2fb>
085d3e64 +0x359:  leave
085d3e65 +0x35a:  ret
085d3e66 +0x35b:  push   %ebp
085d3e67 +0x35c:  mov    %esp,%ebp
085d3e69 +0x35e:  mov    0x8(%ebp),%eax
085d3e6c +0x361:  mov    0x8(%eax),%eax
085d3e6f +0x364:  pop    %ebp
085d3e70 +0x365:  ret
085d3e71 +0x366:  nop
085d3e72 +0x367:  push   %ebp
085d3e73 +0x368:  mov    %esp,%ebp
085d3e75 +0x36a:  sub    $0x18,%esp
085d3e78 +0x36d:  mov    0x8(%ebp),%eax
085d3e7b +0x370:  mov    %eax,(%esp)
085d3e7e +0x373:  call   080c8bc4 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1c
085d3e83 +0x378:  mov    0x8(%ebp),%eax
085d3e86 +0x37b:  mov    0xc(%ebp),%edx
085d3e89 +0x37e:  mov    %edx,0x8(%eax)
085d3e8c +0x381:  leave
085d3e8d +0x382:  ret
085d3e8e +0x383:  push   %ebp
085d3e8f +0x384:  mov    %esp,%ebp
085d3e91 +0x386:  mov    0x8(%ebp),%eax
085d3e94 +0x389:  mov    0xc(%eax),%eax
085d3e97 +0x38c:  pop    %ebp
085d3e98 +0x38d:  ret
085d3e99 +0x38e:  nop
085d3e9a +0x38f:  push   %ebp
085d3e9b +0x390:  mov    %esp,%ebp
085d3e9d +0x392:  sub    $0x18,%esp
085d3ea0 +0x395:  mov    0x8(%ebp),%eax
085d3ea3 +0x398:  mov    %eax,(%esp)
085d3ea6 +0x39b:  call   080c8bc4 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1c
085d3eab +0x3a0:  mov    0x8(%ebp),%eax
085d3eae +0x3a3:  mov    0xc(%ebp),%edx
085d3eb1 +0x3a6:  mov    %edx,0xc(%eax)
085d3eb4 +0x3a9:  leave
085d3eb5 +0x3aa:  ret
085d3eb6 +0x3ab:  push   %ebp
085d3eb7 +0x3ac:  mov    %esp,%ebp
085d3eb9 +0x3ae:  sub    $0x18,%esp
085d3ebc +0x3b1:  mov    0x8(%ebp),%eax
085d3ebf +0x3b4:  movl   $&_ZTVN10expert_job16CDisjointMachineE+0x8,(%eax)
085d3ec5 +0x3ba:  mov    0x8(%ebp),%eax
085d3ec8 +0x3bd:  add    $0x18,%eax
085d3ecb +0x3c0:  mov    %eax,(%esp)
085d3ece +0x3c3:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
085d3ed3 +0x3c8:  leave
085d3ed4 +0x3c9:  ret
085d3ed5 +0x3ca:  nop
085d3ed6 +0x3cb:  push   %ebp
085d3ed7 +0x3cc:  mov    %esp,%ebp
085d3ed9 +0x3ce:  sub    $0x18,%esp
085d3edc +0x3d1:  mov    0xc(%ebp),%edx
085d3edf +0x3d4:  mov    0x8(%ebp),%eax
085d3ee2 +0x3d7:  mov    %edx,0x4(%esp)
085d3ee6 +0x3db:  mov    %eax,(%esp)
085d3ee9 +0x3de:  call   085ccadc <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x17f2>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x17f2
085d3eee +0x3e3:  mov    0x8(%ebp),%eax
085d3ef1 +0x3e6:  mov    0xc(%ebp),%edx
085d3ef4 +0x3e9:  mov    0x4(%edx),%ecx
085d3ef7 +0x3ec:  mov    %ecx,0x4(%eax)
085d3efa +0x3ef:  mov    0x8(%edx),%ecx
085d3efd +0x3f2:  mov    %ecx,0x8(%eax)
085d3f00 +0x3f5:  mov    0xc(%edx),%ecx
085d3f03 +0x3f8:  mov    %ecx,0xc(%eax)
085d3f06 +0x3fb:  mov    0x10(%edx),%edx
085d3f09 +0x3fe:  mov    %edx,0x10(%eax)
085d3f0c +0x401:  mov    0xc(%ebp),%eax
085d3f0f +0x404:  mov    0x14(%eax),%edx
085d3f12 +0x407:  mov    0x8(%ebp),%eax
085d3f15 +0x40a:  mov    %edx,0x14(%eax)
085d3f18 +0x40d:  mov    0xc(%ebp),%eax
085d3f1b +0x410:  lea    0x18(%eax),%edx
085d3f1e +0x413:  mov    0x8(%ebp),%eax
085d3f21 +0x416:  add    $0x18,%eax
085d3f24 +0x419:  mov    %edx,0x4(%esp)
085d3f28 +0x41d:  mov    %eax,(%esp)
085d3f2b +0x420:  call   08707d00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1910>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1910
085d3f30 +0x425:  mov    0xc(%ebp),%eax
085d3f33 +0x428:  mov    0x1c(%eax),%edx
085d3f36 +0x42b:  mov    0x8(%ebp),%eax
085d3f39 +0x42e:  mov    %edx,0x1c(%eax)
085d3f3c +0x431:  mov    0xc(%ebp),%eax
085d3f3f +0x434:  movzbl 0x20(%eax),%edx
085d3f43 +0x438:  mov    0x8(%ebp),%eax
085d3f46 +0x43b:  mov    %dl,0x20(%eax)
085d3f49 +0x43e:  mov    0xc(%ebp),%eax
085d3f4c +0x441:  mov    0x24(%eax),%edx
085d3f4f +0x444:  mov    0x8(%ebp),%eax
085d3f52 +0x447:  mov    %edx,0x24(%eax)
085d3f55 +0x44a:  mov    0xc(%ebp),%eax
085d3f58 +0x44d:  mov    0x28(%eax),%edx
085d3f5b +0x450:  mov    0x8(%ebp),%eax
085d3f5e +0x453:  mov    %edx,0x28(%eax)
085d3f61 +0x456:  mov    0x8(%ebp),%eax
085d3f64 +0x459:  leave
085d3f65 +0x45a:  ret
085d3f66 +0x45b:  push   %ebp
085d3f67 +0x45c:  mov    %esp,%ebp
085d3f69 +0x45e:  mov    0x8(%ebp),%eax
085d3f6c +0x461:  mov    0x4(%eax),%eax
085d3f6f +0x464:  mov    %eax,%edx
085d3f71 +0x466:  mov    0x8(%ebp),%eax
085d3f74 +0x469:  mov    (%eax),%eax
085d3f76 +0x46b:  mov    %edx,%ecx
085d3f78 +0x46d:  sub    %eax,%ecx
085d3f7a +0x46f:  mov    %ecx,%eax
085d3f7c +0x471:  sar    $0x3,%eax
085d3f7f +0x474:  pop    %ebp
085d3f80 +0x475:  ret
085d3f81 +0x476:  nop
085d3f82 +0x477:  push   %ebp
085d3f83 +0x478:  mov    %esp,%ebp
085d3f85 +0x47a:  sub    $0x18,%esp
085d3f88 +0x47d:  mov    0xc(%ebp),%eax
085d3f8b +0x480:  mov    %eax,0x4(%esp)
085d3f8f +0x484:  mov    0x8(%ebp),%eax
085d3f92 +0x487:  mov    %eax,(%esp)
085d3f95 +0x48a:  call   085d415a <+0x64f>
085d3f9a +0x48f:  mov    0xc(%ebp),%eax
085d3f9d +0x492:  mov    %eax,0x4(%esp)
085d3fa1 +0x496:  mov    0x8(%ebp),%eax
085d3fa4 +0x499:  mov    %eax,(%esp)
085d3fa7 +0x49c:  call   085d4184 <+0x679>
085d3fac +0x4a1:  leave
085d3fad +0x4a2:  ret
085d3fae +0x4a3:  push   %ebp
085d3faf +0x4a4:  mov    %esp,%ebp
085d3fb1 +0x4a6:  push   %ebx
085d3fb2 +0x4a7:  sub    $0x14,%esp
085d3fb5 +0x4aa:  mov    0x8(%ebp),%ebx
085d3fb8 +0x4ad:  mov    0xc(%ebp),%eax
085d3fbb +0x4b0:  mov    0x10(%ebp),%edx
085d3fbe +0x4b3:  mov    %edx,0x8(%esp)
085d3fc2 +0x4b7:  mov    %eax,0x4(%esp)
085d3fc6 +0x4bb:  mov    %ebx,(%esp)
085d3fc9 +0x4be:  call   085d4196 <+0x68b>
085d3fce +0x4c3:  sub    $0x4,%esp
085d3fd1 +0x4c6:  mov    %ebx,%eax
085d3fd3 +0x4c8:  mov    -0x4(%ebp),%ebx
085d3fd6 +0x4cb:  leave
085d3fd7 +0x4cc:  ret    $0x4
085d3fda +0x4cf:  push   %ebp
085d3fdb +0x4d0:  mov    %esp,%ebp
085d3fdd +0x4d2:  push   %ebx
085d3fde +0x4d3:  sub    $0x14,%esp
085d3fe1 +0x4d6:  mov    0x8(%ebp),%ebx
085d3fe4 +0x4d9:  mov    0xc(%ebp),%eax
085d3fe7 +0x4dc:  mov    %eax,0x4(%esp)
085d3feb +0x4e0:  mov    %ebx,(%esp)
085d3fee +0x4e3:  call   085d4254 <+0x749>
085d3ff3 +0x4e8:  sub    $0x4,%esp
085d3ff6 +0x4eb:  mov    %ebx,%eax
085d3ff8 +0x4ed:  mov    -0x4(%ebp),%ebx
085d3ffb +0x4f0:  leave
085d3ffc +0x4f1:  ret    $0x4
085d3fff +0x4f4:  nop
085d4000 +0x4f5:  push   %ebp
085d4001 +0x4f6:  mov    %esp,%ebp
085d4003 +0x4f8:  mov    0x8(%ebp),%eax
085d4006 +0x4fb:  mov    (%eax),%edx
085d4008 +0x4fd:  mov    0xc(%ebp),%eax
085d400b +0x500:  mov    (%eax),%eax
085d400d +0x502:  cmp    %eax,%edx
085d400f +0x504:  setne  %al
085d4012 +0x507:  pop    %ebp
085d4013 +0x508:  ret
085d4014 +0x509:  push   %ebp
085d4015 +0x50a:  mov    %esp,%ebp
085d4017 +0x50c:  mov    0x8(%ebp),%eax
085d401a +0x50f:  mov    (%eax),%eax
085d401c +0x511:  add    $0x10,%eax
085d401f +0x514:  pop    %ebp
085d4020 +0x515:  ret
085d4021 +0x516:  nop
085d4022 +0x517:  push   %ebp
085d4023 +0x518:  mov    %esp,%ebp
085d4025 +0x51a:  mov    0x8(%ebp),%eax
085d4028 +0x51d:  movl   $0x0,(%eax)
085d402e +0x523:  pop    %ebp
085d402f +0x524:  ret
085d4030 +0x525:  push   %ebp
085d4031 +0x526:  mov    %esp,%ebp
085d4033 +0x528:  push   %ebx
085d4034 +0x529:  sub    $0x14,%esp
085d4037 +0x52c:  mov    0x8(%ebp),%ebx
085d403a +0x52f:  mov    0xc(%ebp),%eax
085d403d +0x532:  mov    %eax,0x4(%esp)
085d4041 +0x536:  mov    %ebx,(%esp)
085d4044 +0x539:  call   085d427a <+0x76f>
085d4049 +0x53e:  mov    %ebx,%eax
085d404b +0x540:  add    $0x14,%esp
085d404e +0x543:  pop    %ebx
085d404f +0x544:  pop    %ebp
085d4050 +0x545:  ret    $0x4
085d4053 +0x548:  nop
085d4054 +0x549:  push   %ebp
085d4055 +0x54a:  mov    %esp,%ebp
085d4057 +0x54c:  push   %ebx
085d4058 +0x54d:  sub    $0x14,%esp
085d405b +0x550:  mov    0x8(%ebp),%ebx
085d405e +0x553:  mov    0xc(%ebp),%eax
085d4061 +0x556:  add    $0x4,%eax
085d4064 +0x559:  mov    %eax,0x4(%esp)
085d4068 +0x55d:  mov    %ebx,(%esp)
085d406b +0x560:  call   085d427a <+0x76f>
085d4070 +0x565:  mov    %ebx,%eax
085d4072 +0x567:  add    $0x14,%esp
085d4075 +0x56a:  pop    %ebx
085d4076 +0x56b:  pop    %ebp
085d4077 +0x56c:  ret    $0x4
085d407a +0x56f:  push   %ebp
085d407b +0x570:  mov    %esp,%ebp
085d407d +0x572:  push   %ebx
085d407e +0x573:  sub    $0x14,%esp
085d4081 +0x576:  mov    0x8(%ebp),%eax
085d4084 +0x579:  mov    %eax,(%esp)
085d4087 +0x57c:  call   085d428a <+0x77f>
085d408c +0x581:  mov    (%eax),%ebx
085d408e +0x583:  mov    0xc(%ebp),%eax
085d4091 +0x586:  mov    %eax,(%esp)
085d4094 +0x589:  call   085d428a <+0x77f>
085d4099 +0x58e:  mov    (%eax),%eax
085d409b +0x590:  cmp    %eax,%ebx
085d409d +0x592:  setne  %al
085d40a0 +0x595:  add    $0x14,%esp
085d40a3 +0x598:  pop    %ebx
085d40a4 +0x599:  pop    %ebp
085d40a5 +0x59a:  ret
085d40a6 +0x59b:  push   %ebp
085d40a7 +0x59c:  mov    %esp,%ebp
085d40a9 +0x59e:  mov    0x8(%ebp),%eax
085d40ac +0x5a1:  mov    (%eax),%eax
085d40ae +0x5a3:  lea    0x14(%eax),%edx
085d40b1 +0x5a6:  mov    0x8(%ebp),%eax
085d40b4 +0x5a9:  mov    %edx,(%eax)
085d40b6 +0x5ab:  mov    0x8(%ebp),%eax
085d40b9 +0x5ae:  pop    %ebp
085d40ba +0x5af:  ret
085d40bb +0x5b0:  nop
085d40bc +0x5b1:  push   %ebp
085d40bd +0x5b2:  mov    %esp,%ebp
085d40bf +0x5b4:  mov    0x8(%ebp),%eax
085d40c2 +0x5b7:  mov    (%eax),%eax
085d40c4 +0x5b9:  pop    %ebp
085d40c5 +0x5ba:  ret
085d40c6 +0x5bb:  push   %ebp
085d40c7 +0x5bc:  mov    %esp,%ebp
085d40c9 +0x5be:  mov    0x8(%ebp),%eax
085d40cc +0x5c1:  mov    (%eax),%edx
085d40ce +0x5c3:  mov    0xc(%ebp),%eax
085d40d1 +0x5c6:  mov    (%eax),%eax
085d40d3 +0x5c8:  cmp    %eax,%edx
085d40d5 +0x5ca:  sete   %al
085d40d8 +0x5cd:  pop    %ebp
085d40d9 +0x5ce:  ret
085d40da +0x5cf:  push   %ebp
085d40db +0x5d0:  mov    %esp,%ebp
085d40dd +0x5d2:  push   %ebx
085d40de +0x5d3:  sub    $0x14,%esp
085d40e1 +0x5d6:  mov    0x8(%ebp),%ebx
085d40e4 +0x5d9:  mov    0xc(%ebp),%eax
085d40e7 +0x5dc:  mov    0x10(%ebp),%edx
085d40ea +0x5df:  mov    %edx,0x8(%esp)
085d40ee +0x5e3:  mov    %eax,0x4(%esp)
085d40f2 +0x5e7:  mov    %ebx,(%esp)
085d40f5 +0x5ea:  call   085d4292 <+0x787>
085d40fa +0x5ef:  sub    $0x4,%esp
085d40fd +0x5f2:  mov    %ebx,%eax
085d40ff +0x5f4:  mov    -0x4(%ebp),%ebx
085d4102 +0x5f7:  leave
085d4103 +0x5f8:  ret    $0x4
085d4106 +0x5fb:  push   %ebp
085d4107 +0x5fc:  mov    %esp,%ebp
085d4109 +0x5fe:  push   %ebx
085d410a +0x5ff:  sub    $0x14,%esp
085d410d +0x602:  mov    0x8(%ebp),%ebx
085d4110 +0x605:  mov    0xc(%ebp),%eax
085d4113 +0x608:  mov    %eax,0x4(%esp)
085d4117 +0x60c:  mov    %ebx,(%esp)
085d411a +0x60f:  call   085d4350 <+0x845>
085d411f +0x614:  sub    $0x4,%esp
085d4122 +0x617:  mov    %ebx,%eax
085d4124 +0x619:  mov    -0x4(%ebp),%ebx
085d4127 +0x61c:  leave
085d4128 +0x61d:  ret    $0x4
085d412b +0x620:  nop
085d412c +0x621:  push   %ebp
085d412d +0x622:  mov    %esp,%ebp
085d412f +0x624:  mov    0x8(%ebp),%eax
085d4132 +0x627:  mov    (%eax),%edx
085d4134 +0x629:  mov    0xc(%ebp),%eax
085d4137 +0x62c:  mov    (%eax),%eax
085d4139 +0x62e:  cmp    %eax,%edx
085d413b +0x630:  setne  %al
085d413e +0x633:  pop    %ebp
085d413f +0x634:  ret
085d4140 +0x635:  push   %ebp
085d4141 +0x636:  mov    %esp,%ebp
085d4143 +0x638:  mov    0x8(%ebp),%eax
085d4146 +0x63b:  mov    (%eax),%eax
085d4148 +0x63d:  add    $0x10,%eax
085d414b +0x640:  pop    %ebp
085d414c +0x641:  ret
085d414d +0x642:  nop
085d414e +0x643:  push   %ebp
085d414f +0x644:  mov    %esp,%ebp
085d4151 +0x646:  mov    0x8(%ebp),%eax
085d4154 +0x649:  mov    0x8(%eax),%eax
085d4157 +0x64c:  pop    %ebp
085d4158 +0x64d:  ret
085d4159 +0x64e:  nop
085d415a +0x64f:  push   %ebp
085d415b +0x650:  mov    %esp,%ebp
085d415d +0x652:  sub    $0x18,%esp
085d4160 +0x655:  mov    0x8(%ebp),%eax
085d4163 +0x658:  mov    %eax,(%esp)
085d4166 +0x65b:  call   085d3f66 <+0x45b>
085d416b +0x660:  cmp    0xc(%ebp),%eax
085d416e +0x663:  setbe  %al
085d4171 +0x666:  test   %al,%al
085d4173 +0x668:  je     085d4181 <+0x676>
085d4175 +0x66a:  movl   $"vector::_M_range_check",(%esp)
085d417c +0x671:  call   086d9b70 <_ZSt20__throw_out_of_rangePKc>  ; std::__throw_out_of_range(char const*)
085d4181 +0x676:  leave
085d4182 +0x677:  ret
085d4183 +0x678:  nop
085d4184 +0x679:  push   %ebp
085d4185 +0x67a:  mov    %esp,%ebp
085d4187 +0x67c:  mov    0x8(%ebp),%eax
085d418a +0x67f:  mov    (%eax),%eax
085d418c +0x681:  mov    0xc(%ebp),%edx
085d418f +0x684:  shl    $0x3,%edx
085d4192 +0x687:  add    %edx,%eax
085d4194 +0x689:  pop    %ebp
085d4195 +0x68a:  ret
085d4196 +0x68b:  push   %ebp
085d4197 +0x68c:  mov    %esp,%ebp
085d4199 +0x68e:  push   %esi
085d419a +0x68f:  push   %ebx
085d419b +0x690:  sub    $0x30,%esp
085d419e +0x693:  mov    0x8(%ebp),%ebx
085d41a1 +0x696:  mov    0xc(%ebp),%eax
085d41a4 +0x699:  mov    %eax,(%esp)
085d41a7 +0x69c:  call   085d4376 <+0x86b>
085d41ac +0x6a1:  mov    %eax,%esi
085d41ae +0x6a3:  mov    0xc(%ebp),%eax
085d41b1 +0x6a6:  mov    %eax,(%esp)
085d41b4 +0x6a9:  call   085d414e <+0x643>
085d41b9 +0x6ae:  lea    -0x10(%ebp),%edx
085d41bc +0x6b1:  mov    0x10(%ebp),%ecx
085d41bf +0x6b4:  mov    %ecx,0x10(%esp)
085d41c3 +0x6b8:  mov    %esi,0xc(%esp)
085d41c7 +0x6bc:  mov    %eax,0x8(%esp)
085d41cb +0x6c0:  mov    0xc(%ebp),%eax
085d41ce +0x6c3:  mov    %eax,0x4(%esp)
085d41d2 +0x6c7:  mov    %edx,(%esp)
085d41d5 +0x6ca:  call   085d4398 <+0x88d>
085d41da +0x6cf:  sub    $0x4,%esp
085d41dd +0x6d2:  lea    -0xc(%ebp),%eax
085d41e0 +0x6d5:  mov    0xc(%ebp),%edx
085d41e3 +0x6d8:  mov    %edx,0x4(%esp)
085d41e7 +0x6dc:  mov    %eax,(%esp)
085d41ea +0x6df:  call   085d4254 <+0x749>
085d41ef +0x6e4:  sub    $0x4,%esp
085d41f2 +0x6e7:  lea    -0xc(%ebp),%eax
085d41f5 +0x6ea:  mov    %eax,0x4(%esp)
085d41f9 +0x6ee:  lea    -0x10(%ebp),%eax
085d41fc +0x6f1:  mov    %eax,(%esp)
085d41ff +0x6f4:  call   085d40c6 <+0x5bb>
085d4204 +0x6f9:  test   %al,%al
085d4206 +0x6fb:  jne    085d422d <+0x722>
085d4208 +0x6fd:  mov    -0x10(%ebp),%eax
085d420b +0x700:  mov    %eax,(%esp)
085d420e +0x703:  call   085d4414 <+0x909>
085d4213 +0x708:  mov    0xc(%ebp),%edx
085d4216 +0x70b:  mov    %eax,0x8(%esp)
085d421a +0x70f:  mov    0x10(%ebp),%eax
085d421d +0x712:  mov    %eax,0x4(%esp)
085d4221 +0x716:  mov    %edx,(%esp)
085d4224 +0x719:  call   085d4436 <+0x92b>
085d4229 +0x71e:  test   %al,%al
085d422b +0x720:  je     085d4241 <+0x736>
085d422d +0x722:  mov    0xc(%ebp),%eax
085d4230 +0x725:  mov    %eax,0x4(%esp)
085d4234 +0x729:  mov    %ebx,(%esp)
085d4237 +0x72c:  call   085d4254 <+0x749>
085d423c +0x731:  sub    $0x4,%esp
085d423f +0x734:  jmp    085d4246 <+0x73b>
085d4241 +0x736:  mov    -0x10(%ebp),%eax
085d4244 +0x739:  mov    %eax,(%ebx)
085d4246 +0x73b:  mov    %ebx,%eax
085d4248 +0x73d:  lea    -0x8(%ebp),%esp
085d424b +0x740:  add    $0x0,%esp
085d424e +0x743:  pop    %ebx
085d424f +0x744:  pop    %esi
085d4250 +0x745:  pop    %ebp
085d4251 +0x746:  ret    $0x4
085d4254 +0x749:  push   %ebp
085d4255 +0x74a:  mov    %esp,%ebp
085d4257 +0x74c:  push   %ebx
085d4258 +0x74d:  sub    $0x14,%esp
085d425b +0x750:  mov    0x8(%ebp),%ebx
085d425e +0x753:  mov    0xc(%ebp),%eax
085d4261 +0x756:  add    $0x4,%eax
085d4264 +0x759:  mov    %eax,0x4(%esp)
085d4268 +0x75d:  mov    %ebx,(%esp)
085d426b +0x760:  call   085d4450 <+0x945>
085d4270 +0x765:  mov    %ebx,%eax
085d4272 +0x767:  add    $0x14,%esp
085d4275 +0x76a:  pop    %ebx
085d4276 +0x76b:  pop    %ebp
085d4277 +0x76c:  ret    $0x4
085d427a +0x76f:  push   %ebp
085d427b +0x770:  mov    %esp,%ebp
085d427d +0x772:  mov    0xc(%ebp),%eax
085d4280 +0x775:  mov    (%eax),%edx
085d4282 +0x777:  mov    0x8(%ebp),%eax
085d4285 +0x77a:  mov    %edx,(%eax)
085d4287 +0x77c:  pop    %ebp
085d4288 +0x77d:  ret
085d4289 +0x77e:  nop
085d428a +0x77f:  push   %ebp
085d428b +0x780:  mov    %esp,%ebp
085d428d +0x782:  mov    0x8(%ebp),%eax
085d4290 +0x785:  pop    %ebp
085d4291 +0x786:  ret
085d4292 +0x787:  push   %ebp
085d4293 +0x788:  mov    %esp,%ebp
085d4295 +0x78a:  push   %esi
085d4296 +0x78b:  push   %ebx
085d4297 +0x78c:  sub    $0x30,%esp
085d429a +0x78f:  mov    0x8(%ebp),%ebx
085d429d +0x792:  mov    0xc(%ebp),%eax
085d42a0 +0x795:  mov    %eax,(%esp)
085d42a3 +0x798:  call   083b9be0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x53bac>  ; global constructors keyed to CServerEvent::m_nExpRate+0x53bac
085d42a8 +0x79d:  mov    %eax,%esi
085d42aa +0x79f:  mov    0xc(%ebp),%eax
085d42ad +0x7a2:  mov    %eax,(%esp)
085d42b0 +0x7a5:  call   0839ece4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL12gTCharBuffer+0x6780>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL12gTCharBuffer+0x6780
085d42b5 +0x7aa:  lea    -0x10(%ebp),%edx
085d42b8 +0x7ad:  mov    0x10(%ebp),%ecx
085d42bb +0x7b0:  mov    %ecx,0x10(%esp)
085d42bf +0x7b4:  mov    %esi,0xc(%esp)
085d42c3 +0x7b8:  mov    %eax,0x8(%esp)
085d42c7 +0x7bc:  mov    0xc(%ebp),%eax
085d42ca +0x7bf:  mov    %eax,0x4(%esp)
085d42ce +0x7c3:  mov    %edx,(%esp)
085d42d1 +0x7c6:  call   085d445e <+0x953>
085d42d6 +0x7cb:  sub    $0x4,%esp
085d42d9 +0x7ce:  lea    -0xc(%ebp),%eax
085d42dc +0x7d1:  mov    0xc(%ebp),%edx
085d42df +0x7d4:  mov    %edx,0x4(%esp)
085d42e3 +0x7d8:  mov    %eax,(%esp)
085d42e6 +0x7db:  call   085d4350 <+0x845>
085d42eb +0x7e0:  sub    $0x4,%esp
085d42ee +0x7e3:  lea    -0xc(%ebp),%eax
085d42f1 +0x7e6:  mov    %eax,0x4(%esp)
085d42f5 +0x7ea:  lea    -0x10(%ebp),%eax
085d42f8 +0x7ed:  mov    %eax,(%esp)
085d42fb +0x7f0:  call   085d44fc <+0x9f1>
085d4300 +0x7f5:  test   %al,%al
085d4302 +0x7f7:  jne    085d4329 <+0x81e>
085d4304 +0x7f9:  mov    -0x10(%ebp),%eax
085d4307 +0x7fc:  mov    %eax,(%esp)
085d430a +0x7ff:  call   085d44da <+0x9cf>
085d430f +0x804:  mov    0xc(%ebp),%edx
085d4312 +0x807:  mov    %eax,0x8(%esp)
085d4316 +0x80b:  mov    0x10(%ebp),%eax
085d4319 +0x80e:  mov    %eax,0x4(%esp)
085d431d +0x812:  mov    %edx,(%esp)
085d4320 +0x815:  call   08139ac8 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x56cf>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x56cf
085d4325 +0x81a:  test   %al,%al
085d4327 +0x81c:  je     085d433d <+0x832>
085d4329 +0x81e:  mov    0xc(%ebp),%eax
085d432c +0x821:  mov    %eax,0x4(%esp)
085d4330 +0x825:  mov    %ebx,(%esp)
085d4333 +0x828:  call   085d4350 <+0x845>
085d4338 +0x82d:  sub    $0x4,%esp
085d433b +0x830:  jmp    085d4342 <+0x837>
085d433d +0x832:  mov    -0x10(%ebp),%eax
085d4340 +0x835:  mov    %eax,(%ebx)
085d4342 +0x837:  mov    %ebx,%eax
085d4344 +0x839:  lea    -0x8(%ebp),%esp
085d4347 +0x83c:  add    $0x0,%esp
085d434a +0x83f:  pop    %ebx
085d434b +0x840:  pop    %esi
085d434c +0x841:  pop    %ebp
085d434d +0x842:  ret    $0x4
085d4350 +0x845:  push   %ebp
085d4351 +0x846:  mov    %esp,%ebp
085d4353 +0x848:  push   %ebx
085d4354 +0x849:  sub    $0x14,%esp
085d4357 +0x84c:  mov    0x8(%ebp),%ebx
085d435a +0x84f:  mov    0xc(%ebp),%eax
085d435d +0x852:  add    $0x4,%eax
085d4360 +0x855:  mov    %eax,0x4(%esp)
085d4364 +0x859:  mov    %ebx,(%esp)
085d4367 +0x85c:  call   085d4510 <+0xa05>
085d436c +0x861:  mov    %ebx,%eax
085d436e +0x863:  add    $0x14,%esp
085d4371 +0x866:  pop    %ebx
085d4372 +0x867:  pop    %ebp
085d4373 +0x868:  ret    $0x4
085d4376 +0x86b:  push   %ebp
085d4377 +0x86c:  mov    %esp,%ebp
085d4379 +0x86e:  mov    0x8(%ebp),%eax
085d437c +0x871:  add    $0x4,%eax
085d437f +0x874:  pop    %ebp
085d4380 +0x875:  ret
085d4381 +0x876:  push   %ebp
085d4382 +0x877:  mov    %esp,%ebp
085d4384 +0x879:  mov    0x8(%ebp),%eax
085d4387 +0x87c:  mov    0xc(%eax),%eax
085d438a +0x87f:  pop    %ebp
085d438b +0x880:  ret
085d438c +0x881:  push   %ebp
085d438d +0x882:  mov    %esp,%ebp
085d438f +0x884:  mov    0x8(%ebp),%eax
085d4392 +0x887:  mov    0x8(%eax),%eax
085d4395 +0x88a:  pop    %ebp
085d4396 +0x88b:  ret
085d4397 +0x88c:  nop
085d4398 +0x88d:  push   %ebp
085d4399 +0x88e:  mov    %esp,%ebp
085d439b +0x890:  push   %ebx
085d439c +0x891:  sub    $0x14,%esp
085d439f +0x894:  mov    0x8(%ebp),%ebx
085d43a2 +0x897:  jmp    085d43f0 <+0x8e5>
085d43a4 +0x899:  mov    0x10(%ebp),%eax
085d43a7 +0x89c:  mov    %eax,(%esp)
085d43aa +0x89f:  call   085d451d <+0xa12>
085d43af +0x8a4:  mov    0xc(%ebp),%edx
085d43b2 +0x8a7:  mov    0x18(%ebp),%ecx
085d43b5 +0x8aa:  mov    %ecx,0x8(%esp)
085d43b9 +0x8ae:  mov    %eax,0x4(%esp)
085d43bd +0x8b2:  mov    %edx,(%esp)
085d43c0 +0x8b5:  call   085d4436 <+0x92b>
085d43c5 +0x8ba:  xor    $0x1,%eax
085d43c8 +0x8bd:  test   %al,%al
085d43ca +0x8bf:  je     085d43e2 <+0x8d7>
085d43cc +0x8c1:  mov    0x10(%ebp),%eax
085d43cf +0x8c4:  mov    %eax,0x14(%ebp)
085d43d2 +0x8c7:  mov    0x10(%ebp),%eax
085d43d5 +0x8ca:  mov    %eax,(%esp)
085d43d8 +0x8cd:  call   085d438c <+0x881>
085d43dd +0x8d2:  mov    %eax,0x10(%ebp)
085d43e0 +0x8d5:  jmp    085d43f0 <+0x8e5>
085d43e2 +0x8d7:  mov    0x10(%ebp),%eax
085d43e5 +0x8da:  mov    %eax,(%esp)
085d43e8 +0x8dd:  call   085d4381 <+0x876>
085d43ed +0x8e2:  mov    %eax,0x10(%ebp)
085d43f0 +0x8e5:  cmpl   $0x0,0x10(%ebp)
085d43f4 +0x8e9:  setne  %al
085d43f7 +0x8ec:  test   %al,%al
085d43f9 +0x8ee:  jne    085d43a4 <+0x899>
085d43fb +0x8f0:  mov    0x14(%ebp),%eax
085d43fe +0x8f3:  mov    %eax,0x4(%esp)
085d4402 +0x8f7:  mov    %ebx,(%esp)
085d4405 +0x8fa:  call   085d4450 <+0x945>
085d440a +0x8ff:  mov    %ebx,%eax
085d440c +0x901:  add    $0x14,%esp
085d440f +0x904:  pop    %ebx
085d4410 +0x905:  pop    %ebp
085d4411 +0x906:  ret    $0x4
085d4414 +0x909:  push   %ebp
085d4415 +0x90a:  mov    %esp,%ebp
085d4417 +0x90c:  sub    $0x28,%esp
085d441a +0x90f:  mov    0x8(%ebp),%eax
085d441d +0x912:  mov    %eax,(%esp)
085d4420 +0x915:  call   085d453f <+0xa34>
085d4425 +0x91a:  mov    %eax,0x4(%esp)
085d4429 +0x91e:  lea    -0x9(%ebp),%eax
085d442c +0x921:  mov    %eax,(%esp)
085d442f +0x924:  call   085d454a <+0xa3f>
085d4434 +0x929:  leave
085d4435 +0x92a:  ret
085d4436 +0x92b:  push   %ebp
085d4437 +0x92c:  mov    %esp,%ebp
085d4439 +0x92e:  sub    $0x18,%esp
085d443c +0x931:  mov    0x10(%ebp),%eax
085d443f +0x934:  mov    %eax,0x4(%esp)
085d4443 +0x938:  mov    0xc(%ebp),%eax
085d4446 +0x93b:  mov    %eax,(%esp)
085d4449 +0x93e:  call   085d3b28 <+0x1d>
085d444e +0x943:  leave
085d444f +0x944:  ret
085d4450 +0x945:  push   %ebp
085d4451 +0x946:  mov    %esp,%ebp
085d4453 +0x948:  mov    0xc(%ebp),%edx
085d4456 +0x94b:  mov    0x8(%ebp),%eax
085d4459 +0x94e:  mov    %edx,(%eax)
085d445b +0x950:  pop    %ebp
085d445c +0x951:  ret
085d445d +0x952:  nop
085d445e +0x953:  push   %ebp
085d445f +0x954:  mov    %esp,%ebp
085d4461 +0x956:  push   %ebx
085d4462 +0x957:  sub    $0x14,%esp
085d4465 +0x95a:  mov    0x8(%ebp),%ebx
085d4468 +0x95d:  jmp    085d44b6 <+0x9ab>
085d446a +0x95f:  mov    0x10(%ebp),%eax
085d446d +0x962:  mov    %eax,(%esp)
085d4470 +0x965:  call   085d4552 <+0xa47>
085d4475 +0x96a:  mov    0xc(%ebp),%edx
085d4478 +0x96d:  mov    0x18(%ebp),%ecx
085d447b +0x970:  mov    %ecx,0x8(%esp)
085d447f +0x974:  mov    %eax,0x4(%esp)
085d4483 +0x978:  mov    %edx,(%esp)
085d4486 +0x97b:  call   08139ac8 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x56cf>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x56cf
085d448b +0x980:  xor    $0x1,%eax
085d448e +0x983:  test   %al,%al
085d4490 +0x985:  je     085d44a8 <+0x99d>
085d4492 +0x987:  mov    0x10(%ebp),%eax
085d4495 +0x98a:  mov    %eax,0x14(%ebp)
085d4498 +0x98d:  mov    0x10(%ebp),%eax
085d449b +0x990:  mov    %eax,(%esp)
085d449e +0x993:  call   083b9b70 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x53b3c>  ; global constructors keyed to CServerEvent::m_nExpRate+0x53b3c
085d44a3 +0x998:  mov    %eax,0x10(%ebp)
085d44a6 +0x99b:  jmp    085d44b6 <+0x9ab>
085d44a8 +0x99d:  mov    0x10(%ebp),%eax
085d44ab +0x9a0:  mov    %eax,(%esp)
085d44ae +0x9a3:  call   083b9b65 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x53b31>  ; global constructors keyed to CServerEvent::m_nExpRate+0x53b31
085d44b3 +0x9a8:  mov    %eax,0x10(%ebp)
085d44b6 +0x9ab:  cmpl   $0x0,0x10(%ebp)
085d44ba +0x9af:  setne  %al
085d44bd +0x9b2:  test   %al,%al
085d44bf +0x9b4:  jne    085d446a <+0x95f>
085d44c1 +0x9b6:  mov    0x14(%ebp),%eax
085d44c4 +0x9b9:  mov    %eax,0x4(%esp)
085d44c8 +0x9bd:  mov    %ebx,(%esp)
085d44cb +0x9c0:  call   085d4510 <+0xa05>
085d44d0 +0x9c5:  mov    %ebx,%eax
085d44d2 +0x9c7:  add    $0x14,%esp
085d44d5 +0x9ca:  pop    %ebx
085d44d6 +0x9cb:  pop    %ebp
085d44d7 +0x9cc:  ret    $0x4
085d44da +0x9cf:  push   %ebp
085d44db +0x9d0:  mov    %esp,%ebp
085d44dd +0x9d2:  sub    $0x28,%esp
085d44e0 +0x9d5:  mov    0x8(%ebp),%eax
085d44e3 +0x9d8:  mov    %eax,(%esp)
085d44e6 +0x9db:  call   085d4574 <+0xa69>
085d44eb +0x9e0:  mov    %eax,0x4(%esp)
085d44ef +0x9e4:  lea    -0x9(%ebp),%eax
085d44f2 +0x9e7:  mov    %eax,(%esp)
085d44f5 +0x9ea:  call   085d4580 <+0xa75>
085d44fa +0x9ef:  leave
085d44fb +0x9f0:  ret
085d44fc +0x9f1:  push   %ebp
085d44fd +0x9f2:  mov    %esp,%ebp
085d44ff +0x9f4:  mov    0x8(%ebp),%eax
085d4502 +0x9f7:  mov    (%eax),%edx
085d4504 +0x9f9:  mov    0xc(%ebp),%eax
085d4507 +0x9fc:  mov    (%eax),%eax
085d4509 +0x9fe:  cmp    %eax,%edx
085d450b +0xa00:  sete   %al
085d450e +0xa03:  pop    %ebp
085d450f +0xa04:  ret
085d4510 +0xa05:  push   %ebp
085d4511 +0xa06:  mov    %esp,%ebp
085d4513 +0xa08:  mov    0xc(%ebp),%edx
085d4516 +0xa0b:  mov    0x8(%ebp),%eax
085d4519 +0xa0e:  mov    %edx,(%eax)
085d451b +0xa10:  pop    %ebp
085d451c +0xa11:  ret
085d451d +0xa12:  push   %ebp
085d451e +0xa13:  mov    %esp,%ebp
085d4520 +0xa15:  sub    $0x28,%esp
085d4523 +0xa18:  mov    0x8(%ebp),%eax
085d4526 +0xa1b:  mov    %eax,(%esp)
085d4529 +0xa1e:  call   085d4588 <+0xa7d>
085d452e +0xa23:  mov    %eax,0x4(%esp)
085d4532 +0xa27:  lea    -0x9(%ebp),%eax
085d4535 +0xa2a:  mov    %eax,(%esp)
085d4538 +0xa2d:  call   085d454a <+0xa3f>
085d453d +0xa32:  leave
085d453e +0xa33:  ret
085d453f +0xa34:  push   %ebp
085d4540 +0xa35:  mov    %esp,%ebp
085d4542 +0xa37:  mov    0x8(%ebp),%eax
085d4545 +0xa3a:  add    $0x10,%eax
085d4548 +0xa3d:  pop    %ebp
085d4549 +0xa3e:  ret
085d454a +0xa3f:  push   %ebp
085d454b +0xa40:  mov    %esp,%ebp
085d454d +0xa42:  mov    0xc(%ebp),%eax
085d4550 +0xa45:  pop    %ebp
085d4551 +0xa46:  ret
085d4552 +0xa47:  push   %ebp
085d4553 +0xa48:  mov    %esp,%ebp
085d4555 +0xa4a:  sub    $0x28,%esp
085d4558 +0xa4d:  mov    0x8(%ebp),%eax
085d455b +0xa50:  mov    %eax,(%esp)
085d455e +0xa53:  call   085d4593 <+0xa88>
085d4563 +0xa58:  mov    %eax,0x4(%esp)
085d4567 +0xa5c:  lea    -0x9(%ebp),%eax
085d456a +0xa5f:  mov    %eax,(%esp)
085d456d +0xa62:  call   085d4580 <+0xa75>
085d4572 +0xa67:  leave
085d4573 +0xa68:  ret
085d4574 +0xa69:  push   %ebp
085d4575 +0xa6a:  mov    %esp,%ebp
085d4577 +0xa6c:  mov    0x8(%ebp),%eax
085d457a +0xa6f:  add    $0x10,%eax
085d457d +0xa72:  pop    %ebp
085d457e +0xa73:  ret
085d457f +0xa74:  nop
085d4580 +0xa75:  push   %ebp
085d4581 +0xa76:  mov    %esp,%ebp
085d4583 +0xa78:  mov    0xc(%ebp),%eax
085d4586 +0xa7b:  pop    %ebp
085d4587 +0xa7c:  ret
085d4588 +0xa7d:  push   %ebp
085d4589 +0xa7e:  mov    %esp,%ebp
085d458b +0xa80:  mov    0x8(%ebp),%eax
085d458e +0xa83:  add    $0x10,%eax
085d4591 +0xa86:  pop    %ebp
085d4592 +0xa87:  ret
085d4593 +0xa88:  push   %ebp
085d4594 +0xa89:  mov    %esp,%ebp
085d4596 +0xa8b:  mov    0x8(%ebp),%eax
085d4599 +0xa8e:  add    $0x10,%eax
085d459c +0xa91:  pop    %ebp
085d459d +0xa92:  ret
085d459e +0xa93:  nop
085d459f +0xa94:  nop
```

## 反编译 C

```c
// <global>::global @ 0x85d3b0b

/* expert_job::CDisjointMachine::CDisjointMachine(CUser*, char const*, int, char, int, int) */

void expert_job::CDisjointMachine::_GLOBAL__I_CDisjointMachine(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
