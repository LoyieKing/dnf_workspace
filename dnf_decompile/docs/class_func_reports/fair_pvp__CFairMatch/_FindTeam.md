# _FindTeam

`_ZN8fair_pvp10CFairMatch9_FindTeamEP5CUser`

`fair_pvp::CFairMatch::_FindTeam(CUser*)`

| 类 | 地址 |
|---|---|
| `fair_pvp::CFairMatch` | `0x085663a8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085663a8  _ZN8fair_pvp10CFairMatch9_FindTeamEP5CUser
#           fair_pvp::CFairMatch::_FindTeam(CUser*)
# range [0x085663a8, 0x08566475]
085663a8 +0x00:  push   %ebp
085663a9 +0x01:  mov    %esp,%ebp
085663ab +0x03:  push   %ebx
085663ac +0x04:  sub    $0x10,%esp
085663af +0x07:  movl   $0x0,-0xc(%ebp)
085663b6 +0x0e:  jmp    0856645b <+0xb3>
085663bb +0x13:  movl   $0x0,-0x8(%ebp)
085663c2 +0x1a:  jmp    08566448 <+0xa0>
085663c7 +0x1f:  mov    -0xc(%ebp),%edx
085663ca +0x22:  mov    -0x8(%ebp),%eax
085663cd +0x25:  mov    0x8(%ebp),%ecx
085663d0 +0x28:  mov    %eax,%ebx
085663d2 +0x2a:  shl    $0x4,%ebx
085663d5 +0x2d:  mov    %edx,%eax
085663d7 +0x2f:  shl    $0x3,%eax
085663da +0x32:  add    %edx,%eax
085663dc +0x34:  shl    $0x3,%eax
085663df +0x37:  lea    (%ebx,%eax,1),%eax
085663e2 +0x3a:  lea    (%ecx,%eax,1),%eax
085663e5 +0x3d:  add    $0x10,%eax
085663e8 +0x40:  movzbl 0x18(%eax),%eax
085663ec +0x44:  test   %al,%al
085663ee +0x46:  je     08566444 <+0x9c>
085663f0 +0x48:  mov    -0xc(%ebp),%edx
085663f3 +0x4b:  mov    -0x8(%ebp),%eax
085663f6 +0x4e:  mov    0x8(%ebp),%ecx
085663f9 +0x51:  mov    %eax,%ebx
085663fb +0x53:  shl    $0x4,%ebx
085663fe +0x56:  mov    %edx,%eax
08566400 +0x58:  shl    $0x3,%eax
08566403 +0x5b:  add    %edx,%eax
08566405 +0x5d:  shl    $0x3,%eax
08566408 +0x60:  lea    (%ebx,%eax,1),%eax
0856640b +0x63:  lea    (%ecx,%eax,1),%eax
0856640e +0x66:  add    $0x24,%eax
08566411 +0x69:  mov    (%eax),%eax
08566413 +0x6b:  test   %eax,%eax
08566415 +0x6d:  je     08566444 <+0x9c>
08566417 +0x6f:  mov    -0xc(%ebp),%edx
0856641a +0x72:  mov    -0x8(%ebp),%eax
0856641d +0x75:  mov    0x8(%ebp),%ecx
08566420 +0x78:  mov    %eax,%ebx
08566422 +0x7a:  shl    $0x4,%ebx
08566425 +0x7d:  mov    %edx,%eax
08566427 +0x7f:  shl    $0x3,%eax
0856642a +0x82:  add    %edx,%eax
0856642c +0x84:  shl    $0x3,%eax
0856642f +0x87:  lea    (%ebx,%eax,1),%eax
08566432 +0x8a:  lea    (%ecx,%eax,1),%eax
08566435 +0x8d:  add    $0x24,%eax
08566438 +0x90:  mov    (%eax),%eax
0856643a +0x92:  cmp    0xc(%ebp),%eax
0856643d +0x95:  jne    08566444 <+0x9c>
0856643f +0x97:  mov    -0xc(%ebp),%eax
08566442 +0x9a:  jmp    0856646f <+0xc7>
08566444 +0x9c:  addl   $0x1,-0x8(%ebp)
08566448 +0xa0:  cmpl   $0x3,-0x8(%ebp)
0856644c +0xa4:  setle  %al
0856644f +0xa7:  test   %al,%al
08566451 +0xa9:  jne    085663c7 <+0x1f>
08566457 +0xaf:  addl   $0x1,-0xc(%ebp)
0856645b +0xb3:  cmpl   $0x1,-0xc(%ebp)
0856645f +0xb7:  setle  %al
08566462 +0xba:  test   %al,%al
08566464 +0xbc:  jne    085663bb <+0x13>
0856646a +0xc2:  mov    $0x2,%eax
0856646f +0xc7:  add    $0x10,%esp
08566472 +0xca:  pop    %ebx
08566473 +0xcb:  pop    %ebp
08566474 +0xcc:  ret
08566475 +0xcd:  nop
```

## 反编译 C

```c
// fair_pvp::CFairMatch::_FindTeam @ 0x85663a8

/* fair_pvp::CFairMatch::_FindTeam(CUser*) */

int __thiscall fair_pvp::CFairMatch::_FindTeam(CFairMatch *this,CUser *param_1)

{
  int local_10;
  int local_c;
  
  local_10 = 0;
  do {
    if (1 < local_10) {
      return 2;
    }
    for (local_c = 0; local_c < 4; local_c = local_c + 1) {
      if (((this[local_c * 0x10 + local_10 * 0x48 + 0x28] != (CFairMatch)0x0) &&
          (*(int *)(this + local_c * 0x10 + local_10 * 0x48 + 0x24) != 0)) &&
         (*(CUser **)(this + local_c * 0x10 + local_10 * 0x48 + 0x24) == param_1)) {
        return local_10;
      }
    }
    local_10 = local_10 + 1;
  } while( true );
}
```
