# LevelUp

`_ZN15cUserHistoryLog7LevelUpEi14eLevelUpReason`

`cUserHistoryLog::LevelUp(int, eLevelUpReason)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x086845b2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086845b2  _ZN15cUserHistoryLog7LevelUpEi14eLevelUpReason
#           cUserHistoryLog::LevelUp(int, eLevelUpReason)
# range [0x086845b2, 0x086845dd]
086845b2 +0x00:  push   %ebp
086845b3 +0x01:  mov    %esp,%ebp
086845b5 +0x03:  sub    $0x18,%esp
086845b8 +0x06:  mov    0x10(%ebp),%edx
086845bb +0x09:  mov    0x8(%ebp),%eax
086845be +0x0c:  mov    (%eax),%eax
086845c0 +0x0e:  mov    %edx,0xc(%esp)
086845c4 +0x12:  mov    0xc(%ebp),%edx
086845c7 +0x15:  mov    %edx,0x8(%esp)
086845cb +0x19:  movl   $"Level+,%d,%d",0x4(%esp)
086845d3 +0x21:  mov    %eax,(%esp)
086845d6 +0x24:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
086845db +0x29:  leave
086845dc +0x2a:  ret
086845dd +0x2b:  nop
```

## 反编译 C

```c
// cUserHistoryLog::LevelUp @ 0x86845b2

/* cUserHistoryLog::LevelUp(int, eLevelUpReason) */

void __thiscall
cUserHistoryLog::LevelUp(cUserHistoryLog *this,undefined4 param_1,undefined4 param_3)

{
  CUser::LogHistory(*(CUser **)this,"Level+,%d,%d",param_1,param_3);
  return;
}
```
