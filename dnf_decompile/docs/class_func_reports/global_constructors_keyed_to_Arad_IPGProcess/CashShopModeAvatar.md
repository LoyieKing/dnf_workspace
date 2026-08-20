# CashShopModeAvatar

`_GLOBAL__I__ZN15Arad_IPGProcess18CashShopModeAvatarEP5CUsermiiccPKcRijic`

`global constructors keyed to Arad_IPGProcess::CashShopModeAvatar(CUser*, unsigned long, int, int, char, char, char const*, int&, unsigned int, int, char)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to Arad_IPGProcess` | `0x0819cb48` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0819cb48  _GLOBAL__I__ZN15Arad_IPGProcess18CashShopModeAvatarEP5CUsermiiccPKcRijic
#           global constructors keyed to Arad_IPGProcess::CashShopModeAvatar(CUser*, unsigned long, int, int, char, char, char const*, int&, unsigned int, int, char)
# range [0x0819cb48, 0x0819cb63]
0819cb48 +0x00:  push   %ebp
0819cb49 +0x01:  mov    %esp,%ebp
0819cb4b +0x03:  sub    $0x18,%esp
0819cb4e +0x06:  movl   $0xffff,0x4(%esp)
0819cb56 +0x0e:  movl   $0x1,(%esp)
0819cb5d +0x15:  call   0819cb08 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0819cb62 +0x1a:  leave
0819cb63 +0x1b:  ret
```

## 反编译 C

```c
// <global>::global @ 0x819cb48

/* Arad_IPGProcess::CashShopModeAvatar(CUser*, unsigned long, int, int, char, char, char const*,
   int&, unsigned int, int, char) */

void Arad_IPGProcess::_GLOBAL__I_CashShopModeAvatar(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
