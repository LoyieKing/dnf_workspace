# UseEmblem

`_ZN20AvatarRechargeServer9UseEmblemEP5CUserRSt6vectorIiSaIiEEP10Inven_Items`

`AvatarRechargeServer::UseEmblem(CUser*, std::vector<int, std::allocator<int> >&, Inven_Item*, short)`

| 类 | 地址 |
|---|---|
| `AvatarRechargeServer` | `0x08190ed8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08190ed8  _ZN20AvatarRechargeServer9UseEmblemEP5CUserRSt6vectorIiSaIiEEP10Inven_Items
#           AvatarRechargeServer::UseEmblem(CUser*, std::vector<int, std::allocator<int> >&, Inven_Item*, short)
# range [0x08190ed8, 0x0819114b]
08190ed8 +0x000:  push   %ebp
08190ed9 +0x001:  mov    %esp,%ebp
08190edb +0x003:  push   %edi
08190edc +0x004:  push   %esi
08190edd +0x005:  push   %ebx
08190ede +0x006:  sub    $0x7c,%esp
08190ee1 +0x009:  mov    0x18(%ebp),%eax
08190ee4 +0x00c:  mov    %ax,-0x5c(%ebp)
08190ee8 +0x010:  mov    0x14(%ebp),%eax
08190eeb +0x013:  mov    0x7(%eax),%ebx
08190eee +0x016:  mov    0xc(%ebp),%eax
08190ef1 +0x019:  mov    %eax,(%esp)
08190ef4 +0x01c:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08190ef9 +0x021:  mov    %eax,(%esp)
08190efc +0x024:  call   080dd576 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xbf>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xbf
08190f01 +0x029:  mov    %ebx,0x4(%esp)
08190f05 +0x02d:  mov    %eax,(%esp)
08190f08 +0x030:  call   082f98f8 <_ZNK8WongWork14CAvatarItemMgr18getJewelSocketDataEi>  ; WongWork::CAvatarItemMgr::getJewelSocketData(int) const
08190f0d +0x035:  mov    %eax,-0x38(%ebp)
08190f10 +0x038:  mov    -0x38(%ebp),%eax
08190f13 +0x03b:  mov    %eax,(%esp)
08190f16 +0x03e:  call   08190699 <_ZL14getSocketCountPK20stAvatarEmblemInfo_t>  ; getSocketCount(stAvatarEmblemInfo_t const*)
08190f1b +0x043:  mov    0x8(%ebp),%edx
08190f1e +0x046:  mov    0x4(%edx),%edx
08190f21 +0x049:  imul   %edx,%eax
08190f24 +0x04c:  mov    %eax,-0x34(%ebp)
08190f27 +0x04f:  movl   $0x0,-0x30(%ebp)
08190f2e +0x056:  lea    -0x4c(%ebp),%eax
08190f31 +0x059:  mov    %eax,(%esp)
08190f34 +0x05c:  call   080fa898 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x10a4>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x10a4
08190f39 +0x061:  mov    0x8(%ebp),%eax
08190f3c +0x064:  lea    0x20(%eax),%edx
08190f3f +0x067:  lea    -0x50(%ebp),%eax
08190f42 +0x06a:  mov    %edx,0x4(%esp)
08190f46 +0x06e:  mov    %eax,(%esp)
08190f49 +0x071:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
08190f4e +0x076:  sub    $0x4,%esp
08190f51 +0x079:  movl   $0x0,-0x20(%ebp)
08190f58 +0x080:  mov    0x10(%ebp),%eax
08190f5b +0x083:  mov    %eax,(%esp)
08190f5e +0x086:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
08190f63 +0x08b:  mov    %eax,-0x1c(%ebp)
08190f66 +0x08e:  jmp    08190fc7 <+0xef>
08190f68 +0x090:  mov    -0x20(%ebp),%eax
08190f6b +0x093:  mov    %eax,0x4(%esp)
08190f6f +0x097:  mov    0x10(%ebp),%eax
08190f72 +0x09a:  mov    %eax,(%esp)
08190f75 +0x09d:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
08190f7a +0x0a2:  mov    0x8(%ebp),%edx
08190f7d +0x0a5:  lea    0x20(%edx),%ecx
08190f80 +0x0a8:  lea    -0x60(%ebp),%edx
08190f83 +0x0ab:  mov    %eax,0x8(%esp)
08190f87 +0x0af:  mov    %ecx,0x4(%esp)
08190f8b +0x0b3:  mov    %edx,(%esp)
08190f8e +0x0b6:  call   080cd2ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x213b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x213b
08190f93 +0x0bb:  sub    $0x4,%esp
08190f96 +0x0be:  mov    -0x60(%ebp),%eax
08190f99 +0x0c1:  mov    %eax,-0x4c(%ebp)
08190f9c +0x0c4:  lea    -0x50(%ebp),%eax
08190f9f +0x0c7:  mov    %eax,0x4(%esp)
08190fa3 +0x0cb:  lea    -0x4c(%ebp),%eax
08190fa6 +0x0ce:  mov    %eax,(%esp)
08190fa9 +0x0d1:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
08190fae +0x0d6:  test   %al,%al
08190fb0 +0x0d8:  je     08190fc3 <+0xeb>
08190fb2 +0x0da:  lea    -0x4c(%ebp),%eax
08190fb5 +0x0dd:  mov    %eax,(%esp)
08190fb8 +0x0e0:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
08190fbd +0x0e5:  mov    0x4(%eax),%eax
08190fc0 +0x0e8:  add    %eax,-0x30(%ebp)
08190fc3 +0x0eb:  addl   $0x1,-0x20(%ebp)
08190fc7 +0x0ef:  mov    -0x20(%ebp),%eax
08190fca +0x0f2:  cmp    -0x1c(%ebp),%eax
08190fcd +0x0f5:  setb   %al
08190fd0 +0x0f8:  test   %al,%al
08190fd2 +0x0fa:  jne    08190f68 <+0x90>
08190fd4 +0x0fc:  movswl -0x5c(%ebp),%ebx
08190fd8 +0x100:  mov    0xc(%ebp),%eax
08190fdb +0x103:  mov    %eax,(%esp)
08190fde +0x106:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08190fe3 +0x10b:  mov    %ebx,0x8(%esp)
08190fe7 +0x10f:  movl   $0x2,0x4(%esp)
08190fef +0x117:  mov    %eax,(%esp)
08190ff2 +0x11a:  call   084fc2ae <_ZN10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int)
08190ff7 +0x11f:  mov    %eax,-0x2c(%ebp)
08190ffa +0x122:  cmpl   $0x0,-0x2c(%ebp)
08190ffe +0x126:  je     0819100f <+0x137>
08191000 +0x128:  mov    -0x2c(%ebp),%eax
08191003 +0x12b:  mov    %eax,(%esp)
08191006 +0x12e:  call   0811ed66 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x61>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x61
0819100b +0x133:  test   %al,%al
0819100d +0x135:  je     08191016 <+0x13e>
0819100f +0x137:  mov    $0x1,%eax
08191014 +0x13c:  jmp    0819101b <+0x143>
08191016 +0x13e:  mov    $0x0,%eax
0819101b +0x143:  test   %al,%al
0819101d +0x145:  je     08191047 <+0x16f>
0819101f +0x147:  movzwl -0x5c(%ebp),%eax
08191023 +0x14b:  movzwl %ax,%eax
08191026 +0x14e:  mov    %eax,0x8(%esp)
0819102a +0x152:  mov    0xc(%ebp),%eax
0819102d +0x155:  mov    %eax,0x4(%esp)
08191031 +0x159:  movl   $"USE AVATAR RECHANGE",(%esp)
08191038 +0x160:  call   08197ba4 <_ZN4ARAD11PRINT_ERROR7isEmptyEPcP5CUsert>  ; ARAD::PRINT_ERROR::isEmpty(char*, CUser*, unsigned short)
0819103d +0x165:  mov    $0x0,%eax
08191042 +0x16a:  jmp    08191140 <+0x268>
08191047 +0x16f:  mov    -0x2c(%ebp),%eax
0819104a +0x172:  movzwl 0xf(%eax),%eax
0819104e +0x176:  movzwl %ax,%eax
08191051 +0x179:  add    -0x30(%ebp),%eax
08191054 +0x17c:  mov    %eax,-0x28(%ebp)
08191057 +0x17f:  mov    -0x28(%ebp),%eax
0819105a +0x182:  cmp    -0x34(%ebp),%eax
0819105d +0x185:  jle    08191065 <+0x18d>
0819105f +0x187:  mov    -0x34(%ebp),%eax
08191062 +0x18a:  mov    %eax,-0x28(%ebp)
08191065 +0x18d:  mov    -0x2c(%ebp),%eax
08191068 +0x190:  movzwl 0xf(%eax),%eax
0819106c +0x194:  movzwl %ax,%eax
0819106f +0x197:  mov    -0x28(%ebp),%edx
08191072 +0x19a:  mov    %edx,%ecx
08191074 +0x19c:  sub    %eax,%ecx
08191076 +0x19e:  mov    %ecx,%eax
08191078 +0x1a0:  mov    %eax,-0x24(%ebp)
0819107b +0x1a3:  mov    -0x28(%ebp),%eax
0819107e +0x1a6:  mov    %eax,%edx
08191080 +0x1a8:  mov    -0x2c(%ebp),%eax
08191083 +0x1ab:  mov    %dx,0xf(%eax)
08191087 +0x1af:  movswl -0x5c(%ebp),%eax
0819108b +0x1b3:  mov    %eax,0x8(%esp)
0819108f +0x1b7:  mov    0xc(%ebp),%eax
08191092 +0x1ba:  mov    %eax,0x4(%esp)
08191096 +0x1be:  movl   $0x1,(%esp)
0819109d +0x1c5:  call   081913f6 <_ZN20AvatarRechargeServer21UpdateAvatarEnduranceEN5CUser11eSendTargetEPS0_s>  ; AvatarRechargeServer::UpdateAvatarEndurance(CUser::eSendTarget, CUser*, short)
081910a2 +0x1ca:  mov    0xc(%ebp),%eax
081910a5 +0x1cd:  mov    %eax,(%esp)
081910a8 +0x1d0:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
081910ad +0x1d5:  mov    %eax,%ebx
081910af +0x1d7:  mov    0x14(%ebp),%eax
081910b2 +0x1da:  movzwl 0xf(%eax),%eax
081910b6 +0x1de:  movzwl %ax,%eax
081910b9 +0x1e1:  mov    %eax,-0x64(%ebp)
081910bc +0x1e4:  mov    -0x2c(%ebp),%eax
081910bf +0x1e7:  mov    0x2(%eax),%edi
081910c2 +0x1ea:  movswl -0x5c(%ebp),%esi
081910c6 +0x1ee:  movl   $0x0,0xc(%esp)
081910ce +0x1f6:  movl   $0x142,0x8(%esp)
081910d6 +0x1fe:  movl   $&_ZZN20AvatarRechargeServer9UseEmblemEP5CUserRSt6vectorIiSaIiEEP10Inven_ItemsE19__PRETTY_FUNCTION__,0x4(%esp)
081910de +0x206:  lea    -0x48(%ebp),%eax
081910e1 +0x209:  mov    %eax,(%esp)
081910e4 +0x20c:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081910e9 +0x211:  mov    %ebx,0x14(%esp)
081910ed +0x215:  mov    -0x64(%ebp),%eax
081910f0 +0x218:  mov    %eax,0x10(%esp)
081910f4 +0x21c:  mov    %edi,0xc(%esp)
081910f8 +0x220:  mov    %esi,0x8(%esp)
081910fc +0x224:  movl   $"USE EMBLEM + RECHARGE : success [slot:%d] [item_id:%d] [Endurance:%d] [charac_no:%d]",0x4(%esp)
08191104 +0x22c:  lea    -0x48(%ebp),%eax
08191107 +0x22f:  mov    %eax,(%esp)
0819110a +0x232:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0819110f +0x237:  lea    -0x58(%ebp),%eax
08191112 +0x23a:  mov    %eax,(%esp)
08191115 +0x23d:  call   081933f6 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x5e>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x5e
0819111a +0x242:  mov    -0x2c(%ebp),%eax
0819111d +0x245:  mov    0x7(%eax),%eax
08191120 +0x248:  mov    %eax,-0x58(%ebp)
08191123 +0x24b:  mov    -0x2c(%ebp),%eax
08191126 +0x24e:  movzwl 0xf(%eax),%eax
0819112a +0x252:  movzwl %ax,%eax
0819112d +0x255:  mov    %eax,-0x54(%ebp)
08191130 +0x258:  lea    -0x58(%ebp),%eax
08191133 +0x25b:  mov    %eax,(%esp)
08191136 +0x25e:  call   08190dea <_ZN20AvatarRechargeServer23SaveAvatarEnduranceUnitERN4arad26SigAradAvatarEnduranceSaveE>  ; AvatarRechargeServer::SaveAvatarEnduranceUnit(arad::SigAradAvatarEnduranceSave&)
0819113b +0x263:  mov    $0x1,%eax
08191140 +0x268:  lea    -0xc(%ebp),%esp
08191143 +0x26b:  add    $0x0,%esp
08191146 +0x26e:  pop    %ebx
08191147 +0x26f:  pop    %esi
08191148 +0x270:  pop    %edi
08191149 +0x271:  pop    %ebp
0819114a +0x272:  ret
0819114b +0x273:  nop
```

