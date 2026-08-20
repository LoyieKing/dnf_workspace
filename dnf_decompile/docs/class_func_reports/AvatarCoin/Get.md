# Get

`_ZNK10AvatarCoin3GetEv`

`AvatarCoin::Get() const`

| 类 | 地址 |
|---|---|
| `AvatarCoin` | `0x0817fef0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0817fef0  _ZNK10AvatarCoin3GetEv
#           AvatarCoin::Get() const
# range [0x0817fef0, 0x0817fef9]
0817fef0 +0x00:  push   %ebp
0817fef1 +0x01:  mov    %esp,%ebp
0817fef3 +0x03:  mov    0x8(%ebp),%eax
0817fef6 +0x06:  mov    (%eax),%eax
0817fef8 +0x08:  pop    %ebp
0817fef9 +0x09:  ret
```

## 反编译 C

```c
// AvatarCoin::Get @ 0x817fef0

/* AvatarCoin::Get() const */

undefined4 __thiscall AvatarCoin::Get(AvatarCoin *this)

{
  return *(undefined4 *)this;
}
```
