# check_error

`_ZN29Dispatcher_Cancel_Quick_Party11check_errorEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_Cancel_Quick_Party::check_error(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Cancel_Quick_Party` | `0x081de1b4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081de1b4  _ZN29Dispatcher_Cancel_Quick_Party11check_errorEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_Cancel_Quick_Party::check_error(CUser*, MSG_BASE&, ParamBase&)
# range [0x081de1b4, 0x081de1f7]
081de1b4 +0x00:  push   %ebp
081de1b5 +0x01:  mov    %esp,%ebp
081de1b7 +0x03:  sub    $0x18,%esp
081de1ba +0x06:  mov    0xc(%ebp),%eax
081de1bd +0x09:  mov    %eax,(%esp)
081de1c0 +0x0c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081de1c5 +0x11:  cmp    $0x3,%eax
081de1c8 +0x14:  jle    081de1d9 <+0x25>
081de1ca +0x16:  mov    0xc(%ebp),%eax
081de1cd +0x19:  mov    %eax,(%esp)
081de1d0 +0x1c:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
081de1d5 +0x21:  test   %eax,%eax
081de1d7 +0x23:  jne    081de1e0 <+0x2c>
081de1d9 +0x25:  mov    $0x1,%eax
081de1de +0x2a:  jmp    081de1e5 <+0x31>
081de1e0 +0x2c:  mov    $0x0,%eax
081de1e5 +0x31:  test   %al,%al
081de1e7 +0x33:  je     081de1f0 <+0x3c>
081de1e9 +0x35:  mov    $0xffffffff,%eax
081de1ee +0x3a:  jmp    081de1f5 <+0x41>
081de1f0 +0x3c:  mov    $0x0,%eax
081de1f5 +0x41:  leave
081de1f6 +0x42:  ret
081de1f7 +0x43:  nop
```

## 反编译 C

```c
// Dispatcher_Cancel_Quick_Party::check_error @ 0x81de1b4

/* Dispatcher_Cancel_Quick_Party::check_error(CUser*, MSG_BASE&, ParamBase&) */

undefined4
Dispatcher_Cancel_Quick_Party::check_error(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (3 < iVar2) {
    iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar2 != 0) {
      bVar1 = false;
      goto LAB_081de1e5;
    }
  }
  bVar1 = true;
LAB_081de1e5:
  if (bVar1) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
