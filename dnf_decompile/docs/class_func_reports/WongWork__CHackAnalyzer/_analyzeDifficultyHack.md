# _analyzeDifficultyHack

`_ZN8WongWork13CHackAnalyzer22_analyzeDifficultyHackEc`

`WongWork::CHackAnalyzer::_analyzeDifficultyHack(char)`

| 类 | 地址 |
|---|---|
| `WongWork::CHackAnalyzer` | `0x080f7d82` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080f7d82  _ZN8WongWork13CHackAnalyzer22_analyzeDifficultyHackEc
#           WongWork::CHackAnalyzer::_analyzeDifficultyHack(char)
# range [0x080f7d82, 0x080f7dcd]
080f7d82 +0x00:  push   %ebp
080f7d83 +0x01:  mov    %esp,%ebp
080f7d85 +0x03:  sub    $0x28,%esp
080f7d88 +0x06:  mov    0xc(%ebp),%eax
080f7d8b +0x09:  mov    %al,-0xc(%ebp)
080f7d8e +0x0c:  movl   $0x2,0x4(%esp)
080f7d96 +0x14:  mov    0x8(%ebp),%eax
080f7d99 +0x17:  mov    %eax,(%esp)
080f7d9c +0x1a:  call   080f9876 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x82>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x82
080f7da1 +0x1f:  test   %al,%al
080f7da3 +0x21:  jne    080f7dca <+0x48>
080f7da5 +0x23:  movsbl -0xc(%ebp),%eax
080f7da9 +0x27:  mov    %eax,0xc(%esp)
080f7dad +0x2b:  movl   $0x3bf,0x8(%esp)
080f7db5 +0x33:  movl   $0x2,0x4(%esp)
080f7dbd +0x3b:  mov    0x8(%ebp),%eax
080f7dc0 +0x3e:  mov    %eax,(%esp)
080f7dc3 +0x41:  call   080f7fd2 <_ZN8WongWork13CHackAnalyzer12_addHackInfoE23ENUM_REPORT_4_HACK_FLAGNS_13ENUM_HACKTYPEEi>  ; WongWork::CHackAnalyzer::_addHackInfo(ENUM_REPORT_4_HACK_FLAG, WongWork::ENUM_HACKTYPE, int)
080f7dc8 +0x46:  jmp    080f7dcb <+0x49>
080f7dca +0x48:  nop
080f7dcb +0x49:  leave
080f7dcc +0x4a:  ret
080f7dcd +0x4b:  nop
```

## 反编译 C

```c
// WongWork::CHackAnalyzer::_analyzeDifficultyHack @ 0x80f7d82

/* WongWork::CHackAnalyzer::_analyzeDifficultyHack(char) */

void __thiscall WongWork::CHackAnalyzer::_analyzeDifficultyHack(CHackAnalyzer *this,char param_1)

{
  char cVar1;
  
  cVar1 = checkCollectedHack(this,2);
  if (cVar1 == '\0') {
    _addHackInfo(this,2,0x3bf,(int)param_1);
  }
  return;
}
```
