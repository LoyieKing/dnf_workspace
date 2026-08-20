# process

`_ZN34Dispather_RegenerationRandomOption7processEP5CUserR8MSG_BASER9ParamBase`

`Dispather_RegenerationRandomOption::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispather_RegenerationRandomOption` | `0x081d6af4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d6af4  _ZN34Dispather_RegenerationRandomOption7processEP5CUserR8MSG_BASER9ParamBase
#           Dispather_RegenerationRandomOption::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081d6af4, 0x081d7277]
081d6af4 +0x000:  push   %ebp
081d6af5 +0x001:  mov    %esp,%ebp
081d6af7 +0x003:  push   %edi
081d6af8 +0x004:  push   %esi
081d6af9 +0x005:  push   %ebx
081d6afa +0x006:  sub    $0x19c,%esp
081d6b00 +0x00c:  mov    0x10(%ebp),%eax
081d6b03 +0x00f:  mov    %eax,-0x3c(%ebp)
081d6b06 +0x012:  mov    0x14(%ebp),%eax
081d6b09 +0x015:  mov    %eax,-0x38(%ebp)
081d6b0c +0x018:  mov    -0x38(%ebp),%eax
081d6b0f +0x01b:  movl   $0x0,0x4(%eax)
081d6b16 +0x022:  lea    -0x103(%ebp),%eax
081d6b1c +0x028:  mov    %eax,%ebx
081d6b1e +0x02a:  mov    $0x1,%esi
081d6b23 +0x02f:  jmp    081d6b33 <+0x3f>
081d6b25 +0x031:  mov    %ebx,(%esp)
081d6b28 +0x034:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
081d6b2d +0x039:  add    $0x3d,%ebx
081d6b30 +0x03c:  sub    $0x1,%esi
081d6b33 +0x03f:  cmp    $0xffffffff,%esi
081d6b36 +0x042:  setne  %al
081d6b39 +0x045:  test   %al,%al
081d6b3b +0x047:  jne    081d6b25 <+0x31>
081d6b3d +0x049:  movb   $0x1,-0x32(%ebp)
081d6b41 +0x04d:  movb   $0x0,-0x31(%ebp)
081d6b45 +0x051:  movl   $0x0,-0x2c(%ebp)
081d6b4c +0x058:  jmp    081d6e12 <+0x31e>
081d6b51 +0x05d:  mov    -0x2c(%ebp),%ebx
081d6b54 +0x060:  mov    -0x2c(%ebp),%edx
081d6b57 +0x063:  mov    -0x3c(%ebp),%eax
081d6b5a +0x066:  movzwl 0xd(%eax,%edx,2),%eax
081d6b5f +0x06b:  movswl %ax,%esi
081d6b62 +0x06e:  mov    0xc(%ebp),%eax
081d6b65 +0x071:  mov    %eax,(%esp)
081d6b68 +0x074:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081d6b6d +0x079:  imul   $0x3d,%ebx,%edx
081d6b70 +0x07c:  lea    -0x18(%ebp),%ecx
081d6b73 +0x07f:  lea    (%ecx,%edx,1),%edx
081d6b76 +0x082:  lea    -0xeb(%edx),%ebx
081d6b7c +0x088:  lea    -0x148(%ebp),%edx
081d6b82 +0x08e:  mov    %esi,0xc(%esp)
081d6b86 +0x092:  movl   $0x1,0x8(%esp)
081d6b8e +0x09a:  mov    %eax,0x4(%esp)
081d6b92 +0x09e:  mov    %edx,(%esp)
081d6b95 +0x0a1:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
081d6b9a +0x0a6:  sub    $0x4,%esp
081d6b9d +0x0a9:  mov    -0x148(%ebp),%eax
081d6ba3 +0x0af:  mov    %eax,(%ebx)
081d6ba5 +0x0b1:  mov    -0x144(%ebp),%eax
081d6bab +0x0b7:  mov    %eax,0x4(%ebx)
081d6bae +0x0ba:  mov    -0x140(%ebp),%eax
081d6bb4 +0x0c0:  mov    %eax,0x8(%ebx)
081d6bb7 +0x0c3:  mov    -0x13c(%ebp),%eax
081d6bbd +0x0c9:  mov    %eax,0xc(%ebx)
081d6bc0 +0x0cc:  mov    -0x138(%ebp),%eax
081d6bc6 +0x0d2:  mov    %eax,0x10(%ebx)
081d6bc9 +0x0d5:  mov    -0x134(%ebp),%eax
081d6bcf +0x0db:  mov    %eax,0x14(%ebx)
081d6bd2 +0x0de:  mov    -0x130(%ebp),%eax
081d6bd8 +0x0e4:  mov    %eax,0x18(%ebx)
081d6bdb +0x0e7:  mov    -0x12c(%ebp),%eax
081d6be1 +0x0ed:  mov    %eax,0x1c(%ebx)
081d6be4 +0x0f0:  mov    -0x128(%ebp),%eax
081d6bea +0x0f6:  mov    %eax,0x20(%ebx)
081d6bed +0x0f9:  mov    -0x124(%ebp),%eax
081d6bf3 +0x0ff:  mov    %eax,0x24(%ebx)
081d6bf6 +0x102:  mov    -0x120(%ebp),%eax
081d6bfc +0x108:  mov    %eax,0x28(%ebx)
081d6bff +0x10b:  mov    -0x11c(%ebp),%eax
081d6c05 +0x111:  mov    %eax,0x2c(%ebx)
081d6c08 +0x114:  mov    -0x118(%ebp),%eax
081d6c0e +0x11a:  mov    %eax,0x30(%ebx)
081d6c11 +0x11d:  mov    -0x114(%ebp),%eax
081d6c17 +0x123:  mov    %eax,0x34(%ebx)
081d6c1a +0x126:  mov    -0x110(%ebp),%eax
081d6c20 +0x12c:  mov    %eax,0x38(%ebx)
081d6c23 +0x12f:  movzbl -0x10c(%ebp),%eax
081d6c2a +0x136:  mov    %al,0x3c(%ebx)
081d6c2d +0x139:  mov    -0x2c(%ebp),%eax
081d6c30 +0x13c:  lea    -0x103(%ebp),%edx
081d6c36 +0x142:  imul   $0x3d,%eax,%eax
081d6c39 +0x145:  lea    (%edx,%eax,1),%eax
081d6c3c +0x148:  mov    %eax,(%esp)
081d6c3f +0x14b:  call   0811ed66 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x61>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x61
081d6c44 +0x150:  test   %al,%al
081d6c46 +0x152:  je     081d6c5c <+0x168>
081d6c48 +0x154:  mov    -0x38(%ebp),%eax
081d6c4b +0x157:  movl   $0x13,0x4(%eax)
081d6c52 +0x15e:  mov    $0x0,%ebx
081d6c57 +0x163:  jmp    081d726a <+0x776>
081d6c5c +0x168:  mov    -0x2c(%ebp),%eax
081d6c5f +0x16b:  lea    -0x103(%ebp),%edx
081d6c65 +0x171:  imul   $0x3d,%eax,%eax
081d6c68 +0x174:  lea    (%edx,%eax,1),%eax
081d6c6b +0x177:  mov    %eax,(%esp)
081d6c6e +0x17a:  call   08150812 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x147>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x147
081d6c73 +0x17f:  xor    $0x1,%eax
081d6c76 +0x182:  test   %al,%al
081d6c78 +0x184:  je     081d6c8e <+0x19a>
081d6c7a +0x186:  mov    -0x38(%ebp),%eax
081d6c7d +0x189:  movl   $0x13,0x4(%eax)
081d6c84 +0x190:  mov    $0x0,%ebx
081d6c89 +0x195:  jmp    081d726a <+0x776>
081d6c8e +0x19a:  mov    -0x2c(%ebp),%edx
081d6c91 +0x19d:  lea    -0x103(%ebp),%eax
081d6c97 +0x1a3:  imul   $0x3d,%edx,%edx
081d6c9a +0x1a6:  add    $0x10,%edx
081d6c9d +0x1a9:  add    %edx,%eax
081d6c9f +0x1ab:  add    $0x15,%eax
081d6ca2 +0x1ae:  mov    %eax,(%esp)
081d6ca5 +0x1b1:  call   0822abd0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x27a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x27a
081d6caa +0x1b6:  test   %al,%al
081d6cac +0x1b8:  je     081d6cc2 <+0x1ce>
081d6cae +0x1ba:  mov    -0x38(%ebp),%eax
081d6cb1 +0x1bd:  movl   $0x13,0x4(%eax)
081d6cb8 +0x1c4:  mov    $0x0,%ebx
081d6cbd +0x1c9:  jmp    081d726a <+0x776>
081d6cc2 +0x1ce:  mov    -0x2c(%ebp),%ebx
081d6cc5 +0x1d1:  mov    -0x2c(%ebp),%eax
081d6cc8 +0x1d4:  imul   $0x3d,%eax,%eax
081d6ccb +0x1d7:  lea    -0x18(%ebp),%edx
081d6cce +0x1da:  lea    (%edx,%eax,1),%eax
081d6cd1 +0x1dd:  sub    $0xeb,%eax
081d6cd6 +0x1e2:  mov    0x2(%eax),%eax
081d6cd9 +0x1e5:  mov    %eax,%esi
081d6cdb +0x1e7:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081d6ce0 +0x1ec:  mov    %esi,0x4(%esp)
081d6ce4 +0x1f0:  mov    %eax,(%esp)
081d6ce7 +0x1f3:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
081d6cec +0x1f8:  mov    %eax,-0x44(%ebp,%ebx,4)
081d6cf0 +0x1fc:  mov    -0x2c(%ebp),%eax
081d6cf3 +0x1ff:  mov    -0x44(%ebp,%eax,4),%eax
081d6cf7 +0x203:  test   %eax,%eax
081d6cf9 +0x205:  je     081d6d1c <+0x228>
081d6cfb +0x207:  mov    -0x2c(%ebp),%eax
081d6cfe +0x20a:  mov    -0x44(%ebp,%eax,4),%eax
081d6d02 +0x20e:  mov    (%eax),%eax
081d6d04 +0x210:  add    $0x4c,%eax
081d6d07 +0x213:  mov    (%eax),%edx
081d6d09 +0x215:  mov    -0x2c(%ebp),%eax
081d6d0c +0x218:  mov    -0x44(%ebp,%eax,4),%eax
081d6d10 +0x21c:  mov    %eax,(%esp)
081d6d13 +0x21f:  call   *%edx
081d6d15 +0x221:  xor    $0x1,%eax
081d6d18 +0x224:  test   %al,%al
081d6d1a +0x226:  je     081d6d23 <+0x22f>
081d6d1c +0x228:  mov    $0x1,%eax
081d6d21 +0x22d:  jmp    081d6d28 <+0x234>
081d6d23 +0x22f:  mov    $0x0,%eax
081d6d28 +0x234:  test   %al,%al
081d6d2a +0x236:  je     081d6d40 <+0x24c>
081d6d2c +0x238:  mov    -0x38(%ebp),%eax
081d6d2f +0x23b:  movl   $0x13,0x4(%eax)
081d6d36 +0x242:  mov    $0x0,%ebx
081d6d3b +0x247:  jmp    081d726a <+0x776>
081d6d40 +0x24c:  call   081625e6 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x854>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x854
081d6d45 +0x251:  movl   $0x10,0xc(%esp)
081d6d4d +0x259:  movl   $0x1,0x8(%esp)
081d6d55 +0x261:  mov    0xc(%ebp),%edx
081d6d58 +0x264:  mov    %edx,0x4(%esp)
081d6d5c +0x268:  mov    %eax,(%esp)
081d6d5f +0x26b:  call   0816e6b8 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi>  ; ServiceRestrictManager::isRestricted(CUser*, RestrictCategory::Enum, int)
081d6d64 +0x270:  test   %al,%al
081d6d66 +0x272:  je     081d6d7c <+0x288>
081d6d68 +0x274:  mov    -0x38(%ebp),%eax
081d6d6b +0x277:  movl   $0xd1,0x4(%eax)
081d6d72 +0x27e:  mov    $0x0,%ebx
081d6d77 +0x283:  jmp    081d726a <+0x776>
081d6d7c +0x288:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
081d6d81 +0x28d:  movl   $0x1b,0x8(%esp)
081d6d89 +0x295:  mov    0xc(%ebp),%edx
081d6d8c +0x298:  mov    %edx,0x4(%esp)
081d6d90 +0x29c:  mov    %eax,(%esp)
081d6d93 +0x29f:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
081d6d98 +0x2a4:  mov    %eax,-0x28(%ebp)
081d6d9b +0x2a7:  cmpl   $0x0,-0x28(%ebp)
081d6d9f +0x2ab:  je     081d6db4 <+0x2c0>
081d6da1 +0x2ad:  mov    -0x28(%ebp),%edx
081d6da4 +0x2b0:  mov    -0x38(%ebp),%eax
081d6da7 +0x2b3:  mov    %edx,0x4(%eax)
081d6daa +0x2b6:  mov    $0x0,%ebx
081d6daf +0x2bb:  jmp    081d726a <+0x776>
081d6db4 +0x2c0:  mov    -0x2c(%ebp),%edx
081d6db7 +0x2c3:  mov    -0x3c(%ebp),%eax
081d6dba +0x2c6:  movzwl 0xd(%eax,%edx,2),%eax
081d6dbf +0x2cb:  cwtl
081d6dc0 +0x2cc:  mov    %eax,0x8(%esp)
081d6dc4 +0x2d0:  movl   $0x1,0x4(%esp)
081d6dcc +0x2d8:  mov    0xc(%ebp),%eax
081d6dcf +0x2db:  mov    %eax,(%esp)
081d6dd2 +0x2de:  call   08646942 <_ZNK5CUser13CheckItemLockEii>  ; CUser::CheckItemLock(int, int) const
081d6dd7 +0x2e3:  test   %al,%al
081d6dd9 +0x2e5:  je     081d6def <+0x2fb>
081d6ddb +0x2e7:  mov    -0x38(%ebp),%eax
081d6dde +0x2ea:  movl   $0xd5,0x4(%eax)
081d6de5 +0x2f1:  mov    $0x0,%ebx
081d6dea +0x2f6:  jmp    081d726a <+0x776>
081d6def +0x2fb:  mov    -0x2c(%ebp),%eax
081d6df2 +0x2fe:  imul   $0x3d,%eax,%eax
081d6df5 +0x301:  lea    -0x18(%ebp),%ecx
081d6df8 +0x304:  lea    (%ecx,%eax,1),%eax
081d6dfb +0x307:  sub    $0xeb,%eax
081d6e00 +0x30c:  movzbl (%eax),%eax
081d6e03 +0x30f:  xor    $0x1,%eax
081d6e06 +0x312:  test   %al,%al
081d6e08 +0x314:  je     081d6e0e <+0x31a>
081d6e0a +0x316:  movb   $0x0,-0x32(%ebp)
081d6e0e +0x31a:  addl   $0x1,-0x2c(%ebp)
081d6e12 +0x31e:  cmpl   $0x1,-0x2c(%ebp)
081d6e16 +0x322:  setle  %al
081d6e19 +0x325:  test   %al,%al
081d6e1b +0x327:  jne    081d6b51 <+0x5d>
081d6e21 +0x32d:  lea    -0x103(%ebp),%eax
081d6e27 +0x333:  mov    %eax,(%esp)
081d6e2a +0x336:  call   0822b456 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb00>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb00
081d6e2f +0x33b:  movzbl %al,%ebx
081d6e32 +0x33e:  lea    -0x103(%ebp),%eax
081d6e38 +0x344:  add    $0x3d,%eax
081d6e3b +0x347:  mov    %eax,(%esp)
081d6e3e +0x34a:  call   0822b456 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb00>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb00
081d6e43 +0x34f:  movzbl %al,%eax
081d6e46 +0x352:  lea    (%ebx,%eax,1),%eax
081d6e49 +0x355:  mov    %eax,-0x14c(%ebp)
081d6e4f +0x35b:  fildl  -0x14c(%ebp)
081d6e55 +0x361:  flds   &data#1c28ee03(.rodata)
081d6e5b +0x367:  fdivrp %st,%st(1)
081d6e5d +0x369:  flds   &data#77b1158e(.rodata)
081d6e63 +0x36f:  faddp  %st,%st(1)
081d6e65 +0x371:  fnstcw -0x14e(%ebp)
081d6e6b +0x377:  movzwl -0x14e(%ebp),%eax
081d6e72 +0x37e:  mov    $0xc,%ah
081d6e74 +0x380:  mov    %ax,-0x150(%ebp)
081d6e7b +0x387:  fldcw  -0x150(%ebp)
081d6e81 +0x38d:  fistps -0x152(%ebp)
081d6e87 +0x393:  fldcw  -0x14e(%ebp)
081d6e8d +0x399:  movzwl -0x152(%ebp),%eax
081d6e94 +0x3a0:  mov    %al,-0x31(%ebp)
081d6e97 +0x3a3:  lea    -0x48(%ebp),%eax
081d6e9a +0x3a6:  mov    %eax,(%esp)
081d6e9d +0x3a9:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
081d6ea2 +0x3ae:  lea    -0x89(%ebp),%eax
081d6ea8 +0x3b4:  mov    %eax,(%esp)
081d6eab +0x3b7:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
081d6eb0 +0x3bc:  movl   $0x0,-0x4c(%ebp)
081d6eb7 +0x3c3:  movl   $0x0,-0x30(%ebp)
081d6ebe +0x3ca:  mov    -0x3c(%ebp),%eax
081d6ec1 +0x3cd:  movzwl 0x13(%eax),%eax
081d6ec5 +0x3d1:  cwtl
081d6ec6 +0x3d2:  mov    %eax,-0x158(%ebp)
081d6ecc +0x3d8:  mov    -0x3c(%ebp),%eax
081d6ecf +0x3db:  movzwl 0x11(%eax),%eax
081d6ed3 +0x3df:  movswl %ax,%edi
081d6ed6 +0x3e2:  mov    -0x40(%ebp),%eax
081d6ed9 +0x3e5:  mov    %eax,(%esp)
081d6edc +0x3e8:  call   080f12ee <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x370>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x370
081d6ee1 +0x3ed:  mov    %eax,%esi
081d6ee3 +0x3ef:  mov    -0x44(%ebp),%eax
081d6ee6 +0x3f2:  mov    %eax,(%esp)
081d6ee9 +0x3f5:  call   080f12ee <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x370>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x370
081d6eee +0x3fa:  mov    %eax,%ebx
081d6ef0 +0x3fc:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081d6ef5 +0x401:  lea    0x5040(%eax),%edx
081d6efb +0x407:  mov    0xc(%ebp),%eax
081d6efe +0x40a:  mov    %eax,0x1c(%esp)
081d6f02 +0x40e:  lea    -0x89(%ebp),%eax
081d6f08 +0x414:  mov    %eax,0x18(%esp)
081d6f0c +0x418:  lea    -0x4c(%ebp),%eax
081d6f0f +0x41b:  mov    %eax,0x14(%esp)
081d6f13 +0x41f:  mov    -0x158(%ebp),%eax
081d6f19 +0x425:  mov    %eax,0x10(%esp)
081d6f1d +0x429:  mov    %edi,0xc(%esp)
081d6f21 +0x42d:  mov    %esi,0x8(%esp)
081d6f25 +0x431:  mov    %ebx,0x4(%esp)
081d6f29 +0x435:  mov    %edx,(%esp)
081d6f2c +0x438:  call   085f8646 <_ZN15RegenerationROI10RegenerateEiiiiRiR10Inven_ItemP5CUser>  ; RegenerationROI::Regenerate(int, int, int, int, int&, Inven_Item&, CUser*)
081d6f31 +0x43d:  mov    %eax,-0x30(%ebp)
081d6f34 +0x440:  cmpl   $0x0,-0x30(%ebp)
081d6f38 +0x444:  sete   %al
081d6f3b +0x447:  test   %al,%al
081d6f3d +0x449:  je     081d7234 <+0x740>
081d6f43 +0x44f:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
081d6f4a +0x456:  call   0823445e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9b08>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9b08
081d6f4f +0x45b:  mov    %eax,%ebx
081d6f51 +0x45d:  mov    0xc(%ebp),%eax
081d6f54 +0x460:  mov    %eax,(%esp)
081d6f57 +0x463:  call   0822f3a0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4a4a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4a4a
081d6f5c +0x468:  mov    %ebx,0x18(%esp)
081d6f60 +0x46c:  mov    %eax,0x14(%esp)
081d6f64 +0x470:  movl   $"%d,'%s'",0x10(%esp)
081d6f6c +0x478:  movl   $0x1,0xc(%esp)
081d6f74 +0x480:  movl   $"regen_cnt",0x8(%esp)
081d6f7c +0x488:  movl   $"log_random_option",0x4(%esp)
081d6f84 +0x490:  mov    0xc(%ebp),%eax
081d6f87 +0x493:  mov    %eax,(%esp)
081d6f8a +0x496:  call   0860fdd2 <_ZN14statistc_proxy3addEP5CUserPKcS3_jS3_z>  ; statistc_proxy::add(CUser*, char const*, char const*, unsigned int, char const*, ...)
081d6f8f +0x49b:  mov    -0x4c(%ebp),%eax
081d6f92 +0x49e:  test   %eax,%eax
081d6f94 +0x4a0:  jle    081d6fe1 <+0x4ed>
081d6f96 +0x4a2:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
081d6f9d +0x4a9:  call   0823445e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9b08>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9b08
081d6fa2 +0x4ae:  mov    %eax,%ebx
081d6fa4 +0x4b0:  mov    0xc(%ebp),%eax
081d6fa7 +0x4b3:  mov    %eax,(%esp)
081d6faa +0x4b6:  call   0822f3a0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4a4a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4a4a
081d6faf +0x4bb:  mov    -0x4c(%ebp),%edx
081d6fb2 +0x4be:  mov    %ebx,0x18(%esp)
081d6fb6 +0x4c2:  mov    %eax,0x14(%esp)
081d6fba +0x4c6:  movl   $"%d,'%s'",0x10(%esp)
081d6fc2 +0x4ce:  mov    %edx,0xc(%esp)
081d6fc6 +0x4d2:  movl   $"regen_gold",0x8(%esp)
081d6fce +0x4da:  movl   $"log_random_option",0x4(%esp)
081d6fd6 +0x4e2:  mov    0xc(%ebp),%eax
081d6fd9 +0x4e5:  mov    %eax,(%esp)
081d6fdc +0x4e8:  call   0860fdd2 <_ZN14statistc_proxy3addEP5CUserPKcS3_jS3_z>  ; statistc_proxy::add(CUser*, char const*, char const*, unsigned int, char const*, ...)
081d6fe1 +0x4ed:  mov    -0x4c(%ebp),%ebx
081d6fe4 +0x4f0:  mov    0xc(%ebp),%eax
081d6fe7 +0x4f3:  mov    %eax,(%esp)
081d6fea +0x4f6:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
081d6fef +0x4fb:  movl   $0x1,0xc(%esp)
081d6ff7 +0x503:  movl   $0x2f,0x8(%esp)
081d6fff +0x50b:  mov    %ebx,0x4(%esp)
081d7003 +0x50f:  mov    %eax,(%esp)
081d7006 +0x512:  call   084ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>  ; CInventory::use_money(int, eMoneySubReason, bool)
081d700b +0x517:  xor    $0x1,%eax
081d700e +0x51a:  test   %al,%al
081d7010 +0x51c:  je     081d7026 <+0x532>
081d7012 +0x51e:  mov    -0x38(%ebp),%eax
081d7015 +0x521:  movl   $0xa,0x4(%eax)
081d701c +0x528:  mov    $0x0,%ebx
081d7021 +0x52d:  jmp    081d725f <+0x76b>
081d7026 +0x532:  movl   $0x0,0xc(%esp)
081d702e +0x53a:  movl   $0x0,0x8(%esp)
081d7036 +0x542:  movl   $0x1,0x4(%esp)
081d703e +0x54a:  mov    0xc(%ebp),%eax
081d7041 +0x54d:  mov    %eax,(%esp)
081d7044 +0x550:  call   0867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItemList(CUser::eSendTarget, ENUM_ITEMSPACE, int)
081d7049 +0x555:  mov    0xc(%ebp),%eax
081d704c +0x558:  mov    %eax,(%esp)
081d704f +0x55b:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
081d7054 +0x560:  mov    %eax,-0x24(%ebp)
081d7057 +0x563:  movl   $0x0,-0x1c(%ebp)
081d705e +0x56a:  jmp    081d70ba <+0x5c6>
081d7060 +0x56c:  mov    -0x1c(%ebp),%edx
081d7063 +0x56f:  mov    -0x3c(%ebp),%eax
081d7066 +0x572:  movzwl 0xd(%eax,%edx,2),%eax
081d706b +0x577:  cwtl
081d706c +0x578:  movl   $0x1,0x14(%esp)
081d7074 +0x580:  movl   $0x2e,0x10(%esp)
081d707c +0x588:  movl   $0x1,0xc(%esp)
081d7084 +0x590:  mov    %eax,0x8(%esp)
081d7088 +0x594:  movl   $0x1,0x4(%esp)
081d7090 +0x59c:  mov    -0x24(%ebp),%eax
081d7093 +0x59f:  mov    %eax,(%esp)
081d7096 +0x5a2:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
081d709b +0x5a7:  xor    $0x1,%eax
081d709e +0x5aa:  test   %al,%al
081d70a0 +0x5ac:  je     081d70b6 <+0x5c2>
081d70a2 +0x5ae:  mov    -0x38(%ebp),%eax
081d70a5 +0x5b1:  movl   $0x13,0x4(%eax)
081d70ac +0x5b8:  mov    $0x0,%ebx
081d70b1 +0x5bd:  jmp    081d725f <+0x76b>
081d70b6 +0x5c2:  addl   $0x1,-0x1c(%ebp)
081d70ba +0x5c6:  cmpl   $0x1,-0x1c(%ebp)
081d70be +0x5ca:  setbe  %al
081d70c1 +0x5cd:  test   %al,%al
081d70c3 +0x5cf:  jne    081d7060 <+0x56c>
081d70c5 +0x5d1:  mov    -0x3c(%ebp),%eax
081d70c8 +0x5d4:  movzwl 0xd(%eax),%eax
081d70cc +0x5d8:  cwtl
081d70cd +0x5d9:  mov    %eax,0xc(%esp)
081d70d1 +0x5dd:  movl   $0x0,0x8(%esp)
081d70d9 +0x5e5:  movl   $0x1,0x4(%esp)
081d70e1 +0x5ed:  mov    0xc(%ebp),%eax
081d70e4 +0x5f0:  mov    %eax,(%esp)
081d70e7 +0x5f3:  call   0867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItemList(CUser::eSendTarget, ENUM_ITEMSPACE, int)
081d70ec +0x5f8:  mov    -0x3c(%ebp),%eax
081d70ef +0x5fb:  movzwl 0xf(%eax),%eax
081d70f3 +0x5ff:  cwtl
081d70f4 +0x600:  mov    %eax,0xc(%esp)
081d70f8 +0x604:  movl   $0x0,0x8(%esp)
081d7100 +0x60c:  movl   $0x1,0x4(%esp)
081d7108 +0x614:  mov    0xc(%ebp),%eax
081d710b +0x617:  mov    %eax,(%esp)
081d710e +0x61a:  call   0867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItemList(CUser::eSendTarget, ENUM_ITEMSPACE, int)
081d7113 +0x61f:  movzbl -0x32(%ebp),%eax
081d7117 +0x623:  mov    %al,-0x89(%ebp)
081d711d +0x629:  movzbl -0x31(%ebp),%eax
081d7121 +0x62d:  mov    %eax,0x4(%esp)
081d7125 +0x631:  lea    -0x89(%ebp),%eax
081d712b +0x637:  mov    %eax,(%esp)
081d712e +0x63a:  call   0822b466 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb10>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb10
081d7133 +0x63f:  mov    0xc(%ebp),%eax
081d7136 +0x642:  mov    %eax,(%esp)
081d7139 +0x645:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
081d713e +0x64a:  movl   $0x1,0x4c(%esp)
081d7146 +0x652:  movl   $0x1,0x48(%esp)
081d714e +0x65a:  movl   $0x36,0x44(%esp)
081d7156 +0x662:  mov    -0x89(%ebp),%edx
081d715c +0x668:  mov    %edx,0x4(%esp)
081d7160 +0x66c:  mov    -0x85(%ebp),%edx
081d7166 +0x672:  mov    %edx,0x8(%esp)
081d716a +0x676:  mov    -0x81(%ebp),%edx
081d7170 +0x67c:  mov    %edx,0xc(%esp)
081d7174 +0x680:  mov    -0x7d(%ebp),%edx
081d7177 +0x683:  mov    %edx,0x10(%esp)
081d717b +0x687:  mov    -0x79(%ebp),%edx
081d717e +0x68a:  mov    %edx,0x14(%esp)
081d7182 +0x68e:  mov    -0x75(%ebp),%edx
081d7185 +0x691:  mov    %edx,0x18(%esp)
081d7189 +0x695:  mov    -0x71(%ebp),%edx
081d718c +0x698:  mov    %edx,0x1c(%esp)
081d7190 +0x69c:  mov    -0x6d(%ebp),%edx
081d7193 +0x69f:  mov    %edx,0x20(%esp)
081d7197 +0x6a3:  mov    -0x69(%ebp),%edx
081d719a +0x6a6:  mov    %edx,0x24(%esp)
081d719e +0x6aa:  mov    -0x65(%ebp),%edx
081d71a1 +0x6ad:  mov    %edx,0x28(%esp)
081d71a5 +0x6b1:  mov    -0x61(%ebp),%edx
081d71a8 +0x6b4:  mov    %edx,0x2c(%esp)
081d71ac +0x6b8:  mov    -0x5d(%ebp),%edx
081d71af +0x6bb:  mov    %edx,0x30(%esp)
081d71b3 +0x6bf:  mov    -0x59(%ebp),%edx
081d71b6 +0x6c2:  mov    %edx,0x34(%esp)
081d71ba +0x6c6:  mov    -0x55(%ebp),%edx
081d71bd +0x6c9:  mov    %edx,0x38(%esp)
081d71c1 +0x6cd:  mov    -0x51(%ebp),%edx
081d71c4 +0x6d0:  mov    %edx,0x3c(%esp)
081d71c8 +0x6d4:  movzbl -0x4d(%ebp),%edx
081d71cc +0x6d8:  mov    %dl,0x40(%esp)
081d71d0 +0x6dc:  mov    %eax,(%esp)
081d71d3 +0x6df:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
081d71d8 +0x6e4:  mov    %eax,-0x20(%ebp)
081d71db +0x6e7:  cmpl   $0x0,-0x20(%ebp)
081d71df +0x6eb:  js     081d720f <+0x71b>
081d71e1 +0x6ed:  mov    -0x20(%ebp),%eax
081d71e4 +0x6f0:  mov    %eax,0xc(%esp)
081d71e8 +0x6f4:  movl   $0x0,0x8(%esp)
081d71f0 +0x6fc:  movl   $0x1,0x4(%esp)
081d71f8 +0x704:  mov    0xc(%ebp),%eax
081d71fb +0x707:  mov    %eax,(%esp)
081d71fe +0x70a:  call   0867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItemList(CUser::eSendTarget, ENUM_ITEMSPACE, int)
081d7203 +0x70f:  mov    -0x20(%ebp),%eax
081d7206 +0x712:  mov    %eax,%edx
081d7208 +0x714:  mov    -0x38(%ebp),%eax
081d720b +0x717:  mov    %dx,0x8(%eax)
081d720f +0x71b:  mov    0xc(%ebp),%eax
081d7212 +0x71e:  lea    0x79700(%eax),%edx
081d7218 +0x724:  movl   $0x1,0x8(%esp)
081d7220 +0x72c:  lea    -0x89(%ebp),%eax
081d7226 +0x732:  mov    %eax,0x4(%esp)
081d722a +0x736:  mov    %edx,(%esp)
081d722d +0x739:  call   08682d3a <_ZN15cUserHistoryLog12RandomOptionERK10Inven_ItemN18randomOptionReason1TE>  ; cUserHistoryLog::RandomOption(Inven_Item const&, randomOptionReason::T)
081d7232 +0x73e:  jmp    081d723d <+0x749>
081d7234 +0x740:  mov    -0x38(%ebp),%eax
081d7237 +0x743:  mov    -0x30(%ebp),%edx
081d723a +0x746:  mov    %edx,0x4(%eax)
081d723d +0x749:  mov    $0x0,%ebx
081d7242 +0x74e:  jmp    081d725f <+0x76b>
081d7244 +0x750:  mov    %edx,%ebx
081d7246 +0x752:  mov    %eax,%esi
081d7248 +0x754:  lea    -0x48(%ebp),%eax
081d724b +0x757:  mov    %eax,(%esp)
081d724e +0x75a:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
081d7253 +0x75f:  mov    %esi,%eax
081d7255 +0x761:  mov    %ebx,%edx
081d7257 +0x763:  mov    %eax,(%esp)
081d725a +0x766:  call   08ae3750 <_Unwind_Resume>
081d725f +0x76b:  lea    -0x48(%ebp),%eax
081d7262 +0x76e:  mov    %eax,(%esp)
081d7265 +0x771:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
081d726a +0x776:  mov    %ebx,%eax
081d726c +0x778:  lea    -0xc(%ebp),%esp
081d726f +0x77b:  add    $0x0,%esp
081d7272 +0x77e:  pop    %ebx
081d7273 +0x77f:  pop    %esi
081d7274 +0x780:  pop    %edi
081d7275 +0x781:  pop    %ebp
081d7276 +0x782:  ret
081d7277 +0x783:  nop
```

