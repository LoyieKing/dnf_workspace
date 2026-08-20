# CheckHaveHellPartyPassItem

`_ZN6CParty26CheckHaveHellPartyPassItemEPK8CDungeon17ENUM_DUNGEON_TYPE`

`CParty::CheckHaveHellPartyPassItem(CDungeon const*, ENUM_DUNGEON_TYPE)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085a7b8a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085a7b8a  _ZN6CParty26CheckHaveHellPartyPassItemEPK8CDungeon17ENUM_DUNGEON_TYPE
#           CParty::CheckHaveHellPartyPassItem(CDungeon const*, ENUM_DUNGEON_TYPE)
# range [0x085a7b8a, 0x085a7d85]
085a7b8a +0x000:  push   %ebp
085a7b8b +0x001:  mov    %esp,%ebp
085a7b8d +0x003:  push   %esi
085a7b8e +0x004:  push   %ebx
085a7b8f +0x005:  sub    $0x30,%esp
085a7b92 +0x008:  mov    0x8(%ebp),%eax
085a7b95 +0x00b:  mov    0x1868(%eax),%eax
085a7b9b +0x011:  test   %eax,%eax
085a7b9d +0x013:  jne    085a7ba9 <+0x1f>
085a7b9f +0x015:  mov    $0x1,%ebx
085a7ba4 +0x01a:  jmp    085a7d7a <+0x1f0>
085a7ba9 +0x01f:  mov    0x8(%ebp),%eax
085a7bac +0x022:  mov    0x1868(%eax),%eax
085a7bb2 +0x028:  mov    %eax,(%esp)
085a7bb5 +0x02b:  call   0830e6ba <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x29f>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x29f
085a7bba +0x030:  xor    $0x1,%eax
085a7bbd +0x033:  test   %al,%al
085a7bbf +0x035:  jne    085a7bc7 <+0x3d>
085a7bc1 +0x037:  cmpl   $0x1,0x10(%ebp)
085a7bc5 +0x03b:  je     085a7bce <+0x44>
085a7bc7 +0x03d:  mov    $0x1,%eax
085a7bcc +0x042:  jmp    085a7bd3 <+0x49>
085a7bce +0x044:  mov    $0x0,%eax
085a7bd3 +0x049:  test   %al,%al
085a7bd5 +0x04b:  je     085a7be1 <+0x57>
085a7bd7 +0x04d:  mov    $0x1,%ebx
085a7bdc +0x052:  jmp    085a7d7a <+0x1f0>
085a7be1 +0x057:  lea    -0x18(%ebp),%eax
085a7be4 +0x05a:  mov    %eax,(%esp)
085a7be7 +0x05d:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
085a7bec +0x062:  mov    0x8(%ebp),%eax
085a7bef +0x065:  mov    0x1868(%eax),%eax
085a7bf5 +0x06b:  add    $0x34,%eax
085a7bf8 +0x06e:  mov    %eax,0xc(%esp)
085a7bfc +0x072:  lea    -0x18(%ebp),%eax
085a7bff +0x075:  mov    %eax,0x8(%esp)
085a7c03 +0x079:  mov    0xc(%ebp),%eax
085a7c06 +0x07c:  mov    %eax,0x4(%esp)
085a7c0a +0x080:  mov    0x8(%ebp),%eax
085a7c0d +0x083:  mov    %eax,(%esp)
085a7c10 +0x086:  call   085a7d86 <_ZN6CParty29CheckDestroyConditionSealDoorEPK8CDungeonRSt6vectorIiSaIiEES6_>  ; CParty::CheckDestroyConditionSealDoor(CDungeon const*, std::vector<int, std::allocator<int> >&, std::vector<int, std::allocator<int> >&)
085a7c15 +0x08b:  test   %al,%al
085a7c17 +0x08d:  je     085a7c28 <+0x9e>
085a7c19 +0x08f:  mov    0x8(%ebp),%eax
085a7c1c +0x092:  movb   $0x1,0x1865(%eax)
085a7c23 +0x099:  jmp    085a7d48 <+0x1be>
085a7c28 +0x09e:  lea    -0x24(%ebp),%eax
085a7c2b +0x0a1:  mov    %eax,(%esp)
085a7c2e +0x0a4:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085a7c33 +0x0a9:  movl   $0x10,0x8(%esp)
085a7c3b +0x0b1:  movl   $0x1,0x4(%esp)
085a7c43 +0x0b9:  lea    -0x24(%ebp),%eax
085a7c46 +0x0bc:  mov    %eax,(%esp)
085a7c49 +0x0bf:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085a7c4e +0x0c4:  movl   $0x0,0x4(%esp)
085a7c56 +0x0cc:  lea    -0x24(%ebp),%eax
085a7c59 +0x0cf:  mov    %eax,(%esp)
085a7c5c +0x0d2:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085a7c61 +0x0d7:  movl   $0x1b,0x4(%esp)
085a7c69 +0x0df:  lea    -0x24(%ebp),%eax
085a7c6c +0x0e2:  mov    %eax,(%esp)
085a7c6f +0x0e5:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085a7c74 +0x0ea:  lea    -0x18(%ebp),%eax
085a7c77 +0x0ed:  mov    %eax,(%esp)
085a7c7a +0x0f0:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
085a7c7f +0x0f5:  mov    %eax,0x4(%esp)
085a7c83 +0x0f9:  lea    -0x24(%ebp),%eax
085a7c86 +0x0fc:  mov    %eax,(%esp)
085a7c89 +0x0ff:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085a7c8e +0x104:  lea    -0x28(%ebp),%eax
085a7c91 +0x107:  lea    -0x18(%ebp),%edx
085a7c94 +0x10a:  mov    %edx,0x4(%esp)
085a7c98 +0x10e:  mov    %eax,(%esp)
085a7c9b +0x111:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
085a7ca0 +0x116:  sub    $0x4,%esp
085a7ca3 +0x119:  jmp    085a7ccc <+0x142>
085a7ca5 +0x11b:  lea    -0x28(%ebp),%eax
085a7ca8 +0x11e:  mov    %eax,(%esp)
085a7cab +0x121:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
085a7cb0 +0x126:  mov    (%eax),%eax
085a7cb2 +0x128:  mov    %eax,0x4(%esp)
085a7cb6 +0x12c:  lea    -0x24(%ebp),%eax
085a7cb9 +0x12f:  mov    %eax,(%esp)
085a7cbc +0x132:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085a7cc1 +0x137:  lea    -0x28(%ebp),%eax
085a7cc4 +0x13a:  mov    %eax,(%esp)
085a7cc7 +0x13d:  call   080ea98c <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x5c5>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x5c5
085a7ccc +0x142:  lea    -0xc(%ebp),%eax
085a7ccf +0x145:  lea    -0x18(%ebp),%edx
085a7cd2 +0x148:  mov    %edx,0x4(%esp)
085a7cd6 +0x14c:  mov    %eax,(%esp)
085a7cd9 +0x14f:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
085a7cde +0x154:  sub    $0x4,%esp
085a7ce1 +0x157:  lea    -0xc(%ebp),%eax
085a7ce4 +0x15a:  mov    %eax,0x4(%esp)
085a7ce8 +0x15e:  lea    -0x28(%ebp),%eax
085a7ceb +0x161:  mov    %eax,(%esp)
085a7cee +0x164:  call   080ea462 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x9b>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x9b
085a7cf3 +0x169:  test   %al,%al
085a7cf5 +0x16b:  jne    085a7ca5 <+0x11b>
085a7cf7 +0x16d:  movl   $0x1,0x4(%esp)
085a7cff +0x175:  lea    -0x24(%ebp),%eax
085a7d02 +0x178:  mov    %eax,(%esp)
085a7d05 +0x17b:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085a7d0a +0x180:  lea    -0x24(%ebp),%eax
085a7d0d +0x183:  mov    %eax,0x4(%esp)
085a7d11 +0x187:  mov    0x8(%ebp),%eax
085a7d14 +0x18a:  mov    %eax,(%esp)
085a7d17 +0x18d:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
085a7d1c +0x192:  mov    0x8(%ebp),%eax
085a7d1f +0x195:  movb   $0x0,0x1865(%eax)
085a7d26 +0x19c:  lea    -0x24(%ebp),%eax
085a7d29 +0x19f:  mov    %eax,(%esp)
085a7d2c +0x1a2:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085a7d31 +0x1a7:  jmp    085a7d48 <+0x1be>
085a7d33 +0x1a9:  mov    %edx,%ebx
085a7d35 +0x1ab:  mov    %eax,%esi
085a7d37 +0x1ad:  lea    -0x24(%ebp),%eax
085a7d3a +0x1b0:  mov    %eax,(%esp)
085a7d3d +0x1b3:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085a7d42 +0x1b8:  mov    %esi,%eax
085a7d44 +0x1ba:  mov    %ebx,%edx
085a7d46 +0x1bc:  jmp    085a7d5f <+0x1d5>
085a7d48 +0x1be:  mov    0x8(%ebp),%eax
085a7d4b +0x1c1:  movzbl 0x1865(%eax),%ebx
085a7d52 +0x1c8:  lea    -0x18(%ebp),%eax
085a7d55 +0x1cb:  mov    %eax,(%esp)
085a7d58 +0x1ce:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
085a7d5d +0x1d3:  jmp    085a7d7a <+0x1f0>
085a7d5f +0x1d5:  mov    %edx,%ebx
085a7d61 +0x1d7:  mov    %eax,%esi
085a7d63 +0x1d9:  lea    -0x18(%ebp),%eax
085a7d66 +0x1dc:  mov    %eax,(%esp)
085a7d69 +0x1df:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
085a7d6e +0x1e4:  mov    %esi,%eax
085a7d70 +0x1e6:  mov    %ebx,%edx
085a7d72 +0x1e8:  mov    %eax,(%esp)
085a7d75 +0x1eb:  call   08ae3750 <_Unwind_Resume>
085a7d7a +0x1f0:  mov    %ebx,%eax
085a7d7c +0x1f2:  lea    -0x8(%ebp),%esp
085a7d7f +0x1f5:  add    $0x0,%esp
085a7d82 +0x1f8:  pop    %ebx
085a7d83 +0x1f9:  pop    %esi
085a7d84 +0x1fa:  pop    %ebp
085a7d85 +0x1fb:  ret
```

