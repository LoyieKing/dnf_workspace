# Add

`_ZN10AvatarCoin3AddEj`

`AvatarCoin::Add(unsigned int)`

| 类 | 地址 |
|---|---|
| `AvatarCoin` | `0x0817fefa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0817fefa  _ZN10AvatarCoin3AddEj
#           AvatarCoin::Add(unsigned int)
# range [0x0817fefa, 0x0817ff13]
0817fefa +0x00:  push   %ebp
0817fefb +0x01:  mov    %esp,%ebp
0817fefd +0x03:  mov    0x8(%ebp),%eax
0817ff00 +0x06:  mov    (%eax),%eax
0817ff02 +0x08:  mov    %eax,%edx
0817ff04 +0x0a:  add    0xc(%ebp),%edx
0817ff07 +0x0d:  mov    0x8(%ebp),%eax
0817ff0a +0x10:  mov    %edx,(%eax)
0817ff0c +0x12:  mov    $0x1,%eax
0817ff11 +0x17:  pop    %ebp
0817ff12 +0x18:  ret
0817ff13 +0x19:  nop
```

## 反编译 C

```c
// AvatarCoin::Add @ 0x817fefa

/* AvatarCoin::Add(unsigned int) */

undefined4 __thiscall AvatarCoin::Add(AvatarCoin *this,uint param_1)

{
  *(uint *)this = *(int *)this + param_1;
  return 1;
}
```
