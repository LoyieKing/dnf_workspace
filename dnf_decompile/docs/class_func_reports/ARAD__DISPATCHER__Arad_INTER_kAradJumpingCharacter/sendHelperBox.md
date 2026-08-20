# sendHelperBox

`_ZN4ARAD10DISPATCHER32Arad_INTER_kAradJumpingCharacter13sendHelperBoxEP5CUserhh`

`ARAD::DISPATCHER::Arad_INTER_kAradJumpingCharacter::sendHelperBox(CUser*, unsigned char, unsigned char)`

| 类 | 地址 |
|---|---|
| `ARAD::DISPATCHER::Arad_INTER_kAradJumpingCharacter` | `0x0819973e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0819973e  _ZN4ARAD10DISPATCHER32Arad_INTER_kAradJumpingCharacter13sendHelperBoxEP5CUserhh
#           ARAD::DISPATCHER::Arad_INTER_kAradJumpingCharacter::sendHelperBox(CUser*, unsigned char, unsigned char)
# range [0x0819973e, 0x081999f1]
0819973e +0x000:  push   %ebp
0819973f +0x001:  mov    %esp,%ebp
08199741 +0x003:  push   %edi
08199742 +0x004:  push   %esi
08199743 +0x005:  push   %ebx
08199744 +0x006:  sub    $0x1ac,%esp
0819974a +0x00c:  mov    0x10(%ebp),%edx
0819974d +0x00f:  mov    0x14(%ebp),%eax
08199750 +0x012:  mov    %dl,-0x17c(%ebp)
08199756 +0x018:  mov    %al,-0x180(%ebp)
0819975c +0x01e:  lea    -0x6e(%ebp),%eax
0819975f +0x021:  mov    %eax,(%esp)
08199762 +0x024:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08199767 +0x029:  cmpb   $0x1,-0x17c(%ebp)
0819976e +0x030:  jne    081997fc <+0xbe>
08199774 +0x036:  movzbl -0x180(%ebp),%eax
0819977b +0x03d:  mov    %eax,-0x1c(%ebp)
0819977e +0x040:  movl   $0x0,0xc(%esp)
08199786 +0x048:  movl   $"jumping_character_title_01",0x8(%esp)
0819978e +0x050:  movl   $0x4,0x4(%esp)
08199796 +0x058:  movl   $&g_scriptStringManager_,(%esp)
0819979d +0x05f:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
081997a2 +0x064:  movl   $0x14,0x8(%esp)
081997aa +0x06c:  mov    %eax,0x4(%esp)
081997ae +0x070:  lea    -0x31(%ebp),%eax
081997b1 +0x073:  mov    %eax,(%esp)
081997b4 +0x076:  call   0807d8d0 <_init+0x1c8>
081997b9 +0x07b:  movl   $0x0,0xc(%esp)
081997c1 +0x083:  movl   $"jumping_character_mail_01",0x8(%esp)
081997c9 +0x08b:  movl   $0x4,0x4(%esp)
081997d1 +0x093:  movl   $&g_scriptStringManager_,(%esp)
081997d8 +0x09a:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
081997dd +0x09f:  movl   $0xff,0x8(%esp)
081997e5 +0x0a7:  mov    %eax,0x4(%esp)
081997e9 +0x0ab:  lea    -0x16e(%ebp),%eax
081997ef +0x0b1:  mov    %eax,(%esp)
081997f2 +0x0b4:  call   0807d8d0 <_init+0x1c8>
081997f7 +0x0b9:  jmp    08199882 <+0x144>
081997fc +0x0be:  movzbl -0x180(%ebp),%eax
08199803 +0x0c5:  add    $0x10,%eax
08199806 +0x0c8:  mov    %eax,-0x1c(%ebp)
08199809 +0x0cb:  movl   $0x0,0xc(%esp)
08199811 +0x0d3:  movl   $"jumping_character_title_02",0x8(%esp)
08199819 +0x0db:  movl   $0x4,0x4(%esp)
08199821 +0x0e3:  movl   $&g_scriptStringManager_,(%esp)
08199828 +0x0ea:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
0819982d +0x0ef:  movl   $0x14,0x8(%esp)
08199835 +0x0f7:  mov    %eax,0x4(%esp)
08199839 +0x0fb:  lea    -0x31(%ebp),%eax
0819983c +0x0fe:  mov    %eax,(%esp)
0819983f +0x101:  call   0807d8d0 <_init+0x1c8>
08199844 +0x106:  movl   $0x0,0xc(%esp)
0819984c +0x10e:  movl   $"jumping_character_mail_02",0x8(%esp)
08199854 +0x116:  movl   $0x4,0x4(%esp)
0819985c +0x11e:  movl   $&g_scriptStringManager_,(%esp)
08199863 +0x125:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
08199868 +0x12a:  movl   $0xff,0x8(%esp)
08199870 +0x132:  mov    %eax,0x4(%esp)
08199874 +0x136:  lea    -0x16e(%ebp),%eax
0819987a +0x13c:  mov    %eax,(%esp)
0819987d +0x13f:  call   0807d8d0 <_init+0x1c8>
08199882 +0x144:  mov    0xc(%ebp),%eax
08199885 +0x147:  mov    %eax,(%esp)
08199888 +0x14a:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
0819988d +0x14f:  mov    %eax,%ebx
0819988f +0x151:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08199894 +0x156:  lea    0xb4c8(%eax),%edx
0819989a +0x15c:  lea    -0x6e(%ebp),%eax
0819989d +0x15f:  add    $0x2,%eax
081998a0 +0x162:  mov    %eax,0xc(%esp)
081998a4 +0x166:  mov    -0x1c(%ebp),%eax
081998a7 +0x169:  mov    %eax,0x8(%esp)
081998ab +0x16d:  mov    %ebx,0x4(%esp)
081998af +0x171:  mov    %edx,(%esp)
081998b2 +0x174:  call   088b424a <_ZN4ARAD6SCRIPT18AradJumping_Script16getCurRewardItemEiiRm>  ; ARAD::SCRIPT::AradJumping_Script::getCurRewardItem(int, int, unsigned long&)
081998b7 +0x179:  xor    $0x1,%eax
081998ba +0x17c:  test   %al,%al
081998bc +0x17e:  je     08199943 <+0x205>
081998c2 +0x184:  mov    0xc(%ebp),%eax
081998c5 +0x187:  mov    %eax,(%esp)
081998c8 +0x18a:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
081998cd +0x18f:  mov    %eax,%esi
081998cf +0x191:  movzbl -0x17c(%ebp),%edi
081998d6 +0x198:  movl   $0xffffffff,0x4(%esp)
081998de +0x1a0:  mov    0xc(%ebp),%eax
081998e1 +0x1a3:  mov    %eax,(%esp)
081998e4 +0x1a6:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
081998e9 +0x1ab:  mov    %eax,%ebx
081998eb +0x1ad:  mov    0xc(%ebp),%eax
081998ee +0x1b0:  mov    %eax,(%esp)
081998f1 +0x1b3:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081998f6 +0x1b8:  mov    -0x1c(%ebp),%edx
081998f9 +0x1bb:  mov    %edx,0x24(%esp)
081998fd +0x1bf:  mov    %esi,0x20(%esp)
08199901 +0x1c3:  mov    %edi,0x1c(%esp)
08199905 +0x1c7:  mov    %ebx,0x18(%esp)
08199909 +0x1cb:  mov    %eax,0x14(%esp)
0819990d +0x1cf:  movl   $"JUMPING CHARACTER : REWARD ERROR - m_id:%u, charac_no:%u, tickettype:%d, job:%d, growValue:%d",0x10(%esp)
08199915 +0x1d7:  movl   $0x5d5,0xc(%esp)
0819991d +0x1df:  movl   $&_ZZN4ARAD10DISPATCHER32Arad_INTER_kAradJumpingCharacter13sendHelperBoxEP5CUserhhE19__PRETTY_FUNCTION__,0x8(%esp)
08199925 +0x1e7:  movl   $"localjapan/Arad_InterDispatcher.cpp",0x4(%esp)
0819992d +0x1ef:  movl   $0x1,(%esp)
08199934 +0x1f6:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08199939 +0x1fb:  mov    $0x0,%eax
0819993e +0x200:  jmp    081999e6 <+0x2a8>
08199943 +0x205:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08199948 +0x20a:  mov    0xc(%eax),%eax
0819994b +0x20d:  movl   $0x1,0xc(%esp)
08199953 +0x215:  lea    -0x6e(%ebp),%edx
08199956 +0x218:  mov    %edx,0x8(%esp)
0819995a +0x21c:  movl   $0x0,0x4(%esp)
08199962 +0x224:  mov    %eax,(%esp)
08199965 +0x227:  call   08511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>  ; CItemList::create_item(ENUM_ITEM_CREATE_TYPE, Inven_Item&, int)
0819996a +0x22c:  movl   $0x1,-0x67(%ebp)
08199971 +0x233:  mov    0xc(%ebp),%eax
08199974 +0x236:  mov    %eax,(%esp)
08199977 +0x239:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
0819997c +0x23e:  mov    %eax,%ebx
0819997e +0x240:  lea    -0x16e(%ebp),%eax
08199984 +0x246:  mov    %eax,(%esp)
08199987 +0x249:  call   0807e3b0 <_init+0xca8>
0819998c +0x24e:  mov    %eax,%esi
0819998e +0x250:  mov    0xc(%ebp),%eax
08199991 +0x253:  mov    %eax,(%esp)
08199994 +0x256:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08199999 +0x25b:  movl   $0x0,0x24(%esp)
081999a1 +0x263:  movl   $0x0,0x20(%esp)
081999a9 +0x26b:  mov    %ebx,0x1c(%esp)
081999ad +0x26f:  movl   $0x0,0x18(%esp)
081999b5 +0x277:  mov    %esi,0x14(%esp)
081999b9 +0x27b:  lea    -0x16e(%ebp),%edx
081999bf +0x281:  mov    %edx,0x10(%esp)
081999c3 +0x285:  mov    %eax,0xc(%esp)
081999c7 +0x289:  movl   $&_ZL14gUnicodeBuffer+0xe174,0x8(%esp)
081999cf +0x291:  lea    -0x6e(%ebp),%eax
081999d2 +0x294:  mov    %eax,0x4(%esp)
081999d6 +0x298:  lea    -0x31(%ebp),%eax
081999d9 +0x29b:  mov    %eax,(%esp)
081999dc +0x29e:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
081999e1 +0x2a3:  mov    $0x1,%eax
081999e6 +0x2a8:  add    $0x1ac,%esp
081999ec +0x2ae:  pop    %ebx
081999ed +0x2af:  pop    %esi
081999ee +0x2b0:  pop    %edi
081999ef +0x2b1:  pop    %ebp
081999f0 +0x2b2:  ret
081999f1 +0x2b3:  nop
```

