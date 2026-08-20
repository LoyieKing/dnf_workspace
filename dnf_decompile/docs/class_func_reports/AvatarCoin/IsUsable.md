# IsUsable

`_ZNK10AvatarCoin8IsUsableEv`

`AvatarCoin::IsUsable() const`

| 类 | 地址 |
|---|---|
| `AvatarCoin` | `0x0817ff44` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0817ff44  _ZNK10AvatarCoin8IsUsableEv
#           AvatarCoin::IsUsable() const
# range [0x0817ff44, 0x0817ff53]
0817ff44 +0x00:  push   %ebp
0817ff45 +0x01:  mov    %esp,%ebp
0817ff47 +0x03:  mov    0x8(%ebp),%eax
0817ff4a +0x06:  mov    (%eax),%eax
0817ff4c +0x08:  test   %eax,%eax
0817ff4e +0x0a:  setne  %al
0817ff51 +0x0d:  pop    %ebp
0817ff52 +0x0e:  ret
0817ff53 +0x0f:  nop
```

## 反编译 C

```c
// AvatarCoin::IsUsable @ 0x817ff44

/* AvatarCoin::IsUsable() const */

undefined4 __thiscall AvatarCoin::IsUsable(AvatarCoin *this)

{
  return CONCAT31((int3)((uint)*(int *)this >> 8),*(int *)this != 0);
}
```
