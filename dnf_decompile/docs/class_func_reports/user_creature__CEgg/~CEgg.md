# ~CEgg

`_ZN13user_creature4CEggD1Ev`

`user_creature::CEgg::~CEgg()`

| 类 | 地址 |
|---|---|
| `user_creature::CEgg` | `0x08338f74` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08338f74  _ZN13user_creature4CEggD1Ev
#           user_creature::CEgg::~CEgg()
# range [0x08338f74, 0x08338f81]
08338f74 +0x00:  push   %ebp
08338f75 +0x01:  mov    %esp,%ebp
08338f77 +0x03:  mov    0x8(%ebp),%eax
08338f7a +0x06:  movl   $&_ZTVN13user_creature4CEggE+0x8,(%eax)
08338f80 +0x0c:  pop    %ebp
08338f81 +0x0d:  ret
```

## 反编译 C

```c
// user_creature::CEgg::~CEgg @ 0x8338f74

/* user_creature::CEgg::~CEgg() */

void __thiscall user_creature::CEgg::~CEgg(CEgg *this)

{
  *(undefined ***)this = &PTR_Reset_08c2f4a8;
  return;
}
```
