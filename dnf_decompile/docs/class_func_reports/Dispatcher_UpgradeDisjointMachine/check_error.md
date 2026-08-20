# check_error

`_ZN33Dispatcher_UpgradeDisjointMachine11check_errorEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_UpgradeDisjointMachine::check_error(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_UpgradeDisjointMachine` | `0x081cff34` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081cff34  _ZN33Dispatcher_UpgradeDisjointMachine11check_errorEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_UpgradeDisjointMachine::check_error(CUser*, MSG_BASE&, ParamBase&)
# range [0x081cff34, 0x081cff93]
081cff34 +0x00:  push   %ebp
081cff35 +0x01:  mov    %esp,%ebp
081cff37 +0x03:  sub    $0x18,%esp
081cff3a +0x06:  mov    0xc(%ebp),%eax
081cff3d +0x09:  mov    %eax,(%esp)
081cff40 +0x0c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081cff45 +0x11:  cmp    $0x2,%eax
081cff48 +0x14:  jle    081cff59 <+0x25>
081cff4a +0x16:  mov    0xc(%ebp),%eax
081cff4d +0x19:  mov    %eax,(%esp)
081cff50 +0x1c:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
081cff55 +0x21:  test   %eax,%eax
081cff57 +0x23:  jne    081cff60 <+0x2c>
081cff59 +0x25:  mov    $0x1,%eax
081cff5e +0x2a:  jmp    081cff65 <+0x31>
081cff60 +0x2c:  mov    $0x0,%eax
081cff65 +0x31:  test   %al,%al
081cff67 +0x33:  je     081cff70 <+0x3c>
081cff69 +0x35:  mov    $0xffffffff,%eax
081cff6e +0x3a:  jmp    081cff91 <+0x5d>
081cff70 +0x3c:  mov    0xc(%ebp),%eax
081cff73 +0x3f:  mov    %eax,(%esp)
081cff76 +0x42:  call   0822f894 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f3e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f3e
081cff7b +0x47:  cmp    $0x3,%eax
081cff7e +0x4a:  setne  %al
081cff81 +0x4d:  test   %al,%al
081cff83 +0x4f:  je     081cff8c <+0x58>
081cff85 +0x51:  mov    $0xfffffffe,%eax
081cff8a +0x56:  jmp    081cff91 <+0x5d>
081cff8c +0x58:  mov    $0x0,%eax
081cff91 +0x5d:  leave
081cff92 +0x5e:  ret
081cff93 +0x5f:  nop
```

## 反编译 C

```c
// Dispatcher_UpgradeDisjointMachine::check_error @ 0x81cff34

/* Dispatcher_UpgradeDisjointMachine::check_error(CUser*, MSG_BASE&, ParamBase&) */

undefined4
Dispatcher_UpgradeDisjointMachine::check_error(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (2 < iVar2) {
    iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar2 != 0) {
      bVar1 = false;
      goto LAB_081cff65;
    }
  }
  bVar1 = true;
LAB_081cff65:
  if (bVar1) {
    uVar3 = 0xffffffff;
  }
  else {
    iVar2 = CUserCharacInfo::GetCurCharacExpertJobType((CUserCharacInfo *)param_2);
    if (iVar2 == 3) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0xfffffffe;
    }
  }
  return uVar3;
}
```
