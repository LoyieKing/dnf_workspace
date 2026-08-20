# SendVillageMonsterList

`_ZN16village_attacked19CVillageMonsterArea22SendVillageMonsterListEP5CUser`

`village_attacked::CVillageMonsterArea::SendVillageMonsterList(CUser*)`

| 类 | 地址 |
|---|---|
| `village_attacked::CVillageMonsterArea` | `0x086b37fa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086b37fa  _ZN16village_attacked19CVillageMonsterArea22SendVillageMonsterListEP5CUser
#           village_attacked::CVillageMonsterArea::SendVillageMonsterList(CUser*)
# range [0x086b37fa, 0x086b3961]
086b37fa +0x000:  push   %ebp
086b37fb +0x001:  mov    %esp,%ebp
086b37fd +0x003:  push   %esi
086b37fe +0x004:  push   %ebx
086b37ff +0x005:  sub    $0x30,%esp
086b3802 +0x008:  lea    -0x20(%ebp),%eax
086b3805 +0x00b:  mov    %eax,(%esp)
086b3808 +0x00e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086b380d +0x013:  lea    -0x20(%ebp),%eax
086b3810 +0x016:  mov    %eax,(%esp)
086b3813 +0x019:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
086b3818 +0x01e:  movl   $0xee,0x8(%esp)
086b3820 +0x026:  movl   $0x0,0x4(%esp)
086b3828 +0x02e:  lea    -0x20(%ebp),%eax
086b382b +0x031:  mov    %eax,(%esp)
086b382e +0x034:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086b3833 +0x039:  lea    -0x20(%ebp),%eax
086b3836 +0x03c:  mov    %eax,(%esp)
086b3839 +0x03f:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
086b383e +0x044:  mov    %eax,-0x24(%ebp)
086b3841 +0x047:  movl   $0x0,-0x10(%ebp)
086b3848 +0x04e:  mov    -0x10(%ebp),%eax
086b384b +0x051:  mov    %eax,0x4(%esp)
086b384f +0x055:  lea    -0x20(%ebp),%eax
086b3852 +0x058:  mov    %eax,(%esp)
086b3855 +0x05b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086b385a +0x060:  mov    0x8(%ebp),%edx
086b385d +0x063:  lea    -0x28(%ebp),%eax
086b3860 +0x066:  mov    %edx,0x4(%esp)
086b3864 +0x06a:  mov    %eax,(%esp)
086b3867 +0x06d:  call   086b4fcc <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x4f6>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x4f6
086b386c +0x072:  sub    $0x4,%esp
086b386f +0x075:  jmp    086b38ad <+0xb3>
086b3871 +0x077:  lea    -0x28(%ebp),%eax
086b3874 +0x07a:  mov    %eax,(%esp)
086b3877 +0x07d:  call   086b504a <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x574>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x574
086b387c +0x082:  add    $0x4,%eax
086b387f +0x085:  mov    %eax,-0xc(%ebp)
086b3882 +0x088:  lea    -0x20(%ebp),%eax
086b3885 +0x08b:  mov    %eax,0x4(%esp)
086b3889 +0x08f:  mov    -0xc(%ebp),%eax
086b388c +0x092:  mov    %eax,(%esp)
086b388f +0x095:  call   086b3666 <_ZN16village_attacked15CVillageMonster28MakeVillageMonsterListPacketER11PacketGuard>  ; village_attacked::CVillageMonster::MakeVillageMonsterListPacket(PacketGuard&)
086b3894 +0x09a:  xor    $0x1,%eax
086b3897 +0x09d:  test   %al,%al
086b3899 +0x09f:  jne    086b38a1 <+0xa7>
086b389b +0x0a1:  addl   $0x1,-0x10(%ebp)
086b389f +0x0a5:  jmp    086b38a2 <+0xa8>
086b38a1 +0x0a7:  nop
086b38a2 +0x0a8:  lea    -0x28(%ebp),%eax
086b38a5 +0x0ab:  mov    %eax,(%esp)
086b38a8 +0x0ae:  call   086b502c <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x556>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x556
086b38ad +0x0b3:  mov    0x8(%ebp),%edx
086b38b0 +0x0b6:  lea    -0x14(%ebp),%eax
086b38b3 +0x0b9:  mov    %edx,0x4(%esp)
086b38b7 +0x0bd:  mov    %eax,(%esp)
086b38ba +0x0c0:  call   086b4ff2 <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x51c>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x51c
086b38bf +0x0c5:  sub    $0x4,%esp
086b38c2 +0x0c8:  lea    -0x14(%ebp),%eax
086b38c5 +0x0cb:  mov    %eax,0x4(%esp)
086b38c9 +0x0cf:  lea    -0x28(%ebp),%eax
086b38cc +0x0d2:  mov    %eax,(%esp)
086b38cf +0x0d5:  call   086b5018 <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x542>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x542
086b38d4 +0x0da:  test   %al,%al
086b38d6 +0x0dc:  jne    086b3871 <+0x77>
086b38d8 +0x0de:  mov    -0x10(%ebp),%eax
086b38db +0x0e1:  mov    %eax,0x8(%esp)
086b38df +0x0e5:  lea    -0x24(%ebp),%eax
086b38e2 +0x0e8:  mov    %eax,0x4(%esp)
086b38e6 +0x0ec:  lea    -0x20(%ebp),%eax
086b38e9 +0x0ef:  mov    %eax,(%esp)
086b38ec +0x0f2:  call   08110b28 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x3a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x3a
086b38f1 +0x0f7:  movl   $0x1,0x4(%esp)
086b38f9 +0x0ff:  lea    -0x20(%ebp),%eax
086b38fc +0x102:  mov    %eax,(%esp)
086b38ff +0x105:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086b3904 +0x10a:  cmpl   $0x0,0xc(%ebp)
086b3908 +0x10e:  je     086b391e <+0x124>
086b390a +0x110:  lea    -0x20(%ebp),%eax
086b390d +0x113:  mov    %eax,0x4(%esp)
086b3911 +0x117:  mov    0xc(%ebp),%eax
086b3914 +0x11a:  mov    %eax,(%esp)
086b3917 +0x11d:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086b391c +0x122:  jmp    086b394d <+0x153>
086b391e +0x124:  lea    -0x20(%ebp),%eax
086b3921 +0x127:  mov    %eax,0x4(%esp)
086b3925 +0x12b:  mov    0x8(%ebp),%eax
086b3928 +0x12e:  mov    %eax,(%esp)
086b392b +0x131:  call   086b3b9c <_ZN16village_attacked19CVillageMonsterArea10SendPacketER11PacketGuard>  ; village_attacked::CVillageMonsterArea::SendPacket(PacketGuard&)
086b3930 +0x136:  jmp    086b394d <+0x153>
086b3932 +0x138:  mov    %edx,%ebx
086b3934 +0x13a:  mov    %eax,%esi
086b3936 +0x13c:  lea    -0x20(%ebp),%eax
086b3939 +0x13f:  mov    %eax,(%esp)
086b393c +0x142:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086b3941 +0x147:  mov    %esi,%eax
086b3943 +0x149:  mov    %ebx,%edx
086b3945 +0x14b:  mov    %eax,(%esp)
086b3948 +0x14e:  call   08ae3750 <_Unwind_Resume>
086b394d +0x153:  lea    -0x20(%ebp),%eax
086b3950 +0x156:  mov    %eax,(%esp)
086b3953 +0x159:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086b3958 +0x15e:  lea    -0x8(%ebp),%esp
086b395b +0x161:  add    $0x0,%esp
086b395e +0x164:  pop    %ebx
086b395f +0x165:  pop    %esi
086b3960 +0x166:  pop    %ebp
086b3961 +0x167:  ret
```

