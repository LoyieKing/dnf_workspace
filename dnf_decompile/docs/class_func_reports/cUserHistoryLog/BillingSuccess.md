# BillingSuccess

`_ZN15cUserHistoryLog14BillingSuccessE17ENUM_BILLING_TYPEyi`

`cUserHistoryLog::BillingSuccess(ENUM_BILLING_TYPE, unsigned long long, int)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x086858a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086858a0  _ZN15cUserHistoryLog14BillingSuccessE17ENUM_BILLING_TYPEyi
#           cUserHistoryLog::BillingSuccess(ENUM_BILLING_TYPE, unsigned long long, int)
# range [0x086858a0, 0x0868593b]
086858a0 +0x00:  push   %ebp
086858a1 +0x01:  mov    %esp,%ebp
086858a3 +0x03:  push   %ebx
086858a4 +0x04:  sub    $0x34,%esp
086858a7 +0x07:  mov    0x10(%ebp),%eax
086858aa +0x0a:  mov    %eax,-0x10(%ebp)
086858ad +0x0d:  mov    0x14(%ebp),%eax
086858b0 +0x10:  mov    %eax,-0xc(%ebp)
086858b3 +0x13:  cmpl   $0x3,0xc(%ebp)
086858b7 +0x17:  jne    086858f5 <+0x55>
086858b9 +0x19:  movl   $0x0,0x8(%esp)
086858c1 +0x21:  mov    -0x10(%ebp),%eax
086858c4 +0x24:  mov    -0xc(%ebp),%edx
086858c7 +0x27:  mov    %eax,(%esp)
086858ca +0x2a:  mov    %edx,0x4(%esp)
086858ce +0x2e:  call   08109098 <_Z14NumberToStringyi>  ; NumberToString(unsigned long long, int)
086858d3 +0x33:  mov    0xc(%ebp),%ecx
086858d6 +0x36:  mov    0x8(%ebp),%edx
086858d9 +0x39:  mov    (%edx),%edx
086858db +0x3b:  mov    %eax,0xc(%esp)
086858df +0x3f:  mov    %ecx,0x8(%esp)
086858e3 +0x43:  movl   $"BILLING, Success,%d,%s",0x4(%esp)
086858eb +0x4b:  mov    %edx,(%esp)
086858ee +0x4e:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
086858f3 +0x53:  jmp    08685936 <+0x96>
086858f5 +0x55:  movl   $0x0,0x8(%esp)
086858fd +0x5d:  mov    -0x10(%ebp),%eax
08685900 +0x60:  mov    -0xc(%ebp),%edx
08685903 +0x63:  mov    %eax,(%esp)
08685906 +0x66:  mov    %edx,0x4(%esp)
0868590a +0x6a:  call   08109098 <_Z14NumberToStringyi>  ; NumberToString(unsigned long long, int)
0868590f +0x6f:  mov    0xc(%ebp),%ecx
08685912 +0x72:  mov    0x8(%ebp),%edx
08685915 +0x75:  mov    (%edx),%edx
08685917 +0x77:  mov    0x18(%ebp),%ebx
0868591a +0x7a:  mov    %ebx,0x10(%esp)
0868591e +0x7e:  mov    %eax,0xc(%esp)
08685922 +0x82:  mov    %ecx,0x8(%esp)
08685926 +0x86:  movl   $"BILLING, Success,%d,%d,%d",0x4(%esp)
0868592e +0x8e:  mov    %edx,(%esp)
08685931 +0x91:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08685936 +0x96:  add    $0x34,%esp
08685939 +0x99:  pop    %ebx
0868593a +0x9a:  pop    %ebp
0868593b +0x9b:  ret
```

## 反编译 C

```c
// cUserHistoryLog::BillingSuccess @ 0x86858a0

/* cUserHistoryLog::BillingSuccess(ENUM_BILLING_TYPE, unsigned long long, int) */

void cUserHistoryLog::BillingSuccess
               (undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  undefined4 uVar1;
  
  if (param_2 == 3) {
    uVar1 = NumberToString(CONCAT44(param_4,param_3),0);
    CUser::LogHistory((CUser *)*param_1,"BILLING, Success,%d,%s",3,uVar1);
  }
  else {
    uVar1 = NumberToString(CONCAT44(param_4,param_3),0);
    CUser::LogHistory((CUser *)*param_1,"BILLING, Success,%d,%d,%d",param_2,uVar1,param_5);
  }
  return;
}
```
