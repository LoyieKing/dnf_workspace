# GetPlayerCount

`_ZN8fair_pvp10CFairMatch14GetPlayerCountEv`

`fair_pvp::CFairMatch::GetPlayerCount()`

| 类 | 地址 |
|---|---|
| `fair_pvp::CFairMatch` | `0x08566d3e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08566d3e  _ZN8fair_pvp10CFairMatch14GetPlayerCountEv
#           fair_pvp::CFairMatch::GetPlayerCount()
# range [0x08566d3e, 0x08566d9b]
08566d3e +0x00:  push   %ebp
08566d3f +0x01:  mov    %esp,%ebp
08566d41 +0x03:  sub    $0x10,%esp
08566d44 +0x06:  movl   $0x0,-0x8(%ebp)
08566d4b +0x0d:  movl   $0x0,-0x4(%ebp)
08566d52 +0x14:  jmp    08566d8b <+0x4d>
08566d54 +0x16:  mov    -0x4(%ebp),%edx
08566d57 +0x19:  mov    0x8(%ebp),%eax
08566d5a +0x1c:  add    $0x1,%edx
08566d5d +0x1f:  shl    $0x4,%edx
08566d60 +0x22:  movzbl 0x18(%edx,%eax,1),%eax
08566d65 +0x27:  test   %al,%al
08566d67 +0x29:  je     08566d6d <+0x2f>
08566d69 +0x2b:  addl   $0x1,-0x8(%ebp)
08566d6d +0x2f:  mov    -0x4(%ebp),%edx
08566d70 +0x32:  mov    0x8(%ebp),%eax
08566d73 +0x35:  shl    $0x4,%edx
08566d76 +0x38:  add    %edx,%eax
08566d78 +0x3a:  add    $0x58,%eax
08566d7b +0x3d:  movzbl 0x18(%eax),%eax
08566d7f +0x41:  test   %al,%al
08566d81 +0x43:  je     08566d87 <+0x49>
08566d83 +0x45:  addl   $0x1,-0x8(%ebp)
08566d87 +0x49:  addl   $0x1,-0x4(%ebp)
08566d8b +0x4d:  cmpl   $0x3,-0x4(%ebp)
08566d8f +0x51:  setle  %al
08566d92 +0x54:  test   %al,%al
08566d94 +0x56:  jne    08566d54 <+0x16>
08566d96 +0x58:  mov    -0x8(%ebp),%eax
08566d99 +0x5b:  leave
08566d9a +0x5c:  ret
08566d9b +0x5d:  nop
```

## 反编译 C

```c
// fair_pvp::CFairMatch::GetPlayerCount @ 0x8566d3e

/* fair_pvp::CFairMatch::GetPlayerCount() */

int __thiscall fair_pvp::CFairMatch::GetPlayerCount(CFairMatch *this)

{
  int local_c;
  int local_8;
  
  local_c = 0;
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    if (this[(local_8 + 1) * 0x10 + 0x18] != (CFairMatch)0x0) {
      local_c = local_c + 1;
    }
    if (this[local_8 * 0x10 + 0x70] != (CFairMatch)0x0) {
      local_c = local_c + 1;
    }
  }
  return local_c;
}
```
