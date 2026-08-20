# insertItem

`_ZN10BlueMarble10insertItemEiR10Inven_Item14eItemAddReason`

`BlueMarble::insertItem(int, Inven_Item&, eItemAddReason)`

| 类 | 地址 |
|---|---|
| `BlueMarble` | `0x080d800e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d800e  _ZN10BlueMarble10insertItemEiR10Inven_Item14eItemAddReason
#           BlueMarble::insertItem(int, Inven_Item&, eItemAddReason)
# range [0x080d800e, 0x080d82f1]
080d800e +0x000:  push   %ebp
080d800f +0x001:  mov    %esp,%ebp
080d8011 +0x003:  push   %esi
080d8012 +0x004:  push   %ebx
080d8013 +0x005:  sub    $0x2c0,%esp
080d8019 +0x00b:  mov    0x10(%ebp),%eax
080d801c +0x00e:  mov    0x7(%eax),%ebx
080d801f +0x011:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
080d8024 +0x016:  mov    0xc(%eax),%eax
080d8027 +0x019:  mov    %ebx,0xc(%esp)
080d802b +0x01d:  mov    0x10(%ebp),%edx
080d802e +0x020:  mov    %edx,0x8(%esp)
080d8032 +0x024:  movl   $0x0,0x4(%esp)
080d803a +0x02c:  mov    %eax,(%esp)
080d803d +0x02f:  call   08511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>  ; CItemList::create_item(ENUM_ITEM_CREATE_TYPE, Inven_Item&, int)
080d8042 +0x034:  mov    0xc(%ebp),%eax
080d8045 +0x037:  mov    0x8(%ebp),%edx
080d8048 +0x03a:  add    $0x4,%edx
080d804b +0x03d:  mov    %eax,0x4(%esp)
080d804f +0x041:  mov    %edx,(%esp)
080d8052 +0x044:  call   080da4ce <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x66b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x66b
080d8057 +0x049:  mov    %eax,(%esp)
080d805a +0x04c:  call   080d6b88 <_ZNK18BlueMarbleUserInfo7getUserEv>  ; BlueMarbleUserInfo::getUser() const
080d805f +0x051:  mov    %eax,(%esp)
080d8062 +0x054:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
080d8067 +0x059:  mov    %eax,%edx
080d8069 +0x05b:  movl   $0x0,0x4c(%esp)
080d8071 +0x063:  movl   $0x1,0x48(%esp)
080d8079 +0x06b:  mov    0x14(%ebp),%eax
080d807c +0x06e:  mov    %eax,0x44(%esp)
080d8080 +0x072:  mov    0x10(%ebp),%eax
080d8083 +0x075:  mov    (%eax),%ecx
080d8085 +0x077:  mov    %ecx,0x4(%esp)
080d8089 +0x07b:  mov    0x4(%eax),%ecx
080d808c +0x07e:  mov    %ecx,0x8(%esp)
080d8090 +0x082:  mov    0x8(%eax),%ecx
080d8093 +0x085:  mov    %ecx,0xc(%esp)
080d8097 +0x089:  mov    0xc(%eax),%ecx
080d809a +0x08c:  mov    %ecx,0x10(%esp)
080d809e +0x090:  mov    0x10(%eax),%ecx
080d80a1 +0x093:  mov    %ecx,0x14(%esp)
080d80a5 +0x097:  mov    0x14(%eax),%ecx
080d80a8 +0x09a:  mov    %ecx,0x18(%esp)
080d80ac +0x09e:  mov    0x18(%eax),%ecx
080d80af +0x0a1:  mov    %ecx,0x1c(%esp)
080d80b3 +0x0a5:  mov    0x1c(%eax),%ecx
080d80b6 +0x0a8:  mov    %ecx,0x20(%esp)
080d80ba +0x0ac:  mov    0x20(%eax),%ecx
080d80bd +0x0af:  mov    %ecx,0x24(%esp)
080d80c1 +0x0b3:  mov    0x24(%eax),%ecx
080d80c4 +0x0b6:  mov    %ecx,0x28(%esp)
080d80c8 +0x0ba:  mov    0x28(%eax),%ecx
080d80cb +0x0bd:  mov    %ecx,0x2c(%esp)
080d80cf +0x0c1:  mov    0x2c(%eax),%ecx
080d80d2 +0x0c4:  mov    %ecx,0x30(%esp)
080d80d6 +0x0c8:  mov    0x30(%eax),%ecx
080d80d9 +0x0cb:  mov    %ecx,0x34(%esp)
080d80dd +0x0cf:  mov    0x34(%eax),%ecx
080d80e0 +0x0d2:  mov    %ecx,0x38(%esp)
080d80e4 +0x0d6:  mov    0x38(%eax),%ecx
080d80e7 +0x0d9:  mov    %ecx,0x3c(%esp)
080d80eb +0x0dd:  movzbl 0x3c(%eax),%eax
080d80ef +0x0e1:  mov    %al,0x40(%esp)
080d80f3 +0x0e5:  mov    %edx,(%esp)
080d80f6 +0x0e8:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
080d80fb +0x0ed:  mov    %eax,-0xc(%ebp)
080d80fe +0x0f0:  cmpl   $0x0,-0xc(%ebp)
080d8102 +0x0f4:  jns    080d82cf <+0x2c1>
080d8108 +0x0fa:  movl   $0x0,0xc(%esp)
080d8110 +0x102:  movl   $"game_server_msg_268",0x8(%esp)
080d8118 +0x10a:  movl   $0x4,0x4(%esp)
080d8120 +0x112:  movl   $&g_scriptStringManager_,(%esp)
080d8127 +0x119:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
080d812c +0x11e:  movl   $0x1d,0x8(%esp)
080d8134 +0x126:  mov    %eax,0x4(%esp)
080d8138 +0x12a:  lea    -0x2a(%ebp),%eax
080d813b +0x12d:  mov    %eax,(%esp)
080d813e +0x130:  call   0807d8d0 <_init+0x1c8>
080d8143 +0x135:  movl   $0x0,0xc(%esp)
080d814b +0x13d:  movl   $"game_server_msg_269",0x8(%esp)
080d8153 +0x145:  movl   $0x4,0x4(%esp)
080d815b +0x14d:  movl   $&g_scriptStringManager_,(%esp)
080d8162 +0x154:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
080d8167 +0x159:  movl   $0xff,0x8(%esp)
080d816f +0x161:  mov    %eax,0x4(%esp)
080d8173 +0x165:  lea    -0x12a(%ebp),%eax
080d8179 +0x16b:  mov    %eax,(%esp)
080d817c +0x16e:  call   0807d8d0 <_init+0x1c8>
080d8181 +0x173:  mov    0xc(%ebp),%eax
080d8184 +0x176:  mov    0x8(%ebp),%edx
080d8187 +0x179:  add    $0x4,%edx
080d818a +0x17c:  mov    %eax,0x4(%esp)
080d818e +0x180:  mov    %edx,(%esp)
080d8191 +0x183:  call   080da4ce <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x66b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x66b
080d8196 +0x188:  mov    %eax,(%esp)
080d8199 +0x18b:  call   080d6b88 <_ZNK18BlueMarbleUserInfo7getUserEv>  ; BlueMarbleUserInfo::getUser() const
080d819e +0x190:  mov    %eax,(%esp)
080d81a1 +0x193:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
080d81a6 +0x198:  mov    %eax,%ebx
080d81a8 +0x19a:  lea    -0x12a(%ebp),%eax
080d81ae +0x1a0:  mov    %eax,(%esp)
080d81b1 +0x1a3:  call   0807e3b0 <_init+0xca8>
080d81b6 +0x1a8:  mov    %eax,%esi
080d81b8 +0x1aa:  mov    0xc(%ebp),%eax
080d81bb +0x1ad:  mov    0x8(%ebp),%edx
080d81be +0x1b0:  add    $0x4,%edx
080d81c1 +0x1b3:  mov    %eax,0x4(%esp)
080d81c5 +0x1b7:  mov    %edx,(%esp)
080d81c8 +0x1ba:  call   080da4ce <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x66b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x66b
080d81cd +0x1bf:  mov    %eax,(%esp)
080d81d0 +0x1c2:  call   080d6b88 <_ZNK18BlueMarbleUserInfo7getUserEv>  ; BlueMarbleUserInfo::getUser() const
080d81d5 +0x1c7:  movl   $0xffffffff,0x4(%esp)
080d81dd +0x1cf:  mov    %eax,(%esp)
080d81e0 +0x1d2:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
080d81e5 +0x1d7:  movl   $0x0,0x24(%esp)
080d81ed +0x1df:  movl   $0x0,0x20(%esp)
080d81f5 +0x1e7:  mov    %ebx,0x1c(%esp)
080d81f9 +0x1eb:  movl   $0xf,0x18(%esp)
080d8201 +0x1f3:  mov    %esi,0x14(%esp)
080d8205 +0x1f7:  lea    -0x12a(%ebp),%edx
080d820b +0x1fd:  mov    %edx,0x10(%esp)
080d820f +0x201:  mov    %eax,0xc(%esp)
080d8213 +0x205:  movl   $0x0,0x8(%esp)
080d821b +0x20d:  mov    0x10(%ebp),%eax
080d821e +0x210:  mov    %eax,0x4(%esp)
080d8222 +0x214:  lea    -0x2a(%ebp),%eax
080d8225 +0x217:  mov    %eax,(%esp)
080d8228 +0x21a:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
080d822d +0x21f:  test   %eax,%eax
080d822f +0x221:  sete   %al
080d8232 +0x224:  test   %al,%al
080d8234 +0x226:  je     080d82e8 <+0x2da>
080d823a +0x22c:  movl   $0x145,0x8(%esp)
080d8242 +0x234:  movl   $0x0,0x4(%esp)
080d824a +0x23c:  lea    -0x26f(%ebp),%eax
080d8250 +0x242:  mov    %eax,(%esp)
080d8253 +0x245:  call   0807dcc0 <_init+0x5b8>
080d8258 +0x24a:  movl   $0x1d,0x8(%esp)
080d8260 +0x252:  lea    -0x2a(%ebp),%eax
080d8263 +0x255:  mov    %eax,0x4(%esp)
080d8267 +0x259:  lea    -0x26f(%ebp),%eax
080d826d +0x25f:  add    $0x11,%eax
080d8270 +0x262:  mov    %eax,(%esp)
080d8273 +0x265:  call   0807d8d0 <_init+0x1c8>
080d8278 +0x26a:  mov    0x10(%ebp),%eax
080d827b +0x26d:  mov    0x2(%eax),%eax
080d827e +0x270:  mov    %eax,-0x236(%ebp)
080d8284 +0x276:  mov    0x10(%ebp),%eax
080d8287 +0x279:  mov    0x7(%eax),%eax
080d828a +0x27c:  mov    %eax,-0x232(%ebp)
080d8290 +0x282:  mov    0xc(%ebp),%eax
080d8293 +0x285:  mov    0x8(%ebp),%edx
080d8296 +0x288:  add    $0x4,%edx
080d8299 +0x28b:  mov    %eax,0x4(%esp)
080d829d +0x28f:  mov    %edx,(%esp)
080d82a0 +0x292:  call   080da4ce <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x66b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x66b
080d82a5 +0x297:  mov    %eax,(%esp)
080d82a8 +0x29a:  call   080d6b88 <_ZNK18BlueMarbleUserInfo7getUserEv>  ; BlueMarbleUserInfo::getUser() const
080d82ad +0x29f:  lea    0x79700(%eax),%edx
080d82b3 +0x2a5:  movl   $0x0,0x8(%esp)
080d82bb +0x2ad:  lea    -0x26f(%ebp),%eax
080d82c1 +0x2b3:  mov    %eax,0x4(%esp)
080d82c5 +0x2b7:  mov    %edx,(%esp)
080d82c8 +0x2ba:  call   086847ea <_ZN15cUserHistoryLog8SendMailEP16MSG_MAILBOX_SENDj>  ; cUserHistoryLog::SendMail(MSG_MAILBOX_SEND*, unsigned int)
080d82cd +0x2bf:  jmp    080d82e8 <+0x2da>
080d82cf +0x2c1:  mov    -0xc(%ebp),%eax
080d82d2 +0x2c4:  mov    %eax,0x8(%esp)
080d82d6 +0x2c8:  mov    0xc(%ebp),%eax
080d82d9 +0x2cb:  mov    %eax,0x4(%esp)
080d82dd +0x2cf:  mov    0x8(%ebp),%eax
080d82e0 +0x2d2:  mov    %eax,(%esp)
080d82e3 +0x2d5:  call   080d8956 <_ZNK10BlueMarble18sendUpdateItemInfoEii>  ; BlueMarble::sendUpdateItemInfo(int, int) const
080d82e8 +0x2da:  add    $0x2c0,%esp
080d82ee +0x2e0:  pop    %ebx
080d82ef +0x2e1:  pop    %esi
080d82f0 +0x2e2:  pop    %ebp
080d82f1 +0x2e3:  ret
```

