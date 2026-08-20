# get_today_time_day

`_ZN13EventClassify15CEventScriptMng18get_today_time_dayEv`

`EventClassify::CEventScriptMng::get_today_time_day()`

| 类 | 地址 |
|---|---|
| `EventClassify::CEventScriptMng` | `0x0810c6ca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810c6ca  _ZN13EventClassify15CEventScriptMng18get_today_time_dayEv
#           EventClassify::CEventScriptMng::get_today_time_day()
# range [0x0810c6ca, 0x0810c6d5]
0810c6ca +0x00:  push   %ebp
0810c6cb +0x01:  mov    %esp,%ebp
0810c6cd +0x03:  mov    0x8(%ebp),%eax
0810c6d0 +0x06:  movzbl 0x4c(%eax),%eax
0810c6d4 +0x0a:  pop    %ebp
0810c6d5 +0x0b:  ret
```

## 反编译 C

```c
// EventClassify::CEventScriptMng::get_today_time_day @ 0x810c6ca

/* EventClassify::CEventScriptMng::get_today_time_day() */

CEventScriptMng __thiscall EventClassify::CEventScriptMng::get_today_time_day(CEventScriptMng *this)

{
  return this[0x4c];
}
```
