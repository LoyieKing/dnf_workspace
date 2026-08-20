# dispatch

`_ZN25DB_UpdatePvPLiveEventData8dispatchEiiP6Stream`

`DB_UpdatePvPLiveEventData::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_UpdatePvPLiveEventData` | `0x0843ac48` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843ac48  _ZN25DB_UpdatePvPLiveEventData8dispatchEiiP6Stream
#           DB_UpdatePvPLiveEventData::dispatch(int, int, Stream*)
# range [0x0843ac48, 0x0843ac51]
0843ac48 +0x00:  push   %ebp
0843ac49 +0x01:  mov    %esp,%ebp
0843ac4b +0x03:  mov    $0x1,%eax
0843ac50 +0x08:  pop    %ebp
0843ac51 +0x09:  ret
```

## 反编译 C

```c
// DB_UpdatePvPLiveEventData::dispatch @ 0x843ac48

/* DB_UpdatePvPLiveEventData::dispatch(int, int, Stream*) */

undefined4 DB_UpdatePvPLiveEventData::dispatch(int param_1,int param_2,Stream *param_3)

{
  return 1;
}
```
