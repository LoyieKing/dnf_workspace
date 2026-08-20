# SetMaxBossCount

`_ZN19CDungeonClearTracer15SetMaxBossCountEi`

`CDungeonClearTracer::SetMaxBossCount(int)`

| 类 | 地址 |
|---|---|
| `CDungeonClearTracer` | `0x082fee12` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082fee12  _ZN19CDungeonClearTracer15SetMaxBossCountEi
#           CDungeonClearTracer::SetMaxBossCount(int)
# range [0x082fee12, 0x082fee1f]
082fee12 +0x00:  push   %ebp
082fee13 +0x01:  mov    %esp,%ebp
082fee15 +0x03:  mov    0x8(%ebp),%eax
082fee18 +0x06:  mov    0xc(%ebp),%edx
082fee1b +0x09:  mov    %edx,0x4(%eax)
082fee1e +0x0c:  pop    %ebp
082fee1f +0x0d:  ret
```

## 反编译 C

```c
// CDungeonClearTracer::SetMaxBossCount @ 0x82fee12

/* CDungeonClearTracer::SetMaxBossCount(int) */

void __thiscall CDungeonClearTracer::SetMaxBossCount(CDungeonClearTracer *this,int param_1)

{
  *(int *)(this + 4) = param_1;
  return;
}
```
