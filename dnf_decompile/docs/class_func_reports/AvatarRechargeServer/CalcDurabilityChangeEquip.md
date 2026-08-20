# CalcDurabilityChangeEquip

`_ZN20AvatarRechargeServer25CalcDurabilityChangeEquipEP5CUseri`

`AvatarRechargeServer::CalcDurabilityChangeEquip(CUser*, int)`

| 类 | 地址 |
|---|---|
| `AvatarRechargeServer` | `0x081905b4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081905b4  _ZN20AvatarRechargeServer25CalcDurabilityChangeEquipEP5CUseri
#           AvatarRechargeServer::CalcDurabilityChangeEquip(CUser*, int)
# range [0x081905b4, 0x08190698]
081905b4 +0x00:  push   %ebp
081905b5 +0x01:  mov    %esp,%ebp
081905b7 +0x03:  push   %esi
081905b8 +0x04:  push   %ebx
081905b9 +0x05:  sub    $0x20,%esp
081905bc +0x08:  mov    0xc(%ebp),%eax
081905bf +0x0b:  mov    %eax,(%esp)
081905c2 +0x0e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081905c7 +0x13:  cmp    $0x5,%eax
081905ca +0x16:  setne  %al
081905cd +0x19:  test   %al,%al
081905cf +0x1b:  jne    08190688 <+0xd4>
081905d5 +0x21:  mov    0xc(%ebp),%eax
081905d8 +0x24:  mov    %eax,(%esp)
081905db +0x27:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
081905e0 +0x2c:  test   %eax,%eax
081905e2 +0x2e:  sete   %al
081905e5 +0x31:  test   %al,%al
081905e7 +0x33:  jne    0819068b <+0xd7>
081905ed +0x39:  mov    0xc(%ebp),%eax
081905f0 +0x3c:  mov    %eax,(%esp)
081905f3 +0x3f:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
081905f8 +0x44:  mov    %eax,(%esp)
081905fb +0x47:  call   085be9c8 <_ZN6CParty19IsUseFatigueDungeonEv>  ; CParty::IsUseFatigueDungeon()
08190600 +0x4c:  xor    $0x1,%eax
08190603 +0x4f:  test   %al,%al
08190605 +0x51:  jne    0819068e <+0xda>
0819060b +0x57:  mov    0xc(%ebp),%eax
0819060e +0x5a:  mov    %eax,(%esp)
08190611 +0x5d:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
08190616 +0x62:  mov    %eax,(%esp)
08190619 +0x65:  call   085bea4a <_ZN6CParty13CheckMapClearEv>  ; CParty::CheckMapClear()
0819061e +0x6a:  test   %al,%al
08190620 +0x6c:  jne    08190691 <+0xdd>
08190622 +0x6e:  lea    -0x14(%ebp),%eax
08190625 +0x71:  mov    %eax,(%esp)
08190628 +0x74:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
0819062d +0x79:  cmpl   $0x0,0x10(%ebp)
08190631 +0x7d:  js     0819067b <+0xc7>
08190633 +0x7f:  cmpl   $0x9,0x10(%ebp)
08190637 +0x83:  jg     0819067b <+0xc7>
08190639 +0x85:  lea    -0x14(%ebp),%eax
0819063c +0x88:  mov    %eax,0xc(%esp)
08190640 +0x8c:  mov    0x10(%ebp),%eax
08190643 +0x8f:  mov    %eax,0x8(%esp)
08190647 +0x93:  mov    0xc(%ebp),%eax
0819064a +0x96:  mov    %eax,0x4(%esp)
0819064e +0x9a:  mov    0x8(%ebp),%eax
08190651 +0x9d:  mov    %eax,(%esp)
08190654 +0xa0:  call   081902e8 <_ZN20AvatarRechargeServer20CalcDurabilityDetailEP5CUseriRSt6vectorIiSaIiEE>  ; AvatarRechargeServer::CalcDurabilityDetail(CUser*, int, std::vector<int, std::allocator<int> >&)
08190659 +0xa5:  xor    $0x1,%eax
0819065c +0xa8:  test   %al,%al
0819065e +0xaa:  jmp    0819067b <+0xc7>
08190660 +0xac:  mov    %edx,%ebx
08190662 +0xae:  mov    %eax,%esi
08190664 +0xb0:  lea    -0x14(%ebp),%eax
08190667 +0xb3:  mov    %eax,(%esp)
0819066a +0xb6:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0819066f +0xbb:  mov    %esi,%eax
08190671 +0xbd:  mov    %ebx,%edx
08190673 +0xbf:  mov    %eax,(%esp)
08190676 +0xc2:  call   08ae3750 <_Unwind_Resume>
0819067b +0xc7:  lea    -0x14(%ebp),%eax
0819067e +0xca:  mov    %eax,(%esp)
08190681 +0xcd:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08190686 +0xd2:  jmp    08190692 <+0xde>
08190688 +0xd4:  nop
08190689 +0xd5:  jmp    08190692 <+0xde>
0819068b +0xd7:  nop
0819068c +0xd8:  jmp    08190692 <+0xde>
0819068e +0xda:  nop
0819068f +0xdb:  jmp    08190692 <+0xde>
08190691 +0xdd:  nop
08190692 +0xde:  add    $0x20,%esp
08190695 +0xe1:  pop    %ebx
08190696 +0xe2:  pop    %esi
08190697 +0xe3:  pop    %ebp
08190698 +0xe4:  ret
```

## 反编译 C

```c
// AvatarRechargeServer::CalcDurabilityChangeEquip @ 0x81905b4

/* AvatarRechargeServer::CalcDurabilityChangeEquip(CUser*, int) */

void __thiscall
AvatarRechargeServer::CalcDurabilityChangeEquip
          (AvatarRechargeServer *this,CUser *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  CParty *pCVar3;
  vector<int,std::allocator<int>> local_18 [12];
  
  iVar2 = CUser::get_state(param_1);
  if ((iVar2 == 5) && (iVar2 = CUser::GetParty(param_1), iVar2 != 0)) {
    pCVar3 = (CParty *)CUser::GetParty(param_1);
    cVar1 = CParty::IsUseFatigueDungeon(pCVar3);
    if (cVar1 == '\x01') {
      pCVar3 = (CParty *)CUser::GetParty(param_1);
      cVar1 = CParty::CheckMapClear(pCVar3);
      if (cVar1 == '\0') {
        std::vector<int,std::allocator<int>>::vector(local_18);
        if ((-1 < param_2) && (param_2 < 10)) {
                    /* try { // try from 08190654 to 08190658 has its CatchHandler @ 08190660 */
          CalcDurabilityDetail(this,param_1,param_2,(vector *)local_18);
        }
        std::vector<int,std::allocator<int>>::~vector(local_18);
      }
    }
  }
  return;
}
```
