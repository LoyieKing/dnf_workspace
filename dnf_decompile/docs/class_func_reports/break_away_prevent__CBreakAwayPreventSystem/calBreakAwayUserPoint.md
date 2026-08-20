# calBreakAwayUserPoint

`_ZN18break_away_prevent23CBreakAwayPreventSystem21calBreakAwayUserPointEv`

`break_away_prevent::CBreakAwayPreventSystem::calBreakAwayUserPoint()`

| 类 | 地址 |
|---|---|
| `break_away_prevent::CBreakAwayPreventSystem` | `0x0831c810` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0831c810  _ZN18break_away_prevent23CBreakAwayPreventSystem21calBreakAwayUserPointEv
#           break_away_prevent::CBreakAwayPreventSystem::calBreakAwayUserPoint()
# range [0x0831c810, 0x0831c871]
0831c810 +0x00:  push   %ebp
0831c811 +0x01:  mov    %esp,%ebp
0831c813 +0x03:  sub    $0x10,%esp
0831c816 +0x06:  movl   $0x0,-0xc(%ebp)
0831c81d +0x0d:  movl   $0x0,-0x8(%ebp)
0831c824 +0x14:  movl   $0xf,-0x4(%ebp)
0831c82b +0x1b:  jmp    0831c853 <+0x43>
0831c82d +0x1d:  mov    -0x4(%ebp),%eax
0831c830 +0x20:  mov    0x8(%ebp),%edx
0831c833 +0x23:  movzbl 0x30b(%edx,%eax,1),%eax
0831c83b +0x2b:  cmp    $0x31,%al
0831c83d +0x2d:  jne    0831c84f <+0x3f>
0831c83f +0x2f:  cmpl   $0x15,-0x4(%ebp)
0831c843 +0x33:  jbe    0831c84b <+0x3b>
0831c845 +0x35:  addl   $0x1,-0x8(%ebp)
0831c849 +0x39:  jmp    0831c84f <+0x3f>
0831c84b +0x3b:  addl   $0x1,-0xc(%ebp)
0831c84f +0x3f:  addl   $0x1,-0x4(%ebp)
0831c853 +0x43:  cmpl   $0x1c,-0x4(%ebp)
0831c857 +0x47:  setbe  %al
0831c85a +0x4a:  test   %al,%al
0831c85c +0x4c:  jne    0831c82d <+0x1d>
0831c85e +0x4e:  cmpl   $0x1,-0x8(%ebp)
0831c862 +0x52:  je     0831c86b <+0x5b>
0831c864 +0x54:  mov    $0x0,%eax
0831c869 +0x59:  jmp    0831c870 <+0x60>
0831c86b +0x5b:  mov    $0x1,%eax
0831c870 +0x60:  leave
0831c871 +0x61:  ret
```

## 反编译 C

```c
// break_away_prevent::CBreakAwayPreventSystem::calBreakAwayUserPoint @ 0x831c810

/* break_away_prevent::CBreakAwayPreventSystem::calBreakAwayUserPoint() */

bool __thiscall
break_away_prevent::CBreakAwayPreventSystem::calBreakAwayUserPoint(CBreakAwayPreventSystem *this)

{
  int local_c;
  uint local_8;
  
  local_c = 0;
  for (local_8 = 0xf; local_8 < 0x1d; local_8 = local_8 + 1) {
    if ((this[local_8 + 0x30b] == (CBreakAwayPreventSystem)0x31) && (0x15 < local_8)) {
      local_c = local_c + 1;
    }
  }
  return local_c == 1;
}
```
