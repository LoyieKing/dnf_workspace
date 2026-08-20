# AradAppInit

`_GLOBAL__I__ZN13AradAppSystem11AradAppInitEiPPc`

`global constructors keyed to AradAppSystem::AradAppInit(int, char**)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to AradAppSystem` | `0x0817dfd0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0817dfd0  _GLOBAL__I__ZN13AradAppSystem11AradAppInitEiPPc
#           global constructors keyed to AradAppSystem::AradAppInit(int, char**)
# range [0x0817dfd0, 0x0817e017]
0817dfd0 +0x00:  push   %ebp
0817dfd1 +0x01:  mov    %esp,%ebp
0817dfd3 +0x03:  sub    $0x18,%esp
0817dfd6 +0x06:  movl   $0xffff,0x4(%esp)
0817dfde +0x0e:  movl   $0x1,(%esp)
0817dfe5 +0x15:  call   0817df90 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0817dfea +0x1a:  leave
0817dfeb +0x1b:  ret
0817dfec +0x1c:  push   %ebp
0817dfed +0x1d:  mov    %esp,%ebp
0817dfef +0x1f:  mov    &_ZN4CLog5this_E,%eax
0817dff4 +0x24:  pop    %ebp
0817dff5 +0x25:  ret
0817dff6 +0x26:  push   %ebp
0817dff7 +0x27:  mov    %esp,%ebp
0817dff9 +0x29:  sub    $0x18,%esp
0817dffc +0x2c:  mov    0x8(%ebp),%eax
0817dfff +0x2f:  lea    0x3a2(%eax),%edx
0817e005 +0x35:  mov    0xc(%ebp),%eax
0817e008 +0x38:  mov    %eax,0x4(%esp)
0817e00c +0x3c:  mov    %edx,(%esp)
0817e00f +0x3f:  call   0807def0 <_init+0x7e8>
0817e014 +0x44:  leave
0817e015 +0x45:  ret
0817e016 +0x46:  nop
0817e017 +0x47:  nop
```

## 反编译 C

```c
// <global>::global @ 0x817dfd0

/* AradAppSystem::AradAppInit(int, char**) */

void AradAppSystem::_GLOBAL__I_AradAppInit(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
