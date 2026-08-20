# _DoGetPackageAvatar

`_ZN8WongWork14CMailBoxHelper19_DoGetPackageAvatarEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR`

`WongWork::CMailBoxHelper::_DoGetPackageAvatar(CUser*, WongWork::CMailBox::CMail const*, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, bool, ENUM_ERROR&)`

| 类 | 地址 |
|---|---|
| `WongWork::CMailBoxHelper` | `0x0855419c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0855419c  _ZN8WongWork14CMailBoxHelper19_DoGetPackageAvatarEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR
#           WongWork::CMailBoxHelper::_DoGetPackageAvatar(CUser*, WongWork::CMailBox::CMail const*, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, bool, ENUM_ERROR&)
# range [0x0855419c, 0x0855447b]
0855419c +0x000:  push   %ebp
0855419d +0x001:  mov    %esp,%ebp
0855419f +0x003:  push   %esi
085541a0 +0x004:  push   %ebx
085541a1 +0x005:  sub    $0xb0,%esp
085541a7 +0x00b:  mov    0x14(%ebp),%eax
085541aa +0x00e:  mov    %al,-0x5c(%ebp)
085541ad +0x011:  lea    -0x4d(%ebp),%eax
085541b0 +0x014:  mov    0xc(%ebp),%edx
085541b3 +0x017:  mov    %edx,0x4(%esp)
085541b7 +0x01b:  mov    %eax,(%esp)
085541ba +0x01e:  call   08557522 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x83>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x83
085541bf +0x023:  sub    $0x4,%esp
085541c2 +0x026:  mov    0xc(%ebp),%eax
085541c5 +0x029:  mov    %eax,(%esp)
085541c8 +0x02c:  call   0855759c <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0xfd>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0xfd
085541cd +0x031:  xor    $0x1,%eax
085541d0 +0x034:  test   %al,%al
085541d2 +0x036:  je     085541e7 <+0x4b>
085541d4 +0x038:  mov    0x18(%ebp),%eax
085541d7 +0x03b:  movl   $0x1,(%eax)
085541dd +0x041:  mov    $0x0,%eax
085541e2 +0x046:  jmp    08554471 <+0x2d5>
085541e7 +0x04b:  movl   $0x0,-0x10(%ebp)
085541ee +0x052:  cmpb   $0x0,-0x5c(%ebp)
085541f2 +0x056:  je     085542d0 <+0x134>
085541f8 +0x05c:  mov    -0x46(%ebp),%ebx
085541fb +0x05f:  mov    0x8(%ebp),%eax
085541fe +0x062:  mov    %eax,(%esp)
08554201 +0x065:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08554206 +0x06a:  mov    %eax,(%esp)
08554209 +0x06d:  call   080dd576 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xbf>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xbf
0855420e +0x072:  mov    %ebx,0x4(%esp)
08554212 +0x076:  mov    %eax,(%esp)
08554215 +0x079:  call   082f981a <_ZNK8WongWork14CAvatarItemMgr13GetExpireDateEi>  ; WongWork::CAvatarItemMgr::GetExpireDate(int) const
0855421a +0x07e:  cmp    $0xffffffff,%eax
0855421d +0x081:  sete   %al
08554220 +0x084:  test   %al,%al
08554222 +0x086:  je     0855422e <+0x92>
08554224 +0x088:  mov    $0x0,%eax
08554229 +0x08d:  jmp    08554471 <+0x2d5>
0855422e +0x092:  mov    0x8(%ebp),%eax
08554231 +0x095:  mov    %eax,(%esp)
08554234 +0x098:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08554239 +0x09d:  mov    -0x4d(%ebp),%edx
0855423c +0x0a0:  mov    %edx,0x4(%esp)
08554240 +0x0a4:  mov    -0x49(%ebp),%edx
08554243 +0x0a7:  mov    %edx,0x8(%esp)
08554247 +0x0ab:  mov    -0x45(%ebp),%edx
0855424a +0x0ae:  mov    %edx,0xc(%esp)
0855424e +0x0b2:  mov    -0x41(%ebp),%edx
08554251 +0x0b5:  mov    %edx,0x10(%esp)
08554255 +0x0b9:  mov    -0x3d(%ebp),%edx
08554258 +0x0bc:  mov    %edx,0x14(%esp)
0855425c +0x0c0:  mov    -0x39(%ebp),%edx
0855425f +0x0c3:  mov    %edx,0x18(%esp)
08554263 +0x0c7:  mov    -0x35(%ebp),%edx
08554266 +0x0ca:  mov    %edx,0x1c(%esp)
0855426a +0x0ce:  mov    -0x31(%ebp),%edx
0855426d +0x0d1:  mov    %edx,0x20(%esp)
08554271 +0x0d5:  mov    -0x2d(%ebp),%edx
08554274 +0x0d8:  mov    %edx,0x24(%esp)
08554278 +0x0dc:  mov    -0x29(%ebp),%edx
0855427b +0x0df:  mov    %edx,0x28(%esp)
0855427f +0x0e3:  mov    -0x25(%ebp),%edx
08554282 +0x0e6:  mov    %edx,0x2c(%esp)
08554286 +0x0ea:  mov    -0x21(%ebp),%edx
08554289 +0x0ed:  mov    %edx,0x30(%esp)
0855428d +0x0f1:  mov    -0x1d(%ebp),%edx
08554290 +0x0f4:  mov    %edx,0x34(%esp)
08554294 +0x0f8:  mov    -0x19(%ebp),%edx
08554297 +0x0fb:  mov    %edx,0x38(%esp)
0855429b +0x0ff:  mov    -0x15(%ebp),%edx
0855429e +0x102:  mov    %edx,0x3c(%esp)
085542a2 +0x106:  movzbl -0x11(%ebp),%edx
085542a6 +0x10a:  mov    %dl,0x40(%esp)
085542aa +0x10e:  mov    %eax,(%esp)
085542ad +0x111:  call   085035f4 <_ZNK10CInventory28tryInsertAvatarIntoInventoryE10Inven_Item>  ; CInventory::tryInsertAvatarIntoInventory(Inven_Item) const
085542b2 +0x116:  shr    $0x1f,%eax
085542b5 +0x119:  test   %al,%al
085542b7 +0x11b:  je     0855446c <+0x2d0>
085542bd +0x121:  mov    0x18(%ebp),%eax
085542c0 +0x124:  movl   $0x4,(%eax)
085542c6 +0x12a:  mov    $0x0,%eax
085542cb +0x12f:  jmp    08554471 <+0x2d5>
085542d0 +0x134:  movl   $0x0,-0xc(%ebp)
085542d7 +0x13b:  mov    0x8(%ebp),%eax
085542da +0x13e:  mov    %eax,(%esp)
085542dd +0x141:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
085542e2 +0x146:  movl   $0x1,0x48(%esp)
085542ea +0x14e:  movl   $0x5,0x44(%esp)
085542f2 +0x156:  mov    -0x4d(%ebp),%edx
085542f5 +0x159:  mov    %edx,0x4(%esp)
085542f9 +0x15d:  mov    -0x49(%ebp),%edx
085542fc +0x160:  mov    %edx,0x8(%esp)
08554300 +0x164:  mov    -0x45(%ebp),%edx
08554303 +0x167:  mov    %edx,0xc(%esp)
08554307 +0x16b:  mov    -0x41(%ebp),%edx
0855430a +0x16e:  mov    %edx,0x10(%esp)
0855430e +0x172:  mov    -0x3d(%ebp),%edx
08554311 +0x175:  mov    %edx,0x14(%esp)
08554315 +0x179:  mov    -0x39(%ebp),%edx
08554318 +0x17c:  mov    %edx,0x18(%esp)
0855431c +0x180:  mov    -0x35(%ebp),%edx
0855431f +0x183:  mov    %edx,0x1c(%esp)
08554323 +0x187:  mov    -0x31(%ebp),%edx
08554326 +0x18a:  mov    %edx,0x20(%esp)
0855432a +0x18e:  mov    -0x2d(%ebp),%edx
0855432d +0x191:  mov    %edx,0x24(%esp)
08554331 +0x195:  mov    -0x29(%ebp),%edx
08554334 +0x198:  mov    %edx,0x28(%esp)
08554338 +0x19c:  mov    -0x25(%ebp),%edx
0855433b +0x19f:  mov    %edx,0x2c(%esp)
0855433f +0x1a3:  mov    -0x21(%ebp),%edx
08554342 +0x1a6:  mov    %edx,0x30(%esp)
08554346 +0x1aa:  mov    -0x1d(%ebp),%edx
08554349 +0x1ad:  mov    %edx,0x34(%esp)
0855434d +0x1b1:  mov    -0x19(%ebp),%edx
08554350 +0x1b4:  mov    %edx,0x38(%esp)
08554354 +0x1b8:  mov    -0x15(%ebp),%edx
08554357 +0x1bb:  mov    %edx,0x3c(%esp)
0855435b +0x1bf:  movzbl -0x11(%ebp),%edx
0855435f +0x1c3:  mov    %dl,0x40(%esp)
08554363 +0x1c7:  mov    %eax,(%esp)
08554366 +0x1ca:  call   0850367c <_ZN10CInventory25insertAvatarIntoInventoryE10Inven_Item20eAvatarItemAddReasonb>  ; CInventory::insertAvatarIntoInventory(Inven_Item, eAvatarItemAddReason, bool)
0855436b +0x1cf:  mov    %eax,-0xc(%ebp)
0855436e +0x1d2:  mov    -0xc(%ebp),%eax
08554371 +0x1d5:  shr    $0x1f,%eax
08554374 +0x1d8:  test   %al,%al
08554376 +0x1da:  je     08554382 <+0x1e6>
08554378 +0x1dc:  mov    $0x0,%eax
0855437d +0x1e1:  jmp    08554471 <+0x2d5>
08554382 +0x1e6:  mov    -0xc(%ebp),%eax
08554385 +0x1e9:  lea    0xa(%eax),%esi
08554388 +0x1ec:  mov    -0x46(%ebp),%ebx
0855438b +0x1ef:  mov    0x8(%ebp),%eax
0855438e +0x1f2:  mov    %eax,(%esp)
08554391 +0x1f5:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08554396 +0x1fa:  movl   $0x0,0x14(%esp)
0855439e +0x202:  mov    %esi,0x10(%esp)
085543a2 +0x206:  movl   $0x0,0xc(%esp)
085543aa +0x20e:  mov    %ebx,0x8(%esp)
085543ae +0x212:  movl   $0x36,0x4(%esp)
085543b6 +0x21a:  mov    %eax,(%esp)
085543b9 +0x21d:  call   08508c2e <_ZNK10CInventory15SendAvatarEventEiiiii>  ; CInventory::SendAvatarEvent(int, int, int, int, int) const
085543be +0x222:  movl   $0x0,0xc(%esp)
085543c6 +0x22a:  movl   $"game_server_msg_221",0x8(%esp)
085543ce +0x232:  movl   $0x4,0x4(%esp)
085543d6 +0x23a:  movl   $&g_scriptStringManager_,(%esp)
085543dd +0x241:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
085543e2 +0x246:  mov    %eax,%ebx
085543e4 +0x248:  mov    0xc(%ebp),%eax
085543e7 +0x24b:  mov    %eax,(%esp)
085543ea +0x24e:  call   085574fe <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x5f>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x5f
085543ef +0x253:  mov    %ebx,0x4(%esp)
085543f3 +0x257:  mov    %eax,(%esp)
085543f6 +0x25a:  call   0807e4e0 <_init+0xdd8>
085543fb +0x25f:  test   %eax,%eax
085543fd +0x261:  sete   %al
08554400 +0x264:  test   %al,%al
08554402 +0x266:  je     08554439 <+0x29d>
08554404 +0x268:  mov    0x8(%ebp),%eax
08554407 +0x26b:  mov    %eax,(%esp)
0855440a +0x26e:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0855440f +0x273:  mov    %eax,%ebx
08554411 +0x275:  mov    0xc(%ebp),%eax
08554414 +0x278:  mov    %eax,(%esp)
08554417 +0x27b:  call   0855750a <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x6b>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x6b
0855441c +0x280:  mov    -0x46(%ebp),%edx
0855441f +0x283:  movl   $0x1,0xc(%esp)
08554427 +0x28b:  mov    %ebx,0x8(%esp)
0855442b +0x28f:  mov    %eax,0x4(%esp)
0855442f +0x293:  mov    %edx,(%esp)
08554432 +0x296:  call   0844511a <_ZN24DB_InsertCeraItemHistory11makeRequestEijjc>  ; DB_InsertCeraItemHistory::makeRequest(int, unsigned int, unsigned int, char)
08554437 +0x29b:  jmp    0855446c <+0x2d0>
08554439 +0x29d:  mov    0x8(%ebp),%eax
0855443c +0x2a0:  mov    %eax,(%esp)
0855443f +0x2a3:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08554444 +0x2a8:  mov    %eax,%ebx
08554446 +0x2aa:  mov    0xc(%ebp),%eax
08554449 +0x2ad:  mov    %eax,(%esp)
0855444c +0x2b0:  call   0855750a <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x6b>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x6b
08554451 +0x2b5:  mov    -0x46(%ebp),%edx
08554454 +0x2b8:  movl   $0x0,0xc(%esp)
0855445c +0x2c0:  mov    %ebx,0x8(%esp)
08554460 +0x2c4:  mov    %eax,0x4(%esp)
08554464 +0x2c8:  mov    %edx,(%esp)
08554467 +0x2cb:  call   0844511a <_ZN24DB_InsertCeraItemHistory11makeRequestEijjc>  ; DB_InsertCeraItemHistory::makeRequest(int, unsigned int, unsigned int, char)
0855446c +0x2d0:  mov    $0x1,%eax
08554471 +0x2d5:  lea    -0x8(%ebp),%esp
08554474 +0x2d8:  add    $0x0,%esp
08554477 +0x2db:  pop    %ebx
08554478 +0x2dc:  pop    %esi
08554479 +0x2dd:  pop    %ebp
0855447a +0x2de:  ret
0855447b +0x2df:  nop
```

