# SendEachCardInfo

`_ZN6CParty16SendEachCardInfoEv`

`CParty::SendEachCardInfo()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b44d6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b44d6  _ZN6CParty16SendEachCardInfoEv
#           CParty::SendEachCardInfo()
# range [0x085b44d6, 0x085b4733]
085b44d6 +0x000:  push   %ebp
085b44d7 +0x001:  mov    %esp,%ebp
085b44d9 +0x003:  push   %esi
085b44da +0x004:  push   %ebx
085b44db +0x005:  sub    $0x30,%esp
085b44de +0x008:  lea    -0x18(%ebp),%eax
085b44e1 +0x00b:  mov    %eax,(%esp)
085b44e4 +0x00e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085b44e9 +0x013:  lea    -0x18(%ebp),%eax
085b44ec +0x016:  mov    %eax,(%esp)
085b44ef +0x019:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
085b44f4 +0x01e:  movl   $0x4a,0x8(%esp)
085b44fc +0x026:  movl   $0x1,0x4(%esp)
085b4504 +0x02e:  lea    -0x18(%ebp),%eax
085b4507 +0x031:  mov    %eax,(%esp)
085b450a +0x034:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085b450f +0x039:  movl   $0x1,0x4(%esp)
085b4517 +0x041:  lea    -0x18(%ebp),%eax
085b451a +0x044:  mov    %eax,(%esp)
085b451d +0x047:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085b4522 +0x04c:  movl   $0x0,-0xc(%ebp)
085b4529 +0x053:  jmp    085b46d1 <+0x1fb>
085b452e +0x058:  mov    -0xc(%ebp),%eax
085b4531 +0x05b:  mov    0x8(%ebp),%edx
085b4534 +0x05e:  movzbl 0x204(%edx,%eax,1),%eax
085b453c +0x066:  movsbl %al,%eax
085b453f +0x069:  mov    %eax,0x4(%esp)
085b4543 +0x06d:  lea    -0x18(%ebp),%eax
085b4546 +0x070:  mov    %eax,(%esp)
085b4549 +0x073:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085b454e +0x078:  mov    -0xc(%ebp),%eax
085b4551 +0x07b:  mov    0x8(%ebp),%edx
085b4554 +0x07e:  movzbl 0x208(%edx,%eax,1),%eax
085b455c +0x086:  movsbl %al,%eax
085b455f +0x089:  mov    %eax,0x4(%esp)
085b4563 +0x08d:  lea    -0x18(%ebp),%eax
085b4566 +0x090:  mov    %eax,(%esp)
085b4569 +0x093:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085b456e +0x098:  mov    -0xc(%ebp),%eax
085b4571 +0x09b:  mov    0x8(%ebp),%edx
085b4574 +0x09e:  movzbl 0x208(%edx,%eax,1),%eax
085b457c +0x0a6:  cmp    $0xff,%al
085b457e +0x0a8:  jne    085b4598 <+0xc2>
085b4580 +0x0aa:  movl   $0x0,0x4(%esp)
085b4588 +0x0b2:  lea    -0x18(%ebp),%eax
085b458b +0x0b5:  mov    %eax,(%esp)
085b458e +0x0b8:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085b4593 +0x0bd:  jmp    085b46ad <+0x1d7>
085b4598 +0x0c2:  lea    -0x18(%ebp),%eax
085b459b +0x0c5:  mov    %eax,(%esp)
085b459e +0x0c8:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
085b45a3 +0x0cd:  mov    %eax,-0x1c(%ebp)
085b45a6 +0x0d0:  movl   $0x1,0x4(%esp)
085b45ae +0x0d8:  lea    -0x18(%ebp),%eax
085b45b1 +0x0db:  mov    %eax,(%esp)
085b45b4 +0x0de:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085b45b9 +0x0e3:  movl   $0x0,0x4(%esp)
085b45c1 +0x0eb:  lea    -0x18(%ebp),%eax
085b45c4 +0x0ee:  mov    %eax,(%esp)
085b45c7 +0x0f1:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085b45cc +0x0f6:  mov    -0xc(%ebp),%eax
085b45cf +0x0f9:  mov    0x8(%ebp),%edx
085b45d2 +0x0fc:  movzbl 0x208(%edx,%eax,1),%eax
085b45da +0x104:  movsbl %al,%eax
085b45dd +0x107:  imul   $0x7a,%eax,%eax
085b45e0 +0x10a:  add    $0x760,%eax
085b45e5 +0x10f:  add    0x8(%ebp),%eax
085b45e8 +0x112:  add    $0x10,%eax
085b45eb +0x115:  mov    %eax,(%esp)
085b45ee +0x118:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
085b45f3 +0x11d:  mov    %eax,0x4(%esp)
085b45f7 +0x121:  lea    -0x18(%ebp),%eax
085b45fa +0x124:  mov    %eax,(%esp)
085b45fd +0x127:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085b4602 +0x12c:  mov    -0xc(%ebp),%eax
085b4605 +0x12f:  mov    0x8(%ebp),%edx
085b4608 +0x132:  movzbl 0x208(%edx,%eax,1),%eax
085b4610 +0x13a:  movsbl %al,%eax
085b4613 +0x13d:  mov    0x8(%ebp),%edx
085b4616 +0x140:  imul   $0x7a,%eax,%eax
085b4619 +0x143:  lea    (%edx,%eax,1),%eax
085b461c +0x146:  add    $0x79d,%eax
085b4621 +0x14b:  mov    0x12(%eax),%eax
085b4624 +0x14e:  test   %eax,%eax
085b4626 +0x150:  je     085b46ad <+0x1d7>
085b462c +0x156:  mov    -0xc(%ebp),%eax
085b462f +0x159:  mov    0x8(%ebp),%edx
085b4632 +0x15c:  movzbl 0x208(%edx,%eax,1),%eax
085b463a +0x164:  movsbl %al,%eax
085b463d +0x167:  mov    0x8(%ebp),%edx
085b4640 +0x16a:  imul   $0x7a,%eax,%eax
085b4643 +0x16d:  lea    (%edx,%eax,1),%eax
085b4646 +0x170:  add    $0x79d,%eax
085b464b +0x175:  mov    0x12(%eax),%eax
085b464e +0x178:  mov    %eax,0x4(%esp)
085b4652 +0x17c:  lea    -0x18(%ebp),%eax
085b4655 +0x17f:  mov    %eax,(%esp)
085b4658 +0x182:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085b465d +0x187:  mov    -0xc(%ebp),%eax
085b4660 +0x18a:  mov    0x8(%ebp),%edx
085b4663 +0x18d:  movzbl 0x208(%edx,%eax,1),%eax
085b466b +0x195:  movsbl %al,%eax
085b466e +0x198:  imul   $0x7a,%eax,%eax
085b4671 +0x19b:  add    $0x79d,%eax
085b4676 +0x1a0:  add    0x8(%ebp),%eax
085b4679 +0x1a3:  add    $0x10,%eax
085b467c +0x1a6:  mov    %eax,(%esp)
085b467f +0x1a9:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
085b4684 +0x1ae:  mov    %eax,0x4(%esp)
085b4688 +0x1b2:  lea    -0x18(%ebp),%eax
085b468b +0x1b5:  mov    %eax,(%esp)
085b468e +0x1b8:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085b4693 +0x1bd:  movl   $0x2,0x8(%esp)
085b469b +0x1c5:  lea    -0x1c(%ebp),%eax
085b469e +0x1c8:  mov    %eax,0x4(%esp)
085b46a2 +0x1cc:  lea    -0x18(%ebp),%eax
085b46a5 +0x1cf:  mov    %eax,(%esp)
085b46a8 +0x1d2:  call   08110b28 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x3a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x3a
085b46ad +0x1d7:  mov    -0xc(%ebp),%eax
085b46b0 +0x1da:  mov    0x8(%ebp),%edx
085b46b3 +0x1dd:  movzbl 0x38c(%edx,%eax,1),%eax
085b46bb +0x1e5:  movzbl %al,%eax
085b46be +0x1e8:  mov    %eax,0x4(%esp)
085b46c2 +0x1ec:  lea    -0x18(%ebp),%eax
085b46c5 +0x1ef:  mov    %eax,(%esp)
085b46c8 +0x1f2:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085b46cd +0x1f7:  addl   $0x1,-0xc(%ebp)
085b46d1 +0x1fb:  cmpl   $0x3,-0xc(%ebp)
085b46d5 +0x1ff:  setle  %al
085b46d8 +0x202:  test   %al,%al
085b46da +0x204:  jne    085b452e <+0x58>
085b46e0 +0x20a:  movl   $0x1,0x4(%esp)
085b46e8 +0x212:  lea    -0x18(%ebp),%eax
085b46eb +0x215:  mov    %eax,(%esp)
085b46ee +0x218:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085b46f3 +0x21d:  lea    -0x18(%ebp),%eax
085b46f6 +0x220:  mov    %eax,0x4(%esp)
085b46fa +0x224:  mov    0x8(%ebp),%eax
085b46fd +0x227:  mov    %eax,(%esp)
085b4700 +0x22a:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
085b4705 +0x22f:  jmp    085b4722 <+0x24c>
085b4707 +0x231:  mov    %edx,%ebx
085b4709 +0x233:  mov    %eax,%esi
085b470b +0x235:  lea    -0x18(%ebp),%eax
085b470e +0x238:  mov    %eax,(%esp)
085b4711 +0x23b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085b4716 +0x240:  mov    %esi,%eax
085b4718 +0x242:  mov    %ebx,%edx
085b471a +0x244:  mov    %eax,(%esp)
085b471d +0x247:  call   08ae3750 <_Unwind_Resume>
085b4722 +0x24c:  lea    -0x18(%ebp),%eax
085b4725 +0x24f:  mov    %eax,(%esp)
085b4728 +0x252:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085b472d +0x257:  add    $0x30,%esp
085b4730 +0x25a:  pop    %ebx
085b4731 +0x25b:  pop    %esi
085b4732 +0x25c:  pop    %ebp
085b4733 +0x25d:  ret
```

