# respond_special_item_skill_confirm

`_ZN18SpecialItemHandler34respond_special_item_skill_confirmEiRK19STSpecailItem_ParamR20STSpecailItem_Result`

`SpecialItemHandler::respond_special_item_skill_confirm(int, STSpecailItem_Param const&, STSpecailItem_Result&)`

| 类 | 地址 |
|---|---|
| `SpecialItemHandler` | `0x0827cdd0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827cdd0  _ZN18SpecialItemHandler34respond_special_item_skill_confirmEiRK19STSpecailItem_ParamR20STSpecailItem_Result
#           SpecialItemHandler::respond_special_item_skill_confirm(int, STSpecailItem_Param const&, STSpecailItem_Result&)
# range [0x0827cdd0, 0x0827ce7d]
0827cdd0 +0x00:  push   %ebp
0827cdd1 +0x01:  mov    %esp,%ebp
0827cdd3 +0x03:  push   %edi
0827cdd4 +0x04:  push   %esi
0827cdd5 +0x05:  push   %ebx
0827cdd6 +0x06:  sub    $0x4c,%esp
0827cdd9 +0x09:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
0827cdde +0x0e:  mov    %eax,(%esp)
0827cde1 +0x11:  call   08298e88 <_ZN12CGameManager22GetPremiumLetheManagerEv>  ; CGameManager::GetPremiumLetheManager()
0827cde6 +0x16:  mov    %eax,-0x1c(%ebp)
0827cde9 +0x19:  mov    0x10(%ebp),%eax
0827cdec +0x1c:  mov    (%eax),%eax
0827cdee +0x1e:  mov    %eax,(%esp)
0827cdf1 +0x21:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
0827cdf6 +0x26:  mov    %eax,%edi
0827cdf8 +0x28:  mov    0x10(%ebp),%eax
0827cdfb +0x2b:  mov    (%eax),%eax
0827cdfd +0x2d:  mov    %eax,(%esp)
0827ce00 +0x30:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0827ce05 +0x35:  mov    %eax,%esi
0827ce07 +0x37:  mov    0x10(%ebp),%eax
0827ce0a +0x3a:  mov    (%eax),%eax
0827ce0c +0x3c:  mov    %eax,(%esp)
0827ce0f +0x3f:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
0827ce14 +0x44:  mov    %eax,%ebx
0827ce16 +0x46:  movl   $0x0,0xc(%esp)
0827ce1e +0x4e:  movl   $0x1e1,0x8(%esp)
0827ce26 +0x56:  movl   $&_ZZN18SpecialItemHandler34respond_special_item_skill_confirmEiRK19STSpecailItem_ParamR20STSpecailItem_ResultE19__PRETTY_FUNCTION__,0x4(%esp)
0827ce2e +0x5e:  lea    -0x2c(%ebp),%eax
0827ce31 +0x61:  mov    %eax,(%esp)
0827ce34 +0x64:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0827ce39 +0x69:  mov    %edi,0x10(%esp)
0827ce3d +0x6d:  mov    %esi,0xc(%esp)
0827ce41 +0x71:  mov    %ebx,0x8(%esp)
0827ce45 +0x75:  movl   $"ONE_DAY_LETHE : BUY_SKILL_CONFIRM_TICKET, char(%s), char_no(%d), style(%d)",0x4(%esp)
0827ce4d +0x7d:  lea    -0x2c(%ebp),%eax
0827ce50 +0x80:  mov    %eax,(%esp)
0827ce53 +0x83:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0827ce58 +0x88:  cmpl   $0x0,-0x1c(%ebp)
0827ce5c +0x8c:  je     0827ce74 <+0xa4>
0827ce5e +0x8e:  mov    0x10(%ebp),%eax
0827ce61 +0x91:  mov    (%eax),%eax
0827ce63 +0x93:  mov    %eax,0x4(%esp)
0827ce67 +0x97:  mov    -0x1c(%ebp),%eax
0827ce6a +0x9a:  mov    %eax,(%esp)
0827ce6d +0x9d:  call   085c3d70 <_ZN20CPremiumLetheManager15ConfirmSkillReqEP5CUser>  ; CPremiumLetheManager::ConfirmSkillReq(CUser*)
0827ce72 +0xa2:  jmp    0827ce75 <+0xa5>
0827ce74 +0xa4:  nop
0827ce75 +0xa5:  add    $0x4c,%esp
0827ce78 +0xa8:  pop    %ebx
0827ce79 +0xa9:  pop    %esi
0827ce7a +0xaa:  pop    %edi
0827ce7b +0xab:  pop    %ebp
0827ce7c +0xac:  ret
0827ce7d +0xad:  nop
```

## 反编译 C

```c
// SpecialItemHandler::respond_special_item_skill_confirm @ 0x827cdd0

/* SpecialItemHandler::respond_special_item_skill_confirm(int, STSpecailItem_Param const&,
   STSpecailItem_Result&) */

void SpecialItemHandler::respond_special_item_skill_confirm
               (int param_1,STSpecailItem_Param *param_2,STSpecailItem_Result *param_3)

{
  CGameManager *this;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  cMyTrace local_30 [16];
  CPremiumLetheManager *local_20;
  
  this = (CGameManager *)G_CGameManager();
  local_20 = (CPremiumLetheManager *)CGameManager::GetPremiumLetheManager(this);
  uVar1 = CUserCharacInfo::GetCurCharacSkillTreeIndex(*(CUserCharacInfo **)param_3);
  uVar2 = CUserCharacInfo::getCurCharacNo(*(CUserCharacInfo **)param_3);
  uVar3 = CUserCharacInfo::getCurCharacName(*(CUserCharacInfo **)param_3);
  cMyTrace::cMyTrace(local_30,
                     "void SpecialItemHandler::respond_special_item_skill_confirm(int, const STSpecailItem_Param&, STSpecailItem_Result&)"
                     ,0x1e1,0);
  cMyTrace::operator()
            (local_30,"ONE_DAY_LETHE : BUY_SKILL_CONFIRM_TICKET, char(%s), char_no(%d), style(%d)",
             uVar3,uVar2,uVar1);
  if (local_20 != (CPremiumLetheManager *)0x0) {
    CPremiumLetheManager::ConfirmSkillReq(local_20,*(CUser **)param_3);
  }
  return;
}
```
