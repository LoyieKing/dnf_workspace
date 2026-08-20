# CheckRematch

`_ZN8fair_pvp10CFairMatch12CheckRematchEP8PvP_Room`

`fair_pvp::CFairMatch::CheckRematch(PvP_Room*)`

| 类 | 地址 |
|---|---|
| `fair_pvp::CFairMatch` | `0x08565d04` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08565d04  _ZN8fair_pvp10CFairMatch12CheckRematchEP8PvP_Room
#           fair_pvp::CFairMatch::CheckRematch(PvP_Room*)
# range [0x08565d04, 0x08565d85]
08565d04 +0x00:  push   %ebp
08565d05 +0x01:  mov    %esp,%ebp
08565d07 +0x03:  sub    $0x28,%esp
08565d0a +0x06:  mov    0x8(%ebp),%eax
08565d0d +0x09:  mov    0xb0(%eax),%eax
08565d13 +0x0f:  cmp    $0x2,%eax
08565d16 +0x12:  jle    08565d1f <+0x1b>
08565d18 +0x14:  mov    $0x0,%eax
08565d1d +0x19:  jmp    08565d84 <+0x80>
08565d1f +0x1b:  mov    0xc(%ebp),%eax
08565d22 +0x1e:  mov    %eax,0x4(%esp)
08565d26 +0x22:  mov    0x8(%ebp),%eax
08565d29 +0x25:  mov    %eax,(%esp)
08565d2c +0x28:  call   08563b16 <_ZNK8fair_pvp10CFairMatch17_CheckRematchableEP8PvP_Room>  ; fair_pvp::CFairMatch::_CheckRematchable(PvP_Room*) const
08565d31 +0x2d:  xor    $0x1,%eax
08565d34 +0x30:  test   %al,%al
08565d36 +0x32:  je     08565d3f <+0x3b>
08565d38 +0x34:  mov    $0x0,%eax
08565d3d +0x39:  jmp    08565d84 <+0x80>
08565d3f +0x3b:  movl   $0x0,-0xc(%ebp)
08565d46 +0x42:  jmp    08565d74 <+0x70>
08565d48 +0x44:  mov    -0xc(%ebp),%edx
08565d4b +0x47:  mov    0x8(%ebp),%ecx
08565d4e +0x4a:  mov    %edx,%eax
08565d50 +0x4c:  shl    $0x3,%eax
08565d53 +0x4f:  add    %edx,%eax
08565d55 +0x51:  shl    $0x3,%eax
08565d58 +0x54:  lea    (%ecx,%eax,1),%eax
08565d5b +0x57:  add    $0x10,%eax
08565d5e +0x5a:  movzbl 0xc(%eax),%eax
08565d62 +0x5e:  xor    $0x1,%eax
08565d65 +0x61:  test   %al,%al
08565d67 +0x63:  je     08565d70 <+0x6c>
08565d69 +0x65:  mov    $0x0,%eax
08565d6e +0x6a:  jmp    08565d84 <+0x80>
08565d70 +0x6c:  addl   $0x1,-0xc(%ebp)
08565d74 +0x70:  cmpl   $0x1,-0xc(%ebp)
08565d78 +0x74:  setle  %al
08565d7b +0x77:  test   %al,%al
08565d7d +0x79:  jne    08565d48 <+0x44>
08565d7f +0x7b:  mov    $0x1,%eax
08565d84 +0x80:  leave
08565d85 +0x81:  ret
```

## 反编译 C

```c
// fair_pvp::CFairMatch::CheckRematch @ 0x8565d04

/* fair_pvp::CFairMatch::CheckRematch(PvP_Room*) */

undefined4 __thiscall fair_pvp::CFairMatch::CheckRematch(CFairMatch *this,PvP_Room *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int local_10;
  
  if (*(int *)(this + 0xb0) < 3) {
    cVar1 = _CheckRematchable(this,param_1);
    if (cVar1 == '\x01') {
      for (local_10 = 0; local_10 < 2; local_10 = local_10 + 1) {
        if (this[local_10 * 0x48 + 0x1c] != (CFairMatch)0x1) {
          return 0;
        }
      }
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
