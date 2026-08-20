# SendVillageMonsterPosition

`_ZN16village_attacked19CVillageMonsterArea26SendVillageMonsterPositionEv`

`village_attacked::CVillageMonsterArea::SendVillageMonsterPosition()`

| 类 | 地址 |
|---|---|
| `village_attacked::CVillageMonsterArea` | `0x086b3962` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086b3962  _ZN16village_attacked19CVillageMonsterArea26SendVillageMonsterPositionEv
#           village_attacked::CVillageMonsterArea::SendVillageMonsterPosition()
# range [0x086b3962, 0x086b3abd]
086b3962 +0x000:  push   %ebp
086b3963 +0x001:  mov    %esp,%ebp
086b3965 +0x003:  push   %esi
086b3966 +0x004:  push   %ebx
086b3967 +0x005:  sub    $0x40,%esp
086b396a +0x008:  lea    -0x24(%ebp),%eax
086b396d +0x00b:  mov    %eax,(%esp)
086b3970 +0x00e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086b3975 +0x013:  lea    -0x24(%ebp),%eax
086b3978 +0x016:  mov    %eax,(%esp)
086b397b +0x019:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
086b3980 +0x01e:  movl   $0xef,0x8(%esp)
086b3988 +0x026:  movl   $0x0,0x4(%esp)
086b3990 +0x02e:  lea    -0x24(%ebp),%eax
086b3993 +0x031:  mov    %eax,(%esp)
086b3996 +0x034:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086b399b +0x039:  lea    -0x24(%ebp),%eax
086b399e +0x03c:  mov    %eax,(%esp)
086b39a1 +0x03f:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
086b39a6 +0x044:  mov    %eax,-0x28(%ebp)
086b39a9 +0x047:  movl   $0x0,-0x14(%ebp)
086b39b0 +0x04e:  mov    -0x14(%ebp),%eax
086b39b3 +0x051:  mov    %eax,0x4(%esp)
086b39b7 +0x055:  lea    -0x24(%ebp),%eax
086b39ba +0x058:  mov    %eax,(%esp)
086b39bd +0x05b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086b39c2 +0x060:  movl   $0x0,-0x10(%ebp)
086b39c9 +0x067:  mov    0x8(%ebp),%edx
086b39cc +0x06a:  lea    -0x2c(%ebp),%eax
086b39cf +0x06d:  mov    %edx,0x4(%esp)
086b39d3 +0x071:  mov    %eax,(%esp)
086b39d6 +0x074:  call   086b4fcc <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x4f6>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x4f6
086b39db +0x079:  sub    $0x4,%esp
086b39de +0x07c:  jmp    086b3a1c <+0xba>
086b39e0 +0x07e:  lea    -0x2c(%ebp),%eax
086b39e3 +0x081:  mov    %eax,(%esp)
086b39e6 +0x084:  call   086b504a <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x574>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x574
086b39eb +0x089:  add    $0x4,%eax
086b39ee +0x08c:  mov    %eax,-0xc(%ebp)
086b39f1 +0x08f:  lea    -0x24(%ebp),%eax
086b39f4 +0x092:  mov    %eax,0x4(%esp)
086b39f8 +0x096:  mov    -0xc(%ebp),%eax
086b39fb +0x099:  mov    %eax,(%esp)
086b39fe +0x09c:  call   086b36e6 <_ZN16village_attacked15CVillageMonster32MakeVillageMonsterPositionPacketER11PacketGuard>  ; village_attacked::CVillageMonster::MakeVillageMonsterPositionPacket(PacketGuard&)
086b3a03 +0x0a1:  xor    $0x1,%eax
086b3a06 +0x0a4:  test   %al,%al
086b3a08 +0x0a6:  jne    086b3a10 <+0xae>
086b3a0a +0x0a8:  addl   $0x1,-0x14(%ebp)
086b3a0e +0x0ac:  jmp    086b3a11 <+0xaf>
086b3a10 +0x0ae:  nop
086b3a11 +0x0af:  lea    -0x2c(%ebp),%eax
086b3a14 +0x0b2:  mov    %eax,(%esp)
086b3a17 +0x0b5:  call   086b502c <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x556>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x556
086b3a1c +0x0ba:  mov    0x8(%ebp),%edx
086b3a1f +0x0bd:  lea    -0x18(%ebp),%eax
086b3a22 +0x0c0:  mov    %edx,0x4(%esp)
086b3a26 +0x0c4:  mov    %eax,(%esp)
086b3a29 +0x0c7:  call   086b4ff2 <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x51c>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x51c
086b3a2e +0x0cc:  sub    $0x4,%esp
086b3a31 +0x0cf:  lea    -0x18(%ebp),%eax
086b3a34 +0x0d2:  mov    %eax,0x4(%esp)
086b3a38 +0x0d6:  lea    -0x2c(%ebp),%eax
086b3a3b +0x0d9:  mov    %eax,(%esp)
086b3a3e +0x0dc:  call   086b5018 <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x542>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x542
086b3a43 +0x0e1:  test   %al,%al
086b3a45 +0x0e3:  jne    086b39e0 <+0x7e>
086b3a47 +0x0e5:  mov    -0x14(%ebp),%eax
086b3a4a +0x0e8:  mov    %eax,0x8(%esp)
086b3a4e +0x0ec:  lea    -0x28(%ebp),%eax
086b3a51 +0x0ef:  mov    %eax,0x4(%esp)
086b3a55 +0x0f3:  lea    -0x24(%ebp),%eax
086b3a58 +0x0f6:  mov    %eax,(%esp)
086b3a5b +0x0f9:  call   08110b28 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x3a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x3a
086b3a60 +0x0fe:  movl   $0x1,0x4(%esp)
086b3a68 +0x106:  lea    -0x24(%ebp),%eax
086b3a6b +0x109:  mov    %eax,(%esp)
086b3a6e +0x10c:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086b3a73 +0x111:  cmpl   $0x0,-0x14(%ebp)
086b3a77 +0x115:  je     086b3aa8 <+0x146>
086b3a79 +0x117:  lea    -0x24(%ebp),%eax
086b3a7c +0x11a:  mov    %eax,0x4(%esp)
086b3a80 +0x11e:  mov    0x8(%ebp),%eax
086b3a83 +0x121:  mov    %eax,(%esp)
086b3a86 +0x124:  call   086b3b9c <_ZN16village_attacked19CVillageMonsterArea10SendPacketER11PacketGuard>  ; village_attacked::CVillageMonsterArea::SendPacket(PacketGuard&)
086b3a8b +0x129:  jmp    086b3aa8 <+0x146>
086b3a8d +0x12b:  mov    %edx,%ebx
086b3a8f +0x12d:  mov    %eax,%esi
086b3a91 +0x12f:  lea    -0x24(%ebp),%eax
086b3a94 +0x132:  mov    %eax,(%esp)
086b3a97 +0x135:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086b3a9c +0x13a:  mov    %esi,%eax
086b3a9e +0x13c:  mov    %ebx,%edx
086b3aa0 +0x13e:  mov    %eax,(%esp)
086b3aa3 +0x141:  call   08ae3750 <_Unwind_Resume>
086b3aa8 +0x146:  lea    -0x24(%ebp),%eax
086b3aab +0x149:  mov    %eax,(%esp)
086b3aae +0x14c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086b3ab3 +0x151:  lea    -0x8(%ebp),%esp
086b3ab6 +0x154:  add    $0x0,%esp
086b3ab9 +0x157:  pop    %ebx
086b3aba +0x158:  pop    %esi
086b3abb +0x159:  pop    %ebp
086b3abc +0x15a:  ret
086b3abd +0x15b:  nop
```

## 反编译 C

```c
// village_attacked::CVillageMonsterArea::SendVillageMonsterPosition @ 0x86b3962

