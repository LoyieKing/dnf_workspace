# SetEndPoint

`_ZN19CDungeonClearTracer11SetEndPointEb`

`CDungeonClearTracer::SetEndPoint(bool)`

| 类 | 地址 |
|---|---|
| `CDungeonClearTracer` | `0x082fee62` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082fee62  _ZN19CDungeonClearTracer11SetEndPointEb
#           CDungeonClearTracer::SetEndPoint(bool)
# range [0x082fee62, 0x082fee79]
082fee62 +0x00:  push   %ebp
082fee63 +0x01:  mov    %esp,%ebp
082fee65 +0x03:  sub    $0x4,%esp
082fee68 +0x06:  mov    0xc(%ebp),%eax
082fee6b +0x09:  mov    %al,-0x4(%ebp)
082fee6e +0x0c:  mov    0x8(%ebp),%eax
082fee71 +0x0f:  movzbl -0x4(%ebp),%edx
082fee75 +0x13:  mov    %dl,0x15(%eax)
082fee78 +0x16:  leave
082fee79 +0x17:  ret
```

## 反编译 C

```c
// CDungeonClearTracer::SetEndPoint @ 0x82fee62

/* CDungeonClearTracer::SetEndPoint(bool) */

void __thiscall CDungeonClearTracer::SetEndPoint(CDungeonClearTracer *this,bool param_1)

{
  this[0x15] = (CDungeonClearTracer)param_1;
  return;
}
```
