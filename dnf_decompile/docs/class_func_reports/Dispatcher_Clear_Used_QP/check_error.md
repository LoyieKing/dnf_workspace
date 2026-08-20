# check_error

`_ZN24Dispatcher_Clear_Used_QP11check_errorEP5CUserR8MSG_BASE`

`Dispatcher_Clear_Used_QP::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Clear_Used_QP` | `0x081d6746` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d6746  _ZN24Dispatcher_Clear_Used_QP11check_errorEP5CUserR8MSG_BASE
#           Dispatcher_Clear_Used_QP::check_error(CUser*, MSG_BASE&)
# range [0x081d6746, 0x081d677b]
081d6746 +0x00:  push   %ebp
081d6747 +0x01:  mov    %esp,%ebp
081d6749 +0x03:  sub    $0x18,%esp
081d674c +0x06:  cmpl   $0x0,0xc(%ebp)
081d6750 +0x0a:  jne    081d6759 <+0x13>
081d6752 +0x0c:  mov    $0xffffffff,%eax
081d6757 +0x11:  jmp    081d677a <+0x34>
081d6759 +0x13:  mov    0xc(%ebp),%eax
081d675c +0x16:  mov    %eax,(%esp)
081d675f +0x19:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081d6764 +0x1e:  cmp    $0x3,%eax
081d6767 +0x21:  setne  %al
081d676a +0x24:  test   %al,%al
081d676c +0x26:  je     081d6775 <+0x2f>
081d676e +0x28:  mov    $0x63,%eax
081d6773 +0x2d:  jmp    081d677a <+0x34>
081d6775 +0x2f:  mov    $0x0,%eax
081d677a +0x34:  leave
081d677b +0x35:  ret
```

## 反编译 C

```c
// Dispatcher_Clear_Used_QP::check_error @ 0x81d6746

/* Dispatcher_Clear_Used_QP::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_Clear_Used_QP::check_error(CUser *param_1,MSG_BASE *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 == (MSG_BASE *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = CUser::get_state((CUser *)param_2);
    if (iVar2 == 3) {
      uVar1 = 0;
    }
    else {
      uVar1 = 99;
    }
  }
  return uVar1;
}
```