## 反编译 C

```c
// BlueMarble::insertItem @ 0x80d800e

/* BlueMarble::insertItem(int, Inven_Item&, eItemAddReason) */

void __thiscall
BlueMarble::insertItem(BlueMarble *this,uint param_1,undefined4 *param_2,undefined4 param_4)

{
  int iVar1;
  BlueMarbleUserInfo *pBVar2;
  CUserCharacInfo *this_00;
  undefined4 uVar3;
  char *pcVar4;
  CUser *pCVar5;
  size_t sVar6;
  undefined4 uVar7;
  MSG_MAILBOX_SEND local_273 [17];
  char acStack_262 [40];
  undefined4 local_23a;
  undefined4 local_236;
  char local_12e [256];
  char local_2e [30];
  int local_10;
  
  uVar3 = *(undefined4 *)((int)param_2 + 7);
  iVar1 = G_CDataManager();
  CItemList::create_item(*(CItemList **)(iVar1 + 0xc),0,param_2,uVar3);
  pBVar2 = (BlueMarbleUserInfo *)
           std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                     ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                      param_1);
  this_00 = (CUserCharacInfo *)BlueMarbleUserInfo::getUser(pBVar2);
  uVar3 = CUserCharacInfo::getCurCharacInvenW(this_00);
  local_10 = CInventory::insertItemIntoInventory
                       (uVar3,*param_2,param_2[1],param_2[2],param_2[3],param_2[4],param_2[5],
                        param_2[6],param_2[7],param_2[8],param_2[9],param_2[10],param_2[0xb],
                        param_2[0xc],param_2[0xd],param_2[0xe],*(undefined1 *)(param_2 + 0xf),
                        param_4,1,0);
  if (local_10 < 0) {
    pcVar4 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                "game_server_msg_268",(bool *)0x0);
    strncpy(local_2e,pcVar4,0x1d);
    pcVar4 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                "game_server_msg_269",(bool *)0x0);
    strncpy(local_12e,pcVar4,0xff);
    pBVar2 = (BlueMarbleUserInfo *)
             std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                       ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                        param_1);
    pCVar5 = (CUser *)BlueMarbleUserInfo::getUser(pBVar2);
    uVar3 = CUser::GetServerGroup(pCVar5);
    sVar6 = strlen(local_12e);
    pBVar2 = (BlueMarbleUserInfo *)
             std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                       ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                        param_1);
    pCVar5 = (CUser *)BlueMarbleUserInfo::getUser(pBVar2);
    uVar7 = CUser::get_charac_no(pCVar5,-1);
    iVar1 = WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                      (local_2e,param_2,0,uVar7,local_12e,sVar6,0xf,uVar3,0,0);
    if (iVar1 == 0) {
      memset(local_273,0,0x145);
      strncpy(acStack_262,local_2e,0x1d);
      local_23a = *(undefined4 *)((int)param_2 + 2);
      local_236 = *(undefined4 *)((int)param_2 + 7);
      pBVar2 = (BlueMarbleUserInfo *)
               std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                         ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)
                          (this + 4),param_1);
      iVar1 = BlueMarbleUserInfo::getUser(pBVar2);
      cUserHistoryLog::SendMail((cUserHistoryLog *)(iVar1 + 0x79700),local_273,0);
    }
  }
  else {
    sendUpdateItemInfo(this,param_1,local_10);
  }
  return;
}
```
