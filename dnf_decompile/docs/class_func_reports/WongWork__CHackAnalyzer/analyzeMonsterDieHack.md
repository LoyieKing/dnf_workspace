# analyzeMonsterDieHack

`_ZN8WongWork13CHackAnalyzer21analyzeMonsterDieHackEv`

`WongWork::CHackAnalyzer::analyzeMonsterDieHack()`

| 类 | 地址 |
|---|---|
| `WongWork::CHackAnalyzer` | `0x080f7cb6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080f7cb6  _ZN8WongWork13CHackAnalyzer21analyzeMonsterDieHackEv
#           WongWork::CHackAnalyzer::analyzeMonsterDieHack()
# range [0x080f7cb6, 0x080f7cc9]
080f7cb6 +0x00:  push   %ebp
080f7cb7 +0x01:  mov    %esp,%ebp
080f7cb9 +0x03:  sub    $0x18,%esp
080f7cbc +0x06:  mov    0x8(%ebp),%eax
080f7cbf +0x09:  mov    %eax,(%esp)
080f7cc2 +0x0c:  call   080f7eb6 <_ZN8WongWork13CHackAnalyzer22_analyzeMonsterDieHackEv>  ; WongWork::CHackAnalyzer::_analyzeMonsterDieHack()
080f7cc7 +0x11:  leave
080f7cc8 +0x12:  ret
080f7cc9 +0x13:  nop
```

## 反编译 C

```c
// WongWork::CHackAnalyzer::analyzeMonsterDieHack @ 0x80f7cb6

/* WongWork::CHackAnalyzer::analyzeMonsterDieHack() */

void __thiscall WongWork::CHackAnalyzer::analyzeMonsterDieHack(CHackAnalyzer *this)

{
  _analyzeMonsterDieHack(this);
  return;
}
```
