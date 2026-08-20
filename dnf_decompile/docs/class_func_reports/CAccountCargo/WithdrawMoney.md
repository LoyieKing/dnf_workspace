# WithdrawMoney

`_ZN13CAccountCargo13WithdrawMoneyEj`

`CAccountCargo::WithdrawMoney(unsigned int)`

| 类 | 地址 |
|---|---|
| `CAccountCargo` | `0x0828a2f6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0828a2f6  _ZN13CAccountCargo13WithdrawMoneyEj
#           CAccountCargo::WithdrawMoney(unsigned int)
# range [0x0828a2f6, 0x0828a4c9]
0828a2f6 +0x000:  push   %ebp
0828a2f7 +0x001:  mov    %esp,%ebp
0828a2f9 +0x003:  push   %ebx
0828a2fa +0x004:  sub    $0x34,%esp
0828a2fd +0x007:  mov    0x8(%ebp),%eax
0828a300 +0x00a:  mov    (%eax),%ebx
0828a302 +0x00c:  call   081625e6 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x854>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x854
0828a307 +0x011:  movl   $0x1a,0xc(%esp)
0828a30f +0x019:  movl   $0x1,0x8(%esp)
0828a317 +0x021:  mov    %ebx,0x4(%esp)
0828a31b +0x025:  mov    %eax,(%esp)
0828a31e +0x028:  call   0816e6b8 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi>  ; ServiceRestrictManager::isRestricted(CUser*, RestrictCategory::Enum, int)
0828a323 +0x02d:  test   %al,%al
0828a325 +0x02f:  je     0828a34e <+0x58>
0828a327 +0x031:  mov    0x8(%ebp),%eax
0828a32a +0x034:  mov    (%eax),%eax
0828a32c +0x036:  movl   $0xd1,0x8(%esp)
0828a334 +0x03e:  movl   $0x135,0x4(%esp)
0828a33c +0x046:  mov    %eax,(%esp)
0828a33f +0x049:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0828a344 +0x04e:  mov    $0x0,%eax
0828a349 +0x053:  jmp    0828a4c3 <+0x1cd>
0828a34e +0x058:  mov    0x8(%ebp),%eax
0828a351 +0x05b:  mov    (%eax),%edx
0828a353 +0x05d:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
0828a358 +0x062:  movl   $0x3,0x8(%esp)
0828a360 +0x06a:  mov    %edx,0x4(%esp)
0828a364 +0x06e:  mov    %eax,(%esp)
0828a367 +0x071:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
0828a36c +0x076:  mov    %eax,-0xc(%ebp)
0828a36f +0x079:  cmpl   $0x0,-0xc(%ebp)
0828a373 +0x07d:  je     0828a39e <+0xa8>
0828a375 +0x07f:  mov    -0xc(%ebp),%eax
0828a378 +0x082:  movzbl %al,%edx
0828a37b +0x085:  mov    0x8(%ebp),%eax
0828a37e +0x088:  mov    (%eax),%eax
0828a380 +0x08a:  mov    %edx,0x8(%esp)
0828a384 +0x08e:  movl   $0x135,0x4(%esp)
0828a38c +0x096:  mov    %eax,(%esp)
0828a38f +0x099:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0828a394 +0x09e:  mov    $0x0,%eax
0828a399 +0x0a3:  jmp    0828a4c3 <+0x1cd>
0828a39e +0x0a8:  mov    0x8(%ebp),%eax
0828a3a1 +0x0ab:  mov    %eax,(%esp)
0828a3a4 +0x0ae:  call   0822f020 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x46ca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x46ca
0828a3a9 +0x0b3:  cmp    0xc(%ebp),%eax
0828a3ac +0x0b6:  jb     0828a3b5 <+0xbf>
0828a3ae +0x0b8:  mov    0xc(%ebp),%eax
0828a3b1 +0x0bb:  test   %eax,%eax
0828a3b3 +0x0bd:  jns    0828a3bc <+0xc6>
0828a3b5 +0x0bf:  mov    $0x1,%eax
0828a3ba +0x0c4:  jmp    0828a3c1 <+0xcb>
0828a3bc +0x0c6:  mov    $0x0,%eax
0828a3c1 +0x0cb:  test   %al,%al
0828a3c3 +0x0cd:  je     0828a3ec <+0xf6>
0828a3c5 +0x0cf:  mov    0x8(%ebp),%eax
0828a3c8 +0x0d2:  mov    (%eax),%eax
0828a3ca +0x0d4:  movl   $0xa,0x8(%esp)
0828a3d2 +0x0dc:  movl   $0x135,0x4(%esp)
0828a3da +0x0e4:  mov    %eax,(%esp)
0828a3dd +0x0e7:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0828a3e2 +0x0ec:  mov    $0x0,%eax
0828a3e7 +0x0f1:  jmp    0828a4c3 <+0x1cd>
0828a3ec +0x0f6:  mov    0xc(%ebp),%edx
0828a3ef +0x0f9:  mov    0x8(%ebp),%eax
0828a3f2 +0x0fc:  mov    (%eax),%eax
0828a3f4 +0x0fe:  mov    %edx,0x4(%esp)
0828a3f8 +0x102:  mov    %eax,(%esp)
0828a3fb +0x105:  call   0866af1c <_ZN5CUser10CheckMoneyEi>  ; CUser::CheckMoney(int)
0828a400 +0x10a:  xor    $0x1,%eax
0828a403 +0x10d:  test   %al,%al
0828a405 +0x10f:  je     0828a42e <+0x138>
0828a407 +0x111:  mov    0x8(%ebp),%eax
0828a40a +0x114:  mov    (%eax),%eax
0828a40c +0x116:  movl   $0x5e,0x8(%esp)
0828a414 +0x11e:  movl   $0x134,0x4(%esp)
0828a41c +0x126:  mov    %eax,(%esp)
0828a41f +0x129:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0828a424 +0x12e:  mov    $0x0,%eax
0828a429 +0x133:  jmp    0828a4c3 <+0x1cd>
0828a42e +0x138:  mov    0xc(%ebp),%eax
0828a431 +0x13b:  mov    %eax,0x4(%esp)
0828a435 +0x13f:  mov    0x8(%ebp),%eax
0828a438 +0x142:  mov    %eax,(%esp)
0828a43b +0x145:  call   0828a764 <_ZN13CAccountCargo8SubMoneyEj>  ; CAccountCargo::SubMoney(unsigned int)
0828a440 +0x14a:  mov    0xc(%ebp),%ebx
0828a443 +0x14d:  mov    0x8(%ebp),%eax
0828a446 +0x150:  mov    (%eax),%eax
0828a448 +0x152:  mov    %eax,(%esp)
0828a44b +0x155:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0828a450 +0x15a:  movl   $0x0,0x10(%esp)
0828a458 +0x162:  movl   $0x1,0xc(%esp)
0828a460 +0x16a:  movl   $0x1b,0x8(%esp)
0828a468 +0x172:  mov    %ebx,0x4(%esp)
0828a46c +0x176:  mov    %eax,(%esp)
0828a46f +0x179:  call   084ff29c <_ZN10CInventory10gain_moneyEi15eMoneyAddReasonbi>  ; CInventory::gain_money(int, eMoneyAddReason, bool, int)
0828a474 +0x17e:  test   %eax,%eax
0828a476 +0x180:  sete   %al
0828a479 +0x183:  test   %al,%al
0828a47b +0x185:  je     0828a4a1 <+0x1ab>
0828a47d +0x187:  mov    0x8(%ebp),%eax
0828a480 +0x18a:  mov    (%eax),%eax
0828a482 +0x18c:  movl   $0xa,0x8(%esp)
0828a48a +0x194:  movl   $0x135,0x4(%esp)
0828a492 +0x19c:  mov    %eax,(%esp)
0828a495 +0x19f:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0828a49a +0x1a4:  mov    $0x0,%eax
0828a49f +0x1a9:  jmp    0828a4c3 <+0x1cd>
0828a4a1 +0x1ab:  movl   $0x135,0x4(%esp)
0828a4a9 +0x1b3:  mov    0x8(%ebp),%eax
0828a4ac +0x1b6:  mov    %eax,(%esp)
0828a4af +0x1b9:  call   0828a7dc <_ZN13CAccountCargo15SendNotifyMoneyE14ENUM_CMDPACKET>  ; CAccountCargo::SendNotifyMoney(ENUM_CMDPACKET)
0828a4b4 +0x1be:  mov    0x8(%ebp),%eax
0828a4b7 +0x1c1:  movb   $0x1,0xd64(%eax)
0828a4be +0x1c8:  mov    $0x1,%eax
0828a4c3 +0x1cd:  add    $0x34,%esp
0828a4c6 +0x1d0:  pop    %ebx
0828a4c7 +0x1d1:  pop    %ebp
0828a4c8 +0x1d2:  ret
0828a4c9 +0x1d3:  nop
```

