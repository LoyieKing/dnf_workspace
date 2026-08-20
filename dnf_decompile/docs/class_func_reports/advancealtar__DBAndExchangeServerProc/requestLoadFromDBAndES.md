# requestLoadFromDBAndES

`_ZN12advancealtar23DBAndExchangeServerProc22requestLoadFromDBAndESER5CUserR17MSG_CHARAC_SELECT`

`advancealtar::DBAndExchangeServerProc::requestLoadFromDBAndES(CUser&, MSG_CHARAC_SELECT&)`

| 类 | 地址 |
|---|---|
| `advancealtar::DBAndExchangeServerProc` | `0x08133784` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08133784  _ZN12advancealtar23DBAndExchangeServerProc22requestLoadFromDBAndESER5CUserR17MSG_CHARAC_SELECT
#           advancealtar::DBAndExchangeServerProc::requestLoadFromDBAndES(CUser&, MSG_CHARAC_SELECT&)
# range [0x08133784, 0x0813394b]
08133784 +0x000:  push   %ebp
08133785 +0x001:  mov    %esp,%ebp
08133787 +0x003:  push   %esi
08133788 +0x004:  push   %ebx
08133789 +0x005:  sub    $0x20,%esp
0813378c +0x008:  mov    0x8(%ebp),%eax
0813378f +0x00b:  add    $0x8df60,%eax
08133794 +0x010:  mov    %eax,(%esp)
08133797 +0x013:  call   08131660 <_ZN12advancealtar25CharacAdvanceAltarManager5resetEv>  ; advancealtar::CharacAdvanceAltarManager::reset()
0813379c +0x018:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
081337a1 +0x01d:  movl   $0xc3a,0x8(%esp)
081337a9 +0x025:  movl   $"localglobal/global_AdvanceAltar.cpp",0x4(%esp)
081337b1 +0x02d:  mov    %eax,(%esp)
081337b4 +0x030:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
081337b9 +0x035:  movl   $0x1,0x8(%esp)
081337c1 +0x03d:  mov    %eax,0x4(%esp)
081337c5 +0x041:  lea    -0x14(%ebp),%eax
081337c8 +0x044:  mov    %eax,(%esp)
081337cb +0x047:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
081337d0 +0x04c:  lea    -0x14(%ebp),%eax
081337d3 +0x04f:  mov    %eax,(%esp)
081337d6 +0x052:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081337db +0x057:  movl   $0x19,0x4(%esp)
081337e3 +0x05f:  mov    %eax,(%esp)
081337e6 +0x062:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081337eb +0x067:  mov    0x8(%ebp),%eax
081337ee +0x06a:  mov    %eax,(%esp)
081337f1 +0x06d:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
081337f6 +0x072:  mov    %eax,%ebx
081337f8 +0x074:  lea    -0x14(%ebp),%eax
081337fb +0x077:  mov    %eax,(%esp)
081337fe +0x07a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08133803 +0x07f:  mov    %ebx,0x4(%esp)
08133807 +0x083:  mov    %eax,(%esp)
0813380a +0x086:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0813380f +0x08b:  movl   $0xa,0x4(%esp)
08133817 +0x093:  mov    0x8(%ebp),%eax
0813381a +0x096:  mov    %eax,(%esp)
0813381d +0x099:  call   081348ce <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4d5>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4d5
08133822 +0x09e:  mov    0x8(%ebp),%eax
08133825 +0x0a1:  mov    %eax,(%esp)
08133828 +0x0a4:  call   081348fe <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x505>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x505
0813382d +0x0a9:  test   %al,%al
0813382f +0x0ab:  je     08133879 <+0xf5>
08133831 +0x0ad:  mov    0x8(%ebp),%eax
08133834 +0x0b0:  mov    %eax,(%esp)
08133837 +0x0b3:  call   081348f0 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4f7>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4f7
0813383c +0x0b8:  mov    %eax,%ebx
0813383e +0x0ba:  lea    -0x14(%ebp),%eax
08133841 +0x0bd:  mov    %eax,(%esp)
08133844 +0x0c0:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08133849 +0x0c5:  mov    %ebx,0x4(%esp)
0813384d +0x0c9:  mov    %eax,(%esp)
08133850 +0x0cc:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08133855 +0x0d1:  mov    0x8(%ebp),%eax
08133858 +0x0d4:  mov    %eax,(%esp)
0813385b +0x0d7:  call   081348e2 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4e9>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4e9
08133860 +0x0dc:  mov    %eax,%ebx
08133862 +0x0de:  lea    -0x14(%ebp),%eax
08133865 +0x0e1:  mov    %eax,(%esp)
08133868 +0x0e4:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0813386d +0x0e9:  mov    %ebx,0x4(%esp)
08133871 +0x0ed:  mov    %eax,(%esp)
08133874 +0x0f0:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08133879 +0x0f5:  lea    -0x14(%ebp),%eax
0813387c +0x0f8:  mov    %eax,(%esp)
0813387f +0x0fb:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08133884 +0x100:  mov    %eax,(%esp)
08133887 +0x103:  call   081367a6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x23ad>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x23ad
0813388c +0x108:  mov    %eax,-0xc(%ebp)
0813388f +0x10b:  movl   $0x51c,0x8(%esp)
08133897 +0x113:  movl   $0x0,0x4(%esp)
0813389f +0x11b:  mov    -0xc(%ebp),%eax
081338a2 +0x11e:  mov    %eax,(%esp)
081338a5 +0x121:  call   0807dcc0 <_init+0x5b8>
081338aa +0x126:  mov    0xc(%ebp),%eax
081338ad +0x129:  movzbl 0xd(%eax),%eax
081338b1 +0x12d:  movsbl %al,%eax
081338b4 +0x130:  mov    %eax,0x4(%esp)
081338b8 +0x134:  mov    0x8(%ebp),%eax
081338bb +0x137:  mov    %eax,(%esp)
081338be +0x13a:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
081338c3 +0x13f:  mov    -0xc(%ebp),%edx
081338c6 +0x142:  mov    %eax,(%edx)
081338c8 +0x144:  mov    0x8(%ebp),%eax
081338cb +0x147:  mov    %eax,(%esp)
081338ce +0x14a:  call   081348fe <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x505>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x505
081338d3 +0x14f:  test   %al,%al
081338d5 +0x151:  je     081338fa <+0x176>
081338d7 +0x153:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
081338dc +0x158:  lea    -0x14(%ebp),%edx
081338df +0x15b:  mov    %edx,0x8(%esp)
081338e3 +0x15f:  movl   $0x5,0x4(%esp)
081338eb +0x167:  mov    %eax,(%esp)
081338ee +0x16a:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
081338f3 +0x16f:  mov    $0x1,%ebx
081338f8 +0x174:  jmp    08133938 <+0x1b4>
081338fa +0x176:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
081338ff +0x17b:  lea    -0x14(%ebp),%edx
08133902 +0x17e:  mov    %edx,0x8(%esp)
08133906 +0x182:  movl   $0x2,0x4(%esp)
0813390e +0x18a:  mov    %eax,(%esp)
08133911 +0x18d:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08133916 +0x192:  mov    $0x1,%ebx
0813391b +0x197:  jmp    08133938 <+0x1b4>
0813391d +0x199:  mov    %edx,%ebx
0813391f +0x19b:  mov    %eax,%esi
08133921 +0x19d:  lea    -0x14(%ebp),%eax
08133924 +0x1a0:  mov    %eax,(%esp)
08133927 +0x1a3:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0813392c +0x1a8:  mov    %esi,%eax
0813392e +0x1aa:  mov    %ebx,%edx
08133930 +0x1ac:  mov    %eax,(%esp)
08133933 +0x1af:  call   08ae3750 <_Unwind_Resume>
08133938 +0x1b4:  lea    -0x14(%ebp),%eax
0813393b +0x1b7:  mov    %eax,(%esp)
0813393e +0x1ba:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08133943 +0x1bf:  mov    %ebx,%eax
08133945 +0x1c1:  add    $0x20,%esp
08133948 +0x1c4:  pop    %ebx
08133949 +0x1c5:  pop    %esi
0813394a +0x1c6:  pop    %ebp
0813394b +0x1c7:  ret
```

## 反编译 C

```c
// advancealtar::DBAndExchangeServerProc::requestLoadFromDBAndES @ 0x8133784

