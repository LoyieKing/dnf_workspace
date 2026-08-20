# SetMapId

`_ZN19CDungeonClearTracer8SetMapIdEi`

`CDungeonClearTracer::SetMapId(int)`

| 类 | 地址 |
|---|---|
| `CDungeonClearTracer` | `0x082fee04` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082fee04  _ZN19CDungeonClearTracer8SetMapIdEi
#           CDungeonClearTracer::SetMapId(int)
# range [0x082fee04, 0x082fee11]
082fee04 +0x00:  push   %ebp
082fee05 +0x01:  mov    %esp,%ebp
082fee07 +0x03:  mov    0x8(%ebp),%eax
082fee0a +0x06:  mov    0xc(%ebp),%edx
082fee0d +0x09:  mov    %edx,(%eax)
082fee0f +0x0b:  pop    %ebp
082fee10 +0x0c:  ret
082fee11 +0x0d:  nop
```

## 反编译 C

```c
// CDungeonClearTracer::SetMapId @ 0x82fee04

/* CDungeonClearTracer::SetMapId(int) */

void __thiscall CDungeonClearTracer::SetMapId(CDungeonClearTracer *this,int param_1)

{
  *(int *)this = param_1;
  return;
}
```