## 反编译 C

```c
// CAccountCargo::WithdrawMoney @ 0x828a2f6

/* CAccountCargo::WithdrawMoney(unsigned int) */

undefined4 __thiscall CAccountCargo::WithdrawMoney(CAccountCargo *this,uint param_1)

{
  bool bVar1;
  char cVar2;
  ServiceRestrictManager *pSVar3;
  undefined4 uVar4;
  uint uVar5;
  CInventory *pCVar6;
  int iVar7;
  
  uVar4 = *(undefined4 *)this;
  pSVar3 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
  cVar2 = ServiceRestrictManager::isRestricted(pSVar3,uVar4,1,0x1a);
  if (cVar2 == '\0') {
    uVar5 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,*(undefined4 *)this,3);
    if (uVar5 == 0) {
      uVar5 = GetMoney(this);
      if ((uVar5 < param_1) || ((int)param_1 < 0)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        CUser::SendCmdErrorPacket(*(CUser **)this,0x135,10);
        uVar4 = 0;
      }
      else {
        cVar2 = CUser::CheckMoney(*(CUser **)this,param_1);
        if (cVar2 == '\x01') {
          SubMoney(this,param_1);
          pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW(*(CUserCharacInfo **)this);
          iVar7 = CInventory::gain_money(pCVar6,param_1,0x1b,1,0);
          if (iVar7 == 0) {
            CUser::SendCmdErrorPacket(*(CUser **)this,0x135,10);
            uVar4 = 0;
          }
          else {
            SendNotifyMoney(this,0x135);
            this[0xd64] = (CAccountCargo)0x1;
            uVar4 = 1;
          }
        }
        else {
          CUser::SendCmdErrorPacket(*(CUser **)this,0x134,0x5e);
          uVar4 = 0;
        }
      }
    }
    else {
      CUser::SendCmdErrorPacket(*(CUser **)this,0x135,uVar5 & 0xff);
      uVar4 = 0;
    }
  }
  else {
    CUser::SendCmdErrorPacket(*(CUser **)this,0x135,0xd1);
    uVar4 = 0;
  }
  return uVar4;
}
```
