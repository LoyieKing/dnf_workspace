# RecallPrivateStoreItemToMail

`_ZN13private_store13CPrivateStore28RecallPrivateStoreItemToMailEv`

`private_store::CPrivateStore::RecallPrivateStoreItemToMail()`

| 类 | 地址 |
|---|---|
| `private_store::CPrivateStore` | `0x085c5cec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085c5cec  _ZN13private_store13CPrivateStore28RecallPrivateStoreItemToMailEv
#           private_store::CPrivateStore::RecallPrivateStoreItemToMail()
# range [0x085c5cec, 0x085c5fcf]
085c5cec +0x000:  push   %ebp
085c5ced +0x001:  mov    %esp,%ebp
085c5cef +0x003:  push   %edi
085c5cf0 +0x004:  push   %esi
085c5cf1 +0x005:  push   %ebx
085c5cf2 +0x006:  sub    $0x4cc,%esp
085c5cf8 +0x00c:  lea    -0x4a3(%ebp),%eax
085c5cfe +0x012:  mov    %eax,%ebx
085c5d00 +0x014:  mov    $0xd,%esi
085c5d05 +0x019:  jmp    085c5d15 <+0x29>
085c5d07 +0x01b:  mov    %ebx,(%esp)
085c5d0a +0x01e:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
085c5d0f +0x023:  add    $0x3d,%ebx
085c5d12 +0x026:  sub    $0x1,%esi
085c5d15 +0x029:  cmp    $0xffffffff,%esi
085c5d18 +0x02c:  setne  %al
085c5d1b +0x02f:  test   %al,%al
085c5d1d +0x031:  jne    085c5d07 <+0x1b>
085c5d1f +0x033:  movl   $0x0,-0x28(%ebp)
085c5d26 +0x03a:  movl   $0x0,-0x24(%ebp)
085c5d2d +0x041:  jmp    085c5d8e <+0xa2>
085c5d2f +0x043:  mov    0x8(%ebp),%eax
085c5d32 +0x046:  lea    0x3c(%eax),%edx
085c5d35 +0x049:  mov    -0x24(%ebp),%eax
085c5d38 +0x04c:  mov    %eax,0x4(%esp)
085c5d3c +0x050:  mov    %edx,(%esp)
085c5d3f +0x053:  call   085ccf06 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x1c1c>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x1c1c
085c5d44 +0x058:  mov    %eax,-0x20(%ebp)
085c5d47 +0x05b:  mov    -0x20(%ebp),%eax
085c5d4a +0x05e:  mov    %eax,(%esp)
085c5d4d +0x061:  call   085cb662 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x378>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x378
085c5d52 +0x066:  cmp    $0x3,%al
085c5d54 +0x068:  sete   %al
085c5d57 +0x06b:  test   %al,%al
085c5d59 +0x06d:  je     085c5d8a <+0x9e>
085c5d5b +0x06f:  mov    -0x20(%ebp),%eax
085c5d5e +0x072:  mov    0x2(%eax),%eax
085c5d61 +0x075:  test   %eax,%eax
085c5d63 +0x077:  je     085c5d89 <+0x9d>
085c5d65 +0x079:  mov    -0x20(%ebp),%eax
085c5d68 +0x07c:  mov    -0x28(%ebp),%edx
085c5d6b +0x07f:  lea    -0x4a3(%ebp),%ecx
085c5d71 +0x085:  imul   $0x3d,%edx,%edx
085c5d74 +0x088:  lea    (%ecx,%edx,1),%edx
085c5d77 +0x08b:  addl   $0x1,-0x28(%ebp)
085c5d7b +0x08f:  mov    %eax,0x4(%esp)
085c5d7f +0x093:  mov    %edx,(%esp)
085c5d82 +0x096:  call   0814a62e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x3cd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x3cd
085c5d87 +0x09b:  jmp    085c5d8a <+0x9e>
085c5d89 +0x09d:  nop
085c5d8a +0x09e:  addl   $0x1,-0x24(%ebp)
085c5d8e +0x0a2:  cmpl   $0xd,-0x24(%ebp)
085c5d92 +0x0a6:  setbe  %al
085c5d95 +0x0a9:  test   %al,%al
085c5d97 +0x0ab:  jne    085c5d2f <+0x43>
085c5d99 +0x0ad:  cmpl   $0x0,-0x28(%ebp)
085c5d9d +0x0b1:  jle    085c5fb5 <+0x2c9>
085c5da3 +0x0b7:  lea    -0x4d(%ebp),%eax
085c5da6 +0x0ba:  mov    $0x15,%edx
085c5dab +0x0bf:  mov    $0x0,%ecx
085c5db0 +0x0c4:  mov    %eax,%ebx
085c5db2 +0x0c6:  and    $0x1,%ebx
085c5db5 +0x0c9:  test   %ebx,%ebx
085c5db7 +0x0cb:  je     085c5dc1 <+0xd5>
085c5db9 +0x0cd:  mov    %cl,(%eax)
085c5dbb +0x0cf:  add    $0x1,%eax
085c5dbe +0x0d2:  sub    $0x1,%edx
085c5dc1 +0x0d5:  mov    %eax,%ebx
085c5dc3 +0x0d7:  and    $0x2,%ebx
085c5dc6 +0x0da:  test   %ebx,%ebx
085c5dc8 +0x0dc:  je     085c5dd3 <+0xe7>
085c5dca +0x0de:  mov    %cx,(%eax)
085c5dcd +0x0e1:  add    $0x2,%eax
085c5dd0 +0x0e4:  sub    $0x2,%edx
085c5dd3 +0x0e7:  mov    %edx,%esi
085c5dd5 +0x0e9:  and    $0xfffffffc,%esi
085c5dd8 +0x0ec:  mov    $0x0,%ebx
085c5ddd +0x0f1:  mov    %ecx,(%eax,%ebx,1)
085c5de0 +0x0f4:  add    $0x4,%ebx
085c5de3 +0x0f7:  cmp    %esi,%ebx
085c5de5 +0x0f9:  jb     085c5ddd <+0xf1>
085c5de7 +0x0fb:  add    %ebx,%eax
085c5de9 +0x0fd:  mov    %edx,%ebx
085c5deb +0x0ff:  and    $0x2,%ebx
085c5dee +0x102:  test   %ebx,%ebx
085c5df0 +0x104:  je     085c5df8 <+0x10c>
085c5df2 +0x106:  mov    %cx,(%eax)
085c5df5 +0x109:  add    $0x2,%eax
085c5df8 +0x10c:  and    $0x1,%edx
085c5dfb +0x10f:  test   %edx,%edx
085c5dfd +0x111:  je     085c5e04 <+0x118>
085c5dff +0x113:  mov    %cl,(%eax)
085c5e01 +0x115:  add    $0x1,%eax
085c5e04 +0x118:  lea    -0x14d(%ebp),%edx
085c5e0a +0x11e:  mov    $0x100,%ebx
085c5e0f +0x123:  mov    $0x0,%eax
085c5e14 +0x128:  mov    %edx,%ecx
085c5e16 +0x12a:  and    $0x1,%ecx
085c5e19 +0x12d:  test   %ecx,%ecx
085c5e1b +0x12f:  je     085c5e25 <+0x139>
085c5e1d +0x131:  mov    %al,(%edx)
085c5e1f +0x133:  add    $0x1,%edx
085c5e22 +0x136:  sub    $0x1,%ebx
085c5e25 +0x139:  mov    %edx,%ecx
085c5e27 +0x13b:  and    $0x2,%ecx
085c5e2a +0x13e:  test   %ecx,%ecx
085c5e2c +0x140:  je     085c5e37 <+0x14b>
085c5e2e +0x142:  mov    %ax,(%edx)
085c5e31 +0x145:  add    $0x2,%edx
085c5e34 +0x148:  sub    $0x2,%ebx
085c5e37 +0x14b:  mov    %ebx,%ecx
085c5e39 +0x14d:  shr    $0x2,%ecx
085c5e3c +0x150:  mov    %edx,%edi
085c5e3e +0x152:  rep stos %eax,%es:(%edi)
085c5e40 +0x154:  mov    %edi,%edx
085c5e42 +0x156:  mov    %ebx,%ecx
085c5e44 +0x158:  and    $0x2,%ecx
085c5e47 +0x15b:  test   %ecx,%ecx
085c5e49 +0x15d:  je     085c5e51 <+0x165>
085c5e4b +0x15f:  mov    %ax,(%edx)
085c5e4e +0x162:  add    $0x2,%edx
085c5e51 +0x165:  mov    %ebx,%ecx
085c5e53 +0x167:  and    $0x1,%ecx
085c5e56 +0x16a:  test   %ecx,%ecx
085c5e58 +0x16c:  je     085c5e5f <+0x173>
085c5e5a +0x16e:  mov    %al,(%edx)
085c5e5c +0x170:  add    $0x1,%edx
085c5e5f +0x173:  movl   $0x0,0xc(%esp)
085c5e67 +0x17b:  movl   $"game_server_msg_183",0x8(%esp)
085c5e6f +0x183:  movl   $0x4,0x4(%esp)
085c5e77 +0x18b:  movl   $&g_scriptStringManager_,(%esp)
085c5e7e +0x192:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
085c5e83 +0x197:  mov    %eax,0x4(%esp)
085c5e87 +0x19b:  lea    -0x4d(%ebp),%eax
085c5e8a +0x19e:  mov    %eax,(%esp)
085c5e8d +0x1a1:  call   0807def0 <_init+0x7e8>
085c5e92 +0x1a6:  movl   $0x0,0xc(%esp)
085c5e9a +0x1ae:  movl   $"game_server_msg_186",0x8(%esp)
085c5ea2 +0x1b6:  movl   $0x4,0x4(%esp)
085c5eaa +0x1be:  movl   $&g_scriptStringManager_,(%esp)
085c5eb1 +0x1c5:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
085c5eb6 +0x1ca:  mov    %eax,0x4(%esp)
085c5eba +0x1ce:  lea    -0x14d(%ebp),%eax
085c5ec0 +0x1d4:  mov    %eax,(%esp)
085c5ec3 +0x1d7:  call   0807def0 <_init+0x7e8>
085c5ec8 +0x1dc:  mov    0x8(%ebp),%eax
085c5ecb +0x1df:  mov    0x2c(%eax),%eax
085c5ece +0x1e2:  mov    %eax,(%esp)
085c5ed1 +0x1e5:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
085c5ed6 +0x1ea:  mov    %eax,%ebx
085c5ed8 +0x1ec:  lea    -0x14d(%ebp),%eax
085c5ede +0x1f2:  mov    %eax,(%esp)
085c5ee1 +0x1f5:  call   0807e3b0 <_init+0xca8>
085c5ee6 +0x1fa:  mov    %eax,%esi
085c5ee8 +0x1fc:  mov    0x8(%ebp),%eax
085c5eeb +0x1ff:  mov    0x2c(%eax),%eax
085c5eee +0x202:  mov    %eax,(%esp)
085c5ef1 +0x205:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
085c5ef6 +0x20a:  mov    -0x28(%ebp),%edx
085c5ef9 +0x20d:  movl   $0x0,0x24(%esp)
085c5f01 +0x215:  mov    %ebx,0x20(%esp)
085c5f05 +0x219:  movl   $0x0,0x1c(%esp)
085c5f0d +0x221:  mov    %esi,0x18(%esp)
085c5f11 +0x225:  lea    -0x14d(%ebp),%ecx
085c5f17 +0x22b:  mov    %ecx,0x14(%esp)
085c5f1b +0x22f:  mov    %eax,0x10(%esp)
085c5f1f +0x233:  movl   $0x0,0xc(%esp)
085c5f27 +0x23b:  mov    %edx,0x8(%esp)
085c5f2b +0x23f:  lea    -0x4a3(%ebp),%eax
085c5f31 +0x245:  mov    %eax,0x4(%esp)
085c5f35 +0x249:  lea    -0x4d(%ebp),%eax
085c5f38 +0x24c:  mov    %eax,(%esp)
085c5f3b +0x24f:  call   08556b68 <_ZN8WongWork14CMailBoxHelper27ReqDBSendNewSystemMultiMailEPKcPK10Inven_ItemjjjS2_ij17ENUM_SERVER_GROUPb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMultiMail(char const*, Inven_Item const*, unsigned int, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool)
085c5f40 +0x254:  mov    %eax,-0x1c(%ebp)
085c5f43 +0x257:  cmpl   $0x0,-0x1c(%ebp)
085c5f47 +0x25b:  je     085c5fb5 <+0x2c9>
085c5f49 +0x25d:  mov    0x8(%ebp),%eax
085c5f4c +0x260:  mov    0x2c(%eax),%eax
085c5f4f +0x263:  mov    %eax,(%esp)
085c5f52 +0x266:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
085c5f57 +0x26b:  mov    %eax,%esi
085c5f59 +0x26d:  mov    0x8(%ebp),%eax
085c5f5c +0x270:  mov    0x2c(%eax),%eax
085c5f5f +0x273:  mov    %eax,(%esp)
085c5f62 +0x276:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
085c5f67 +0x27b:  mov    %eax,%ebx
085c5f69 +0x27d:  movl   $0x5,0xc(%esp)
085c5f71 +0x285:  movl   $0x3c1,0x8(%esp)
085c5f79 +0x28d:  movl   $&_ZZN13private_store13CPrivateStore28RecallPrivateStoreItemToMailEvE19__PRETTY_FUNCTION__,0x4(%esp)
085c5f81 +0x295:  lea    -0x38(%ebp),%eax
085c5f84 +0x298:  mov    %eax,(%esp)
085c5f87 +0x29b:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085c5f8c +0x2a0:  mov    -0x28(%ebp),%eax
085c5f8f +0x2a3:  mov    %eax,0x10(%esp)
085c5f93 +0x2a7:  mov    %esi,0xc(%esp)
085c5f97 +0x2ab:  mov    %ebx,0x8(%esp)
085c5f9b +0x2af:  movl   $"CPrivateStore::RecallPrivateStoreItemToMail Error - Mail Send Fail User(%d), Charac_no(%d), item_count(%d)",0x4(%esp)
085c5fa3 +0x2b7:  lea    -0x38(%ebp),%eax
085c5fa6 +0x2ba:  mov    %eax,(%esp)
085c5fa9 +0x2bd:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085c5fae +0x2c2:  mov    $0x1,%eax
085c5fb3 +0x2c7:  jmp    085c5fc5 <+0x2d9>
085c5fb5 +0x2c9:  mov    0x8(%ebp),%eax
085c5fb8 +0x2cc:  mov    %eax,(%esp)
085c5fbb +0x2cf:  call   085c4f52 <_ZN13private_store13CPrivateStore10ResetItemsEv>  ; private_store::CPrivateStore::ResetItems()
085c5fc0 +0x2d4:  mov    $0x1,%eax
085c5fc5 +0x2d9:  add    $0x4cc,%esp
085c5fcb +0x2df:  pop    %ebx
085c5fcc +0x2e0:  pop    %esi
085c5fcd +0x2e1:  pop    %edi
085c5fce +0x2e2:  pop    %ebp
085c5fcf +0x2e3:  ret
```

