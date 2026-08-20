# _PrepareAssault

`_ZN11pvp_assault10CAssaulter15_PrepareAssaultEP5CUser`

`pvp_assault::CAssaulter::_PrepareAssault(CUser*)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaulter` | `0x082e6780` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e6780  _ZN11pvp_assault10CAssaulter15_PrepareAssaultEP5CUser
#           pvp_assault::CAssaulter::_PrepareAssault(CUser*)
# range [0x082e6780, 0x082e67e5]
082e6780 +0x00:  push   %ebp
082e6781 +0x01:  mov    %esp,%ebp
082e6783 +0x03:  sub    $0x18,%esp
082e6786 +0x06:  mov    0xc(%ebp),%eax
082e6789 +0x09:  mov    %eax,(%esp)
082e678c +0x0c:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
082e6791 +0x11:  test   %eax,%eax
082e6793 +0x13:  setne  %al
082e6796 +0x16:  test   %al,%al
082e6798 +0x18:  je     082e67e4 <+0x64>
082e679a +0x1a:  mov    0xc(%ebp),%eax
082e679d +0x1d:  mov    %eax,(%esp)
082e67a0 +0x20:  call   0822f390 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4a3a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4a3a
082e67a5 +0x25:  movzbl %al,%edx
082e67a8 +0x28:  mov    0x8(%ebp),%eax
082e67ab +0x2b:  mov    %edx,0x10(%eax)
082e67ae +0x2e:  mov    0xc(%ebp),%eax
082e67b1 +0x31:  movl   $0x0,0x4(%esp)
082e67b9 +0x39:  mov    %eax,(%esp)
082e67bc +0x3c:  call   082f0d80 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0xb04>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0xb04
082e67c1 +0x41:  mov    0xc(%ebp),%eax
082e67c4 +0x44:  mov    %eax,(%esp)
082e67c7 +0x47:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
082e67cc +0x4c:  mov    %eax,(%esp)
082e67cf +0x4f:  call   080dd568 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xb1>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xb1
082e67d4 +0x54:  movl   $0x1,0x4(%esp)
082e67dc +0x5c:  mov    %eax,(%esp)
082e67df +0x5f:  call   0833c28a <_ZN13user_creature12CCreatureMgr11TurnStomachEb>  ; user_creature::CCreatureMgr::TurnStomach(bool)
082e67e4 +0x64:  leave
082e67e5 +0x65:  ret
```

## 反编译 C

```c
// pvp_assault::CAssaulter::_PrepareAssault @ 0x82e6780

/* pvp_assault::CAssaulter::_PrepareAssault(CUser*) */

void __thiscall pvp_assault::CAssaulter::_PrepareAssault(CAssaulter *this,CUser *param_1)

{
  int iVar1;
  uint uVar2;
  CInventory *this_00;
  CCreatureMgr *this_01;
  
  iVar1 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (iVar1 != 0) {
    uVar2 = CUserCharacInfo::getCurCharacStamina((CUserCharacInfo *)param_1);
    *(uint *)(this + 0x10) = uVar2 & 0xff;
    CUserCharacInfo::SetCurCharacLeaveTimeout((CUserCharacInfo *)param_1,false);
    this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    this_01 = (CCreatureMgr *)CInventory::GetCreatureMgrW(this_00);
    user_creature::CCreatureMgr::TurnStomach(this_01,true);
  }
  return;
}
```
