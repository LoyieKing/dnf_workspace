# getIntervalStayTime

`_ZN14CEventStayTime19getIntervalStayTimeEv`

`CEventStayTime::getIntervalStayTime()`

| 类 | 地址 |
|---|---|
| `CEventStayTime` | `0x0816bec8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816bec8  _ZN14CEventStayTime19getIntervalStayTimeEv
#           CEventStayTime::getIntervalStayTime()
# range [0x0816bec8, 0x0816bed3]
0816bec8 +0x00:  push   %ebp
0816bec9 +0x01:  mov    %esp,%ebp
0816becb +0x03:  mov    0x8(%ebp),%eax
0816bece +0x06:  mov    0x10(%eax),%eax
0816bed1 +0x09:  pop    %ebp
0816bed2 +0x0a:  ret
0816bed3 +0x0b:  nop
```

## 反编译 C

```c
// CEventStayTime::getIntervalStayTime @ 0x816bec8

/* CEventStayTime::getIntervalStayTime() */

undefined4 __thiscall CEventStayTime::getIntervalStayTime(CEventStayTime *this)

{
  return *(undefined4 *)(this + 0x10);
}
```
