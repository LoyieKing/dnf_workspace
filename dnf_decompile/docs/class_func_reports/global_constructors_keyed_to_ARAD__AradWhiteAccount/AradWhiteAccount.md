# AradWhiteAccount

`_GLOBAL__I__ZN4ARAD16AradWhiteAccountC2Ev`

`global constructors keyed to ARAD::AradWhiteAccount::AradWhiteAccount()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to ARAD::AradWhiteAccount` | `0x081ab6ae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ab6ae  _GLOBAL__I__ZN4ARAD16AradWhiteAccountC2Ev
#           global constructors keyed to ARAD::AradWhiteAccount::AradWhiteAccount()
# range [0x081ab6ae, 0x081abeff]
081ab6ae +0x000:  push   %ebp
081ab6af +0x001:  mov    %esp,%ebp
081ab6b1 +0x003:  sub    $0x18,%esp
081ab6b4 +0x006:  movl   $0xffff,0x4(%esp)
081ab6bc +0x00e:  movl   $0x1,(%esp)
081ab6c3 +0x015:  call   081ab66e <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
081ab6c8 +0x01a:  leave
081ab6c9 +0x01b:  ret
081ab6ca +0x01c:  push   %ebp
081ab6cb +0x01d:  mov    %esp,%ebp
081ab6cd +0x01f:  sub    $0x18,%esp
081ab6d0 +0x022:  mov    0x8(%ebp),%eax
081ab6d3 +0x025:  mov    %eax,(%esp)
081ab6d6 +0x028:  call   081ab706 <+0x58>
081ab6db +0x02d:  leave
081ab6dc +0x02e:  ret
081ab6dd +0x02f:  nop
081ab6de +0x030:  push   %ebp
081ab6df +0x031:  mov    %esp,%ebp
081ab6e1 +0x033:  sub    $0x18,%esp
081ab6e4 +0x036:  mov    0x8(%ebp),%eax
081ab6e7 +0x039:  mov    %eax,(%esp)
081ab6ea +0x03c:  call   081ab7c8 <+0x11a>
081ab6ef +0x041:  leave
081ab6f0 +0x042:  ret
081ab6f1 +0x043:  nop
081ab6f2 +0x044:  push   %ebp
081ab6f3 +0x045:  mov    %esp,%ebp
081ab6f5 +0x047:  sub    $0x18,%esp
081ab6f8 +0x04a:  mov    0x8(%ebp),%eax
081ab6fb +0x04d:  mov    %eax,(%esp)
081ab6fe +0x050:  call   081ab7dc <+0x12e>
081ab703 +0x055:  leave
081ab704 +0x056:  ret
081ab705 +0x057:  nop
081ab706 +0x058:  push   %ebp
081ab707 +0x059:  mov    %esp,%ebp
081ab709 +0x05b:  push   %esi
081ab70a +0x05c:  push   %ebx
081ab70b +0x05d:  sub    $0x10,%esp
081ab70e +0x060:  mov    0x8(%ebp),%eax
081ab711 +0x063:  mov    %eax,(%esp)
081ab714 +0x066:  call   0811245e <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1970>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1970
081ab719 +0x06b:  mov    %eax,0x4(%esp)
081ab71d +0x06f:  mov    0x8(%ebp),%eax
081ab720 +0x072:  mov    %eax,(%esp)
081ab723 +0x075:  call   081ab7f0 <+0x142>
081ab728 +0x07a:  jmp    081ab745 <+0x97>
081ab72a +0x07c:  mov    %edx,%ebx
081ab72c +0x07e:  mov    %eax,%esi
081ab72e +0x080:  mov    0x8(%ebp),%eax
081ab731 +0x083:  mov    %eax,(%esp)
081ab734 +0x086:  call   081ab6f2 <+0x44>
081ab739 +0x08b:  mov    %esi,%eax
081ab73b +0x08d:  mov    %ebx,%edx
081ab73d +0x08f:  mov    %eax,(%esp)
081ab740 +0x092:  call   08ae3750 <_Unwind_Resume>
081ab745 +0x097:  mov    0x8(%ebp),%eax
081ab748 +0x09a:  mov    %eax,(%esp)
081ab74b +0x09d:  call   081ab6f2 <+0x44>
081ab750 +0x0a2:  add    $0x10,%esp
081ab753 +0x0a5:  pop    %ebx
081ab754 +0x0a6:  pop    %esi
081ab755 +0x0a7:  pop    %ebp
081ab756 +0x0a8:  ret
081ab757 +0x0a9:  nop
081ab758 +0x0aa:  push   %ebp
081ab759 +0x0ab:  mov    %esp,%ebp
081ab75b +0x0ad:  sub    $0x18,%esp
081ab75e +0x0b0:  mov    0x8(%ebp),%eax
081ab761 +0x0b3:  mov    %eax,(%esp)
081ab764 +0x0b6:  call   081ab846 <+0x198>
081ab769 +0x0bb:  leave
081ab76a +0x0bc:  ret
081ab76b +0x0bd:  nop
081ab76c +0x0be:  push   %ebp
081ab76d +0x0bf:  mov    %esp,%ebp
081ab76f +0x0c1:  mov    0x8(%ebp),%eax
081ab772 +0x0c4:  mov    (%eax),%edx
081ab774 +0x0c6:  mov    0xc(%ebp),%eax
081ab777 +0x0c9:  mov    (%eax),%eax
081ab779 +0x0cb:  cmp    %eax,%edx
081ab77b +0x0cd:  sete   %al
081ab77e +0x0d0:  pop    %ebp
081ab77f +0x0d1:  ret
081ab780 +0x0d2:  push   %ebp
081ab781 +0x0d3:  mov    %esp,%ebp
081ab783 +0x0d5:  push   %ebx
081ab784 +0x0d6:  sub    $0x24,%esp
081ab787 +0x0d9:  mov    0x8(%ebp),%ebx
081ab78a +0x0dc:  mov    0xc(%ebp),%edx
081ab78d +0x0df:  lea    -0x10(%ebp),%eax
081ab790 +0x0e2:  mov    0x10(%ebp),%ecx
081ab793 +0x0e5:  mov    %ecx,0x8(%esp)
081ab797 +0x0e9:  mov    %edx,0x4(%esp)
081ab79b +0x0ed:  mov    %eax,(%esp)
081ab79e +0x0f0:  call   081ab8bc <+0x20e>
081ab7a3 +0x0f5:  sub    $0x4,%esp
081ab7a6 +0x0f8:  lea    -0x10(%ebp),%eax
081ab7a9 +0x0fb:  add    $0x4,%eax
081ab7ac +0x0fe:  mov    %eax,0x8(%esp)
081ab7b0 +0x102:  lea    -0x10(%ebp),%eax
081ab7b3 +0x105:  mov    %eax,0x4(%esp)
081ab7b7 +0x109:  mov    %ebx,(%esp)
081ab7ba +0x10c:  call   081aba8c <+0x3de>
081ab7bf +0x111:  mov    %ebx,%eax
081ab7c1 +0x113:  mov    -0x4(%ebp),%ebx
081ab7c4 +0x116:  leave
081ab7c5 +0x117:  ret    $0x4
081ab7c8 +0x11a:  push   %ebp
081ab7c9 +0x11b:  mov    %esp,%ebp
081ab7cb +0x11d:  sub    $0x18,%esp
081ab7ce +0x120:  mov    0x8(%ebp),%eax
081ab7d1 +0x123:  mov    %eax,(%esp)
081ab7d4 +0x126:  call   081abac2 <+0x414>
081ab7d9 +0x12b:  leave
081ab7da +0x12c:  ret
081ab7db +0x12d:  nop
081ab7dc +0x12e:  push   %ebp
081ab7dd +0x12f:  mov    %esp,%ebp
081ab7df +0x131:  sub    $0x18,%esp
081ab7e2 +0x134:  mov    0x8(%ebp),%eax
081ab7e5 +0x137:  mov    %eax,(%esp)
081ab7e8 +0x13a:  call   081abb12 <+0x464>
081ab7ed +0x13f:  leave
081ab7ee +0x140:  ret
081ab7ef +0x141:  nop
081ab7f0 +0x142:  push   %ebp
081ab7f1 +0x143:  mov    %esp,%ebp
081ab7f3 +0x145:  sub    $0x28,%esp
081ab7f6 +0x148:  jmp    081ab838 <+0x18a>
081ab7f8 +0x14a:  mov    0xc(%ebp),%eax
081ab7fb +0x14d:  mov    %eax,(%esp)
081ab7fe +0x150:  call   08113300 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x2812>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x2812
081ab803 +0x155:  mov    %eax,0x4(%esp)
081ab807 +0x159:  mov    0x8(%ebp),%eax
081ab80a +0x15c:  mov    %eax,(%esp)
081ab80d +0x15f:  call   081ab7f0 <+0x142>
081ab812 +0x164:  mov    0xc(%ebp),%eax
081ab815 +0x167:  mov    %eax,(%esp)
081ab818 +0x16a:  call   0811330b <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x281d>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x281d
081ab81d +0x16f:  mov    %eax,-0xc(%ebp)
081ab820 +0x172:  mov    0xc(%ebp),%eax
081ab823 +0x175:  mov    %eax,0x4(%esp)
081ab827 +0x179:  mov    0x8(%ebp),%eax
081ab82a +0x17c:  mov    %eax,(%esp)
081ab82d +0x17f:  call   081abb18 <+0x46a>
081ab832 +0x184:  mov    -0xc(%ebp),%eax
081ab835 +0x187:  mov    %eax,0xc(%ebp)
081ab838 +0x18a:  cmpl   $0x0,0xc(%ebp)
081ab83c +0x18e:  setne  %al
081ab83f +0x191:  test   %al,%al
081ab841 +0x193:  jne    081ab7f8 <+0x14a>
081ab843 +0x195:  leave
081ab844 +0x196:  ret
081ab845 +0x197:  nop
081ab846 +0x198:  push   %ebp
081ab847 +0x199:  mov    %esp,%ebp
081ab849 +0x19b:  push   %ebx
081ab84a +0x19c:  sub    $0x14,%esp
081ab84d +0x19f:  mov    0x8(%ebp),%eax
081ab850 +0x1a2:  mov    %eax,(%esp)
081ab853 +0x1a5:  call   0811245e <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1970>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1970
081ab858 +0x1aa:  mov    %eax,0x4(%esp)
081ab85c +0x1ae:  mov    0x8(%ebp),%eax
081ab85f +0x1b1:  mov    %eax,(%esp)
081ab862 +0x1b4:  call   081ab7f0 <+0x142>
081ab867 +0x1b9:  mov    0x8(%ebp),%eax
081ab86a +0x1bc:  mov    %eax,(%esp)
081ab86d +0x1bf:  call   081abb4c <+0x49e>
081ab872 +0x1c4:  mov    %eax,%ebx
081ab874 +0x1c6:  mov    0x8(%ebp),%eax
081ab877 +0x1c9:  mov    %eax,(%esp)
081ab87a +0x1cc:  call   081132ca <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x27dc>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x27dc
081ab87f +0x1d1:  mov    %eax,(%ebx)
081ab881 +0x1d3:  mov    0x8(%ebp),%eax
081ab884 +0x1d6:  mov    %eax,(%esp)
081ab887 +0x1d9:  call   081abb58 <+0x4aa>
081ab88c +0x1de:  movl   $0x0,(%eax)
081ab892 +0x1e4:  mov    0x8(%ebp),%eax
081ab895 +0x1e7:  mov    %eax,(%esp)
081ab898 +0x1ea:  call   081abb64 <+0x4b6>
081ab89d +0x1ef:  mov    %eax,%ebx
081ab89f +0x1f1:  mov    0x8(%ebp),%eax
081ab8a2 +0x1f4:  mov    %eax,(%esp)
081ab8a5 +0x1f7:  call   081132ca <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x27dc>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x27dc
081ab8aa +0x1fc:  mov    %eax,(%ebx)
081ab8ac +0x1fe:  mov    0x8(%ebp),%eax
081ab8af +0x201:  movl   $0x0,0x14(%eax)
081ab8b6 +0x208:  add    $0x14,%esp
081ab8b9 +0x20b:  pop    %ebx
081ab8ba +0x20c:  pop    %ebp
081ab8bb +0x20d:  ret
081ab8bc +0x20e:  push   %ebp
081ab8bd +0x20f:  mov    %esp,%ebp
081ab8bf +0x211:  push   %esi
081ab8c0 +0x212:  push   %ebx
081ab8c1 +0x213:  sub    $0x50,%esp
081ab8c4 +0x216:  mov    0x8(%ebp),%ebx
081ab8c7 +0x219:  mov    0xc(%ebp),%eax
081ab8ca +0x21c:  mov    %eax,(%esp)
081ab8cd +0x21f:  call   0811245e <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1970>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1970
081ab8d2 +0x224:  mov    %eax,-0x14(%ebp)
081ab8d5 +0x227:  mov    0xc(%ebp),%eax
081ab8d8 +0x22a:  mov    %eax,(%esp)
081ab8db +0x22d:  call   081132ca <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x27dc>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x27dc
081ab8e0 +0x232:  mov    %eax,-0x10(%ebp)
081ab8e3 +0x235:  movb   $0x1,-0x9(%ebp)
081ab8e7 +0x239:  jmp    081ab945 <+0x297>
081ab8e9 +0x23b:  mov    -0x14(%ebp),%eax
081ab8ec +0x23e:  mov    %eax,-0x10(%ebp)
081ab8ef +0x241:  mov    -0x14(%ebp),%eax
081ab8f2 +0x244:  mov    %eax,(%esp)
081ab8f5 +0x247:  call   081132de <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x27f0>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x27f0
081ab8fa +0x24c:  mov    %eax,%esi
081ab8fc +0x24e:  mov    0x10(%ebp),%eax
081ab8ff +0x251:  mov    %eax,0x4(%esp)
081ab903 +0x255:  lea    -0x2d(%ebp),%eax
081ab906 +0x258:  mov    %eax,(%esp)
081ab909 +0x25b:  call   081132d6 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x27e8>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x27e8
081ab90e +0x260:  mov    0xc(%ebp),%edx
081ab911 +0x263:  mov    %esi,0x8(%esp)
081ab915 +0x267:  mov    %eax,0x4(%esp)
081ab919 +0x26b:  mov    %edx,(%esp)
081ab91c +0x26e:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
081ab921 +0x273:  mov    %al,-0x9(%ebp)
081ab924 +0x276:  cmpb   $0x0,-0x9(%ebp)
081ab928 +0x27a:  je     081ab937 <+0x289>
081ab92a +0x27c:  mov    -0x14(%ebp),%eax
081ab92d +0x27f:  mov    %eax,(%esp)
081ab930 +0x282:  call   0811330b <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x281d>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x281d
081ab935 +0x287:  jmp    081ab942 <+0x294>
081ab937 +0x289:  mov    -0x14(%ebp),%eax
081ab93a +0x28c:  mov    %eax,(%esp)
081ab93d +0x28f:  call   08113300 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x2812>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x2812
081ab942 +0x294:  mov    %eax,-0x14(%ebp)
081ab945 +0x297:  cmpl   $0x0,-0x14(%ebp)
081ab949 +0x29b:  setne  %al
081ab94c +0x29e:  test   %al,%al
081ab94e +0x2a0:  jne    081ab8e9 <+0x23b>
081ab950 +0x2a2:  mov    -0x10(%ebp),%eax
081ab953 +0x2a5:  mov    %eax,0x4(%esp)
081ab957 +0x2a9:  lea    -0x34(%ebp),%eax
081ab95a +0x2ac:  mov    %eax,(%esp)
081ab95d +0x2af:  call   08113316 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x2828>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x2828
081ab962 +0x2b4:  cmpb   $0x0,-0x9(%ebp)
081ab966 +0x2b8:  je     081ab9e7 <+0x339>
081ab968 +0x2ba:  lea    -0x2c(%ebp),%eax
081ab96b +0x2bd:  mov    0xc(%ebp),%edx
081ab96e +0x2c0:  mov    %edx,0x4(%esp)
081ab972 +0x2c4:  mov    %eax,(%esp)
081ab975 +0x2c7:  call   081abb70 <+0x4c2>
081ab97a +0x2cc:  sub    $0x4,%esp
081ab97d +0x2cf:  lea    -0x2c(%ebp),%eax
081ab980 +0x2d2:  mov    %eax,0x4(%esp)
081ab984 +0x2d6:  lea    -0x34(%ebp),%eax
081ab987 +0x2d9:  mov    %eax,(%esp)
081ab98a +0x2dc:  call   08113324 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x2836>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x2836
081ab98f +0x2e1:  test   %al,%al
081ab991 +0x2e3:  je     081ab9dc <+0x32e>
081ab993 +0x2e5:  movb   $0x1,-0x25(%ebp)
081ab997 +0x2e9:  mov    -0x10(%ebp),%ecx
081ab99a +0x2ec:  mov    -0x14(%ebp),%edx
081ab99d +0x2ef:  lea    -0x24(%ebp),%eax
081ab9a0 +0x2f2:  mov    0x10(%ebp),%esi
081ab9a3 +0x2f5:  mov    %esi,0x10(%esp)
081ab9a7 +0x2f9:  mov    %ecx,0xc(%esp)
081ab9ab +0x2fd:  mov    %edx,0x8(%esp)
081ab9af +0x301:  mov    0xc(%ebp),%edx
081ab9b2 +0x304:  mov    %edx,0x4(%esp)
081ab9b6 +0x308:  mov    %eax,(%esp)
081ab9b9 +0x30b:  call   081abb96 <+0x4e8>
081ab9be +0x310:  sub    $0x4,%esp
081ab9c1 +0x313:  lea    -0x25(%ebp),%eax
081ab9c4 +0x316:  mov    %eax,0x8(%esp)
081ab9c8 +0x31a:  lea    -0x24(%ebp),%eax
081ab9cb +0x31d:  mov    %eax,0x4(%esp)
081ab9cf +0x321:  mov    %ebx,(%esp)
081ab9d2 +0x324:  call   081abc5e <+0x5b0>
081ab9d7 +0x329:  jmp    081aba7d <+0x3cf>
081ab9dc +0x32e:  lea    -0x34(%ebp),%eax
081ab9df +0x331:  mov    %eax,(%esp)
081ab9e2 +0x334:  call   081abc8c <+0x5de>
081ab9e7 +0x339:  mov    0x10(%ebp),%eax
081ab9ea +0x33c:  mov    %eax,0x4(%esp)
081ab9ee +0x340:  lea    -0x1e(%ebp),%eax
081ab9f1 +0x343:  mov    %eax,(%esp)
081ab9f4 +0x346:  call   081132d6 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x27e8>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x27e8
081ab9f9 +0x34b:  mov    %eax,%esi
081ab9fb +0x34d:  mov    -0x34(%ebp),%eax
081ab9fe +0x350:  mov    %eax,(%esp)
081aba01 +0x353:  call   0811329a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x27ac>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x27ac
081aba06 +0x358:  mov    0xc(%ebp),%edx
081aba09 +0x35b:  mov    %esi,0x8(%esp)
081aba0d +0x35f:  mov    %eax,0x4(%esp)
081aba11 +0x363:  mov    %edx,(%esp)
081aba14 +0x366:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
081aba19 +0x36b:  test   %al,%al
081aba1b +0x36d:  je     081aba63 <+0x3b5>
081aba1d +0x36f:  movb   $0x1,-0x1d(%ebp)
081aba21 +0x373:  mov    -0x10(%ebp),%ecx
081aba24 +0x376:  mov    -0x14(%ebp),%edx
081aba27 +0x379:  lea    -0x1c(%ebp),%eax
081aba2a +0x37c:  mov    0x10(%ebp),%esi
081aba2d +0x37f:  mov    %esi,0x10(%esp)
081aba31 +0x383:  mov    %ecx,0xc(%esp)
081aba35 +0x387:  mov    %edx,0x8(%esp)
081aba39 +0x38b:  mov    0xc(%ebp),%edx
081aba3c +0x38e:  mov    %edx,0x4(%esp)
081aba40 +0x392:  mov    %eax,(%esp)
081aba43 +0x395:  call   081abb96 <+0x4e8>
081aba48 +0x39a:  sub    $0x4,%esp
081aba4b +0x39d:  lea    -0x1d(%ebp),%eax
081aba4e +0x3a0:  mov    %eax,0x8(%esp)
081aba52 +0x3a4:  lea    -0x1c(%ebp),%eax
081aba55 +0x3a7:  mov    %eax,0x4(%esp)
081aba59 +0x3ab:  mov    %ebx,(%esp)
081aba5c +0x3ae:  call   081abc5e <+0x5b0>
081aba61 +0x3b3:  jmp    081aba7d <+0x3cf>
081aba63 +0x3b5:  movb   $0x0,-0x15(%ebp)
081aba67 +0x3b9:  lea    -0x15(%ebp),%eax
081aba6a +0x3bc:  mov    %eax,0x8(%esp)
081aba6e +0x3c0:  lea    -0x34(%ebp),%eax
081aba71 +0x3c3:  mov    %eax,0x4(%esp)
081aba75 +0x3c7:  mov    %ebx,(%esp)
081aba78 +0x3ca:  call   081abcaa <+0x5fc>
081aba7d +0x3cf:  mov    %ebx,%eax
081aba7f +0x3d1:  lea    -0x8(%ebp),%esp
081aba82 +0x3d4:  add    $0x0,%esp
081aba85 +0x3d7:  pop    %ebx
081aba86 +0x3d8:  pop    %esi
081aba87 +0x3d9:  pop    %ebp
081aba88 +0x3da:  ret    $0x4
081aba8b +0x3dd:  nop
081aba8c +0x3de:  push   %ebp
081aba8d +0x3df:  mov    %esp,%ebp
081aba8f +0x3e1:  sub    $0x18,%esp
081aba92 +0x3e4:  mov    0xc(%ebp),%eax
081aba95 +0x3e7:  mov    %eax,(%esp)
081aba98 +0x3ea:  call   081abcd8 <+0x62a>
081aba9d +0x3ef:  mov    0x8(%ebp),%edx
081abaa0 +0x3f2:  mov    %eax,0x4(%esp)
081abaa4 +0x3f6:  mov    %edx,(%esp)
081abaa7 +0x3f9:  call   08112528 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a3a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a3a
081abaac +0x3fe:  mov    0x10(%ebp),%eax
081abaaf +0x401:  mov    %eax,(%esp)
081abab2 +0x404:  call   080db505 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x16a2>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x16a2
081abab7 +0x409:  movzbl (%eax),%edx
081ababa +0x40c:  mov    0x8(%ebp),%eax
081ababd +0x40f:  mov    %dl,0x4(%eax)
081abac0 +0x412:  leave
081abac1 +0x413:  ret
081abac2 +0x414:  push   %ebp
081abac3 +0x415:  mov    %esp,%ebp
081abac5 +0x417:  sub    $0x18,%esp
081abac8 +0x41a:  mov    0x8(%ebp),%eax
081abacb +0x41d:  mov    %eax,(%esp)
081abace +0x420:  call   081abce0 <+0x632>
081abad3 +0x425:  mov    0x8(%ebp),%eax
081abad6 +0x428:  movl   $0x0,0x4(%eax)
081abadd +0x42f:  mov    0x8(%ebp),%eax
081abae0 +0x432:  movl   $0x0,0x8(%eax)
081abae7 +0x439:  mov    0x8(%ebp),%eax
081abaea +0x43c:  movl   $0x0,0xc(%eax)
081abaf1 +0x443:  mov    0x8(%ebp),%eax
081abaf4 +0x446:  movl   $0x0,0x10(%eax)
081abafb +0x44d:  mov    0x8(%ebp),%eax
081abafe +0x450:  movl   $0x0,0x14(%eax)
081abb05 +0x457:  mov    0x8(%ebp),%eax
081abb08 +0x45a:  mov    %eax,(%esp)
081abb0b +0x45d:  call   081abcf4 <+0x646>
081abb10 +0x462:  leave
081abb11 +0x463:  ret
081abb12 +0x464:  push   %ebp
081abb13 +0x465:  mov    %esp,%ebp
081abb15 +0x467:  pop    %ebp
081abb16 +0x468:  ret
081abb17 +0x469:  nop
081abb18 +0x46a:  push   %ebp
081abb19 +0x46b:  mov    %esp,%ebp
081abb1b +0x46d:  sub    $0x18,%esp
081abb1e +0x470:  mov    0x8(%ebp),%eax
081abb21 +0x473:  mov    %eax,(%esp)
081abb24 +0x476:  call   081abd26 <+0x678>
081abb29 +0x47b:  mov    0xc(%ebp),%edx
081abb2c +0x47e:  mov    %edx,0x4(%esp)
081abb30 +0x482:  mov    %eax,(%esp)
081abb33 +0x485:  call   081abd34 <+0x686>
081abb38 +0x48a:  mov    0xc(%ebp),%eax
081abb3b +0x48d:  mov    %eax,0x4(%esp)
081abb3f +0x491:  mov    0x8(%ebp),%eax
081abb42 +0x494:  mov    %eax,(%esp)
081abb45 +0x497:  call   081abd48 <+0x69a>
081abb4a +0x49c:  leave
081abb4b +0x49d:  ret
081abb4c +0x49e:  push   %ebp
081abb4d +0x49f:  mov    %esp,%ebp
081abb4f +0x4a1:  mov    0x8(%ebp),%eax
081abb52 +0x4a4:  add    $0xc,%eax
081abb55 +0x4a7:  pop    %ebp
081abb56 +0x4a8:  ret
081abb57 +0x4a9:  nop
081abb58 +0x4aa:  push   %ebp
081abb59 +0x4ab:  mov    %esp,%ebp
081abb5b +0x4ad:  mov    0x8(%ebp),%eax
081abb5e +0x4b0:  add    $0x8,%eax
081abb61 +0x4b3:  pop    %ebp
081abb62 +0x4b4:  ret
081abb63 +0x4b5:  nop
081abb64 +0x4b6:  push   %ebp
081abb65 +0x4b7:  mov    %esp,%ebp
081abb67 +0x4b9:  mov    0x8(%ebp),%eax
081abb6a +0x4bc:  add    $0x10,%eax
081abb6d +0x4bf:  pop    %ebp
081abb6e +0x4c0:  ret
081abb6f +0x4c1:  nop
081abb70 +0x4c2:  push   %ebp
081abb71 +0x4c3:  mov    %esp,%ebp
081abb73 +0x4c5:  push   %ebx
081abb74 +0x4c6:  sub    $0x14,%esp
081abb77 +0x4c9:  mov    0x8(%ebp),%ebx
081abb7a +0x4cc:  mov    0xc(%ebp),%eax
081abb7d +0x4cf:  mov    0xc(%eax),%eax
081abb80 +0x4d2:  mov    %eax,0x4(%esp)
081abb84 +0x4d6:  mov    %ebx,(%esp)
081abb87 +0x4d9:  call   08113316 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x2828>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x2828
081abb8c +0x4de:  mov    %ebx,%eax
081abb8e +0x4e0:  add    $0x14,%esp
081abb91 +0x4e3:  pop    %ebx
081abb92 +0x4e4:  pop    %ebp
081abb93 +0x4e5:  ret    $0x4
081abb96 +0x4e8:  push   %ebp
081abb97 +0x4e9:  mov    %esp,%ebp
081abb99 +0x4eb:  push   %esi
081abb9a +0x4ec:  push   %ebx
081abb9b +0x4ed:  sub    $0x20,%esp
081abb9e +0x4f0:  mov    0x8(%ebp),%esi
081abba1 +0x4f3:  cmpl   $0x0,0x10(%ebp)
081abba5 +0x4f7:  jne    081abbed <+0x53f>
081abba7 +0x4f9:  mov    0xc(%ebp),%eax
081abbaa +0x4fc:  mov    %eax,(%esp)
081abbad +0x4ff:  call   081132ca <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x27dc>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x27dc
081abbb2 +0x504:  cmp    0x14(%ebp),%eax
081abbb5 +0x507:  je     081abbed <+0x53f>
081abbb7 +0x509:  mov    0x14(%ebp),%eax
081abbba +0x50c:  mov    %eax,(%esp)
081abbbd +0x50f:  call   0811329a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x27ac>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x27ac
081abbc2 +0x514:  mov    %eax,%ebx
081abbc4 +0x516:  mov    0x18(%ebp),%eax
081abbc7 +0x519:  mov    %eax,0x4(%esp)
081abbcb +0x51d:  lea    -0xe(%ebp),%eax
081abbce +0x520:  mov    %eax,(%esp)
081abbd1 +0x523:  call   081132d6 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x27e8>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x27e8
081abbd6 +0x528:  mov    0xc(%ebp),%edx
081abbd9 +0x52b:  mov    %ebx,0x8(%esp)
081abbdd +0x52f:  mov    %eax,0x4(%esp)
081abbe1 +0x533:  mov    %edx,(%esp)
081abbe4 +0x536:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
081abbe9 +0x53b:  test   %al,%al
081abbeb +0x53d:  je     081abbf4 <+0x546>
081abbed +0x53f:  mov    $0x1,%eax
081abbf2 +0x544:  jmp    081abbf9 <+0x54b>
081abbf4 +0x546:  mov    $0x0,%eax
081abbf9 +0x54b:  mov    %al,-0xd(%ebp)
081abbfc +0x54e:  mov    0x18(%ebp),%eax
081abbff +0x551:  mov    %eax,0x4(%esp)
081abc03 +0x555:  mov    0xc(%ebp),%eax
081abc06 +0x558:  mov    %eax,(%esp)
081abc09 +0x55b:  call   081abd6a <+0x6bc>
081abc0e +0x560:  mov    %eax,-0xc(%ebp)
081abc11 +0x563:  mov    0xc(%ebp),%eax
081abc14 +0x566:  lea    0x4(%eax),%ecx
081abc17 +0x569:  mov    -0xc(%ebp),%edx
081abc1a +0x56c:  movzbl -0xd(%ebp),%eax
081abc1e +0x570:  mov    %ecx,0xc(%esp)
081abc22 +0x574:  mov    0x14(%ebp),%ecx
081abc25 +0x577:  mov    %ecx,0x8(%esp)
081abc29 +0x57b:  mov    %edx,0x4(%esp)
081abc2d +0x57f:  mov    %eax,(%esp)
081abc30 +0x582:  call   086df9d0 <_ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_>  ; std::_Rb_tree_insert_and_rebalance(bool, std::_Rb_tree_node_base*, std::_Rb_tree_node_base*, std::_Rb_tree_node_base&)
081abc35 +0x587:  mov    0xc(%ebp),%eax
081abc38 +0x58a:  mov    0x14(%eax),%eax
081abc3b +0x58d:  lea    0x1(%eax),%edx
081abc3e +0x590:  mov    0xc(%ebp),%eax
081abc41 +0x593:  mov    %edx,0x14(%eax)
081abc44 +0x596:  mov    -0xc(%ebp),%eax
081abc47 +0x599:  mov    %eax,0x4(%esp)
081abc4b +0x59d:  mov    %esi,(%esp)
081abc4e +0x5a0:  call   08113316 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x2828>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x2828
081abc53 +0x5a5:  mov    %esi,%eax
081abc55 +0x5a7:  add    $0x20,%esp
081abc58 +0x5aa:  pop    %ebx
081abc59 +0x5ab:  pop    %esi
081abc5a +0x5ac:  pop    %ebp
081abc5b +0x5ad:  ret    $0x4
081abc5e +0x5b0:  push   %ebp
081abc5f +0x5b1:  mov    %esp,%ebp
081abc61 +0x5b3:  sub    $0x18,%esp
081abc64 +0x5b6:  mov    0xc(%ebp),%eax
081abc67 +0x5b9:  mov    %eax,(%esp)
081abc6a +0x5bc:  call   081abdeb <+0x73d>
081abc6f +0x5c1:  mov    0x8(%ebp),%edx
081abc72 +0x5c4:  mov    (%eax),%eax
081abc74 +0x5c6:  mov    %eax,(%edx)
081abc76 +0x5c8:  mov    0x10(%ebp),%eax
081abc79 +0x5cb:  mov    %eax,(%esp)
081abc7c +0x5ce:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
081abc81 +0x5d3:  movzbl (%eax),%edx
081abc84 +0x5d6:  mov    0x8(%ebp),%eax
081abc87 +0x5d9:  mov    %dl,0x4(%eax)
081abc8a +0x5dc:  leave
081abc8b +0x5dd:  ret
081abc8c +0x5de:  push   %ebp
081abc8d +0x5df:  mov    %esp,%ebp
081abc8f +0x5e1:  sub    $0x18,%esp
081abc92 +0x5e4:  mov    0x8(%ebp),%eax
081abc95 +0x5e7:  mov    (%eax),%eax
081abc97 +0x5e9:  mov    %eax,(%esp)
081abc9a +0x5ec:  call   086df890 <_ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_decrement(std::_Rb_tree_node_base*)
081abc9f +0x5f1:  mov    0x8(%ebp),%edx
081abca2 +0x5f4:  mov    %eax,(%edx)
081abca4 +0x5f6:  mov    0x8(%ebp),%eax
081abca7 +0x5f9:  leave
081abca8 +0x5fa:  ret
081abca9 +0x5fb:  nop
081abcaa +0x5fc:  push   %ebp
081abcab +0x5fd:  mov    %esp,%ebp
081abcad +0x5ff:  sub    $0x18,%esp
081abcb0 +0x602:  mov    0xc(%ebp),%eax
081abcb3 +0x605:  mov    %eax,(%esp)
081abcb6 +0x608:  call   081abcd8 <+0x62a>
081abcbb +0x60d:  mov    0x8(%ebp),%edx
081abcbe +0x610:  mov    (%eax),%eax
081abcc0 +0x612:  mov    %eax,(%edx)
081abcc2 +0x614:  mov    0x10(%ebp),%eax
081abcc5 +0x617:  mov    %eax,(%esp)
081abcc8 +0x61a:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
081abccd +0x61f:  movzbl (%eax),%edx
081abcd0 +0x622:  mov    0x8(%ebp),%eax
081abcd3 +0x625:  mov    %dl,0x4(%eax)
081abcd6 +0x628:  leave
081abcd7 +0x629:  ret
081abcd8 +0x62a:  push   %ebp
081abcd9 +0x62b:  mov    %esp,%ebp
081abcdb +0x62d:  mov    0x8(%ebp),%eax
081abcde +0x630:  pop    %ebp
081abcdf +0x631:  ret
081abce0 +0x632:  push   %ebp
081abce1 +0x633:  mov    %esp,%ebp
081abce3 +0x635:  sub    $0x18,%esp
081abce6 +0x638:  mov    0x8(%ebp),%eax
081abce9 +0x63b:  mov    %eax,(%esp)
081abcec +0x63e:  call   081abdf4 <+0x746>
081abcf1 +0x643:  leave
081abcf2 +0x644:  ret
081abcf3 +0x645:  nop
081abcf4 +0x646:  push   %ebp
081abcf5 +0x647:  mov    %esp,%ebp
081abcf7 +0x649:  mov    0x8(%ebp),%eax
081abcfa +0x64c:  movl   $0x0,0x4(%eax)
081abd01 +0x653:  mov    0x8(%ebp),%eax
081abd04 +0x656:  movl   $0x0,0x8(%eax)
081abd0b +0x65d:  mov    0x8(%ebp),%eax
081abd0e +0x660:  lea    0x4(%eax),%edx
081abd11 +0x663:  mov    0x8(%ebp),%eax
081abd14 +0x666:  mov    %edx,0xc(%eax)
081abd17 +0x669:  mov    0x8(%ebp),%eax
081abd1a +0x66c:  lea    0x4(%eax),%edx
081abd1d +0x66f:  mov    0x8(%ebp),%eax
081abd20 +0x672:  mov    %edx,0x10(%eax)
081abd23 +0x675:  pop    %ebp
081abd24 +0x676:  ret
081abd25 +0x677:  nop
081abd26 +0x678:  push   %ebp
081abd27 +0x679:  mov    %esp,%ebp
081abd29 +0x67b:  mov    0x8(%ebp),%eax
081abd2c +0x67e:  pop    %ebp
081abd2d +0x67f:  ret
081abd2e +0x680:  push   %ebp
081abd2f +0x681:  mov    %esp,%ebp
081abd31 +0x683:  pop    %ebp
081abd32 +0x684:  ret
081abd33 +0x685:  nop
081abd34 +0x686:  push   %ebp
081abd35 +0x687:  mov    %esp,%ebp
081abd37 +0x689:  sub    $0x18,%esp
081abd3a +0x68c:  mov    0xc(%ebp),%eax
081abd3d +0x68f:  mov    %eax,(%esp)
081abd40 +0x692:  call   081abd2e <+0x680>
081abd45 +0x697:  leave
081abd46 +0x698:  ret
081abd47 +0x699:  nop
081abd48 +0x69a:  push   %ebp
081abd49 +0x69b:  mov    %esp,%ebp
081abd4b +0x69d:  sub    $0x18,%esp
081abd4e +0x6a0:  mov    0x8(%ebp),%eax
081abd51 +0x6a3:  movl   $0x1,0x8(%esp)
081abd59 +0x6ab:  mov    0xc(%ebp),%edx
081abd5c +0x6ae:  mov    %edx,0x4(%esp)
081abd60 +0x6b2:  mov    %eax,(%esp)
081abd63 +0x6b5:  call   081abdfa <+0x74c>
081abd68 +0x6ba:  leave
081abd69 +0x6bb:  ret
081abd6a +0x6bc:  push   %ebp
081abd6b +0x6bd:  mov    %esp,%ebp
081abd6d +0x6bf:  push   %esi
081abd6e +0x6c0:  push   %ebx
081abd6f +0x6c1:  sub    $0x20,%esp
081abd72 +0x6c4:  mov    0x8(%ebp),%eax
081abd75 +0x6c7:  mov    %eax,(%esp)
081abd78 +0x6ca:  call   081abe0e <+0x760>
081abd7d +0x6cf:  mov    %eax,-0xc(%ebp)
081abd80 +0x6d2:  mov    0xc(%ebp),%eax
081abd83 +0x6d5:  mov    %eax,(%esp)
081abd86 +0x6d8:  call   080e3796 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x153c>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x153c
081abd8b +0x6dd:  mov    %eax,%ebx
081abd8d +0x6df:  mov    0x8(%ebp),%eax
081abd90 +0x6e2:  mov    %eax,(%esp)
081abd93 +0x6e5:  call   081abd26 <+0x678>
081abd98 +0x6ea:  mov    %ebx,0x8(%esp)
081abd9c +0x6ee:  mov    -0xc(%ebp),%edx
081abd9f +0x6f1:  mov    %edx,0x4(%esp)
081abda3 +0x6f5:  mov    %eax,(%esp)
081abda6 +0x6f8:  call   081abe32 <+0x784>
081abdab +0x6fd:  jmp    081abde1 <+0x733>
081abdad +0x6ff:  mov    %eax,(%esp)
081abdb0 +0x702:  call   08725ce0 <__cxa_begin_catch>
081abdb5 +0x707:  mov    -0xc(%ebp),%eax
081abdb8 +0x70a:  mov    %eax,0x4(%esp)
081abdbc +0x70e:  mov    0x8(%ebp),%eax
081abdbf +0x711:  mov    %eax,(%esp)
081abdc2 +0x714:  call   081abd48 <+0x69a>
081abdc7 +0x719:  call   08724be0 <__cxa_rethrow>
081abdcc +0x71e:  mov    %edx,%ebx
081abdce +0x720:  mov    %eax,%esi
081abdd0 +0x722:  call   08725c30 <__cxa_end_catch>
081abdd5 +0x727:  mov    %esi,%eax
081abdd7 +0x729:  mov    %ebx,%edx
081abdd9 +0x72b:  mov    %eax,(%esp)
081abddc +0x72e:  call   08ae3750 <_Unwind_Resume>
081abde1 +0x733:  mov    -0xc(%ebp),%eax
081abde4 +0x736:  add    $0x20,%esp
081abde7 +0x739:  pop    %ebx
081abde8 +0x73a:  pop    %esi
081abde9 +0x73b:  pop    %ebp
081abdea +0x73c:  ret
081abdeb +0x73d:  push   %ebp
081abdec +0x73e:  mov    %esp,%ebp
081abdee +0x740:  mov    0x8(%ebp),%eax
081abdf1 +0x743:  pop    %ebp
081abdf2 +0x744:  ret
081abdf3 +0x745:  nop
081abdf4 +0x746:  push   %ebp
081abdf5 +0x747:  mov    %esp,%ebp
081abdf7 +0x749:  pop    %ebp
081abdf8 +0x74a:  ret
081abdf9 +0x74b:  nop
081abdfa +0x74c:  push   %ebp
081abdfb +0x74d:  mov    %esp,%ebp
081abdfd +0x74f:  sub    $0x18,%esp
081abe00 +0x752:  mov    0xc(%ebp),%eax
081abe03 +0x755:  mov    %eax,(%esp)
081abe06 +0x758:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081abe0b +0x75d:  leave
081abe0c +0x75e:  ret
081abe0d +0x75f:  nop
081abe0e +0x760:  push   %ebp
081abe0f +0x761:  mov    %esp,%ebp
081abe11 +0x763:  sub    $0x18,%esp
081abe14 +0x766:  mov    0x8(%ebp),%eax
081abe17 +0x769:  movl   $0x0,0x8(%esp)
081abe1f +0x771:  movl   $0x1,0x4(%esp)
081abe27 +0x779:  mov    %eax,(%esp)
081abe2a +0x77c:  call   081abe72 <+0x7c4>
081abe2f +0x781:  leave
081abe30 +0x782:  ret
081abe31 +0x783:  nop
081abe32 +0x784:  push   %ebp
081abe33 +0x785:  mov    %esp,%ebp
081abe35 +0x787:  push   %ebx
081abe36 +0x788:  sub    $0x14,%esp
081abe39 +0x78b:  mov    0x10(%ebp),%eax
081abe3c +0x78e:  mov    %eax,(%esp)
081abe3f +0x791:  call   080e3796 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x153c>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x153c
081abe44 +0x796:  mov    %eax,%ebx
081abe46 +0x798:  mov    0xc(%ebp),%eax
081abe49 +0x79b:  mov    %eax,0x4(%esp)
081abe4d +0x79f:  movl   $0x14,(%esp)
081abe54 +0x7a6:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
081abe59 +0x7ab:  mov    %eax,%edx
081abe5b +0x7ad:  test   %edx,%edx
081abe5d +0x7af:  je     081abe6b <+0x7bd>
081abe5f +0x7b1:  mov    %ebx,0x4(%esp)
081abe63 +0x7b5:  mov    %eax,(%esp)
081abe66 +0x7b8:  call   081abeb2 <+0x804>
081abe6b +0x7bd:  add    $0x14,%esp
081abe6e +0x7c0:  pop    %ebx
081abe6f +0x7c1:  pop    %ebp
081abe70 +0x7c2:  ret
081abe71 +0x7c3:  nop
081abe72 +0x7c4:  push   %ebp
081abe73 +0x7c5:  mov    %esp,%ebp
081abe75 +0x7c7:  sub    $0x18,%esp
081abe78 +0x7ca:  mov    0x8(%ebp),%eax
081abe7b +0x7cd:  mov    %eax,(%esp)
081abe7e +0x7d0:  call   081abef4 <+0x846>
081abe83 +0x7d5:  cmp    0xc(%ebp),%eax
081abe86 +0x7d8:  setb   %al
081abe89 +0x7db:  movzbl %al,%eax
081abe8c +0x7de:  test   %eax,%eax
081abe8e +0x7e0:  setne  %al
081abe91 +0x7e3:  test   %al,%al
081abe93 +0x7e5:  je     081abe9a <+0x7ec>
081abe95 +0x7e7:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
081abe9a +0x7ec:  mov    0xc(%ebp),%edx
081abe9d +0x7ef:  mov    %edx,%eax
081abe9f +0x7f1:  shl    $0x2,%eax
081abea2 +0x7f4:  add    %edx,%eax
081abea4 +0x7f6:  shl    $0x2,%eax
081abea7 +0x7f9:  mov    %eax,(%esp)
081abeaa +0x7fc:  call   08724450 <_Znwj>  ; operator new(unsigned int)
081abeaf +0x801:  leave
081abeb0 +0x802:  ret
081abeb1 +0x803:  nop
081abeb2 +0x804:  push   %ebp
081abeb3 +0x805:  mov    %esp,%ebp
081abeb5 +0x807:  sub    $0x18,%esp
081abeb8 +0x80a:  mov    0x8(%ebp),%eax
081abebb +0x80d:  movl   $0x0,(%eax)
081abec1 +0x813:  mov    0x8(%ebp),%eax
081abec4 +0x816:  movl   $0x0,0x4(%eax)
081abecb +0x81d:  mov    0x8(%ebp),%eax
081abece +0x820:  movl   $0x0,0x8(%eax)
081abed5 +0x827:  mov    0x8(%ebp),%eax
081abed8 +0x82a:  movl   $0x0,0xc(%eax)
081abedf +0x831:  mov    0xc(%ebp),%eax
081abee2 +0x834:  mov    %eax,(%esp)
081abee5 +0x837:  call   080e3796 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x153c>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x153c
081abeea +0x83c:  mov    (%eax),%edx
081abeec +0x83e:  mov    0x8(%ebp),%eax
081abeef +0x841:  mov    %edx,0x10(%eax)
081abef2 +0x844:  leave
081abef3 +0x845:  ret
081abef4 +0x846:  push   %ebp
081abef5 +0x847:  mov    %esp,%ebp
081abef7 +0x849:  mov    $0xccccccc,%eax
081abefc +0x84e:  pop    %ebp
081abefd +0x84f:  ret
081abefe +0x850:  nop
081abeff +0x851:  nop
```

## 反编译 C

```c
// <global>::global @ 0x81ab6ae

/* ARAD::AradWhiteAccount::AradWhiteAccount() */

void ARAD::AradWhiteAccount::_GLOBAL__I_AradWhiteAccount(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
