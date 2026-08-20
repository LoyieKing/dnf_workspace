# questAutoClear

`_ZN5CUser14questAutoClearEi`

`CUser::questAutoClear(int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08692390` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08692390  _ZN5CUser14questAutoClearEi
#           CUser::questAutoClear(int)
# range [0x08692390, 0x08692395]
08692390 +0x00:  push   %ebp
08692391 +0x01:  mov    %esp,%ebp
08692393 +0x03:  pop    %ebp
08692394 +0x04:  ret
08692395 +0x05:  nop
```

## 反编译 C

```c
// CUser::questAutoClear @ 0x8692390

/* CUser::questAutoClear(int) */

void CUser::questAutoClear(int param_1)

{
  return;
}
```
