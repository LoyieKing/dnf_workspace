# get_ingame_event_history

`_ZN5CUser24get_ingame_event_historyEv`

`CUser::get_ingame_event_history()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868d4f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868d4f0  _ZN5CUser24get_ingame_event_historyEv
#           CUser::get_ingame_event_history()
# range [0x0868d4f0, 0x0868d4fd]
0868d4f0 +0x00:  push   %ebp
0868d4f1 +0x01:  mov    %esp,%ebp
0868d4f3 +0x03:  mov    0x8(%ebp),%eax
0868d4f6 +0x06:  add    $0x8eb68,%eax
0868d4fb +0x0b:  pop    %ebp
0868d4fc +0x0c:  ret
0868d4fd +0x0d:  nop
```

## 反编译 C

```c
// CUser::get_ingame_event_history @ 0x868d4f0

/* CUser::get_ingame_event_history() */

CUser * __thiscall CUser::get_ingame_event_history(CUser *this)

{
  return this + 0x8eb68;
}
```
