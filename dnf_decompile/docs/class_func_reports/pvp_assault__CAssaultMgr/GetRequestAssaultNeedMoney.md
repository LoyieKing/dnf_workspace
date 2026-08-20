# GetRequestAssaultNeedMoney

`_ZN11pvp_assault11CAssaultMgr26GetRequestAssaultNeedMoneyEP5CUserS2_`

`pvp_assault::CAssaultMgr::GetRequestAssaultNeedMoney(CUser*, CUser*)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultMgr` | `0x082edc86` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082edc86  _ZN11pvp_assault11CAssaultMgr26GetRequestAssaultNeedMoneyEP5CUserS2_
#           pvp_assault::CAssaultMgr::GetRequestAssaultNeedMoney(CUser*, CUser*)
# range [0x082edc86, 0x082edfb9]
082edc86 +0x000:  push   %ebp
082edc87 +0x001:  mov    %esp,%ebp
082edc89 +0x003:  push   %ebx
082edc8a +0x004:  sub    $0x64,%esp
082edc8d +0x007:  mov    &_ZN10GlobalData15s_event_managerE,%eax
082edc92 +0x00c:  movl   $0x20,0x4(%esp)
082edc9a +0x014:  mov    %eax,(%esp)
082edc9d +0x017:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
082edca2 +0x01c:  mov    (%eax),%edx
082edca4 +0x01e:  add    $0x34,%edx
082edca7 +0x021:  mov    (%edx),%edx
082edca9 +0x023:  movl   $0x0,0x4(%esp)
082edcb1 +0x02b:  mov    %eax,(%esp)
082edcb4 +0x02e:  call   *%edx
082edcb6 +0x030:  test   %al,%al
082edcb8 +0x032:  je     082edcc4 <+0x3e>
082edcba +0x034:  mov    $0x0,%eax
082edcbf +0x039:  jmp    082edfb3 <+0x32d>
082edcc4 +0x03e:  mov    &_ZN10GlobalData15s_power_managerE,%eax
082edcc9 +0x043:  mov    %eax,(%esp)
082edccc +0x046:  call   0847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>  ; CPowerManager::IsPowerWarEventOn()
082edcd1 +0x04b:  test   %al,%al
082edcd3 +0x04d:  je     082edceb <+0x65>
082edcd5 +0x04f:  mov    0xc(%ebp),%eax
082edcd8 +0x052:  mov    %eax,(%esp)
082edcdb +0x055:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
082edce0 +0x05a:  cmp    $0x7,%al
082edce2 +0x05c:  jne    082edceb <+0x65>
082edce4 +0x05e:  mov    $0x1,%eax
082edce9 +0x063:  jmp    082edcf0 <+0x6a>
082edceb +0x065:  mov    $0x0,%eax
082edcf0 +0x06a:  test   %al,%al
082edcf2 +0x06c:  je     082edcfe <+0x78>
082edcf4 +0x06e:  mov    $0x0,%eax
082edcf9 +0x073:  jmp    082edfb3 <+0x32d>
082edcfe +0x078:  mov    0xc(%ebp),%eax
082edd01 +0x07b:  mov    %eax,(%esp)
082edd04 +0x07e:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
082edd09 +0x083:  mov    %eax,%ebx
082edd0b +0x085:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
082edd10 +0x08a:  add    $0x68,%eax
082edd13 +0x08d:  mov    %ebx,0x4(%esp)
082edd17 +0x091:  mov    %eax,(%esp)
082edd1a +0x094:  call   082f03bc <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x140>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x140
082edd1f +0x099:  mov    %eax,-0x2c(%ebp)
082edd22 +0x09c:  mov    0x10(%ebp),%eax
082edd25 +0x09f:  mov    %eax,(%esp)
082edd28 +0x0a2:  call   082f0ad8 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x85c>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x85c
082edd2d +0x0a7:  test   %eax,%eax
082edd2f +0x0a9:  sete   %al
082edd32 +0x0ac:  test   %al,%al
082edd34 +0x0ae:  je     082edf70 <+0x2ea>
082edd3a +0x0b4:  mov    0x10(%ebp),%eax
082edd3d +0x0b7:  mov    %eax,(%esp)
082edd40 +0x0ba:  call   082f0f36 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0xcba>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0xcba
082edd45 +0x0bf:  mov    %eax,-0x40(%ebp)
082edd48 +0x0c2:  fildl  -0x40(%ebp)
082edd4b +0x0c5:  flds   ""
082edd51 +0x0cb:  fdivrp %st,%st(1)
082edd53 +0x0cd:  fld1
082edd55 +0x0cf:  faddp  %st,%st(1)
082edd57 +0x0d1:  fstps  -0x28(%ebp)
082edd5a +0x0d4:  movl   $0x1,-0x24(%ebp)
082edd61 +0x0db:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
082edd68 +0x0e2:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
082edd6d +0x0e7:  mov    %eax,%ebx
082edd6f +0x0e9:  mov    0xc(%ebp),%eax
082edd72 +0x0ec:  mov    %eax,(%esp)
082edd75 +0x0ef:  call   0822f7ae <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4e58>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4e58
082edd7a +0x0f4:  mov    %ebx,%edx
082edd7c +0x0f6:  sub    %eax,%edx
082edd7e +0x0f8:  mov    %edx,%eax
082edd80 +0x0fa:  mov    %eax,-0x40(%ebp)
082edd83 +0x0fd:  fildl  -0x40(%ebp)
082edd86 +0x100:  fstps  -0x20(%ebp)
082edd89 +0x103:  flds   -0x20(%ebp)
082edd8c +0x106:  fldz
082edd8e +0x108:  fucompp
082edd90 +0x10a:  fnstsw %ax
082edd92 +0x10c:  test   $0x5,%ah
082edd95 +0x10f:  sete   %al
082edd98 +0x112:  test   %al,%al
082edd9a +0x114:  je     082edda8 <+0x122>
082edd9c +0x116:  flds   -0x20(%ebp)
082edd9f +0x119:  fld1
082edda1 +0x11b:  faddp  %st,%st(1)
082edda3 +0x11d:  fstps  -0x20(%ebp)
082edda6 +0x120:  jmp    082eddec <+0x166>
082edda8 +0x122:  flds   -0x20(%ebp)
082eddab +0x125:  fnstcw -0x3a(%ebp)
082eddae +0x128:  movzwl -0x3a(%ebp),%eax
082eddb2 +0x12c:  mov    $0xc,%ah
082eddb4 +0x12e:  mov    %ax,-0x3c(%ebp)
082eddb8 +0x132:  fldcw  -0x3c(%ebp)
082eddbb +0x135:  fistpl -0x40(%ebp)
082eddbe +0x138:  fldcw  -0x3a(%ebp)
082eddc1 +0x13b:  mov    -0x40(%ebp),%ebx
082eddc4 +0x13e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
082eddc9 +0x143:  mov    0x604(%eax),%eax
082eddcf +0x149:  cmp    %eax,%ebx
082eddd1 +0x14b:  setg   %al
082eddd4 +0x14e:  test   %al,%al
082eddd6 +0x150:  je     082eddec <+0x166>
082eddd8 +0x152:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
082edddd +0x157:  mov    0x604(%eax),%eax
082edde3 +0x15d:  mov    %eax,-0x40(%ebp)
082edde6 +0x160:  fildl  -0x40(%ebp)
082edde9 +0x163:  fstps  -0x20(%ebp)
082eddec +0x166:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
082eddf1 +0x16b:  mov    0x604(%eax),%eax
082eddf7 +0x171:  mov    %eax,-0x40(%ebp)
082eddfa +0x174:  fildl  -0x40(%ebp)
082eddfd +0x177:  fmuls  -0x28(%ebp)
082ede00 +0x17a:  fstps  -0x1c(%ebp)
082ede03 +0x17d:  flds   -0x1c(%ebp)
082ede06 +0x180:  fldz
082ede08 +0x182:  fucompp
082ede0a +0x184:  fnstsw %ax
082ede0c +0x186:  test   $0x5,%ah
082ede0f +0x189:  sete   %al
082ede12 +0x18c:  test   %al,%al
082ede14 +0x18e:  je     082ede20 <+0x19a>
082ede16 +0x190:  flds   -0x1c(%ebp)
082ede19 +0x193:  fld1
082ede1b +0x195:  faddp  %st,%st(1)
082ede1d +0x197:  fstps  -0x1c(%ebp)
082ede20 +0x19a:  mov    $0x3f800000,%eax
082ede25 +0x19f:  mov    %eax,-0x18(%ebp)
082ede28 +0x1a2:  flds   -0x20(%ebp)
082ede2b +0x1a5:  fsubs  -0x1c(%ebp)
082ede2e +0x1a8:  fldz
082ede30 +0x1aa:  fucompp
082ede32 +0x1ac:  fnstsw %ax
082ede34 +0x1ae:  test   $0x5,%ah
082ede37 +0x1b1:  sete   %al
082ede3a +0x1b4:  test   %al,%al
082ede3c +0x1b6:  je     082ede63 <+0x1dd>
082ede3e +0x1b8:  fildl  -0x24(%ebp)
082ede41 +0x1bb:  fstps  -0x50(%ebp)
082ede44 +0x1be:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
082ede49 +0x1c3:  mov    0x600(%eax),%eax
082ede4f +0x1c9:  mov    %eax,-0x40(%ebp)
082ede52 +0x1cc:  fildl  -0x40(%ebp)
082ede55 +0x1cf:  flds   -0x20(%ebp)
082ede58 +0x1d2:  fdivs  -0x1c(%ebp)
082ede5b +0x1d5:  fsubrp %st,%st(1)
082ede5d +0x1d7:  fmuls  -0x50(%ebp)
082ede60 +0x1da:  fstps  -0x18(%ebp)
082ede63 +0x1dd:  flds   -0x18(%ebp)
082ede66 +0x1e0:  fld1
082ede68 +0x1e2:  fucompp
082ede6a +0x1e4:  fnstsw %ax
082ede6c +0x1e6:  test   $0x45,%ah
082ede6f +0x1e9:  sete   %al
082ede72 +0x1ec:  test   %al,%al
082ede74 +0x1ee:  je     082ede80 <+0x1fa>
082ede76 +0x1f0:  mov    $0x3f800000,%eax
082ede7b +0x1f5:  mov    %eax,-0x18(%ebp)
082ede7e +0x1f8:  jmp    082edeb6 <+0x230>
082ede80 +0x1fa:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
082ede85 +0x1ff:  mov    0x600(%eax),%eax
082ede8b +0x205:  mov    %eax,-0x40(%ebp)
082ede8e +0x208:  fildl  -0x40(%ebp)
082ede91 +0x20b:  flds   -0x18(%ebp)
082ede94 +0x20e:  fucompp
082ede96 +0x210:  fnstsw %ax
082ede98 +0x212:  test   $0x45,%ah
082ede9b +0x215:  sete   %al
082ede9e +0x218:  test   %al,%al
082edea0 +0x21a:  je     082edeb6 <+0x230>
082edea2 +0x21c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
082edea7 +0x221:  mov    0x600(%eax),%eax
082edead +0x227:  mov    %eax,-0x40(%ebp)
082edeb0 +0x22a:  fildl  -0x40(%ebp)
082edeb3 +0x22d:  fstps  -0x18(%ebp)
082edeb6 +0x230:  mov    0xc(%ebp),%eax
082edeb9 +0x233:  mov    %eax,(%esp)
082edebc +0x236:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
082edec1 +0x23b:  mov    %eax,%ebx
082edec3 +0x23d:  mov    0x10(%ebp),%eax
082edec6 +0x240:  mov    %eax,(%esp)
082edec9 +0x243:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
082edece +0x248:  mov    %ebx,%edx
082eded0 +0x24a:  sub    %eax,%edx
082eded2 +0x24c:  mov    %edx,%eax
082eded4 +0x24e:  mov    %eax,-0x14(%ebp)
082eded7 +0x251:  mov    $0x3f800000,%eax
082ededc +0x256:  mov    %eax,-0x10(%ebp)
082ededf +0x259:  cmpl   $0x8,-0x14(%ebp)
082edee3 +0x25d:  jle    082edf09 <+0x283>
082edee5 +0x25f:  mov    -0x14(%ebp),%eax
082edee8 +0x262:  sub    $0x8,%eax
082edeeb +0x265:  mov    %eax,-0x40(%ebp)
082edeee +0x268:  fildl  -0x40(%ebp)
082edef1 +0x26b:  fstps  -0x4c(%ebp)
082edef4 +0x26e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
082edef9 +0x273:  flds   0x608(%eax)
082edeff +0x279:  fmuls  -0x4c(%ebp)
082edf02 +0x27c:  fld1
082edf04 +0x27e:  faddp  %st,%st(1)
082edf06 +0x280:  fstps  -0x10(%ebp)
082edf09 +0x283:  fildl  -0x2c(%ebp)
082edf0c +0x286:  fmuls  -0x18(%ebp)
082edf0f +0x289:  fmuls  -0x10(%ebp)
082edf12 +0x28c:  fmuls  -0x28(%ebp)
082edf15 +0x28f:  fnstcw -0x3a(%ebp)
082edf18 +0x292:  movzwl -0x3a(%ebp),%eax
082edf1c +0x296:  mov    $0xc,%ah
082edf1e +0x298:  mov    %ax,-0x3c(%ebp)
082edf22 +0x29c:  fldcw  -0x3c(%ebp)
082edf25 +0x29f:  fistpl -0xc(%ebp)
082edf28 +0x2a2:  fldcw  -0x3a(%ebp)
082edf2b +0x2a5:  fildl  -0xc(%ebp)
082edf2e +0x2a8:  fstps  -0x48(%ebp)
082edf31 +0x2ab:  mov    0xc(%ebp),%eax
082edf34 +0x2ae:  mov    %eax,(%esp)
082edf37 +0x2b1:  call   082f0ad8 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x85c>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x85c
082edf3c +0x2b6:  mov    %eax,%ebx
082edf3e +0x2b8:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
082edf43 +0x2bd:  add    $0x68,%eax
082edf46 +0x2c0:  mov    %ebx,0x4(%esp)
082edf4a +0x2c4:  mov    %eax,(%esp)
082edf4d +0x2c7:  call   08a8c668 <_ZN21ServerParameterScript31getAssaultPriceChaospointWeightEi>  ; ServerParameterScript::getAssaultPriceChaospointWeight(int)
082edf52 +0x2cc:  fmuls  -0x48(%ebp)
082edf55 +0x2cf:  fnstcw -0x3a(%ebp)
082edf58 +0x2d2:  movzwl -0x3a(%ebp),%eax
082edf5c +0x2d6:  mov    $0xc,%ah
082edf5e +0x2d8:  mov    %ax,-0x3c(%ebp)
082edf62 +0x2dc:  fldcw  -0x3c(%ebp)
082edf65 +0x2df:  fistpl -0xc(%ebp)
082edf68 +0x2e2:  fldcw  -0x3a(%ebp)
082edf6b +0x2e5:  mov    -0xc(%ebp),%eax
082edf6e +0x2e8:  jmp    082edfb3 <+0x32d>
082edf70 +0x2ea:  fildl  -0x2c(%ebp)
082edf73 +0x2ed:  fstps  -0x44(%ebp)
082edf76 +0x2f0:  mov    0x10(%ebp),%eax
082edf79 +0x2f3:  mov    %eax,(%esp)
082edf7c +0x2f6:  call   082f0ad8 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x85c>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x85c
082edf81 +0x2fb:  mov    %eax,%ebx
082edf83 +0x2fd:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
082edf88 +0x302:  add    $0x68,%eax
082edf8b +0x305:  mov    %ebx,0x4(%esp)
082edf8f +0x309:  mov    %eax,(%esp)
082edf92 +0x30c:  call   082f0410 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x194>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x194
082edf97 +0x311:  fmuls  -0x44(%ebp)
082edf9a +0x314:  fnstcw -0x3a(%ebp)
082edf9d +0x317:  movzwl -0x3a(%ebp),%eax
082edfa1 +0x31b:  mov    $0xc,%ah
082edfa3 +0x31d:  mov    %ax,-0x3c(%ebp)
082edfa7 +0x321:  fldcw  -0x3c(%ebp)
082edfaa +0x324:  fistpl -0x40(%ebp)
082edfad +0x327:  fldcw  -0x3a(%ebp)
082edfb0 +0x32a:  mov    -0x40(%ebp),%eax
082edfb3 +0x32d:  add    $0x64,%esp
082edfb6 +0x330:  pop    %ebx
082edfb7 +0x331:  pop    %ebp
082edfb8 +0x332:  ret
082edfb9 +0x333:  nop
```

## 反编译 C

```c
// pvp_assault::CAssaultMgr::GetRequestAssaultNeedMoney @ 0x82edc86

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* pvp_assault::CAssaultMgr::GetRequestAssaultNeedMoney(CUser*, CUser*) */

