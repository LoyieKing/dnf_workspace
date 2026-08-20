# increase_hell_party_ratio

`_ZN6CParty25increase_hell_party_ratioEPc`

`CParty::increase_hell_party_ratio(char*)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x0859bba8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859bba8  _ZN6CParty25increase_hell_party_ratioEPc
#           CParty::increase_hell_party_ratio(char*)
# range [0x0859bba8, 0x0859bc57]
0859bba8 +0x00:  push   %ebp
0859bba9 +0x01:  mov    %esp,%ebp
0859bbab +0x03:  sub    $0x58,%esp
0859bbae +0x06:  mov    0x8(%ebp),%eax
0859bbb1 +0x09:  mov    %eax,(%esp)
0859bbb4 +0x0c:  call   0859f582 <_ZN6CParty22getPartyMemberAvgLevelEv>  ; CParty::getPartyMemberAvgLevel()
0859bbb9 +0x11:  cmp    $0x3b,%eax
0859bbbc +0x14:  setle  %al
0859bbbf +0x17:  test   %al,%al
0859bbc1 +0x19:  jne    0859bc55 <+0xad>
0859bbc7 +0x1f:  mov    0x8(%ebp),%eax
0859bbca +0x22:  mov    %eax,0x4(%esp)
0859bbce +0x26:  lea    -0x10(%ebp),%eax
0859bbd1 +0x29:  mov    %eax,(%esp)
0859bbd4 +0x2c:  call   08469976 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x59>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x59
0859bbd9 +0x31:  mov    0x8(%ebp),%eax
0859bbdc +0x34:  add    $0xb24,%eax
0859bbe1 +0x39:  mov    %eax,(%esp)
0859bbe4 +0x3c:  call   0822d0d8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2782>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2782
0859bbe9 +0x41:  mov    %eax,-0xc(%ebp)
0859bbec +0x44:  lea    -0x2c(%ebp),%eax
0859bbef +0x47:  mov    %eax,(%esp)
0859bbf2 +0x4a:  call   084699c6 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0xa9>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0xa9
0859bbf7 +0x4f:  mov    0xc(%ebp),%eax
0859bbfa +0x52:  add    $0x1,%eax
0859bbfd +0x55:  movzbl (%eax),%eax
0859bc00 +0x58:  movsbl %al,%eax
0859bc03 +0x5b:  mov    %eax,-0x2c(%ebp)
0859bc06 +0x5e:  mov    0xc(%ebp),%eax
0859bc09 +0x61:  add    $0x2,%eax
0859bc0c +0x64:  movzbl (%eax),%eax
0859bc0f +0x67:  movsbl %al,%eax
0859bc12 +0x6a:  mov    %eax,-0x28(%ebp)
0859bc15 +0x6d:  lea    -0x2c(%ebp),%eax
0859bc18 +0x70:  mov    %eax,0x10(%esp)
0859bc1c +0x74:  mov    -0x10(%ebp),%eax
0859bc1f +0x77:  mov    -0xc(%ebp),%edx
0859bc22 +0x7a:  mov    %eax,0x8(%esp)
0859bc26 +0x7e:  mov    %edx,0xc(%esp)
0859bc2a +0x82:  movl   $0xc,0x4(%esp)
0859bc32 +0x8a:  mov    0x8(%ebp),%eax
0859bc35 +0x8d:  mov    %eax,(%esp)
0859bc38 +0x90:  call   0859b992 <_ZN6CParty16set_basic_rewardEN10QuickParty15BasicRewardTypeENS0_16RewardData_ParamERNS0_17RewardData_ResultE>  ; CParty::set_basic_reward(QuickParty::BasicRewardType, QuickParty::RewardData_Param, QuickParty::RewardData_Result&)
0859bc3d +0x95:  mov    0xc(%ebp),%eax
0859bc40 +0x98:  lea    0x1(%eax),%edx
0859bc43 +0x9b:  mov    -0x2c(%ebp),%eax
0859bc46 +0x9e:  mov    %al,(%edx)
0859bc48 +0xa0:  mov    0xc(%ebp),%eax
0859bc4b +0xa3:  lea    0x2(%eax),%edx
0859bc4e +0xa6:  mov    -0x28(%ebp),%eax
0859bc51 +0xa9:  mov    %al,(%edx)
0859bc53 +0xab:  jmp    0859bc56 <+0xae>
0859bc55 +0xad:  nop
0859bc56 +0xae:  leave
0859bc57 +0xaf:  ret
```

## 反编译 C

```c
// CParty::increase_hell_party_ratio @ 0x859bba8

/* CParty::increase_hell_party_ratio(char*) */

void __thiscall CParty::increase_hell_party_ratio(CParty *this,char *param_1)

{
  int iVar1;
  int local_30;
  int local_2c;
  undefined4 local_14;
  undefined4 local_10;
  
  iVar1 = getPartyMemberAvgLevel(this);
  if (0x3b < iVar1) {
    QuickParty::RewardData_Param::RewardData_Param((RewardData_Param *)&local_14,this);
    local_10 = CBattle_Field::get_dungeon_index((CBattle_Field *)(this + 0xb24));
    QuickParty::RewardData_Result::RewardData_Result((RewardData_Result *)&local_30);
    local_30 = (int)param_1[1];
    local_2c = (int)param_1[2];
    set_basic_reward(this,0xc,local_14,local_10,&local_30);
    param_1[1] = (char)local_30;
    param_1[2] = (char)local_2c;
  }
  return;
}
```
