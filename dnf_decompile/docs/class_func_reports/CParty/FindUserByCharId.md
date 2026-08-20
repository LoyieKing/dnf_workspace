# FindUserByCharId

`_ZN6CParty16FindUserByCharIdEj`

`CParty::FindUserByCharId(unsigned int)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085a2140` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085a2140  _ZN6CParty16FindUserByCharIdEj
#           CParty::FindUserByCharId(unsigned int)
# range [0x085a2140, 0x085a21c9]
085a2140 +0x00:  push   %ebp
085a2141 +0x01:  mov    %esp,%ebp
085a2143 +0x03:  sub    $0x28,%esp
085a2146 +0x06:  movl   $0x0,-0xc(%ebp)
085a214d +0x0d:  jmp    085a21b7 <+0x77>
085a214f +0x0f:  mov    -0xc(%ebp),%eax
085a2152 +0x12:  mov    %eax,0x4(%esp)
085a2156 +0x16:  mov    0x8(%ebp),%eax
085a2159 +0x19:  mov    %eax,(%esp)
085a215c +0x1c:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085a2161 +0x21:  xor    $0x1,%eax
085a2164 +0x24:  test   %al,%al
085a2166 +0x26:  jne    085a21b2 <+0x72>
085a2168 +0x28:  mov    -0xc(%ebp),%edx
085a216b +0x2b:  mov    0x8(%ebp),%ecx
085a216e +0x2e:  mov    %edx,%eax
085a2170 +0x30:  add    %eax,%eax
085a2172 +0x32:  add    %edx,%eax
085a2174 +0x34:  shl    $0x3,%eax
085a2177 +0x37:  lea    (%ecx,%eax,1),%eax
085a217a +0x3a:  add    $0x78,%eax
085a217d +0x3d:  mov    (%eax),%eax
085a217f +0x3f:  movl   $0xffffffff,0x4(%esp)
085a2187 +0x47:  mov    %eax,(%esp)
085a218a +0x4a:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
085a218f +0x4f:  cmp    0xc(%ebp),%eax
085a2192 +0x52:  sete   %al
085a2195 +0x55:  test   %al,%al
085a2197 +0x57:  je     085a21b3 <+0x73>
085a2199 +0x59:  mov    -0xc(%ebp),%edx
085a219c +0x5c:  mov    0x8(%ebp),%ecx
085a219f +0x5f:  mov    %edx,%eax
085a21a1 +0x61:  add    %eax,%eax
085a21a3 +0x63:  add    %edx,%eax
085a21a5 +0x65:  shl    $0x3,%eax
085a21a8 +0x68:  lea    (%ecx,%eax,1),%eax
085a21ab +0x6b:  add    $0x78,%eax
085a21ae +0x6e:  mov    (%eax),%eax
085a21b0 +0x70:  jmp    085a21c7 <+0x87>
085a21b2 +0x72:  nop
085a21b3 +0x73:  addl   $0x1,-0xc(%ebp)
085a21b7 +0x77:  cmpl   $0x3,-0xc(%ebp)
085a21bb +0x7b:  setle  %al
085a21be +0x7e:  test   %al,%al
085a21c0 +0x80:  jne    085a214f <+0xf>
085a21c2 +0x82:  mov    $0x0,%eax
085a21c7 +0x87:  leave
085a21c8 +0x88:  ret
085a21c9 +0x89:  nop
```

## 反编译 C

```c
// CParty::FindUserByCharId @ 0x85a2140

/* CParty::FindUserByCharId(unsigned int) */

undefined4 __thiscall CParty::FindUserByCharId(CParty *this,uint param_1)

{
  char cVar1;
  uint uVar2;
  int local_10;
  
  local_10 = 0;
  while( true ) {
    if (3 < local_10) {
      return 0;
    }
    cVar1 = _checkValidUser(this,local_10);
    if ((cVar1 == '\x01') &&
       (uVar2 = CUser::get_charac_no(*(CUser **)(this + local_10 * 0x18 + 0x78),-1),
       uVar2 == param_1)) break;
    local_10 = local_10 + 1;
  }
  return *(undefined4 *)(this + local_10 * 0x18 + 0x78);
}
```
