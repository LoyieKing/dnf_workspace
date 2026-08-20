# OnFightVillageMonster

`_ZN16village_attacked18CVillageMonsterMgr21OnFightVillageMonsterEP5CUsert`

`village_attacked::CVillageMonsterMgr::OnFightVillageMonster(CUser*, unsigned short)`

| 类 | 地址 |
|---|---|
| `village_attacked::CVillageMonsterMgr` | `0x086b4672` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086b4672  _ZN16village_attacked18CVillageMonsterMgr21OnFightVillageMonsterEP5CUsert
#           village_attacked::CVillageMonsterMgr::OnFightVillageMonster(CUser*, unsigned short)
# range [0x086b4672, 0x086b4865]
086b4672 +0x000:  push   %ebp
086b4673 +0x001:  mov    %esp,%ebp
086b4675 +0x003:  push   %esi
086b4676 +0x004:  push   %ebx
086b4677 +0x005:  sub    $0x60,%esp
086b467a +0x008:  mov    0x10(%ebp),%eax
086b467d +0x00b:  mov    %ax,-0x3c(%ebp)
086b4681 +0x00f:  movl   $0x0,0x4(%esp)
086b4689 +0x017:  mov    0xc(%ebp),%eax
086b468c +0x01a:  mov    %eax,(%esp)
086b468f +0x01d:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
086b4694 +0x022:  movzbl %al,%ebx
086b4697 +0x025:  mov    0xc(%ebp),%eax
086b469a +0x028:  mov    %eax,(%esp)
086b469d +0x02b:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
086b46a2 +0x030:  movzbl %al,%eax
086b46a5 +0x033:  mov    %ebx,0x8(%esp)
086b46a9 +0x037:  mov    %eax,0x4(%esp)
086b46ad +0x03b:  lea    -0x1a(%ebp),%eax
086b46b0 +0x03e:  mov    %eax,(%esp)
086b46b3 +0x041:  call   086b4b3c <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x66>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x66
086b46b8 +0x046:  mov    0x8(%ebp),%eax
086b46bb +0x049:  lea    0x8(%eax),%ecx
086b46be +0x04c:  lea    -0x20(%ebp),%eax
086b46c1 +0x04f:  lea    -0x1a(%ebp),%edx
086b46c4 +0x052:  mov    %edx,0x8(%esp)
086b46c8 +0x056:  mov    %ecx,0x4(%esp)
086b46cc +0x05a:  mov    %eax,(%esp)
086b46cf +0x05d:  call   086b5486 <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x9b0>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x9b0
086b46d4 +0x062:  sub    $0x4,%esp
086b46d7 +0x065:  mov    0x8(%ebp),%eax
086b46da +0x068:  lea    0x8(%eax),%edx
086b46dd +0x06b:  lea    -0x18(%ebp),%eax
086b46e0 +0x06e:  mov    %edx,0x4(%esp)
086b46e4 +0x072:  mov    %eax,(%esp)
086b46e7 +0x075:  call   086b5420 <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x94a>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x94a
086b46ec +0x07a:  sub    $0x4,%esp
086b46ef +0x07d:  lea    -0x18(%ebp),%eax
086b46f2 +0x080:  mov    %eax,0x4(%esp)
086b46f6 +0x084:  lea    -0x20(%ebp),%eax
086b46f9 +0x087:  mov    %eax,(%esp)
086b46fc +0x08a:  call   086b54b2 <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x9dc>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x9dc
086b4701 +0x08f:  test   %al,%al
086b4703 +0x091:  je     086b470f <+0x9d>
086b4705 +0x093:  mov    $0x15,%eax
086b470a +0x098:  jmp    086b485b <+0x1e9>
086b470f +0x09d:  mov    0xc(%ebp),%eax
086b4712 +0x0a0:  mov    %eax,(%esp)
086b4715 +0x0a3:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
086b471a +0x0a8:  mov    %eax,-0x14(%ebp)
086b471d +0x0ab:  cmpl   $0x0,-0x14(%ebp)
086b4721 +0x0af:  jne    086b472d <+0xbb>
086b4723 +0x0b1:  mov    $0x15,%eax
086b4728 +0x0b6:  jmp    086b485b <+0x1e9>
086b472d +0x0bb:  lea    -0x20(%ebp),%eax
086b4730 +0x0be:  mov    %eax,(%esp)
086b4733 +0x0c1:  call   086b5478 <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x9a2>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x9a2
086b4738 +0x0c6:  add    $0x4,%eax
086b473b +0x0c9:  mov    %eax,-0x10(%ebp)
086b473e +0x0cc:  movl   $0x0,-0x24(%ebp)
086b4745 +0x0d3:  movl   $0x0,-0x28(%ebp)
086b474c +0x0da:  movzwl -0x3c(%ebp),%eax
086b4750 +0x0de:  lea    -0x28(%ebp),%edx
086b4753 +0x0e1:  mov    %edx,0x10(%esp)
086b4757 +0x0e5:  lea    -0x24(%ebp),%edx
086b475a +0x0e8:  mov    %edx,0xc(%esp)
086b475e +0x0ec:  mov    %eax,0x8(%esp)
086b4762 +0x0f0:  mov    0xc(%ebp),%eax
086b4765 +0x0f3:  mov    %eax,0x4(%esp)
086b4769 +0x0f7:  mov    -0x10(%ebp),%eax
086b476c +0x0fa:  mov    %eax,(%esp)
086b476f +0x0fd:  call   086b3fe2 <_ZN16village_attacked19CVillageMonsterArea21OnFightVillageMonsterEP5CUsertRiS3_>  ; village_attacked::CVillageMonsterArea::OnFightVillageMonster(CUser*, unsigned short, int&, int&)
086b4774 +0x102:  mov    %eax,-0xc(%ebp)
086b4777 +0x105:  cmpl   $0x0,-0xc(%ebp)
086b477b +0x109:  jne    086b4858 <+0x1e6>
086b4781 +0x10f:  mov    -0x14(%ebp),%eax
086b4784 +0x112:  movzwl -0x3c(%ebp),%edx
086b4788 +0x116:  mov    %dx,0xc4c(%eax)
086b478f +0x11d:  mov    0xc(%ebp),%eax
086b4792 +0x120:  mov    %eax,(%esp)
086b4795 +0x123:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
086b479a +0x128:  movsbl %al,%edx
086b479d +0x12b:  mov    -0x14(%ebp),%eax
086b47a0 +0x12e:  mov    %edx,0xc50(%eax)
086b47a6 +0x134:  movl   $0x0,0x4(%esp)
086b47ae +0x13c:  mov    0xc(%ebp),%eax
086b47b1 +0x13f:  mov    %eax,(%esp)
086b47b4 +0x142:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
086b47b9 +0x147:  mov    -0x14(%ebp),%edx
086b47bc +0x14a:  mov    %eax,0xc54(%edx)
086b47c2 +0x150:  mov    -0x28(%ebp),%edx
086b47c5 +0x153:  mov    -0x14(%ebp),%eax
086b47c8 +0x156:  mov    %edx,0xc58(%eax)
086b47ce +0x15c:  mov    -0x24(%ebp),%edx
086b47d1 +0x15f:  mov    -0x14(%ebp),%eax
086b47d4 +0x162:  mov    %edx,0xcb8(%eax)
086b47da +0x168:  lea    -0x34(%ebp),%eax
086b47dd +0x16b:  mov    %eax,(%esp)
086b47e0 +0x16e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086b47e5 +0x173:  lea    -0x34(%ebp),%eax
086b47e8 +0x176:  mov    %eax,(%esp)
086b47eb +0x179:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
086b47f0 +0x17e:  movl   $0xf3,0x8(%esp)
086b47f8 +0x186:  movl   $0x0,0x4(%esp)
086b4800 +0x18e:  lea    -0x34(%ebp),%eax
086b4803 +0x191:  mov    %eax,(%esp)
086b4806 +0x194:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086b480b +0x199:  movl   $0x1,0x4(%esp)
086b4813 +0x1a1:  lea    -0x34(%ebp),%eax
086b4816 +0x1a4:  mov    %eax,(%esp)
086b4819 +0x1a7:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086b481e +0x1ac:  lea    -0x34(%ebp),%eax
086b4821 +0x1af:  mov    %eax,0x4(%esp)
086b4825 +0x1b3:  mov    -0x14(%ebp),%eax
086b4828 +0x1b6:  mov    %eax,(%esp)
086b482b +0x1b9:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
086b4830 +0x1be:  jmp    086b484d <+0x1db>
086b4832 +0x1c0:  mov    %edx,%ebx
086b4834 +0x1c2:  mov    %eax,%esi
086b4836 +0x1c4:  lea    -0x34(%ebp),%eax
086b4839 +0x1c7:  mov    %eax,(%esp)
086b483c +0x1ca:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086b4841 +0x1cf:  mov    %esi,%eax
086b4843 +0x1d1:  mov    %ebx,%edx
086b4845 +0x1d3:  mov    %eax,(%esp)
086b4848 +0x1d6:  call   08ae3750 <_Unwind_Resume>
086b484d +0x1db:  lea    -0x34(%ebp),%eax
086b4850 +0x1de:  mov    %eax,(%esp)
086b4853 +0x1e1:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086b4858 +0x1e6:  mov    -0xc(%ebp),%eax
086b485b +0x1e9:  lea    -0x8(%ebp),%esp
086b485e +0x1ec:  add    $0x0,%esp
086b4861 +0x1ef:  pop    %ebx
086b4862 +0x1f0:  pop    %esi
086b4863 +0x1f1:  pop    %ebp
086b4864 +0x1f2:  ret
086b4865 +0x1f3:  nop
```

## 反编译 C

```c
// village_attacked::CVillageMonsterMgr::OnFightVillageMonster @ 0x86b4672

