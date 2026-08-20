# DepositMoney

`_ZN13CAccountCargo12DepositMoneyEj`

`CAccountCargo::DepositMoney(unsigned int)`

| 类 | 地址 |
|---|---|
| `CAccountCargo` | `0x0828a12a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0828a12a  _ZN13CAccountCargo12DepositMoneyEj
#           CAccountCargo::DepositMoney(unsigned int)
# range [0x0828a12a, 0x0828a2f5]
0828a12a +0x000:  push   %ebp
0828a12b +0x001:  mov    %esp,%ebp
0828a12d +0x003:  push   %ebx
0828a12e +0x004:  sub    $0x24,%esp
0828a131 +0x007:  mov    0x8(%ebp),%eax
0828a134 +0x00a:  mov    (%eax),%ebx
0828a136 +0x00c:  call   081625e6 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x854>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x854
0828a13b +0x011:  movl   $0x1a,0xc(%esp)
0828a143 +0x019:  movl   $0x1,0x8(%esp)
0828a14b +0x021:  mov    %ebx,0x4(%esp)
0828a14f +0x025:  mov    %eax,(%esp)
0828a152 +0x028:  call   0816e6b8 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi>  ; ServiceRestrictManager::isRestricted(CUser*, RestrictCategory::Enum, int)
0828a157 +0x02d:  test   %al,%al
0828a159 +0x02f:  je     0828a182 <+0x58>
0828a15b +0x031:  mov    0x8(%ebp),%eax
0828a15e +0x034:  mov    (%eax),%eax
0828a160 +0x036:  movl   $0xd1,0x8(%esp)
0828a168 +0x03e:  movl   $0x134,0x4(%esp)
0828a170 +0x046:  mov    %eax,(%esp)
0828a173 +0x049:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0828a178 +0x04e:  mov    $0x0,%eax
0828a17d +0x053:  jmp    0828a2ef <+0x1c5>
0828a182 +0x058:  mov    0x8(%ebp),%eax
0828a185 +0x05b:  mov    (%eax),%edx
0828a187 +0x05d:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
0828a18c +0x062:  movl   $0x2,0x8(%esp)
0828a194 +0x06a:  mov    %edx,0x4(%esp)
0828a198 +0x06e:  mov    %eax,(%esp)
0828a19b +0x071:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
0828a1a0 +0x076:  mov    %eax,-0xc(%ebp)
0828a1a3 +0x079:  cmpl   $0x0,-0xc(%ebp)
0828a1a7 +0x07d:  je     0828a1d2 <+0xa8>
0828a1a9 +0x07f:  mov    -0xc(%ebp),%eax
0828a1ac +0x082:  movzbl %al,%edx
0828a1af +0x085:  mov    0x8(%ebp),%eax
0828a1b2 +0x088:  mov    (%eax),%eax
0828a1b4 +0x08a:  mov    %edx,0x8(%esp)
0828a1b8 +0x08e:  movl   $0x134,0x4(%esp)
0828a1c0 +0x096:  mov    %eax,(%esp)
0828a1c3 +0x099:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0828a1c8 +0x09e:  mov    $0x0,%eax
0828a1cd +0x0a3:  jmp    0828a2ef <+0x1c5>
0828a1d2 +0x0a8:  mov    0xc(%ebp),%ebx
0828a1d5 +0x0ab:  mov    0x8(%ebp),%eax
0828a1d8 +0x0ae:  mov    (%eax),%eax
0828a1da +0x0b0:  mov    %eax,(%esp)
0828a1dd +0x0b3:  call   0817a188 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x206>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x206
0828a1e2 +0x0b8:  cmp    %eax,%ebx
0828a1e4 +0x0ba:  jg     0828a1ed <+0xc3>
0828a1e6 +0x0bc:  mov    0xc(%ebp),%eax
0828a1e9 +0x0bf:  test   %eax,%eax
0828a1eb +0x0c1:  jns    0828a1f4 <+0xca>
0828a1ed +0x0c3:  mov    $0x1,%eax
0828a1f2 +0x0c8:  jmp    0828a1f9 <+0xcf>
0828a1f4 +0x0ca:  mov    $0x0,%eax
0828a1f9 +0x0cf:  test   %al,%al
0828a1fb +0x0d1:  je     0828a224 <+0xfa>
0828a1fd +0x0d3:  mov    0x8(%ebp),%eax
0828a200 +0x0d6:  mov    (%eax),%eax
0828a202 +0x0d8:  movl   $0xa,0x8(%esp)
0828a20a +0x0e0:  movl   $0x134,0x4(%esp)
0828a212 +0x0e8:  mov    %eax,(%esp)
0828a215 +0x0eb:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0828a21a +0x0f0:  mov    $0x0,%eax
0828a21f +0x0f5:  jmp    0828a2ef <+0x1c5>
0828a224 +0x0fa:  mov    0xc(%ebp),%eax
0828a227 +0x0fd:  mov    %eax,0x4(%esp)
0828a22b +0x101:  mov    0x8(%ebp),%eax
0828a22e +0x104:  mov    %eax,(%esp)
0828a231 +0x107:  call   0828a4ca <_ZN13CAccountCargo15CheckMoneyLimitEj>  ; CAccountCargo::CheckMoneyLimit(unsigned int)
0828a236 +0x10c:  xor    $0x1,%eax
0828a239 +0x10f:  test   %al,%al
0828a23b +0x111:  je     0828a264 <+0x13a>
0828a23d +0x113:  mov    0x8(%ebp),%eax
0828a240 +0x116:  mov    (%eax),%eax
0828a242 +0x118:  movl   $0x5f,0x8(%esp)
0828a24a +0x120:  movl   $0x134,0x4(%esp)
0828a252 +0x128:  mov    %eax,(%esp)
0828a255 +0x12b:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0828a25a +0x130:  mov    $0x0,%eax
0828a25f +0x135:  jmp    0828a2ef <+0x1c5>
0828a264 +0x13a:  mov    0xc(%ebp),%ebx
0828a267 +0x13d:  mov    0x8(%ebp),%eax
0828a26a +0x140:  mov    (%eax),%eax
0828a26c +0x142:  mov    %eax,(%esp)
0828a26f +0x145:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0828a274 +0x14a:  movl   $0x1,0xc(%esp)
0828a27c +0x152:  movl   $0x28,0x8(%esp)
0828a284 +0x15a:  mov    %ebx,0x4(%esp)
0828a288 +0x15e:  mov    %eax,(%esp)
0828a28b +0x161:  call   084ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>  ; CInventory::use_money(int, eMoneySubReason, bool)
0828a290 +0x166:  xor    $0x1,%eax
0828a293 +0x169:  test   %al,%al
0828a295 +0x16b:  je     0828a2bb <+0x191>
0828a297 +0x16d:  mov    0x8(%ebp),%eax
0828a29a +0x170:  mov    (%eax),%eax
0828a29c +0x172:  movl   $0xa,0x8(%esp)
0828a2a4 +0x17a:  movl   $0x134,0x4(%esp)
0828a2ac +0x182:  mov    %eax,(%esp)
0828a2af +0x185:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0828a2b4 +0x18a:  mov    $0x0,%eax
0828a2b9 +0x18f:  jmp    0828a2ef <+0x1c5>
0828a2bb +0x191:  mov    0xc(%ebp),%eax
0828a2be +0x194:  mov    %eax,0x4(%esp)
0828a2c2 +0x198:  mov    0x8(%ebp),%eax
0828a2c5 +0x19b:  mov    %eax,(%esp)
0828a2c8 +0x19e:  call   0828a742 <_ZN13CAccountCargo8AddMoneyEj>  ; CAccountCargo::AddMoney(unsigned int)
0828a2cd +0x1a3:  movl   $0x134,0x4(%esp)
0828a2d5 +0x1ab:  mov    0x8(%ebp),%eax
0828a2d8 +0x1ae:  mov    %eax,(%esp)
0828a2db +0x1b1:  call   0828a7dc <_ZN13CAccountCargo15SendNotifyMoneyE14ENUM_CMDPACKET>  ; CAccountCargo::SendNotifyMoney(ENUM_CMDPACKET)
0828a2e0 +0x1b6:  mov    0x8(%ebp),%eax
0828a2e3 +0x1b9:  movb   $0x1,0xd64(%eax)
0828a2ea +0x1c0:  mov    $0x1,%eax
0828a2ef +0x1c5:  add    $0x24,%esp
0828a2f2 +0x1c8:  pop    %ebx
0828a2f3 +0x1c9:  pop    %ebp
0828a2f4 +0x1ca:  ret
0828a2f5 +0x1cb:  nop
```

