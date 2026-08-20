# get_today_time

`_ZN13EventClassify15CEventScriptMng14get_today_timeEv`

`EventClassify::CEventScriptMng::get_today_time()`

| 类 | 地址 |
|---|---|
| `EventClassify::CEventScriptMng` | `0x0810c6d6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810c6d6  _ZN13EventClassify15CEventScriptMng14get_today_timeEv
#           EventClassify::CEventScriptMng::get_today_time()
# range [0x0810c6d6, 0x0810c6e1]
0810c6d6 +0x00:  push   %ebp
0810c6d7 +0x01:  mov    %esp,%ebp
0810c6d9 +0x03:  mov    0x8(%ebp),%eax
0810c6dc +0x06:  mov    0x48(%eax),%eax
0810c6df +0x09:  pop    %ebp
0810c6e0 +0x0a:  ret
0810c6e1 +0x0b:  nop
```

## 反编译 C

```c
// EventClassify::CEventScriptMng::get_today_time @ 0x810c6d6

/* EventClassify::CEventScriptMng::get_today_time() */

undefined4 __thiscall EventClassify::CEventScriptMng::get_today_time(CEventScriptMng *this)

{
  return *(undefined4 *)(this + 0x48);
}
```
