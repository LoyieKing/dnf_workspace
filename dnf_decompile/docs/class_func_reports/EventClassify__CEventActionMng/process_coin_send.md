# process_coin_send

`_ZN13EventClassify15CEventActionMng17process_coin_sendEP5CUserR15Action_SendMailR10Inven_Item`

`EventClassify::CEventActionMng::process_coin_send(CUser*, Action_SendMail&, Inven_Item&)`

| 类 | 地址 |
|---|---|
| `EventClassify::CEventActionMng` | `0x0810d4ae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810d4ae  _ZN13EventClassify15CEventActionMng17process_coin_sendEP5CUserR15Action_SendMailR10Inven_Item
#           EventClassify::CEventActionMng::process_coin_send(CUser*, Action_SendMail&, Inven_Item&)
# range [0x0810d4ae, 0x0810d70b]
0810d4ae +0x000:  push   %ebp
0810d4af +0x001:  mov    %esp,%ebp
0810d4b1 +0x003:  push   %edi
0810d4b2 +0x004:  push   %esi
0810d4b3 +0x005:  push   %ebx
0810d4b4 +0x006:  sub    $0x15c,%esp
0810d4ba +0x00c:  mov    0x10(%ebp),%eax
0810d4bd +0x00f:  movzbl 0x1c(%eax),%eax
0810d4c1 +0x013:  test   %al,%al
0810d4c3 +0x015:  je     0810d551 <+0xa3>
0810d4c9 +0x01b:  mov    0xc(%ebp),%eax
0810d4cc +0x01e:  mov    %eax,(%esp)
0810d4cf +0x021:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0810d4d4 +0x026:  mov    %eax,(%esp)
0810d4d7 +0x029:  call   08110c7a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x18c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x18c
0810d4dc +0x02e:  mov    0x14(%ebp),%edx
0810d4df +0x031:  mov    0x7(%edx),%edx
0810d4e2 +0x034:  lea    (%eax,%edx,1),%ebx
0810d4e5 +0x037:  mov    0xc(%ebp),%eax
0810d4e8 +0x03a:  mov    %eax,(%esp)
0810d4eb +0x03d:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0810d4f0 +0x042:  mov    %ebx,0x4(%esp)
0810d4f4 +0x046:  mov    %eax,(%esp)
0810d4f7 +0x049:  call   08110c86 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x198>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x198
0810d4fc +0x04e:  mov    0x14(%ebp),%eax
0810d4ff +0x051:  mov    0x7(%eax),%ebx
0810d502 +0x054:  mov    0xc(%ebp),%eax
0810d505 +0x057:  mov    %eax,(%esp)
0810d508 +0x05a:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0810d50d +0x05f:  mov    %eax,(%esp)
0810d510 +0x062:  call   08110c7a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x18c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x18c
0810d515 +0x067:  mov    0xc(%ebp),%edx
0810d518 +0x06a:  add    $0x79700,%edx
0810d51e +0x070:  movl   $0x2,0xc(%esp)
0810d526 +0x078:  mov    %ebx,0x8(%esp)
0810d52a +0x07c:  mov    %eax,0x4(%esp)
0810d52e +0x080:  mov    %edx,(%esp)
0810d531 +0x083:  call   08683c58 <_ZN15cUserHistoryLog12EventCoinAddEii14eCoinAddReason>  ; cUserHistoryLog::EventCoinAdd(int, int, eCoinAddReason)
0810d536 +0x088:  mov    0xc(%ebp),%eax
0810d539 +0x08b:  mov    %eax,(%esp)
0810d53c +0x08e:  call   086504d8 <_ZN5CUser13SaveMoneyCoinEv>  ; CUser::SaveMoneyCoin()
0810d541 +0x093:  mov    0xc(%ebp),%eax
0810d544 +0x096:  mov    %eax,(%esp)
0810d547 +0x099:  call   08656808 <_ZN5CUser8SendCoinEv>  ; CUser::SendCoin()
0810d54c +0x09e:  jmp    0810d6fb <+0x24d>
0810d551 +0x0a3:  mov    0x14(%ebp),%eax
0810d554 +0x0a6:  movw   $0x1,0xb(%eax)
0810d55a +0x0ac:  lea    -0x136(%ebp),%edx
0810d560 +0x0b2:  mov    $0x100,%ebx
0810d565 +0x0b7:  mov    $0x0,%eax
0810d56a +0x0bc:  mov    %edx,%ecx
0810d56c +0x0be:  and    $0x2,%ecx
0810d56f +0x0c1:  test   %ecx,%ecx
0810d571 +0x0c3:  je     0810d57c <+0xce>
0810d573 +0x0c5:  mov    %ax,(%edx)
0810d576 +0x0c8:  add    $0x2,%edx
0810d579 +0x0cb:  sub    $0x2,%ebx
0810d57c +0x0ce:  mov    %ebx,%ecx
0810d57e +0x0d0:  shr    $0x2,%ecx
0810d581 +0x0d3:  mov    %edx,%edi
0810d583 +0x0d5:  rep stos %eax,%es:(%edi)
0810d585 +0x0d7:  mov    %edi,%edx
0810d587 +0x0d9:  mov    %ebx,%ecx
0810d589 +0x0db:  and    $0x2,%ecx
0810d58c +0x0de:  test   %ecx,%ecx
0810d58e +0x0e0:  je     0810d596 <+0xe8>
0810d590 +0x0e2:  mov    %ax,(%edx)
0810d593 +0x0e5:  add    $0x2,%edx
0810d596 +0x0e8:  mov    %ebx,%ecx
0810d598 +0x0ea:  and    $0x1,%ecx
0810d59b +0x0ed:  test   %ecx,%ecx
0810d59d +0x0ef:  je     0810d5a4 <+0xf6>
0810d59f +0x0f1:  mov    %al,(%edx)
0810d5a1 +0x0f3:  add    $0x1,%edx
0810d5a4 +0x0f6:  lea    -0x36(%ebp),%eax
0810d5a7 +0x0f9:  mov    $0x1e,%ebx
0810d5ac +0x0fe:  mov    $0x0,%edx
0810d5b1 +0x103:  mov    %eax,%ecx
0810d5b3 +0x105:  and    $0x2,%ecx
0810d5b6 +0x108:  test   %ecx,%ecx
0810d5b8 +0x10a:  je     0810d5c3 <+0x115>
0810d5ba +0x10c:  mov    %dx,(%eax)
0810d5bd +0x10f:  add    $0x2,%eax
0810d5c0 +0x112:  sub    $0x2,%ebx
0810d5c3 +0x115:  mov    %ebx,%esi
0810d5c5 +0x117:  and    $0xfffffffc,%esi
0810d5c8 +0x11a:  mov    $0x0,%ecx
0810d5cd +0x11f:  mov    %edx,(%eax,%ecx,1)
0810d5d0 +0x122:  add    $0x4,%ecx
0810d5d3 +0x125:  cmp    %esi,%ecx
0810d5d5 +0x127:  jb     0810d5cd <+0x11f>
0810d5d7 +0x129:  add    %ecx,%eax
0810d5d9 +0x12b:  mov    %ebx,%ecx
0810d5db +0x12d:  and    $0x2,%ecx
0810d5de +0x130:  test   %ecx,%ecx
0810d5e0 +0x132:  je     0810d5e8 <+0x13a>
0810d5e2 +0x134:  mov    %dx,(%eax)
0810d5e5 +0x137:  add    $0x2,%eax
0810d5e8 +0x13a:  mov    %ebx,%ecx
0810d5ea +0x13c:  and    $0x1,%ecx
0810d5ed +0x13f:  test   %ecx,%ecx
0810d5ef +0x141:  je     0810d5f6 <+0x148>
0810d5f1 +0x143:  mov    %dl,(%eax)
0810d5f3 +0x145:  add    $0x1,%eax
0810d5f6 +0x148:  mov    0x10(%ebp),%eax
0810d5f9 +0x14b:  add    $0x30,%eax
0810d5fc +0x14e:  mov    %eax,(%esp)
0810d5ff +0x151:  call   08adeab0 <_Z9toTStringRKSs>  ; toTString(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
0810d604 +0x156:  movl   $0x0,0xc(%esp)
0810d60c +0x15e:  mov    %eax,0x8(%esp)
0810d610 +0x162:  movl   $0x4,0x4(%esp)
0810d618 +0x16a:  movl   $&g_scriptStringManager_,(%esp)
0810d61f +0x171:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
0810d624 +0x176:  movl   $0x1d,0x8(%esp)
0810d62c +0x17e:  mov    %eax,0x4(%esp)
0810d630 +0x182:  lea    -0x36(%ebp),%eax
0810d633 +0x185:  mov    %eax,(%esp)
0810d636 +0x188:  call   0807d8d0 <_init+0x1c8>
0810d63b +0x18d:  mov    0x10(%ebp),%eax
0810d63e +0x190:  add    $0x34,%eax
0810d641 +0x193:  mov    %eax,(%esp)
0810d644 +0x196:  call   08adeab0 <_Z9toTStringRKSs>  ; toTString(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
0810d649 +0x19b:  movl   $0x0,0xc(%esp)
0810d651 +0x1a3:  mov    %eax,0x8(%esp)
0810d655 +0x1a7:  movl   $0x4,0x4(%esp)
0810d65d +0x1af:  movl   $&g_scriptStringManager_,(%esp)
0810d664 +0x1b6:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
0810d669 +0x1bb:  movl   $0xff,0x8(%esp)
0810d671 +0x1c3:  mov    %eax,0x4(%esp)
0810d675 +0x1c7:  lea    -0x136(%ebp),%eax
0810d67b +0x1cd:  mov    %eax,(%esp)
0810d67e +0x1d0:  call   0807d8d0 <_init+0x1c8>
0810d683 +0x1d5:  mov    0xc(%ebp),%eax
0810d686 +0x1d8:  mov    %eax,(%esp)
0810d689 +0x1db:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
0810d68e +0x1e0:  mov    %eax,%ebx
0810d690 +0x1e2:  mov    0x10(%ebp),%eax
0810d693 +0x1e5:  movzbl 0x2c(%eax),%eax
0810d697 +0x1e9:  movsbl %al,%edi
0810d69a +0x1ec:  lea    -0x136(%ebp),%eax
0810d6a0 +0x1f2:  mov    %eax,(%esp)
0810d6a3 +0x1f5:  call   0807e3b0 <_init+0xca8>
0810d6a8 +0x1fa:  mov    %eax,%esi
0810d6aa +0x1fc:  mov    0xc(%ebp),%eax
0810d6ad +0x1ff:  mov    %eax,(%esp)
0810d6b0 +0x202:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0810d6b5 +0x207:  mov    0x10(%ebp),%edx
0810d6b8 +0x20a:  mov    0x28(%edx),%edx
0810d6bb +0x20d:  movl   $0x0,0x24(%esp)
0810d6c3 +0x215:  movl   $0x0,0x20(%esp)
0810d6cb +0x21d:  mov    %ebx,0x1c(%esp)
0810d6cf +0x221:  mov    %edi,0x18(%esp)
0810d6d3 +0x225:  mov    %esi,0x14(%esp)
0810d6d7 +0x229:  lea    -0x136(%ebp),%ecx
0810d6dd +0x22f:  mov    %ecx,0x10(%esp)
0810d6e1 +0x233:  mov    %eax,0xc(%esp)
0810d6e5 +0x237:  mov    %edx,0x8(%esp)
0810d6e9 +0x23b:  mov    0x14(%ebp),%eax
0810d6ec +0x23e:  mov    %eax,0x4(%esp)
0810d6f0 +0x242:  lea    -0x36(%ebp),%eax
0810d6f3 +0x245:  mov    %eax,(%esp)
0810d6f6 +0x248:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
0810d6fb +0x24d:  mov    $0x0,%eax
0810d700 +0x252:  add    $0x15c,%esp
0810d706 +0x258:  pop    %ebx
0810d707 +0x259:  pop    %esi
0810d708 +0x25a:  pop    %edi
0810d709 +0x25b:  pop    %ebp
0810d70a +0x25c:  ret
0810d70b +0x25d:  nop
```