## 反编译 C

```c
// ARAD::DISPATCHER::Arad_INTER_kAradJumpingCharacter::sendHelperBox @ 0x819973e

/* ARAD::DISPATCHER::Arad_INTER_kAradJumpingCharacter::sendHelperBox(CUser*, unsigned char, unsigned
   char) */

bool __thiscall
ARAD::DISPATCHER::Arad_INTER_kAradJumpingCharacter::sendHelperBox
          (Arad_INTER_kAradJumpingCharacter *this,CUser *param_1,uchar param_2,uchar param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  size_t sVar8;
  char local_172 [256];
  Inven_Item local_72 [2];
  ulong uStack_70;
  undefined4 local_6b;
  char local_35 [21];
  uint local_20;
  
  Inven_Item::Inven_Item(local_72);
  if (param_2 == '\x01') {
    local_20 = (uint)param_3;
    pcVar2 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                "jumping_character_title_01",(bool *)0x0);
    strncpy(local_35,pcVar2,0x14);
    pcVar2 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                "jumping_character_mail_01",(bool *)0x0);
    strncpy(local_172,pcVar2,0xff);
  }
  else {
    local_20 = param_3 + 0x10;
    pcVar2 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                "jumping_character_title_02",(bool *)0x0);
    strncpy(local_35,pcVar2,0x14);
    pcVar2 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                "jumping_character_mail_02",(bool *)0x0);
    strncpy(local_172,pcVar2,0xff);
  }
  iVar3 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
  iVar4 = G_CDataManager();
  cVar1 = SCRIPT::AradJumping_Script::getCurRewardItem
                    ((AradJumping_Script *)(iVar4 + 0xb4c8),iVar3,local_20,&uStack_70);
  if (cVar1 == '\x01') {
    iVar3 = G_CDataManager();
    CItemList::create_item(*(CItemList **)(iVar3 + 0xc),0,local_72,1);
    local_6b = 1;
    uVar5 = CUser::GetServerGroup(param_1);
    sVar8 = strlen(local_172);
    uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
              (local_35,local_72,100000,uVar6,local_172,sVar8,0,uVar5,0,0);
  }
  else {
    uVar5 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
    uVar6 = CUser::get_charac_no(param_1,-1);
    uVar7 = CUser::get_acc_id(param_1);
    LogManager::logFormat
              (1,"localjapan/Arad_InterDispatcher.cpp",
               "bool ARAD::DISPATCHER::Arad_INTER_kAradJumpingCharacter::sendHelperBox(CUser*, byte, byte)"
               ,0x5d5,
               "JUMPING CHARACTER : REWARD ERROR - m_id:%u, charac_no:%u, tickettype:%d, job:%d, growValue:%d"
               ,uVar7,uVar6,(uint)param_2,uVar5,local_20);
  }
  return cVar1 == '\x01';
}
```
