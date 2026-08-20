# SetKilledBossCount

`_ZN19CDungeonClearTracer18SetKilledBossCountEi`

`CDungeonClearTracer::SetKilledBossCount(int)`

| 类 | 地址 |
|---|---|
| `CDungeonClearTracer` | `0x082fee20` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082fee20  _ZN19CDungeonClearTracer18SetKilledBossCountEi
#           CDungeonClearTracer::SetKilledBossCount(int)
# range [0x082fee20, 0x082fee2d]
082fee20 +0x00:  push   %ebp
082fee21 +0x01:  mov    %esp,%ebp
082fee23 +0x03:  mov    0x8(%ebp),%eax
082fee26 +0x06:  mov    0xc(%ebp),%edx
082fee29 +0x09:  mov    %edx,0x8(%eax)
082fee2c +0x0c:  pop    %ebp
082fee2d +0x0d:  ret
```

## 反编译 C

```c
// CDungeonClearTracer::SetKilledBossCount @ 0x82fee20

/* CDungeonClearTracer::SetKilledBossCount(int) */

void __thiscall CDungeonClearTracer::SetKilledBossCount(CDungeonClearTracer *this,int param_1)

{
  *(int *)(this + 8) = param_1;
  return;
}
```
