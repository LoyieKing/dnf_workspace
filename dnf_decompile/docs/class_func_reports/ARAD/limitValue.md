# limitValue

`_ZN4ARAD10limitValueEiii`

`ARAD::limitValue(int, int, int)`

| 类 | 地址 |
|---|---|
| `ARAD` | `0x081978b2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081978b2  _ZN4ARAD10limitValueEiii
#           ARAD::limitValue(int, int, int)
# range [0x081978b2, 0x081978dc]
081978b2 +0x00:  push   %ebp
081978b3 +0x01:  mov    %esp,%ebp
081978b5 +0x03:  sub    $0x18,%esp
081978b8 +0x06:  lea    0xc(%ebp),%eax
081978bb +0x09:  mov    %eax,0x4(%esp)
081978bf +0x0d:  lea    0x8(%ebp),%eax
081978c2 +0x10:  mov    %eax,(%esp)
081978c5 +0x13:  call   0808e218 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x88>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x88
081978ca +0x18:  lea    0x10(%ebp),%edx
081978cd +0x1b:  mov    %edx,0x4(%esp)
081978d1 +0x1f:  mov    %eax,(%esp)
081978d4 +0x22:  call   080df90e <_GLOBAL__I__ZN10CaptchaGenC2Ev+0x12a>  ; global constructors keyed to CaptchaGen::CaptchaGen()+0x12a
081978d9 +0x27:  mov    (%eax),%eax
081978db +0x29:  leave
081978dc +0x2a:  ret
```

## 反编译 C

```c
// ARAD::limitValue @ 0x81978b2

/* ARAD::limitValue(int, int, int) */

int ARAD::limitValue(int param_1,int param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = std::max<int>(&param_1,&param_2);
  piVar1 = std::min<int>(piVar1,&param_3);
  return *piVar1;
}
```
