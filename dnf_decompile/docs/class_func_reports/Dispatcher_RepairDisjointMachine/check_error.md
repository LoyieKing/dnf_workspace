# check_error

`_ZN32Dispatcher_RepairDisjointMachine11check_errorEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_RepairDisjointMachine::check_error(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_RepairDisjointMachine` | `0x081cfddc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081cfddc  _ZN32Dispatcher_RepairDisjointMachine11check_errorEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_RepairDisjointMachine::check_error(CUser*, MSG_BASE&, ParamBase&)
# range [0x081cfddc, 0x081cfe3b]
081cfddc +0x00:  push   %ebp
081cfddd +0x01:  mov    %esp,%ebp
081cfddf +0x03:  sub    $0x18,%esp
081cfde2 +0x06:  mov    0xc(%ebp),%eax
081cfde5 +0x09:  mov    %eax,(%esp)
081cfde8 +0x0c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081cfded +0x11:  cmp    $0x2,%eax
081cfdf0 +0x14:  jle    081cfe01 <+0x25>
081cfdf2 +0x16:  mov    0xc(%ebp),%eax
081cfdf5 +0x19:  mov    %eax,(%esp)
081cfdf8 +0x1c:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
081cfdfd +0x21:  test   %eax,%eax
081cfdff +0x23:  jne    081cfe08 <+0x2c>
081cfe01 +0x25:  mov    $0x1,%eax
081cfe06 +0x2a:  jmp    081cfe0d <+0x31>
081cfe08 +0x2c:  mov    $0x0,%eax
081cfe0d +0x31:  test   %al,%al
081cfe0f +0x33:  je     081cfe18 <+0x3c>
081cfe11 +0x35:  mov    $0xffffffff,%eax
081cfe16 +0x3a:  jmp    081cfe39 <+0x5d>
081cfe18 +0x3c:  mov    0xc(%ebp),%eax
081cfe1b +0x3f:  mov    %eax,(%esp)
081cfe1e +0x42:  call   0822f894 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f3e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f3e
081cfe23 +0x47:  cmp    $0x3,%eax
081cfe26 +0x4a:  setne  %al
081cfe29 +0x4d:  test   %al,%al
081cfe2b +0x4f:  je     081cfe34 <+0x58>
081cfe2d +0x51:  mov    $0xfffffffe,%eax
081cfe32 +0x56:  jmp    081cfe39 <+0x5d>
081cfe34 +0x58:  mov    $0x0,%eax
081cfe39 +0x5d:  leave
081cfe3a +0x5e:  ret
081cfe3b +0x5f:  nop
```

## 反编译 C

```c
// Dispatcher_RepairDisjointMachine::check_error @ 0x81cfddc

/* Dispatcher_RepairDisjointMachine::check_error(CUser*, MSG_BASE&, ParamBase&) */

undefined4
Dispatcher_RepairDisjointMachine::check_error(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (2 < iVar2) {
    iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar2 != 0) {
      bVar1 = false;
      goto LAB_081cfe0d;
    }
  }
  bVar1 = true;
LAB_081cfe0d:
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
