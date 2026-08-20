# processAwakenReward

`_ZN5CUser19processAwakenRewardEc`

`CUser::processAwakenReward(char)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x086792d6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086792d6  _ZN5CUser19processAwakenRewardEc
#           CUser::processAwakenReward(char)
# range [0x086792d6, 0x086796db]
086792d6 +0x000:  push   %ebp
086792d7 +0x001:  mov    %esp,%ebp
086792d9 +0x003:  push   %esi
086792da +0x004:  push   %ebx
086792db +0x005:  sub    $0x1a0,%esp
086792e1 +0x00b:  mov    0xc(%ebp),%eax
086792e4 +0x00e:  mov    %al,-0x16c(%ebp)
086792ea +0x014:  movl   $0x3c0,-0x14(%ebp)
086792f1 +0x01b:  movl   $0x1,-0x10(%ebp)
086792f8 +0x022:  movsbl -0x16c(%ebp),%eax
086792ff +0x029:  cmp    $0x8,%eax
08679302 +0x02c:  ja     086796cd <+0x3f7>
08679308 +0x032:  mov    &data#83ae4ee8(.rodata)(,%eax,4),%eax
0867930f +0x039:  jmp    *%eax
08679311 +0x03b:  movl   $0x0,0xc(%esp)
08679319 +0x043:  movl   $"awaken_mail_msg_1",0x8(%esp)
08679321 +0x04b:  movl   $0x4,0x4(%esp)
08679329 +0x053:  movl   $&g_scriptStringManager_,(%esp)
08679330 +0x05a:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
08679335 +0x05f:  movl   $0xff,0x8(%esp)
0867933d +0x067:  mov    %eax,0x4(%esp)
08679341 +0x06b:  lea    -0x166(%ebp),%eax
08679347 +0x071:  mov    %eax,(%esp)
0867934a +0x074:  call   0807d8d0 <_init+0x1c8>
0867934f +0x079:  movl   $0x0,0xc(%esp)
08679357 +0x081:  movl   $"awaken_mail_title_1",0x8(%esp)
0867935f +0x089:  movl   $0x4,0x4(%esp)
08679367 +0x091:  movl   $&g_scriptStringManager_,(%esp)
0867936e +0x098:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
08679373 +0x09d:  movl   $0x14,0x8(%esp)
0867937b +0x0a5:  mov    %eax,0x4(%esp)
0867937f +0x0a9:  lea    -0x29(%ebp),%eax
08679382 +0x0ac:  mov    %eax,(%esp)
08679385 +0x0af:  call   0807d8d0 <_init+0x1c8>
0867938a +0x0b4:  jmp    086795fe <+0x328>
0867938f +0x0b9:  movl   $0x0,0xc(%esp)
08679397 +0x0c1:  movl   $"awaken_mail_msg_2",0x8(%esp)
0867939f +0x0c9:  movl   $0x4,0x4(%esp)
086793a7 +0x0d1:  movl   $&g_scriptStringManager_,(%esp)
086793ae +0x0d8:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
086793b3 +0x0dd:  movl   $0xff,0x8(%esp)
086793bb +0x0e5:  mov    %eax,0x4(%esp)
086793bf +0x0e9:  lea    -0x166(%ebp),%eax
086793c5 +0x0ef:  mov    %eax,(%esp)
086793c8 +0x0f2:  call   0807d8d0 <_init+0x1c8>
086793cd +0x0f7:  movl   $0x0,0xc(%esp)
086793d5 +0x0ff:  movl   $"awaken_mail_title_2",0x8(%esp)
086793dd +0x107:  movl   $0x4,0x4(%esp)
086793e5 +0x10f:  movl   $&g_scriptStringManager_,(%esp)
086793ec +0x116:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
086793f1 +0x11b:  movl   $0x14,0x8(%esp)
086793f9 +0x123:  mov    %eax,0x4(%esp)
086793fd +0x127:  lea    -0x29(%ebp),%eax
08679400 +0x12a:  mov    %eax,(%esp)
08679403 +0x12d:  call   0807d8d0 <_init+0x1c8>
08679408 +0x132:  jmp    086795fe <+0x328>
0867940d +0x137:  movl   $0x0,0xc(%esp)
08679415 +0x13f:  movl   $"awaken_mail_msg_3",0x8(%esp)
0867941d +0x147:  movl   $0x4,0x4(%esp)
08679425 +0x14f:  movl   $&g_scriptStringManager_,(%esp)
0867942c +0x156:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
08679431 +0x15b:  movl   $0xff,0x8(%esp)
08679439 +0x163:  mov    %eax,0x4(%esp)
0867943d +0x167:  lea    -0x166(%ebp),%eax
08679443 +0x16d:  mov    %eax,(%esp)
08679446 +0x170:  call   0807d8d0 <_init+0x1c8>
0867944b +0x175:  movl   $0x0,0xc(%esp)
08679453 +0x17d:  movl   $"awaken_mail_title_3",0x8(%esp)
0867945b +0x185:  movl   $0x4,0x4(%esp)
08679463 +0x18d:  movl   $&g_scriptStringManager_,(%esp)
0867946a +0x194:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
0867946f +0x199:  movl   $0x14,0x8(%esp)
08679477 +0x1a1:  mov    %eax,0x4(%esp)
0867947b +0x1a5:  lea    -0x29(%ebp),%eax
0867947e +0x1a8:  mov    %eax,(%esp)
08679481 +0x1ab:  call   0807d8d0 <_init+0x1c8>
08679486 +0x1b0:  jmp    086795fe <+0x328>
0867948b +0x1b5:  movl   $0x0,0xc(%esp)
08679493 +0x1bd:  movl   $"awaken_mail_msg_4",0x8(%esp)
0867949b +0x1c5:  movl   $0x4,0x4(%esp)
086794a3 +0x1cd:  movl   $&g_scriptStringManager_,(%esp)
086794aa +0x1d4:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
086794af +0x1d9:  movl   $0xff,0x8(%esp)
086794b7 +0x1e1:  mov    %eax,0x4(%esp)
086794bb +0x1e5:  lea    -0x166(%ebp),%eax
086794c1 +0x1eb:  mov    %eax,(%esp)
086794c4 +0x1ee:  call   0807d8d0 <_init+0x1c8>
086794c9 +0x1f3:  movl   $0x0,0xc(%esp)
086794d1 +0x1fb:  movl   $"awaken_mail_title_4",0x8(%esp)
086794d9 +0x203:  movl   $0x4,0x4(%esp)
086794e1 +0x20b:  movl   $&g_scriptStringManager_,(%esp)
086794e8 +0x212:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
086794ed +0x217:  movl   $0x14,0x8(%esp)
086794f5 +0x21f:  mov    %eax,0x4(%esp)
086794f9 +0x223:  lea    -0x29(%ebp),%eax
086794fc +0x226:  mov    %eax,(%esp)
086794ff +0x229:  call   0807d8d0 <_init+0x1c8>
08679504 +0x22e:  jmp    086795fe <+0x328>
08679509 +0x233:  movl   $0x0,0xc(%esp)
08679511 +0x23b:  movl   $"awaken_mail_msg_5",0x8(%esp)
08679519 +0x243:  movl   $0x4,0x4(%esp)
08679521 +0x24b:  movl   $&g_scriptStringManager_,(%esp)
08679528 +0x252:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
0867952d +0x257:  movl   $0xff,0x8(%esp)
08679535 +0x25f:  mov    %eax,0x4(%esp)
08679539 +0x263:  lea    -0x166(%ebp),%eax
0867953f +0x269:  mov    %eax,(%esp)
08679542 +0x26c:  call   0807d8d0 <_init+0x1c8>
08679547 +0x271:  movl   $0x0,0xc(%esp)
0867954f +0x279:  movl   $"awaken_mail_title_5",0x8(%esp)
08679557 +0x281:  movl   $0x4,0x4(%esp)
0867955f +0x289:  movl   $&g_scriptStringManager_,(%esp)
08679566 +0x290:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
0867956b +0x295:  movl   $0x14,0x8(%esp)
08679573 +0x29d:  mov    %eax,0x4(%esp)
08679577 +0x2a1:  lea    -0x29(%ebp),%eax
0867957a +0x2a4:  mov    %eax,(%esp)
0867957d +0x2a7:  call   0807d8d0 <_init+0x1c8>
08679582 +0x2ac:  jmp    086795fe <+0x328>
08679584 +0x2ae:  movl   $0x0,0xc(%esp)
0867958c +0x2b6:  movl   $"awaken_mail_msg_6",0x8(%esp)
08679594 +0x2be:  movl   $0x4,0x4(%esp)
0867959c +0x2c6:  movl   $&g_scriptStringManager_,(%esp)
086795a3 +0x2cd:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
086795a8 +0x2d2:  movl   $0xff,0x8(%esp)
086795b0 +0x2da:  mov    %eax,0x4(%esp)
086795b4 +0x2de:  lea    -0x166(%ebp),%eax
086795ba +0x2e4:  mov    %eax,(%esp)
086795bd +0x2e7:  call   0807d8d0 <_init+0x1c8>
086795c2 +0x2ec:  movl   $0x0,0xc(%esp)
086795ca +0x2f4:  movl   $"awaken_mail_title_6",0x8(%esp)
086795d2 +0x2fc:  movl   $0x4,0x4(%esp)
086795da +0x304:  movl   $&g_scriptStringManager_,(%esp)
086795e1 +0x30b:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
086795e6 +0x310:  movl   $0x14,0x8(%esp)
086795ee +0x318:  mov    %eax,0x4(%esp)
086795f2 +0x31c:  lea    -0x29(%ebp),%eax
086795f5 +0x31f:  mov    %eax,(%esp)
086795f8 +0x322:  call   0807d8d0 <_init+0x1c8>
086795fd +0x327:  nop
086795fe +0x328:  lea    -0x66(%ebp),%eax
08679601 +0x32b:  mov    %eax,(%esp)
08679604 +0x32e:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08679609 +0x333:  mov    -0x14(%ebp),%ebx
0867960c +0x336:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08679611 +0x33b:  mov    %ebx,0x4(%esp)
08679615 +0x33f:  mov    %eax,(%esp)
08679618 +0x342:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0867961d +0x347:  mov    %eax,-0xc(%ebp)
08679620 +0x34a:  cmpl   $0x0,-0xc(%ebp)
08679624 +0x34e:  je     086796d0 <+0x3fa>
0867962a +0x354:  mov    -0x14(%ebp),%eax
0867962d +0x357:  mov    %eax,-0x64(%ebp)
08679630 +0x35a:  mov    -0xc(%ebp),%eax
08679633 +0x35d:  mov    (%eax),%eax
08679635 +0x35f:  add    $0x8,%eax
08679638 +0x362:  mov    (%eax),%edx
0867963a +0x364:  lea    -0x66(%ebp),%eax
0867963d +0x367:  mov    %eax,0x4(%esp)
08679641 +0x36b:  mov    -0xc(%ebp),%eax
08679644 +0x36e:  mov    %eax,(%esp)
08679647 +0x371:  call   *%edx
08679649 +0x373:  mov    -0x10(%ebp),%eax
0867964c +0x376:  mov    %eax,0x4(%esp)
08679650 +0x37a:  lea    -0x66(%ebp),%eax
08679653 +0x37d:  mov    %eax,(%esp)
08679656 +0x380:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
0867965b +0x385:  mov    0x8(%ebp),%eax
0867965e +0x388:  mov    %eax,(%esp)
08679661 +0x38b:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
08679666 +0x390:  mov    %eax,%ebx
08679668 +0x392:  lea    -0x166(%ebp),%eax
0867966e +0x398:  mov    %eax,(%esp)
08679671 +0x39b:  call   0807e3b0 <_init+0xca8>
08679676 +0x3a0:  mov    %eax,%esi
08679678 +0x3a2:  mov    0x8(%ebp),%eax
0867967b +0x3a5:  mov    %eax,(%esp)
0867967e +0x3a8:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08679683 +0x3ad:  movl   $0x0,0x24(%esp)
0867968b +0x3b5:  movl   $0x0,0x20(%esp)
08679693 +0x3bd:  mov    %ebx,0x1c(%esp)
08679697 +0x3c1:  movl   $0xc,0x18(%esp)
0867969f +0x3c9:  mov    %esi,0x14(%esp)
086796a3 +0x3cd:  lea    -0x166(%ebp),%edx
086796a9 +0x3d3:  mov    %edx,0x10(%esp)
086796ad +0x3d7:  mov    %eax,0xc(%esp)
086796b1 +0x3db:  movl   $0x0,0x8(%esp)
086796b9 +0x3e3:  lea    -0x66(%ebp),%eax
086796bc +0x3e6:  mov    %eax,0x4(%esp)
086796c0 +0x3ea:  lea    -0x29(%ebp),%eax
086796c3 +0x3ed:  mov    %eax,(%esp)
086796c6 +0x3f0:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
086796cb +0x3f5:  jmp    086796d1 <+0x3fb>
086796cd +0x3f7:  nop
086796ce +0x3f8:  jmp    086796d1 <+0x3fb>
086796d0 +0x3fa:  nop
086796d1 +0x3fb:  add    $0x1a0,%esp
086796d7 +0x401:  pop    %ebx
086796d8 +0x402:  pop    %esi
086796d9 +0x403:  pop    %ebp
086796da +0x404:  ret
086796db +0x405:  nop
```

