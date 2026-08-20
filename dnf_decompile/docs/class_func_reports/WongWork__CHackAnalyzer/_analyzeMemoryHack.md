# _analyzeMemoryHack

`_ZN8WongWork13CHackAnalyzer18_analyzeMemoryHackEj`

`WongWork::CHackAnalyzer::_analyzeMemoryHack(unsigned int)`

| 类 | 地址 |
|---|---|
| `WongWork::CHackAnalyzer` | `0x080f7dce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080f7dce  _ZN8WongWork13CHackAnalyzer18_analyzeMemoryHackEj
#           WongWork::CHackAnalyzer::_analyzeMemoryHack(unsigned int)
# range [0x080f7dce, 0x080f7e17]
080f7dce +0x00:  push   %ebp
080f7dcf +0x01:  mov    %esp,%ebp
080f7dd1 +0x03:  sub    $0x18,%esp
080f7dd4 +0x06:  movl   $0x8,0x4(%esp)
080f7ddc +0x0e:  mov    0x8(%ebp),%eax
080f7ddf +0x11:  mov    %eax,(%esp)
080f7de2 +0x14:  call   080f9876 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x82>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x82
080f7de7 +0x19:  test   %al,%al
080f7de9 +0x1b:  jne    080f7e15 <+0x47>
080f7deb +0x1d:  cmpl   $0x0,0xc(%ebp)
080f7def +0x21:  je     080f7e16 <+0x48>
080f7df1 +0x23:  mov    0xc(%ebp),%eax
080f7df4 +0x26:  mov    %eax,0xc(%esp)
080f7df8 +0x2a:  movl   $0x3bc,0x8(%esp)
080f7e00 +0x32:  movl   $0x8,0x4(%esp)
080f7e08 +0x3a:  mov    0x8(%ebp),%eax
080f7e0b +0x3d:  mov    %eax,(%esp)
080f7e0e +0x40:  call   080f7fd2 <_ZN8WongWork13CHackAnalyzer12_addHackInfoE23ENUM_REPORT_4_HACK_FLAGNS_13ENUM_HACKTYPEEi>  ; WongWork::CHackAnalyzer::_addHackInfo(ENUM_REPORT_4_HACK_FLAG, WongWork::ENUM_HACKTYPE, int)
080f7e13 +0x45:  jmp    080f7e16 <+0x48>
080f7e15 +0x47:  nop
080f7e16 +0x48:  leave
080f7e17 +0x49:  ret
```

## 反编译 C

```c
// WongWork::CHackAnalyzer::_analyzeMemoryHack @ 0x80f7dce

/* WongWork::CHackAnalyzer::_analyzeMemoryHack(unsigned int) */

void __thiscall WongWork::CHackAnalyzer::_analyzeMemoryHack(CHackAnalyzer *this,uint param_1)

{
  char cVar1;
  
  cVar1 = checkCollectedHack(this,8);
  if ((cVar1 == '\0') && (param_1 != 0)) {
    _addHackInfo(this,8,0x3bc,param_1);
  }
  return;
}
```
