# dispatch

`_ZN27DB_LoadPowerWarStatueRanker8dispatchEiiP6Stream`

`DB_LoadPowerWarStatueRanker::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_LoadPowerWarStatueRanker` | `0x08434878` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08434878  _ZN27DB_LoadPowerWarStatueRanker8dispatchEiiP6Stream
#           DB_LoadPowerWarStatueRanker::dispatch(int, int, Stream*)
# range [0x08434878, 0x08434885]
08434878 +0x00:  push   %ebp
08434879 +0x01:  mov    %esp,%ebp
0843487b +0x03:  sub    $0x40,%esp
0843487e +0x06:  mov    $0x1,%eax
08434883 +0x0b:  leave
08434884 +0x0c:  ret
08434885 +0x0d:  nop
```

## 反编译 C

```c
// DB_LoadPowerWarStatueRanker::dispatch @ 0x8434878

/* DB_LoadPowerWarStatueRanker::dispatch(int, int, Stream*) */

undefined4 DB_LoadPowerWarStatueRanker::dispatch(int param_1,int param_2,Stream *param_3)

{
  return 1;
}
```
