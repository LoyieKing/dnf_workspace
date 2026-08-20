# _sendResult

`_ZN25DB_SecurityCardRetransfer11_sendResultEiPcPKcS2_10ENUM_ERROR`

`DB_SecurityCardRetransfer::_sendResult(int, char*, char const*, char const*, ENUM_ERROR)`

| 类 | 地址 |
|---|---|
| `DB_SecurityCardRetransfer` | `0x0842c7be` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0842c7be  _ZN25DB_SecurityCardRetransfer11_sendResultEiPcPKcS2_10ENUM_ERROR
#           DB_SecurityCardRetransfer::_sendResult(int, char*, char const*, char const*, ENUM_ERROR)
# range [0x0842c7be, 0x0842c905]
0842c7be +0x000:  push   %ebp
0842c7bf +0x001:  mov    %esp,%ebp
0842c7c1 +0x003:  push   %esi
0842c7c2 +0x004:  push   %ebx
0842c7c3 +0x005:  sub    $0x20,%esp
0842c7c6 +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0842c7cb +0x00d:  movl   $0x6fd2,0x8(%esp)
0842c7d3 +0x015:  movl   $"DBThread.cpp",0x4(%esp)
0842c7db +0x01d:  mov    %eax,(%esp)
0842c7de +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0842c7e3 +0x025:  movl   $0x1,0x8(%esp)
0842c7eb +0x02d:  mov    %eax,0x4(%esp)
0842c7ef +0x031:  lea    -0x14(%ebp),%eax
0842c7f2 +0x034:  mov    %eax,(%esp)
0842c7f5 +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0842c7fa +0x03c:  lea    -0x14(%ebp),%eax
0842c7fd +0x03f:  mov    %eax,(%esp)
0842c800 +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842c805 +0x047:  movl   $0x138,0x4(%esp)
0842c80d +0x04f:  mov    %eax,(%esp)
0842c810 +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0842c815 +0x057:  lea    -0x14(%ebp),%eax
0842c818 +0x05a:  mov    %eax,(%esp)
0842c81b +0x05d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842c820 +0x062:  mov    0xc(%ebp),%edx
0842c823 +0x065:  mov    %edx,0x4(%esp)
0842c827 +0x069:  mov    %eax,(%esp)
0842c82a +0x06c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0842c82f +0x071:  lea    -0x14(%ebp),%eax
0842c832 +0x074:  mov    %eax,(%esp)
0842c835 +0x077:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0842c83a +0x07c:  mov    %eax,(%esp)
0842c83d +0x07f:  call   0845275c <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x5372>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x5372
0842c842 +0x084:  mov    %eax,-0xc(%ebp)
0842c845 +0x087:  mov    -0xc(%ebp),%eax
0842c848 +0x08a:  mov    0x1c(%ebp),%edx
0842c84b +0x08d:  mov    %edx,0x88(%eax)
0842c851 +0x093:  cmpl   $0x0,0x14(%ebp)
0842c855 +0x097:  je     0842c874 <+0xb6>
0842c857 +0x099:  mov    -0xc(%ebp),%eax
0842c85a +0x09c:  lea    0x4(%eax),%edx
0842c85d +0x09f:  movl   $0x21,0x8(%esp)
0842c865 +0x0a7:  mov    0x14(%ebp),%eax
0842c868 +0x0aa:  mov    %eax,0x4(%esp)
0842c86c +0x0ae:  mov    %edx,(%esp)
0842c86f +0x0b1:  call   0807d8d0 <_init+0x1c8>
0842c874 +0x0b6:  cmpl   $0x0,0x18(%ebp)
0842c878 +0x0ba:  je     0842c897 <+0xd9>
0842c87a +0x0bc:  mov    -0xc(%ebp),%eax
0842c87d +0x0bf:  lea    0x2b(%eax),%edx
0842c880 +0x0c2:  movl   $0x27,0x8(%esp)
0842c888 +0x0ca:  mov    0x18(%ebp),%eax
0842c88b +0x0cd:  mov    %eax,0x4(%esp)
0842c88f +0x0d1:  mov    %edx,(%esp)
0842c892 +0x0d4:  call   0807d8d0 <_init+0x1c8>
0842c897 +0x0d9:  cmpl   $0x0,0x10(%ebp)
0842c89b +0x0dd:  je     0842c8ba <+0xfc>
0842c89d +0x0df:  mov    -0xc(%ebp),%eax
0842c8a0 +0x0e2:  lea    0x52(%eax),%edx
0842c8a3 +0x0e5:  movl   $0xc,0x8(%esp)
0842c8ab +0x0ed:  mov    0x10(%ebp),%eax
0842c8ae +0x0f0:  mov    %eax,0x4(%esp)
0842c8b2 +0x0f4:  mov    %edx,(%esp)
0842c8b5 +0x0f7:  call   0807d8d0 <_init+0x1c8>
0842c8ba +0x0fc:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0842c8bf +0x101:  lea    -0x14(%ebp),%edx
0842c8c2 +0x104:  mov    %edx,0x8(%esp)
0842c8c6 +0x108:  movl   $0x1,0x4(%esp)
0842c8ce +0x110:  mov    %eax,(%esp)
0842c8d1 +0x113:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0842c8d6 +0x118:  jmp    0842c8f3 <+0x135>
0842c8d8 +0x11a:  mov    %edx,%ebx
0842c8da +0x11c:  mov    %eax,%esi
0842c8dc +0x11e:  lea    -0x14(%ebp),%eax
0842c8df +0x121:  mov    %eax,(%esp)
0842c8e2 +0x124:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0842c8e7 +0x129:  mov    %esi,%eax
0842c8e9 +0x12b:  mov    %ebx,%edx
0842c8eb +0x12d:  mov    %eax,(%esp)
0842c8ee +0x130:  call   08ae3750 <_Unwind_Resume>
0842c8f3 +0x135:  lea    -0x14(%ebp),%eax
0842c8f6 +0x138:  mov    %eax,(%esp)
0842c8f9 +0x13b:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0842c8fe +0x140:  add    $0x20,%esp
0842c901 +0x143:  pop    %ebx
0842c902 +0x144:  pop    %esi
0842c903 +0x145:  pop    %ebp
0842c904 +0x146:  ret
0842c905 +0x147:  nop
```

## 反编译 C

```c
// DB_SecurityCardRetransfer::_sendResult @ 0x842c7be

/* DB_SecurityCardRetransfer::_sendResult(int, char*, char const*, char const*, ENUM_ERROR) */

void __thiscall
DB_SecurityCardRetransfer::_sendResult
          (undefined4 this,int param_1,char *param_2,char *param_3,char *param_4,undefined4 param_6)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_SECURITY_CARD_RETRANSFER *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x6fd2);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0842c810 to 0842c8d5 has its CatchHandler @ 0842c8d8 */
  CStreamGuard::operator<<(pCVar2,0x138);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_SECURITY_CARD_RETRANSFER>(pCVar2);
  *(undefined4 *)(local_10 + 0x88) = param_6;
  if (param_3 != (char *)0x0) {
    strncpy((char *)(local_10 + 4),param_3,0x21);
  }
  if (param_4 != (char *)0x0) {
    strncpy((char *)(local_10 + 0x2b),param_4,0x27);
  }
  if (param_2 != (char *)0x0) {
    strncpy((char *)(local_10 + 0x52),param_2,0xc);
  }
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```
