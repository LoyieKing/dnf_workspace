# rewardProcess

`_ZN24BaseHeroMissionCondition13rewardProcessEP5CUser`

`BaseHeroMissionCondition::rewardProcess(CUser*)`

| 类 | 地址 |
|---|---|
| `BaseHeroMissionCondition` | `0x0816502e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816502e  _ZN24BaseHeroMissionCondition13rewardProcessEP5CUser
#           BaseHeroMissionCondition::rewardProcess(CUser*)
# range [0x0816502e, 0x08165341]
0816502e +0x000:  push   %ebp
0816502f +0x001:  mov    %esp,%ebp
08165031 +0x003:  push   %edi
08165032 +0x004:  push   %esi
08165033 +0x005:  push   %ebx
08165034 +0x006:  sub    $0xcc,%esp
0816503a +0x00c:  mov    0x8(%ebp),%eax
0816503d +0x00f:  lea    0x1c(%eax),%edx
08165040 +0x012:  lea    -0x3c(%ebp),%eax
08165043 +0x015:  mov    %edx,0x4(%esp)
08165047 +0x019:  mov    %eax,(%esp)
0816504a +0x01c:  call   08168434 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x295>  ; global constructors keyed to HeroMissionValue::clear()+0x295
0816504f +0x021:  sub    $0x4,%esp
08165052 +0x024:  mov    0x8(%ebp),%eax
08165055 +0x027:  lea    0x1c(%eax),%edx
08165058 +0x02a:  lea    -0x40(%ebp),%eax
0816505b +0x02d:  mov    %edx,0x4(%esp)
0816505f +0x031:  mov    %eax,(%esp)
08165062 +0x034:  call   08168458 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x2b9>  ; global constructors keyed to HeroMissionValue::clear()+0x2b9
08165067 +0x039:  sub    $0x4,%esp
0816506a +0x03c:  jmp    08165317 <+0x2e9>
0816506f +0x041:  lea    -0x3c(%ebp),%eax
08165072 +0x044:  mov    %eax,(%esp)
08165075 +0x047:  call   081684c0 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x321>  ; global constructors keyed to HeroMissionValue::clear()+0x321
0816507a +0x04c:  mov    (%eax),%eax
0816507c +0x04e:  mov    %eax,%ebx
0816507e +0x050:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08165083 +0x055:  mov    %ebx,0x4(%esp)
08165087 +0x059:  mov    %eax,(%esp)
0816508a +0x05c:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0816508f +0x061:  mov    %eax,-0x28(%ebp)
08165092 +0x064:  cmpl   $0x0,-0x28(%ebp)
08165096 +0x068:  jne    0816510e <+0xe0>
08165098 +0x06a:  lea    -0x3c(%ebp),%eax
0816509b +0x06d:  mov    %eax,(%esp)
0816509e +0x070:  call   081684c0 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x321>  ; global constructors keyed to HeroMissionValue::clear()+0x321
081650a3 +0x075:  mov    (%eax),%edi
081650a5 +0x077:  mov    0x8(%ebp),%eax
081650a8 +0x07a:  mov    0x4(%eax),%eax
081650ab +0x07d:  mov    %eax,%esi
081650ad +0x07f:  movl   $0xffffffff,0x4(%esp)
081650b5 +0x087:  mov    0xc(%ebp),%eax
081650b8 +0x08a:  mov    %eax,(%esp)
081650bb +0x08d:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
081650c0 +0x092:  mov    %eax,%ebx
081650c2 +0x094:  movl   $0x5,0xc(%esp)
081650ca +0x09c:  movl   $0x6e,0x8(%esp)
081650d2 +0x0a4:  movl   $&_ZZN24BaseHeroMissionCondition13rewardProcessEP5CUserE19__PRETTY_FUNCTION__,0x4(%esp)
081650da +0x0ac:  lea    -0x38(%ebp),%eax
081650dd +0x0af:  mov    %eax,(%esp)
081650e0 +0x0b2:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081650e5 +0x0b7:  mov    %edi,0x10(%esp)
081650e9 +0x0bb:  mov    %esi,0xc(%esp)
081650ed +0x0bf:  mov    %ebx,0x8(%esp)
081650f1 +0x0c3:  movl   $"[HeroMission] Invalid item. (charac:%u, mission:%d, item:%u)",0x4(%esp)
081650f9 +0x0cb:  lea    -0x38(%ebp),%eax
081650fc +0x0ce:  mov    %eax,(%esp)
081650ff +0x0d1:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08165104 +0x0d6:  mov    $0x0,%eax
08165109 +0x0db:  jmp    08165336 <+0x308>
0816510e +0x0e0:  lea    -0x7d(%ebp),%eax
08165111 +0x0e3:  mov    %eax,(%esp)
08165114 +0x0e6:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08165119 +0x0eb:  lea    -0x3c(%ebp),%eax
0816511c +0x0ee:  mov    %eax,(%esp)
0816511f +0x0f1:  call   081684c0 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x321>  ; global constructors keyed to HeroMissionValue::clear()+0x321
08165124 +0x0f6:  mov    (%eax),%eax
08165126 +0x0f8:  mov    %eax,-0x7b(%ebp)
08165129 +0x0fb:  mov    -0x28(%ebp),%eax
0816512c +0x0fe:  mov    (%eax),%eax
0816512e +0x100:  add    $0x8,%eax
08165131 +0x103:  mov    (%eax),%edx
08165133 +0x105:  lea    -0x7d(%ebp),%eax
08165136 +0x108:  mov    %eax,0x4(%esp)
0816513a +0x10c:  mov    -0x28(%ebp),%eax
0816513d +0x10f:  mov    %eax,(%esp)
08165140 +0x112:  call   *%edx
08165142 +0x114:  lea    -0x3c(%ebp),%eax
08165145 +0x117:  mov    %eax,(%esp)
08165148 +0x11a:  call   081684c0 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x321>  ; global constructors keyed to HeroMissionValue::clear()+0x321
0816514d +0x11f:  movzwl 0x4(%eax),%eax
08165151 +0x123:  movzwl %ax,%eax
08165154 +0x126:  mov    %eax,0x4(%esp)
08165158 +0x12a:  lea    -0x7d(%ebp),%eax
0816515b +0x12d:  mov    %eax,(%esp)
0816515e +0x130:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
08165163 +0x135:  movw   $0xffff,-0x22(%ebp)
08165169 +0x13b:  mov    0xc(%ebp),%eax
0816516c +0x13e:  mov    %eax,(%esp)
0816516f +0x141:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08165174 +0x146:  movl   $0x1,0x4c(%esp)
0816517c +0x14e:  movl   $0x1,0x48(%esp)
08165184 +0x156:  movl   $0xd,0x44(%esp)
0816518c +0x15e:  mov    -0x7d(%ebp),%edx
0816518f +0x161:  mov    %edx,0x4(%esp)
08165193 +0x165:  mov    -0x79(%ebp),%edx
08165196 +0x168:  mov    %edx,0x8(%esp)
0816519a +0x16c:  mov    -0x75(%ebp),%edx
0816519d +0x16f:  mov    %edx,0xc(%esp)
081651a1 +0x173:  mov    -0x71(%ebp),%edx
081651a4 +0x176:  mov    %edx,0x10(%esp)
081651a8 +0x17a:  mov    -0x6d(%ebp),%edx
081651ab +0x17d:  mov    %edx,0x14(%esp)
081651af +0x181:  mov    -0x69(%ebp),%edx
081651b2 +0x184:  mov    %edx,0x18(%esp)
081651b6 +0x188:  mov    -0x65(%ebp),%edx
081651b9 +0x18b:  mov    %edx,0x1c(%esp)
081651bd +0x18f:  mov    -0x61(%ebp),%edx
081651c0 +0x192:  mov    %edx,0x20(%esp)
081651c4 +0x196:  mov    -0x5d(%ebp),%edx
081651c7 +0x199:  mov    %edx,0x24(%esp)
081651cb +0x19d:  mov    -0x59(%ebp),%edx
081651ce +0x1a0:  mov    %edx,0x28(%esp)
081651d2 +0x1a4:  mov    -0x55(%ebp),%edx
081651d5 +0x1a7:  mov    %edx,0x2c(%esp)
081651d9 +0x1ab:  mov    -0x51(%ebp),%edx
081651dc +0x1ae:  mov    %edx,0x30(%esp)
081651e0 +0x1b2:  mov    -0x4d(%ebp),%edx
081651e3 +0x1b5:  mov    %edx,0x34(%esp)
081651e7 +0x1b9:  mov    -0x49(%ebp),%edx
081651ea +0x1bc:  mov    %edx,0x38(%esp)
081651ee +0x1c0:  mov    -0x45(%ebp),%edx
081651f1 +0x1c3:  mov    %edx,0x3c(%esp)
081651f5 +0x1c7:  movzbl -0x41(%ebp),%edx
081651f9 +0x1cb:  mov    %dl,0x40(%esp)
081651fd +0x1cf:  mov    %eax,(%esp)
08165200 +0x1d2:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
08165205 +0x1d7:  mov    %ax,-0x22(%ebp)
08165209 +0x1db:  cmpw   $0x0,-0x22(%ebp)
0816520e +0x1e0:  js     08165238 <+0x20a>
08165210 +0x1e2:  movswl -0x22(%ebp),%eax
08165214 +0x1e6:  mov    %eax,0xc(%esp)
08165218 +0x1ea:  movl   $0x0,0x8(%esp)
08165220 +0x1f2:  movl   $0x1,0x4(%esp)
08165228 +0x1fa:  mov    0xc(%ebp),%eax
0816522b +0x1fd:  mov    %eax,(%esp)
0816522e +0x200:  call   0867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItem(CUser::eSendTarget, ENUM_ITEMSPACE, int)
08165233 +0x205:  jmp    0816530c <+0x2de>
08165238 +0x20a:  mov    0x8(%ebp),%eax
0816523b +0x20d:  add    $0x14,%eax
0816523e +0x210:  mov    %eax,(%esp)
08165241 +0x213:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08165246 +0x218:  movl   $0x0,0xc(%esp)
0816524e +0x220:  mov    %eax,0x8(%esp)
08165252 +0x224:  movl   $0x4,0x4(%esp)
0816525a +0x22c:  movl   $&g_scriptStringManager_,(%esp)
08165261 +0x233:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
08165266 +0x238:  mov    %eax,-0x20(%ebp)
08165269 +0x23b:  mov    0x8(%ebp),%eax
0816526c +0x23e:  add    $0x18,%eax
0816526f +0x241:  mov    %eax,(%esp)
08165272 +0x244:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08165277 +0x249:  movl   $0x0,0xc(%esp)
0816527f +0x251:  mov    %eax,0x8(%esp)
08165283 +0x255:  movl   $0x4,0x4(%esp)
0816528b +0x25d:  movl   $&g_scriptStringManager_,(%esp)
08165292 +0x264:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
08165297 +0x269:  mov    %eax,-0x1c(%ebp)
0816529a +0x26c:  mov    0xc(%ebp),%eax
0816529d +0x26f:  mov    %eax,(%esp)
081652a0 +0x272:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
081652a5 +0x277:  mov    %eax,%ebx
081652a7 +0x279:  mov    -0x1c(%ebp),%eax
081652aa +0x27c:  mov    %eax,(%esp)
081652ad +0x27f:  call   0807e3b0 <_init+0xca8>
081652b2 +0x284:  mov    %eax,%esi
081652b4 +0x286:  movl   $0xffffffff,0x4(%esp)
081652bc +0x28e:  mov    0xc(%ebp),%eax
081652bf +0x291:  mov    %eax,(%esp)
081652c2 +0x294:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
081652c7 +0x299:  movl   $0x0,0x24(%esp)
081652cf +0x2a1:  movl   $0x0,0x20(%esp)
081652d7 +0x2a9:  mov    %ebx,0x1c(%esp)
081652db +0x2ad:  movl   $0x0,0x18(%esp)
081652e3 +0x2b5:  mov    %esi,0x14(%esp)
081652e7 +0x2b9:  mov    -0x1c(%ebp),%edx
081652ea +0x2bc:  mov    %edx,0x10(%esp)
081652ee +0x2c0:  mov    %eax,0xc(%esp)
081652f2 +0x2c4:  movl   $0x0,0x8(%esp)
081652fa +0x2cc:  lea    -0x7d(%ebp),%eax
081652fd +0x2cf:  mov    %eax,0x4(%esp)
08165301 +0x2d3:  mov    -0x20(%ebp),%eax
08165304 +0x2d6:  mov    %eax,(%esp)
08165307 +0x2d9:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
0816530c +0x2de:  lea    -0x3c(%ebp),%eax
0816530f +0x2e1:  mov    %eax,(%esp)
08165312 +0x2e4:  call   081684aa <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x30b>  ; global constructors keyed to HeroMissionValue::clear()+0x30b
08165317 +0x2e9:  lea    -0x40(%ebp),%eax
0816531a +0x2ec:  mov    %eax,0x4(%esp)
0816531e +0x2f0:  lea    -0x3c(%ebp),%eax
08165321 +0x2f3:  mov    %eax,(%esp)
08165324 +0x2f6:  call   0816847e <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x2df>  ; global constructors keyed to HeroMissionValue::clear()+0x2df
08165329 +0x2fb:  test   %al,%al
0816532b +0x2fd:  jne    0816506f <+0x41>
08165331 +0x303:  mov    $0x1,%eax
08165336 +0x308:  lea    -0xc(%ebp),%esp
08165339 +0x30b:  add    $0x0,%esp
0816533c +0x30e:  pop    %ebx
0816533d +0x30f:  pop    %esi
0816533e +0x310:  pop    %edi
0816533f +0x311:  pop    %ebp
08165340 +0x312:  ret
08165341 +0x313:  nop
```

