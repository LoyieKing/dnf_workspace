# GetSchoolNo

`_ZN12CLeagueMatch11GetSchoolNoEv`

`CLeagueMatch::GetSchoolNo()`

| 类 | 地址 |
|---|---|
| `CLeagueMatch` | `0x0855f9aa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0855f9aa  _ZN12CLeagueMatch11GetSchoolNoEv
#           CLeagueMatch::GetSchoolNo()
# range [0x0855f9aa, 0x0855fa13]
0855f9aa +0x00:  push   %ebp
0855f9ab +0x01:  mov    %esp,%ebp
0855f9ad +0x03:  sub    $0x10,%esp
0855f9b0 +0x06:  movl   $0x0,-0x4(%ebp)
0855f9b7 +0x0d:  jmp    0855fa01 <+0x57>
0855f9b9 +0x0f:  mov    -0x4(%ebp),%eax
0855f9bc +0x12:  mov    0x8(%ebp),%ecx
0855f9bf +0x15:  lea    0x0(,%eax,4),%edx
0855f9c6 +0x1c:  lea    0x0(,%edx,8),%eax
0855f9cd +0x23:  sub    %edx,%eax
0855f9cf +0x25:  lea    (%ecx,%eax,1),%eax
0855f9d2 +0x28:  add    $0x10,%eax
0855f9d5 +0x2b:  movzbl 0x18(%eax),%eax
0855f9d9 +0x2f:  test   %al,%al
0855f9db +0x31:  je     0855f9fd <+0x53>
0855f9dd +0x33:  mov    -0x4(%ebp),%eax
0855f9e0 +0x36:  mov    0x8(%ebp),%ecx
0855f9e3 +0x39:  lea    0x0(,%eax,4),%edx
0855f9ea +0x40:  lea    0x0(,%edx,8),%eax
0855f9f1 +0x47:  sub    %edx,%eax
0855f9f3 +0x49:  lea    (%ecx,%eax,1),%eax
0855f9f6 +0x4c:  add    $0x2c,%eax
0855f9f9 +0x4f:  mov    (%eax),%eax
0855f9fb +0x51:  jmp    0855fa11 <+0x67>
0855f9fd +0x53:  addl   $0x1,-0x4(%ebp)
0855fa01 +0x57:  cmpl   $0x3,-0x4(%ebp)
0855fa05 +0x5b:  setle  %al
0855fa08 +0x5e:  test   %al,%al
0855fa0a +0x60:  jne    0855f9b9 <+0xf>
0855fa0c +0x62:  mov    $0x0,%eax
0855fa11 +0x67:  leave
0855fa12 +0x68:  ret
0855fa13 +0x69:  nop
```

## 反编译 C

```c
// CLeagueMatch::GetSchoolNo @ 0x855f9aa

/* CLeagueMatch::GetSchoolNo() */

undefined4 __thiscall CLeagueMatch::GetSchoolNo(CLeagueMatch *this)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (3 < local_8) {
      return 0;
    }
    if (this[local_8 * 0x1c + 0x28] != (CLeagueMatch)0x0) break;
    local_8 = local_8 + 1;
  }
  return *(undefined4 *)(this + local_8 * 0x1c + 0x2c);
}
```
