# getHeight

`_ZNK9GreyImage9getHeightEv`

`GreyImage::getHeight() const`

| 类 | 地址 |
|---|---|
| `GreyImage` | `0x080df5cc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080df5cc  _ZNK9GreyImage9getHeightEv
#           GreyImage::getHeight() const
# range [0x080df5cc, 0x080df5d7]
080df5cc +0x00:  push   %ebp
080df5cd +0x01:  mov    %esp,%ebp
080df5cf +0x03:  mov    0x8(%ebp),%eax
080df5d2 +0x06:  mov    0x4(%eax),%eax
080df5d5 +0x09:  pop    %ebp
080df5d6 +0x0a:  ret
080df5d7 +0x0b:  nop
```

## 反编译 C

```c
// GreyImage::getHeight @ 0x80df5cc

/* GreyImage::getHeight() const */

undefined4 __thiscall GreyImage::getHeight(GreyImage *this)

{
  return *(undefined4 *)(this + 4);
}
```
