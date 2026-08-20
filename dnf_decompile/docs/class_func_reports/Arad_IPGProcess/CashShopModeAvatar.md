# CashShopModeAvatar

`_ZN15Arad_IPGProcess18CashShopModeAvatarEP5CUsermiiccPKcRijic`

`Arad_IPGProcess::CashShopModeAvatar(CUser*, unsigned long, int, int, char, char, char const*, int&, unsigned int, int, char)`

| 类 | 地址 |
|---|---|
| `Arad_IPGProcess` | `0x0819c2b4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0819c2b4  _ZN15Arad_IPGProcess18CashShopModeAvatarEP5CUsermiiccPKcRijic
#           Arad_IPGProcess::CashShopModeAvatar(CUser*, unsigned long, int, int, char, char, char const*, int&, unsigned int, int, char)
# range [0x0819c2b4, 0x0819c433]
0819c2b4 +0x000:  push   %ebp
0819c2b5 +0x001:  mov    %esp,%ebp
0819c2b7 +0x003:  push   %edi
0819c2b8 +0x004:  push   %esi
0819c2b9 +0x005:  push   %ebx
0819c2ba +0x006:  sub    $0x5c,%esp
0819c2bd +0x009:  mov    0x1c(%ebp),%ecx
0819c2c0 +0x00c:  mov    0x20(%ebp),%edx
0819c2c3 +0x00f:  mov    0x34(%ebp),%eax
0819c2c6 +0x012:  mov    %cl,-0x2c(%ebp)
0819c2c9 +0x015:  mov    %dl,-0x30(%ebp)
0819c2cc +0x018:  mov    %al,-0x34(%ebp)
0819c2cf +0x01b:  cmpb   $0x1,-0x34(%ebp)
0819c2d3 +0x01f:  jne    0819c321 <+0x6d>
0819c2d5 +0x021:  movsbl -0x30(%ebp),%ebx
0819c2d9 +0x025:  movsbl -0x2c(%ebp),%ecx
0819c2dd +0x029:  mov    0x10(%ebp),%edx
0819c2e0 +0x02c:  mov    0x8(%ebp),%eax
0819c2e3 +0x02f:  mov    (%eax),%eax
0819c2e5 +0x031:  mov    0x30(%ebp),%esi
0819c2e8 +0x034:  mov    %esi,0x20(%esp)
0819c2ec +0x038:  mov    0x2c(%ebp),%esi
0819c2ef +0x03b:  mov    %esi,0x1c(%esp)
0819c2f3 +0x03f:  mov    0x24(%ebp),%esi
0819c2f6 +0x042:  mov    %esi,0x18(%esp)
0819c2fa +0x046:  mov    %ebx,0x14(%esp)
0819c2fe +0x04a:  mov    %ecx,0x10(%esp)
0819c302 +0x04e:  mov    0x18(%ebp),%ecx
0819c305 +0x051:  mov    %ecx,0xc(%esp)
0819c309 +0x055:  mov    %edx,0x8(%esp)
0819c30d +0x059:  mov    0xc(%ebp),%edx
0819c310 +0x05c:  mov    %edx,0x4(%esp)
0819c314 +0x060:  mov    %eax,(%esp)
0819c317 +0x063:  call   08326036 <_ZN8WongWork9CCeraShop18_processAvatarGiftEP5CUseriiccPKcji>  ; WongWork::CCeraShop::_processAvatarGift(CUser*, int, int, char, char, char const*, unsigned int, int)
0819c31c +0x068:  jmp    0819c42c <+0x178>
0819c321 +0x06d:  movsbl -0x30(%ebp),%edi
0819c325 +0x071:  movsbl -0x2c(%ebp),%esi
0819c329 +0x075:  mov    0x10(%ebp),%ebx
0819c32c +0x078:  mov    0xc(%ebp),%eax
0819c32f +0x07b:  mov    %eax,(%esp)
0819c332 +0x07e:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0819c337 +0x083:  movl   $0x0,0x24(%esp)
0819c33f +0x08b:  movl   $0x0,0x20(%esp)
0819c347 +0x093:  movl   $0x0,0x1c(%esp)
0819c34f +0x09b:  mov    0x24(%ebp),%edx
0819c352 +0x09e:  mov    %edx,0x18(%esp)
0819c356 +0x0a2:  mov    %edi,0x14(%esp)
0819c35a +0x0a6:  mov    %esi,0x10(%esp)
0819c35e +0x0aa:  movl   $0x0,0xc(%esp)
0819c366 +0x0b2:  mov    0x18(%ebp),%edx
0819c369 +0x0b5:  mov    %edx,0x8(%esp)
0819c36d +0x0b9:  mov    %ebx,0x4(%esp)
0819c371 +0x0bd:  mov    %eax,(%esp)
0819c374 +0x0c0:  call   08509b9e <_ZN10CInventory13AddAvatarItemEiibccPKc20eAvatarItemAddReasonbt>  ; CInventory::AddAvatarItem(int, int, bool, char, char, char const*, eAvatarItemAddReason, bool, unsigned short)
0819c379 +0x0c5:  mov    %eax,-0x20(%ebp)
0819c37c +0x0c8:  cmpl   $0x0,-0x20(%ebp)
0819c380 +0x0cc:  jns    0819c40a <+0x156>
0819c386 +0x0d2:  movl   $0x0,0xc(%esp)
0819c38e +0x0da:  movl   $"game_server_msg_104",0x8(%esp)
0819c396 +0x0e2:  movl   $0x4,0x4(%esp)
0819c39e +0x0ea:  movl   $&g_scriptStringManager_,(%esp)
0819c3a5 +0x0f1:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
0819c3aa +0x0f6:  mov    %eax,-0x1c(%ebp)
0819c3ad +0x0f9:  mov    -0x1c(%ebp),%eax
0819c3b0 +0x0fc:  mov    %eax,(%esp)
0819c3b3 +0x0ff:  call   0807e3b0 <_init+0xca8>
0819c3b8 +0x104:  mov    %eax,-0x38(%ebp)
0819c3bb +0x107:  movsbl -0x30(%ebp),%edi
0819c3bf +0x10b:  movsbl -0x2c(%ebp),%esi
0819c3c3 +0x10f:  mov    0x10(%ebp),%ebx
0819c3c6 +0x112:  mov    0xc(%ebp),%eax
0819c3c9 +0x115:  mov    %eax,(%esp)
0819c3cc +0x118:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0819c3d1 +0x11d:  mov    -0x38(%ebp),%edx
0819c3d4 +0x120:  mov    %edx,0x20(%esp)
0819c3d8 +0x124:  mov    -0x1c(%ebp),%edx
0819c3db +0x127:  mov    %edx,0x1c(%esp)
0819c3df +0x12b:  mov    0x24(%ebp),%edx
0819c3e2 +0x12e:  mov    %edx,0x18(%esp)
0819c3e6 +0x132:  mov    %edi,0x14(%esp)
0819c3ea +0x136:  mov    %esi,0x10(%esp)
0819c3ee +0x13a:  mov    0x18(%ebp),%edx
0819c3f1 +0x13d:  mov    %edx,0xc(%esp)
0819c3f5 +0x141:  mov    %ebx,0x8(%esp)
0819c3f9 +0x145:  mov    %eax,0x4(%esp)
0819c3fd +0x149:  mov    0xc(%ebp),%eax
0819c400 +0x14c:  mov    %eax,(%esp)
0819c403 +0x14f:  call   08556f16 <_ZN8WongWork14CMailBoxHelper30ReqDBSendNewAvatarMailCashShopEP5CUseriiiccPKcS4_i>  ; WongWork::CMailBoxHelper::ReqDBSendNewAvatarMailCashShop(CUser*, int, int, int, char, char, char const*, char const*, int)
0819c408 +0x154:  jmp    0819c42c <+0x178>
0819c40a +0x156:  mov    -0x20(%ebp),%eax
0819c40d +0x159:  mov    %eax,0xc(%esp)
0819c411 +0x15d:  movl   $0x1,0x8(%esp)
0819c419 +0x165:  movl   $0x1,0x4(%esp)
0819c421 +0x16d:  mov    0xc(%ebp),%eax
0819c424 +0x170:  mov    %eax,(%esp)
0819c427 +0x173:  call   0867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItemList(CUser::eSendTarget, ENUM_ITEMSPACE, int)
0819c42c +0x178:  add    $0x5c,%esp
0819c42f +0x17b:  pop    %ebx
0819c430 +0x17c:  pop    %esi
0819c431 +0x17d:  pop    %edi
0819c432 +0x17e:  pop    %ebp
0819c433 +0x17f:  ret
```

