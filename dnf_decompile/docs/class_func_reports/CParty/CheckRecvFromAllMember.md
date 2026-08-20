# CheckRecvFromAllMember

`_ZN6CParty22CheckRecvFromAllMemberEP5CUser`

`CParty::CheckRecvFromAllMember(CUser*)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b3fd8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b3fd8  _ZN6CParty22CheckRecvFromAllMemberEP5CUser
#           CParty::CheckRecvFromAllMember(CUser*)
# range [0x085b3fd8, 0x085b401b]
085b3fd8 +0x00:  push   %ebp
085b3fd9 +0x01:  mov    %esp,%ebp
085b3fdb +0x03:  sub    $0x18,%esp
085b3fde +0x06:  mov    0xc(%ebp),%eax
085b3fe1 +0x09:  mov    %eax,0x4(%esp)
085b3fe5 +0x0d:  mov    0x8(%ebp),%eax
085b3fe8 +0x10:  mov    %eax,(%esp)
085b3feb +0x13:  call   085b3f34 <_ZN6CParty26set_recv_party_packet_flagEP5CUser>  ; CParty::set_recv_party_packet_flag(CUser*)
085b3ff0 +0x18:  mov    0x8(%ebp),%eax
085b3ff3 +0x1b:  mov    %eax,(%esp)
085b3ff6 +0x1e:  call   085b3f72 <_ZN6CParty21recv_party_packet_allEv>  ; CParty::recv_party_packet_all()
085b3ffb +0x23:  xor    $0x1,%eax
085b3ffe +0x26:  test   %al,%al
085b4000 +0x28:  je     085b4009 <+0x31>
085b4002 +0x2a:  mov    $0x0,%eax
085b4007 +0x2f:  jmp    085b4019 <+0x41>
085b4009 +0x31:  mov    0x8(%ebp),%eax
085b400c +0x34:  mov    %eax,(%esp)
085b400f +0x37:  call   085bf6e0 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0xc3e>  ; global constructors keyed to CParty::cMember::cMember()+0xc3e
085b4014 +0x3c:  mov    $0x1,%eax
085b4019 +0x41:  leave
085b401a +0x42:  ret
085b401b +0x43:  nop
```

## 反编译 C

```c
// CParty::CheckRecvFromAllMember @ 0x85b3fd8

/* CParty::CheckRecvFromAllMember(CUser*) */

bool __thiscall CParty::CheckRecvFromAllMember(CParty *this,CUser *param_1)

{
  char cVar1;
  
  set_recv_party_packet_flag(this,param_1);
  cVar1 = recv_party_packet_all(this);
  if (cVar1 == '\x01') {
    reset_recv_flag(this);
  }
  return cVar1 == '\x01';
}
```
