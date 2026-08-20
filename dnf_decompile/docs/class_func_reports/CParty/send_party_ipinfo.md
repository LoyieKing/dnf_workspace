# send_party_ipinfo

`_ZN6CParty17send_party_ipinfoEv`

`CParty::send_party_ipinfo()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x0859cea2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859cea2  _ZN6CParty17send_party_ipinfoEv
#           CParty::send_party_ipinfo()
# range [0x0859cea2, 0x0859d14d]
0859cea2 +0x000:  push   %ebp
0859cea3 +0x001:  mov    %esp,%ebp
0859cea5 +0x003:  push   %esi
0859cea6 +0x004:  push   %ebx
0859cea7 +0x005:  sub    $0x20,%esp
0859ceaa +0x008:  lea    -0x18(%ebp),%eax
0859cead +0x00b:  mov    %eax,(%esp)
0859ceb0 +0x00e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0859ceb5 +0x013:  movl   $0xb,0x8(%esp)
0859cebd +0x01b:  movl   $0x0,0x4(%esp)
0859cec5 +0x023:  lea    -0x18(%ebp),%eax
0859cec8 +0x026:  mov    %eax,(%esp)
0859cecb +0x029:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0859ced0 +0x02e:  mov    0x8(%ebp),%eax
0859ced3 +0x031:  mov    %eax,(%esp)
0859ced6 +0x034:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
0859cedb +0x039:  mov    %eax,0x4(%esp)
0859cedf +0x03d:  lea    -0x18(%ebp),%eax
0859cee2 +0x040:  mov    %eax,(%esp)
0859cee5 +0x043:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0859ceea +0x048:  movl   $0x0,-0xc(%ebp)
0859cef1 +0x04f:  jmp    0859d0ea <+0x248>
0859cef6 +0x054:  mov    -0xc(%ebp),%eax
0859cef9 +0x057:  mov    %eax,0x4(%esp)
0859cefd +0x05b:  mov    0x8(%ebp),%eax
0859cf00 +0x05e:  mov    %eax,(%esp)
0859cf03 +0x061:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
0859cf08 +0x066:  test   %al,%al
0859cf0a +0x068:  je     0859d0e6 <+0x244>
0859cf10 +0x06e:  mov    -0xc(%ebp),%edx
0859cf13 +0x071:  mov    0x8(%ebp),%ecx
0859cf16 +0x074:  mov    %edx,%eax
0859cf18 +0x076:  add    %eax,%eax
0859cf1a +0x078:  add    %edx,%eax
0859cf1c +0x07a:  shl    $0x3,%eax
0859cf1f +0x07d:  lea    (%ecx,%eax,1),%eax
0859cf22 +0x080:  add    $0x78,%eax
0859cf25 +0x083:  mov    (%eax),%eax
0859cf27 +0x085:  mov    %eax,(%esp)
0859cf2a +0x088:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
0859cf2f +0x08d:  movzwl %ax,%eax
0859cf32 +0x090:  mov    %eax,0x4(%esp)
0859cf36 +0x094:  lea    -0x18(%ebp),%eax
0859cf39 +0x097:  mov    %eax,(%esp)
0859cf3c +0x09a:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0859cf41 +0x09f:  mov    -0xc(%ebp),%edx
0859cf44 +0x0a2:  mov    0x8(%ebp),%ecx
0859cf47 +0x0a5:  mov    %edx,%eax
0859cf49 +0x0a7:  add    %eax,%eax
0859cf4b +0x0a9:  add    %edx,%eax
0859cf4d +0x0ab:  shl    $0x3,%eax
0859cf50 +0x0ae:  lea    (%ecx,%eax,1),%eax
0859cf53 +0x0b1:  add    $0x78,%eax
0859cf56 +0x0b4:  mov    (%eax),%eax
0859cf58 +0x0b6:  add    $0xe0,%eax
0859cf5d +0x0bb:  mov    %eax,(%esp)
0859cf60 +0x0be:  call   082f1bd8 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x195c>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x195c
0859cf65 +0x0c3:  mov    %eax,0x4(%esp)
0859cf69 +0x0c7:  lea    -0x18(%ebp),%eax
0859cf6c +0x0ca:  mov    %eax,(%esp)
0859cf6f +0x0cd:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0859cf74 +0x0d2:  mov    -0xc(%ebp),%edx
0859cf77 +0x0d5:  mov    0x8(%ebp),%ecx
0859cf7a +0x0d8:  mov    %edx,%eax
0859cf7c +0x0da:  add    %eax,%eax
0859cf7e +0x0dc:  add    %edx,%eax
0859cf80 +0x0de:  shl    $0x3,%eax
0859cf83 +0x0e1:  lea    (%ecx,%eax,1),%eax
0859cf86 +0x0e4:  add    $0x78,%eax
0859cf89 +0x0e7:  mov    (%eax),%eax
0859cf8b +0x0e9:  add    $0xe0,%eax
0859cf90 +0x0ee:  mov    %eax,(%esp)
0859cf93 +0x0f1:  call   082f1be6 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x196a>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x196a
0859cf98 +0x0f6:  mov    %eax,0x4(%esp)
0859cf9c +0x0fa:  lea    -0x18(%ebp),%eax
0859cf9f +0x0fd:  mov    %eax,(%esp)
0859cfa2 +0x100:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0859cfa7 +0x105:  mov    -0xc(%ebp),%edx
0859cfaa +0x108:  mov    0x8(%ebp),%ecx
0859cfad +0x10b:  mov    %edx,%eax
0859cfaf +0x10d:  add    %eax,%eax
0859cfb1 +0x10f:  add    %edx,%eax
0859cfb3 +0x111:  shl    $0x3,%eax
0859cfb6 +0x114:  lea    (%ecx,%eax,1),%eax
0859cfb9 +0x117:  add    $0x78,%eax
0859cfbc +0x11a:  mov    (%eax),%eax
0859cfbe +0x11c:  add    $0xe0,%eax
0859cfc3 +0x121:  mov    %eax,(%esp)
0859cfc6 +0x124:  call   082f1bf4 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1978>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1978
0859cfcb +0x129:  movzwl %ax,%eax
0859cfce +0x12c:  mov    %eax,0x4(%esp)
0859cfd2 +0x130:  lea    -0x18(%ebp),%eax
0859cfd5 +0x133:  mov    %eax,(%esp)
0859cfd8 +0x136:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0859cfdd +0x13b:  mov    -0xc(%ebp),%edx
0859cfe0 +0x13e:  mov    0x8(%ebp),%ecx
0859cfe3 +0x141:  mov    %edx,%eax
0859cfe5 +0x143:  add    %eax,%eax
0859cfe7 +0x145:  add    %edx,%eax
0859cfe9 +0x147:  shl    $0x3,%eax
0859cfec +0x14a:  lea    (%ecx,%eax,1),%eax
0859cfef +0x14d:  add    $0x78,%eax
0859cff2 +0x150:  mov    (%eax),%eax
0859cff4 +0x152:  mov    %eax,(%esp)
0859cff7 +0x155:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0859cffc +0x15a:  mov    %eax,0x4(%esp)
0859d000 +0x15e:  lea    -0x18(%ebp),%eax
0859d003 +0x161:  mov    %eax,(%esp)
0859d006 +0x164:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0859d00b +0x169:  mov    -0xc(%ebp),%edx
0859d00e +0x16c:  mov    0x8(%ebp),%ecx
0859d011 +0x16f:  mov    %edx,%eax
0859d013 +0x171:  add    %eax,%eax
0859d015 +0x173:  add    %edx,%eax
0859d017 +0x175:  shl    $0x3,%eax
0859d01a +0x178:  lea    (%ecx,%eax,1),%eax
0859d01d +0x17b:  add    $0x78,%eax
0859d020 +0x17e:  mov    (%eax),%eax
0859d022 +0x180:  add    $0xe0,%eax
0859d027 +0x185:  mov    %eax,(%esp)
0859d02a +0x188:  call   08236de0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc48a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc48a
0859d02f +0x18d:  movsbl %al,%eax
0859d032 +0x190:  mov    %eax,0x4(%esp)
0859d036 +0x194:  lea    -0x18(%ebp),%eax
0859d039 +0x197:  mov    %eax,(%esp)
0859d03c +0x19a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0859d041 +0x19f:  mov    -0xc(%ebp),%edx
0859d044 +0x1a2:  mov    0x8(%ebp),%ecx
0859d047 +0x1a5:  mov    %edx,%eax
0859d049 +0x1a7:  add    %eax,%eax
0859d04b +0x1a9:  add    %edx,%eax
0859d04d +0x1ab:  shl    $0x3,%eax
0859d050 +0x1ae:  lea    (%ecx,%eax,1),%eax
0859d053 +0x1b1:  add    $0x78,%eax
0859d056 +0x1b4:  mov    (%eax),%eax
0859d058 +0x1b6:  add    $0xe0,%eax
0859d05d +0x1bb:  mov    %eax,(%esp)
0859d060 +0x1be:  call   082f1c04 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1988>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1988
0859d065 +0x1c3:  mov    %eax,0x4(%esp)
0859d069 +0x1c7:  lea    -0x18(%ebp),%eax
0859d06c +0x1ca:  mov    %eax,(%esp)
0859d06f +0x1cd:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0859d074 +0x1d2:  mov    -0xc(%ebp),%edx
0859d077 +0x1d5:  mov    0x8(%ebp),%ecx
0859d07a +0x1d8:  mov    %edx,%eax
0859d07c +0x1da:  add    %eax,%eax
0859d07e +0x1dc:  add    %edx,%eax
0859d080 +0x1de:  shl    $0x3,%eax
0859d083 +0x1e1:  lea    (%ecx,%eax,1),%eax
0859d086 +0x1e4:  add    $0x78,%eax
0859d089 +0x1e7:  mov    (%eax),%eax
0859d08b +0x1e9:  mov    %eax,(%esp)
0859d08e +0x1ec:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0859d093 +0x1f1:  test   %eax,%eax
0859d095 +0x1f3:  setne  %al
0859d098 +0x1f6:  test   %al,%al
0859d09a +0x1f8:  je     0859d0d3 <+0x231>
0859d09c +0x1fa:  mov    -0xc(%ebp),%edx
0859d09f +0x1fd:  mov    0x8(%ebp),%ecx
0859d0a2 +0x200:  mov    %edx,%eax
0859d0a4 +0x202:  add    %eax,%eax
0859d0a6 +0x204:  add    %edx,%eax
0859d0a8 +0x206:  shl    $0x3,%eax
0859d0ab +0x209:  lea    (%ecx,%eax,1),%eax
0859d0ae +0x20c:  add    $0x78,%eax
0859d0b1 +0x20f:  mov    (%eax),%eax
0859d0b3 +0x211:  mov    %eax,(%esp)
0859d0b6 +0x214:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0859d0bb +0x219:  movzbl 0x75(%eax),%eax
0859d0bf +0x21d:  movzbl %al,%eax
0859d0c2 +0x220:  mov    %eax,0x4(%esp)
0859d0c6 +0x224:  lea    -0x18(%ebp),%eax
0859d0c9 +0x227:  mov    %eax,(%esp)
0859d0cc +0x22a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0859d0d1 +0x22f:  jmp    0859d0e6 <+0x244>
0859d0d3 +0x231:  movl   $0x0,0x4(%esp)
0859d0db +0x239:  lea    -0x18(%ebp),%eax
0859d0de +0x23c:  mov    %eax,(%esp)
0859d0e1 +0x23f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0859d0e6 +0x244:  addl   $0x1,-0xc(%ebp)
0859d0ea +0x248:  cmpl   $0x3,-0xc(%ebp)
0859d0ee +0x24c:  setle  %al
0859d0f1 +0x24f:  test   %al,%al
0859d0f3 +0x251:  jne    0859cef6 <+0x54>
0859d0f9 +0x257:  movl   $0x1,0x4(%esp)
0859d101 +0x25f:  lea    -0x18(%ebp),%eax
0859d104 +0x262:  mov    %eax,(%esp)
0859d107 +0x265:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0859d10c +0x26a:  lea    -0x18(%ebp),%eax
0859d10f +0x26d:  mov    %eax,0x4(%esp)
0859d113 +0x271:  mov    0x8(%ebp),%eax
0859d116 +0x274:  mov    %eax,(%esp)
0859d119 +0x277:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
0859d11e +0x27c:  jmp    0859d13b <+0x299>
0859d120 +0x27e:  mov    %edx,%ebx
0859d122 +0x280:  mov    %eax,%esi
0859d124 +0x282:  lea    -0x18(%ebp),%eax
0859d127 +0x285:  mov    %eax,(%esp)
0859d12a +0x288:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0859d12f +0x28d:  mov    %esi,%eax
0859d131 +0x28f:  mov    %ebx,%edx
0859d133 +0x291:  mov    %eax,(%esp)
0859d136 +0x294:  call   08ae3750 <_Unwind_Resume>
0859d13b +0x299:  lea    -0x18(%ebp),%eax
0859d13e +0x29c:  mov    %eax,(%esp)
0859d141 +0x29f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0859d146 +0x2a4:  add    $0x20,%esp
0859d149 +0x2a7:  pop    %ebx
0859d14a +0x2a8:  pop    %esi
0859d14b +0x2a9:  pop    %ebp
0859d14c +0x2aa:  ret
0859d14d +0x2ab:  nop
```