/* village_attacked::CVillageMonsterArea::SendVillageMonsterPosition() */

void __thiscall
village_attacked::CVillageMonsterArea::SendVillageMonsterPosition(CVillageMonsterArea *this)

{
  char cVar1;
  int iVar2;
  map<unsigned_short,village_attacked::CVillageMonster,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>>
  local_30 [4];
  int local_2c;
  PacketGuard local_28 [12];
  map<unsigned_short,village_attacked::CVillageMonster,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>>
  local_1c [4];
  int local_18;
  undefined4 local_14;
  CVillageMonster *local_10;
  
  PacketGuard::PacketGuard(local_28);
                    /* try { // try from 086b397b to 086b3a8a has its CatchHandler @ 086b3a8d */
  InterfacePacketBuf::clear((InterfacePacketBuf *)local_28);
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,0,0xef);
  local_2c = InterfacePacketBuf::get_index((InterfacePacketBuf *)local_28);
  local_18 = 0;
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,0);
  local_14 = 0;
  std::
  map<unsigned_short,village_attacked::CVillageMonster,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>>
  ::begin(local_30);
  while( true ) {
    std::
    map<unsigned_short,village_attacked::CVillageMonster,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>>
    ::end(local_1c);
    cVar1 = std::
            _Rb_tree_iterator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>::
            operator!=((_Rb_tree_iterator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>
                        *)local_30,(_Rb_tree_iterator *)local_1c);
    if (cVar1 == '\0') break;
    iVar2 = std::
            _Rb_tree_iterator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>::
            operator->((_Rb_tree_iterator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>
                        *)local_30);
    local_10 = (CVillageMonster *)(iVar2 + 4);
    cVar1 = CVillageMonster::MakeVillageMonsterPositionPacket(local_10,local_28);
    if (cVar1 == '\x01') {
      local_18 = local_18 + 1;
    }
    std::_Rb_tree_iterator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>::
    operator++((_Rb_tree_iterator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>
                *)local_30);
  }
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,&local_2c,local_18);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
  if (local_18 != 0) {
    SendPacket(this,local_28);
  }
  PacketGuard::~PacketGuard(local_28);
  return;
}
```