/* advancealtar::DBAndExchangeServerProc::requestLoadFromDBAndES(CUser&, MSG_CHARAC_SELECT&) */

undefined4
advancealtar::DBAndExchangeServerProc::requestLoadFromDBAndES
          (CUser *param_1,MSG_CHARAC_SELECT *param_2)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  int iVar4;
  undefined4 uVar5;
  CStreamGuard local_18 [8];
  _CharacAdvanceAltarDbData *local_10;
  
  CharacAdvanceAltarManager::reset((CharacAdvanceAltarManager *)(param_1 + 0x8df60));
  pSVar2 = (Stream *)
           StreamPool::Acquire(GlobalData::s_stream_pool,"localglobal/global_AdvanceAltar.cpp",0xc3a
                              );
  CStreamGuard::CStreamGuard(local_18,pSVar2,true);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 081337e6 to 08133915 has its CatchHandler @ 0813391d */
  CStreamGuard::operator<<(pCVar3,0x19);
  iVar4 = CUser::GetUID(param_1);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar3,iVar4);
  CUser::DisableCharacInfo(param_1,10);
  cVar1 = CUser::IsValidLastLoginCharac(param_1);
  if (cVar1 != '\0') {
    iVar4 = CUser::GetLastLoginChannelNo(param_1);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
    CStreamGuard::operator<<(pCVar3,iVar4);
    iVar4 = CUser::GetLastLoginCharacNo(param_1);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
    CStreamGuard::operator<<(pCVar3,iVar4);
  }
  pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<advancealtar::_CharacAdvanceAltarDbData>(pCVar3);
  memset(local_10,0,0x51c);
  uVar5 = CUser::get_charac_no(param_1,(int)(char)param_2[0xd]);
  *(undefined4 *)local_10 = uVar5;
  cVar1 = CUser::IsValidLastLoginCharac(param_1);
  if (cVar1 == '\0') {
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  }
  else {
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,5,local_18);
  }
  CStreamGuard::~CStreamGuard(local_18);
  return 1;
}
```