## 反编译 C

```c
// CParty::CheckHaveHellPartyPassItem @ 0x85a7b8a

/* CParty::CheckHaveHellPartyPassItem(CDungeon const*, ENUM_DUNGEON_TYPE) */

CParty __thiscall CParty::CheckHaveHellPartyPassItem(CParty *this,CDungeon *param_1,int param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  CParty CVar5;
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_2c [4];
  PacketGuard local_28 [12];
  vector<int,std::allocator<int>> local_1c [12];
  __normal_iterator local_10 [4];
  
  if (*(int *)(this + 0x1868) == 0) {
    CVar5 = (CParty)0x1;
  }
  else {
    cVar1 = CWorldMap::IsInHellDungeon(*(CWorldMap **)(this + 0x1868));
    if ((cVar1 == '\x01') && (param_3 == 1)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      CVar5 = (CParty)0x1;
    }
    else {
      std::vector<int,std::allocator<int>>::vector(local_1c);
                    /* try { // try from 085a7c10 to 085a7c32 has its CatchHandler @ 085a7d5f */
      cVar1 = CheckDestroyConditionSealDoor
                        (this,param_1,(vector *)local_1c,(vector *)(*(int *)(this + 0x1868) + 0x34))
      ;
      if (cVar1 == '\0') {
        PacketGuard::PacketGuard(local_28);
                    /* try { // try from 085a7c49 to 085a7d1b has its CatchHandler @ 085a7d33 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,1,0x10);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,0x1b);
        iVar3 = std::vector<int,std::allocator<int>>::size(local_1c);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,iVar3);
        std::vector<int,std::allocator<int>>::begin();
        while( true ) {
          std::vector<int,std::allocator<int>>::end();
          bVar2 = __gnu_cxx::operator!=(local_2c,local_10);
          if (!bVar2) break;
          piVar4 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                          operator*(local_2c);
          InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,*piVar4);
          __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                    (local_2c);
        }
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
        send_to_party(this,local_28);
        this[0x1865] = (CParty)0x0;
                    /* try { // try from 085a7d2c to 085a7d30 has its CatchHandler @ 085a7d5f */
        PacketGuard::~PacketGuard(local_28);
      }
      else {
        this[0x1865] = (CParty)0x1;
      }
      CVar5 = this[0x1865];
      std::vector<int,std::allocator<int>>::~vector(local_1c);
    }
  }
  return CVar5;
}
```
