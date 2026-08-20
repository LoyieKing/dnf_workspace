# dispatch

`_ZN37DB_LoadOnlinePreliminaryTeamMatchList8dispatchEiiP6Stream`

`DB_LoadOnlinePreliminaryTeamMatchList::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_LoadOnlinePreliminaryTeamMatchList` | `0x0843bac6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843bac6  _ZN37DB_LoadOnlinePreliminaryTeamMatchList8dispatchEiiP6Stream
#           DB_LoadOnlinePreliminaryTeamMatchList::dispatch(int, int, Stream*)
# range [0x0843bac6, 0x0843bacf]
0843bac6 +0x00:  push   %ebp
0843bac7 +0x01:  mov    %esp,%ebp
0843bac9 +0x03:  mov    $0x1,%eax
0843bace +0x08:  pop    %ebp
0843bacf +0x09:  ret
```

## 反编译 C

```c
// DB_LoadOnlinePreliminaryTeamMatchList::dispatch @ 0x843bac6

/* DB_LoadOnlinePreliminaryTeamMatchList::dispatch(int, int, Stream*) */

undefined4 DB_LoadOnlinePreliminaryTeamMatchList::dispatch(int param_1,int param_2,Stream *param_3)

{
  return 1;
}
```
