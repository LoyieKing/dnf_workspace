# skill_move

`_ZN9SkillSlot10skill_moveEhhi`

`SkillSlot::skill_move(unsigned char, unsigned char, int)`

| 类 | 地址 |
|---|---|
| `SkillSlot` | `0x08604428` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08604428  _ZN9SkillSlot10skill_moveEhhi
#           SkillSlot::skill_move(unsigned char, unsigned char, int)
# range [0x08604428, 0x086047d7]
08604428 +0x000:  push   %ebp
08604429 +0x001:  mov    %esp,%ebp
0860442b +0x003:  push   %ebx
0860442c +0x004:  sub    $0x44,%esp
0860442f +0x007:  mov    0xc(%ebp),%edx
08604432 +0x00a:  mov    0x10(%ebp),%eax
08604435 +0x00d:  mov    %dl,-0x2c(%ebp)
08604438 +0x010:  mov    %al,-0x30(%ebp)
0860443b +0x013:  mov    0x8(%ebp),%eax
0860443e +0x016:  mov    (%eax),%eax
08604440 +0x018:  test   %eax,%eax
08604442 +0x01a:  jne    0860444e <+0x26>
08604444 +0x01c:  mov    $0xffffffff,%eax
08604449 +0x021:  jmp    086047d1 <+0x3a9>
0860444e +0x026:  movzbl -0x30(%ebp),%edx
08604452 +0x02a:  movzbl -0x2c(%ebp),%eax
08604456 +0x02e:  mov    %edx,0x8(%esp)
0860445a +0x032:  mov    %eax,0x4(%esp)
0860445e +0x036:  mov    0x8(%ebp),%eax
08604461 +0x039:  mov    %eax,(%esp)
08604464 +0x03c:  call   08608c98 <_ZN9SkillSlot23checkMoveComboSkillSlotEhh>  ; SkillSlot::checkMoveComboSkillSlot(unsigned char, unsigned char)
08604469 +0x041:  xor    $0x1,%eax
0860446c +0x044:  test   %al,%al
0860446e +0x046:  je     0860447a <+0x52>
08604470 +0x048:  mov    $0x13,%eax
08604475 +0x04d:  jmp    086047d1 <+0x3a9>
0860447a +0x052:  mov    0x8(%ebp),%eax
0860447d +0x055:  mov    (%eax),%eax
0860447f +0x057:  mov    %eax,(%esp)
08604482 +0x05a:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
08604487 +0x05f:  mov    %eax,0x4(%esp)
0860448b +0x063:  mov    0x8(%ebp),%eax
0860448e +0x066:  mov    %eax,(%esp)
08604491 +0x069:  call   086067de <_ZNK9SkillSlot17get_skillslot_bufE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_skillslot_buf(ENUM_SKILL_TREE_KIND) const
08604496 +0x06e:  mov    %eax,-0x20(%ebp)
08604499 +0x071:  cmpl   $0x0,-0x20(%ebp)
0860449d +0x075:  jne    086044a9 <+0x81>
0860449f +0x077:  mov    $0xffffffff,%eax
086044a4 +0x07c:  jmp    086047d1 <+0x3a9>
086044a9 +0x081:  movzbl -0x2c(%ebp),%eax
086044ad +0x085:  add    %eax,%eax
086044af +0x087:  add    -0x20(%ebp),%eax
086044b2 +0x08a:  movzbl (%eax),%eax
086044b5 +0x08d:  test   %al,%al
086044b7 +0x08f:  jne    086044d3 <+0xab>
086044b9 +0x091:  movzbl -0x30(%ebp),%eax
086044bd +0x095:  add    %eax,%eax
086044bf +0x097:  add    -0x20(%ebp),%eax
086044c2 +0x09a:  movzbl (%eax),%eax
086044c5 +0x09d:  test   %al,%al
086044c7 +0x09f:  jne    086044d3 <+0xab>
086044c9 +0x0a1:  mov    $0x15,%eax
086044ce +0x0a6:  jmp    086047d1 <+0x3a9>
086044d3 +0x0ab:  movzbl -0x2c(%ebp),%eax
086044d7 +0x0af:  add    %eax,%eax
086044d9 +0x0b1:  add    -0x20(%ebp),%eax
086044dc +0x0b4:  movzbl (%eax),%eax
086044df +0x0b7:  movzbl %al,%ebx
086044e2 +0x0ba:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086044e7 +0x0bf:  mov    %ebx,0x8(%esp)
086044eb +0x0c3:  mov    0x14(%ebp),%edx
086044ee +0x0c6:  mov    %edx,0x4(%esp)
086044f2 +0x0ca:  mov    %eax,(%esp)
086044f5 +0x0cd:  call   0835fda2 <_ZNK12CDataManager10find_skillEii>  ; CDataManager::find_skill(int, int) const
086044fa +0x0d2:  mov    %eax,-0x1c(%ebp)
086044fd +0x0d5:  movzbl -0x30(%ebp),%eax
08604501 +0x0d9:  add    %eax,%eax
08604503 +0x0db:  add    -0x20(%ebp),%eax
08604506 +0x0de:  movzbl (%eax),%eax
08604509 +0x0e1:  movzbl %al,%ebx
0860450c +0x0e4:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08604511 +0x0e9:  mov    %ebx,0x8(%esp)
08604515 +0x0ed:  mov    0x14(%ebp),%edx
08604518 +0x0f0:  mov    %edx,0x4(%esp)
0860451c +0x0f4:  mov    %eax,(%esp)
0860451f +0x0f7:  call   0835fda2 <_ZNK12CDataManager10find_skillEii>  ; CDataManager::find_skill(int, int) const
08604524 +0x0fc:  mov    %eax,-0x18(%ebp)
08604527 +0x0ff:  cmpl   $0x0,-0x1c(%ebp)
0860452b +0x103:  jne    0860453d <+0x115>
0860452d +0x105:  cmpl   $0x0,-0x18(%ebp)
08604531 +0x109:  jne    0860453d <+0x115>
08604533 +0x10b:  mov    $0x1,%eax
08604538 +0x110:  jmp    086047d1 <+0x3a9>
0860453d +0x115:  movzbl -0x2c(%ebp),%eax
08604541 +0x119:  mov    %eax,0x4(%esp)
08604545 +0x11d:  mov    0x8(%ebp),%eax
08604548 +0x120:  mov    %eax,(%esp)
0860454b +0x123:  call   086049fc <_ZNK9SkillSlot19get_skillslot_groupEi>  ; SkillSlot::get_skillslot_group(int) const
08604550 +0x128:  mov    %eax,-0x14(%ebp)
08604553 +0x12b:  cmpl   $0x6,-0x14(%ebp)
08604557 +0x12f:  sete   %al
0860455a +0x132:  test   %al,%al
0860455c +0x134:  je     08604568 <+0x140>
0860455e +0x136:  mov    $0x1,%eax
08604563 +0x13b:  jmp    086047d1 <+0x3a9>
08604568 +0x140:  movzbl -0x30(%ebp),%eax
0860456c +0x144:  mov    %eax,0x4(%esp)
08604570 +0x148:  mov    0x8(%ebp),%eax
08604573 +0x14b:  mov    %eax,(%esp)
08604576 +0x14e:  call   086049fc <_ZNK9SkillSlot19get_skillslot_groupEi>  ; SkillSlot::get_skillslot_group(int) const
0860457b +0x153:  mov    %eax,-0x10(%ebp)
0860457e +0x156:  cmpl   $0x6,-0x10(%ebp)
08604582 +0x15a:  sete   %al
08604585 +0x15d:  test   %al,%al
08604587 +0x15f:  je     08604593 <+0x16b>
08604589 +0x161:  mov    $0x1,%eax
0860458e +0x166:  jmp    086047d1 <+0x3a9>
08604593 +0x16b:  cmpl   $0x4,-0x14(%ebp)
08604597 +0x16f:  je     0860459f <+0x177>
08604599 +0x171:  cmpl   $0x4,-0x10(%ebp)
0860459d +0x175:  jne    086045a9 <+0x181>
0860459f +0x177:  mov    $0x13,%eax
086045a4 +0x17c:  jmp    086047d1 <+0x3a9>
086045a9 +0x181:  movb   $0x0,-0x9(%ebp)
086045ad +0x185:  movzbl -0x2c(%ebp),%eax
086045b1 +0x189:  add    %eax,%eax
086045b3 +0x18b:  add    -0x20(%ebp),%eax
086045b6 +0x18e:  movzbl (%eax),%eax
086045b9 +0x191:  test   %al,%al
086045bb +0x193:  jne    08604620 <+0x1f8>
086045bd +0x195:  movzbl -0x30(%ebp),%eax
086045c1 +0x199:  add    %eax,%eax
086045c3 +0x19b:  add    -0x20(%ebp),%eax
086045c6 +0x19e:  movzbl (%eax),%eax
086045c9 +0x1a1:  test   %al,%al
086045cb +0x1a3:  je     08604620 <+0x1f8>
086045cd +0x1a5:  cmpl   $0x0,-0x18(%ebp)
086045d1 +0x1a9:  jne    086045dc <+0x1b4>
086045d3 +0x1ab:  movb   $0x0,-0x9(%ebp)
086045d7 +0x1af:  jmp    08604777 <+0x34f>
086045dc +0x1b4:  cmpl   $0xffffffff,-0x14(%ebp)
086045e0 +0x1b8:  jne    086045fe <+0x1d6>
086045e2 +0x1ba:  mov    -0x18(%ebp),%eax
086045e5 +0x1bd:  mov    %eax,(%esp)
086045e8 +0x1c0:  call   08609366 <_GLOBAL__I__ZN9SkillSlot14set_skill_slotEPcS0_i+0x39>  ; global constructors keyed to SkillSlot::set_skill_slot(char*, char*, int)+0x39
086045ed +0x1c5:  test   %al,%al
086045ef +0x1c7:  je     0860476d <+0x345>
086045f5 +0x1cd:  movb   $0x1,-0x9(%ebp)
086045f9 +0x1d1:  jmp    08604777 <+0x34f>
086045fe +0x1d6:  mov    -0x18(%ebp),%eax
08604601 +0x1d9:  mov    %eax,(%esp)
08604604 +0x1dc:  call   08374b96 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeb62>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeb62
08604609 +0x1e1:  cmp    -0x14(%ebp),%eax
0860460c +0x1e4:  sete   %al
0860460f +0x1e7:  test   %al,%al
08604611 +0x1e9:  je     08604770 <+0x348>
08604617 +0x1ef:  movb   $0x1,-0x9(%ebp)
0860461b +0x1f3:  jmp    08604777 <+0x34f>
08604620 +0x1f8:  movzbl -0x30(%ebp),%eax
08604624 +0x1fc:  add    %eax,%eax
08604626 +0x1fe:  add    -0x20(%ebp),%eax
08604629 +0x201:  movzbl (%eax),%eax
0860462c +0x204:  test   %al,%al
0860462e +0x206:  jne    08604693 <+0x26b>
08604630 +0x208:  movzbl -0x2c(%ebp),%eax
08604634 +0x20c:  add    %eax,%eax
08604636 +0x20e:  add    -0x20(%ebp),%eax
08604639 +0x211:  movzbl (%eax),%eax
0860463c +0x214:  test   %al,%al
0860463e +0x216:  je     08604693 <+0x26b>
08604640 +0x218:  cmpl   $0x0,-0x1c(%ebp)
08604644 +0x21c:  jne    0860464f <+0x227>
08604646 +0x21e:  movb   $0x0,-0x9(%ebp)
0860464a +0x222:  jmp    08604777 <+0x34f>
0860464f +0x227:  cmpl   $0xffffffff,-0x10(%ebp)
08604653 +0x22b:  jne    08604671 <+0x249>
08604655 +0x22d:  mov    -0x1c(%ebp),%eax
08604658 +0x230:  mov    %eax,(%esp)
0860465b +0x233:  call   08609366 <_GLOBAL__I__ZN9SkillSlot14set_skill_slotEPcS0_i+0x39>  ; global constructors keyed to SkillSlot::set_skill_slot(char*, char*, int)+0x39
08604660 +0x238:  test   %al,%al
08604662 +0x23a:  je     08604773 <+0x34b>
08604668 +0x240:  movb   $0x1,-0x9(%ebp)
0860466c +0x244:  jmp    08604777 <+0x34f>
08604671 +0x249:  mov    -0x1c(%ebp),%eax
08604674 +0x24c:  mov    %eax,(%esp)
08604677 +0x24f:  call   08374b96 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeb62>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeb62
0860467c +0x254:  cmp    -0x10(%ebp),%eax
0860467f +0x257:  sete   %al
08604682 +0x25a:  test   %al,%al
08604684 +0x25c:  je     08604776 <+0x34e>
0860468a +0x262:  movb   $0x1,-0x9(%ebp)
0860468e +0x266:  jmp    08604777 <+0x34f>
08604693 +0x26b:  cmpl   $0x0,-0x1c(%ebp)
08604697 +0x26f:  je     0860469f <+0x277>
08604699 +0x271:  cmpl   $0x0,-0x18(%ebp)
0860469d +0x275:  jne    086046a8 <+0x280>
0860469f +0x277:  movb   $0x0,-0x9(%ebp)
086046a3 +0x27b:  jmp    08604777 <+0x34f>
086046a8 +0x280:  cmpl   $0xffffffff,-0x14(%ebp)
086046ac +0x284:  jne    086046bd <+0x295>
086046ae +0x286:  cmpl   $0xffffffff,-0x10(%ebp)
086046b2 +0x28a:  jne    086046bd <+0x295>
086046b4 +0x28c:  movb   $0x1,-0x9(%ebp)
086046b8 +0x290:  jmp    08604777 <+0x34f>
086046bd +0x295:  cmpl   $0xffffffff,-0x14(%ebp)
086046c1 +0x299:  jne    086046da <+0x2b2>
086046c3 +0x29b:  mov    -0x1c(%ebp),%eax
086046c6 +0x29e:  mov    %eax,(%esp)
086046c9 +0x2a1:  call   08374b96 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeb62>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeb62
086046ce +0x2a6:  cmp    -0x10(%ebp),%eax
086046d1 +0x2a9:  jne    086046da <+0x2b2>
086046d3 +0x2ab:  mov    $0x1,%eax
086046d8 +0x2b0:  jmp    086046df <+0x2b7>
086046da +0x2b2:  mov    $0x0,%eax
086046df +0x2b7:  test   %al,%al
086046e1 +0x2b9:  je     086046fc <+0x2d4>
086046e3 +0x2bb:  mov    -0x18(%ebp),%eax
086046e6 +0x2be:  mov    %eax,(%esp)
086046e9 +0x2c1:  call   08609366 <_GLOBAL__I__ZN9SkillSlot14set_skill_slotEPcS0_i+0x39>  ; global constructors keyed to SkillSlot::set_skill_slot(char*, char*, int)+0x39
086046ee +0x2c6:  test   %al,%al
086046f0 +0x2c8:  je     08604777 <+0x34f>
086046f6 +0x2ce:  movb   $0x1,-0x9(%ebp)
086046fa +0x2d2:  jmp    08604777 <+0x34f>
086046fc +0x2d4:  mov    -0x18(%ebp),%eax
086046ff +0x2d7:  mov    %eax,(%esp)
08604702 +0x2da:  call   08374b96 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeb62>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeb62
08604707 +0x2df:  cmp    -0x14(%ebp),%eax
0860470a +0x2e2:  jne    08604719 <+0x2f1>
0860470c +0x2e4:  cmpl   $0xffffffff,-0x10(%ebp)
08604710 +0x2e8:  jne    08604719 <+0x2f1>
08604712 +0x2ea:  mov    $0x1,%eax
08604717 +0x2ef:  jmp    0860471e <+0x2f6>
08604719 +0x2f1:  mov    $0x0,%eax
0860471e +0x2f6:  test   %al,%al
08604720 +0x2f8:  je     08604737 <+0x30f>
08604722 +0x2fa:  mov    -0x1c(%ebp),%eax
08604725 +0x2fd:  mov    %eax,(%esp)
08604728 +0x300:  call   08609366 <_GLOBAL__I__ZN9SkillSlot14set_skill_slotEPcS0_i+0x39>  ; global constructors keyed to SkillSlot::set_skill_slot(char*, char*, int)+0x39
0860472d +0x305:  test   %al,%al
0860472f +0x307:  je     08604777 <+0x34f>
08604731 +0x309:  movb   $0x1,-0x9(%ebp)
08604735 +0x30d:  jmp    08604777 <+0x34f>
08604737 +0x30f:  mov    -0x18(%ebp),%eax
0860473a +0x312:  mov    %eax,(%esp)
0860473d +0x315:  call   08374b96 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeb62>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeb62
08604742 +0x31a:  cmp    -0x14(%ebp),%eax
08604745 +0x31d:  jne    0860475e <+0x336>
08604747 +0x31f:  mov    -0x1c(%ebp),%eax
0860474a +0x322:  mov    %eax,(%esp)
0860474d +0x325:  call   08374b96 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeb62>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeb62
08604752 +0x32a:  cmp    -0x10(%ebp),%eax
08604755 +0x32d:  jne    0860475e <+0x336>
08604757 +0x32f:  mov    $0x1,%eax
0860475c +0x334:  jmp    08604763 <+0x33b>
0860475e +0x336:  mov    $0x0,%eax
08604763 +0x33b:  test   %al,%al
08604765 +0x33d:  je     08604777 <+0x34f>
08604767 +0x33f:  movb   $0x1,-0x9(%ebp)
0860476b +0x343:  jmp    08604777 <+0x34f>
0860476d +0x345:  nop
0860476e +0x346:  jmp    08604777 <+0x34f>
08604770 +0x348:  nop
08604771 +0x349:  jmp    08604777 <+0x34f>
08604773 +0x34b:  nop
08604774 +0x34c:  jmp    08604777 <+0x34f>
08604776 +0x34e:  nop
08604777 +0x34f:  movzbl -0x9(%ebp),%eax
0860477b +0x353:  xor    $0x1,%eax
0860477e +0x356:  test   %al,%al
08604780 +0x358:  je     08604789 <+0x361>
08604782 +0x35a:  mov    $0x13,%eax
08604787 +0x35f:  jmp    086047d1 <+0x3a9>
08604789 +0x361:  lea    -0x22(%ebp),%eax
0860478c +0x364:  mov    %eax,(%esp)
0860478f +0x367:  call   0848f34c <_GLOBAL__I__ZN15exchange_server22AcquireCharacterMemoryEi+0x2a>  ; global constructors keyed to exchange_server::AcquireCharacterMemory(int)+0x2a
08604794 +0x36c:  movzbl -0x2c(%ebp),%eax
08604798 +0x370:  add    %eax,%eax
0860479a +0x372:  add    -0x20(%ebp),%eax
0860479d +0x375:  movzwl (%eax),%eax
086047a0 +0x378:  mov    %ax,-0x22(%ebp)
086047a4 +0x37c:  movzbl -0x2c(%ebp),%eax
086047a8 +0x380:  add    %eax,%eax
086047aa +0x382:  add    -0x20(%ebp),%eax
086047ad +0x385:  movzbl -0x30(%ebp),%edx
086047b1 +0x389:  add    %edx,%edx
086047b3 +0x38b:  add    -0x20(%ebp),%edx
086047b6 +0x38e:  movzwl (%edx),%edx
086047b9 +0x391:  mov    %dx,(%eax)
086047bc +0x394:  movzbl -0x30(%ebp),%eax
086047c0 +0x398:  add    %eax,%eax
086047c2 +0x39a:  add    -0x20(%ebp),%eax
086047c5 +0x39d:  movzwl -0x22(%ebp),%edx
086047c9 +0x3a1:  mov    %dx,(%eax)
086047cc +0x3a4:  mov    $0x0,%eax
086047d1 +0x3a9:  add    $0x44,%esp
086047d4 +0x3ac:  pop    %ebx
086047d5 +0x3ad:  pop    %ebp
086047d6 +0x3ae:  ret
086047d7 +0x3af:  nop
```

## 反编译 C

```c
// SkillSlot::skill_move @ 0x8604428

