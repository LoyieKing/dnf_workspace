# serviceOfShusia

`_ZN5CUser15serviceOfShusiaEv`

`CUser::serviceOfShusia()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0865798a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0865798a  _ZN5CUser15serviceOfShusiaEv
#           CUser::serviceOfShusia()
# range [0x0865798a, 0x08657ad9]
0865798a +0x000:  push   %ebp
0865798b +0x001:  mov    %esp,%ebp
0865798d +0x003:  push   %esi
0865798e +0x004:  push   %ebx
0865798f +0x005:  sub    $0x20,%esp
08657992 +0x008:  mov    0x8(%ebp),%eax
08657995 +0x00b:  mov    %eax,(%esp)
08657998 +0x00e:  call   080da2da <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x477>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x477
0865799d +0x013:  test   %al,%al
0865799f +0x015:  je     086579ab <+0x21>
086579a1 +0x017:  mov    $0x13,%eax
086579a6 +0x01c:  jmp    08657ad2 <+0x148>
086579ab +0x021:  mov    0x8(%ebp),%eax
086579ae +0x024:  mov    %eax,(%esp)
086579b1 +0x027:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
086579b6 +0x02c:  movzbl 0x75(%eax),%eax
086579ba +0x030:  cmp    $0x63,%al
086579bc +0x032:  seta   %al
086579bf +0x035:  test   %al,%al
086579c1 +0x037:  je     086579cd <+0x43>
086579c3 +0x039:  mov    $0x12,%eax
086579c8 +0x03e:  jmp    08657ad2 <+0x148>
086579cd +0x043:  call   081625e6 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x854>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x854
086579d2 +0x048:  movl   $0x16,0xc(%esp)
086579da +0x050:  movl   $0x1,0x8(%esp)
086579e2 +0x058:  mov    0x8(%ebp),%edx
086579e5 +0x05b:  mov    %edx,0x4(%esp)
086579e9 +0x05f:  mov    %eax,(%esp)
086579ec +0x062:  call   0816e6b8 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi>  ; ServiceRestrictManager::isRestricted(CUser*, RestrictCategory::Enum, int)
086579f1 +0x067:  test   %al,%al
086579f3 +0x069:  je     086579ff <+0x75>
086579f5 +0x06b:  mov    $0xd1,%eax
086579fa +0x070:  jmp    08657ad2 <+0x148>
086579ff +0x075:  mov    0x8(%ebp),%eax
08657a02 +0x078:  mov    %eax,(%esp)
08657a05 +0x07b:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08657a0a +0x080:  movzbl 0x75(%eax),%eax
08657a0e +0x084:  movzbl %al,%esi
08657a11 +0x087:  mov    0x8(%ebp),%eax
08657a14 +0x08a:  mov    %eax,(%esp)
08657a17 +0x08d:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08657a1c +0x092:  mov    %eax,%ebx
08657a1e +0x094:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08657a23 +0x099:  add    $0x68,%eax
08657a26 +0x09c:  mov    %esi,0x8(%esp)
08657a2a +0x0a0:  mov    %ebx,0x4(%esp)
08657a2e +0x0a4:  mov    %eax,(%esp)
08657a31 +0x0a7:  call   086938a2 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0xf7>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0xf7
08657a36 +0x0ac:  mov    %eax,-0xc(%ebp)
08657a39 +0x0af:  mov    0x8(%ebp),%eax
08657a3c +0x0b2:  mov    %eax,(%esp)
08657a3f +0x0b5:  call   0817a188 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x206>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x206
08657a44 +0x0ba:  cmp    -0xc(%ebp),%eax
08657a47 +0x0bd:  setl   %al
08657a4a +0x0c0:  test   %al,%al
08657a4c +0x0c2:  je     08657a55 <+0xcb>
08657a4e +0x0c4:  mov    $0x16,%eax
08657a53 +0x0c9:  jmp    08657ad2 <+0x148>
08657a55 +0x0cb:  mov    0x8(%ebp),%eax
08657a58 +0x0ce:  mov    %eax,(%esp)
08657a5b +0x0d1:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08657a60 +0x0d6:  movl   $0x1,0xc(%esp)
08657a68 +0x0de:  movl   $0xa,0x8(%esp)
08657a70 +0x0e6:  mov    -0xc(%ebp),%edx
08657a73 +0x0e9:  mov    %edx,0x4(%esp)
08657a77 +0x0ed:  mov    %eax,(%esp)
08657a7a +0x0f0:  call   084ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>  ; CInventory::use_money(int, eMoneySubReason, bool)
08657a7f +0x0f5:  mov    -0xc(%ebp),%ebx
08657a82 +0x0f8:  call   0860d5ef <_Z25GetInstanceValueStatisticv>  ; GetInstanceValueStatistic()
08657a87 +0x0fd:  mov    %ebx,0xc(%esp)
08657a8b +0x101:  mov    0x8(%ebp),%edx
08657a8e +0x104:  mov    %edx,0x8(%esp)
08657a92 +0x108:  movl   $0x10,0x4(%esp)
08657a9a +0x110:  mov    %eax,(%esp)
08657a9d +0x113:  call   0860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>  ; CValueStatistic::AddValueStatistic(VALUE_STATISTIC_FIELD, CUser*, unsigned int)
08657aa2 +0x118:  mov    0x8(%ebp),%eax
08657aa5 +0x11b:  movl   $0x64,0x4(%esp)
08657aad +0x123:  mov    %eax,(%esp)
08657ab0 +0x126:  call   082f0914 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x698>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x698
08657ab5 +0x12b:  mov    0x8(%ebp),%eax
08657ab8 +0x12e:  mov    %eax,(%esp)
08657abb +0x131:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08657ac0 +0x136:  movzwl 0x27(%eax),%eax
08657ac4 +0x13a:  cwtl
08657ac5 +0x13b:  mov    %eax,(%esp)
08657ac8 +0x13e:  call   0860b90a <_ZN10Statistics16UseShusiaServiceEi>  ; Statistics::UseShusiaService(int)
08657acd +0x143:  mov    $0x0,%eax
08657ad2 +0x148:  add    $0x20,%esp
08657ad5 +0x14b:  pop    %ebx
08657ad6 +0x14c:  pop    %esi
08657ad7 +0x14d:  pop    %ebp
08657ad8 +0x14e:  ret
08657ad9 +0x14f:  nop
```

