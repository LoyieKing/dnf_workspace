# LevelDown

`_ZN15cUserHistoryLog9LevelDownEi16eLevelDownReason`

`cUserHistoryLog::LevelDown(int, eLevelDownReason)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x086845de` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086845de  _ZN15cUserHistoryLog9LevelDownEi16eLevelDownReason
#           cUserHistoryLog::LevelDown(int, eLevelDownReason)
# range [0x086845de, 0x08684609]
086845de +0x00:  push   %ebp
086845df +0x01:  mov    %esp,%ebp
086845e1 +0x03:  sub    $0x18,%esp
086845e4 +0x06:  mov    0x10(%ebp),%edx
086845e7 +0x09:  mov    0x8(%ebp),%eax
086845ea +0x0c:  mov    (%eax),%eax
086845ec +0x0e:  mov    %edx,0xc(%esp)
086845f0 +0x12:  mov    0xc(%ebp),%edx
086845f3 +0x15:  mov    %edx,0x8(%esp)
086845f7 +0x19:  movl   $"Level-,%d,%d",0x4(%esp)
086845ff +0x21:  mov    %eax,(%esp)
08684602 +0x24:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08684607 +0x29:  leave
08684608 +0x2a:  ret
08684609 +0x2b:  nop
```

## 反编译 C

```c
// cUserHistoryLog::LevelDown @ 0x86845de

/* cUserHistoryLog::LevelDown(int, eLevelDownReason) */

void __thiscall
cUserHistoryLog::LevelDown(cUserHistoryLog *this,undefined4 param_1,undefined4 param_3)

{
  CUser::LogHistory(*(CUser **)this,"Level-,%d,%d",param_1,param_3);
  return;
}
```
