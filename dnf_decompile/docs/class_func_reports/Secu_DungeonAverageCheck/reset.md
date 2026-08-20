# reset

`_ZN24Secu_DungeonAverageCheck5resetEv`

`Secu_DungeonAverageCheck::reset()`

| 类 | 地址 |
|---|---|
| `Secu_DungeonAverageCheck` | `0x08279490` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08279490  _ZN24Secu_DungeonAverageCheck5resetEv
#           Secu_DungeonAverageCheck::reset()
# range [0x08279490, 0x082794a5]
08279490 +0x00:  push   %ebp
08279491 +0x01:  mov    %esp,%ebp
08279493 +0x03:  sub    $0x18,%esp
08279496 +0x06:  mov    0x8(%ebp),%eax
08279499 +0x09:  add    $0x4,%eax
0827949c +0x0c:  mov    %eax,(%esp)
0827949f +0x0f:  call   08279d6c <_GLOBAL__I__ZN24Secu_DungeonAverageCheck5resetEv+0x59>  ; global constructors keyed to Secu_DungeonAverageCheck::reset()+0x59
082794a4 +0x14:  leave
082794a5 +0x15:  ret
```

## 反编译 C

```c
// Secu_DungeonAverageCheck::reset @ 0x8279490

/* Secu_DungeonAverageCheck::reset() */

void __thiscall Secu_DungeonAverageCheck::reset(Secu_DungeonAverageCheck *this)

{
  std::vector<SecKillMonsterInfo,std::allocator<SecKillMonsterInfo>>::clear
            ((vector<SecKillMonsterInfo,std::allocator<SecKillMonsterInfo>> *)(this + 4));
  return;
}
```
