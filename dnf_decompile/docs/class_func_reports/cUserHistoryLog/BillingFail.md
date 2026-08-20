# BillingFail

`_ZN15cUserHistoryLog11BillingFailE17ENUM_BILLING_TYPEyiiPc`

`cUserHistoryLog::BillingFail(ENUM_BILLING_TYPE, unsigned long long, int, int, char*)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08685838` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08685838  _ZN15cUserHistoryLog11BillingFailE17ENUM_BILLING_TYPEyiiPc
#           cUserHistoryLog::BillingFail(ENUM_BILLING_TYPE, unsigned long long, int, int, char*)
# range [0x08685838, 0x0868589f]
08685838 +0x00:  push   %ebp
08685839 +0x01:  mov    %esp,%ebp
0868583b +0x03:  push   %ebx
0868583c +0x04:  sub    $0x34,%esp
0868583f +0x07:  mov    0x10(%ebp),%eax
08685842 +0x0a:  mov    %eax,-0x10(%ebp)
08685845 +0x0d:  mov    0x14(%ebp),%eax
08685848 +0x10:  mov    %eax,-0xc(%ebp)
0868584b +0x13:  movl   $0x0,0x8(%esp)
08685853 +0x1b:  mov    -0x10(%ebp),%eax
08685856 +0x1e:  mov    -0xc(%ebp),%edx
08685859 +0x21:  mov    %eax,(%esp)
0868585c +0x24:  mov    %edx,0x4(%esp)
08685860 +0x28:  call   08109098 <_Z14NumberToStringyi>  ; NumberToString(unsigned long long, int)
08685865 +0x2d:  mov    0xc(%ebp),%ecx
08685868 +0x30:  mov    0x8(%ebp),%edx
0868586b +0x33:  mov    (%edx),%edx
0868586d +0x35:  mov    0x20(%ebp),%ebx
08685870 +0x38:  mov    %ebx,0x18(%esp)
08685874 +0x3c:  mov    0x1c(%ebp),%ebx
08685877 +0x3f:  mov    %ebx,0x14(%esp)
0868587b +0x43:  mov    0x18(%ebp),%ebx
0868587e +0x46:  mov    %ebx,0x10(%esp)
08685882 +0x4a:  mov    %eax,0xc(%esp)
08685886 +0x4e:  mov    %ecx,0x8(%esp)
0868588a +0x52:  movl   $"BILLING, Fail,%d,%s,%d,%d,%s",0x4(%esp)
08685892 +0x5a:  mov    %edx,(%esp)
08685895 +0x5d:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
0868589a +0x62:  add    $0x34,%esp
0868589d +0x65:  pop    %ebx
0868589e +0x66:  pop    %ebp
0868589f +0x67:  ret
```

## 反编译 C

```c
// cUserHistoryLog::BillingFail @ 0x8685838

/* cUserHistoryLog::BillingFail(ENUM_BILLING_TYPE, unsigned long long, int, int, char*) */

void cUserHistoryLog::BillingFail
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  
  uVar1 = NumberToString(CONCAT44(param_4,param_3),0);
  CUser::LogHistory((CUser *)*param_1,"BILLING, Fail,%d,%s,%d,%d,%s",param_2,uVar1,param_5,param_6,
                    param_7);
  return;
}
```
