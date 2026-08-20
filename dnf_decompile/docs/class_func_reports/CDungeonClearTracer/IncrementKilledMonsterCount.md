# IncrementKilledMonsterCount

`_ZN19CDungeonClearTracer27IncrementKilledMonsterCountEv`

`CDungeonClearTracer::IncrementKilledMonsterCount()`

| 类 | 地址 |
|---|---|
| `CDungeonClearTracer` | `0x082fee8e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082fee8e  _ZN19CDungeonClearTracer27IncrementKilledMonsterCountEv
#           CDungeonClearTracer::IncrementKilledMonsterCount()
# range [0x082fee8e, 0x082feea1]
082fee8e +0x00:  push   %ebp
082fee8f +0x01:  mov    %esp,%ebp
082fee91 +0x03:  mov    0x8(%ebp),%eax
082fee94 +0x06:  mov    0x10(%eax),%eax
082fee97 +0x09:  lea    0x1(%eax),%edx
082fee9a +0x0c:  mov    0x8(%ebp),%eax
082fee9d +0x0f:  mov    %edx,0x10(%eax)
082feea0 +0x12:  pop    %ebp
082feea1 +0x13:  ret
```

## 反编译 C

```c
// CDungeonClearTracer::IncrementKilledMonsterCount @ 0x82fee8e

/* CDungeonClearTracer::IncrementKilledMonsterCount() */

void __thiscall CDungeonClearTracer::IncrementKilledMonsterCount(CDungeonClearTracer *this)

{
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
  return;
}
```