/* SkillSlot::skill_move(unsigned char, unsigned char, int) */

undefined4 __thiscall SkillSlot::skill_move(SkillSlot *this,uchar param_1,uchar param_2,int param_3)

{
  undefined2 uVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  _Mastered_skill local_26 [2];
  int local_24;
  CSkill *local_20;
  CSkill *local_1c;
  int local_18;
  int local_14;
  char local_d;
  
  if (*(int *)this == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    cVar3 = checkMoveComboSkillSlot(this,param_1,param_2);
    if (cVar3 == '\x01') {
      uVar4 = CUserCharacInfo::GetCurCharacSkillTreeIndex(*(CUserCharacInfo **)this);
      local_24 = get_skillslot_buf(this,uVar4);
      if (local_24 == 0) {
        uVar4 = 0xffffffff;
      }
      else if ((*(char *)((uint)param_1 * 2 + local_24) == '\0') &&
              (*(char *)((uint)param_2 * 2 + local_24) == '\0')) {
        uVar4 = 0x15;
      }
      else {
        iVar5 = G_CDataManager();
        local_20 = (CSkill *)CDataManager::find_skill(iVar5,param_3);
        iVar5 = G_CDataManager();
        local_1c = (CSkill *)CDataManager::find_skill(iVar5,param_3);
        if ((local_20 == (CSkill *)0x0) && (local_1c == (CSkill *)0x0)) {
          uVar4 = 1;
        }
        else {
          local_18 = get_skillslot_group(this,(uint)param_1);
          if (local_18 == 6) {
            uVar4 = 1;
          }
          else {
            local_14 = get_skillslot_group(this,(uint)param_2);
            if (local_14 == 6) {
              uVar4 = 1;
            }
            else if ((local_18 == 4) || (local_14 == 4)) {
              uVar4 = 0x13;
            }
            else {
              local_d = '\0';
              if ((*(char *)((uint)param_1 * 2 + local_24) == '\0') &&
                 (*(char *)((uint)param_2 * 2 + local_24) != '\0')) {
                if (local_1c == (CSkill *)0x0) {
                  local_d = '\0';
                }
                else if (local_18 == -1) {
                  cVar3 = CSkill::is_active_skill(local_1c);
                  if (cVar3 != '\0') {
                    local_d = '\x01';
                  }
                }
                else {
                  iVar5 = CSkill::get_group(local_1c);
                  if (iVar5 == local_18) {
                    local_d = '\x01';
                  }
                }
              }
              else if ((*(char *)((uint)param_2 * 2 + local_24) == '\0') &&
                      (*(char *)((uint)param_1 * 2 + local_24) != '\0')) {
                if (local_20 == (CSkill *)0x0) {
                  local_d = '\0';
                }
                else if (local_14 == -1) {
                  cVar3 = CSkill::is_active_skill(local_20);
                  if (cVar3 != '\0') {
                    local_d = '\x01';
                  }
                }
                else {
                  iVar5 = CSkill::get_group(local_20);
                  if (iVar5 == local_14) {
                    local_d = '\x01';
                  }
                }
              }
              else if ((local_20 == (CSkill *)0x0) || (local_1c == (CSkill *)0x0)) {
                local_d = '\0';
              }
              else if ((local_18 == -1) && (local_14 == -1)) {
                local_d = '\x01';
              }
              else {
                if ((local_18 == -1) && (iVar5 = CSkill::get_group(local_20), iVar5 == local_14)) {
                  bVar2 = true;
                }
                else {
                  bVar2 = false;
                }
                if (bVar2) {
                  cVar3 = CSkill::is_active_skill(local_1c);
                  if (cVar3 != '\0') {
                    local_d = '\x01';
                  }
                }
                else {
                  iVar5 = CSkill::get_group(local_1c);
                  if ((iVar5 == local_18) && (local_14 == -1)) {
                    bVar2 = true;
                  }
                  else {
                    bVar2 = false;
                  }
                  if (bVar2) {
                    cVar3 = CSkill::is_active_skill(local_20);
                    if (cVar3 != '\0') {
                      local_d = '\x01';
                    }
                  }
                  else {
                    iVar5 = CSkill::get_group(local_1c);
                    if ((iVar5 == local_18) &&
                       (iVar5 = CSkill::get_group(local_20), iVar5 == local_14)) {
                      bVar2 = true;
                    }
                    else {
                      bVar2 = false;
                    }
                    if (bVar2) {
                      local_d = '\x01';
                    }
                  }
                }
              }
              if (local_d == '\x01') {
                _Mastered_skill::_Mastered_skill(local_26);
                uVar1 = *(undefined2 *)((uint)param_1 * 2 + local_24);
                *(undefined2 *)((uint)param_1 * 2 + local_24) =
                     *(undefined2 *)((uint)param_2 * 2 + local_24);
                *(undefined2 *)((uint)param_2 * 2 + local_24) = uVar1;
                uVar4 = 0;
              }
              else {
                uVar4 = 0x13;
              }
            }
          }
        }
      }
    }
    else {
      uVar4 = 0x13;
    }
  }
  return uVar4;
}
```
