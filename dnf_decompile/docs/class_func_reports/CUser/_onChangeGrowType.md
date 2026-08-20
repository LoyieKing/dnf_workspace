# _onChangeGrowType

`_ZN5CUser17_onChangeGrowTypeEhh21eChangeGrowTypeReason`

`CUser::_onChangeGrowType(unsigned char, unsigned char, eChangeGrowTypeReason)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08664080` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08664080  _ZN5CUser17_onChangeGrowTypeEhh21eChangeGrowTypeReason
#           CUser::_onChangeGrowType(unsigned char, unsigned char, eChangeGrowTypeReason)
# range [0x08664080, 0x08664411]
08664080 +0x000:  push   %ebp
08664081 +0x001:  mov    %esp,%ebp
08664083 +0x003:  push   %edi
08664084 +0x004:  push   %esi
08664085 +0x005:  push   %ebx
08664086 +0x006:  sub    $0x1cc,%esp
0866408c +0x00c:  mov    0xc(%ebp),%edx
0866408f +0x00f:  mov    0x10(%ebp),%eax
08664092 +0x012:  mov    %dl,-0x19c(%ebp)
08664098 +0x018:  mov    %al,-0x1a0(%ebp)
0866409e +0x01e:  mov    &_ZN10GlobalData15s_event_managerE,%eax
086640a3 +0x023:  movl   $0x15,0x4(%esp)
086640ab +0x02b:  mov    %eax,(%esp)
086640ae +0x02e:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
086640b3 +0x033:  mov    (%eax),%edx
086640b5 +0x035:  add    $0x34,%edx
086640b8 +0x038:  mov    (%edx),%edx
086640ba +0x03a:  movl   $0x0,0x4(%esp)
086640c2 +0x042:  mov    %eax,(%esp)
086640c5 +0x045:  call   *%edx
086640c7 +0x047:  test   %al,%al
086640c9 +0x049:  je     08664134 <+0xb4>
086640cb +0x04b:  cmpl   $0x1,0x14(%ebp)
086640cf +0x04f:  je     08664134 <+0xb4>
086640d1 +0x051:  cmpb   $0x0,-0x1a0(%ebp)
086640d8 +0x058:  jne    08664108 <+0x88>
086640da +0x05a:  mov    0x8(%ebp),%eax
086640dd +0x05d:  mov    %eax,(%esp)
086640e0 +0x060:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
086640e5 +0x065:  mov    %eax,%ebx
086640e7 +0x067:  mov    0x8(%ebp),%eax
086640ea +0x06a:  mov    %eax,(%esp)
086640ed +0x06d:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
086640f2 +0x072:  movl   $0xa,0x8(%esp)
086640fa +0x07a:  mov    %ebx,0x4(%esp)
086640fe +0x07e:  mov    %eax,(%esp)
08664101 +0x081:  call   0842e856 <_ZN25DB_InsertArchieveEventLog11makeRequestEjjN24SIG_INSERT_ACHIEVE_EVENT17ENUM_ACHIEVE_TYPEE>  ; DB_InsertArchieveEventLog::makeRequest(unsigned int, unsigned int, SIG_INSERT_ACHIEVE_EVENT::ENUM_ACHIEVE_TYPE)
08664106 +0x086:  jmp    08664134 <+0xb4>
08664108 +0x088:  mov    0x8(%ebp),%eax
0866410b +0x08b:  mov    %eax,(%esp)
0866410e +0x08e:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08664113 +0x093:  mov    %eax,%ebx
08664115 +0x095:  mov    0x8(%ebp),%eax
08664118 +0x098:  mov    %eax,(%esp)
0866411b +0x09b:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08664120 +0x0a0:  movl   $0xb,0x8(%esp)
08664128 +0x0a8:  mov    %ebx,0x4(%esp)
0866412c +0x0ac:  mov    %eax,(%esp)
0866412f +0x0af:  call   0842e856 <_ZN25DB_InsertArchieveEventLog11makeRequestEjjN24SIG_INSERT_ACHIEVE_EVENT17ENUM_ACHIEVE_TYPEE>  ; DB_InsertArchieveEventLog::makeRequest(unsigned int, unsigned int, SIG_INSERT_ACHIEVE_EVENT::ENUM_ACHIEVE_TYPE)
08664134 +0x0b4:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08664139 +0x0b9:  mov    0x378(%eax),%eax
0866413f +0x0bf:  cmp    $0xa,%eax
08664142 +0x0c2:  jne    0866415e <+0xde>
08664144 +0x0c4:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0866414b +0x0cb:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08664150 +0x0d0:  cmp    $0x478e7050,%eax
08664155 +0x0d5:  ja     0866415e <+0xde>
08664157 +0x0d7:  mov    $0x1,%eax
0866415c +0x0dc:  jmp    08664163 <+0xe3>
0866415e +0x0de:  mov    $0x0,%eax
08664163 +0x0e3:  test   %al,%al
08664165 +0x0e5:  je     0866425e <+0x1de>
0866416b +0x0eb:  cmpl   $0x1,0x14(%ebp)
0866416f +0x0ef:  je     086643fd <+0x37d>
08664175 +0x0f5:  cmpb   $0x0,-0x1a0(%ebp)
0866417c +0x0fc:  jne    08664400 <+0x380>
08664182 +0x102:  movl   $0x0,0xc(%esp)
0866418a +0x10a:  movl   $"game_server_msg_13",0x8(%esp)
08664192 +0x112:  movl   $0x4,0x4(%esp)
0866419a +0x11a:  movl   $&g_scriptStringManager_,(%esp)
086641a1 +0x121:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
086641a6 +0x126:  movl   $0xff,0x8(%esp)
086641ae +0x12e:  mov    %eax,0x4(%esp)
086641b2 +0x132:  lea    -0x192(%ebp),%eax
086641b8 +0x138:  mov    %eax,(%esp)
086641bb +0x13b:  call   0807d8d0 <_init+0x1c8>
086641c0 +0x140:  lea    -0x55(%ebp),%eax
086641c3 +0x143:  mov    %eax,(%esp)
086641c6 +0x146:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
086641cb +0x14b:  mov    0x8(%ebp),%eax
086641ce +0x14e:  mov    %eax,(%esp)
086641d1 +0x151:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
086641d6 +0x156:  mov    %eax,%esi
086641d8 +0x158:  lea    -0x192(%ebp),%eax
086641de +0x15e:  mov    %eax,(%esp)
086641e1 +0x161:  call   0807e3b0 <_init+0xca8>
086641e6 +0x166:  mov    %eax,%edi
086641e8 +0x168:  mov    0x8(%ebp),%eax
086641eb +0x16b:  mov    %eax,(%esp)
086641ee +0x16e:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
086641f3 +0x173:  mov    %eax,%ebx
086641f5 +0x175:  movl   $0x0,0xc(%esp)
086641fd +0x17d:  movl   $"game_server_msg_09",0x8(%esp)
08664205 +0x185:  movl   $0x4,0x4(%esp)
0866420d +0x18d:  movl   $&g_scriptStringManager_,(%esp)
08664214 +0x194:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
08664219 +0x199:  movl   $0x0,0x24(%esp)
08664221 +0x1a1:  movl   $0x0,0x20(%esp)
08664229 +0x1a9:  mov    %esi,0x1c(%esp)
0866422d +0x1ad:  movl   $0x0,0x18(%esp)
08664235 +0x1b5:  mov    %edi,0x14(%esp)
08664239 +0x1b9:  lea    -0x192(%ebp),%edx
0866423f +0x1bf:  mov    %edx,0x10(%esp)
08664243 +0x1c3:  mov    %ebx,0xc(%esp)
08664247 +0x1c7:  movl   $&_ZL14gUnicodeBuffer+0x1a4c4,0x8(%esp)
0866424f +0x1cf:  lea    -0x55(%ebp),%edx
08664252 +0x1d2:  mov    %edx,0x4(%esp)
08664256 +0x1d6:  mov    %eax,(%esp)
08664259 +0x1d9:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
0866425e +0x1de:  movl   $0x10,0x4(%esp)
08664266 +0x1e6:  mov    0x8(%ebp),%eax
08664269 +0x1e9:  mov    %eax,(%esp)
0866426c +0x1ec:  call   080e600e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x144>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x144
08664271 +0x1f1:  test   %al,%al
08664273 +0x1f3:  je     0866428f <+0x20f>
08664275 +0x1f5:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0866427c +0x1fc:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08664281 +0x201:  cmp    $0x46e1bbd0,%eax
08664286 +0x206:  ja     0866428f <+0x20f>
08664288 +0x208:  mov    $0x1,%eax
0866428d +0x20d:  jmp    08664294 <+0x214>
0866428f +0x20f:  mov    $0x0,%eax
08664294 +0x214:  test   %al,%al
08664296 +0x216:  je     08664407 <+0x387>
0866429c +0x21c:  cmpl   $0x1,0x14(%ebp)
086642a0 +0x220:  je     08664403 <+0x383>
086642a6 +0x226:  cmpb   $0x0,-0x1a0(%ebp)
086642ad +0x22d:  jne    08664406 <+0x386>
086642b3 +0x233:  mov    0x8(%ebp),%eax
086642b6 +0x236:  mov    %eax,(%esp)
086642b9 +0x239:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
086642be +0x23e:  movl   $0xb,0x8(%esp)
086642c6 +0x246:  movl   $0x0,0x4(%esp)
086642ce +0x24e:  mov    %eax,(%esp)
086642d1 +0x251:  call   084fc1de <_ZNK10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int) const
086642d6 +0x256:  mov    0x2(%eax),%eax
086642d9 +0x259:  sub    $0x65d6,%eax
086642de +0x25e:  cmp    $0x4,%eax
086642e1 +0x261:  ja     08664407 <+0x387>
086642e7 +0x267:  movl   $0x0,0xc(%esp)
086642ef +0x26f:  movl   $"game_server_msg_07",0x8(%esp)
086642f7 +0x277:  movl   $0x4,0x4(%esp)
086642ff +0x27f:  movl   $&g_scriptStringManager_,(%esp)
08664306 +0x286:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
0866430b +0x28b:  movl   $0xff,0x8(%esp)
08664313 +0x293:  mov    %eax,0x4(%esp)
08664317 +0x297:  lea    -0x192(%ebp),%eax
0866431d +0x29d:  mov    %eax,(%esp)
08664320 +0x2a0:  call   0807d8d0 <_init+0x1c8>
08664325 +0x2a5:  lea    -0x92(%ebp),%eax
0866432b +0x2ab:  mov    %eax,(%esp)
0866432e +0x2ae:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08664333 +0x2b3:  movl   $0x43d,-0x90(%ebp)
0866433d +0x2bd:  movb   $0x2,-0x91(%ebp)
08664344 +0x2c4:  movl   $0x14,-0x8b(%ebp)
0866434e +0x2ce:  movw   $0x0,-0x87(%ebp)
08664357 +0x2d7:  lea    -0x92(%ebp),%eax
0866435d +0x2dd:  mov    %eax,(%esp)
08664360 +0x2e0:  call   080cb892 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6df>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6df
08664365 +0x2e5:  mov    0x8(%ebp),%eax
08664368 +0x2e8:  mov    %eax,(%esp)
0866436b +0x2eb:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
08664370 +0x2f0:  mov    %eax,%esi
08664372 +0x2f2:  lea    -0x192(%ebp),%eax
08664378 +0x2f8:  mov    %eax,(%esp)
0866437b +0x2fb:  call   0807e3b0 <_init+0xca8>
08664380 +0x300:  mov    %eax,%edi
08664382 +0x302:  mov    0x8(%ebp),%eax
08664385 +0x305:  mov    %eax,(%esp)
08664388 +0x308:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0866438d +0x30d:  mov    %eax,%ebx
0866438f +0x30f:  movl   $0x0,0xc(%esp)
08664397 +0x317:  movl   $"game_server_msg_08",0x8(%esp)
0866439f +0x31f:  movl   $0x4,0x4(%esp)
086643a7 +0x327:  movl   $&g_scriptStringManager_,(%esp)
086643ae +0x32e:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
086643b3 +0x333:  movl   $0x0,0x24(%esp)
086643bb +0x33b:  movl   $0x0,0x20(%esp)
086643c3 +0x343:  mov    %esi,0x1c(%esp)
086643c7 +0x347:  movl   $0x0,0x18(%esp)
086643cf +0x34f:  mov    %edi,0x14(%esp)
086643d3 +0x353:  lea    -0x192(%ebp),%edx
086643d9 +0x359:  mov    %edx,0x10(%esp)
086643dd +0x35d:  mov    %ebx,0xc(%esp)
086643e1 +0x361:  movl   $0x0,0x8(%esp)
086643e9 +0x369:  lea    -0x92(%ebp),%edx
086643ef +0x36f:  mov    %edx,0x4(%esp)
086643f3 +0x373:  mov    %eax,(%esp)
086643f6 +0x376:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
086643fb +0x37b:  jmp    08664407 <+0x387>
086643fd +0x37d:  nop
086643fe +0x37e:  jmp    08664407 <+0x387>
08664400 +0x380:  nop
08664401 +0x381:  jmp    08664407 <+0x387>
08664403 +0x383:  nop
08664404 +0x384:  jmp    08664407 <+0x387>
08664406 +0x386:  nop
08664407 +0x387:  add    $0x1cc,%esp
0866440d +0x38d:  pop    %ebx
0866440e +0x38e:  pop    %esi
0866440f +0x38f:  pop    %edi
08664410 +0x390:  pop    %ebp
08664411 +0x391:  ret
```

## 反编译 C

```c
// CUser::_onChangeGrowType @ 0x8664080