## 反编译 C

```c
// CUser::processAwakenReward @ 0x86792d6

/* CUser::processAwakenReward(char) */

void __thiscall CUser::processAwakenReward(CUser *this,char param_1)

{
  int iVar1;
  char *pcVar2;
  CDataManager *this_00;
  undefined4 uVar3;
  size_t sVar4;
  undefined4 uVar5;
  char local_16a [256];
  Inven_Item local_6a [2];
  int local_68;
  char local_2d [21];
  int local_18;
  int local_14;
  int *local_10;
  
  local_18 = 0x3c0;
  local_14 = 1;
  switch(param_1) {
  case '\0':
    pcVar2 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                "awaken_mail_msg_1",(bool *)0x0);
    strncpy(local_16a,pcVar2,0xff);
    pcVar2 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                "awaken_mail_title_1",(bool *)0x0);
    strncpy(local_2d,pcVar2,0x14);
    break;
  case '\x01':
  case '\a':
    pcVar2 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                "awaken_mail_msg_2",(bool *)0x0);
    strncpy(local_16a,pcVar2,0xff);
    pcVar2 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                "awaken_mail_title_2",(bool *)0x0);
    strncpy(local_2d,pcVar2,0x14);
    break;
  case '\x02':
  case '\x05':
    pcVar2 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                "awaken_mail_msg_3",(bool *)0x0);
    strncpy(local_16a,pcVar2,0xff);
    pcVar2 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                "awaken_mail_title_3",(bool *)0x0);
    strncpy(local_2d,pcVar2,0x14);
    break;
  case '\x03':
  case '\b':
    pcVar2 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                "awaken_mail_msg_4",(bool *)0x0);
    strncpy(local_16a,pcVar2,0xff);
    pcVar2 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                "awaken_mail_title_4",(bool *)0x0);
    strncpy(local_2d,pcVar2,0x14);
    break;
  case '\x04':
    pcVar2 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                "awaken_mail_msg_5",(bool *)0x0);
    strncpy(local_16a,pcVar2,0xff);
    pcVar2 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                "awaken_mail_title_5",(bool *)0x0);
    strncpy(local_2d,pcVar2,0x14);
    break;
  case '\x06':
    pcVar2 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                "awaken_mail_msg_6",(bool *)0x0);
    strncpy(local_16a,pcVar2,0xff);
    pcVar2 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                "awaken_mail_title_6",(bool *)0x0);
    strncpy(local_2d,pcVar2,0x14);
    break;
  default:
    goto switchD_0867930f_default;
  }
  Inven_Item::Inven_Item(local_6a);
  iVar1 = local_18;
  this_00 = (CDataManager *)G_CDataManager();
  local_10 = (int *)CDataManager::find_item(this_00,iVar1);
  if (local_10 != (int *)0x0) {
    local_68 = local_18;
    (**(code **)(*local_10 + 8))(local_10,local_6a);
    Inven_Item::set_add_info(local_6a,local_14);
    uVar3 = GetServerGroup(this);
    sVar4 = strlen(local_16a);
    uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
    WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
              (local_2d,local_6a,0,uVar5,local_16a,sVar4,0xc,uVar3,0,0);
  }
switchD_0867930f_default:
  return;
}
```
