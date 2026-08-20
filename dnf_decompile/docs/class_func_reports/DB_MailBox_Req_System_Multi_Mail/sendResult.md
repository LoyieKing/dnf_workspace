# sendResult

`_ZN32DB_MailBox_Req_System_Multi_Mail10sendResultEi17ENUM_SERVER_GROUP`

`DB_MailBox_Req_System_Multi_Mail::sendResult(int, ENUM_SERVER_GROUP)`

| 类 | 地址 |
|---|---|
| `DB_MailBox_Req_System_Multi_Mail` | `0x08443b6e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08443b6e  _ZN32DB_MailBox_Req_System_Multi_Mail10sendResultEi17ENUM_SERVER_GROUP
#           DB_MailBox_Req_System_Multi_Mail::sendResult(int, ENUM_SERVER_GROUP)
# range [0x08443b6e, 0x08443c61]
08443b6e +0x00:  push   %ebp
08443b6f +0x01:  mov    %esp,%ebp
08443b71 +0x03:  push   %esi
08443b72 +0x04:  push   %ebx
08443b73 +0x05:  sub    $0x20,%esp
08443b76 +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08443b7b +0x0d:  movl   $0xa5be,0x8(%esp)
08443b83 +0x15:  movl   $"DBThread.cpp",0x4(%esp)
08443b8b +0x1d:  mov    %eax,(%esp)
08443b8e +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08443b93 +0x25:  movl   $0x1,0x8(%esp)
08443b9b +0x2d:  mov    %eax,0x4(%esp)
08443b9f +0x31:  lea    -0x14(%ebp),%eax
08443ba2 +0x34:  mov    %eax,(%esp)
08443ba5 +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08443baa +0x3c:  lea    -0x14(%ebp),%eax
08443bad +0x3f:  mov    %eax,(%esp)
08443bb0 +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08443bb5 +0x47:  movl   $0x80,0x4(%esp)
08443bbd +0x4f:  mov    %eax,(%esp)
08443bc0 +0x52:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08443bc5 +0x57:  lea    -0x14(%ebp),%eax
08443bc8 +0x5a:  mov    %eax,(%esp)
08443bcb +0x5d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08443bd0 +0x62:  movl   $0xffffffff,0x4(%esp)
08443bd8 +0x6a:  mov    %eax,(%esp)
08443bdb +0x6d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08443be0 +0x72:  lea    -0x14(%ebp),%eax
08443be3 +0x75:  mov    %eax,(%esp)
08443be6 +0x78:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08443beb +0x7d:  mov    %eax,(%esp)
08443bee +0x80:  call   08197f8e <_GLOBAL__I__ZN4ARAD16CheckAccountItemEP5CUserjRN17PurchaseLimitItem4InfoE+0x199>  ; global constructors keyed to ARAD::CheckAccountItem(CUser*, unsigned int, PurchaseLimitItem::Info&)+0x199
08443bf3 +0x85:  mov    %eax,-0xc(%ebp)
08443bf6 +0x88:  mov    -0xc(%ebp),%eax
08443bf9 +0x8b:  movl   $0x0,(%eax)
08443bff +0x91:  mov    0xc(%ebp),%edx
08443c02 +0x94:  mov    -0xc(%ebp),%eax
08443c05 +0x97:  mov    %edx,0x4(%eax)
08443c08 +0x9a:  mov    0x10(%ebp),%edx
08443c0b +0x9d:  mov    -0xc(%ebp),%eax
08443c0e +0xa0:  mov    %edx,0x8(%eax)
08443c11 +0xa3:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08443c16 +0xa8:  lea    -0x14(%ebp),%edx
08443c19 +0xab:  mov    %edx,0x8(%esp)
08443c1d +0xaf:  movl   $0x1,0x4(%esp)
08443c25 +0xb7:  mov    %eax,(%esp)
08443c28 +0xba:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08443c2d +0xbf:  mov    $0x1,%ebx
08443c32 +0xc4:  lea    -0x14(%ebp),%eax
08443c35 +0xc7:  mov    %eax,(%esp)
08443c38 +0xca:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08443c3d +0xcf:  mov    %ebx,%eax
08443c3f +0xd1:  add    $0x20,%esp
08443c42 +0xd4:  pop    %ebx
08443c43 +0xd5:  pop    %esi
08443c44 +0xd6:  pop    %ebp
08443c45 +0xd7:  ret
08443c46 +0xd8:  mov    %edx,%ebx
08443c48 +0xda:  mov    %eax,%esi
08443c4a +0xdc:  lea    -0x14(%ebp),%eax
08443c4d +0xdf:  mov    %eax,(%esp)
08443c50 +0xe2:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08443c55 +0xe7:  mov    %esi,%eax
08443c57 +0xe9:  mov    %ebx,%edx
08443c59 +0xeb:  mov    %eax,(%esp)
08443c5c +0xee:  call   08ae3750 <_Unwind_Resume>
08443c61 +0xf3:  nop
```

## 反编译 C

```c
// DB_MailBox_Req_System_Multi_Mail::sendResult @ 0x8443b6e

/* DB_MailBox_Req_System_Multi_Mail::sendResult(int, ENUM_SERVER_GROUP) */

undefined4 __thiscall
DB_MailBox_Req_System_Multi_Mail::sendResult(undefined4 this,undefined4 param_1,undefined4 param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_MAILBOX_SEND_NEW_MAIL *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xa5be);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 08443bc0 to 08443c2c has its CatchHandler @ 08443c46 */
  CStreamGuard::operator<<(pCVar2,0x80);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_MAILBOX_SEND_NEW_MAIL>(pCVar2);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)(local_10 + 4) = param_1;
  *(undefined4 *)(local_10 + 8) = param_3;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return 1;
}
```
