# IsKilledBoss

`_ZN19CDungeonClearTracer12IsKilledBossEv`

`CDungeonClearTracer::IsKilledBoss()`

| 类 | 地址 |
|---|---|
| `CDungeonClearTracer` | `0x082feea2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082feea2  _ZN19CDungeonClearTracer12IsKilledBossEv
#           CDungeonClearTracer::IsKilledBoss()
# range [0x082feea2, 0x082feecd]
082feea2 +0x00:  push   %ebp
082feea3 +0x01:  mov    %esp,%ebp
082feea5 +0x03:  mov    0x8(%ebp),%eax
082feea8 +0x06:  mov    0x8(%eax),%eax
082feeab +0x09:  test   %eax,%eax
082feead +0x0b:  jle    082feec6 <+0x24>
082feeaf +0x0d:  mov    0x8(%ebp),%eax
082feeb2 +0x10:  mov    0x8(%eax),%edx
082feeb5 +0x13:  mov    0x8(%ebp),%eax
082feeb8 +0x16:  mov    0x4(%eax),%eax
082feebb +0x19:  cmp    %eax,%edx
082feebd +0x1b:  jl     082feec6 <+0x24>
082feebf +0x1d:  mov    $0x1,%eax
082feec4 +0x22:  jmp    082feecb <+0x29>
082feec6 +0x24:  mov    $0x0,%eax
082feecb +0x29:  pop    %ebp
082feecc +0x2a:  ret
082feecd +0x2b:  nop
```

## 反编译 C

```c
// CDungeonClearTracer::IsKilledBoss @ 0x82feea2

/* CDungeonClearTracer::IsKilledBoss() */

undefined4 __thiscall CDungeonClearTracer::IsKilledBoss(CDungeonClearTracer *this)

{
  undefined4 uVar1;
  
  if ((*(int *)(this + 8) < 1) || (*(int *)(this + 8) < *(int *)(this + 4))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
```