## 反编译 C

```c
// BaseHeroMissionCondition::rewardProcess @ 0x816502e

/* BaseHeroMissionCondition::rewardProcess(CUser*) */

undefined4 __thiscall
BaseHeroMissionCondition::rewardProcess(BaseHeroMissionCondition *this,CUser *param_1)

{
  bool bVar1;
  int *piVar2;
  CDataManager *this_00;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  size_t sVar8;
  undefined4 uVar9;
  undefined2 local_81;
  undefined2 uStack_7f;
  undefined2 uStack_7d;
  undefined2 uStack_7b;
  undefined4 local_79;
  undefined4 local_75;
  undefined4 local_71;
  undefined4 local_6d;
  undefined4 local_69;
  undefined4 local_65;
  undefined4 local_61;
  undefined4 local_5d;
  undefined4 local_59;
  undefined4 local_55;
  undefined4 local_51;
  undefined4 local_4d;
  undefined4 local_49;
  undefined1 local_45;
  __normal_iterator local_44 [4];
  __normal_iterator<HeroMissionCondition::RewardData*,std::vector<HeroMissionCondition::RewardData,std::allocator<HeroMissionCondition::RewardData>>>
  local_40 [4];
  cMyTrace local_3c [16];
  int *local_2c;
  short local_26;
  undefined4 local_24;
  char *local_20;
  
  std::vector<HeroMissionCondition::RewardData,std::allocator<HeroMissionCondition::RewardData>>::
  begin();
  std::vector<HeroMissionCondition::RewardData,std::allocator<HeroMissionCondition::RewardData>>::
  end();
  while( true ) {
    bVar1 = __gnu_cxx::operator!=(local_40,local_44);
    if (!bVar1) {
      return 1;
    }
    piVar2 = (int *)__gnu_cxx::
                    __normal_iterator<HeroMissionCondition::RewardData*,std::vector<HeroMissionCondition::RewardData,std::allocator<HeroMissionCondition::RewardData>>>
                    ::operator->(local_40);
    iVar5 = *piVar2;
    this_00 = (CDataManager *)G_CDataManager();
    local_2c = (int *)CDataManager::find_item(this_00,iVar5);
    if (local_2c == (int *)0x0) break;
    Inven_Item::Inven_Item((Inven_Item *)&local_81);
    puVar3 = (undefined4 *)
             __gnu_cxx::
             __normal_iterator<HeroMissionCondition::RewardData*,std::vector<HeroMissionCondition::RewardData,std::allocator<HeroMissionCondition::RewardData>>>
             ::operator->(local_40);
    uStack_7f = (undefined2)*puVar3;
    uStack_7d = (undefined2)((uint)*puVar3 >> 0x10);
    (**(code **)(*local_2c + 8))(local_2c,&local_81);
    iVar5 = __gnu_cxx::
            __normal_iterator<HeroMissionCondition::RewardData*,std::vector<HeroMissionCondition::RewardData,std::allocator<HeroMissionCondition::RewardData>>>
            ::operator->(local_40);
    Inven_Item::set_add_info((Inven_Item *)&local_81,(uint)*(ushort *)(iVar5 + 4));
    local_26 = 0xffff;
    uVar6 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    local_26 = CInventory::insertItemIntoInventory
                         (uVar6,CONCAT22(uStack_7f,local_81),CONCAT22(uStack_7b,uStack_7d),local_79,
                          local_75,local_71,local_6d,local_69,local_65,local_61,local_5d,local_59,
                          local_55,local_51,local_4d,local_49,local_45,0xd,1,1);
    if (local_26 < 0) {
      pcVar7 = (char *)std::string::c_str((string *)(this + 0x14));
      local_24 = RDARScriptStringManager::findString
                           ((RDARScriptStringManager *)g_scriptStringManager_,4,pcVar7,(bool *)0x0);
      pcVar7 = (char *)std::string::c_str((string *)(this + 0x18));
      local_20 = (char *)RDARScriptStringManager::findString
                                   ((RDARScriptStringManager *)g_scriptStringManager_,4,pcVar7,
                                    (bool *)0x0);
      uVar6 = CUser::GetServerGroup(param_1);
      sVar8 = strlen(local_20);
      uVar9 = CUser::get_charac_no(param_1,-1);
      WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                (local_24,&local_81,0,uVar9,local_20,sVar8,0,uVar6,0,0);
    }
    else {
      CUser::SendUpdateItem(param_1,1,0,(int)local_26);
    }
    __gnu_cxx::
    __normal_iterator<HeroMissionCondition::RewardData*,std::vector<HeroMissionCondition::RewardData,std::allocator<HeroMissionCondition::RewardData>>>
    ::operator++(local_40);
  }
  puVar3 = (undefined4 *)
           __gnu_cxx::
           __normal_iterator<HeroMissionCondition::RewardData*,std::vector<HeroMissionCondition::RewardData,std::allocator<HeroMissionCondition::RewardData>>>
           ::operator->(local_40);
  uVar6 = *puVar3;
  uVar9 = *(undefined4 *)(this + 4);
  uVar4 = CUser::get_charac_no(param_1,-1);
  cMyTrace::cMyTrace(local_3c,"bool BaseHeroMissionCondition::rewardProcess(CUser*)",0x6e,5);
  cMyTrace::operator()
            (local_3c,"[HeroMission] Invalid item. (charac:%u, mission:%d, item:%u)",uVar4,uVar9,
             uVar6);
  return 0;
}
```