/* CUser::_onChangeGrowType(unsigned char, unsigned char, eChangeGrowTypeReason) */

void __thiscall CUser::_onChangeGrowType(CUser *this,undefined4 param_1,char param_2,int param_4)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  size_t sVar9;
  undefined4 uVar10;
  CInventory *this_00;
  char local_196 [256];
  Inven_Item local_96;
  undefined1 local_95;
  undefined4 local_94;
  undefined4 local_8f;
  undefined2 local_8b;
  Inven_Item local_59 [73];
  
  piVar3 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x15);
  cVar2 = (**(code **)(*piVar3 + 0x34))(piVar3,0);
  if ((cVar2 != '\0') && (param_4 != 1)) {
    if (param_2 == '\0') {
      uVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
      uVar5 = get_acc_id(this);
      DB_InsertArchieveEventLog::makeRequest(uVar5,uVar4,10);
    }
    else {
      uVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
      uVar5 = get_acc_id(this);
      DB_InsertArchieveEventLog::makeRequest(uVar5,uVar4,0xb);
    }
  }
  iVar6 = G_CEnvironment();
  if ((*(int *)(iVar6 + 0x378) == 10) &&
     (uVar7 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_), uVar7 < 0x478e7051))
  {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    if (param_4 == 1) {
      return;
    }
    if (param_2 != '\0') {
      return;
    }
    pcVar8 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                "game_server_msg_13",(bool *)0x0);
    strncpy(local_196,pcVar8,0xff);
    Inven_Item::Inven_Item(local_59);
    uVar4 = GetServerGroup(this);
    sVar9 = strlen(local_196);
    uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
    uVar10 = RDARScriptStringManager::findString
                       ((RDARScriptStringManager *)g_scriptStringManager_,4,"game_server_msg_09",
                        (bool *)0x0);
    WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
              (uVar10,local_59,150000,uVar5,local_196,sVar9,0,uVar4,0,0);
  }
  cVar2 = isAffectedPremium(this,0x10);
  if ((cVar2 == '\0') ||
     (uVar7 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_), 0x46e1bbd0 < uVar7))
  {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (((bVar1) && (param_4 != 1)) && (param_2 == '\0')) {
    this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
    iVar6 = CInventory::GetInvenRef(this_00,0,0xb);
    if (*(int *)(iVar6 + 2) - 0x65d6U < 5) {
      pcVar8 = (char *)RDARScriptStringManager::findString
                                 ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                  "game_server_msg_07",(bool *)0x0);
      strncpy(local_196,pcVar8,0xff);
      Inven_Item::Inven_Item(&local_96);
      local_94 = 0x43d;
      local_95 = 2;
      local_8f = 0x14;
      local_8b = 0;
      Inven_Item::ResetItemAttr(&local_96);
      uVar4 = GetServerGroup(this);
      sVar9 = strlen(local_196);
      uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
      uVar10 = RDARScriptStringManager::findString
                         ((RDARScriptStringManager *)g_scriptStringManager_,4,"game_server_msg_08",
                          (bool *)0x0);
      WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                (uVar10,&local_96,0,uVar5,local_196,sVar9,0,uVar4,0,0);
    }
  }
  return;
}
```
