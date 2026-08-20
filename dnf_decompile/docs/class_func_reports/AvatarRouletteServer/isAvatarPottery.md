# isAvatarPottery

`_ZN20AvatarRouletteServer15isAvatarPotteryEm`

`AvatarRouletteServer::isAvatarPottery(unsigned long)`

| 类 | 地址 |
|---|---|
| `AvatarRouletteServer` | `0x0817fb0a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0817fb0a  _ZN20AvatarRouletteServer15isAvatarPotteryEm
#           AvatarRouletteServer::isAvatarPottery(unsigned long)
# range [0x0817fb0a, 0x0817fb27]
0817fb0a +0x00:  push   %ebp
0817fb0b +0x01:  mov    %esp,%ebp
0817fb0d +0x03:  mov    0x8(%ebp),%eax
0817fb10 +0x06:  mov    0x18(%eax),%eax
0817fb13 +0x09:  mov    (%eax),%eax
0817fb15 +0x0b:  cmp    0xc(%ebp),%eax
0817fb18 +0x0e:  jne    0817fb21 <+0x17>
0817fb1a +0x10:  mov    $0x1,%eax
0817fb1f +0x15:  jmp    0817fb26 <+0x1c>
0817fb21 +0x17:  mov    $0x0,%eax
0817fb26 +0x1c:  pop    %ebp
0817fb27 +0x1d:  ret
```

## 反编译 C

```c
// AvatarRouletteServer::isAvatarPottery @ 0x817fb0a

/* AvatarRouletteServer::isAvatarPottery(unsigned long) */

bool __thiscall AvatarRouletteServer::isAvatarPottery(AvatarRouletteServer *this,ulong param_1)

{
  return **(ulong **)(this + 0x18) == param_1;
}
```
