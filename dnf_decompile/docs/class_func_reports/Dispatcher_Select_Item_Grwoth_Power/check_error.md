# check_error

`_ZN35Dispatcher_Select_Item_Grwoth_Power11check_errorEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_Select_Item_Grwoth_Power::check_error(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Select_Item_Grwoth_Power` | `0x081db580` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081db580  _ZN35Dispatcher_Select_Item_Grwoth_Power11check_errorEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_Select_Item_Grwoth_Power::check_error(CUser*, MSG_BASE&, ParamBase&)
# range [0x081db580, 0x081db60b]
081db580 +0x00:  push   %ebp
081db581 +0x01:  mov    %esp,%ebp
081db583 +0x03:  push   %esi
081db584 +0x04:  push   %ebx
081db585 +0x05:  sub    $0x10,%esp
081db588 +0x08:  mov    0xc(%ebp),%eax
081db58b +0x0b:  mov    %eax,(%esp)
081db58e +0x0e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081db593 +0x13:  cmp    $0x2,%eax
081db596 +0x16:  jle    081db5a7 <+0x27>
081db598 +0x18:  mov    0xc(%ebp),%eax
081db59b +0x1b:  mov    %eax,(%esp)
081db59e +0x1e:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
081db5a3 +0x23:  test   %eax,%eax
081db5a5 +0x25:  jne    081db5ae <+0x2e>
081db5a7 +0x27:  mov    $0x1,%eax
081db5ac +0x2c:  jmp    081db5b3 <+0x33>
081db5ae +0x2e:  mov    $0x0,%eax
081db5b3 +0x33:  test   %al,%al
081db5b5 +0x35:  je     081db5be <+0x3e>
081db5b7 +0x37:  mov    $0xffffffff,%eax
081db5bc +0x3c:  jmp    081db604 <+0x84>
081db5be +0x3e:  mov    0xc(%ebp),%eax
081db5c1 +0x41:  mov    %eax,(%esp)
081db5c4 +0x44:  call   0822fb00 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x51aa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x51aa
081db5c9 +0x49:  movzbl %al,%esi
081db5cc +0x4c:  mov    0xc(%ebp),%eax
081db5cf +0x4f:  mov    %eax,(%esp)
081db5d2 +0x52:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
081db5d7 +0x57:  mov    %eax,%ebx
081db5d9 +0x59:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081db5de +0x5e:  add    $0x8710,%eax
081db5e3 +0x63:  mov    %ebx,0x4(%esp)
081db5e7 +0x67:  mov    %eax,(%esp)
081db5ea +0x6a:  call   0822afd6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x680>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x680
081db5ef +0x6f:  cmp    %eax,%esi
081db5f1 +0x71:  setge  %al
081db5f4 +0x74:  test   %al,%al
081db5f6 +0x76:  je     081db5ff <+0x7f>
081db5f8 +0x78:  mov    $0xffffffff,%eax
081db5fd +0x7d:  jmp    081db604 <+0x84>
081db5ff +0x7f:  mov    $0x0,%eax
081db604 +0x84:  add    $0x10,%esp
081db607 +0x87:  pop    %ebx
081db608 +0x88:  pop    %esi
081db609 +0x89:  pop    %ebp
081db60a +0x8a:  ret
081db60b +0x8b:  nop
```

## 反编译 C

```c
// Dispatcher_Select_Item_Grwoth_Power::check_error @ 0x81db580

/* Dispatcher_Select_Item_Grwoth_Power::check_error(CUser*, MSG_BASE&, ParamBase&) */

undefined4
Dispatcher_Select_Item_Grwoth_Power::check_error
          (CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (2 < iVar2) {
    iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar2 != 0) {
      bVar1 = false;
      goto LAB_081db5b3;
    }
  }
  bVar1 = true;
LAB_081db5b3:
  if (bVar1) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar4 = CUserCharacInfo::get_growth_power_reward((CUserCharacInfo *)param_2);
    iVar2 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_2);
    iVar5 = G_CDataManager();
    iVar2 = STGrowthPowerData::get_break_away_section_low_level
                      ((STGrowthPowerData *)(iVar5 + 0x8710),iVar2);
    if ((int)(uVar4 & 0xff) < iVar2) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0xffffffff;
    }
  }
  return uVar3;
}
```