## 反编译 C

```c
// village_attacked::CVillageMonsterArea::SendVillageMonsterList @ 0x86b37fa

/* village_attacked::CVillageMonsterArea::SendVillageMonsterList(CUser*) */

void __thiscall
village_attacked::CVillageMonsterArea::SendVillageMonsterList
          (CVillageMonsterArea *this,CUser *param_1)

{
  char cVar1;
  int iVar2;
  map<unsigned_short,village_attacked::CVillageMonster,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>>
  local_2c [4];
  int local_28;
  PacketGuard local_24 [12];
  map<unsigned_short,village_attacked::CVillageMonster,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>>
  local_18 [4];
  int local_14;
  CVillageMonster *local_10;
  
  PacketGuard::PacketGuard(local_24);
                    /* try { // try from 086b3813 to 086b392f has its CatchHandler @ 086b3932 */
  InterfacePacketBuf::clear((InterfacePacketBuf *)local_24);
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,0,0xee);
  local_28 = InterfacePacketBuf::get_index((InterfacePacketBuf *)local_24);
  local_14 = 0;
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,0);
  std::
  map<unsigned_short,village_attacked::CVillageMonster,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>>
  ::begin(local_2c);
  while( true ) {
    std::
    map<unsigned_short,village_attacked::CVillageMonster,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>>
    ::end(local_18);
    cVar1 = std::
            _Rb_tree_iterator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>::
            operator!=((_Rb_tree_iterator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>
                        *)local_2c,(_Rb_tree_iterator *)local_18);
    if (cVar1 == '\0') break;
    iVar2 = std::
            _Rb_tree_iterator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>::
            operator->((_Rb_tree_iterator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>
                        *)local_2c);
    local_10 = (CVillageMonster *)(iVar2 + 4);
    cVar1 = CVillageMonster::MakeVillageMonsterListPacket(local_10,local_24);
    if (cVar1 == '\x01') {
      local_14 = local_14 + 1;
    }
    std::_Rb_tree_iterator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>::
    operator++((_Rb_tree_iterator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>
                *)local_2c);
  }
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,&local_28,local_14);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
  if (param_1 == (CUser *)0x0) {
    SendPacket(this,local_24);
  }
  else {
    CUser::Send(param_1,local_24);
  }
  PacketGuard::~PacketGuard(local_24);
  return;
}
```