## 反编译 C

```c
// EventClassify::CEventActionMng::process_coin_send @ 0x810d4ae

/* WARNING: Removing unreachable block (ram,0x0810d59f) */
/* WARNING: Removing unreachable block (ram,0x0810d5f1) */
/* EventClassify::CEventActionMng::process_coin_send(CUser*, Action_SendMail&, Inven_Item&) */

undefined4 __thiscall
EventClassify::CEventActionMng::process_coin_send
          (CEventActionMng *this,CUser *param_1,Action_SendMail *param_2,Inven_Item *param_3)

{
  char *pcVar1;
  Action_SendMail AVar2;
  int iVar3;
  CInventory *pCVar4;
  int iVar5;
  undefined4 uVar6;
  TCHAR *pTVar7;
  char *pcVar8;
  undefined4 uVar9;
  size_t sVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  char local_13a [256];
  char local_3a [42];
  
  if (param_2[0x1c] == (Action_SendMail)0x0) {
    *(undefined2 *)(param_3 + 0xb) = 1;
    pcVar8 = local_13a;
    uVar12 = 0x100;
    bVar13 = ((uint)pcVar8 & 2) != 0;
    if (bVar13) {
      local_13a[0] = '\0';
      local_13a[1] = '\0';
      pcVar8 = local_13a + 2;
      uVar12 = 0xfe;
    }
    for (uVar12 = uVar12 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      pcVar8[0] = '\0';
      pcVar8[1] = '\0';
      pcVar8[2] = '\0';
      pcVar8[3] = '\0';
      pcVar8 = pcVar8 + 4;
    }
    if (bVar13) {
      pcVar8[0] = '\0';
      pcVar8[1] = '\0';
    }
    pcVar8 = local_3a;
    uVar12 = 0x1e;
    bVar13 = ((uint)pcVar8 & 2) != 0;
    if (bVar13) {
      local_3a[0] = '\0';
      local_3a[1] = '\0';
      pcVar8 = local_3a + 2;
      uVar12 = 0x1c;
    }
    uVar11 = 0;
    do {
      pcVar1 = pcVar8 + uVar11;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      uVar11 = uVar11 + 4;
    } while (uVar11 < (uVar12 & 0xfffffffc));
    if (!bVar13) {
      (pcVar8 + uVar11)[0] = '\0';
      (pcVar8 + uVar11)[1] = '\0';
    }
    pTVar7 = toTString((string *)(param_2 + 0x30));
    pcVar8 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,pTVar7,
                                (bool *)0x0);
    strncpy(local_3a,pcVar8,0x1d);
    pTVar7 = toTString((string *)(param_2 + 0x34));
    pcVar8 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,pTVar7,
                                (bool *)0x0);
    strncpy(local_13a,pcVar8,0xff);
    uVar9 = CUser::GetServerGroup(param_1);
    AVar2 = param_2[0x2c];
    sVar10 = strlen(local_13a);
    uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
              (local_3a,param_3,*(undefined4 *)(param_2 + 0x28),uVar6,local_13a,sVar10,
               (int)(char)AVar2,uVar9,0,0);
  }
  else {
    pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    iVar5 = CInventory::GetEventCoin(pCVar4);
    iVar3 = *(int *)(param_3 + 7);
    pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    CInventory::SetEventCoin(pCVar4,iVar5 + iVar3);
    uVar9 = *(undefined4 *)(param_3 + 7);
    pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    uVar6 = CInventory::GetEventCoin(pCVar4);
    cUserHistoryLog::EventCoinAdd((cUserHistoryLog *)(param_1 + 0x79700),uVar6,uVar9,2);
    CUser::SaveMoneyCoin(param_1);
    CUser::SendCoin(param_1);
  }
  return 0;
}
```
