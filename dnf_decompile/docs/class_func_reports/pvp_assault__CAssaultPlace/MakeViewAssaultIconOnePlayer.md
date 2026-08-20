# MakeViewAssaultIconOnePlayer

`_ZN11pvp_assault13CAssaultPlace28MakeViewAssaultIconOnePlayerEP11PacketGuardb`

`pvp_assault::CAssaultPlace::MakeViewAssaultIconOnePlayer(PacketGuard*, bool)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082e89c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e89c0  _ZN11pvp_assault13CAssaultPlace28MakeViewAssaultIconOnePlayerEP11PacketGuardb
#           pvp_assault::CAssaultPlace::MakeViewAssaultIconOnePlayer(PacketGuard*, bool)
# range [0x082e89c0, 0x082e8afb]
082e89c0 +0x000:  push   %ebp
082e89c1 +0x001:  mov    %esp,%ebp
082e89c3 +0x003:  sub    $0x38,%esp
082e89c6 +0x006:  mov    0x10(%ebp),%eax
082e89c9 +0x009:  mov    %al,-0x1c(%ebp)
082e89cc +0x00c:  mov    0x8(%ebp),%eax
082e89cf +0x00f:  mov    0x104(%eax),%eax
082e89d5 +0x015:  mov    %eax,%edx
082e89d7 +0x017:  mov    0xc(%ebp),%eax
082e89da +0x01a:  mov    %edx,0x4(%esp)
082e89de +0x01e:  mov    %eax,(%esp)
082e89e1 +0x021:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
082e89e6 +0x026:  movzbl -0x1c(%ebp),%edx
082e89ea +0x02a:  mov    0xc(%ebp),%eax
082e89ed +0x02d:  mov    %edx,0x4(%esp)
082e89f1 +0x031:  mov    %eax,(%esp)
082e89f4 +0x034:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082e89f9 +0x039:  cmpb   $0x0,-0x1c(%ebp)
082e89fd +0x03d:  je     082e8af9 <+0x139>
082e8a03 +0x043:  mov    0x8(%ebp),%eax
082e8a06 +0x046:  mov    0x110(%eax),%edx
082e8a0c +0x04c:  mov    0xc(%ebp),%eax
082e8a0f +0x04f:  mov    %edx,0x4(%esp)
082e8a13 +0x053:  mov    %eax,(%esp)
082e8a16 +0x056:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
082e8a1b +0x05b:  mov    0x8(%ebp),%eax
082e8a1e +0x05e:  mov    0x114(%eax),%edx
082e8a24 +0x064:  mov    0xc(%ebp),%eax
082e8a27 +0x067:  mov    %edx,0x4(%esp)
082e8a2b +0x06b:  mov    %eax,(%esp)
082e8a2e +0x06e:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
082e8a33 +0x073:  movl   $0x0,-0x14(%ebp)
082e8a3a +0x07a:  movl   $0x0,-0x10(%ebp)
082e8a41 +0x081:  mov    0xc(%ebp),%eax
082e8a44 +0x084:  mov    %eax,(%esp)
082e8a47 +0x087:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
082e8a4c +0x08c:  mov    %eax,-0x14(%ebp)
082e8a4f +0x08f:  mov    0xc(%ebp),%eax
082e8a52 +0x092:  mov    -0x10(%ebp),%edx
082e8a55 +0x095:  mov    %edx,0x4(%esp)
082e8a59 +0x099:  mov    %eax,(%esp)
082e8a5c +0x09c:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
082e8a61 +0x0a1:  movl   $0x0,-0xc(%ebp)
082e8a68 +0x0a8:  jmp    082e8ad5 <+0x115>
082e8a6a +0x0aa:  mov    -0xc(%ebp),%eax
082e8a6d +0x0ad:  shl    $0x5,%eax
082e8a70 +0x0b0:  add    0x8(%ebp),%eax
082e8a73 +0x0b3:  mov    %eax,(%esp)
082e8a76 +0x0b6:  call   082f055c <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2e0>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2e0
082e8a7b +0x0bb:  test   %al,%al
082e8a7d +0x0bd:  jne    082e8ad0 <+0x110>
082e8a7f +0x0bf:  mov    -0xc(%ebp),%eax
082e8a82 +0x0c2:  shl    $0x5,%eax
082e8a85 +0x0c5:  add    0x8(%ebp),%eax
082e8a88 +0x0c8:  mov    %eax,(%esp)
082e8a8b +0x0cb:  call   082e6662 <_ZN11pvp_assault10CAssaulter15GetUserUniqueIdEv>  ; pvp_assault::CAssaulter::GetUserUniqueId()
082e8a90 +0x0d0:  movzwl %ax,%edx
082e8a93 +0x0d3:  mov    0xc(%ebp),%eax
082e8a96 +0x0d6:  mov    %edx,0x4(%esp)
082e8a9a +0x0da:  mov    %eax,(%esp)
082e8a9d +0x0dd:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
082e8aa2 +0x0e2:  mov    -0xc(%ebp),%eax
082e8aa5 +0x0e5:  shl    $0x5,%eax
082e8aa8 +0x0e8:  add    0x8(%ebp),%eax
082e8aab +0x0eb:  mov    %eax,(%esp)
082e8aae +0x0ee:  call   082f0570 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2f4>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2f4
082e8ab3 +0x0f3:  mov    %eax,(%esp)
082e8ab6 +0x0f6:  call   082e564c <_ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM>  ; pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)
082e8abb +0x0fb:  mov    0xc(%ebp),%edx
082e8abe +0x0fe:  mov    %eax,0x4(%esp)
082e8ac2 +0x102:  mov    %edx,(%esp)
082e8ac5 +0x105:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082e8aca +0x10a:  addl   $0x1,-0x10(%ebp)
082e8ace +0x10e:  jmp    082e8ad1 <+0x111>
082e8ad0 +0x110:  nop
082e8ad1 +0x111:  addl   $0x1,-0xc(%ebp)
082e8ad5 +0x115:  cmpl   $0x7,-0xc(%ebp)
082e8ad9 +0x119:  setle  %al
082e8adc +0x11c:  test   %al,%al
082e8ade +0x11e:  jne    082e8a6a <+0xaa>
082e8ae0 +0x120:  mov    0xc(%ebp),%eax
082e8ae3 +0x123:  mov    -0x10(%ebp),%edx
082e8ae6 +0x126:  mov    %edx,0x8(%esp)
082e8aea +0x12a:  lea    -0x14(%ebp),%edx
082e8aed +0x12d:  mov    %edx,0x4(%esp)
082e8af1 +0x131:  mov    %eax,(%esp)
082e8af4 +0x134:  call   08116908 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x1d>  ; global constructors keyed to CEventManager::CEventManager()+0x1d
082e8af9 +0x139:  leave
082e8afa +0x13a:  ret
082e8afb +0x13b:  nop
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::MakeViewAssaultIconOnePlayer @ 0x82e89c0

/* pvp_assault::CAssaultPlace::MakeViewAssaultIconOnePlayer(PacketGuard*, bool) */

void __thiscall
pvp_assault::CAssaultPlace::MakeViewAssaultIconOnePlayer
          (CAssaultPlace *this,PacketGuard *param_1,bool param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int local_18;
  int local_14;
  int local_10;
  
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)(this + 0x104));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,(uint)param_2);
  if (param_2) {
    InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,*(int *)(this + 0x110));
    InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,*(int *)(this + 0x114));
    local_18 = 0;
    local_14 = 0;
    local_18 = InterfacePacketBuf::get_index((InterfacePacketBuf *)param_1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,local_14);
    for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
      cVar1 = CAssaulter::Empty((CAssaulter *)(this + local_10 * 0x20));
      if (cVar1 == '\0') {
        uVar2 = CAssaulter::GetUserUniqueId((CAssaulter *)(this + local_10 * 0x20));
        InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,uVar2 & 0xffff);
        uVar3 = CAssaulter::GetTeam((CAssaulter *)(this + local_10 * 0x20));
        iVar4 = GetDirectionByTeam(uVar3);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,iVar4);
        local_14 = local_14 + 1;
      }
    }
    InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,&local_18,local_14);
  }
  return;
}
```
