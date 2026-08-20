# Reset

`_GLOBAL__I__ZN8WarField5ResetEv`

`global constructors keyed to WarField::Reset()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to WarField` | `0x086ba489` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086ba489  _GLOBAL__I__ZN8WarField5ResetEv
#           global constructors keyed to WarField::Reset()
# range [0x086ba489, 0x086ba747]
086ba489 +0x000:  push   %ebp
086ba48a +0x001:  mov    %esp,%ebp
086ba48c +0x003:  sub    $0x18,%esp
086ba48f +0x006:  movl   $0xffff,0x4(%esp)
086ba497 +0x00e:  movl   $0x1,(%esp)
086ba49e +0x015:  call   086ba449 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
086ba4a3 +0x01a:  leave
086ba4a4 +0x01b:  ret
086ba4a5 +0x01c:  nop
086ba4a6 +0x01d:  push   %ebp
086ba4a7 +0x01e:  mov    %esp,%ebp
086ba4a9 +0x020:  mov    0x8(%ebp),%eax
086ba4ac +0x023:  mov    (%eax),%eax
086ba4ae +0x025:  mov    0xc(%ebp),%edx
086ba4b1 +0x028:  shl    $0x4,%edx
086ba4b4 +0x02b:  add    %edx,%eax
086ba4b6 +0x02d:  pop    %ebp
086ba4b7 +0x02e:  ret
086ba4b8 +0x02f:  push   %ebp
086ba4b9 +0x030:  mov    %esp,%ebp
086ba4bb +0x032:  mov    0x8(%ebp),%eax
086ba4be +0x035:  mov    (%eax),%ecx
086ba4c0 +0x037:  mov    0xc(%ebp),%edx
086ba4c3 +0x03a:  mov    %edx,%eax
086ba4c5 +0x03c:  add    %eax,%eax
086ba4c7 +0x03e:  add    %edx,%eax
086ba4c9 +0x040:  shl    $0x2,%eax
086ba4cc +0x043:  lea    (%ecx,%eax,1),%eax
086ba4cf +0x046:  pop    %ebp
086ba4d0 +0x047:  ret
086ba4d1 +0x048:  nop
086ba4d2 +0x049:  push   %ebp
086ba4d3 +0x04a:  mov    %esp,%ebp
086ba4d5 +0x04c:  push   %ebx
086ba4d6 +0x04d:  sub    $0x14,%esp
086ba4d9 +0x050:  mov    0x8(%ebp),%ebx
086ba4dc +0x053:  mov    0xc(%ebp),%eax
086ba4df +0x056:  mov    0x10(%ebp),%edx
086ba4e2 +0x059:  mov    %edx,0x8(%esp)
086ba4e6 +0x05d:  mov    %eax,0x4(%esp)
086ba4ea +0x061:  mov    %ebx,(%esp)
086ba4ed +0x064:  call   086ba578 <+0xef>
086ba4f2 +0x069:  sub    $0x4,%esp
086ba4f5 +0x06c:  mov    %ebx,%eax
086ba4f7 +0x06e:  mov    -0x4(%ebp),%ebx
086ba4fa +0x071:  leave
086ba4fb +0x072:  ret    $0x4
086ba4fe +0x075:  push   %ebp
086ba4ff +0x076:  mov    %esp,%ebp
086ba501 +0x078:  push   %ebx
086ba502 +0x079:  sub    $0x14,%esp
086ba505 +0x07c:  mov    0x8(%ebp),%ebx
086ba508 +0x07f:  mov    0xc(%ebp),%eax
086ba50b +0x082:  mov    %eax,0x4(%esp)
086ba50f +0x086:  mov    %ebx,(%esp)
086ba512 +0x089:  call   086ba636 <+0x1ad>
086ba517 +0x08e:  sub    $0x4,%esp
086ba51a +0x091:  mov    %ebx,%eax
086ba51c +0x093:  mov    -0x4(%ebp),%ebx
086ba51f +0x096:  leave
086ba520 +0x097:  ret    $0x4
086ba523 +0x09a:  nop
086ba524 +0x09b:  push   %ebp
086ba525 +0x09c:  mov    %esp,%ebp
086ba527 +0x09e:  mov    0x8(%ebp),%eax
086ba52a +0x0a1:  mov    (%eax),%edx
086ba52c +0x0a3:  mov    0xc(%ebp),%eax
086ba52f +0x0a6:  mov    (%eax),%eax
086ba531 +0x0a8:  cmp    %eax,%edx
086ba533 +0x0aa:  sete   %al
086ba536 +0x0ad:  pop    %ebp
086ba537 +0x0ae:  ret
086ba538 +0x0af:  push   %ebp
086ba539 +0x0b0:  mov    %esp,%ebp
086ba53b +0x0b2:  sub    $0x18,%esp
086ba53e +0x0b5:  mov    0x8(%ebp),%eax
086ba541 +0x0b8:  mov    (%eax),%eax
086ba543 +0x0ba:  mov    %eax,(%esp)
086ba546 +0x0bd:  call   086df800 <_ZSt18_Rb_tree_incrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base*)
086ba54b +0x0c2:  mov    0x8(%ebp),%edx
086ba54e +0x0c5:  mov    %eax,(%edx)
086ba550 +0x0c7:  mov    0x8(%ebp),%eax
086ba553 +0x0ca:  leave
086ba554 +0x0cb:  ret
086ba555 +0x0cc:  nop
086ba556 +0x0cd:  push   %ebp
086ba557 +0x0ce:  mov    %esp,%ebp
086ba559 +0x0d0:  mov    0x8(%ebp),%eax
086ba55c +0x0d3:  mov    (%eax),%edx
086ba55e +0x0d5:  mov    0xc(%ebp),%eax
086ba561 +0x0d8:  mov    (%eax),%eax
086ba563 +0x0da:  cmp    %eax,%edx
086ba565 +0x0dc:  setne  %al
086ba568 +0x0df:  pop    %ebp
086ba569 +0x0e0:  ret
086ba56a +0x0e1:  push   %ebp
086ba56b +0x0e2:  mov    %esp,%ebp
086ba56d +0x0e4:  mov    0x8(%ebp),%eax
086ba570 +0x0e7:  mov    (%eax),%eax
086ba572 +0x0e9:  add    $0x10,%eax
086ba575 +0x0ec:  pop    %ebp
086ba576 +0x0ed:  ret
086ba577 +0x0ee:  nop
086ba578 +0x0ef:  push   %ebp
086ba579 +0x0f0:  mov    %esp,%ebp
086ba57b +0x0f2:  push   %esi
086ba57c +0x0f3:  push   %ebx
086ba57d +0x0f4:  sub    $0x30,%esp
086ba580 +0x0f7:  mov    0x8(%ebp),%ebx
086ba583 +0x0fa:  mov    0xc(%ebp),%eax
086ba586 +0x0fd:  mov    %eax,(%esp)
086ba589 +0x100:  call   083b8ada <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x52aa6>  ; global constructors keyed to CServerEvent::m_nExpRate+0x52aa6
086ba58e +0x105:  mov    %eax,%esi
086ba590 +0x107:  mov    0xc(%ebp),%eax
086ba593 +0x10a:  mov    %eax,(%esp)
086ba596 +0x10d:  call   0839d744 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL12gTCharBuffer+0x51e0>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL12gTCharBuffer+0x51e0
086ba59b +0x112:  lea    -0x10(%ebp),%edx
086ba59e +0x115:  mov    0x10(%ebp),%ecx
086ba5a1 +0x118:  mov    %ecx,0x10(%esp)
086ba5a5 +0x11c:  mov    %esi,0xc(%esp)
086ba5a9 +0x120:  mov    %eax,0x8(%esp)
086ba5ad +0x124:  mov    0xc(%ebp),%eax
086ba5b0 +0x127:  mov    %eax,0x4(%esp)
086ba5b4 +0x12b:  mov    %edx,(%esp)
086ba5b7 +0x12e:  call   086ba65c <+0x1d3>
086ba5bc +0x133:  sub    $0x4,%esp
086ba5bf +0x136:  lea    -0xc(%ebp),%eax
086ba5c2 +0x139:  mov    0xc(%ebp),%edx
086ba5c5 +0x13c:  mov    %edx,0x4(%esp)
086ba5c9 +0x140:  mov    %eax,(%esp)
086ba5cc +0x143:  call   086ba636 <+0x1ad>
086ba5d1 +0x148:  sub    $0x4,%esp
086ba5d4 +0x14b:  lea    -0xc(%ebp),%eax
086ba5d7 +0x14e:  mov    %eax,0x4(%esp)
086ba5db +0x152:  lea    -0x10(%ebp),%eax
086ba5de +0x155:  mov    %eax,(%esp)
086ba5e1 +0x158:  call   086ba524 <+0x9b>
086ba5e6 +0x15d:  test   %al,%al
086ba5e8 +0x15f:  jne    086ba60f <+0x186>
086ba5ea +0x161:  mov    -0x10(%ebp),%eax
086ba5ed +0x164:  mov    %eax,(%esp)
086ba5f0 +0x167:  call   086ba6d8 <+0x24f>
086ba5f5 +0x16c:  mov    0xc(%ebp),%edx
086ba5f8 +0x16f:  mov    %eax,0x8(%esp)
086ba5fc +0x173:  mov    0x10(%ebp),%eax
086ba5ff +0x176:  mov    %eax,0x4(%esp)
086ba603 +0x17a:  mov    %edx,(%esp)
086ba606 +0x17d:  call   080db938 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x1ad5>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x1ad5
086ba60b +0x182:  test   %al,%al
086ba60d +0x184:  je     086ba623 <+0x19a>
086ba60f +0x186:  mov    0xc(%ebp),%eax
086ba612 +0x189:  mov    %eax,0x4(%esp)
086ba616 +0x18d:  mov    %ebx,(%esp)
086ba619 +0x190:  call   086ba636 <+0x1ad>
086ba61e +0x195:  sub    $0x4,%esp
086ba621 +0x198:  jmp    086ba628 <+0x19f>
086ba623 +0x19a:  mov    -0x10(%ebp),%eax
086ba626 +0x19d:  mov    %eax,(%ebx)
086ba628 +0x19f:  mov    %ebx,%eax
086ba62a +0x1a1:  lea    -0x8(%ebp),%esp
086ba62d +0x1a4:  add    $0x0,%esp
086ba630 +0x1a7:  pop    %ebx
086ba631 +0x1a8:  pop    %esi
086ba632 +0x1a9:  pop    %ebp
086ba633 +0x1aa:  ret    $0x4
086ba636 +0x1ad:  push   %ebp
086ba637 +0x1ae:  mov    %esp,%ebp
086ba639 +0x1b0:  push   %ebx
086ba63a +0x1b1:  sub    $0x14,%esp
086ba63d +0x1b4:  mov    0x8(%ebp),%ebx
086ba640 +0x1b7:  mov    0xc(%ebp),%eax
086ba643 +0x1ba:  add    $0x4,%eax
086ba646 +0x1bd:  mov    %eax,0x4(%esp)
086ba64a +0x1c1:  mov    %ebx,(%esp)
086ba64d +0x1c4:  call   086ba6fa <+0x271>
086ba652 +0x1c9:  mov    %ebx,%eax
086ba654 +0x1cb:  add    $0x14,%esp
086ba657 +0x1ce:  pop    %ebx
086ba658 +0x1cf:  pop    %ebp
086ba659 +0x1d0:  ret    $0x4
086ba65c +0x1d3:  push   %ebp
086ba65d +0x1d4:  mov    %esp,%ebp
086ba65f +0x1d6:  push   %ebx
086ba660 +0x1d7:  sub    $0x14,%esp
086ba663 +0x1da:  mov    0x8(%ebp),%ebx
086ba666 +0x1dd:  jmp    086ba6b4 <+0x22b>
086ba668 +0x1df:  mov    0x10(%ebp),%eax
086ba66b +0x1e2:  mov    %eax,(%esp)
086ba66e +0x1e5:  call   086ba707 <+0x27e>
086ba673 +0x1ea:  mov    0xc(%ebp),%edx
086ba676 +0x1ed:  mov    0x18(%ebp),%ecx
086ba679 +0x1f0:  mov    %ecx,0x8(%esp)
086ba67d +0x1f4:  mov    %eax,0x4(%esp)
086ba681 +0x1f8:  mov    %edx,(%esp)
086ba684 +0x1fb:  call   080db938 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x1ad5>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x1ad5
086ba689 +0x200:  xor    $0x1,%eax
086ba68c +0x203:  test   %al,%al
086ba68e +0x205:  je     086ba6a6 <+0x21d>
086ba690 +0x207:  mov    0x10(%ebp),%eax
086ba693 +0x20a:  mov    %eax,0x14(%ebp)
086ba696 +0x20d:  mov    0x10(%ebp),%eax
086ba699 +0x210:  mov    %eax,(%esp)
086ba69c +0x213:  call   083b8b6a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x52b36>  ; global constructors keyed to CServerEvent::m_nExpRate+0x52b36
086ba6a1 +0x218:  mov    %eax,0x10(%ebp)
086ba6a4 +0x21b:  jmp    086ba6b4 <+0x22b>
086ba6a6 +0x21d:  mov    0x10(%ebp),%eax
086ba6a9 +0x220:  mov    %eax,(%esp)
086ba6ac +0x223:  call   083b8b5f <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x52b2b>  ; global constructors keyed to CServerEvent::m_nExpRate+0x52b2b
086ba6b1 +0x228:  mov    %eax,0x10(%ebp)
086ba6b4 +0x22b:  cmpl   $0x0,0x10(%ebp)
086ba6b8 +0x22f:  setne  %al
086ba6bb +0x232:  test   %al,%al
086ba6bd +0x234:  jne    086ba668 <+0x1df>
086ba6bf +0x236:  mov    0x14(%ebp),%eax
086ba6c2 +0x239:  mov    %eax,0x4(%esp)
086ba6c6 +0x23d:  mov    %ebx,(%esp)
086ba6c9 +0x240:  call   086ba6fa <+0x271>
086ba6ce +0x245:  mov    %ebx,%eax
086ba6d0 +0x247:  add    $0x14,%esp
086ba6d3 +0x24a:  pop    %ebx
086ba6d4 +0x24b:  pop    %ebp
086ba6d5 +0x24c:  ret    $0x4
086ba6d8 +0x24f:  push   %ebp
086ba6d9 +0x250:  mov    %esp,%ebp
086ba6db +0x252:  sub    $0x28,%esp
086ba6de +0x255:  mov    0x8(%ebp),%eax
086ba6e1 +0x258:  mov    %eax,(%esp)
086ba6e4 +0x25b:  call   086ba729 <+0x2a0>
086ba6e9 +0x260:  mov    %eax,0x4(%esp)
086ba6ed +0x264:  lea    -0x9(%ebp),%eax
086ba6f0 +0x267:  mov    %eax,(%esp)
086ba6f3 +0x26a:  call   086ba734 <+0x2ab>
086ba6f8 +0x26f:  leave
086ba6f9 +0x270:  ret
086ba6fa +0x271:  push   %ebp
086ba6fb +0x272:  mov    %esp,%ebp
086ba6fd +0x274:  mov    0xc(%ebp),%edx
086ba700 +0x277:  mov    0x8(%ebp),%eax
086ba703 +0x27a:  mov    %edx,(%eax)
086ba705 +0x27c:  pop    %ebp
086ba706 +0x27d:  ret
086ba707 +0x27e:  push   %ebp
086ba708 +0x27f:  mov    %esp,%ebp
086ba70a +0x281:  sub    $0x28,%esp
086ba70d +0x284:  mov    0x8(%ebp),%eax
086ba710 +0x287:  mov    %eax,(%esp)
086ba713 +0x28a:  call   086ba73c <+0x2b3>
086ba718 +0x28f:  mov    %eax,0x4(%esp)
086ba71c +0x293:  lea    -0x9(%ebp),%eax
086ba71f +0x296:  mov    %eax,(%esp)
086ba722 +0x299:  call   086ba734 <+0x2ab>
086ba727 +0x29e:  leave
086ba728 +0x29f:  ret
086ba729 +0x2a0:  push   %ebp
086ba72a +0x2a1:  mov    %esp,%ebp
086ba72c +0x2a3:  mov    0x8(%ebp),%eax
086ba72f +0x2a6:  add    $0x10,%eax
086ba732 +0x2a9:  pop    %ebp
086ba733 +0x2aa:  ret
086ba734 +0x2ab:  push   %ebp
086ba735 +0x2ac:  mov    %esp,%ebp
086ba737 +0x2ae:  mov    0xc(%ebp),%eax
086ba73a +0x2b1:  pop    %ebp
086ba73b +0x2b2:  ret
086ba73c +0x2b3:  push   %ebp
086ba73d +0x2b4:  mov    %esp,%ebp
086ba73f +0x2b6:  mov    0x8(%ebp),%eax
086ba742 +0x2b9:  add    $0x10,%eax
086ba745 +0x2bc:  pop    %ebp
086ba746 +0x2bd:  ret
086ba747 +0x2be:  nop
```

## 反编译 C

```c
// <global>::global @ 0x86ba489

/* WarField::Reset() */

void WarField::_GLOBAL__I_Reset(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
