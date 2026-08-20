# check_error

`_ZN38Dispatcher_Direct_Entrance_Quick_Party11check_errorEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_Direct_Entrance_Quick_Party::check_error(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Direct_Entrance_Quick_Party` | `0x081de2e6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081de2e6  _ZN38Dispatcher_Direct_Entrance_Quick_Party11check_errorEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_Direct_Entrance_Quick_Party::check_error(CUser*, MSG_BASE&, ParamBase&)
# range [0x081de2e6, 0x081de329]
081de2e6 +0x00:  push   %ebp
081de2e7 +0x01:  mov    %esp,%ebp
081de2e9 +0x03:  sub    $0x18,%esp
081de2ec +0x06:  mov    0xc(%ebp),%eax
081de2ef +0x09:  mov    %eax,(%esp)
081de2f2 +0x0c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081de2f7 +0x11:  cmp    $0x3,%eax
081de2fa +0x14:  jle    081de30b <+0x25>
081de2fc +0x16:  mov    0xc(%ebp),%eax
081de2ff +0x19:  mov    %eax,(%esp)
081de302 +0x1c:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
081de307 +0x21:  test   %eax,%eax
081de309 +0x23:  jne    081de312 <+0x2c>
081de30b +0x25:  mov    $0x1,%eax
081de310 +0x2a:  jmp    081de317 <+0x31>
081de312 +0x2c:  mov    $0x0,%eax
081de317 +0x31:  test   %al,%al
081de319 +0x33:  je     081de322 <+0x3c>
081de31b +0x35:  mov    $0xffffffff,%eax
081de320 +0x3a:  jmp    081de327 <+0x41>
081de322 +0x3c:  mov    $0x0,%eax
081de327 +0x41:  leave
081de328 +0x42:  ret
081de329 +0x43:  nop
```

## 反编译 C

```c
// Dispatcher_Direct_Entrance_Quick_Party::check_error @ 0x81de2e6

/* Dispatcher_Direct_Entrance_Quick_Party::check_error(CUser*, MSG_BASE&, ParamBase&) */

undefined4
Dispatcher_Direct_Entrance_Quick_Party::check_error
          (CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (3 < iVar2) {
    iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar2 != 0) {
      bVar1 = false;
      goto LAB_081de317;
    }
  }
  bVar1 = true;
LAB_081de317:
  if (bVar1) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
