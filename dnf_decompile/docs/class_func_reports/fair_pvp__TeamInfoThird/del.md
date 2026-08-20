# del

`_ZN8fair_pvp13TeamInfoThird3delEP5CUser`

`fair_pvp::TeamInfoThird::del(CUser*)`

| 类 | 地址 |
|---|---|
| `fair_pvp::TeamInfoThird` | `0x085626aa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085626aa  _ZN8fair_pvp13TeamInfoThird3delEP5CUser
#           fair_pvp::TeamInfoThird::del(CUser*)
# range [0x085626aa, 0x0856270b]
085626aa +0x00:  push   %ebp
085626ab +0x01:  mov    %esp,%ebp
085626ad +0x03:  sub    $0x10,%esp
085626b0 +0x06:  movl   $0x0,-0x4(%ebp)
085626b7 +0x0d:  jmp    085626f9 <+0x4f>
085626b9 +0x0f:  mov    -0x4(%ebp),%edx
085626bc +0x12:  mov    0x8(%ebp),%eax
085626bf +0x15:  shl    $0x4,%edx
085626c2 +0x18:  movzbl 0xc(%edx,%eax,1),%eax
085626c7 +0x1d:  test   %al,%al
085626c9 +0x1f:  je     085626f5 <+0x4b>
085626cb +0x21:  mov    -0x4(%ebp),%edx
085626ce +0x24:  mov    0x8(%ebp),%eax
085626d1 +0x27:  shl    $0x4,%edx
085626d4 +0x2a:  add    %edx,%eax
085626d6 +0x2c:  add    $0x8,%eax
085626d9 +0x2f:  mov    (%eax),%eax
085626db +0x31:  cmp    0xc(%ebp),%eax
085626de +0x34:  jne    085626f5 <+0x4b>
085626e0 +0x36:  mov    -0x4(%ebp),%edx
085626e3 +0x39:  mov    0x8(%ebp),%eax
085626e6 +0x3c:  shl    $0x4,%edx
085626e9 +0x3f:  movb   $0x0,0xc(%edx,%eax,1)
085626ee +0x44:  mov    $0x1,%eax
085626f3 +0x49:  jmp    08562709 <+0x5f>
085626f5 +0x4b:  addl   $0x1,-0x4(%ebp)
085626f9 +0x4f:  cmpl   $0x3,-0x4(%ebp)
085626fd +0x53:  setle  %al
08562700 +0x56:  test   %al,%al
08562702 +0x58:  jne    085626b9 <+0xf>
08562704 +0x5a:  mov    $0x0,%eax
08562709 +0x5f:  leave
0856270a +0x60:  ret
0856270b +0x61:  nop
```

## 反编译 C

```c
// fair_pvp::TeamInfoThird::del @ 0x85626aa

/* fair_pvp::TeamInfoThird::del(CUser*) */

undefined4 __thiscall fair_pvp::TeamInfoThird::del(TeamInfoThird *this,CUser *param_1)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (3 < local_8) {
      return 0;
    }
    if ((this[local_8 * 0x10 + 0xc] != (TeamInfoThird)0x0) &&
       (*(CUser **)(this + local_8 * 0x10 + 8) == param_1)) break;
    local_8 = local_8 + 1;
  }
  this[local_8 * 0x10 + 0xc] = (TeamInfoThird)0x0;
  return 1;
}
```
