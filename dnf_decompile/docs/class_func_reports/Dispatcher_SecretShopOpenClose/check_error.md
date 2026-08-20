# check_error

`_ZN30Dispatcher_SecretShopOpenClose11check_errorEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_SecretShopOpenClose::check_error(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_SecretShopOpenClose` | `0x081d288a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d288a  _ZN30Dispatcher_SecretShopOpenClose11check_errorEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_SecretShopOpenClose::check_error(CUser*, MSG_BASE&, ParamBase&)
# range [0x081d288a, 0x081d28b3]
081d288a +0x00:  push   %ebp
081d288b +0x01:  mov    %esp,%ebp
081d288d +0x03:  sub    $0x18,%esp
081d2890 +0x06:  mov    0xc(%ebp),%eax
081d2893 +0x09:  mov    %eax,(%esp)
081d2896 +0x0c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081d289b +0x11:  cmp    $0x5,%eax
081d289e +0x14:  setne  %al
081d28a1 +0x17:  test   %al,%al
081d28a3 +0x19:  je     081d28ac <+0x22>
081d28a5 +0x1b:  mov    $0x7fffffff,%eax
081d28aa +0x20:  jmp    081d28b1 <+0x27>
081d28ac +0x22:  mov    $0x0,%eax
081d28b1 +0x27:  leave
081d28b2 +0x28:  ret
081d28b3 +0x29:  nop
```

## 反编译 C

```c
// Dispatcher_SecretShopOpenClose::check_error @ 0x81d288a

/* Dispatcher_SecretShopOpenClose::check_error(CUser*, MSG_BASE&, ParamBase&) */

undefined4
Dispatcher_SecretShopOpenClose::check_error(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (iVar1 == 5) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x7fffffff;
  }
  return uVar2;
}
```
