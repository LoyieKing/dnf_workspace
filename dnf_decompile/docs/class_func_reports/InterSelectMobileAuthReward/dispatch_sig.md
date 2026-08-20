# dispatch_sig

`_ZN27InterSelectMobileAuthReward12dispatch_sigEP5CUserPci`

`InterSelectMobileAuthReward::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `InterSelectMobileAuthReward` | `0x0816132a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816132a  _ZN27InterSelectMobileAuthReward12dispatch_sigEP5CUserPci
#           InterSelectMobileAuthReward::dispatch_sig(CUser*, char*, int)
# range [0x0816132a, 0x081615ad]
0816132a +0x000:  push   %ebp
0816132b +0x001:  mov    %esp,%ebp
0816132d +0x003:  push   %edi
0816132e +0x004:  push   %esi
0816132f +0x005:  push   %ebx
08161330 +0x006:  sub    $0x3ec,%esp
08161336 +0x00c:  mov    0x10(%ebp),%eax
08161339 +0x00f:  mov    %eax,-0x20(%ebp)
0816133c +0x012:  cmpl   $0x0,-0x20(%ebp)
08161340 +0x016:  jne    08161378 <+0x4e>
08161342 +0x018:  movl   $"[Taiwan, MobileAuth] interMsg is null.",0x10(%esp)
0816134a +0x020:  movl   $0x161,0xc(%esp)
08161352 +0x028:  movl   $&_ZZN27InterSelectMobileAuthReward12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
0816135a +0x030:  movl   $"localtaiwan/Dispatcher/Taiwan_InterDispatcher.cpp",0x4(%esp)
08161362 +0x038:  movl   $0x1,(%esp)
08161369 +0x03f:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0816136e +0x044:  mov    $0x162,%eax
08161373 +0x049:  jmp    081615a2 <+0x278>
08161378 +0x04e:  mov    -0x20(%ebp),%eax
0816137b +0x051:  movzbl 0x4(%eax),%eax
0816137f +0x055:  xor    $0x1,%eax
08161382 +0x058:  test   %al,%al
08161384 +0x05a:  jmp    0816158d <+0x263>
08161389 +0x05f:  add    %cl,0x489c445(%ebp)
0816138f +0x065:  and    $0xe8,%al
08161391 +0x067:  inc    %ecx
08161392 +0x068:  ss std
08161394 +0x06a:  inc    %edi
08161396 +0x06c:  inc    %ebp
08161397 +0x06d:  fadds  (%ecx)
08161399 +0x06f:  add    %al,(%eax)
0816139b +0x071:  add    %al,%bh
0816139d +0x073:  inc    %ebp
0816139e +0x074:  fdivrl (%edx)
081613a0 +0x076:  cwtl
081613a1 +0x077:  sub    %al,(%eax)
081613a3 +0x079:  lea    -0x28(%ebp),%eax
081613a6 +0x07c:  mov    %eax,0x8(%esp)
081613aa +0x080:  lea    -0x24(%ebp),%eax
081613ad +0x083:  mov    %eax,0x4(%esp)
081613b1 +0x087:  lea    -0x30(%ebp),%eax
081613b4 +0x08a:  mov    %eax,(%esp)
081613b7 +0x08d:  call   081627d4 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0xa42>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0xa42
081613bc +0x092:  lea    -0x30(%ebp),%eax
081613bf +0x095:  mov    %eax,0x4(%esp)
081613c3 +0x099:  lea    -0x3c(%ebp),%eax
081613c6 +0x09c:  mov    %eax,(%esp)
081613c9 +0x09f:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
081613ce +0x0a4:  movl   $0x0,0xc(%esp)
081613d6 +0x0ac:  movl   $"tw_mobile_authentication_title_01",0x8(%esp)
081613de +0x0b4:  movl   $0x4,0x4(%esp)
081613e6 +0x0bc:  movl   $&g_scriptStringManager_,(%esp)
081613ed +0x0c3:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
081613f2 +0x0c8:  movl   $0x1d,0x8(%esp)
081613fa +0x0d0:  mov    %eax,0x4(%esp)
081613fe +0x0d4:  lea    -0x5a(%ebp),%eax
08161401 +0x0d7:  mov    %eax,(%esp)
08161404 +0x0da:  call   0807d8d0 <_init+0x1c8>
08161409 +0x0df:  movl   $0x0,0xc(%esp)
08161411 +0x0e7:  movl   $"tw_mobile_authentication_mail_01",0x8(%esp)
08161419 +0x0ef:  movl   $0x4,0x4(%esp)
08161421 +0x0f7:  movl   $&g_scriptStringManager_,(%esp)
08161428 +0x0fe:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
0816142d +0x103:  movl   $0xff,0x8(%esp)
08161435 +0x10b:  mov    %eax,0x4(%esp)
08161439 +0x10f:  lea    -0x15a(%ebp),%eax
0816143f +0x115:  mov    %eax,(%esp)
08161442 +0x118:  call   0807d8d0 <_init+0x1c8>
08161447 +0x11d:  lea    -0x3bc(%ebp),%eax
0816144d +0x123:  mov    %eax,%ebx
0816144f +0x125:  mov    $0x9,%esi
08161454 +0x12a:  jmp    08161464 <+0x13a>
08161456 +0x12c:  mov    %ebx,(%esp)
08161459 +0x12f:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
0816145e +0x134:  add    $0x3d,%ebx
08161461 +0x137:  sub    $0x1,%esi
08161464 +0x13a:  cmp    $0xffffffff,%esi
08161467 +0x13d:  setne  %al
0816146a +0x140:  test   %al,%al
0816146c +0x142:  jne    08161456 <+0x12c>
0816146e +0x144:  movl   $0xa,0x8(%esp)
08161476 +0x14c:  lea    -0x3bc(%ebp),%eax
0816147c +0x152:  mov    %eax,0x4(%esp)
08161480 +0x156:  lea    -0x3c(%ebp),%eax
08161483 +0x159:  mov    %eax,(%esp)
08161486 +0x15c:  call   08556a14 <_ZN8WongWork14CMailBoxHelper25MakeSystemMultiMailPostalERSt6vectorISt4pairIiiESaIS3_EEP10Inven_Itemj>  ; WongWork::CMailBoxHelper::MakeSystemMultiMailPostal(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, Inven_Item*, unsigned int)
0816148b +0x161:  mov    0xc(%ebp),%eax
0816148e +0x164:  mov    %eax,(%esp)
08161491 +0x167:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
08161496 +0x16c:  mov    %eax,%esi
08161498 +0x16e:  lea    -0x15a(%ebp),%eax
0816149e +0x174:  mov    %eax,(%esp)
081614a1 +0x177:  call   0807e3b0 <_init+0xca8>
081614a6 +0x17c:  mov    %eax,%edi
081614a8 +0x17e:  mov    0xc(%ebp),%eax
081614ab +0x181:  mov    %eax,(%esp)
081614ae +0x184:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
081614b3 +0x189:  mov    %eax,%ebx
081614b5 +0x18b:  lea    -0x3c(%ebp),%eax
081614b8 +0x18e:  mov    %eax,(%esp)
081614bb +0x191:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
081614c0 +0x196:  movl   $0x0,0x24(%esp)
081614c8 +0x19e:  mov    %esi,0x20(%esp)
081614cc +0x1a2:  movl   $0x0,0x1c(%esp)
081614d4 +0x1aa:  mov    %edi,0x18(%esp)
081614d8 +0x1ae:  lea    -0x15a(%ebp),%edx
081614de +0x1b4:  mov    %edx,0x14(%esp)
081614e2 +0x1b8:  mov    %ebx,0x10(%esp)
081614e6 +0x1bc:  movl   $0x0,0xc(%esp)
081614ee +0x1c4:  mov    %eax,0x8(%esp)
081614f2 +0x1c8:  lea    -0x3bc(%ebp),%eax
081614f8 +0x1ce:  mov    %eax,0x4(%esp)
081614fc +0x1d2:  lea    -0x5a(%ebp),%eax
081614ff +0x1d5:  mov    %eax,(%esp)
08161502 +0x1d8:  call   08556b68 <_ZN8WongWork14CMailBoxHelper27ReqDBSendNewSystemMultiMailEPKcPK10Inven_ItemjjjS2_ij17ENUM_SERVER_GROUPb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMultiMail(char const*, Inven_Item const*, unsigned int, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool)
08161507 +0x1dd:  mov    &_ZN10GlobalData15s_event_managerE,%eax
0816150c +0x1e2:  movl   $0xa1,0x4(%esp)
08161514 +0x1ea:  mov    %eax,(%esp)
08161517 +0x1ed:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
0816151c +0x1f2:  mov    %eax,-0x1c(%ebp)
0816151f +0x1f5:  cmpl   $0x0,-0x1c(%ebp)
08161523 +0x1f9:  je     0816154a <+0x220>
08161525 +0x1fb:  mov    -0x1c(%ebp),%eax
08161528 +0x1fe:  mov    (%eax),%eax
0816152a +0x200:  add    $0x34,%eax
0816152d +0x203:  mov    (%eax),%edx
0816152f +0x205:  mov    -0x1c(%ebp),%eax
08161532 +0x208:  movl   $0x0,0x4(%esp)
0816153a +0x210:  mov    %eax,(%esp)
0816153d +0x213:  call   *%edx
0816153f +0x215:  test   %al,%al
08161541 +0x217:  je     0816154a <+0x220>
08161543 +0x219:  mov    $0x1,%eax
08161548 +0x21e:  jmp    0816154f <+0x225>
0816154a +0x220:  mov    $0x0,%eax
0816154f +0x225:  test   %al,%al
08161551 +0x227:  je     08161582 <+0x258>
08161553 +0x229:  mov    0xc(%ebp),%eax
08161556 +0x22c:  mov    %eax,0x4(%esp)
0816155a +0x230:  mov    -0x1c(%ebp),%eax
0816155d +0x233:  mov    %eax,(%esp)
08161560 +0x236:  call   0816471e <_ZN25CEventCeraShopRewardPoint10SendRewardEP5CUser>  ; CEventCeraShopRewardPoint::SendReward(CUser*)
08161565 +0x23b:  jmp    08161582 <+0x258>
08161567 +0x23d:  mov    %edx,%ebx
08161569 +0x23f:  mov    %eax,%esi
0816156b +0x241:  lea    -0x3c(%ebp),%eax
0816156e +0x244:  mov    %eax,(%esp)
08161571 +0x247:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08161576 +0x24c:  mov    %esi,%eax
08161578 +0x24e:  mov    %ebx,%edx
0816157a +0x250:  mov    %eax,(%esp)
0816157d +0x253:  call   08ae3750 <_Unwind_Resume>
08161582 +0x258:  lea    -0x3c(%ebp),%eax
08161585 +0x25b:  mov    %eax,(%esp)
08161588 +0x25e:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0816158d +0x263:  mov    -0x20(%ebp),%eax
08161590 +0x266:  movzbl 0x4(%eax),%edx
08161594 +0x26a:  mov    0xc(%ebp),%eax
08161597 +0x26d:  mov    %dl,0x8ec31(%eax)
0816159d +0x273:  mov    $0x0,%eax
081615a2 +0x278:  add    $0x3ec,%esp
081615a8 +0x27e:  pop    %ebx
081615a9 +0x27f:  pop    %esi
081615aa +0x280:  pop    %edi
081615ab +0x281:  pop    %ebp
081615ac +0x282:  ret
081615ad +0x283:  nop
```

## 反编译 C

```c
// InterSelectMobileAuthReward::dispatch_sig @ 0x816132a

/* InterSelectMobileAuthReward::dispatch_sig(CUser*, char*, int) */

undefined4 InterSelectMobileAuthReward::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 == 0) {
    LogManager::logFormat
              (1,"localtaiwan/Dispatcher/Taiwan_InterDispatcher.cpp",
               "virtual int InterSelectMobileAuthReward::dispatch_sig(CUser*, char*, int)",0x161,
               "[Taiwan, MobileAuth] interMsg is null.");
    uVar1 = 0x162;
  }
  else {
    param_2[0x8ec31] = *(char *)(param_3 + 4);
    uVar1 = 0;
  }
  return uVar1;
}
```
