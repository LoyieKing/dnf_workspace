# AvatarCoin

`_ZN10AvatarCoinC1Ev`

`AvatarCoin::AvatarCoin()`

| 类 | 地址 |
|---|---|
| `AvatarCoin` | `0x0817fed4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0817fed4  _ZN10AvatarCoinC1Ev
#           AvatarCoin::AvatarCoin()
# range [0x0817fed4, 0x0817fee1]
0817fed4 +0x00:  push   %ebp
0817fed5 +0x01:  mov    %esp,%ebp
0817fed7 +0x03:  mov    0x8(%ebp),%eax
0817feda +0x06:  movl   $0x0,(%eax)
0817fee0 +0x0c:  pop    %ebp
0817fee1 +0x0d:  ret
```

## 反编译 C

```c
// AvatarCoin::AvatarCoin @ 0x817fed4

/* AvatarCoin::AvatarCoin() */

void __thiscall AvatarCoin::AvatarCoin(AvatarCoin *this)

{
  *(undefined4 *)this = 0;
  return;
}
```
