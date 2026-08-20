# SetString

`_ZN11Arad_Script9SetStringEiiPc`

`Arad_Script::SetString(int, int, char*)`

| 类 | 地址 |
|---|---|
| `Arad_Script` | `0x0817c98e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0817c98e  _ZN11Arad_Script9SetStringEiiPc
#           Arad_Script::SetString(int, int, char*)
# range [0x0817c98e, 0x0817c9c1]
0817c98e +0x00:  push   %ebp
0817c98f +0x01:  mov    %esp,%ebp
0817c991 +0x03:  sub    $0x18,%esp
0817c994 +0x06:  mov    0x8(%ebp),%eax
0817c997 +0x09:  mov    0x14(%eax),%edx
0817c99a +0x0c:  mov    0x8(%ebp),%eax
0817c99d +0x0f:  mov    (%eax),%eax
0817c99f +0x11:  imul   0xc(%ebp),%eax
0817c9a3 +0x15:  mov    %eax,%ecx
0817c9a5 +0x17:  mov    0x10(%ebp),%eax
0817c9a8 +0x1a:  lea    (%ecx,%eax,1),%eax
0817c9ab +0x1d:  shl    $0x7,%eax
0817c9ae +0x20:  add    %eax,%edx
0817c9b0 +0x22:  mov    0x14(%ebp),%eax
0817c9b3 +0x25:  mov    %eax,0x4(%esp)
0817c9b7 +0x29:  mov    %edx,(%esp)
0817c9ba +0x2c:  call   0807def0 <_init+0x7e8>
0817c9bf +0x31:  leave
0817c9c0 +0x32:  ret
0817c9c1 +0x33:  nop
```

## 反编译 C

```c
// Arad_Script::SetString @ 0x817c98e

/* Arad_Script::SetString(int, int, char*) */

void __thiscall Arad_Script::SetString(Arad_Script *this,int param_1,int param_2,char *param_3)

{
  strcpy((char *)(*(int *)(this + 0x14) + (*(int *)this * param_1 + param_2) * 0x80),param_3);
  return;
}
```
