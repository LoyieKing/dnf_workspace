# get_party_seatno

`_ZN6CParty16get_party_seatnoEP5CUser`

`CParty::get_party_seatno(CUser*)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085a277a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085a277a  _ZN6CParty16get_party_seatnoEP5CUser
#           CParty::get_party_seatno(CUser*)
# range [0x085a277a, 0x085a27e7]
085a277a +0x00:  push   %ebp
085a277b +0x01:  mov    %esp,%ebp
085a277d +0x03:  sub    $0x28,%esp
085a2780 +0x06:  cmpl   $0x0,0xc(%ebp)
085a2784 +0x0a:  jne    085a278d <+0x13>
085a2786 +0x0c:  mov    $0x0,%eax
085a278b +0x11:  jmp    085a27e5 <+0x6b>
085a278d +0x13:  movl   $0x0,-0xc(%ebp)
085a2794 +0x1a:  jmp    085a27d5 <+0x5b>
085a2796 +0x1c:  mov    -0xc(%ebp),%eax
085a2799 +0x1f:  mov    %eax,0x4(%esp)
085a279d +0x23:  mov    0x8(%ebp),%eax
085a27a0 +0x26:  mov    %eax,(%esp)
085a27a3 +0x29:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085a27a8 +0x2e:  xor    $0x1,%eax
085a27ab +0x31:  test   %al,%al
085a27ad +0x33:  jne    085a27d0 <+0x56>
085a27af +0x35:  mov    -0xc(%ebp),%edx
085a27b2 +0x38:  mov    0x8(%ebp),%ecx
085a27b5 +0x3b:  mov    %edx,%eax
085a27b7 +0x3d:  add    %eax,%eax
085a27b9 +0x3f:  add    %edx,%eax
085a27bb +0x41:  shl    $0x3,%eax
085a27be +0x44:  lea    (%ecx,%eax,1),%eax
085a27c1 +0x47:  add    $0x78,%eax
085a27c4 +0x4a:  mov    (%eax),%eax
085a27c6 +0x4c:  cmp    0xc(%ebp),%eax
085a27c9 +0x4f:  jne    085a27d1 <+0x57>
085a27cb +0x51:  mov    -0xc(%ebp),%eax
085a27ce +0x54:  jmp    085a27e5 <+0x6b>
085a27d0 +0x56:  nop
085a27d1 +0x57:  addl   $0x1,-0xc(%ebp)
085a27d5 +0x5b:  cmpl   $0x3,-0xc(%ebp)
085a27d9 +0x5f:  setle  %al
085a27dc +0x62:  test   %al,%al
085a27de +0x64:  jne    085a2796 <+0x1c>
085a27e0 +0x66:  mov    $0x0,%eax
085a27e5 +0x6b:  leave
085a27e6 +0x6c:  ret
085a27e7 +0x6d:  nop
```

## 反编译 C

```c
// CParty::get_party_seatno @ 0x85a277a

/* CParty::get_party_seatno(CUser*) */

int __thiscall CParty::get_party_seatno(CParty *this,CUser *param_1)

{
  char cVar1;
  int local_10;
  
  if (param_1 != (CUser *)0x0) {
    for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
      cVar1 = _checkValidUser(this,local_10);
      if ((cVar1 == '\x01') && (*(CUser **)(this + local_10 * 0x18 + 0x78) == param_1)) {
        return local_10;
      }
    }
  }
  return 0;
}
```
