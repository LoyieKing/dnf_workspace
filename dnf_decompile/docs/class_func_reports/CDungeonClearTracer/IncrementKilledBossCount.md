# IncrementKilledBossCount

`_ZN19CDungeonClearTracer24IncrementKilledBossCountEv`

`CDungeonClearTracer::IncrementKilledBossCount()`

| 类 | 地址 |
|---|---|
| `CDungeonClearTracer` | `0x082fee7a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082fee7a  _ZN19CDungeonClearTracer24IncrementKilledBossCountEv
#           CDungeonClearTracer::IncrementKilledBossCount()
# range [0x082fee7a, 0x082fee8d]
082fee7a +0x00:  push   %ebp
082fee7b +0x01:  mov    %esp,%ebp
082fee7d +0x03:  mov    0x8(%ebp),%eax
082fee80 +0x06:  mov    0x8(%eax),%eax
082fee83 +0x09:  lea    0x1(%eax),%edx
082fee86 +0x0c:  mov    0x8(%ebp),%eax
082fee89 +0x0f:  mov    %edx,0x8(%eax)
082fee8c +0x12:  pop    %ebp
082fee8d +0x13:  ret
```

## 反编译 C

```c
// CDungeonClearTracer::IncrementKilledBossCount @ 0x82fee7a

/* CDungeonClearTracer::IncrementKilledBossCount() */

void __thiscall CDungeonClearTracer::IncrementKilledBossCount(CDungeonClearTracer *this)

{
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  return;
}
```
