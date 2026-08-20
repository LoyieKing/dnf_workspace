# RequestBlackCount

`_ZN23DisPatcher_SelectCharac17RequestBlackCountEP5CUserR17MSG_CHARAC_SELECT`

`DisPatcher_SelectCharac::RequestBlackCount(CUser*, MSG_CHARAC_SELECT&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_SelectCharac` | `0x081c79f2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c79f2  _ZN23DisPatcher_SelectCharac17RequestBlackCountEP5CUserR17MSG_CHARAC_SELECT
#           DisPatcher_SelectCharac::RequestBlackCount(CUser*, MSG_CHARAC_SELECT&)
# range [0x081c79f2, 0x081c7bab]
081c79f2 +0x000:  push   %ebp
081c79f3 +0x001:  mov    %esp,%ebp
081c79f5 +0x003:  push   %esi
081c79f6 +0x004:  push   %ebx
081c79f7 +0x005:  sub    $0x20,%esp
081c79fa +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
081c79ff +0x00d:  movl   $0x1862,0x8(%esp)
081c7a07 +0x015:  movl   $"PacketDispatcher_Impl_1.cpp",0x4(%esp)
081c7a0f +0x01d:  mov    %eax,(%esp)
081c7a12 +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
081c7a17 +0x025:  movl   $0x1,0x8(%esp)
081c7a1f +0x02d:  mov    %eax,0x4(%esp)
081c7a23 +0x031:  lea    -0x14(%ebp),%eax
081c7a26 +0x034:  mov    %eax,(%esp)
081c7a29 +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
081c7a2e +0x03c:  lea    -0x14(%ebp),%eax
081c7a31 +0x03f:  mov    %eax,(%esp)
081c7a34 +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081c7a39 +0x047:  movl   $0xb3,0x4(%esp)
081c7a41 +0x04f:  mov    %eax,(%esp)
081c7a44 +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081c7a49 +0x057:  mov    0xc(%ebp),%eax
081c7a4c +0x05a:  mov    %eax,(%esp)
081c7a4f +0x05d:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
081c7a54 +0x062:  mov    %eax,%ebx
081c7a56 +0x064:  lea    -0x14(%ebp),%eax
081c7a59 +0x067:  mov    %eax,(%esp)
081c7a5c +0x06a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081c7a61 +0x06f:  mov    %ebx,0x4(%esp)
081c7a65 +0x073:  mov    %eax,(%esp)
081c7a68 +0x076:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081c7a6d +0x07b:  movl   $0x7,0x4(%esp)
081c7a75 +0x083:  mov    0xc(%ebp),%eax
081c7a78 +0x086:  mov    %eax,(%esp)
081c7a7b +0x089:  call   081348ce <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4d5>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4d5
081c7a80 +0x08e:  mov    0xc(%ebp),%eax
081c7a83 +0x091:  mov    %eax,(%esp)
081c7a86 +0x094:  call   081348fe <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x505>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x505
081c7a8b +0x099:  test   %al,%al
081c7a8d +0x09b:  je     081c7ad7 <+0xe5>
081c7a8f +0x09d:  mov    0xc(%ebp),%eax
081c7a92 +0x0a0:  mov    %eax,(%esp)
081c7a95 +0x0a3:  call   081348f0 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4f7>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4f7
081c7a9a +0x0a8:  mov    %eax,%ebx
081c7a9c +0x0aa:  lea    -0x14(%ebp),%eax
081c7a9f +0x0ad:  mov    %eax,(%esp)
081c7aa2 +0x0b0:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081c7aa7 +0x0b5:  mov    %ebx,0x4(%esp)
081c7aab +0x0b9:  mov    %eax,(%esp)
081c7aae +0x0bc:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081c7ab3 +0x0c1:  mov    0xc(%ebp),%eax
081c7ab6 +0x0c4:  mov    %eax,(%esp)
081c7ab9 +0x0c7:  call   081348e2 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4e9>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4e9
081c7abe +0x0cc:  mov    %eax,%ebx
081c7ac0 +0x0ce:  lea    -0x14(%ebp),%eax
081c7ac3 +0x0d1:  mov    %eax,(%esp)
081c7ac6 +0x0d4:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081c7acb +0x0d9:  mov    %ebx,0x4(%esp)
081c7acf +0x0dd:  mov    %eax,(%esp)
081c7ad2 +0x0e0:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081c7ad7 +0x0e5:  lea    -0x14(%ebp),%eax
081c7ada +0x0e8:  mov    %eax,(%esp)
081c7add +0x0eb:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
081c7ae2 +0x0f0:  mov    %eax,(%esp)
081c7ae5 +0x0f3:  call   08236dca <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc474>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc474
081c7aea +0x0f8:  mov    %eax,-0xc(%ebp)
081c7aed +0x0fb:  movl   $0x10,0x8(%esp)
081c7af5 +0x103:  movl   $0x0,0x4(%esp)
081c7afd +0x10b:  mov    -0xc(%ebp),%eax
081c7b00 +0x10e:  mov    %eax,(%esp)
081c7b03 +0x111:  call   0807dcc0 <_init+0x5b8>
081c7b08 +0x116:  mov    0x10(%ebp),%eax
081c7b0b +0x119:  movzbl 0xd(%eax),%eax
081c7b0f +0x11d:  movsbl %al,%eax
081c7b12 +0x120:  mov    %eax,0x4(%esp)
081c7b16 +0x124:  mov    0xc(%ebp),%eax
081c7b19 +0x127:  mov    %eax,(%esp)
081c7b1c +0x12a:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
081c7b21 +0x12f:  mov    %eax,%edx
081c7b23 +0x131:  mov    -0xc(%ebp),%eax
081c7b26 +0x134:  mov    %edx,(%eax)
081c7b28 +0x136:  mov    0xc(%ebp),%eax
081c7b2b +0x139:  mov    %eax,(%esp)
081c7b2e +0x13c:  call   081348fe <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x505>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x505
081c7b33 +0x141:  test   %al,%al
081c7b35 +0x143:  je     081c7b5a <+0x168>
081c7b37 +0x145:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
081c7b3c +0x14a:  lea    -0x14(%ebp),%edx
081c7b3f +0x14d:  mov    %edx,0x8(%esp)
081c7b43 +0x151:  movl   $0x5,0x4(%esp)
081c7b4b +0x159:  mov    %eax,(%esp)
081c7b4e +0x15c:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
081c7b53 +0x161:  mov    $0x1,%ebx
081c7b58 +0x166:  jmp    081c7b98 <+0x1a6>
081c7b5a +0x168:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
081c7b5f +0x16d:  lea    -0x14(%ebp),%edx
081c7b62 +0x170:  mov    %edx,0x8(%esp)
081c7b66 +0x174:  movl   $0x2,0x4(%esp)
081c7b6e +0x17c:  mov    %eax,(%esp)
081c7b71 +0x17f:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
081c7b76 +0x184:  mov    $0x1,%ebx
081c7b7b +0x189:  jmp    081c7b98 <+0x1a6>
081c7b7d +0x18b:  mov    %edx,%ebx
081c7b7f +0x18d:  mov    %eax,%esi
081c7b81 +0x18f:  lea    -0x14(%ebp),%eax
081c7b84 +0x192:  mov    %eax,(%esp)
081c7b87 +0x195:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
081c7b8c +0x19a:  mov    %esi,%eax
081c7b8e +0x19c:  mov    %ebx,%edx
081c7b90 +0x19e:  mov    %eax,(%esp)
081c7b93 +0x1a1:  call   08ae3750 <_Unwind_Resume>
081c7b98 +0x1a6:  lea    -0x14(%ebp),%eax
081c7b9b +0x1a9:  mov    %eax,(%esp)
081c7b9e +0x1ac:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
081c7ba3 +0x1b1:  mov    %ebx,%eax
081c7ba5 +0x1b3:  add    $0x20,%esp
081c7ba8 +0x1b6:  pop    %ebx
081c7ba9 +0x1b7:  pop    %esi
081c7baa +0x1b8:  pop    %ebp
081c7bab +0x1b9:  ret
```

