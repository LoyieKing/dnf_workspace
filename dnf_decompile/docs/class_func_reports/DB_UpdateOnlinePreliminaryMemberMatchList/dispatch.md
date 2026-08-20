# dispatch

`_ZN41DB_UpdateOnlinePreliminaryMemberMatchList8dispatchEiiP6Stream`

`DB_UpdateOnlinePreliminaryMemberMatchList::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateOnlinePreliminaryMemberMatchList` | `0x0843baa8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843baa8  _ZN41DB_UpdateOnlinePreliminaryMemberMatchList8dispatchEiiP6Stream
#           DB_UpdateOnlinePreliminaryMemberMatchList::dispatch(int, int, Stream*)
# range [0x0843baa8, 0x0843bab1]
0843baa8 +0x00:  push   %ebp
0843baa9 +0x01:  mov    %esp,%ebp
0843baab +0x03:  mov    $0x1,%eax
0843bab0 +0x08:  pop    %ebp
0843bab1 +0x09:  ret
```

## 反编译 C

```c
// DB_UpdateOnlinePreliminaryMemberMatchList::dispatch @ 0x843baa8

/* DB_UpdateOnlinePreliminaryMemberMatchList::dispatch(int, int, Stream*) */

undefined4
DB_UpdateOnlinePreliminaryMemberMatchList::dispatch(int param_1,int param_2,Stream *param_3)

{
  return 1;
}
```
