# SetInt

`_ZN11Arad_Script6SetIntEiii`

`Arad_Script::SetInt(int, int, int)`

| 类 | 地址 |
|---|---|
| `Arad_Script` | `0x0817ca80` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0817ca80  _ZN11Arad_Script6SetIntEiii
#           Arad_Script::SetInt(int, int, int)
# range [0x0817ca80, 0x0817cabb]
0817ca80 +0x00:  push   %ebp
0817ca81 +0x01:  mov    %esp,%ebp
0817ca83 +0x03:  sub    $0x18,%esp
0817ca86 +0x06:  mov    0x8(%ebp),%eax
0817ca89 +0x09:  mov    0x14(%eax),%edx
0817ca8c +0x0c:  mov    0x8(%ebp),%eax
0817ca8f +0x0f:  mov    (%eax),%eax
0817ca91 +0x11:  imul   0xc(%ebp),%eax
0817ca95 +0x15:  mov    %eax,%ecx
0817ca97 +0x17:  mov    0x10(%ebp),%eax
0817ca9a +0x1a:  lea    (%ecx,%eax,1),%eax
0817ca9d +0x1d:  shl    $0x7,%eax
0817caa0 +0x20:  add    %eax,%edx
0817caa2 +0x22:  mov    0x14(%ebp),%eax
0817caa5 +0x25:  mov    %eax,0x8(%esp)
0817caa9 +0x29:  movl   $"%d",0x4(%esp)
0817cab1 +0x31:  mov    %edx,(%esp)
0817cab4 +0x34:  call   0807e440 <_init+0xd38>
0817cab9 +0x39:  leave
0817caba +0x3a:  ret
0817cabb +0x3b:  nop
```

## 反编译 C

```c
// Arad_Script::SetInt @ 0x817ca80

/* Arad_Script::SetInt(int, int, int) */

void __thiscall Arad_Script::SetInt(Arad_Script *this,int param_1,int param_2,int param_3)

{
  sprintf((char *)(*(int *)(this + 0x14) + (*(int *)this * param_1 + param_2) * 0x80),"%d",param_3);
  return;
}
```