int __thiscall
pvp_assault::CAssaultMgr::GetRequestAssaultNeedMoney
          (CAssaultMgr *this,CUser *param_1,CUser *param_2)

{
  bool bVar1;
  float fVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longdouble lVar9;
  float local_24;
  float local_20;
  float local_1c;
  float local_14;
  
  piVar4 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x20);
  cVar3 = (**(code **)(*piVar4 + 0x34))(piVar4,0);
  if (cVar3 == '\0') {
    cVar3 = CPowerManager::IsPowerWarEventOn();
    if ((cVar3 == '\0') ||
       (cVar3 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1), cVar3 != '\a')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      iVar5 = 0;
    }
    else {
      iVar5 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
      iVar6 = G_CDataManager();
      iVar5 = ServerParameterScript::getAssaultPrice((ServerParameterScript *)(iVar6 + 0x68),iVar5);
      iVar6 = CUserCharacInfo::GetCurCharacChaosPoint((CUserCharacInfo *)param_2);
      if (iVar6 == 0) {
        iVar6 = CUser::GetAutoClientRate(param_2);
        fVar2 = (float)iVar6 / _DAT_08c1d18c + 1.0;
        iVar6 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        iVar7 = CUserCharacInfo::GetCurCharacChaosKillTime((CUserCharacInfo *)param_1);
        local_24 = (float)(iVar6 - iVar7);
        if (0.0 < local_24) {
          iVar6 = G_CDataManager();
          if (*(int *)(iVar6 + 0x604) < (int)ROUND(local_24)) {
            iVar6 = G_CDataManager();
            local_24 = (float)*(int *)(iVar6 + 0x604);
          }
        }
        else {
          local_24 = local_24 + 1.0;
        }
        iVar6 = G_CDataManager();
        local_20 = (float)*(int *)(iVar6 + 0x604) * fVar2;
        if (local_20 <= 0.0) {
          local_20 = local_20 + 1.0;
        }
        local_1c = 1.0;
        if (local_24 - local_20 <= 0.0) {
          iVar6 = G_CDataManager();
          local_1c = ((float)*(int *)(iVar6 + 0x600) - local_24 / local_20) * 1.0;
        }
        if (1.0 <= local_1c) {
          iVar6 = G_CDataManager();
          if ((float)*(int *)(iVar6 + 0x600) < local_1c) {
            iVar6 = G_CDataManager();
            local_1c = (float)*(int *)(iVar6 + 0x600);
          }
        }
        else {
          local_1c = 1.0;
        }
        iVar6 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
        iVar7 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_2);
        local_14 = 1.0;
        if (8 < iVar6 - iVar7) {
          iVar8 = G_CDataManager();
          local_14 = *(float *)(iVar8 + 0x608) * (float)((iVar6 - iVar7) + -8) + 1.0;
        }
        iVar6 = CUserCharacInfo::GetCurCharacChaosPoint((CUserCharacInfo *)param_1);
        iVar7 = G_CDataManager();
        lVar9 = (longdouble)
                ServerParameterScript::getAssaultPriceChaospointWeight
                          ((ServerParameterScript *)(iVar7 + 0x68),iVar6);
        iVar5 = (int)ROUND(lVar9 * (longdouble)
                                   (int)ROUND((float)iVar5 * local_1c * local_14 * fVar2));
      }
      else {
        iVar6 = CUserCharacInfo::GetCurCharacChaosPoint((CUserCharacInfo *)param_2);
        iVar7 = G_CDataManager();
        lVar9 = (longdouble)
                ServerParameterScript::getChaosPointWeight
                          ((ServerParameterScript *)(iVar7 + 0x68),iVar6);
        iVar5 = (int)ROUND(lVar9 * (longdouble)iVar5);
      }
    }
    return iVar5;
  }
  return 0;
}
```
