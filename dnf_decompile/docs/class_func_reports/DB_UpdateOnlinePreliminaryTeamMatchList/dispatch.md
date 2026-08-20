# dispatch

`_ZN39DB_UpdateOnlinePreliminaryTeamMatchList8dispatchEiiP6Stream`

`DB_UpdateOnlinePreliminaryTeamMatchList::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateOnlinePreliminaryTeamMatchList` | `0x0843bad0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843bad0  _ZN39DB_UpdateOnlinePreliminaryTeamMatchList8dispatchEiiP6Stream
#           DB_UpdateOnlinePreliminaryTeamMatchList::dispatch(int, int, Stream*)
# range [0x0843bad0, 0x0843bad9]
0843bad0 +0x00:  push   %ebp
0843bad1 +0x01:  mov    %esp,%ebp
0843bad3 +0x03:  mov    $0x1,%eax
0843bad8 +0x08:  pop    %ebp
0843bad9 +0x09:  ret
```

## 反编译 C

```c
// DB_UpdateOnlinePreliminaryTeamMatchList::dispatch @ 0x843bad0

/* DB_UpdateOnlinePreliminaryTeamMatchList::dispatch(int, int, Stream*) */

undefined4
DB_UpdateOnlinePreliminaryTeamMatchList::dispatch(int param_1,int param_2,Stream *param_3)

{
  return 1;
}
```
