# sendRewardItemSystemMail

`_ZN37Dispatcher_RequestIngameAdvertisement24sendRewardItemSystemMailEP5CUsermi`

`Dispatcher_RequestIngameAdvertisement::sendRewardItemSystemMail(CUser*, unsigned long, int)`

| 类 | 地址 |
|---|---|
| `Dispatcher_RequestIngameAdvertisement` | `0x081e4b6c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e4b6c  _ZN37Dispatcher_RequestIngameAdvertisement24sendRewardItemSystemMailEP5CUsermi
#           Dispatcher_RequestIngameAdvertisement::sendRewardItemSystemMail(CUser*, unsigned long, int)
# range [0x081e4b6c, 0x081e4ccf]
081e4b6c +0x000:  push   %ebp
081e4b6d +0x001:  mov    %esp,%ebp
081e4b6f +0x003:  push   %esi
081e4b70 +0x004:  push   %ebx
081e4b71 +0x005:  sub    $0x190,%esp
081e4b77 +0x00b:  cmpl   $0x0,0xc(%ebp)
081e4b7b +0x00f:  je     081e4cc4 <+0x158>
081e4b81 +0x015:  mov    0x10(%ebp),%ebx
081e4b84 +0x018:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081e4b89 +0x01d:  mov    %ebx,0x4(%esp)
081e4b8d +0x021:  mov    %eax,(%esp)
081e4b90 +0x024:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
081e4b95 +0x029:  mov    %eax,-0xc(%ebp)
081e4b98 +0x02c:  cmpl   $0x0,-0xc(%ebp)
081e4b9c +0x030:  je     081e4cc5 <+0x159>
081e4ba2 +0x036:  lea    -0x67(%ebp),%eax
081e4ba5 +0x039:  mov    %eax,(%esp)
081e4ba8 +0x03c:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
081e4bad +0x041:  mov    0x10(%ebp),%eax
081e4bb0 +0x044:  mov    %eax,-0x65(%ebp)
081e4bb3 +0x047:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081e4bb8 +0x04c:  mov    0xc(%eax),%eax
081e4bbb +0x04f:  mov    0x14(%ebp),%edx
081e4bbe +0x052:  mov    %edx,0xc(%esp)
081e4bc2 +0x056:  lea    -0x67(%ebp),%edx
081e4bc5 +0x059:  mov    %edx,0x8(%esp)
081e4bc9 +0x05d:  movl   $0x0,0x4(%esp)
081e4bd1 +0x065:  mov    %eax,(%esp)
081e4bd4 +0x068:  call   08511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>  ; CItemList::create_item(ENUM_ITEM_CREATE_TYPE, Inven_Item&, int)
081e4bd9 +0x06d:  movl   $0x0,0xc(%esp)
081e4be1 +0x075:  movl   $"game_server_msg_295",0x8(%esp)
081e4be9 +0x07d:  movl   $0x4,0x4(%esp)
081e4bf1 +0x085:  movl   $&g_scriptStringManager_,(%esp)
081e4bf8 +0x08c:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
081e4bfd +0x091:  movl   $0x1d,0x8(%esp)
081e4c05 +0x099:  mov    %eax,0x4(%esp)
081e4c09 +0x09d:  lea    -0x2a(%ebp),%eax
081e4c0c +0x0a0:  mov    %eax,(%esp)
081e4c0f +0x0a3:  call   0807d8d0 <_init+0x1c8>
081e4c14 +0x0a8:  movl   $0x0,0xc(%esp)
081e4c1c +0x0b0:  movl   $"game_server_msg_296",0x8(%esp)
081e4c24 +0x0b8:  movl   $0x4,0x4(%esp)
081e4c2c +0x0c0:  movl   $&g_scriptStringManager_,(%esp)
081e4c33 +0x0c7:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
081e4c38 +0x0cc:  movl   $0xff,0x8(%esp)
081e4c40 +0x0d4:  mov    %eax,0x4(%esp)
081e4c44 +0x0d8:  lea    -0x167(%ebp),%eax
081e4c4a +0x0de:  mov    %eax,(%esp)
081e4c4d +0x0e1:  call   0807d8d0 <_init+0x1c8>
081e4c52 +0x0e6:  mov    0xc(%ebp),%eax
081e4c55 +0x0e9:  mov    %eax,(%esp)
081e4c58 +0x0ec:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
081e4c5d +0x0f1:  mov    %eax,%ebx
081e4c5f +0x0f3:  lea    -0x167(%ebp),%eax
081e4c65 +0x0f9:  mov    %eax,(%esp)
081e4c68 +0x0fc:  call   0807e3b0 <_init+0xca8>
081e4c6d +0x101:  mov    %eax,%esi
081e4c6f +0x103:  mov    0xc(%ebp),%eax
081e4c72 +0x106:  mov    %eax,(%esp)
081e4c75 +0x109:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
081e4c7a +0x10e:  movl   $0x0,0x24(%esp)
081e4c82 +0x116:  movl   $0x0,0x20(%esp)
081e4c8a +0x11e:  mov    %ebx,0x1c(%esp)
081e4c8e +0x122:  movl   $0x0,0x18(%esp)
081e4c96 +0x12a:  mov    %esi,0x14(%esp)
081e4c9a +0x12e:  lea    -0x167(%ebp),%edx
081e4ca0 +0x134:  mov    %edx,0x10(%esp)
081e4ca4 +0x138:  mov    %eax,0xc(%esp)
081e4ca8 +0x13c:  movl   $0x0,0x8(%esp)
081e4cb0 +0x144:  lea    -0x67(%ebp),%eax
081e4cb3 +0x147:  mov    %eax,0x4(%esp)
081e4cb7 +0x14b:  lea    -0x2a(%ebp),%eax
081e4cba +0x14e:  mov    %eax,(%esp)
081e4cbd +0x151:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
081e4cc2 +0x156:  jmp    081e4cc5 <+0x159>
081e4cc4 +0x158:  nop
081e4cc5 +0x159:  add    $0x190,%esp
081e4ccb +0x15f:  pop    %ebx
081e4ccc +0x160:  pop    %esi
081e4ccd +0x161:  pop    %ebp
081e4cce +0x162:  ret
081e4ccf +0x163:  nop
```

