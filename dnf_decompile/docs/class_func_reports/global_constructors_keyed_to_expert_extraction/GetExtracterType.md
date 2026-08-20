# GetExtracterType

`_GLOBAL__I__ZN17expert_extraction16GetExtracterTypeE20ENUM_EXPERT_JOB_TYPE`

`global constructors keyed to expert_extraction::GetExtracterType(ENUM_EXPERT_JOB_TYPE)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to expert_extraction` | `0x084a4499` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a4499  _GLOBAL__I__ZN17expert_extraction16GetExtracterTypeE20ENUM_EXPERT_JOB_TYPE
#           global constructors keyed to expert_extraction::GetExtracterType(ENUM_EXPERT_JOB_TYPE)
# range [0x084a4499, 0x084a47c7]
084a4499 +0x000:  push   %ebp
084a449a +0x001:  mov    %esp,%ebp
084a449c +0x003:  sub    $0x18,%esp
084a449f +0x006:  movl   $0xffff,0x4(%esp)
084a44a7 +0x00e:  movl   $0x1,(%esp)
084a44ae +0x015:  call   084a4459 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
084a44b3 +0x01a:  leave
084a44b4 +0x01b:  ret
084a44b5 +0x01c:  nop
084a44b6 +0x01d:  push   %ebp
084a44b7 +0x01e:  mov    %esp,%ebp
084a44b9 +0x020:  sub    $0x28,%esp
084a44bc +0x023:  mov    0x8(%ebp),%eax
084a44bf +0x026:  lea    0x104(%eax),%ecx
084a44c5 +0x02c:  lea    -0x10(%ebp),%eax
084a44c8 +0x02f:  lea    0xc(%ebp),%edx
084a44cb +0x032:  mov    %edx,0x8(%esp)
084a44cf +0x036:  mov    %ecx,0x4(%esp)
084a44d3 +0x03a:  mov    %eax,(%esp)
084a44d6 +0x03d:  call   082359c6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb070>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb070
084a44db +0x042:  sub    $0x4,%esp
084a44de +0x045:  mov    0x8(%ebp),%eax
084a44e1 +0x048:  lea    0x104(%eax),%edx
084a44e7 +0x04e:  lea    -0xc(%ebp),%eax
084a44ea +0x051:  mov    %edx,0x4(%esp)
084a44ee +0x055:  mov    %eax,(%esp)
084a44f1 +0x058:  call   082359f2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb09c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb09c
084a44f6 +0x05d:  sub    $0x4,%esp
084a44f9 +0x060:  lea    -0xc(%ebp),%eax
084a44fc +0x063:  mov    %eax,0x4(%esp)
084a4500 +0x067:  lea    -0x10(%ebp),%eax
084a4503 +0x06a:  mov    %eax,(%esp)
084a4506 +0x06d:  call   08235a18 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb0c2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb0c2
084a450b +0x072:  test   %al,%al
084a450d +0x074:  je     084a4516 <+0x7d>
084a450f +0x076:  mov    $0xffffffff,%eax
084a4514 +0x07b:  jmp    084a4528 <+0x8f>
084a4516 +0x07d:  lea    -0x10(%ebp),%eax
084a4519 +0x080:  mov    %eax,(%esp)
084a451c +0x083:  call   08235a2c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb0d6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb0d6
084a4521 +0x088:  movzwl 0x4(%eax),%eax
084a4525 +0x08c:  movzwl %ax,%eax
084a4528 +0x08f:  leave
084a4529 +0x090:  ret
084a452a +0x091:  push   %ebp
084a452b +0x092:  mov    %esp,%ebp
084a452d +0x094:  sub    $0x28,%esp
084a4530 +0x097:  mov    0x8(%ebp),%eax
084a4533 +0x09a:  lea    0x11c(%eax),%ecx
084a4539 +0x0a0:  lea    -0x10(%ebp),%eax
084a453c +0x0a3:  lea    0xc(%ebp),%edx
084a453f +0x0a6:  mov    %edx,0x8(%esp)
084a4543 +0x0aa:  mov    %ecx,0x4(%esp)
084a4547 +0x0ae:  mov    %eax,(%esp)
084a454a +0x0b1:  call   082359c6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb070>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb070
084a454f +0x0b6:  sub    $0x4,%esp
084a4552 +0x0b9:  mov    0x8(%ebp),%eax
084a4555 +0x0bc:  lea    0x11c(%eax),%edx
084a455b +0x0c2:  lea    -0xc(%ebp),%eax
084a455e +0x0c5:  mov    %edx,0x4(%esp)
084a4562 +0x0c9:  mov    %eax,(%esp)
084a4565 +0x0cc:  call   082359f2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb09c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb09c
084a456a +0x0d1:  sub    $0x4,%esp
084a456d +0x0d4:  lea    -0xc(%ebp),%eax
084a4570 +0x0d7:  mov    %eax,0x4(%esp)
084a4574 +0x0db:  lea    -0x10(%ebp),%eax
084a4577 +0x0de:  mov    %eax,(%esp)
084a457a +0x0e1:  call   08235a18 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb0c2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb0c2
084a457f +0x0e6:  test   %al,%al
084a4581 +0x0e8:  je     084a458a <+0xf1>
084a4583 +0x0ea:  mov    $0xffffffff,%eax
084a4588 +0x0ef:  jmp    084a459c <+0x103>
084a458a +0x0f1:  lea    -0x10(%ebp),%eax
084a458d +0x0f4:  mov    %eax,(%esp)
084a4590 +0x0f7:  call   08235a2c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb0d6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb0d6
084a4595 +0x0fc:  movzwl 0x4(%eax),%eax
084a4599 +0x100:  movzwl %ax,%eax
084a459c +0x103:  leave
084a459d +0x104:  ret
084a459e +0x105:  push   %ebp
084a459f +0x106:  mov    %esp,%ebp
084a45a1 +0x108:  sub    $0x28,%esp
084a45a4 +0x10b:  mov    0x8(%ebp),%eax
084a45a7 +0x10e:  lea    0x134(%eax),%ecx
084a45ad +0x114:  lea    -0x10(%ebp),%eax
084a45b0 +0x117:  lea    0xc(%ebp),%edx
084a45b3 +0x11a:  mov    %edx,0x8(%esp)
084a45b7 +0x11e:  mov    %ecx,0x4(%esp)
084a45bb +0x122:  mov    %eax,(%esp)
084a45be +0x125:  call   082359c6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb070>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb070
084a45c3 +0x12a:  sub    $0x4,%esp
084a45c6 +0x12d:  mov    0x8(%ebp),%eax
084a45c9 +0x130:  lea    0x134(%eax),%edx
084a45cf +0x136:  lea    -0xc(%ebp),%eax
084a45d2 +0x139:  mov    %edx,0x4(%esp)
084a45d6 +0x13d:  mov    %eax,(%esp)
084a45d9 +0x140:  call   082359f2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb09c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb09c
084a45de +0x145:  sub    $0x4,%esp
084a45e1 +0x148:  lea    -0xc(%ebp),%eax
084a45e4 +0x14b:  mov    %eax,0x4(%esp)
084a45e8 +0x14f:  lea    -0x10(%ebp),%eax
084a45eb +0x152:  mov    %eax,(%esp)
084a45ee +0x155:  call   08235a18 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb0c2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb0c2
084a45f3 +0x15a:  test   %al,%al
084a45f5 +0x15c:  je     084a45fe <+0x165>
084a45f7 +0x15e:  mov    $0xffffffff,%eax
084a45fc +0x163:  jmp    084a4610 <+0x177>
084a45fe +0x165:  lea    -0x10(%ebp),%eax
084a4601 +0x168:  mov    %eax,(%esp)
084a4604 +0x16b:  call   08235a2c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb0d6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb0d6
084a4609 +0x170:  movzwl 0x4(%eax),%eax
084a460d +0x174:  movzwl %ax,%eax
084a4610 +0x177:  leave
084a4611 +0x178:  ret
084a4612 +0x179:  push   %ebp
084a4613 +0x17a:  mov    %esp,%ebp
084a4615 +0x17c:  mov    0x8(%ebp),%eax
084a4618 +0x17f:  add    $0x14c,%eax
084a461d +0x184:  pop    %ebp
084a461e +0x185:  ret
084a461f +0x186:  nop
084a4620 +0x187:  push   %ebp
084a4621 +0x188:  mov    %esp,%ebp
084a4623 +0x18a:  mov    0x8(%ebp),%eax
084a4626 +0x18d:  add    $0x18c,%eax
084a462b +0x192:  pop    %ebp
084a462c +0x193:  ret
084a462d +0x194:  nop
084a462e +0x195:  push   %ebp
084a462f +0x196:  mov    %esp,%ebp
084a4631 +0x198:  mov    0x8(%ebp),%eax
084a4634 +0x19b:  add    $0x17c,%eax
084a4639 +0x1a0:  pop    %ebp
084a463a +0x1a1:  ret
084a463b +0x1a2:  nop
084a463c +0x1a3:  push   %ebp
084a463d +0x1a4:  mov    %esp,%ebp
084a463f +0x1a6:  sub    $0x18,%esp
084a4642 +0x1a9:  mov    0x8(%ebp),%eax
084a4645 +0x1ac:  mov    %eax,(%esp)
084a4648 +0x1af:  call   084a2938 <_ZN17expert_extraction11CExtractionC1Ev>  ; expert_extraction::CExtraction::CExtraction()
084a464d +0x1b4:  mov    0x8(%ebp),%eax
084a4650 +0x1b7:  movl   $&_ZTVN17expert_extraction20CAlchemistExtractionE+0x8,(%eax)
084a4656 +0x1bd:  leave
084a4657 +0x1be:  ret
084a4658 +0x1bf:  push   %ebp
084a4659 +0x1c0:  mov    %esp,%ebp
084a465b +0x1c2:  sub    $0x18,%esp
084a465e +0x1c5:  mov    0x8(%ebp),%eax
084a4661 +0x1c8:  mov    %eax,(%esp)
084a4664 +0x1cb:  call   084a2938 <_ZN17expert_extraction11CExtractionC1Ev>  ; expert_extraction::CExtraction::CExtraction()
084a4669 +0x1d0:  mov    0x8(%ebp),%eax
084a466c +0x1d3:  movl   $&_ZTVN17expert_extraction20CEnchanterExtractionE+0x8,(%eax)
084a4672 +0x1d9:  leave
084a4673 +0x1da:  ret
084a4674 +0x1db:  push   %ebp
084a4675 +0x1dc:  mov    %esp,%ebp
084a4677 +0x1de:  sub    $0x18,%esp
084a467a +0x1e1:  mov    0x8(%ebp),%eax
084a467d +0x1e4:  mov    %eax,(%esp)
084a4680 +0x1e7:  call   084a2938 <_ZN17expert_extraction11CExtractionC1Ev>  ; expert_extraction::CExtraction::CExtraction()
084a4685 +0x1ec:  mov    0x8(%ebp),%eax
084a4688 +0x1ef:  movl   $&_ZTVN17expert_extraction25CDollControllerExtractionE+0x8,(%eax)
084a468e +0x1f5:  leave
084a468f +0x1f6:  ret
084a4690 +0x1f7:  push   %ebp
084a4691 +0x1f8:  mov    %esp,%ebp
084a4693 +0x1fa:  mov    0x8(%ebp),%eax
084a4696 +0x1fd:  mov    (%eax),%eax
084a4698 +0x1ff:  mov    0xc(%ebp),%edx
084a469b +0x202:  shl    $0x3,%edx
084a469e +0x205:  add    %edx,%eax
084a46a0 +0x207:  pop    %ebp
084a46a1 +0x208:  ret
084a46a2 +0x209:  push   %ebp
084a46a3 +0x20a:  mov    %esp,%ebp
084a46a5 +0x20c:  mov    0x8(%ebp),%eax
084a46a8 +0x20f:  mov    0x4(%eax),%eax
084a46ab +0x212:  mov    %eax,%edx
084a46ad +0x214:  mov    0x8(%ebp),%eax
084a46b0 +0x217:  mov    (%eax),%eax
084a46b2 +0x219:  mov    %edx,%ecx
084a46b4 +0x21b:  sub    %eax,%ecx
084a46b6 +0x21d:  mov    %ecx,%eax
084a46b8 +0x21f:  sar    $0x2,%eax
084a46bb +0x222:  imul   $0xaaaaaaab,%eax,%eax
084a46c1 +0x228:  pop    %ebp
084a46c2 +0x229:  ret
084a46c3 +0x22a:  nop
084a46c4 +0x22b:  push   %ebp
084a46c5 +0x22c:  mov    %esp,%ebp
084a46c7 +0x22e:  mov    0x8(%ebp),%eax
084a46ca +0x231:  mov    (%eax),%ecx
084a46cc +0x233:  mov    0xc(%ebp),%edx
084a46cf +0x236:  mov    %edx,%eax
084a46d1 +0x238:  add    %eax,%eax
084a46d3 +0x23a:  add    %edx,%eax
084a46d5 +0x23c:  shl    $0x2,%eax
084a46d8 +0x23f:  lea    (%ecx,%eax,1),%eax
084a46db +0x242:  pop    %ebp
084a46dc +0x243:  ret
084a46dd +0x244:  nop
084a46de +0x245:  push   %ebp
084a46df +0x246:  mov    %esp,%ebp
084a46e1 +0x248:  sub    $0x18,%esp
084a46e4 +0x24b:  mov    0x8(%ebp),%eax
084a46e7 +0x24e:  movl   $&_ZTVN17expert_extraction25CDollControllerExtractionE+0x8,(%eax)
084a46ed +0x254:  mov    0x8(%ebp),%eax
084a46f0 +0x257:  mov    %eax,(%esp)
084a46f3 +0x25a:  call   084a29a2 <_ZN17expert_extraction11CExtractionD1Ev>  ; expert_extraction::CExtraction::~CExtraction()
084a46f8 +0x25f:  mov    $0x0,%eax
084a46fd +0x264:  test   %al,%al
084a46ff +0x266:  je     084a470c <+0x273>
084a4701 +0x268:  mov    0x8(%ebp),%eax
084a4704 +0x26b:  mov    %eax,(%esp)
084a4707 +0x26e:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
084a470c +0x273:  leave
084a470d +0x274:  ret
084a470e +0x275:  push   %ebp
084a470f +0x276:  mov    %esp,%ebp
084a4711 +0x278:  sub    $0x18,%esp
084a4714 +0x27b:  mov    0x8(%ebp),%eax
084a4717 +0x27e:  mov    %eax,(%esp)
084a471a +0x281:  call   084a46de <+0x245>
084a471f +0x286:  mov    0x8(%ebp),%eax
084a4722 +0x289:  mov    %eax,(%esp)
084a4725 +0x28c:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
084a472a +0x291:  leave
084a472b +0x292:  ret
084a472c +0x293:  push   %ebp
084a472d +0x294:  mov    %esp,%ebp
084a472f +0x296:  sub    $0x18,%esp
084a4732 +0x299:  mov    0x8(%ebp),%eax
084a4735 +0x29c:  movl   $&_ZTVN17expert_extraction20CEnchanterExtractionE+0x8,(%eax)
084a473b +0x2a2:  mov    0x8(%ebp),%eax
084a473e +0x2a5:  mov    %eax,(%esp)
084a4741 +0x2a8:  call   084a29a2 <_ZN17expert_extraction11CExtractionD1Ev>  ; expert_extraction::CExtraction::~CExtraction()
084a4746 +0x2ad:  mov    $0x0,%eax
084a474b +0x2b2:  test   %al,%al
084a474d +0x2b4:  je     084a475a <+0x2c1>
084a474f +0x2b6:  mov    0x8(%ebp),%eax
084a4752 +0x2b9:  mov    %eax,(%esp)
084a4755 +0x2bc:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
084a475a +0x2c1:  leave
084a475b +0x2c2:  ret
084a475c +0x2c3:  push   %ebp
084a475d +0x2c4:  mov    %esp,%ebp
084a475f +0x2c6:  sub    $0x18,%esp
084a4762 +0x2c9:  mov    0x8(%ebp),%eax
084a4765 +0x2cc:  mov    %eax,(%esp)
084a4768 +0x2cf:  call   084a472c <+0x293>
084a476d +0x2d4:  mov    0x8(%ebp),%eax
084a4770 +0x2d7:  mov    %eax,(%esp)
084a4773 +0x2da:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
084a4778 +0x2df:  leave
084a4779 +0x2e0:  ret
084a477a +0x2e1:  push   %ebp
084a477b +0x2e2:  mov    %esp,%ebp
084a477d +0x2e4:  sub    $0x18,%esp
084a4780 +0x2e7:  mov    0x8(%ebp),%eax
084a4783 +0x2ea:  movl   $&_ZTVN17expert_extraction20CAlchemistExtractionE+0x8,(%eax)
084a4789 +0x2f0:  mov    0x8(%ebp),%eax
084a478c +0x2f3:  mov    %eax,(%esp)
084a478f +0x2f6:  call   084a29a2 <_ZN17expert_extraction11CExtractionD1Ev>  ; expert_extraction::CExtraction::~CExtraction()
084a4794 +0x2fb:  mov    $0x0,%eax
084a4799 +0x300:  test   %al,%al
084a479b +0x302:  je     084a47a8 <+0x30f>
084a479d +0x304:  mov    0x8(%ebp),%eax
084a47a0 +0x307:  mov    %eax,(%esp)
084a47a3 +0x30a:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
084a47a8 +0x30f:  leave
084a47a9 +0x310:  ret
084a47aa +0x311:  push   %ebp
084a47ab +0x312:  mov    %esp,%ebp
084a47ad +0x314:  sub    $0x18,%esp
084a47b0 +0x317:  mov    0x8(%ebp),%eax
084a47b3 +0x31a:  mov    %eax,(%esp)
084a47b6 +0x31d:  call   084a477a <+0x2e1>
084a47bb +0x322:  mov    0x8(%ebp),%eax
084a47be +0x325:  mov    %eax,(%esp)
084a47c1 +0x328:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
084a47c6 +0x32d:  leave
084a47c7 +0x32e:  ret
```

## 反编译 C

```c
// <global>::global @ 0x84a4499

/* expert_extraction::GetExtracterType(ENUM_EXPERT_JOB_TYPE) */

void expert_extraction::_GLOBAL__I_GetExtracterType(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
