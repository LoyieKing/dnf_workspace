# CPowerWarLog

`_ZN12CPowerWarLogC1Ev`

`CPowerWarLog::CPowerWarLog()`

| 类 | 地址 |
|---|---|
| `CPowerWarLog` | `0x0848021e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0848021e  _ZN12CPowerWarLogC1Ev
#           CPowerWarLog::CPowerWarLog()
# range [0x0848021e, 0x08480231]
0848021e +0x00:  push   %ebp
0848021f +0x01:  mov    %esp,%ebp
08480221 +0x03:  sub    $0x18,%esp
08480224 +0x06:  mov    0x8(%ebp),%eax
08480227 +0x09:  mov    %eax,(%esp)
0848022a +0x0c:  call   08480232 <_ZN12CPowerWarLog5ResetEv>  ; CPowerWarLog::Reset()
0848022f +0x11:  leave
08480230 +0x12:  ret
08480231 +0x13:  nop
```

## 反编译 C

```c
// CPowerWarLog::CPowerWarLog @ 0x848021e

/* CPowerWarLog::CPowerWarLog() */

void __thiscall CPowerWarLog::CPowerWarLog(CPowerWarLog *this)

{
  Reset(this);
  return;
}
```
