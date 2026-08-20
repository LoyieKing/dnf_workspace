# SetMaxMonsterCount

`_ZN19CDungeonClearTracer18SetMaxMonsterCountEi`

`CDungeonClearTracer::SetMaxMonsterCount(int)`

| 类 | 地址 |
|---|---|
| `CDungeonClearTracer` | `0x082fee2e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082fee2e  _ZN19CDungeonClearTracer18SetMaxMonsterCountEi
#           CDungeonClearTracer::SetMaxMonsterCount(int)
# range [0x082fee2e, 0x082fee3b]
082fee2e +0x00:  push   %ebp
082fee2f +0x01:  mov    %esp,%ebp
082fee31 +0x03:  mov    0x8(%ebp),%eax
082fee34 +0x06:  mov    0xc(%ebp),%edx
082fee37 +0x09:  mov    %edx,0xc(%eax)
082fee3a +0x0c:  pop    %ebp
082fee3b +0x0d:  ret
```

## 反编译 C

```c
// CDungeonClearTracer::SetMaxMonsterCount @ 0x82fee2e

/* CDungeonClearTracer::SetMaxMonsterCount(int) */

void __thiscall CDungeonClearTracer::SetMaxMonsterCount(CDungeonClearTracer *this,int param_1)

{
  *(int *)(this + 0xc) = param_1;
  return;
}
```