## 反编译 C

```c
// Arad_IPGProcess::CashShopModeAvatar @ 0x819c2b4

/* Arad_IPGProcess::CashShopModeAvatar(CUser*, unsigned long, int, int, char, char, char const*,
   int&, unsigned int, int, char) */

void __thiscall
Arad_IPGProcess::CashShopModeAvatar
          (Arad_IPGProcess *this,CUser *param_1,ulong param_2,int param_3,int param_4,char param_5,
          char param_6,char *param_7,int *param_8,uint param_9,int param_10,char param_11)

{
  CInventory *pCVar1;
  int iVar2;
  char *__s;
  size_t sVar3;
  
  if (param_11 == '\x01') {
    WongWork::CCeraShop::_processAvatarGift
              (*(CCeraShop **)this,param_1,param_2,param_4,param_5,param_6,param_7,param_9,param_10)
    ;
  }
  else {
    pCVar1 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    iVar2 = CInventory::AddAvatarItem
                      (pCVar1,param_2,param_4,0,(int)param_5,(int)param_6,param_7,0,0,0);
    if (iVar2 < 0) {
      __s = (char *)RDARScriptStringManager::findString
                              ((RDARScriptStringManager *)g_scriptStringManager_,4,
                               "game_server_msg_104",(bool *)0x0);
      sVar3 = strlen(__s);
      iVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      WongWork::CMailBoxHelper::ReqDBSendNewAvatarMailCashShop
                (param_1,iVar2,param_2,param_4,param_5,param_6,param_7,__s,sVar3);
    }
    else {
      CUser::SendUpdateItemList(param_1,1,1,iVar2);
    }
  }
  return;
}
```
