# CheckMaxLuckyLevel

`_ZN5CUser18CheckMaxLuckyLevelEv`

`CUser::CheckMaxLuckyLevel()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868a99a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868a99a  _ZN5CUser18CheckMaxLuckyLevelEv
#           CUser::CheckMaxLuckyLevel()
# range [0x0868a99a, 0x0868a9a3]
0868a99a +0x00:  push   %ebp
0868a99b +0x01:  mov    %esp,%ebp
0868a99d +0x03:  mov    $0x1,%eax
0868a9a2 +0x08:  pop    %ebp
0868a9a3 +0x09:  ret
```

## 反编译 C

```c
// CUser::CheckMaxLuckyLevel @ 0x868a99a

/* CUser::CheckMaxLuckyLevel() */

undefined4 CUser::CheckMaxLuckyLevel(void)

{
  return 1;
}
```
