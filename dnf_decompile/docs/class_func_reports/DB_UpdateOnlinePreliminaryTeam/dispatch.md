# dispatch

`_ZN30DB_UpdateOnlinePreliminaryTeam8dispatchEiiP6Stream`

`DB_UpdateOnlinePreliminaryTeam::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateOnlinePreliminaryTeam` | `0x0843babc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843babc  _ZN30DB_UpdateOnlinePreliminaryTeam8dispatchEiiP6Stream
#           DB_UpdateOnlinePreliminaryTeam::dispatch(int, int, Stream*)
# range [0x0843babc, 0x0843bac5]
0843babc +0x00:  push   %ebp
0843babd +0x01:  mov    %esp,%ebp
0843babf +0x03:  mov    $0x1,%eax
0843bac4 +0x08:  pop    %ebp
0843bac5 +0x09:  ret
```

## 反编译 C

```c
// DB_UpdateOnlinePreliminaryTeam::dispatch @ 0x843babc

/* DB_UpdateOnlinePreliminaryTeam::dispatch(int, int, Stream*) */

undefined4 DB_UpdateOnlinePreliminaryTeam::dispatch(int param_1,int param_2,Stream *param_3)

{
  return 1;
}
```