## 反编译 C

```c
// WongWork::CMailBoxHelper::_DoGetPackageAvatar @ 0x855419c

/* WongWork::CMailBoxHelper::_DoGetPackageAvatar(CUser*, WongWork::CMailBox::CMail const*,
   std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, bool, ENUM_ERROR&) */

undefined4
WongWork::CMailBoxHelper::_DoGetPackageAvatar
          (CUser *param_1,CMail *param_2,vector *param_3,bool param_4,ENUM_ERROR *param_5)

{
  char cVar1;
  CInventory *pCVar2;
  CAvatarItemMgr *this;
  int iVar3;
  undefined4 uVar4;
  char *__s2;
  char *__s1;
  uint uVar5;
  uint uVar6;
  undefined4 local_51;
  undefined4 uStack_4d;
  undefined4 uStack_49;
  undefined4 local_45;
  undefined4 local_41;
  undefined4 local_3d;
  undefined4 local_39;
  undefined4 local_35;
  undefined4 local_31;
  undefined4 local_2d;
  undefined4 local_29;
  undefined4 local_25;
  undefined4 local_21;
  undefined4 local_1d;
  undefined4 local_19;
  undefined1 local_15;
  
  CMailBox::CMail::GetPackageItem();
  cVar1 = CMailBox::CMail::isAvatarPackage(param_2);
  if (cVar1 != '\x01') {
    *(undefined4 *)param_5 = 1;
    return 0;
  }
  if (param_4) {
    pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    this = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar2);
    iVar3 = CAvatarItemMgr::GetExpireDate(this,CONCAT31((undefined3)uStack_49,uStack_4d._3_1_));
    if (iVar3 == -1) {
      return 0;
    }
    uVar4 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    iVar3 = CInventory::tryInsertAvatarIntoInventory
                      (uVar4,local_51,uStack_4d,uStack_49,local_45,local_41,local_3d,local_39,
                       local_35,local_31,local_2d,local_29,local_25,local_21,local_1d,local_19,
                       local_15);
    if (iVar3 < 0) {
      *(undefined4 *)param_5 = 4;
      return 0;
    }
  }
  else {
    uVar4 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    iVar3 = CInventory::insertAvatarIntoInventory
                      (uVar4,local_51,uStack_4d,uStack_49,local_45,local_41,local_3d,local_39,
                       local_35,local_31,local_2d,local_29,local_25,local_21,local_1d,local_19,
                       local_15,5,1);
    if (iVar3 < 0) {
      return 0;
    }
    pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    CInventory::SendAvatarEvent
              (pCVar2,0x36,CONCAT31((undefined3)uStack_49,uStack_4d._3_1_),0,iVar3 + 10,0);
    __s2 = (char *)RDARScriptStringManager::findString
                             ((RDARScriptStringManager *)g_scriptStringManager_,4,
                              "game_server_msg_221",(bool *)0x0);
    __s1 = (char *)CMailBox::CMail::GetSenderName(param_2);
    iVar3 = strcmp(__s1,__s2);
    if (iVar3 == 0) {
      uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      uVar6 = CMailBox::CMail::GetSenderCharacNo(param_2);
      DB_InsertCeraItemHistory::makeRequest
                (CONCAT31((undefined3)uStack_49,uStack_4d._3_1_),uVar6,uVar5,'\x01');
    }
    else {
      uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      uVar6 = CMailBox::CMail::GetSenderCharacNo(param_2);
      DB_InsertCeraItemHistory::makeRequest
                (CONCAT31((undefined3)uStack_49,uStack_4d._3_1_),uVar6,uVar5,'\0');
    }
  }
  return 1;
}
```