## 反编译 C

```c
// private_store::CPrivateStore::RecallPrivateStoreItemToMail @ 0x85c5cec

/* private_store::CPrivateStore::RecallPrivateStoreItemToMail() */

undefined4 __thiscall
private_store::CPrivateStore::RecallPrivateStoreItemToMail(CPrivateStore *this)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  undefined4 uVar4;
  size_t sVar5;
  undefined4 uVar6;
  uint uVar7;
  Inven_Item *this_00;
  uint uVar8;
  int iVar9;
  bool bVar10;
  byte bVar11;
  Inven_Item local_4a7 [854];
  char local_151;
  char local_150 [255];
  char local_51;
  char local_50 [20];
  cMyTrace local_3c [16];
  int local_2c;
  uint local_28;
  Inven_Item *local_24;
  int local_20;
  
  bVar11 = 0;
  this_00 = local_4a7;
  for (iVar9 = 0xd; iVar9 != -1; iVar9 = iVar9 + -1) {
    Inven_Item::Inven_Item(this_00);
    this_00 = this_00 + 0x3d;
  }
  local_2c = 0;
  for (local_28 = 0; local_28 < 0xe; local_28 = local_28 + 1) {
    local_24 = (Inven_Item *)
               std::
               vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
               ::operator[]((vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
                             *)(this + 0x3c),local_28);
    cVar2 = PrivateStoreItem::GetState((PrivateStoreItem *)local_24);
    if ((cVar2 == '\x03') && (*(int *)(local_24 + 2) != 0)) {
      iVar9 = local_2c * 0x3d;
      local_2c = local_2c + 1;
      Inven_Item::setCopy(local_4a7 + iVar9,local_24);
    }
  }
  if (0 < local_2c) {
    pcVar3 = &local_51;
    uVar7 = 0x15;
    bVar10 = ((uint)pcVar3 & 1) != 0;
    if (bVar10) {
      local_51 = '\0';
      pcVar3 = local_50;
      uVar7 = 0x14;
    }
    if (((uint)pcVar3 & 2) != 0) {
      pcVar3[0] = '\0';
      pcVar3[1] = '\0';
      pcVar3 = pcVar3 + 2;
      uVar7 = uVar7 - 2;
    }
    uVar8 = 0;
    do {
      pcVar1 = pcVar3 + uVar8;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      uVar8 = uVar8 + 4;
    } while (uVar8 < (uVar7 & 0xfffffffc));
    pcVar3 = pcVar3 + uVar8;
    if ((uVar7 & 2) != 0) {
      pcVar3[0] = '\0';
      pcVar3[1] = '\0';
      pcVar3 = pcVar3 + 2;
    }
    if (!bVar10) {
      *pcVar3 = '\0';
    }
    pcVar3 = &local_151;
    uVar7 = 0x100;
    bVar10 = ((uint)pcVar3 & 1) != 0;
    if (bVar10) {
      local_151 = '\0';
      pcVar3 = local_150;
      uVar7 = 0xff;
    }
    if (((uint)pcVar3 & 2) != 0) {
      pcVar3[0] = '\0';
      pcVar3[1] = '\0';
      pcVar3 = pcVar3 + 2;
      uVar7 = uVar7 - 2;
    }
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      pcVar3[0] = '\0';
      pcVar3[1] = '\0';
      pcVar3[2] = '\0';
      pcVar3[3] = '\0';
      pcVar3 = pcVar3 + ((uint)bVar11 * -2 + 1) * 4;
    }
    if ((uVar7 & 2) != 0) {
      pcVar3[0] = '\0';
      pcVar3[1] = '\0';
      pcVar3 = pcVar3 + 2;
    }
    if (bVar10) {
      *pcVar3 = '\0';
    }
    pcVar3 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                "game_server_msg_183",(bool *)0x0);
    strcpy(&local_51,pcVar3);
    pcVar3 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                "game_server_msg_186",(bool *)0x0);
    strcpy(&local_151,pcVar3);
    uVar4 = CUser::GetServerGroup(*(CUser **)(this + 0x2c));
    sVar5 = strlen(&local_151);
    uVar6 = CUserCharacInfo::getCurCharacNo(*(CUserCharacInfo **)(this + 0x2c));
    local_20 = WongWork::CMailBoxHelper::ReqDBSendNewSystemMultiMail
                         (&local_51,local_4a7,local_2c,0,uVar6,&local_151,sVar5,0,uVar4,0);
    if (local_20 != 0) {
      uVar4 = CUserCharacInfo::getCurCharacNo(*(CUserCharacInfo **)(this + 0x2c));
      uVar6 = CUser::get_acc_id(*(CUser **)(this + 0x2c));
      cMyTrace::cMyTrace(local_3c,
                         "bool private_store::CPrivateStore::RecallPrivateStoreItemToMail()",0x3c1,5
                        );
      cMyTrace::operator()
                (local_3c,
                 "CPrivateStore::RecallPrivateStoreItemToMail Error - Mail Send Fail User(%d), Charac_no(%d), item_count(%d)"
                 ,uVar6,uVar4,local_2c);
      return 1;
    }
  }
  ResetItems(this);
  return 1;
}
```
