# setUserP

`_ZN8WongWork13CHackAnalyzer8setUserPEP5CUser`

`WongWork::CHackAnalyzer::setUserP(CUser*)`

| 类 | 地址 |
|---|---|
| `WongWork::CHackAnalyzer` | `0x080f79c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080f79c0  _ZN8WongWork13CHackAnalyzer8setUserPEP5CUser
#           WongWork::CHackAnalyzer::setUserP(CUser*)
# range [0x080f79c0, 0x080f79cd]
080f79c0 +0x00:  push   %ebp
080f79c1 +0x01:  mov    %esp,%ebp
080f79c3 +0x03:  mov    0x8(%ebp),%eax
080f79c6 +0x06:  mov    0xc(%ebp),%edx
080f79c9 +0x09:  mov    %edx,(%eax)
080f79cb +0x0b:  pop    %ebp
080f79cc +0x0c:  ret
080f79cd +0x0d:  nop
```

## 反编译 C

```c
// WongWork::CHackAnalyzer::setUserP @ 0x80f79c0

/* WongWork::CHackAnalyzer::setUserP(CUser*) */

void __thiscall WongWork::CHackAnalyzer::setUserP(CHackAnalyzer *this,CUser *param_1)

{
  *(CUser **)this = param_1;
  return;
}
```
