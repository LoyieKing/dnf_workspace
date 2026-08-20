# check_error

`_ZN27Dispatcher_MemberEnterReply11check_errorEP5CUserR8MSG_BASE`

`Dispatcher_MemberEnterReply::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_MemberEnterReply` | `0x081cb9f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081cb9f0  _ZN27Dispatcher_MemberEnterReply11check_errorEP5CUserR8MSG_BASE
#           Dispatcher_MemberEnterReply::check_error(CUser*, MSG_BASE&)
# range [0x081cb9f0, 0x081cba33]
081cb9f0 +0x00:  push   %ebp
081cb9f1 +0x01:  mov    %esp,%ebp
081cb9f3 +0x03:  sub    $0x18,%esp
081cb9f6 +0x06:  mov    0xc(%ebp),%eax
081cb9f9 +0x09:  mov    %eax,(%esp)
081cb9fc +0x0c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081cba01 +0x11:  cmp    $0x2,%eax
081cba04 +0x14:  jle    081cba15 <+0x25>
081cba06 +0x16:  mov    0xc(%ebp),%eax
081cba09 +0x19:  mov    %eax,(%esp)
081cba0c +0x1c:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
081cba11 +0x21:  test   %eax,%eax
081cba13 +0x23:  jne    081cba1c <+0x2c>
081cba15 +0x25:  mov    $0x1,%eax
081cba1a +0x2a:  jmp    081cba21 <+0x31>
081cba1c +0x2c:  mov    $0x0,%eax
081cba21 +0x31:  test   %al,%al
081cba23 +0x33:  je     081cba2c <+0x3c>
081cba25 +0x35:  mov    $0xffffffff,%eax
081cba2a +0x3a:  jmp    081cba31 <+0x41>
081cba2c +0x3c:  mov    $0x0,%eax
081cba31 +0x41:  leave
081cba32 +0x42:  ret
081cba33 +0x43:  nop
```

## 反编译 C

```c
// Dispatcher_MemberEnterReply::check_error @ 0x81cb9f0

/* Dispatcher_MemberEnterReply::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_MemberEnterReply::check_error(CUser *param_1,MSG_BASE *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (2 < iVar2) {
    iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar2 != 0) {
      bVar1 = false;
      goto LAB_081cba21;
    }
  }
  bVar1 = true;
LAB_081cba21:
  if (bVar1) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
