# RequestDBTicket

`_ZN23DisPatcher_SelectCharac15RequestDBTicketEP5CUserR17MSG_CHARAC_SELECT`

`DisPatcher_SelectCharac::RequestDBTicket(CUser*, MSG_CHARAC_SELECT&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_SelectCharac` | `0x081c727c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c727c  _ZN23DisPatcher_SelectCharac15RequestDBTicketEP5CUserR17MSG_CHARAC_SELECT
#           DisPatcher_SelectCharac::RequestDBTicket(CUser*, MSG_CHARAC_SELECT&)
# range [0x081c727c, 0x081c7435]
081c727c +0x000:  push   %ebp
081c727d +0x001:  mov    %esp,%ebp
081c727f +0x003:  push   %esi
081c7280 +0x004:  push   %ebx
081c7281 +0x005:  sub    $0x20,%esp
081c7284 +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
081c7289 +0x00d:  movl   $0x17db,0x8(%esp)
081c7291 +0x015:  movl   $"PacketDispatcher_Impl_1.cpp",0x4(%esp)
081c7299 +0x01d:  mov    %eax,(%esp)
081c729c +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
081c72a1 +0x025:  movl   $0x1,0x8(%esp)
081c72a9 +0x02d:  mov    %eax,0x4(%esp)
081c72ad +0x031:  lea    -0x14(%ebp),%eax
081c72b0 +0x034:  mov    %eax,(%esp)
081c72b3 +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
081c72b8 +0x03c:  lea    -0x14(%ebp),%eax
081c72bb +0x03f:  mov    %eax,(%esp)
081c72be +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081c72c3 +0x047:  movl   $0xb,0x4(%esp)
081c72cb +0x04f:  mov    %eax,(%esp)
081c72ce +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081c72d3 +0x057:  mov    0xc(%ebp),%eax
081c72d6 +0x05a:  mov    %eax,(%esp)
081c72d9 +0x05d:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
081c72de +0x062:  mov    %eax,%ebx
081c72e0 +0x064:  lea    -0x14(%ebp),%eax
081c72e3 +0x067:  mov    %eax,(%esp)
081c72e6 +0x06a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081c72eb +0x06f:  mov    %ebx,0x4(%esp)
081c72ef +0x073:  mov    %eax,(%esp)
081c72f2 +0x076:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081c72f7 +0x07b:  movl   $0x4,0x4(%esp)
081c72ff +0x083:  mov    0xc(%ebp),%eax
081c7302 +0x086:  mov    %eax,(%esp)
081c7305 +0x089:  call   081348ce <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4d5>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4d5
081c730a +0x08e:  mov    0xc(%ebp),%eax
081c730d +0x091:  mov    %eax,(%esp)
081c7310 +0x094:  call   081348fe <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x505>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x505
081c7315 +0x099:  test   %al,%al
081c7317 +0x09b:  je     081c7361 <+0xe5>
081c7319 +0x09d:  mov    0xc(%ebp),%eax
081c731c +0x0a0:  mov    %eax,(%esp)
081c731f +0x0a3:  call   081348f0 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4f7>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4f7
081c7324 +0x0a8:  mov    %eax,%ebx
081c7326 +0x0aa:  lea    -0x14(%ebp),%eax
081c7329 +0x0ad:  mov    %eax,(%esp)
081c732c +0x0b0:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081c7331 +0x0b5:  mov    %ebx,0x4(%esp)
081c7335 +0x0b9:  mov    %eax,(%esp)
081c7338 +0x0bc:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081c733d +0x0c1:  mov    0xc(%ebp),%eax
081c7340 +0x0c4:  mov    %eax,(%esp)
081c7343 +0x0c7:  call   081348e2 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4e9>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4e9
081c7348 +0x0cc:  mov    %eax,%ebx
081c734a +0x0ce:  lea    -0x14(%ebp),%eax
081c734d +0x0d1:  mov    %eax,(%esp)
081c7350 +0x0d4:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081c7355 +0x0d9:  mov    %ebx,0x4(%esp)
081c7359 +0x0dd:  mov    %eax,(%esp)
081c735c +0x0e0:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081c7361 +0x0e5:  lea    -0x14(%ebp),%eax
081c7364 +0x0e8:  mov    %eax,(%esp)
081c7367 +0x0eb:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
081c736c +0x0f0:  mov    %eax,(%esp)
081c736f +0x0f3:  call   08236d72 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc41c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc41c
081c7374 +0x0f8:  mov    %eax,-0xc(%ebp)
081c7377 +0x0fb:  movl   $0x19c,0x8(%esp)
081c737f +0x103:  movl   $0x0,0x4(%esp)
081c7387 +0x10b:  mov    -0xc(%ebp),%eax
081c738a +0x10e:  mov    %eax,(%esp)
081c738d +0x111:  call   0807dcc0 <_init+0x5b8>
081c7392 +0x116:  mov    0x10(%ebp),%eax
081c7395 +0x119:  movzbl 0xd(%eax),%eax
081c7399 +0x11d:  movsbl %al,%eax
081c739c +0x120:  mov    %eax,0x4(%esp)
081c73a0 +0x124:  mov    0xc(%ebp),%eax
081c73a3 +0x127:  mov    %eax,(%esp)
081c73a6 +0x12a:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
081c73ab +0x12f:  mov    %eax,%edx
081c73ad +0x131:  mov    -0xc(%ebp),%eax
081c73b0 +0x134:  mov    %edx,(%eax)
081c73b2 +0x136:  mov    0xc(%ebp),%eax
081c73b5 +0x139:  mov    %eax,(%esp)
081c73b8 +0x13c:  call   081348fe <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x505>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x505
081c73bd +0x141:  test   %al,%al
081c73bf +0x143:  je     081c73e4 <+0x168>
081c73c1 +0x145:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
081c73c6 +0x14a:  lea    -0x14(%ebp),%edx
081c73c9 +0x14d:  mov    %edx,0x8(%esp)
081c73cd +0x151:  movl   $0x5,0x4(%esp)
081c73d5 +0x159:  mov    %eax,(%esp)
081c73d8 +0x15c:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
081c73dd +0x161:  mov    $0x1,%ebx
081c73e2 +0x166:  jmp    081c7422 <+0x1a6>
081c73e4 +0x168:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
081c73e9 +0x16d:  lea    -0x14(%ebp),%edx
081c73ec +0x170:  mov    %edx,0x8(%esp)
081c73f0 +0x174:  movl   $0x2,0x4(%esp)
081c73f8 +0x17c:  mov    %eax,(%esp)
081c73fb +0x17f:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
081c7400 +0x184:  mov    $0x1,%ebx
081c7405 +0x189:  jmp    081c7422 <+0x1a6>
081c7407 +0x18b:  mov    %edx,%ebx
081c7409 +0x18d:  mov    %eax,%esi
081c740b +0x18f:  lea    -0x14(%ebp),%eax
081c740e +0x192:  mov    %eax,(%esp)
081c7411 +0x195:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
081c7416 +0x19a:  mov    %esi,%eax
081c7418 +0x19c:  mov    %ebx,%edx
081c741a +0x19e:  mov    %eax,(%esp)
081c741d +0x1a1:  call   08ae3750 <_Unwind_Resume>
081c7422 +0x1a6:  lea    -0x14(%ebp),%eax
081c7425 +0x1a9:  mov    %eax,(%esp)
081c7428 +0x1ac:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
081c742d +0x1b1:  mov    %ebx,%eax
081c742f +0x1b3:  add    $0x20,%esp
081c7432 +0x1b6:  pop    %ebx
081c7433 +0x1b7:  pop    %esi
081c7434 +0x1b8:  pop    %ebp
081c7435 +0x1b9:  ret
```

## 反编译 C

```c
// DisPatcher_SelectCharac::RequestDBTicket @ 0x81c727c

/* DisPatcher_SelectCharac::RequestDBTicket(CUser*, MSG_CHARAC_SELECT&) */

undefined4 __thiscall
DisPatcher_SelectCharac::RequestDBTicket
          (DisPatcher_SelectCharac *this,CUser *param_1,MSG_CHARAC_SELECT *param_2)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  int iVar4;
  undefined4 uVar5;
  CStreamGuard local_18 [8];
  SIG_LOAD_TICKET *local_10;
  
  pSVar2 = (Stream *)
           StreamPool::Acquire(GlobalData::s_stream_pool,"PacketDispatcher_Impl_1.cpp",0x17db);
  CStreamGuard::CStreamGuard(local_18,pSVar2,true);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 081c72ce to 081c73ff has its CatchHandler @ 081c7407 */
  CStreamGuard::operator<<(pCVar3,0xb);
  iVar4 = CUser::GetUID(param_1);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar3,iVar4);
  CUser::DisableCharacInfo(param_1,4);
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
  local_10 = CStreamGuard::GetInBuffer<SIG_LOAD_TICKET>(pCVar3);
  memset(local_10,0,0x19c);
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
