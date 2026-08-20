# GiveEquipItemsReturnUser

`_ZN5CUser24GiveEquipItemsReturnUserEv`

`CUser::GiveEquipItemsReturnUser()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08692140` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08692140  _ZN5CUser24GiveEquipItemsReturnUserEv
#           CUser::GiveEquipItemsReturnUser()
# range [0x08692140, 0x08692309]
08692140 +0x000:  push   %ebp
08692141 +0x001:  mov    %esp,%ebp
08692143 +0x003:  push   %edi
08692144 +0x004:  push   %esi
08692145 +0x005:  push   %ebx
08692146 +0x006:  sub    $0x9c,%esp
0869214c +0x00c:  mov    0x8(%ebp),%eax
0869214f +0x00f:  mov    %eax,(%esp)
08692152 +0x012:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
08692157 +0x017:  movsbl %al,%ebx
0869215a +0x01a:  mov    0x8(%ebp),%eax
0869215d +0x01d:  mov    %eax,(%esp)
08692160 +0x020:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08692165 +0x025:  mov    %ebx,0x8(%esp)
08692169 +0x029:  mov    %eax,0x4(%esp)
0869216d +0x02d:  mov    0x8(%ebp),%eax
08692170 +0x030:  mov    %eax,(%esp)
08692173 +0x033:  call   0869230a <_ZN5CUser21getReturnUserLevelKeyEii>  ; CUser::getReturnUserLevelKey(int, int)
08692178 +0x038:  mov    %eax,-0x24(%ebp)
0869217b +0x03b:  mov    0x8(%ebp),%eax
0869217e +0x03e:  mov    %eax,(%esp)
08692181 +0x041:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
08692186 +0x046:  movsbl %al,%ebx
08692189 +0x049:  mov    0x8(%ebp),%eax
0869218c +0x04c:  mov    %eax,(%esp)
0869218f +0x04f:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
08692194 +0x054:  mov    %ebx,0xc(%esp)
08692198 +0x058:  mov    %eax,0x8(%esp)
0869219c +0x05c:  mov    -0x24(%ebp),%eax
0869219f +0x05f:  mov    %eax,0x4(%esp)
086921a3 +0x063:  lea    -0x28(%ebp),%eax
086921a6 +0x066:  mov    %eax,(%esp)
086921a9 +0x069:  call   081b8896 <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x9d>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x9d
086921ae +0x06e:  lea    -0x30(%ebp),%eax
086921b1 +0x071:  mov    %eax,(%esp)
086921b4 +0x074:  call   081b88bc <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0xc3>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0xc3
086921b9 +0x079:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086921be +0x07e:  lea    0xb550(%eax),%edx
086921c4 +0x084:  lea    -0x30(%ebp),%eax
086921c7 +0x087:  mov    %eax,0x8(%esp)
086921cb +0x08b:  lea    -0x28(%ebp),%eax
086921ce +0x08e:  mov    %eax,0x4(%esp)
086921d2 +0x092:  mov    %edx,(%esp)
086921d5 +0x095:  call   081b89de <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x1e5>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x1e5
086921da +0x09a:  xor    $0x1,%eax
086921dd +0x09d:  test   %al,%al
086921df +0x09f:  jne    086922fa <+0x1ba>
086921e5 +0x0a5:  lea    -0x6d(%ebp),%eax
086921e8 +0x0a8:  mov    %eax,(%esp)
086921eb +0x0ab:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
086921f0 +0x0b0:  mov    -0x30(%ebp),%eax
086921f3 +0x0b3:  mov    %eax,%ebx
086921f5 +0x0b5:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086921fa +0x0ba:  mov    %ebx,0x4(%esp)
086921fe +0x0be:  mov    %eax,(%esp)
08692201 +0x0c1:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08692206 +0x0c6:  mov    %eax,-0x20(%ebp)
08692209 +0x0c9:  cmpl   $0x0,-0x20(%ebp)
0869220d +0x0cd:  je     086922fd <+0x1bd>
08692213 +0x0d3:  mov    -0x30(%ebp),%eax
08692216 +0x0d6:  mov    %eax,-0x6b(%ebp)
08692219 +0x0d9:  mov    -0x20(%ebp),%eax
0869221c +0x0dc:  mov    (%eax),%eax
0869221e +0x0de:  add    $0x8,%eax
08692221 +0x0e1:  mov    (%eax),%edx
08692223 +0x0e3:  lea    -0x6d(%ebp),%eax
08692226 +0x0e6:  mov    %eax,0x4(%esp)
0869222a +0x0ea:  mov    -0x20(%ebp),%eax
0869222d +0x0ed:  mov    %eax,(%esp)
08692230 +0x0f0:  call   *%edx
08692232 +0x0f2:  mov    -0x2c(%ebp),%eax
08692235 +0x0f5:  mov    %eax,0x4(%esp)
08692239 +0x0f9:  lea    -0x6d(%ebp),%eax
0869223c +0x0fc:  mov    %eax,(%esp)
0869223f +0x0ff:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
08692244 +0x104:  movl   $0x0,0xc(%esp)
0869224c +0x10c:  movl   $"return_user_msg_2",0x8(%esp)
08692254 +0x114:  movl   $0x4,0x4(%esp)
0869225c +0x11c:  movl   $&g_scriptStringManager_,(%esp)
08692263 +0x123:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
08692268 +0x128:  mov    %eax,-0x1c(%ebp)
0869226b +0x12b:  mov    0x8(%ebp),%eax
0869226e +0x12e:  mov    %eax,(%esp)
08692271 +0x131:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
08692276 +0x136:  mov    %eax,%esi
08692278 +0x138:  mov    -0x1c(%ebp),%eax
0869227b +0x13b:  mov    %eax,(%esp)
0869227e +0x13e:  call   0807e3b0 <_init+0xca8>
08692283 +0x143:  mov    %eax,%edi
08692285 +0x145:  mov    0x8(%ebp),%eax
08692288 +0x148:  mov    %eax,(%esp)
0869228b +0x14b:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08692290 +0x150:  mov    %eax,%ebx
08692292 +0x152:  movl   $0x0,0xc(%esp)
0869229a +0x15a:  movl   $"return_user_msg_title",0x8(%esp)
086922a2 +0x162:  movl   $0x4,0x4(%esp)
086922aa +0x16a:  movl   $&g_scriptStringManager_,(%esp)
086922b1 +0x171:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
086922b6 +0x176:  movl   $0x0,0x24(%esp)
086922be +0x17e:  movl   $0x0,0x20(%esp)
086922c6 +0x186:  mov    %esi,0x1c(%esp)
086922ca +0x18a:  movl   $0x7,0x18(%esp)
086922d2 +0x192:  mov    %edi,0x14(%esp)
086922d6 +0x196:  mov    -0x1c(%ebp),%edx
086922d9 +0x199:  mov    %edx,0x10(%esp)
086922dd +0x19d:  mov    %ebx,0xc(%esp)
086922e1 +0x1a1:  movl   $0x0,0x8(%esp)
086922e9 +0x1a9:  lea    -0x6d(%ebp),%edx
086922ec +0x1ac:  mov    %edx,0x4(%esp)
086922f0 +0x1b0:  mov    %eax,(%esp)
086922f3 +0x1b3:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
086922f8 +0x1b8:  jmp    086922fe <+0x1be>
086922fa +0x1ba:  nop
086922fb +0x1bb:  jmp    086922fe <+0x1be>
086922fd +0x1bd:  nop
086922fe +0x1be:  add    $0x9c,%esp
08692304 +0x1c4:  pop    %ebx
08692305 +0x1c5:  pop    %esi
08692306 +0x1c6:  pop    %edi
08692307 +0x1c7:  pop    %ebp
08692308 +0x1c8:  ret
08692309 +0x1c9:  nop
```

## 反编译 C

```c
// CUser::GiveEquipItemsReturnUser @ 0x8692140

