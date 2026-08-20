# get_party_realtime_info

`_ZN6CParty23get_party_realtime_infoER11PacketGuard`

`CParty::get_party_realtime_info(PacketGuard&)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x0859cbac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859cbac  _ZN6CParty23get_party_realtime_infoER11PacketGuard
#           CParty::get_party_realtime_info(PacketGuard&)
# range [0x0859cbac, 0x0859cd23]
0859cbac +0x000:  push   %ebp
0859cbad +0x001:  mov    %esp,%ebp
0859cbaf +0x003:  sub    $0x28,%esp
0859cbb2 +0x006:  mov    0xc(%ebp),%eax
0859cbb5 +0x009:  mov    %eax,(%esp)
0859cbb8 +0x00c:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
0859cbbd +0x011:  mov    %eax,-0x14(%ebp)
0859cbc0 +0x014:  movl   $0x0,-0x10(%ebp)
0859cbc7 +0x01b:  mov    0xc(%ebp),%eax
0859cbca +0x01e:  movl   $0x0,0x4(%esp)
0859cbd2 +0x026:  mov    %eax,(%esp)
0859cbd5 +0x029:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0859cbda +0x02e:  movl   $0x0,-0xc(%ebp)
0859cbe1 +0x035:  jmp    0859ccf5 <+0x149>
0859cbe6 +0x03a:  mov    -0xc(%ebp),%eax
0859cbe9 +0x03d:  mov    %eax,0x4(%esp)
0859cbed +0x041:  mov    0x8(%ebp),%eax
0859cbf0 +0x044:  mov    %eax,(%esp)
0859cbf3 +0x047:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
0859cbf8 +0x04c:  test   %al,%al
0859cbfa +0x04e:  je     0859ccf1 <+0x145>
0859cc00 +0x054:  mov    -0xc(%ebp),%edx
0859cc03 +0x057:  mov    0x8(%ebp),%ecx
0859cc06 +0x05a:  mov    %edx,%eax
0859cc08 +0x05c:  add    %eax,%eax
0859cc0a +0x05e:  add    %edx,%eax
0859cc0c +0x060:  shl    $0x3,%eax
0859cc0f +0x063:  lea    (%ecx,%eax,1),%eax
0859cc12 +0x066:  add    $0x78,%eax
0859cc15 +0x069:  mov    (%eax),%eax
0859cc17 +0x06b:  mov    %eax,(%esp)
0859cc1a +0x06e:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
0859cc1f +0x073:  movzwl %ax,%edx
0859cc22 +0x076:  mov    0xc(%ebp),%eax
0859cc25 +0x079:  mov    %edx,0x4(%esp)
0859cc29 +0x07d:  mov    %eax,(%esp)
0859cc2c +0x080:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0859cc31 +0x085:  mov    -0xc(%ebp),%edx
0859cc34 +0x088:  mov    0x8(%ebp),%ecx
0859cc37 +0x08b:  mov    %edx,%eax
0859cc39 +0x08d:  add    %eax,%eax
0859cc3b +0x08f:  add    %edx,%eax
0859cc3d +0x091:  shl    $0x3,%eax
0859cc40 +0x094:  lea    (%ecx,%eax,1),%eax
0859cc43 +0x097:  add    $0x78,%eax
0859cc46 +0x09a:  mov    (%eax),%eax
0859cc48 +0x09c:  mov    %eax,(%esp)
0859cc4b +0x09f:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0859cc50 +0x0a4:  test   %eax,%eax
0859cc52 +0x0a6:  setne  %al
0859cc55 +0x0a9:  test   %al,%al
0859cc57 +0x0ab:  je     0859cc90 <+0xe4>
0859cc59 +0x0ad:  mov    -0xc(%ebp),%edx
0859cc5c +0x0b0:  mov    0x8(%ebp),%ecx
0859cc5f +0x0b3:  mov    %edx,%eax
0859cc61 +0x0b5:  add    %eax,%eax
0859cc63 +0x0b7:  add    %edx,%eax
0859cc65 +0x0b9:  shl    $0x3,%eax
0859cc68 +0x0bc:  lea    (%ecx,%eax,1),%eax
0859cc6b +0x0bf:  add    $0x78,%eax
0859cc6e +0x0c2:  mov    (%eax),%eax
0859cc70 +0x0c4:  mov    %eax,(%esp)
0859cc73 +0x0c7:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0859cc78 +0x0cc:  movzbl 0x75(%eax),%eax
0859cc7c +0x0d0:  movzbl %al,%edx
0859cc7f +0x0d3:  mov    0xc(%ebp),%eax
0859cc82 +0x0d6:  mov    %edx,0x4(%esp)
0859cc86 +0x0da:  mov    %eax,(%esp)
0859cc89 +0x0dd:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0859cc8e +0x0e2:  jmp    0859cca3 <+0xf7>
0859cc90 +0x0e4:  mov    0xc(%ebp),%eax
0859cc93 +0x0e7:  movl   $0x0,0x4(%esp)
0859cc9b +0x0ef:  mov    %eax,(%esp)
0859cc9e +0x0f2:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0859cca3 +0x0f7:  mov    -0xc(%ebp),%edx
0859cca6 +0x0fa:  mov    0x8(%ebp),%ecx
0859cca9 +0x0fd:  mov    %edx,%eax
0859ccab +0x0ff:  add    %eax,%eax
0859ccad +0x101:  add    %edx,%eax
0859ccaf +0x103:  shl    $0x3,%eax
0859ccb2 +0x106:  lea    (%ecx,%eax,1),%eax
0859ccb5 +0x109:  add    $0x78,%eax
0859ccb8 +0x10c:  mov    (%eax),%eax
0859ccba +0x10e:  mov    %eax,0x4(%esp)
0859ccbe +0x112:  mov    0x8(%ebp),%eax
0859ccc1 +0x115:  mov    %eax,(%esp)
0859ccc4 +0x118:  call   085a21ca <_ZN6CParty16isHelpAbusePartyEP5CUser>  ; CParty::isHelpAbuseParty(CUser*)
0859ccc9 +0x11d:  movzbl %al,%edx
0859cccc +0x120:  mov    0xc(%ebp),%eax
0859cccf +0x123:  mov    %edx,0x4(%esp)
0859ccd3 +0x127:  mov    %eax,(%esp)
0859ccd6 +0x12a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0859ccdb +0x12f:  mov    0xc(%ebp),%eax
0859ccde +0x132:  mov    -0xc(%ebp),%edx
0859cce1 +0x135:  mov    %edx,0x4(%esp)
0859cce5 +0x139:  mov    %eax,(%esp)
0859cce8 +0x13c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0859cced +0x141:  addl   $0x1,-0x10(%ebp)
0859ccf1 +0x145:  addl   $0x1,-0xc(%ebp)
0859ccf5 +0x149:  cmpl   $0x3,-0xc(%ebp)
0859ccf9 +0x14d:  setle  %al
0859ccfc +0x150:  test   %al,%al
0859ccfe +0x152:  jne    0859cbe6 <+0x3a>
0859cd04 +0x158:  mov    0xc(%ebp),%eax
0859cd07 +0x15b:  mov    -0x10(%ebp),%edx
0859cd0a +0x15e:  mov    %edx,0x8(%esp)
0859cd0e +0x162:  lea    -0x14(%ebp),%edx
0859cd11 +0x165:  mov    %edx,0x4(%esp)
0859cd15 +0x169:  mov    %eax,(%esp)
0859cd18 +0x16c:  call   08110b28 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x3a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x3a
0859cd1d +0x171:  mov    $0x1,%eax
0859cd22 +0x176:  leave
0859cd23 +0x177:  ret
```

## 反编译 C

```c
// CParty::get_party_realtime_info @ 0x859cbac

/* CParty::get_party_realtime_info(PacketGuard&) */

undefined4 __thiscall CParty::get_party_realtime_info(CParty *this,PacketGuard *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int local_18;
  int local_14;
  int local_10;
  
  local_18 = InterfacePacketBuf::get_index((InterfacePacketBuf *)param_1);
  local_14 = 0;
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,0);
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    cVar1 = _checkValidUser(this,local_10);
    if (cVar1 != '\0') {
      uVar2 = CUser::get_unique_id(*(CUser **)(this + local_10 * 0x18 + 0x78));
      InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,uVar2 & 0xffff);
      iVar3 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)(this + local_10 * 0x18 + 0x78));
      if (iVar3 == 0) {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,0);
      }
      else {
        iVar3 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)(this + local_10 * 0x18 + 0x78))
        ;
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,(uint)*(byte *)(iVar3 + 0x75));
      }
      uVar2 = isHelpAbuseParty((CUser *)this);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,uVar2 & 0xff);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,local_10);
      local_14 = local_14 + 1;
    }
  }
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,&local_18,local_14);
  return 1;
}
```
