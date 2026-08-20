# Reset

`_ZN19CDungeonClearTracer5ResetEv`

`CDungeonClearTracer::Reset()`

| 类 | 地址 |
|---|---|
| `CDungeonClearTracer` | `0x082feece` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082feece  _ZN19CDungeonClearTracer5ResetEv
#           CDungeonClearTracer::Reset()
# range [0x082feece, 0x082fef11]
082feece +0x00:  push   %ebp
082feecf +0x01:  mov    %esp,%ebp
082feed1 +0x03:  mov    0x8(%ebp),%eax
082feed4 +0x06:  movl   $0x0,(%eax)
082feeda +0x0c:  mov    0x8(%ebp),%eax
082feedd +0x0f:  movl   $0x0,0x4(%eax)
082feee4 +0x16:  mov    0x8(%ebp),%eax
082feee7 +0x19:  movl   $0x0,0x8(%eax)
082feeee +0x20:  mov    0x8(%ebp),%eax
082feef1 +0x23:  movl   $0x0,0xc(%eax)
082feef8 +0x2a:  mov    0x8(%ebp),%eax
082feefb +0x2d:  movl   $0x0,0x10(%eax)
082fef02 +0x34:  mov    0x8(%ebp),%eax
082fef05 +0x37:  movb   $0x0,0x14(%eax)
082fef09 +0x3b:  mov    0x8(%ebp),%eax
082fef0c +0x3e:  movb   $0x0,0x15(%eax)
082fef10 +0x42:  pop    %ebp
082fef11 +0x43:  ret
```

## 反编译 C

```c
// CDungeonClearTracer::Reset @ 0x82feece

/* CDungeonClearTracer::Reset() */

void __thiscall CDungeonClearTracer::Reset(CDungeonClearTracer *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  this[0x14] = (CDungeonClearTracer)0x0;
  this[0x15] = (CDungeonClearTracer)0x0;
  return;
}
```
