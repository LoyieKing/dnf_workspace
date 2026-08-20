# Reset

`_ZN13user_creature4CEgg5ResetEv`

`user_creature::CEgg::Reset()`

| 类 | 地址 |
|---|---|
| `user_creature::CEgg` | `0x08338f82` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08338f82  _ZN13user_creature4CEgg5ResetEv
#           user_creature::CEgg::Reset()
# range [0x08338f82, 0x08338fab]
08338f82 +0x00:  push   %ebp
08338f83 +0x01:  mov    %esp,%ebp
08338f85 +0x03:  mov    0x8(%ebp),%eax
08338f88 +0x06:  movl   $0x0,0x8(%eax)
08338f8f +0x0d:  mov    0x8(%ebp),%eax
08338f92 +0x10:  movl   $0x0,0xc(%eax)
08338f99 +0x17:  mov    0x8(%ebp),%eax
08338f9c +0x1a:  movl   $0x0,0x10(%eax)
08338fa3 +0x21:  mov    0x8(%ebp),%eax
08338fa6 +0x24:  movb   $0x0,0x14(%eax)
08338faa +0x28:  pop    %ebp
08338fab +0x29:  ret
```

## 反编译 C

```c
// user_creature::CEgg::Reset @ 0x8338f82

/* user_creature::CEgg::Reset() */

void __thiscall user_creature::CEgg::Reset(CEgg *this)

{
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  this[0x14] = (CEgg)0x0;
  return;
}
```
