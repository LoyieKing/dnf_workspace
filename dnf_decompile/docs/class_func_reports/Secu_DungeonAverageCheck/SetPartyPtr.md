# SetPartyPtr

`_ZN24Secu_DungeonAverageCheck11SetPartyPtrEP6CParty`

`Secu_DungeonAverageCheck::SetPartyPtr(CParty*)`

| 类 | 地址 |
|---|---|
| `Secu_DungeonAverageCheck` | `0x082794a6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082794a6  _ZN24Secu_DungeonAverageCheck11SetPartyPtrEP6CParty
#           Secu_DungeonAverageCheck::SetPartyPtr(CParty*)
# range [0x082794a6, 0x082794c1]
082794a6 +0x00:  push   %ebp
082794a7 +0x01:  mov    %esp,%ebp
082794a9 +0x03:  sub    $0x18,%esp
082794ac +0x06:  mov    0x8(%ebp),%eax
082794af +0x09:  mov    0xc(%ebp),%edx
082794b2 +0x0c:  mov    %edx,(%eax)
082794b4 +0x0e:  mov    0x8(%ebp),%eax
082794b7 +0x11:  mov    %eax,(%esp)
082794ba +0x14:  call   08279490 <_ZN24Secu_DungeonAverageCheck5resetEv>  ; Secu_DungeonAverageCheck::reset()
082794bf +0x19:  leave
082794c0 +0x1a:  ret
082794c1 +0x1b:  nop
```

## 反编译 C

```c
// Secu_DungeonAverageCheck::SetPartyPtr @ 0x82794a6

/* Secu_DungeonAverageCheck::SetPartyPtr(CParty*) */

void __thiscall
Secu_DungeonAverageCheck::SetPartyPtr(Secu_DungeonAverageCheck *this,CParty *param_1)

{
  *(CParty **)this = param_1;
  reset(this);
  return;
}
```
