# size

`_ZNK8fair_pvp13TeamInfoThird4sizeEv`

`fair_pvp::TeamInfoThird::size() const`

| 类 | 地址 |
|---|---|
| `fair_pvp::TeamInfoThird` | `0x0856270c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0856270c  _ZNK8fair_pvp13TeamInfoThird4sizeEv
#           fair_pvp::TeamInfoThird::size() const
# range [0x0856270c, 0x0856274b]
0856270c +0x00:  push   %ebp
0856270d +0x01:  mov    %esp,%ebp
0856270f +0x03:  sub    $0x10,%esp
08562712 +0x06:  movl   $0x0,-0x8(%ebp)
08562719 +0x0d:  movl   $0x0,-0x4(%ebp)
08562720 +0x14:  jmp    0856273c <+0x30>
08562722 +0x16:  mov    -0x4(%ebp),%edx
08562725 +0x19:  mov    0x8(%ebp),%eax
08562728 +0x1c:  shl    $0x4,%edx
0856272b +0x1f:  movzbl 0xc(%edx,%eax,1),%eax
08562730 +0x24:  test   %al,%al
08562732 +0x26:  je     08562738 <+0x2c>
08562734 +0x28:  addl   $0x1,-0x8(%ebp)
08562738 +0x2c:  addl   $0x1,-0x4(%ebp)
0856273c +0x30:  cmpl   $0x3,-0x4(%ebp)
08562740 +0x34:  setle  %al
08562743 +0x37:  test   %al,%al
08562745 +0x39:  jne    08562722 <+0x16>
08562747 +0x3b:  mov    -0x8(%ebp),%eax
0856274a +0x3e:  leave
0856274b +0x3f:  ret
```

## 反编译 C

```c
// fair_pvp::TeamInfoThird::size @ 0x856270c

/* fair_pvp::TeamInfoThird::size() const */

int __thiscall fair_pvp::TeamInfoThird::size(TeamInfoThird *this)

{
  int local_c;
  int local_8;
  
  local_c = 0;
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    if (this[local_8 * 0x10 + 0xc] != (TeamInfoThird)0x0) {
      local_c = local_c + 1;
    }
  }
  return local_c;
}
```
