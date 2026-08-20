# processMission

`_ZN14LevelUpMission14processMissionEP5CUserR16HeroMissionValuej`

`LevelUpMission::processMission(CUser*, HeroMissionValue&, unsigned int)`

| 类 | 地址 |
|---|---|
| `LevelUpMission` | `0x08165c1e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08165c1e  _ZN14LevelUpMission14processMissionEP5CUserR16HeroMissionValuej
#           LevelUpMission::processMission(CUser*, HeroMissionValue&, unsigned int)
# range [0x08165c1e, 0x08165f85]
08165c1e +0x000:  push   %ebp
08165c1f +0x001:  mov    %esp,%ebp
08165c21 +0x003:  push   %edi
08165c22 +0x004:  push   %esi
08165c23 +0x005:  push   %ebx
08165c24 +0x006:  sub    $0xac,%esp
08165c2a +0x00c:  mov    0x8(%ebp),%eax
08165c2d +0x00f:  add    $0x28,%eax
08165c30 +0x012:  movl   $0x0,0x4(%esp)
08165c38 +0x01a:  mov    %eax,(%esp)
08165c3b +0x01d:  call   081684ca <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x32b>  ; global constructors keyed to HeroMissionValue::clear()+0x32b
08165c40 +0x022:  movzwl (%eax),%eax
08165c43 +0x025:  movzwl %ax,%ebx
08165c46 +0x028:  mov    0xc(%ebp),%eax
08165c49 +0x02b:  mov    %eax,(%esp)
08165c4c +0x02e:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08165c51 +0x033:  cmp    %eax,%ebx
08165c53 +0x035:  setg   %al
08165c56 +0x038:  test   %al,%al
08165c58 +0x03a:  jne    08165f76 <+0x358>
08165c5e +0x040:  mov    0x8(%ebp),%eax
08165c61 +0x043:  mov    %eax,(%esp)
08165c64 +0x046:  call   08164fc2 <_ZN24BaseHeroMissionCondition15isRepeatMissionEv>  ; BaseHeroMissionCondition::isRepeatMission()
08165c69 +0x04b:  xor    $0x1,%eax
08165c6c +0x04e:  test   %al,%al
08165c6e +0x050:  je     08165c83 <+0x65>
08165c70 +0x052:  mov    0x10(%ebp),%eax
08165c73 +0x055:  movzwl 0xa(%eax),%eax
08165c77 +0x059:  test   %ax,%ax
08165c7a +0x05c:  je     08165c83 <+0x65>
08165c7c +0x05e:  mov    $0x1,%eax
08165c81 +0x063:  jmp    08165c88 <+0x6a>
08165c83 +0x065:  mov    $0x0,%eax
08165c88 +0x06a:  test   %al,%al
08165c8a +0x06c:  jne    08165f79 <+0x35b>
08165c90 +0x072:  mov    0x10(%ebp),%eax
08165c93 +0x075:  movzwl 0x8(%eax),%eax
08165c97 +0x079:  movzwl %ax,%ebx
08165c9a +0x07c:  mov    0xc(%ebp),%eax
08165c9d +0x07f:  mov    %eax,(%esp)
08165ca0 +0x082:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08165ca5 +0x087:  cmp    %eax,%ebx
08165ca7 +0x089:  setge  %al
08165caa +0x08c:  test   %al,%al
08165cac +0x08e:  je     08165d0f <+0xf1>
08165cae +0x090:  mov    0x10(%ebp),%eax
08165cb1 +0x093:  movzwl 0x8(%eax),%eax
08165cb5 +0x097:  movzwl %ax,%esi
08165cb8 +0x09a:  mov    0x10(%ebp),%eax
08165cbb +0x09d:  mov    (%eax),%eax
08165cbd +0x09f:  mov    %eax,%ebx
08165cbf +0x0a1:  movl   $0xffffffff,0x4(%esp)
08165cc7 +0x0a9:  mov    0xc(%ebp),%eax
08165cca +0x0ac:  mov    %eax,(%esp)
08165ccd +0x0af:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
08165cd2 +0x0b4:  mov    %esi,0x1c(%esp)
08165cd6 +0x0b8:  mov    %ebx,0x18(%esp)
08165cda +0x0bc:  mov    %eax,0x14(%esp)
08165cde +0x0c0:  movl   $"[HeroMission] Invalid reward condition. (charac:%u,mission:%d,value:%d)",0x10(%esp)
08165ce6 +0x0c8:  movl   $0x145,0xc(%esp)
08165cee +0x0d0:  movl   $&_ZZN14LevelUpMission14processMissionEP5CUserR16HeroMissionValuejE19__PRETTY_FUNCTION__,0x8(%esp)
08165cf6 +0x0d8:  movl   $"localtaiwan/Event/EventHeroMission.cpp",0x4(%esp)
08165cfe +0x0e0:  movl   $0x1,(%esp)
08165d05 +0x0e7:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08165d0a +0x0ec:  jmp    08165f7a <+0x35c>
08165d0f +0x0f1:  mov    0x8(%ebp),%eax
08165d12 +0x0f4:  lea    0x1c(%eax),%edx
08165d15 +0x0f7:  lea    -0x38(%ebp),%eax
08165d18 +0x0fa:  mov    %edx,0x4(%esp)
08165d1c +0x0fe:  mov    %eax,(%esp)
08165d1f +0x101:  call   08168434 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x295>  ; global constructors keyed to HeroMissionValue::clear()+0x295
08165d24 +0x106:  sub    $0x4,%esp
08165d27 +0x109:  mov    0x8(%ebp),%eax
08165d2a +0x10c:  lea    0x1c(%eax),%edx
08165d2d +0x10f:  lea    -0x3c(%ebp),%eax
08165d30 +0x112:  mov    %edx,0x4(%esp)
08165d34 +0x116:  mov    %eax,(%esp)
08165d37 +0x119:  call   08168458 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x2b9>  ; global constructors keyed to HeroMissionValue::clear()+0x2b9
08165d3c +0x11e:  sub    $0x4,%esp
08165d3f +0x121:  jmp    08165f12 <+0x2f4>
08165d44 +0x126:  lea    -0x38(%ebp),%eax
08165d47 +0x129:  mov    %eax,(%esp)
08165d4a +0x12c:  call   081684c0 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x321>  ; global constructors keyed to HeroMissionValue::clear()+0x321
08165d4f +0x131:  mov    (%eax),%eax
08165d51 +0x133:  mov    %eax,%ebx
08165d53 +0x135:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08165d58 +0x13a:  mov    %ebx,0x4(%esp)
08165d5c +0x13e:  mov    %eax,(%esp)
08165d5f +0x141:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08165d64 +0x146:  mov    %eax,-0x24(%ebp)
08165d67 +0x149:  cmpl   $0x0,-0x24(%ebp)
08165d6b +0x14d:  jne    08165dde <+0x1c0>
08165d6d +0x14f:  lea    -0x38(%ebp),%eax
08165d70 +0x152:  mov    %eax,(%esp)
08165d73 +0x155:  call   081684c0 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x321>  ; global constructors keyed to HeroMissionValue::clear()+0x321
08165d78 +0x15a:  mov    (%eax),%edi
08165d7a +0x15c:  mov    0x8(%ebp),%eax
08165d7d +0x15f:  mov    0x4(%eax),%eax
08165d80 +0x162:  mov    %eax,%esi
08165d82 +0x164:  movl   $0xffffffff,0x4(%esp)
08165d8a +0x16c:  mov    0xc(%ebp),%eax
08165d8d +0x16f:  mov    %eax,(%esp)
08165d90 +0x172:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
08165d95 +0x177:  mov    %eax,%ebx
08165d97 +0x179:  movl   $0x5,0xc(%esp)
08165d9f +0x181:  movl   $0x150,0x8(%esp)
08165da7 +0x189:  movl   $&_ZZN14LevelUpMission14processMissionEP5CUserR16HeroMissionValuejE19__PRETTY_FUNCTION__,0x4(%esp)
08165daf +0x191:  lea    -0x34(%ebp),%eax
08165db2 +0x194:  mov    %eax,(%esp)
08165db5 +0x197:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08165dba +0x19c:  mov    %edi,0x10(%esp)
08165dbe +0x1a0:  mov    %esi,0xc(%esp)
08165dc2 +0x1a4:  mov    %ebx,0x8(%esp)
08165dc6 +0x1a8:  movl   $"[HeroMission] Invalid item. (charac:%u, mission:%d, item:%u)",0x4(%esp)
08165dce +0x1b0:  lea    -0x34(%ebp),%eax
08165dd1 +0x1b3:  mov    %eax,(%esp)
08165dd4 +0x1b6:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08165dd9 +0x1bb:  jmp    08165f7a <+0x35c>
08165dde +0x1c0:  lea    -0x79(%ebp),%eax
08165de1 +0x1c3:  mov    %eax,(%esp)
08165de4 +0x1c6:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08165de9 +0x1cb:  lea    -0x38(%ebp),%eax
08165dec +0x1ce:  mov    %eax,(%esp)
08165def +0x1d1:  call   081684c0 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x321>  ; global constructors keyed to HeroMissionValue::clear()+0x321
08165df4 +0x1d6:  mov    (%eax),%eax
08165df6 +0x1d8:  mov    %eax,-0x77(%ebp)
08165df9 +0x1db:  mov    -0x24(%ebp),%eax
08165dfc +0x1de:  mov    (%eax),%eax
08165dfe +0x1e0:  add    $0x8,%eax
08165e01 +0x1e3:  mov    (%eax),%edx
08165e03 +0x1e5:  lea    -0x79(%ebp),%eax
08165e06 +0x1e8:  mov    %eax,0x4(%esp)
08165e0a +0x1ec:  mov    -0x24(%ebp),%eax
08165e0d +0x1ef:  mov    %eax,(%esp)
08165e10 +0x1f2:  call   *%edx
08165e12 +0x1f4:  lea    -0x38(%ebp),%eax
08165e15 +0x1f7:  mov    %eax,(%esp)
08165e18 +0x1fa:  call   081684c0 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x321>  ; global constructors keyed to HeroMissionValue::clear()+0x321
08165e1d +0x1ff:  movzwl 0x4(%eax),%eax
08165e21 +0x203:  movzwl %ax,%eax
08165e24 +0x206:  mov    %eax,0x4(%esp)
08165e28 +0x20a:  lea    -0x79(%ebp),%eax
08165e2b +0x20d:  mov    %eax,(%esp)
08165e2e +0x210:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
08165e33 +0x215:  mov    0x8(%ebp),%eax
08165e36 +0x218:  add    $0x14,%eax
08165e39 +0x21b:  mov    %eax,(%esp)
08165e3c +0x21e:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08165e41 +0x223:  movl   $0x0,0xc(%esp)
08165e49 +0x22b:  mov    %eax,0x8(%esp)
08165e4d +0x22f:  movl   $0x4,0x4(%esp)
08165e55 +0x237:  movl   $&g_scriptStringManager_,(%esp)
08165e5c +0x23e:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
08165e61 +0x243:  mov    %eax,-0x20(%ebp)
08165e64 +0x246:  mov    0x8(%ebp),%eax
08165e67 +0x249:  add    $0x18,%eax
08165e6a +0x24c:  mov    %eax,(%esp)
08165e6d +0x24f:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08165e72 +0x254:  movl   $0x0,0xc(%esp)
08165e7a +0x25c:  mov    %eax,0x8(%esp)
08165e7e +0x260:  movl   $0x4,0x4(%esp)
08165e86 +0x268:  movl   $&g_scriptStringManager_,(%esp)
08165e8d +0x26f:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
08165e92 +0x274:  mov    %eax,-0x1c(%ebp)
08165e95 +0x277:  mov    0xc(%ebp),%eax
08165e98 +0x27a:  mov    %eax,(%esp)
08165e9b +0x27d:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
08165ea0 +0x282:  mov    %eax,%ebx
08165ea2 +0x284:  mov    -0x1c(%ebp),%eax
08165ea5 +0x287:  mov    %eax,(%esp)
08165ea8 +0x28a:  call   0807e3b0 <_init+0xca8>
08165ead +0x28f:  mov    %eax,%esi
08165eaf +0x291:  movl   $0xffffffff,0x4(%esp)
08165eb7 +0x299:  mov    0xc(%ebp),%eax
08165eba +0x29c:  mov    %eax,(%esp)
08165ebd +0x29f:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
08165ec2 +0x2a4:  movl   $0x0,0x24(%esp)
08165eca +0x2ac:  movl   $0x0,0x20(%esp)
08165ed2 +0x2b4:  mov    %ebx,0x1c(%esp)
08165ed6 +0x2b8:  movl   $0x0,0x18(%esp)
08165ede +0x2c0:  mov    %esi,0x14(%esp)
08165ee2 +0x2c4:  mov    -0x1c(%ebp),%edx
08165ee5 +0x2c7:  mov    %edx,0x10(%esp)
08165ee9 +0x2cb:  mov    %eax,0xc(%esp)
08165eed +0x2cf:  movl   $0x0,0x8(%esp)
08165ef5 +0x2d7:  lea    -0x79(%ebp),%eax
08165ef8 +0x2da:  mov    %eax,0x4(%esp)
08165efc +0x2de:  mov    -0x20(%ebp),%eax
08165eff +0x2e1:  mov    %eax,(%esp)
08165f02 +0x2e4:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
08165f07 +0x2e9:  lea    -0x38(%ebp),%eax
08165f0a +0x2ec:  mov    %eax,(%esp)
08165f0d +0x2ef:  call   081684aa <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x30b>  ; global constructors keyed to HeroMissionValue::clear()+0x30b
08165f12 +0x2f4:  lea    -0x3c(%ebp),%eax
08165f15 +0x2f7:  mov    %eax,0x4(%esp)
08165f19 +0x2fb:  lea    -0x38(%ebp),%eax
08165f1c +0x2fe:  mov    %eax,(%esp)
08165f1f +0x301:  call   0816847e <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x2df>  ; global constructors keyed to HeroMissionValue::clear()+0x2df
08165f24 +0x306:  test   %al,%al
08165f26 +0x308:  jne    08165d44 <+0x126>
08165f2c +0x30e:  mov    0x10(%ebp),%eax
08165f2f +0x311:  movzwl 0xa(%eax),%eax
08165f33 +0x315:  lea    0x1(%eax),%edx
08165f36 +0x318:  mov    0x10(%ebp),%eax
08165f39 +0x31b:  mov    %dx,0xa(%eax)
08165f3d +0x31f:  mov    0x10(%ebp),%eax
08165f40 +0x322:  movw   $0x1,0x6(%eax)
08165f46 +0x328:  mov    0xc(%ebp),%eax
08165f49 +0x32b:  mov    %eax,(%esp)
08165f4c +0x32e:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08165f51 +0x333:  mov    %eax,%edx
08165f53 +0x335:  mov    0x10(%ebp),%eax
08165f56 +0x338:  mov    %dx,0x8(%eax)
08165f5a +0x33c:  mov    0x8(%ebp),%eax
08165f5d +0x33f:  mov    %eax,(%esp)
08165f60 +0x342:  call   08164fc2 <_ZN24BaseHeroMissionCondition15isRepeatMissionEv>  ; BaseHeroMissionCondition::isRepeatMission()
08165f65 +0x347:  test   %al,%al
08165f67 +0x349:  je     08165f7a <+0x35c>
08165f69 +0x34b:  mov    0x10(%ebp),%eax
08165f6c +0x34e:  mov    %eax,(%esp)
08165f6f +0x351:  call   08164bb2 <_ZN16HeroMissionValue5resetEv>  ; HeroMissionValue::reset()
08165f74 +0x356:  jmp    08165f7a <+0x35c>
08165f76 +0x358:  nop
08165f77 +0x359:  jmp    08165f7a <+0x35c>
08165f79 +0x35b:  nop
08165f7a +0x35c:  lea    -0xc(%ebp),%esp
08165f7d +0x35f:  add    $0x0,%esp
08165f80 +0x362:  pop    %ebx
08165f81 +0x363:  pop    %esi
08165f82 +0x364:  pop    %edi
08165f83 +0x365:  pop    %ebp
08165f84 +0x366:  ret
08165f85 +0x367:  nop
```