## 反编译 C

```c
// CUser::serviceOfShusia @ 0x865798a

/* CUser::serviceOfShusia() */

undefined4 __thiscall CUser::serviceOfShusia(CUser *this)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  ServiceRestrictManager *pSVar5;
  int iVar6;
  CInventory *pCVar7;
  CValueStatistic *pCVar8;
  
  cVar2 = CUserCharacInfo::IsCurCharacGhost((CUserCharacInfo *)this);
  if (cVar2 == '\0') {
    iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
    if (*(byte *)(iVar4 + 0x75) < 100) {
      pSVar5 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
      cVar2 = ServiceRestrictManager::isRestricted(pSVar5,this,1,0x16);
      if (cVar2 == '\0') {
        iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
        bVar1 = *(byte *)(iVar4 + 0x75);
        iVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
        iVar6 = G_CDataManager();
        iVar4 = ServerParameterScript::getRecoverStaminaPrice
                          ((ServerParameterScript *)(iVar6 + 0x68),iVar4,(uint)bVar1);
        iVar6 = CUserCharacInfo::getCurCharacMoney((CUserCharacInfo *)this);
        if (iVar6 < iVar4) {
          uVar3 = 0x16;
        }
        else {
          pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
          CInventory::use_money(pCVar7,iVar4,10,1);
          pCVar8 = (CValueStatistic *)GetInstanceValueStatistic();
          CValueStatistic::AddValueStatistic(pCVar8,0x10,this,iVar4);
          CUserCharacInfo::setCurCharacStamina((CUserCharacInfo *)this,'d');
          iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
          Statistics::UseShusiaService((int)*(short *)(iVar4 + 0x27));
          uVar3 = 0;
        }
      }
      else {
        uVar3 = 0xd1;
      }
    }
    else {
      uVar3 = 0x12;
    }
  }
  else {
    uVar3 = 0x13;
  }
  return uVar3;
}
```