## 反编译 C

```c
// CParty::send_party_ipinfo @ 0x859cea2

/* CParty::send_party_ipinfo() */

void __thiscall CParty::send_party_ipinfo(CParty *this)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  PacketGuard local_1c [12];
  int local_10;
  
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 0859cecb to 0859d11d has its CatchHandler @ 0859d120 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0xb);
  iVar2 = get_member_count(this);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,iVar2);
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    cVar1 = _checkValidUser(this,local_10);
    if (cVar1 != '\0') {
      uVar3 = CUser::get_unique_id(*(CUser **)(this + local_10 * 0x18 + 0x78));
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,uVar3 & 0xffff);
      iVar2 = CNetwork<4096,450000>::get_inner_ip
                        ((CNetwork<4096,450000> *)(*(int *)(this + local_10 * 0x18 + 0x78) + 0xe0));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,iVar2);
      iVar2 = CNetwork<4096,450000>::get_ip
                        ((CNetwork<4096,450000> *)(*(int *)(this + local_10 * 0x18 + 0x78) + 0xe0));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,iVar2);
      uVar3 = CNetwork<4096,450000>::get_port
                        ((CNetwork<4096,450000> *)(*(int *)(this + local_10 * 0x18 + 0x78) + 0xe0));
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,uVar3 & 0xffff);
      iVar2 = CUser::get_acc_id(*(CUser **)(this + local_10 * 0x18 + 0x78));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,iVar2);
      cVar1 = CNetwork<4096,450000>::get_nat_type
                        ((CNetwork<4096,450000> *)(*(int *)(this + local_10 * 0x18 + 0x78) + 0xe0));
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(int)cVar1);
      iVar2 = CNetwork<4096,450000>::get_mtu
                        ((CNetwork<4096,450000> *)(*(int *)(this + local_10 * 0x18 + 0x78) + 0xe0));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,iVar2);
      iVar2 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)(this + local_10 * 0x18 + 0x78));
      if (iVar2 == 0) {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
      }
      else {
        iVar2 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)(this + local_10 * 0x18 + 0x78))
        ;
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)*(byte *)(iVar2 + 0x75));
      }
    }
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  send_to_party(this,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return;
}
```
