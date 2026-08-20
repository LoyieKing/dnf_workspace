# HadesHistoryLog

`_ZN15cUserHistoryLog15HadesHistoryLogEjjjj`

`cUserHistoryLog::HadesHistoryLog(unsigned int, unsigned int, unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08685418` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08685418  _ZN15cUserHistoryLog15HadesHistoryLogEjjjj
#           cUserHistoryLog::HadesHistoryLog(unsigned int, unsigned int, unsigned int, unsigned int)
# range [0x08685418, 0x08685451]
08685418 +0x00:  push   %ebp
08685419 +0x01:  mov    %esp,%ebp
0868541b +0x03:  sub    $0x28,%esp
0868541e +0x06:  mov    0x8(%ebp),%eax
08685421 +0x09:  mov    (%eax),%eax
08685423 +0x0b:  mov    0x18(%ebp),%edx
08685426 +0x0e:  mov    %edx,0x14(%esp)
0868542a +0x12:  mov    0x14(%ebp),%edx
0868542d +0x15:  mov    %edx,0x10(%esp)
08685431 +0x19:  mov    0x10(%ebp),%edx
08685434 +0x1c:  mov    %edx,0xc(%esp)
08685438 +0x20:  mov    0xc(%ebp),%edx
0868543b +0x23:  mov    %edx,0x8(%esp)
0868543f +0x27:  movl   $"Hades,%d,%d,%d,%d",0x4(%esp)
08685447 +0x2f:  mov    %eax,(%esp)
0868544a +0x32:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
0868544f +0x37:  leave
08685450 +0x38:  ret
08685451 +0x39:  nop
```

## 反编译 C

```c
// cUserHistoryLog::HadesHistoryLog @ 0x8685418

/* cUserHistoryLog::HadesHistoryLog(unsigned int, unsigned int, unsigned int, unsigned int) */

void __thiscall
cUserHistoryLog::HadesHistoryLog
          (cUserHistoryLog *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  CUser::LogHistory(*(CUser **)this,"Hades,%d,%d,%d,%d",param_1,param_2,param_3,param_4);
  return;
}
```
