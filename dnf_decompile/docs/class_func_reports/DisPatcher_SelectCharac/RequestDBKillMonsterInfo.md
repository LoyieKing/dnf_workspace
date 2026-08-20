# RequestDBKillMonsterInfo

`_ZN23DisPatcher_SelectCharac24RequestDBKillMonsterInfoEP5CUserR17MSG_CHARAC_SELECT`

`DisPatcher_SelectCharac::RequestDBKillMonsterInfo(CUser*, MSG_CHARAC_SELECT&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_SelectCharac` | `0x081c7836` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c7836  _ZN23DisPatcher_SelectCharac24RequestDBKillMonsterInfoEP5CUserR17MSG_CHARAC_SELECT
#           DisPatcher_SelectCharac::RequestDBKillMonsterInfo(CUser*, MSG_CHARAC_SELECT&)
# range [0x081c7836, 0x081c79f1]
081c7836 +0x000:  push   %ebp
081c7837 +0x001:  mov    %esp,%ebp
081c7839 +0x003:  push   %esi
081c783a +0x004:  push   %ebx
081c783b +0x005:  sub    $0x20,%esp
081c783e +0x008:  mov    &_ZN10GlobalData17s_big_stream_poolE,%eax
081c7843 +0x00d:  movl   $0x1843,0x8(%esp)
081c784b +0x015:  movl   $"PacketDispatcher_Impl_1.cpp",0x4(%esp)
081c7853 +0x01d:  mov    %eax,(%esp)
081c7856 +0x020:  call   08290262 <_ZN13BigStreamPool7AcquireEPKci>  ; BigStreamPool::Acquire(char const*, int)
081c785b +0x025:  movl   $0x1,0x8(%esp)
081c7863 +0x02d:  mov    %eax,0x4(%esp)
081c7867 +0x031:  lea    -0x14(%ebp),%eax
081c786a +0x034:  mov    %eax,(%esp)
081c786d +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
081c7872 +0x03c:  lea    -0x14(%ebp),%eax
081c7875 +0x03f:  mov    %eax,(%esp)
081c7878 +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081c787d +0x047:  movl   $0x282,0x4(%esp)
081c7885 +0x04f:  mov    %eax,(%esp)
081c7888 +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081c788d +0x057:  mov    0xc(%ebp),%eax
081c7890 +0x05a:  mov    %eax,(%esp)
081c7893 +0x05d:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
081c7898 +0x062:  mov    %eax,%ebx
081c789a +0x064:  lea    -0x14(%ebp),%eax
081c789d +0x067:  mov    %eax,(%esp)
081c78a0 +0x06a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081c78a5 +0x06f:  mov    %ebx,0x4(%esp)
081c78a9 +0x073:  mov    %eax,(%esp)
081c78ac +0x076:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081c78b1 +0x07b:  movl   $0x9,0x4(%esp)
081c78b9 +0x083:  mov    0xc(%ebp),%eax
081c78bc +0x086:  mov    %eax,(%esp)
081c78bf +0x089:  call   081348ce <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4d5>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4d5
081c78c4 +0x08e:  mov    0xc(%ebp),%eax
081c78c7 +0x091:  mov    %eax,(%esp)
081c78ca +0x094:  call   081348fe <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x505>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x505
081c78cf +0x099:  test   %al,%al
081c78d1 +0x09b:  je     081c791b <+0xe5>
081c78d3 +0x09d:  mov    0xc(%ebp),%eax
081c78d6 +0x0a0:  mov    %eax,(%esp)
081c78d9 +0x0a3:  call   081348f0 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4f7>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4f7
081c78de +0x0a8:  mov    %eax,%ebx
081c78e0 +0x0aa:  lea    -0x14(%ebp),%eax
081c78e3 +0x0ad:  mov    %eax,(%esp)
081c78e6 +0x0b0:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081c78eb +0x0b5:  mov    %ebx,0x4(%esp)
081c78ef +0x0b9:  mov    %eax,(%esp)
081c78f2 +0x0bc:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081c78f7 +0x0c1:  mov    0xc(%ebp),%eax
081c78fa +0x0c4:  mov    %eax,(%esp)
081c78fd +0x0c7:  call   081348e2 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4e9>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4e9
081c7902 +0x0cc:  mov    %eax,%ebx
081c7904 +0x0ce:  lea    -0x14(%ebp),%eax
081c7907 +0x0d1:  mov    %eax,(%esp)
081c790a +0x0d4:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081c790f +0x0d9:  mov    %ebx,0x4(%esp)
081c7913 +0x0dd:  mov    %eax,(%esp)
081c7916 +0x0e0:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081c791b +0x0e5:  lea    -0x14(%ebp),%eax
081c791e +0x0e8:  mov    %eax,(%esp)
081c7921 +0x0eb:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
081c7926 +0x0f0:  mov    %eax,(%esp)
081c7929 +0x0f3:  call   08236db4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc45e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc45e
081c792e +0x0f8:  mov    %eax,-0xc(%ebp)
081c7931 +0x0fb:  movl   $0xafcc,0x8(%esp)
081c7939 +0x103:  movl   $0x0,0x4(%esp)
081c7941 +0x10b:  mov    -0xc(%ebp),%eax
081c7944 +0x10e:  mov    %eax,(%esp)
081c7947 +0x111:  call   0807dcc0 <_init+0x5b8>
081c794c +0x116:  mov    0x10(%ebp),%eax
081c794f +0x119:  movzbl 0xd(%eax),%eax
081c7953 +0x11d:  movsbl %al,%eax
081c7956 +0x120:  mov    %eax,0x4(%esp)
081c795a +0x124:  mov    0xc(%ebp),%eax
081c795d +0x127:  mov    %eax,(%esp)
081c7960 +0x12a:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
081c7965 +0x12f:  mov    -0xc(%ebp),%edx
081c7968 +0x132:  mov    %eax,0xafc8(%edx)
081c796e +0x138:  mov    0xc(%ebp),%eax
081c7971 +0x13b:  mov    %eax,(%esp)
081c7974 +0x13e:  call   081348fe <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x505>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x505
081c7979 +0x143:  test   %al,%al
081c797b +0x145:  je     081c79a0 <+0x16a>
081c797d +0x147:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
081c7982 +0x14c:  lea    -0x14(%ebp),%edx
081c7985 +0x14f:  mov    %edx,0x8(%esp)
081c7989 +0x153:  movl   $0x5,0x4(%esp)
081c7991 +0x15b:  mov    %eax,(%esp)
081c7994 +0x15e:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
081c7999 +0x163:  mov    $0x1,%ebx
081c799e +0x168:  jmp    081c79de <+0x1a8>
081c79a0 +0x16a:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
081c79a5 +0x16f:  lea    -0x14(%ebp),%edx
081c79a8 +0x172:  mov    %edx,0x8(%esp)
081c79ac +0x176:  movl   $0x2,0x4(%esp)
081c79b4 +0x17e:  mov    %eax,(%esp)
081c79b7 +0x181:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
081c79bc +0x186:  mov    $0x1,%ebx
081c79c1 +0x18b:  jmp    081c79de <+0x1a8>
081c79c3 +0x18d:  mov    %edx,%ebx
081c79c5 +0x18f:  mov    %eax,%esi
081c79c7 +0x191:  lea    -0x14(%ebp),%eax
081c79ca +0x194:  mov    %eax,(%esp)
081c79cd +0x197:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
081c79d2 +0x19c:  mov    %esi,%eax
081c79d4 +0x19e:  mov    %ebx,%edx
081c79d6 +0x1a0:  mov    %eax,(%esp)
081c79d9 +0x1a3:  call   08ae3750 <_Unwind_Resume>
081c79de +0x1a8:  lea    -0x14(%ebp),%eax
081c79e1 +0x1ab:  mov    %eax,(%esp)
081c79e4 +0x1ae:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
081c79e9 +0x1b3:  mov    %ebx,%eax
081c79eb +0x1b5:  add    $0x20,%esp
081c79ee +0x1b8:  pop    %ebx
081c79ef +0x1b9:  pop    %esi
081c79f0 +0x1ba:  pop    %ebp
081c79f1 +0x1bb:  ret
```

## 反编译 C

```c
// DisPatcher_SelectCharac::RequestDBKillMonsterInfo @ 0x81c7836

