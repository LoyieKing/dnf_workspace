# recv_party_packet_all

`_ZN6CParty21recv_party_packet_allEv`

`CParty::recv_party_packet_all()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b3f72` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b3f72  _ZN6CParty21recv_party_packet_allEv
#           CParty::recv_party_packet_all()
# range [0x085b3f72, 0x085b3fd7]
085b3f72 +0x00:  push   %ebp
085b3f73 +0x01:  mov    %esp,%ebp
085b3f75 +0x03:  sub    $0x28,%esp
085b3f78 +0x06:  movl   $0x0,-0xc(%ebp)
085b3f7f +0x0d:  jmp    085b3fc5 <+0x53>
085b3f81 +0x0f:  mov    -0xc(%ebp),%eax
085b3f84 +0x12:  mov    %eax,0x4(%esp)
085b3f88 +0x16:  mov    0x8(%ebp),%eax
085b3f8b +0x19:  mov    %eax,(%esp)
085b3f8e +0x1c:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085b3f93 +0x21:  xor    $0x1,%eax
085b3f96 +0x24:  test   %al,%al
085b3f98 +0x26:  jne    085b3fc0 <+0x4e>
085b3f9a +0x28:  mov    0x8(%ebp),%eax
085b3f9d +0x2b:  lea    0x1dc(%eax),%edx
085b3fa3 +0x31:  mov    -0xc(%ebp),%eax
085b3fa6 +0x34:  mov    %eax,0x4(%esp)
085b3faa +0x38:  mov    %edx,(%esp)
085b3fad +0x3b:  call   085bf406 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x964>  ; global constructors keyed to CParty::cMember::cMember()+0x964
085b3fb2 +0x40:  xor    $0x1,%eax
085b3fb5 +0x43:  test   %al,%al
085b3fb7 +0x45:  je     085b3fc1 <+0x4f>
085b3fb9 +0x47:  mov    $0x0,%eax
085b3fbe +0x4c:  jmp    085b3fd5 <+0x63>
085b3fc0 +0x4e:  nop
085b3fc1 +0x4f:  addl   $0x1,-0xc(%ebp)
085b3fc5 +0x53:  cmpl   $0x3,-0xc(%ebp)
085b3fc9 +0x57:  setle  %al
085b3fcc +0x5a:  test   %al,%al
085b3fce +0x5c:  jne    085b3f81 <+0xf>
085b3fd0 +0x5e:  mov    $0x1,%eax
085b3fd5 +0x63:  leave
085b3fd6 +0x64:  ret
085b3fd7 +0x65:  nop
```

## 反编译 C

```c
// CParty::recv_party_packet_all @ 0x85b3f72

/* CParty::recv_party_packet_all() */

undefined4 __thiscall CParty::recv_party_packet_all(CParty *this)

{
  char cVar1;
  int local_10;
  
  local_10 = 0;
  while( true ) {
    if (3 < local_10) {
      return 1;
    }
    cVar1 = _checkValidUser(this,local_10);
    if ((cVar1 == '\x01') &&
       (cVar1 = CPartyResultRecvFlag::IsRecv((CPartyResultRecvFlag *)(this + 0x1dc),local_10),
       cVar1 != '\x01')) break;
    local_10 = local_10 + 1;
  }
  return 0;
}
```