/* village_attacked::CVillageMonsterMgr::OnFightVillageMonster(CUser*, unsigned short) */

int __thiscall
village_attacked::CVillageMonsterMgr::OnFightVillageMonster
          (CVillageMonsterMgr *this,CUser *param_1,ushort param_2)

{
  uchar uVar1;
  uchar uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  PacketGuard local_38 [12];
  int local_2c;
  int local_28;
  Zone local_24 [6];
  Zone local_1e [2];
  map<village_attacked::Zone,village_attacked::CVillageMonsterArea,std::less<village_attacked::Zone>,std::allocator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>>
  local_1c [4];
  CParty *local_18;
  CVillageMonsterArea *local_14;
  int local_10;
  
  uVar1 = CUser::get_area(param_1,false);
  uVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
  Zone::Zone(local_1e,uVar2,uVar1);
  std::
  map<village_attacked::Zone,village_attacked::CVillageMonsterArea,std::less<village_attacked::Zone>,std::allocator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>>
  ::find(local_24);
  std::
  map<village_attacked::Zone,village_attacked::CVillageMonsterArea,std::less<village_attacked::Zone>,std::allocator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>>
  ::end(local_1c);
  cVar3 = std::
          _Rb_tree_iterator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>
          ::operator==((_Rb_tree_iterator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>
                        *)local_24,(_Rb_tree_iterator *)local_1c);
  if (cVar3 == '\0') {
    local_18 = (CParty *)CUser::GetParty(param_1);
    if (local_18 == (CParty *)0x0) {
      local_10 = 0x15;
    }
    else {
      iVar4 = std::
              _Rb_tree_iterator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>
              ::operator->((_Rb_tree_iterator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>
                            *)local_24);
      local_14 = (CVillageMonsterArea *)(iVar4 + 4);
      local_28 = 0;
      local_2c = 0;
      local_10 = CVillageMonsterArea::OnFightVillageMonster
                           (local_14,param_1,param_2,&local_28,&local_2c);
      if (local_10 == 0) {
        *(ushort *)(local_18 + 0xc4c) = param_2;
        cVar3 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
        *(int *)(local_18 + 0xc50) = (int)cVar3;
        uVar5 = CUser::get_area(param_1,false);
        *(undefined4 *)(local_18 + 0xc54) = uVar5;
        *(int *)(local_18 + 0xc58) = local_2c;
        *(int *)(local_18 + 0xcb8) = local_28;
        PacketGuard::PacketGuard(local_38);
                    /* try { // try from 086b47eb to 086b482f has its CatchHandler @ 086b4832 */
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_38);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_38,0,0xf3);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_38,true);
        CParty::send_to_party(local_18,local_38);
        PacketGuard::~PacketGuard(local_38);
      }
    }
  }
  else {
    local_10 = 0x15;
  }
  return local_10;
}
```
