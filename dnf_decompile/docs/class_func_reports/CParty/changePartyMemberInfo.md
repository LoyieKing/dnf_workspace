# changePartyMemberInfo

`_ZN6CParty21changePartyMemberInfoER12MSG_MOVE_MAPc`

`CParty::changePartyMemberInfo(MSG_MOVE_MAP&, char)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085a8d1e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085a8d1e  _ZN6CParty21changePartyMemberInfoER12MSG_MOVE_MAPc
#           CParty::changePartyMemberInfo(MSG_MOVE_MAP&, char)
# range [0x085a8d1e, 0x085a8e0d]
085a8d1e +0x00:  push   %ebp
085a8d1f +0x01:  mov    %esp,%ebp
085a8d21 +0x03:  sub    $0x28,%esp
085a8d24 +0x06:  mov    0x10(%ebp),%eax
085a8d27 +0x09:  mov    %al,-0xc(%ebp)
085a8d2a +0x0c:  movsbl -0xc(%ebp),%eax
085a8d2e +0x10:  mov    %eax,0x4(%esp)
085a8d32 +0x14:  mov    0x8(%ebp),%eax
085a8d35 +0x17:  mov    %eax,(%esp)
085a8d38 +0x1a:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085a8d3d +0x1f:  test   %al,%al
085a8d3f +0x21:  je     085a8e0c <+0xee>
085a8d45 +0x27:  movsbl -0xc(%ebp),%eax
085a8d49 +0x2b:  mov    0x8(%ebp),%edx
085a8d4c +0x2e:  movzbl 0x380(%edx,%eax,1),%eax
085a8d54 +0x36:  xor    $0x1,%eax
085a8d57 +0x39:  test   %al,%al
085a8d59 +0x3b:  je     085a8db8 <+0x9a>
085a8d5b +0x3d:  movsbl -0xc(%ebp),%eax
085a8d5f +0x41:  mov    0x8(%ebp),%edx
085a8d62 +0x44:  movzbl 0x384(%edx,%eax,1),%eax
085a8d6a +0x4c:  xor    $0x1,%eax
085a8d6d +0x4f:  test   %al,%al
085a8d6f +0x51:  je     085a8da9 <+0x8b>
085a8d71 +0x53:  movsbl -0xc(%ebp),%eax
085a8d75 +0x57:  mov    0x8(%ebp),%edx
085a8d78 +0x5a:  movzbl 0x388(%edx,%eax,1),%eax
085a8d80 +0x62:  xor    $0x1,%eax
085a8d83 +0x65:  test   %al,%al
085a8d85 +0x67:  je     085a8da9 <+0x8b>
085a8d87 +0x69:  movsbl -0xc(%ebp),%eax
085a8d8b +0x6d:  mov    0x8(%ebp),%edx
085a8d8e +0x70:  lea    0xe0(%eax),%ecx
085a8d94 +0x76:  mov    0x10(%edx,%ecx,4),%edx
085a8d98 +0x7a:  lea    0x1(%edx),%ecx
085a8d9b +0x7d:  mov    0x8(%ebp),%edx
085a8d9e +0x80:  add    $0xe0,%eax
085a8da3 +0x85:  mov    %ecx,0x10(%edx,%eax,4)
085a8da7 +0x89:  jmp    085a8db8 <+0x9a>
085a8da9 +0x8b:  movsbl -0xc(%ebp),%eax
085a8dad +0x8f:  mov    0x8(%ebp),%edx
085a8db0 +0x92:  movb   $0x0,0x384(%edx,%eax,1)
085a8db8 +0x9a:  movsbl -0xc(%ebp),%eax
085a8dbc +0x9e:  mov    0x8(%ebp),%edx
085a8dbf +0xa1:  movb   $0x0,0x388(%edx,%eax,1)
085a8dc7 +0xa9:  mov    0xc(%ebp),%eax
085a8dca +0xac:  movzbl 0x17(%eax),%eax
085a8dce +0xb0:  movzbl %al,%eax
085a8dd1 +0xb3:  mov    %eax,0x4(%esp)
085a8dd5 +0xb7:  mov    0x8(%ebp),%eax
085a8dd8 +0xba:  mov    %eax,(%esp)
085a8ddb +0xbd:  call   085a8c88 <_ZN6CParty12canFatigueUpEh>  ; CParty::canFatigueUp(unsigned char)
085a8de0 +0xc2:  test   %al,%al
085a8de2 +0xc4:  je     085a8e0c <+0xee>
085a8de4 +0xc6:  movsbl -0xc(%ebp),%edx
085a8de8 +0xca:  mov    0x8(%ebp),%ecx
085a8deb +0xcd:  mov    %edx,%eax
085a8ded +0xcf:  add    %eax,%eax
085a8def +0xd1:  add    %edx,%eax
085a8df1 +0xd3:  shl    $0x3,%eax
085a8df4 +0xd6:  lea    (%ecx,%eax,1),%eax
085a8df7 +0xd9:  add    $0x78,%eax
085a8dfa +0xdc:  mov    (%eax),%eax
085a8dfc +0xde:  movl   $0x0,0x4(%esp)
085a8e04 +0xe6:  mov    %eax,(%esp)
085a8e07 +0xe9:  call   08655c60 <_ZN5CUser9FatigueUpEi>  ; CUser::FatigueUp(int)
085a8e0c +0xee:  leave
085a8e0d +0xef:  ret
```

## 反编译 C

```c
// CParty::changePartyMemberInfo @ 0x85a8d1e

/* CParty::changePartyMemberInfo(MSG_MOVE_MAP&, char) */

void __thiscall CParty::changePartyMemberInfo(CParty *this,MSG_MOVE_MAP *param_1,char param_2)

{
  char cVar1;
  
  cVar1 = _checkValidUser(this,(int)param_2);
  if (cVar1 != '\0') {
    if (this[param_2 + 0x380] != (CParty)0x1) {
      if ((this[param_2 + 900] == (CParty)0x1) || (this[param_2 + 0x388] == (CParty)0x1)) {
        this[param_2 + 900] = (CParty)0x0;
      }
      else {
        *(int *)(this + (param_2 + 0xe0) * 4 + 0x10) =
             *(int *)(this + (param_2 + 0xe0) * 4 + 0x10) + 1;
      }
    }
    this[param_2 + 0x388] = (CParty)0x0;
    cVar1 = canFatigueUp((uchar)this);
    if (cVar1 != '\0') {
      CUser::FatigueUp(*(CUser **)(this + param_2 * 0x18 + 0x78),0);
    }
  }
  return;
}
```
