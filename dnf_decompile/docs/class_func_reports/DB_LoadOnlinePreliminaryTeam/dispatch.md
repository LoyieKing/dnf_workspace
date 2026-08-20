# dispatch

`_ZN28DB_LoadOnlinePreliminaryTeam8dispatchEiiP6Stream`

`DB_LoadOnlinePreliminaryTeam::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_LoadOnlinePreliminaryTeam` | `0x0843bab2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843bab2  _ZN28DB_LoadOnlinePreliminaryTeam8dispatchEiiP6Stream
#           DB_LoadOnlinePreliminaryTeam::dispatch(int, int, Stream*)
# range [0x0843bab2, 0x0843babb]
0843bab2 +0x00:  push   %ebp
0843bab3 +0x01:  mov    %esp,%ebp
0843bab5 +0x03:  mov    $0x1,%eax
0843baba +0x08:  pop    %ebp
0843babb +0x09:  ret
```

## 反编译 C

```c
// DB_LoadOnlinePreliminaryTeam::dispatch @ 0x843bab2

/* DB_LoadOnlinePreliminaryTeam::dispatch(int, int, Stream*) */

undefined4 DB_LoadOnlinePreliminaryTeam::dispatch(int param_1,int param_2,Stream *param_3)

{
  return 1;
}
```
