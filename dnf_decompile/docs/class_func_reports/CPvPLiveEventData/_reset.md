# _reset

`_ZN17CPvPLiveEventData6_resetEv`

`CPvPLiveEventData::_reset()`

| 类 | 地址 |
|---|---|
| `CPvPLiveEventData` | `0x0826920c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0826920c  _ZN17CPvPLiveEventData6_resetEv
#           CPvPLiveEventData::_reset()
# range [0x0826920c, 0x0826921b]
0826920c +0x00:  push   %ebp
0826920d +0x01:  mov    %esp,%ebp
0826920f +0x03:  mov    0x8(%ebp),%eax
08269212 +0x06:  movl   $0x0,0x8(%eax)
08269219 +0x0d:  pop    %ebp
0826921a +0x0e:  ret
0826921b +0x0f:  nop
```

## 反编译 C

```c
// CPvPLiveEventData::_reset @ 0x826920c

/* CPvPLiveEventData::_reset() */

void __thiscall CPvPLiveEventData::_reset(CPvPLiveEventData *this)

{
  *(undefined4 *)(this + 8) = 0;
  return;
}
```
