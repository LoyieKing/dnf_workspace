# Set

`_ZN10AvatarCoin3SetEj`

`AvatarCoin::Set(unsigned int)`

| 类 | 地址 |
|---|---|
| `AvatarCoin` | `0x0817fee2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0817fee2  _ZN10AvatarCoin3SetEj
#           AvatarCoin::Set(unsigned int)
# range [0x0817fee2, 0x0817feef]
0817fee2 +0x00:  push   %ebp
0817fee3 +0x01:  mov    %esp,%ebp
0817fee5 +0x03:  mov    0x8(%ebp),%eax
0817fee8 +0x06:  mov    0xc(%ebp),%edx
0817feeb +0x09:  mov    %edx,(%eax)
0817feed +0x0b:  pop    %ebp
0817feee +0x0c:  ret
0817feef +0x0d:  nop
```

## 反编译 C

```c
// AvatarCoin::Set @ 0x817fee2

/* AvatarCoin::Set(unsigned int) */

void __thiscall AvatarCoin::Set(AvatarCoin *this,uint param_1)

{
  *(uint *)this = param_1;
  return;
}
```