## 反编译 C

```c
// CParty::SendEachCardInfo @ 0x85b44d6

/* CParty::SendEachCardInfo() */

void __thiscall CParty::SendEachCardInfo(CParty *this)

{
  int iVar1;
  int local_20;
  PacketGuard local_1c [12];
  int local_10;
  
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 085b44ef to 085b4704 has its CatchHandler @ 085b4707 */
  InterfacePacketBuf::clear((InterfacePacketBuf *)local_1c);
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x4a);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(int)(char)this[local_10 + 0x204]);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(int)(char)this[local_10 + 0x208]);
    if (this[local_10 + 0x208] == (CParty)0xff) {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
    }
    else {
      local_20 = InterfacePacketBuf::get_index((InterfacePacketBuf *)local_1c);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,0);
      iVar1 = Inven_Item::get_add_info
                        ((Inven_Item *)(this + (char)this[local_10 + 0x208] * 0x7a + 0x770));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,iVar1);
      if (*(int *)(this + (char)this[local_10 + 0x208] * 0x7a + 0x7af) != 0) {
        InterfacePacketBuf::put_int
                  ((InterfacePacketBuf *)local_1c,
                   *(int *)(this + (char)this[local_10 + 0x208] * 0x7a + 0x7af));
        iVar1 = Inven_Item::get_add_info
                          ((Inven_Item *)(this + (char)this[local_10 + 0x208] * 0x7a + 0x7ad));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,iVar1);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,&local_20,2);
      }
    }
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)(byte)this[local_10 + 0x38c]);
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  send_to_party(this,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return;
}
```