## 反编译 C

```c
// LevelUpMission::processMission @ 0x8165c1e

/* LevelUpMission::processMission(CUser*, HeroMissionValue&, unsigned int) */

void LevelUpMission::processMission(CUser *param_1,HeroMissionValue *param_2,uint param_3)

{
  ushort uVar1;
  char cVar2;
  bool bVar3;
  undefined2 uVar4;
  ushort *puVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  CDataManager *this;
  undefined4 *puVar9;
  undefined4 uVar10;
  char *pcVar11;
  undefined4 uVar12;
  size_t sVar13;
  Inven_Item local_7d [2];
  undefined4 local_7b;
  __normal_iterator local_40 [4];
  __normal_iterator<HeroMissionCondition::RewardData*,std::vector<HeroMissionCondition::RewardData,std::allocator<HeroMissionCondition::RewardData>>>
  local_3c [4];
  cMyTrace local_38 [16];
  int *local_28;
  undefined4 local_24;
  char *local_20;
  
  puVar5 = (ushort *)
           std::vector<unsigned_short,std::allocator<unsigned_short>>::operator[]
                     ((vector<unsigned_short,std::allocator<unsigned_short>> *)(param_1 + 0x28),0);
  uVar1 = *puVar5;
  iVar6 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_2);
  if ((int)(uint)uVar1 <= iVar6) {
    cVar2 = BaseHeroMissionCondition::isRepeatMission((BaseHeroMissionCondition *)param_1);
    if ((cVar2 == '\x01') || (*(short *)(param_3 + 10) == 0)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) {
      uVar1 = *(ushort *)(param_3 + 8);
      iVar6 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_2);
      if ((int)(uint)uVar1 < iVar6) {
        std::
        vector<HeroMissionCondition::RewardData,std::allocator<HeroMissionCondition::RewardData>>::
        begin();
        std::
        vector<HeroMissionCondition::RewardData,std::allocator<HeroMissionCondition::RewardData>>::
        end();
        while (bVar3 = __gnu_cxx::operator!=(local_3c,local_40), bVar3) {
          piVar8 = (int *)__gnu_cxx::
                          __normal_iterator<HeroMissionCondition::RewardData*,std::vector<HeroMissionCondition::RewardData,std::allocator<HeroMissionCondition::RewardData>>>
                          ::operator->(local_3c);
          iVar6 = *piVar8;
          this = (CDataManager *)G_CDataManager();
          local_28 = (int *)CDataManager::find_item(this,iVar6);
          if (local_28 == (int *)0x0) {
            puVar9 = (undefined4 *)
                     __gnu_cxx::
                     __normal_iterator<HeroMissionCondition::RewardData*,std::vector<HeroMissionCondition::RewardData,std::allocator<HeroMissionCondition::RewardData>>>
                     ::operator->(local_3c);
            uVar12 = *puVar9;
            uVar7 = *(undefined4 *)(param_1 + 4);
            uVar10 = CUser::get_charac_no((CUser *)param_2,-1);
            cMyTrace::cMyTrace(local_38,
                               "virtual void LevelUpMission::processMission(CUser*, HeroMissionValue&, unsigned int)"
                               ,0x150,5);
            cMyTrace::operator()
                      (local_38,"[HeroMission] Invalid item. (charac:%u, mission:%d, item:%u)",
                       uVar10,uVar7,uVar12);
            return;
          }
          Inven_Item::Inven_Item(local_7d);
          puVar9 = (undefined4 *)
                   __gnu_cxx::
                   __normal_iterator<HeroMissionCondition::RewardData*,std::vector<HeroMissionCondition::RewardData,std::allocator<HeroMissionCondition::RewardData>>>
                   ::operator->(local_3c);
          local_7b = *puVar9;
          (**(code **)(*local_28 + 8))(local_28,local_7d);
          iVar6 = __gnu_cxx::
                  __normal_iterator<HeroMissionCondition::RewardData*,std::vector<HeroMissionCondition::RewardData,std::allocator<HeroMissionCondition::RewardData>>>
                  ::operator->(local_3c);
          Inven_Item::set_add_info(local_7d,(uint)*(ushort *)(iVar6 + 4));
          pcVar11 = (char *)std::string::c_str((string *)(param_1 + 0x14));
          local_24 = RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,pcVar11,
                                (bool *)0x0);
          pcVar11 = (char *)std::string::c_str((string *)(param_1 + 0x18));
          local_20 = (char *)RDARScriptStringManager::findString
                                       ((RDARScriptStringManager *)g_scriptStringManager_,4,pcVar11,
                                        (bool *)0x0);
          uVar12 = CUser::GetServerGroup((CUser *)param_2);
          sVar13 = strlen(local_20);
          uVar7 = CUser::get_charac_no((CUser *)param_2,-1);
          WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                    (local_24,local_7d,0,uVar7,local_20,sVar13,0,uVar12,0,0);
          __gnu_cxx::
          __normal_iterator<HeroMissionCondition::RewardData*,std::vector<HeroMissionCondition::RewardData,std::allocator<HeroMissionCondition::RewardData>>>
          ::operator++(local_3c);
        }
        *(short *)(param_3 + 10) = *(short *)(param_3 + 10) + 1;
        *(undefined2 *)(param_3 + 6) = 1;
        uVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_2);
        *(undefined2 *)(param_3 + 8) = uVar4;
        cVar2 = BaseHeroMissionCondition::isRepeatMission((BaseHeroMissionCondition *)param_1);
        if (cVar2 != '\0') {
          HeroMissionValue::reset((HeroMissionValue *)param_3);
        }
      }
      else {
        uVar1 = *(ushort *)(param_3 + 8);
        uVar12 = *(undefined4 *)param_3;
        uVar7 = CUser::get_charac_no((CUser *)param_2,-1);
        LogManager::logFormat
                  (1,"localtaiwan/Event/EventHeroMission.cpp",
                   "virtual void LevelUpMission::processMission(CUser*, HeroMissionValue&, unsigned int)"
                   ,0x145,"[HeroMission] Invalid reward condition. (charac:%u,mission:%d,value:%d)",
                   uVar7,uVar12,(uint)uVar1);
      }
    }
  }
  return;
}
```
