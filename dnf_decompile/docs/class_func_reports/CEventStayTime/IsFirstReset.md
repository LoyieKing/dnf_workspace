# IsFirstReset

`_ZN14CEventStayTime12IsFirstResetEv`

`CEventStayTime::IsFirstReset()`

| 类 | 地址 |
|---|---|
| `CEventStayTime` | `0x0816bed4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816bed4  _ZN14CEventStayTime12IsFirstResetEv
#           CEventStayTime::IsFirstReset()
# range [0x0816bed4, 0x0816bef9]
0816bed4 +0x00:  push   %ebp
0816bed5 +0x01:  mov    %esp,%ebp
0816bed7 +0x03:  mov    0x8(%ebp),%eax
0816beda +0x06:  movzbl 0x9(%eax),%eax
0816bede +0x0a:  test   %al,%al
0816bee0 +0x0c:  je     0816bef0 <+0x1c>
0816bee2 +0x0e:  mov    0x8(%ebp),%eax
0816bee5 +0x11:  movb   $0x0,0x9(%eax)
0816bee9 +0x15:  mov    $0x1,%eax
0816beee +0x1a:  jmp    0816bef7 <+0x23>
0816bef0 +0x1c:  mov    0x8(%ebp),%eax
0816bef3 +0x1f:  movzbl 0x9(%eax),%eax
0816bef7 +0x23:  pop    %ebp
0816bef8 +0x24:  ret
0816bef9 +0x25:  nop
```

## 反编译 C

```c
// CEventStayTime::IsFirstReset @ 0x816bed4

/* CEventStayTime::IsFirstReset() */

CEventStayTime __thiscall CEventStayTime::IsFirstReset(CEventStayTime *this)

{
  CEventStayTime CVar1;
  
  if (this[9] == (CEventStayTime)0x0) {
    CVar1 = this[9];
  }
  else {
    this[9] = (CEventStayTime)0x0;
    CVar1 = (CEventStayTime)0x1;
  }
  return CVar1;
}
```
