# set_single_play

`_ZN6CParty15set_single_playEP5CUser`

`CParty::set_single_play(CUser*)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x0859b142` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859b142  _ZN6CParty15set_single_playEP5CUser
#           CParty::set_single_play(CUser*)
# range [0x0859b142, 0x0859b1bd]
0859b142 +0x00:  push   %ebp
0859b143 +0x01:  mov    %esp,%ebp
0859b145 +0x03:  sub    $0x18,%esp
0859b148 +0x06:  mov    0x8(%ebp),%eax
0859b14b +0x09:  mov    0xc(%ebp),%edx
0859b14e +0x0c:  mov    %edx,0x78(%eax)
0859b151 +0x0f:  mov    0xc(%ebp),%eax
0859b154 +0x12:  mov    %eax,(%esp)
0859b157 +0x15:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
0859b15c +0x1a:  mov    0x8(%ebp),%edx
0859b15f +0x1d:  mov    %eax,0x80(%edx)
0859b165 +0x23:  mov    0x8(%ebp),%eax
0859b168 +0x26:  mov    0xc(%ebp),%edx
0859b16b +0x29:  mov    %edx,0x74(%eax)
0859b16e +0x2c:  mov    0x8(%ebp),%eax
0859b171 +0x2f:  movb   $0x1,0x69(%eax)
0859b175 +0x33:  mov    0x8(%ebp),%eax
0859b178 +0x36:  movb   $0x1,0x68(%eax)
0859b17c +0x3a:  mov    0x8(%ebp),%eax
0859b17f +0x3d:  movb   $0x1,0x13c(%eax)
0859b186 +0x44:  mov    0x8(%ebp),%eax
0859b189 +0x47:  movb   $0x1,0x6a(%eax)
0859b18d +0x4b:  mov    0x8(%ebp),%eax
0859b190 +0x4e:  mov    0x64(%eax),%eax
0859b193 +0x51:  cwtl
0859b194 +0x52:  mov    %eax,0x4(%esp)
0859b198 +0x56:  mov    0xc(%ebp),%eax
0859b19b +0x59:  mov    %eax,(%esp)
0859b19e +0x5c:  call   085bfd96 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x12f4>  ; global constructors keyed to CParty::cMember::cMember()+0x12f4
0859b1a3 +0x61:  mov    0x8(%ebp),%eax
0859b1a6 +0x64:  mov    %eax,(%esp)
0859b1a9 +0x67:  call   0822d90e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2fb8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2fb8
0859b1ae +0x6c:  mov    %eax,(%esp)
0859b1b1 +0x6f:  call   085bc044 <_ZN14CPartyTelePort19reset_teleport_dataEv>  ; CPartyTelePort::reset_teleport_data()
0859b1b6 +0x74:  mov    $0x1,%eax
0859b1bb +0x79:  leave
0859b1bc +0x7a:  ret
0859b1bd +0x7b:  nop
```

## 反编译 C

```c
// CParty::set_single_play @ 0x859b142

/* CParty::set_single_play(CUser*) */

undefined4 __thiscall CParty::set_single_play(CParty *this,CUser *param_1)

{
  undefined4 uVar1;
  CPartyTelePort *this_00;
  
  *(CUser **)(this + 0x78) = param_1;
  uVar1 = CUser::GetUID(param_1);
  *(undefined4 *)(this + 0x80) = uVar1;
  *(CUser **)(this + 0x74) = param_1;
  this[0x69] = (CParty)0x1;
  this[0x68] = (CParty)0x1;
  this[0x13c] = (CParty)0x1;
  this[0x6a] = (CParty)0x1;
  CUser::SetPartyIndex(param_1,(short)*(undefined4 *)(this + 100));
  this_00 = (CPartyTelePort *)GetPartyTelePort(this);
  CPartyTelePort::reset_teleport_data(this_00);
  return 1;
}
```
