# DungeonClearInfo

`_ZN15cUserHistoryLog16DungeonClearInfoEil`

`cUserHistoryLog::DungeonClearInfo(int, long)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08684ac4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08684ac4  _ZN15cUserHistoryLog16DungeonClearInfoEil
#           cUserHistoryLog::DungeonClearInfo(int, long)
# range [0x08684ac4, 0x08684aef]
08684ac4 +0x00:  push   %ebp
08684ac5 +0x01:  mov    %esp,%ebp
08684ac7 +0x03:  sub    $0x18,%esp
08684aca +0x06:  mov    0x8(%ebp),%eax
08684acd +0x09:  mov    (%eax),%eax
08684acf +0x0b:  mov    0x10(%ebp),%edx
08684ad2 +0x0e:  mov    %edx,0xc(%esp)
08684ad6 +0x12:  mov    0xc(%ebp),%edx
08684ad9 +0x15:  mov    %edx,0x8(%esp)
08684add +0x19:  movl   $"DungeonClearInfo,%d,%d",0x4(%esp)
08684ae5 +0x21:  mov    %eax,(%esp)
08684ae8 +0x24:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08684aed +0x29:  leave
08684aee +0x2a:  ret
08684aef +0x2b:  nop
```

## 反编译 C

```c
// cUserHistoryLog::DungeonClearInfo @ 0x8684ac4

/* cUserHistoryLog::DungeonClearInfo(int, long) */

void __thiscall cUserHistoryLog::DungeonClearInfo(cUserHistoryLog *this,int param_1,long param_2)

{
  CUser::LogHistory(*(CUser **)this,"DungeonClearInfo,%d,%d",param_1,param_2);
  return;
}
```
