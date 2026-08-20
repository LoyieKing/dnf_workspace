# check_error

`_ZN32Dispatcher_Client_Spec_Statistic11check_errorEP5CUserR8MSG_BASE`

`Dispatcher_Client_Spec_Statistic::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Client_Spec_Statistic` | `0x081ce75a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ce75a  _ZN32Dispatcher_Client_Spec_Statistic11check_errorEP5CUserR8MSG_BASE
#           Dispatcher_Client_Spec_Statistic::check_error(CUser*, MSG_BASE&)
# range [0x081ce75a, 0x081ce793]
081ce75a +0x00:  push   %ebp
081ce75b +0x01:  mov    %esp,%ebp
081ce75d +0x03:  sub    $0x18,%esp
081ce760 +0x06:  cmpl   $0x0,0xc(%ebp)
081ce764 +0x0a:  jne    081ce78c <+0x32>
081ce766 +0x0c:  movl   $0x0,0xc(%esp)
081ce76e +0x14:  movl   $0x0,0x8(%esp)
081ce776 +0x1c:  movl   $&_ZZN32Dispatcher_Client_Spec_Statistic11check_errorEP5CUserR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081ce77e +0x24:  movl   $0x27fd,(%esp)
081ce785 +0x2b:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081ce78a +0x30:  jmp    081ce791 <+0x37>
081ce78c +0x32:  mov    $0x0,%eax
081ce791 +0x37:  leave
081ce792 +0x38:  ret
081ce793 +0x39:  nop
```

## 反编译 C

```c
// Dispatcher_Client_Spec_Statistic::check_error @ 0x81ce75a

/* Dispatcher_Client_Spec_Statistic::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_Client_Spec_Statistic::check_error(CUser *param_1,MSG_BASE *param_2)

{
  undefined4 uVar1;
  
  if (param_2 == (MSG_BASE *)0x0) {
    uVar1 = LineFunc(0x27fd,"int Dispatcher_Client_Spec_Statistic::check_error(CUser*, MSG_BASE&)",0
                     ,0);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
