# destory

`_ZN4CMap7destoryEv`

`CMap::destory()`

| 类 | 地址 |
|---|---|
| `CMap` | `0x0834ed1e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0834ed1e  _ZN4CMap7destoryEv
#           CMap::destory()
# range [0x0834ed1e, 0x0834ed23]
0834ed1e +0x00:  push   %ebp
0834ed1f +0x01:  mov    %esp,%ebp
0834ed21 +0x03:  pop    %ebp
0834ed22 +0x04:  ret
0834ed23 +0x05:  nop
```

## 反编译 C

```c
// CMap::destory @ 0x834ed1e

/* CMap::destory() */

void CMap::destory(void)

{
  return;
}
```
