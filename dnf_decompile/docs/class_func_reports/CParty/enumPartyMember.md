# enumPartyMember

`_ZN6CParty15enumPartyMemberEPFbP5CUserE`

`CParty::enumPartyMember(bool (*)(CUser*))`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b669a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b669a  _ZN6CParty15enumPartyMemberEPFbP5CUserE
#           CParty::enumPartyMember(bool (*)(CUser*))
# range [0x085b669a, 0x085b66f9]
085b669a +0x00:  push   %ebp
085b669b +0x01:  mov    %esp,%ebp
085b669d +0x03:  sub    $0x28,%esp
085b66a0 +0x06:  movl   $0x0,-0xc(%ebp)
085b66a7 +0x0d:  jmp    085b66e9 <+0x4f>
085b66a9 +0x0f:  mov    -0xc(%ebp),%eax
085b66ac +0x12:  mov    %eax,0x4(%esp)
085b66b0 +0x16:  mov    0x8(%ebp),%eax
085b66b3 +0x19:  mov    %eax,(%esp)
085b66b6 +0x1c:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085b66bb +0x21:  test   %al,%al
085b66bd +0x23:  je     085b66e5 <+0x4b>
085b66bf +0x25:  mov    -0xc(%ebp),%edx
085b66c2 +0x28:  mov    0x8(%ebp),%ecx
085b66c5 +0x2b:  mov    %edx,%eax
085b66c7 +0x2d:  add    %eax,%eax
085b66c9 +0x2f:  add    %edx,%eax
085b66cb +0x31:  shl    $0x3,%eax
085b66ce +0x34:  lea    (%ecx,%eax,1),%eax
085b66d1 +0x37:  add    $0x78,%eax
085b66d4 +0x3a:  mov    (%eax),%eax
085b66d6 +0x3c:  mov    %eax,(%esp)
085b66d9 +0x3f:  mov    0xc(%ebp),%eax
085b66dc +0x42:  call   *%eax
085b66de +0x44:  xor    $0x1,%eax
085b66e1 +0x47:  test   %al,%al
085b66e3 +0x49:  jne    085b66f6 <+0x5c>
085b66e5 +0x4b:  addl   $0x1,-0xc(%ebp)
085b66e9 +0x4f:  cmpl   $0x3,-0xc(%ebp)
085b66ed +0x53:  setle  %al
085b66f0 +0x56:  test   %al,%al
085b66f2 +0x58:  jne    085b66a9 <+0xf>
085b66f4 +0x5a:  jmp    085b66f7 <+0x5d>
085b66f6 +0x5c:  nop
085b66f7 +0x5d:  leave
085b66f8 +0x5e:  ret
085b66f9 +0x5f:  nop
```

## 反编译 C

```c
// CParty::enumPartyMember @ 0x85b669a

/* CParty::enumPartyMember(bool (*)(CUser*)) */

void __thiscall CParty::enumPartyMember(CParty *this,_func_bool_CUser_ptr *param_1)

{
  char cVar1;
  bool bVar2;
  int local_10;
  
  local_10 = 0;
  while ((local_10 < 4 &&
         ((cVar1 = _checkValidUser(this,local_10), cVar1 == '\0' ||
          (bVar2 = (*param_1)(*(CUser **)(this + local_10 * 0x18 + 0x78)), bVar2))))) {
    local_10 = local_10 + 1;
  }
  return;
}
```
