# setMemoryPoolIndex

`_ZN10BlueMarble18setMemoryPoolIndexEi`

`BlueMarble::setMemoryPoolIndex(int)`

| 类 | 地址 |
|---|---|
| `BlueMarble` | `0x080d8c26` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d8c26  _ZN10BlueMarble18setMemoryPoolIndexEi
#           BlueMarble::setMemoryPoolIndex(int)
# range [0x080d8c26, 0x080d8c33]
080d8c26 +0x00:  push   %ebp
080d8c27 +0x01:  mov    %esp,%ebp
080d8c29 +0x03:  mov    0x8(%ebp),%eax
080d8c2c +0x06:  mov    0xc(%ebp),%edx
080d8c2f +0x09:  mov    %edx,(%eax)
080d8c31 +0x0b:  pop    %ebp
080d8c32 +0x0c:  ret
080d8c33 +0x0d:  nop
```

## 反编译 C

```c
// BlueMarble::setMemoryPoolIndex @ 0x80d8c26

/* BlueMarble::setMemoryPoolIndex(int) */

void __thiscall BlueMarble::setMemoryPoolIndex(BlueMarble *this,int param_1)

{
  *(int *)this = param_1;
  return;
}
```
