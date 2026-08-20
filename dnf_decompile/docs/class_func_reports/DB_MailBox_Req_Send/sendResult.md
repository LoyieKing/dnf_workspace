# sendResult

`_ZN19DB_MailBox_Req_Send10sendResultEiii17ENUM_SERVER_GROUP`

`DB_MailBox_Req_Send::sendResult(int, int, int, ENUM_SERVER_GROUP)`

| 类 | 地址 |
|---|---|
| `DB_MailBox_Req_Send` | `0x0841f75a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0841f75a  _ZN19DB_MailBox_Req_Send10sendResultEiii17ENUM_SERVER_GROUP
#           DB_MailBox_Req_Send::sendResult(int, int, int, ENUM_SERVER_GROUP)
# range [0x0841f75a, 0x0841f84d]
0841f75a +0x00:  push   %ebp
0841f75b +0x01:  mov    %esp,%ebp
0841f75d +0x03:  push   %esi
0841f75e +0x04:  push   %ebx
0841f75f +0x05:  sub    $0x20,%esp
0841f762 +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0841f767 +0x0d:  movl   $0x559f,0x8(%esp)
0841f76f +0x15:  movl   $"DBThread.cpp",0x4(%esp)
0841f777 +0x1d:  mov    %eax,(%esp)
0841f77a +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0841f77f +0x25:  movl   $0x1,0x8(%esp)
0841f787 +0x2d:  mov    %eax,0x4(%esp)
0841f78b +0x31:  lea    -0x14(%ebp),%eax
0841f78e +0x34:  mov    %eax,(%esp)
0841f791 +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0841f796 +0x3c:  lea    -0x14(%ebp),%eax
0841f799 +0x3f:  mov    %eax,(%esp)
0841f79c +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0841f7a1 +0x47:  movl   $0x80,0x4(%esp)
0841f7a9 +0x4f:  mov    %eax,(%esp)
0841f7ac +0x52:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0841f7b1 +0x57:  lea    -0x14(%ebp),%eax
0841f7b4 +0x5a:  mov    %eax,(%esp)
0841f7b7 +0x5d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0841f7bc +0x62:  movl   $0xffffffff,0x4(%esp)
0841f7c4 +0x6a:  mov    %eax,(%esp)
0841f7c7 +0x6d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0841f7cc +0x72:  lea    -0x14(%ebp),%eax
0841f7cf +0x75:  mov    %eax,(%esp)
0841f7d2 +0x78:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0841f7d7 +0x7d:  mov    %eax,(%esp)
0841f7da +0x80:  call   08197f8e <_GLOBAL__I__ZN4ARAD16CheckAccountItemEP5CUserjRN17PurchaseLimitItem4InfoE+0x199>  ; global constructors keyed to ARAD::CheckAccountItem(CUser*, unsigned int, PurchaseLimitItem::Info&)+0x199
0841f7df +0x85:  mov    %eax,-0xc(%ebp)
0841f7e2 +0x88:  mov    -0xc(%ebp),%eax
0841f7e5 +0x8b:  movl   $0x0,(%eax)
0841f7eb +0x91:  mov    0x10(%ebp),%edx
0841f7ee +0x94:  mov    -0xc(%ebp),%eax
0841f7f1 +0x97:  mov    %edx,0x4(%eax)
0841f7f4 +0x9a:  mov    0x14(%ebp),%edx
0841f7f7 +0x9d:  mov    -0xc(%ebp),%eax
0841f7fa +0xa0:  mov    %edx,0x8(%eax)
0841f7fd +0xa3:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0841f802 +0xa8:  lea    -0x14(%ebp),%edx
0841f805 +0xab:  mov    %edx,0x8(%esp)
0841f809 +0xaf:  movl   $0x1,0x4(%esp)
0841f811 +0xb7:  mov    %eax,(%esp)
0841f814 +0xba:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0841f819 +0xbf:  mov    $0x1,%ebx
0841f81e +0xc4:  lea    -0x14(%ebp),%eax
0841f821 +0xc7:  mov    %eax,(%esp)
0841f824 +0xca:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0841f829 +0xcf:  mov    %ebx,%eax
0841f82b +0xd1:  add    $0x20,%esp
0841f82e +0xd4:  pop    %ebx
0841f82f +0xd5:  pop    %esi
0841f830 +0xd6:  pop    %ebp
0841f831 +0xd7:  ret
0841f832 +0xd8:  mov    %edx,%ebx
0841f834 +0xda:  mov    %eax,%esi
0841f836 +0xdc:  lea    -0x14(%ebp),%eax
0841f839 +0xdf:  mov    %eax,(%esp)
0841f83c +0xe2:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0841f841 +0xe7:  mov    %esi,%eax
0841f843 +0xe9:  mov    %ebx,%edx
0841f845 +0xeb:  mov    %eax,(%esp)
0841f848 +0xee:  call   08ae3750 <_Unwind_Resume>
0841f84d +0xf3:  nop
```

## 反编译 C

```c
// DB_MailBox_Req_Send::sendResult @ 0x841f75a

/* DB_MailBox_Req_Send::sendResult(int, int, int, ENUM_SERVER_GROUP) */

undefined4
DB_MailBox_Req_Send::sendResult
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_MAILBOX_SEND_NEW_MAIL *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x559f);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0841f7ac to 0841f818 has its CatchHandler @ 0841f832 */
  CStreamGuard::operator<<(pCVar2,0x80);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_MAILBOX_SEND_NEW_MAIL>(pCVar2);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)(local_10 + 4) = param_3;
  *(undefined4 *)(local_10 + 8) = param_4;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return 1;
}
```