/* DisPatcher_SelectCharac::RequestDBKillMonsterInfo(CUser*, MSG_CHARAC_SELECT&) */

undefined4 __thiscall
DisPatcher_SelectCharac::RequestDBKillMonsterInfo
          (DisPatcher_SelectCharac *this,CUser *param_1,MSG_CHARAC_SELECT *param_2)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  int iVar4;
  undefined4 uVar5;
  CStreamGuard local_18 [8];
  SIG_LOAD_KILL_MONSTER_INFO *local_10;
  
  pSVar2 = (Stream *)
           BigStreamPool::Acquire
                     (GlobalData::s_big_stream_pool,"PacketDispatcher_Impl_1.cpp",0x1843);
  CStreamGuard::CStreamGuard(local_18,pSVar2,true);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 081c7888 to 081c79bb has its CatchHandler @ 081c79c3 */
  CStreamGuard::operator<<(pCVar3,0x282);
  iVar4 = CUser::GetUID(param_1);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar3,iVar4);
  CUser::DisableCharacInfo(param_1,9);
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
  local_10 = CStreamGuard::GetInBuffer<SIG_LOAD_KILL_MONSTER_INFO>(pCVar3);
  memset(local_10,0,0xafcc);
  uVar5 = CUser::get_charac_no(param_1,(int)(char)param_2[0xd]);
  *(undefined4 *)(local_10 + 45000) = uVar5;
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