## 反编译 C

```c
// DisPatcher_SelectCharac::RequestBlackCount @ 0x81c79f2

/* DisPatcher_SelectCharac::RequestBlackCount(CUser*, MSG_CHARAC_SELECT&) */

undefined4 __thiscall
DisPatcher_SelectCharac::RequestBlackCount
          (DisPatcher_SelectCharac *this,CUser *param_1,MSG_CHARAC_SELECT *param_2)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  int iVar4;
  undefined4 uVar5;
  CStreamGuard local_18 [8];
  SIG_REQ_BLACK_COUNT *local_10;
  
  pSVar2 = (Stream *)
           StreamPool::Acquire(GlobalData::s_stream_pool,"PacketDispatcher_Impl_1.cpp",0x1862);
  CStreamGuard::CStreamGuard(local_18,pSVar2,true);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 081c7a44 to 081c7b75 has its CatchHandler @ 081c7b7d */
  CStreamGuard::operator<<(pCVar3,0xb3);
  iVar4 = CUser::GetUID(param_1);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar3,iVar4);
  CUser::DisableCharacInfo(param_1,7);
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
  local_10 = CStreamGuard::GetInBuffer<SIG_REQ_BLACK_COUNT>(pCVar3);
  memset(local_10,0,0x10);
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
