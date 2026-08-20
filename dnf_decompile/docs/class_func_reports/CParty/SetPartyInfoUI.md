# SetPartyInfoUI

`_ZN6CParty14SetPartyInfoUIERK18MSG_PARTY_SET_INFO`

`CParty::SetPartyInfoUI(MSG_PARTY_SET_INFO const&)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x0859b234` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859b234  _ZN6CParty14SetPartyInfoUIERK18MSG_PARTY_SET_INFO
#           CParty::SetPartyInfoUI(MSG_PARTY_SET_INFO const&)
# range [0x0859b234, 0x0859b2b5]
0859b234 +0x00:  push   %ebp
0859b235 +0x01:  mov    %esp,%ebp
0859b237 +0x03:  sub    $0x18,%esp
0859b23a +0x06:  mov    0xc(%ebp),%eax
0859b23d +0x09:  add    $0x12,%eax
0859b240 +0x0c:  mov    %eax,0x4(%esp)
0859b244 +0x10:  mov    0x8(%ebp),%eax
0859b247 +0x13:  mov    %eax,(%esp)
0859b24a +0x16:  call   085bf77a <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0xcd8>  ; global constructors keyed to CParty::cMember::cMember()+0xcd8
0859b24f +0x1b:  mov    0xc(%ebp),%eax
0859b252 +0x1e:  movzbl 0xd(%eax),%eax
0859b256 +0x22:  movzbl %al,%eax
0859b259 +0x25:  mov    %eax,0x4(%esp)
0859b25d +0x29:  mov    0x8(%ebp),%eax
0859b260 +0x2c:  mov    %eax,(%esp)
0859b263 +0x2f:  call   085bf7a2 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0xd00>  ; global constructors keyed to CParty::cMember::cMember()+0xd00
0859b268 +0x34:  mov    0xc(%ebp),%eax
0859b26b +0x37:  movzbl 0x32(%eax),%eax
0859b26f +0x3b:  movzbl %al,%eax
0859b272 +0x3e:  mov    %eax,0x4(%esp)
0859b276 +0x42:  mov    0x8(%ebp),%eax
0859b279 +0x45:  mov    %eax,(%esp)
0859b27c +0x48:  call   085bf7be <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0xd1c>  ; global constructors keyed to CParty::cMember::cMember()+0xd1c
0859b281 +0x4d:  mov    0xc(%ebp),%eax
0859b284 +0x50:  movzwl 0x33(%eax),%eax
0859b288 +0x54:  movzwl %ax,%eax
0859b28b +0x57:  mov    %eax,0x4(%esp)
0859b28f +0x5b:  mov    0x8(%ebp),%eax
0859b292 +0x5e:  mov    %eax,(%esp)
0859b295 +0x61:  call   0822d852 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2efc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2efc
0859b29a +0x66:  mov    0xc(%ebp),%eax
0859b29d +0x69:  movzbl 0x35(%eax),%eax
0859b2a1 +0x6d:  movzbl %al,%eax
0859b2a4 +0x70:  mov    %eax,0x4(%esp)
0859b2a8 +0x74:  mov    0x8(%ebp),%eax
0859b2ab +0x77:  mov    %eax,(%esp)
0859b2ae +0x7a:  call   0822d870 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2f1a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2f1a
0859b2b3 +0x7f:  leave
0859b2b4 +0x80:  ret
0859b2b5 +0x81:  nop
```

## 反编译 C

```c
// CParty::SetPartyInfoUI @ 0x859b234

/* CParty::SetPartyInfoUI(MSG_PARTY_SET_INFO const&) */

void __thiscall CParty::SetPartyInfoUI(CParty *this,MSG_PARTY_SET_INFO *param_1)

{
  setTitle(this,(char *)(param_1 + 0x12));
  setTitleIndex(this,(uchar)param_1[0xd]);
  setUserMax(this,(uchar)param_1[0x32]);
  setDungIndex(this,*(ushort *)(param_1 + 0x33));
  setDungDiffi(this,(uchar)param_1[0x35]);
  return;
}
```