## 反编译 C

```c
// CAccountCargo::DepositMoney @ 0x828a12a

/* CAccountCargo::DepositMoney(unsigned int) */

undefined4 __thiscall CAccountCargo::DepositMoney(CAccountCargo *this,uint param_1)

{
  bool bVar1;
  char cVar2;
  ServiceRestrictManager *pSVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  CInventory *pCVar7;
  
  uVar4 = *(undefined4 *)this;
  pSVar3 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
  cVar2 = ServiceRestrictManager::isRestricted(pSVar3,uVar4,1,0x1a);
  if (cVar2 == '\0') {
    uVar5 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,*(undefined4 *)this,2);
    if (uVar5 == 0) {
      iVar6 = CUserCharacInfo::getCurCharacMoney(*(CUserCharacInfo **)this);
      if ((iVar6 < (int)param_1) || ((int)param_1 < 0)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        CUser::SendCmdErrorPacket(*(CUser **)this,0x134,10);
        uVar4 = 0;
      }
      else {
        cVar2 = CheckMoneyLimit(this,param_1);
        if (cVar2 == '\x01') {
          pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenW(*(CUserCharacInfo **)this);
          cVar2 = CInventory::use_money(pCVar7,param_1,0x28,1);
          if (cVar2 == '\x01') {
            AddMoney(this,param_1);
            SendNotifyMoney(this,0x134);
            this[0xd64] = (CAccountCargo)0x1;
            uVar4 = 1;
          }
          else {
            CUser::SendCmdErrorPacket(*(CUser **)this,0x134,10);
            uVar4 = 0;
          }
        }
        else {
          CUser::SendCmdErrorPacket(*(CUser **)this,0x134,0x5f);
          uVar4 = 0;
        }
      }
    }
    else {
      CUser::SendCmdErrorPacket(*(CUser **)this,0x134,uVar5 & 0xff);
      uVar4 = 0;
    }
  }
  else {
    CUser::SendCmdErrorPacket(*(CUser **)this,0x134,0xd1);
    uVar4 = 0;
  }
  return uVar4;
}
```
