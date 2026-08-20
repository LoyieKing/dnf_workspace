# RequestCleanPad

`_ZN15cUserHistoryLog15RequestCleanPadEjc`

`cUserHistoryLog::RequestCleanPad(unsigned int, char)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x086853e6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086853e6  _ZN15cUserHistoryLog15RequestCleanPadEjc
#           cUserHistoryLog::RequestCleanPad(unsigned int, char)
# range [0x086853e6, 0x08685417]
086853e6 +0x00:  push   %ebp
086853e7 +0x01:  mov    %esp,%ebp
086853e9 +0x03:  sub    $0x28,%esp
086853ec +0x06:  mov    0x10(%ebp),%eax
086853ef +0x09:  mov    %al,-0xc(%ebp)
086853f2 +0x0c:  movsbl -0xc(%ebp),%edx
086853f6 +0x10:  mov    0x8(%ebp),%eax
086853f9 +0x13:  mov    (%eax),%eax
086853fb +0x15:  mov    %edx,0xc(%esp)
086853ff +0x19:  mov    0xc(%ebp),%edx
08685402 +0x1c:  mov    %edx,0x8(%esp)
08685406 +0x20:  movl   $"CleanPad,%d,%d",0x4(%esp)
0868540e +0x28:  mov    %eax,(%esp)
08685411 +0x2b:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08685416 +0x30:  leave
08685417 +0x31:  ret
```

## 反编译 C

```c
// cUserHistoryLog::RequestCleanPad @ 0x86853e6

/* cUserHistoryLog::RequestCleanPad(unsigned int, char) */

void __thiscall cUserHistoryLog::RequestCleanPad(cUserHistoryLog *this,uint param_1,char param_2)

{
  CUser::LogHistory(*(CUser **)this,"CleanPad,%d,%d",param_1,(int)param_2);
  return;
}
```