/* CUser::GiveEquipItemsReturnUser() */

void __thiscall CUser::GiveEquipItemsReturnUser(CUser *this)

{
  char cVar1;
  int iVar2;
  CDataManager *this_00;
  undefined4 uVar3;
  size_t sVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  Inven_Item local_71 [2];
  int local_6f;
  int local_34;
  int local_30;
  LevelUpRewardItemTableKey local_2c [4];
  int local_28;
  int *local_24;
  char *local_20;
  
  cVar1 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)this);
  iVar2 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
  local_28 = getReturnUserLevelKey(this,iVar2,(int)cVar1);
  cVar1 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)this);
  iVar2 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this);
  LevelUpRewardItemTableKey::LevelUpRewardItemTableKey(local_2c,local_28,iVar2,(int)cVar1);
  LevelUpRewardItemData::LevelUpRewardItemData((LevelUpRewardItemData *)&local_34);
  iVar2 = G_CDataManager();
  cVar1 = stLevelUpRewardItemScript::get_data
                    ((stLevelUpRewardItemScript *)(iVar2 + 0xb550),local_2c,
                     (LevelUpRewardItemData *)&local_34);
  if (cVar1 == '\x01') {
    Inven_Item::Inven_Item(local_71);
    iVar2 = local_34;
    this_00 = (CDataManager *)G_CDataManager();
    local_24 = (int *)CDataManager::find_item(this_00,iVar2);
    if (local_24 != (int *)0x0) {
      local_6f = local_34;
      (**(code **)(*local_24 + 8))(local_24,local_71);
      Inven_Item::set_add_info(local_71,local_30);
      local_20 = (char *)RDARScriptStringManager::findString
                                   ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                    "return_user_msg_2",(bool *)0x0);
      uVar3 = GetServerGroup(this);
      sVar4 = strlen(local_20);
      uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
      uVar6 = RDARScriptStringManager::findString
                        ((RDARScriptStringManager *)g_scriptStringManager_,4,"return_user_msg_title"
                         ,(bool *)0x0);
      WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                (uVar6,local_71,0,uVar5,local_20,sVar4,7,uVar3,0,0);
    }
  }
  return;
}
```
