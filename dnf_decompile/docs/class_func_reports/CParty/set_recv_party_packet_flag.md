# set_recv_party_packet_flag

`_ZN6CParty26set_recv_party_packet_flagEP5CUser`

`CParty::set_recv_party_packet_flag(CUser*)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b3f34` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b3f34  _ZN6CParty26set_recv_party_packet_flagEP5CUser
#           CParty::set_recv_party_packet_flag(CUser*)
# range [0x085b3f34, 0x085b3f71]
085b3f34 +0x00:  push   %ebp
085b3f35 +0x01:  mov    %esp,%ebp
085b3f37 +0x03:  sub    $0x28,%esp
085b3f3a +0x06:  mov    0xc(%ebp),%eax
085b3f3d +0x09:  mov    %eax,0x4(%esp)
085b3f41 +0x0d:  mov    0x8(%ebp),%eax
085b3f44 +0x10:  mov    %eax,(%esp)
085b3f47 +0x13:  call   0859ac7c <_ZNK6CParty15GetMemberSlotNoEPK5CUser>  ; CParty::GetMemberSlotNo(CUser const*) const
085b3f4c +0x18:  mov    %eax,-0xc(%ebp)
085b3f4f +0x1b:  cmpl   $0x0,-0xc(%ebp)
085b3f53 +0x1f:  js     085b3f6f <+0x3b>
085b3f55 +0x21:  mov    0x8(%ebp),%eax
085b3f58 +0x24:  lea    0x1dc(%eax),%edx
085b3f5e +0x2a:  mov    -0xc(%ebp),%eax
085b3f61 +0x2d:  mov    %eax,0x4(%esp)
085b3f65 +0x31:  mov    %edx,(%esp)
085b3f68 +0x34:  call   085bf3d8 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x936>  ; global constructors keyed to CParty::cMember::cMember()+0x936
085b3f6d +0x39:  jmp    085b3f70 <+0x3c>
085b3f6f +0x3b:  nop
085b3f70 +0x3c:  leave
085b3f71 +0x3d:  ret
```

## 反编译 C

```c
// CParty::set_recv_party_packet_flag @ 0x85b3f34

/* CParty::set_recv_party_packet_flag(CUser*) */

void __thiscall CParty::set_recv_party_packet_flag(CParty *this,CUser *param_1)

{
  int iVar1;
  
  iVar1 = GetMemberSlotNo(this,param_1);
  if (-1 < iVar1) {
    CPartyResultRecvFlag::SetRecvFlag((CPartyResultRecvFlag *)(this + 0x1dc),iVar1);
  }
  return;
}
```