## 反编译 C

```c
// AvatarRechargeServer::UseEmblem @ 0x8190ed8

/* AvatarRechargeServer::UseEmblem(CUser*, std::vector<int, std::allocator<int> >&, Inven_Item*,
   short) */

undefined4 __thiscall
AvatarRechargeServer::UseEmblem
          (AvatarRechargeServer *this,CUser *param_1,vector *param_2,Inven_Item *param_3,
          short param_4)

{
  ushort uVar1;
  bool bVar2;
  char cVar3;
  CInventory *pCVar4;
  CAvatarItemMgr *this_00;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int local_64;
  ushort local_60;
  undefined4 local_5c;
  uint local_58;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_54 [4];
  int local_50;
  cMyTrace local_4c [16];
  stAvatarEmblemInfo_t *local_3c;
  int local_38;
  int local_34;
  Inven_Item *local_30;
  int local_2c;
  int local_28;
  uint local_24;
  uint local_20;
  
  local_60 = param_4;
  iVar7 = *(int *)(param_3 + 7);
  pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  this_00 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar4);
  local_3c = (stAvatarEmblemInfo_t *)WongWork::CAvatarItemMgr::getJewelSocketData(this_00,iVar7);
  local_38 = getSocketCount(local_3c);
  local_38 = local_38 * *(int *)(this + 4);
  local_34 = 0;
  std::_Rb_tree_iterator<std::pair<int_const,int>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<int_const,int>> *)&local_50);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_54);
  local_24 = 0;
  local_20 = std::vector<int,std::allocator<int>>::size((vector<int,std::allocator<int>> *)param_2);
  for (; local_24 < local_20; local_24 = local_24 + 1) {
    std::vector<int,std::allocator<int>>::operator[]
              ((vector<int,std::allocator<int>> *)param_2,local_24);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find(&local_64);
    local_50 = local_64;
    cVar3 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,int>> *)&local_50,
                       (_Rb_tree_iterator *)local_54);
    if (cVar3 != '\0') {
      iVar7 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,int>> *)&local_50);
      local_34 = local_34 + *(int *)(iVar7 + 4);
    }
  }
  iVar7 = (int)(short)local_60;
  pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
  local_30 = (Inven_Item *)CInventory::GetInvenRef(pCVar4,2,iVar7);
  if (local_30 != (Inven_Item *)0x0) {
    cVar3 = Inven_Item::isEmpty(local_30);
    if (cVar3 == '\0') {
      bVar2 = false;
      goto LAB_0819101b;
    }
  }
  bVar2 = true;
LAB_0819101b:
  if (bVar2) {
    ARAD::PRINT_ERROR::isEmpty("USE AVATAR RECHANGE",param_1,local_60);
    uVar5 = 0;
  }
  else {
    local_2c = (uint)*(ushort *)(local_30 + 0xf) + local_34;
    if (local_38 < local_2c) {
      local_2c = local_38;
    }
    local_28 = local_2c - (uint)*(ushort *)(local_30 + 0xf);
    *(short *)(local_30 + 0xf) = (short)local_2c;
    UpdateAvatarEndurance(1,param_1,(int)(short)local_60);
    uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    uVar1 = *(ushort *)(param_3 + 0xf);
    uVar5 = *(undefined4 *)(local_30 + 2);
    iVar7 = (int)(short)local_60;
    cMyTrace::cMyTrace(local_4c,
                       "bool AvatarRechargeServer::UseEmblem(CUser*, std::vector<int, std::allocator<int> >&, Inven_Item*, short int)"
                       ,0x142,0);
    cMyTrace::operator()
              (local_4c,
               "USE EMBLEM + RECHARGE : success [slot:%d] [item_id:%d] [Endurance:%d] [charac_no:%d]"
               ,iVar7,uVar5,(uint)uVar1,uVar6);
    arad::SigAradAvatarEnduranceSave::SigAradAvatarEnduranceSave
              ((SigAradAvatarEnduranceSave *)&local_5c);
    local_5c = *(undefined4 *)(local_30 + 7);
    local_58 = (uint)*(ushort *)(local_30 + 0xf);
    SaveAvatarEnduranceUnit((SigAradAvatarEnduranceSave *)&local_5c);
    uVar5 = 1;
  }
  return uVar5;
}
```
