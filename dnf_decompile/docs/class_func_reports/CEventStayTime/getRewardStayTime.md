# getRewardStayTime

`_ZN14CEventStayTime17getRewardStayTimeEv`

`CEventStayTime::getRewardStayTime()`

| 类 | 地址 |
|---|---|
| `CEventStayTime` | `0x0816bebc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816bebc  _ZN14CEventStayTime17getRewardStayTimeEv
#           CEventStayTime::getRewardStayTime()
# range [0x0816bebc, 0x0816bec7]
0816bebc +0x00:  push   %ebp
0816bebd +0x01:  mov    %esp,%ebp
0816bebf +0x03:  mov    0x8(%ebp),%eax
0816bec2 +0x06:  mov    0xc(%eax),%eax
0816bec5 +0x09:  pop    %ebp
0816bec6 +0x0a:  ret
0816bec7 +0x0b:  nop
```

## 反编译 C

```c
// CEventStayTime::getRewardStayTime @ 0x816bebc

/* CEventStayTime::getRewardStayTime() */

undefined4 __thiscall CEventStayTime::getRewardStayTime(CEventStayTime *this)

{
  return *(undefined4 *)(this + 0xc);
}
```
