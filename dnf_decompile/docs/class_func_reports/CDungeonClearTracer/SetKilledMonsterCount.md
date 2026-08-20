# SetKilledMonsterCount

`_ZN19CDungeonClearTracer21SetKilledMonsterCountEi`

`CDungeonClearTracer::SetKilledMonsterCount(int)`

| 类 | 地址 |
|---|---|
| `CDungeonClearTracer` | `0x082fee3c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082fee3c  _ZN19CDungeonClearTracer21SetKilledMonsterCountEi
#           CDungeonClearTracer::SetKilledMonsterCount(int)
# range [0x082fee3c, 0x082fee49]
082fee3c +0x00:  push   %ebp
082fee3d +0x01:  mov    %esp,%ebp
082fee3f +0x03:  mov    0x8(%ebp),%eax
082fee42 +0x06:  mov    0xc(%ebp),%edx
082fee45 +0x09:  mov    %edx,0x10(%eax)
082fee48 +0x0c:  pop    %ebp
082fee49 +0x0d:  ret
```

## 反编译 C

```c
// CDungeonClearTracer::SetKilledMonsterCount @ 0x82fee3c

/* CDungeonClearTracer::SetKilledMonsterCount(int) */

void __thiscall CDungeonClearTracer::SetKilledMonsterCount(CDungeonClearTracer *this,int param_1)

{
  *(int *)(this + 0x10) = param_1;
  return;
}
```