## 反编译 C

```c
// Dispather_RegenerationRandomOption::process @ 0x81d6af4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Dispather_RegenerationRandomOption::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispather_RegenerationRandomOption::process
          (Dispather_RegenerationRandomOption *this,CUser *param_1,MSG_BASE *param_2,
          ParamBase *param_3)

{
  short sVar1;
  short sVar2;
  bool bVar3;
  char cVar4;
  CDataManager *this_00;
  CItem *pCVar5;
  ServiceRestrictManager *pSVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  CInventory *pCVar13;
  Inven_Item *this_01;
  int iVar14;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  Inven_Item local_110;
  Inven_Item local_107 [8];
  undefined4 auStack_ff [7];
  RandomOption aRStack_e2 [3];
  undefined4 auStack_df [3];
  Inven_Item aIStack_d3 [4];
  Inven_Item aIStack_cf [4];
  Inven_Item aIStack_cb [62];
  undefined4 local_8d;
  undefined4 local_89;
  undefined4 local_85;
  undefined4 local_81;
  undefined4 local_7d;
  undefined4 local_79;
  undefined4 local_75;
  undefined4 local_71;
  undefined4 local_6d;
  undefined4 local_69;
  undefined4 local_65;
  undefined4 local_61;
  undefined4 local_5d;
  undefined4 local_59;
  undefined4 local_55;
  undefined1 local_51;
  uint local_50;
  string local_4c [4];
  CItem *local_48 [2];
  MSG_BASE *local_40;
  ParamBase *local_3c;
  undefined1 local_36;
  uchar local_35;
  int local_34;
  int local_30;
  int local_2c;
  CInventory *local_28;
  int local_24;
  uint local_20;
  
  local_40 = param_2;
  local_3c = param_3;
  *(undefined4 *)(param_3 + 4) = 0;
  this_01 = local_107;
  for (iVar14 = 1; iVar14 != -1; iVar14 = iVar14 + -1) {
    Inven_Item::Inven_Item(this_01);
    this_01 = this_01 + 0x3d;
  }
  local_36 = 1;
  local_35 = 0;
  for (local_30 = 0; iVar14 = local_30, local_30 < 2; local_30 = local_30 + 1) {
    iVar9 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    iVar14 = iVar14 * 0x3d;
    CInventory::GetInvenSlot((int)&local_14c,iVar9);
    *(undefined4 *)(local_107 + iVar14) = local_14c;
    *(undefined4 *)(local_107 + iVar14 + 4) = local_148;
    *(undefined4 *)((int)auStack_ff + iVar14) = local_144;
    *(undefined4 *)((int)auStack_ff + iVar14 + 4) = local_140;
    *(undefined4 *)((int)auStack_ff + iVar14 + 8) = local_13c;
    *(undefined4 *)((int)auStack_ff + iVar14 + 0xc) = local_138;
    *(undefined4 *)((int)auStack_ff + iVar14 + 0x10) = local_134;
    *(undefined4 *)((int)auStack_ff + iVar14 + 0x14) = local_130;
    *(undefined4 *)((int)auStack_ff + iVar14 + 0x18) = local_12c;
    *(undefined4 *)(&stack0xffffff1d + iVar14) = local_128;
    *(undefined4 *)((int)auStack_df + iVar14) = local_124;
    *(undefined4 *)((int)auStack_df + iVar14 + 4) = local_120;
    *(undefined4 *)((int)auStack_df + iVar14 + 8) = local_11c;
    *(undefined4 *)(aIStack_cb + iVar14 + -8) = local_118;
    *(undefined4 *)(aIStack_cb + iVar14 + -4) = local_114;
    aIStack_cb[iVar14] = local_110;
    cVar4 = Inven_Item::isEmpty(local_107 + local_30 * 0x3d);
    if (cVar4 != '\0') {
      *(undefined4 *)(local_3c + 4) = 0x13;
      return 0;
    }
    cVar4 = Inven_Item::isEquipableItemType(local_107 + local_30 * 0x3d);
    if (cVar4 != '\x01') {
      *(undefined4 *)(local_3c + 4) = 0x13;
      return 0;
    }
    cVar4 = RandomOption::empty(aRStack_e2 + local_30 * 0x3d);
    iVar14 = local_30;
    if (cVar4 != '\0') {
      *(undefined4 *)(local_3c + 4) = 0x13;
      return 0;
    }
    iVar9 = *(int *)(local_107 + local_30 * 0x3d + 2);
    this_00 = (CDataManager *)G_CDataManager();
    pCVar5 = (CItem *)CDataManager::find_item(this_00,iVar9);
    local_48[iVar14] = pCVar5;
    if ((local_48[local_30] == (CItem *)0x0) ||
       (cVar4 = (**(code **)(*(int *)local_48[local_30] + 0x4c))(local_48[local_30]),
       cVar4 != '\x01')) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      *(undefined4 *)(local_3c + 4) = 0x13;
      return 0;
    }
    pSVar6 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
    cVar4 = ServiceRestrictManager::isRestricted(pSVar6,param_1,1,0x10);
    if (cVar4 != '\0') {
      *(undefined4 *)(local_3c + 4) = 0xd1;
      return 0;
    }
    local_2c = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x1b);
    if (local_2c != 0) {
      *(int *)(local_3c + 4) = local_2c;
      return 0;
    }
    cVar4 = CUser::CheckItemLock(param_1,1,(int)*(short *)(local_40 + local_30 * 2 + 0xd));
    if (cVar4 != '\0') {
      *(undefined4 *)(local_3c + 4) = 0xd5;
      return 0;
    }
    if (local_107[local_30 * 0x3d] != (Inven_Item)0x1) {
      local_36 = 0;
    }
  }
  uVar7 = Inven_Item::GetReSealCount(local_107);
  uVar8 = Inven_Item::GetReSealCount(aIStack_cb + 1);
  local_35 = (uchar)(short)ROUND(_DAT_08bd634c +
                                 (float)((uVar7 & 0xff) + (uVar8 & 0xff)) / _DAT_08bd6348);
  std::string::string(local_4c);
  Inven_Item::Inven_Item((Inven_Item *)&local_8d);
  local_50 = 0;
  local_34 = 0;
  sVar1 = *(short *)(local_40 + 0x13);
  sVar2 = *(short *)(local_40 + 0x11);
  iVar14 = CItem::getUsableLevel(local_48[1]);
  iVar9 = CItem::getUsableLevel(local_48[0]);
                    /* try { // try from 081d6ef0 to 081d7231 has its CatchHandler @ 081d7244 */
  iVar10 = G_CDataManager();
  local_34 = RegenerationROI::Regenerate
                       ((RegenerationROI *)(iVar10 + 0x5040),iVar9,iVar14,(int)sVar2,(int)sVar1,
                        (int *)&local_50,(Inven_Item *)&local_8d,param_1);
  if (local_34 == 0) {
    uVar11 = CSystemTime::getCurDate((CSystemTime *)GlobalData::s_systemTime_);
    uVar12 = CUserCharacInfo::get_charac_10_level_section((CUserCharacInfo *)param_1);
    statistc_proxy::add(param_1,"log_random_option","regen_cnt",1,"%d,\'%s\'",uVar12,uVar11);
    if (0 < (int)local_50) {
      uVar11 = CSystemTime::getCurDate((CSystemTime *)GlobalData::s_systemTime_);
      uVar12 = CUserCharacInfo::get_charac_10_level_section((CUserCharacInfo *)param_1);
      statistc_proxy::add(param_1,"log_random_option","regen_gold",local_50,"%d,\'%s\'",uVar12,
                          uVar11);
    }
    uVar7 = local_50;
    pCVar13 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    cVar4 = CInventory::use_money(pCVar13,uVar7,0x2f,1);
    if (cVar4 == '\x01') {
      CUser::SendUpdateItemList(param_1,1,0,0);
      local_28 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      for (local_20 = 0; local_20 < 2; local_20 = local_20 + 1) {
        cVar4 = CInventory::delete_item
                          (local_28,1,(int)*(short *)(local_40 + local_20 * 2 + 0xd),1,0x2e,1);
        if (cVar4 != '\x01') {
          *(undefined4 *)(local_3c + 4) = 0x13;
          goto LAB_081d725f;
        }
      }
      CUser::SendUpdateItemList(param_1,1,0,(int)*(short *)(local_40 + 0xd));
      CUser::SendUpdateItemList(param_1,1,0,(int)*(short *)(local_40 + 0xf));
      local_8d = CONCAT31(local_8d._1_3_,local_36);
      Inven_Item::SetReSealCount((Inven_Item *)&local_8d,local_35);
      uVar11 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      local_24 = CInventory::insertItemIntoInventory
                           (uVar11,local_8d,local_89,local_85,local_81,local_7d,local_79,local_75,
                            local_71,local_6d,local_69,local_65,local_61,local_5d,local_59,local_55,
                            local_51,0x36,1,1);
      if (-1 < local_24) {
        CUser::SendUpdateItemList(param_1,1,0,local_24);
        *(short *)(local_3c + 8) = (short)local_24;
      }
      cUserHistoryLog::RandomOption((cUserHistoryLog *)(param_1 + 0x79700),&local_8d,1);
    }
    else {
      *(undefined4 *)(local_3c + 4) = 10;
    }
  }
  else {
    *(int *)(local_3c + 4) = local_34;
  }
LAB_081d725f:
  std::string::~string(local_4c);
  return 0;
}
```
