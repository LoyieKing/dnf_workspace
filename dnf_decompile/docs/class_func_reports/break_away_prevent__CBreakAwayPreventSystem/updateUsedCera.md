# updateUsedCera

`_ZN18break_away_prevent23CBreakAwayPreventSystem14updateUsedCeraEjj`

`break_away_prevent::CBreakAwayPreventSystem::updateUsedCera(unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `break_away_prevent::CBreakAwayPreventSystem` | `0x0831ce5e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0831ce5e  _ZN18break_away_prevent23CBreakAwayPreventSystem14updateUsedCeraEjj
#           break_away_prevent::CBreakAwayPreventSystem::updateUsedCera(unsigned int, unsigned int)
# range [0x0831ce5e, 0x0831ce77]
0831ce5e +0x00:  push   %ebp
0831ce5f +0x01:  mov    %esp,%ebp
0831ce61 +0x03:  sub    $0x18,%esp
0831ce64 +0x06:  mov    0x10(%ebp),%eax
0831ce67 +0x09:  mov    %eax,0x4(%esp)
0831ce6b +0x0d:  mov    0xc(%ebp),%eax
0831ce6e +0x10:  mov    %eax,(%esp)
0831ce71 +0x13:  call   0843856a <_ZN29DB_UpdateBreakAwayAccruedCera11makeRequestEjj>  ; DB_UpdateBreakAwayAccruedCera::makeRequest(unsigned int, unsigned int)
0831ce76 +0x18:  leave
0831ce77 +0x19:  ret
```

## 反编译 C

```c
// break_away_prevent::CBreakAwayPreventSystem::updateUsedCera @ 0x831ce5e

/* break_away_prevent::CBreakAwayPreventSystem::updateUsedCera(unsigned int, unsigned int) */

void __thiscall
break_away_prevent::CBreakAwayPreventSystem::updateUsedCera
          (CBreakAwayPreventSystem *this,uint param_1,uint param_2)

{
  DB_UpdateBreakAwayAccruedCera::makeRequest(param_1,param_2);
  return;
}
```
