# check_error

`_ZN31Dispatcher_Register_Quick_Party11check_errorEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_Register_Quick_Party::check_error(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Register_Quick_Party` | `0x081ddfce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ddfce  _ZN31Dispatcher_Register_Quick_Party11check_errorEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_Register_Quick_Party::check_error(CUser*, MSG_BASE&, ParamBase&)
# range [0x081ddfce, 0x081de011]
081ddfce +0x00:  push   %ebp
081ddfcf +0x01:  mov    %esp,%ebp
081ddfd1 +0x03:  sub    $0x18,%esp
081ddfd4 +0x06:  mov    0xc(%ebp),%eax
081ddfd7 +0x09:  mov    %eax,(%esp)
081ddfda +0x0c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081ddfdf +0x11:  cmp    $0x3,%eax
081ddfe2 +0x14:  jle    081ddff3 <+0x25>
081ddfe4 +0x16:  mov    0xc(%ebp),%eax
081ddfe7 +0x19:  mov    %eax,(%esp)
081ddfea +0x1c:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
081ddfef +0x21:  test   %eax,%eax
081ddff1 +0x23:  jne    081ddffa <+0x2c>
081ddff3 +0x25:  mov    $0x1,%eax
081ddff8 +0x2a:  jmp    081ddfff <+0x31>
081ddffa +0x2c:  mov    $0x0,%eax
081ddfff +0x31:  test   %al,%al
081de001 +0x33:  je     081de00a <+0x3c>
081de003 +0x35:  mov    $0xffffffff,%eax
081de008 +0x3a:  jmp    081de00f <+0x41>
081de00a +0x3c:  mov    $0x0,%eax
081de00f +0x41:  leave
081de010 +0x42:  ret
081de011 +0x43:  nop
```

## 反编译 C

```c
// Dispatcher_Register_Quick_Party::check_error @ 0x81ddfce

/* Dispatcher_Register_Quick_Party::check_error(CUser*, MSG_BASE&, ParamBase&) */

undefined4
Dispatcher_Register_Quick_Party::check_error(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (3 < iVar2) {
    iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar2 != 0) {
      bVar1 = false;
      goto LAB_081ddfff;
    }
  }
  bVar1 = true;
LAB_081ddfff:
  if (bVar1) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