## 反编译 C

```c
// Dispatcher_RequestIngameAdvertisement::sendRewardItemSystemMail @ 0x81e4b6c

/* Dispatcher_RequestIngameAdvertisement::sendRewardItemSystemMail(CUser*, unsigned long, int) */

void __thiscall
Dispatcher_RequestIngameAdvertisement::sendRewardItemSystemMail
          (Dispatcher_RequestIngameAdvertisement *this,CUser *param_1,ulong param_2,int param_3)

{
  CDataManager *this_00;
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  size_t sVar4;
  undefined4 uVar5;
  char local_16b [256];
  Inven_Item local_6b [2];
  ulong local_69;
  char local_2e [30];
  int local_10;
  
  if (param_1 != (CUser *)0x0) {
    this_00 = (CDataManager *)G_CDataManager();
    local_10 = CDataManager::find_item(this_00,param_2);
    if (local_10 != 0) {
      Inven_Item::Inven_Item(local_6b);
      local_69 = param_2;
      iVar1 = G_CDataManager();
      CItemList::create_item(*(CItemList **)(iVar1 + 0xc),0,local_6b,param_3);
      pcVar2 = (char *)RDARScriptStringManager::findString
                                 ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                  "game_server_msg_295",(bool *)0x0);
      strncpy(local_2e,pcVar2,0x1d);
      pcVar2 = (char *)RDARScriptStringManager::findString
                                 ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                  "game_server_msg_296",(bool *)0x0);
      strncpy(local_16b,pcVar2,0xff);
      uVar3 = CUser::GetServerGroup(param_1);
      sVar4 = strlen(local_16b);
      uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                (local_2e,local_6b,0,uVar5,local_16b,sVar4,0,uVar3,0,0);
    }
  }
  return;
}
```
