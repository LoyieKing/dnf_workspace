# dispatch

`_ZN32DB_UpdateOnlinePreliminaryMember8dispatchEiiP6Stream`

`DB_UpdateOnlinePreliminaryMember::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateOnlinePreliminaryMember` | `0x0843ba9e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843ba9e  _ZN32DB_UpdateOnlinePreliminaryMember8dispatchEiiP6Stream
#           DB_UpdateOnlinePreliminaryMember::dispatch(int, int, Stream*)
# range [0x0843ba9e, 0x0843baa7]
0843ba9e +0x00:  push   %ebp
0843ba9f +0x01:  mov    %esp,%ebp
0843baa1 +0x03:  mov    $0x1,%eax
0843baa6 +0x08:  pop    %ebp
0843baa7 +0x09:  ret
```

## 反编译 C

```c
// DB_UpdateOnlinePreliminaryMember::dispatch @ 0x843ba9e

/* DB_UpdateOnlinePreliminaryMember::dispatch(int, int, Stream*) */

undefined4 DB_UpdateOnlinePreliminaryMember::dispatch(int param_1,int param_2,Stream *param_3)

{
  return 1;
}
```
