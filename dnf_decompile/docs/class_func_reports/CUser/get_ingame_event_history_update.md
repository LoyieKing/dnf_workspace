# get_ingame_event_history_update

`_ZN5CUser31get_ingame_event_history_updateEv`

`CUser::get_ingame_event_history_update()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868d4fe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868d4fe  _ZN5CUser31get_ingame_event_history_updateEv
#           CUser::get_ingame_event_history_update()
# range [0x0868d4fe, 0x0868d50b]
0868d4fe +0x00:  push   %ebp
0868d4ff +0x01:  mov    %esp,%ebp
0868d501 +0x03:  mov    0x8(%ebp),%eax
0868d504 +0x06:  add    $0x8eb80,%eax
0868d509 +0x0b:  pop    %ebp
0868d50a +0x0c:  ret
0868d50b +0x0d:  nop
```

## 反编译 C

```c
// CUser::get_ingame_event_history_update @ 0x868d4fe

/* CUser::get_ingame_event_history_update() */

CUser * __thiscall CUser::get_ingame_event_history_update(CUser *this)

{
  return this + 0x8eb80;
}
```
