# create_party

`_ZN6CParty12create_partyEP5CUser`

`CParty::create_party(CUser*)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x0859b1be` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859b1be  _ZN6CParty12create_partyEP5CUser
#           CParty::create_party(CUser*)
# range [0x0859b1be, 0x0859b233]
0859b1be +0x00:  push   %ebp
0859b1bf +0x01:  mov    %esp,%ebp
0859b1c1 +0x03:  sub    $0x18,%esp
0859b1c4 +0x06:  mov    0x8(%ebp),%eax
0859b1c7 +0x09:  mov    0xc(%ebp),%edx
0859b1ca +0x0c:  mov    %edx,0x78(%eax)
0859b1cd +0x0f:  mov    0xc(%ebp),%eax
0859b1d0 +0x12:  mov    %eax,(%esp)
0859b1d3 +0x15:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
0859b1d8 +0x1a:  mov    0x8(%ebp),%edx
0859b1db +0x1d:  mov    %eax,0x80(%edx)
0859b1e1 +0x23:  mov    0x8(%ebp),%eax
0859b1e4 +0x26:  mov    0xc(%ebp),%edx
0859b1e7 +0x29:  mov    %edx,0x74(%eax)
0859b1ea +0x2c:  mov    0x8(%ebp),%eax
0859b1ed +0x2f:  movb   $0x1,0x68(%eax)
0859b1f1 +0x33:  mov    0x8(%ebp),%eax
0859b1f4 +0x36:  movb   $0x1,0x6a(%eax)
0859b1f8 +0x3a:  mov    0x8(%ebp),%eax
0859b1fb +0x3d:  mov    0x64(%eax),%eax
0859b1fe +0x40:  cwtl
0859b1ff +0x41:  mov    %eax,0x4(%esp)
0859b203 +0x45:  mov    0xc(%ebp),%eax
0859b206 +0x48:  mov    %eax,(%esp)
0859b209 +0x4b:  call   085bfd96 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x12f4>  ; global constructors keyed to CParty::cMember::cMember()+0x12f4
0859b20e +0x50:  mov    0xc(%ebp),%eax
0859b211 +0x53:  mov    %eax,(%esp)
0859b214 +0x56:  call   082f0a5c <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x7e0>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x7e0
0859b219 +0x5b:  mov    0x8(%ebp),%eax
0859b21c +0x5e:  mov    %eax,(%esp)
0859b21f +0x61:  call   0822d90e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2fb8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2fb8
0859b224 +0x66:  mov    %eax,(%esp)
0859b227 +0x69:  call   085bc044 <_ZN14CPartyTelePort19reset_teleport_dataEv>  ; CPartyTelePort::reset_teleport_data()
0859b22c +0x6e:  mov    $0x1,%eax
0859b231 +0x73:  leave
0859b232 +0x74:  ret
0859b233 +0x75:  nop
```

## 反编译 C

```c
// CParty::create_party @ 0x859b1be

/* CParty::create_party(CUser*) */

undefined4 __thiscall CParty::create_party(CParty *this,CUser *param_1)

{
  undefined4 uVar1;
  CPartyTelePort *this_00;
  
  *(CUser **)(this + 0x78) = param_1;
  uVar1 = CUser::GetUID(param_1);
  *(undefined4 *)(this + 0x80) = uVar1;
  *(CUser **)(this + 0x74) = param_1;
  this[0x68] = (CParty)0x1;
  this[0x6a] = (CParty)0x1;
  CUser::SetPartyIndex(param_1,(short)*(undefined4 *)(this + 100));
  CUserCharacInfo::resetStraightVictories((CUserCharacInfo *)param_1);
  this_00 = (CPartyTelePort *)GetPartyTelePort(this);
  CPartyTelePort::reset_teleport_data(this_00);
  return 1;
}
```
