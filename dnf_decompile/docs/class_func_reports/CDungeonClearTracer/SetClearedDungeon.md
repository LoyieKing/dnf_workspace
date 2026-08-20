# SetClearedDungeon

`_ZN19CDungeonClearTracer17SetClearedDungeonEb`

`CDungeonClearTracer::SetClearedDungeon(bool)`

| 类 | 地址 |
|---|---|
| `CDungeonClearTracer` | `0x082fee4a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082fee4a  _ZN19CDungeonClearTracer17SetClearedDungeonEb
#           CDungeonClearTracer::SetClearedDungeon(bool)
# range [0x082fee4a, 0x082fee61]
082fee4a +0x00:  push   %ebp
082fee4b +0x01:  mov    %esp,%ebp
082fee4d +0x03:  sub    $0x4,%esp
082fee50 +0x06:  mov    0xc(%ebp),%eax
082fee53 +0x09:  mov    %al,-0x4(%ebp)
082fee56 +0x0c:  mov    0x8(%ebp),%eax
082fee59 +0x0f:  movzbl -0x4(%ebp),%edx
082fee5d +0x13:  mov    %dl,0x14(%eax)
082fee60 +0x16:  leave
082fee61 +0x17:  ret
```

## 反编译 C

```c
// CDungeonClearTracer::SetClearedDungeon @ 0x82fee4a

/* CDungeonClearTracer::SetClearedDungeon(bool) */

void __thiscall CDungeonClearTracer::SetClearedDungeon(CDungeonClearTracer *this,bool param_1)

{
  this[0x14] = (CDungeonClearTracer)param_1;
  return;
}
```
