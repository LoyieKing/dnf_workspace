# ClearUsedQP

`_ZN15cUserHistoryLog11ClearUsedQPEiiii`

`cUserHistoryLog::ClearUsedQP(int, int, int, int)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x086888be` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086888be  _ZN15cUserHistoryLog11ClearUsedQPEiiii
#           cUserHistoryLog::ClearUsedQP(int, int, int, int)
# range [0x086888be, 0x086888f7]
086888be +0x00:  push   %ebp
086888bf +0x01:  mov    %esp,%ebp
086888c1 +0x03:  sub    $0x28,%esp
086888c4 +0x06:  mov    0x8(%ebp),%eax
086888c7 +0x09:  mov    (%eax),%eax
086888c9 +0x0b:  mov    0x18(%ebp),%edx
086888cc +0x0e:  mov    %edx,0x14(%esp)
086888d0 +0x12:  mov    0x14(%ebp),%edx
086888d3 +0x15:  mov    %edx,0x10(%esp)
086888d7 +0x19:  mov    0x10(%ebp),%edx
086888da +0x1c:  mov    %edx,0xc(%esp)
086888de +0x20:  mov    0xc(%ebp),%edx
086888e1 +0x23:  mov    %edx,0x8(%esp)
086888e5 +0x27:  movl   $"ClearQP,%d,%d,%d,%d",0x4(%esp)
086888ed +0x2f:  mov    %eax,(%esp)
086888f0 +0x32:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
086888f5 +0x37:  leave
086888f6 +0x38:  ret
086888f7 +0x39:  nop
```

## 反编译 C

```c
// cUserHistoryLog::ClearUsedQP @ 0x86888be

/* cUserHistoryLog::ClearUsedQP(int, int, int, int) */

void __thiscall
cUserHistoryLog::ClearUsedQP(cUserHistoryLog *this,int param_1,int param_2,int param_3,int param_4)

{
  CUser::LogHistory(*(CUser **)this,"ClearQP,%d,%d,%d,%d",param_1,param_2,param_3,param_4);
  return;
}
```
