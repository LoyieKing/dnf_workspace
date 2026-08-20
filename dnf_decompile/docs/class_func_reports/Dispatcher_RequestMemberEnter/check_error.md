# check_error

`_ZN29Dispatcher_RequestMemberEnter11check_errorEP5CUserR8MSG_BASE`

`Dispatcher_RequestMemberEnter::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_RequestMemberEnter` | `0x081cb82a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081cb82a  _ZN29Dispatcher_RequestMemberEnter11check_errorEP5CUserR8MSG_BASE
#           Dispatcher_RequestMemberEnter::check_error(CUser*, MSG_BASE&)
# range [0x081cb82a, 0x081cb873]
081cb82a +0x00:  push   %ebp
081cb82b +0x01:  mov    %esp,%ebp
081cb82d +0x03:  sub    $0x28,%esp
081cb830 +0x06:  mov    0xc(%ebp),%eax
081cb833 +0x09:  mov    %eax,(%esp)
081cb836 +0x0c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081cb83b +0x11:  cmp    $0x2,%eax
081cb83e +0x14:  jle    081cb84f <+0x25>
081cb840 +0x16:  mov    0xc(%ebp),%eax
081cb843 +0x19:  mov    %eax,(%esp)
081cb846 +0x1c:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
081cb84b +0x21:  test   %eax,%eax
081cb84d +0x23:  jne    081cb856 <+0x2c>
081cb84f +0x25:  mov    $0x1,%eax
081cb854 +0x2a:  jmp    081cb85b <+0x31>
081cb856 +0x2c:  mov    $0x0,%eax
081cb85b +0x31:  test   %al,%al
081cb85d +0x33:  je     081cb866 <+0x3c>
081cb85f +0x35:  mov    $0xffffffff,%eax
081cb864 +0x3a:  jmp    081cb871 <+0x47>
081cb866 +0x3c:  mov    0x10(%ebp),%eax
081cb869 +0x3f:  mov    %eax,-0xc(%ebp)
081cb86c +0x42:  mov    $0x0,%eax
081cb871 +0x47:  leave
081cb872 +0x48:  ret
081cb873 +0x49:  nop
```

## 反编译 C

```c
// Dispatcher_RequestMemberEnter::check_error @ 0x81cb82a

/* Dispatcher_RequestMemberEnter::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_RequestMemberEnter::check_error(CUser *param_1,MSG_BASE *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (2 < iVar2) {
    iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar2 != 0) {
      bVar1 = false;
      goto LAB_081cb85b;
    }
  }
  bVar1 = true;
LAB_081cb85b:
  if (bVar1) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
