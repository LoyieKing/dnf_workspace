# _sendResult

`_ZN20DB_SecurityCardIssue11_sendResultEiPKcS1_S1_S1_10ENUM_ERROR`

`DB_SecurityCardIssue::_sendResult(int, char const*, char const*, char const*, char const*, ENUM_ERROR)`

| 类 | 地址 |
|---|---|
| `DB_SecurityCardIssue` | `0x0842b410` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0842b410  _ZN20DB_SecurityCardIssue11_sendResultEiPKcS1_S1_S1_10ENUM_ERROR
#           DB_SecurityCardIssue::_sendResult(int, char const*, char const*, char const*, char const*, ENUM_ERROR)
# range [0x0842b410, 0x0842b579]
0842b410 +0x000:  push   %ebp
0842b411 +0x001:  mov    %esp,%ebp
0842b413 +0x003:  push   %esi
0842b414 +0x004:  push   %ebx
0842b415 +0x005:  sub    $0x20,%esp
0842b418 +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0842b41d +0x00d:  movl   $0x6dec,0x8(%esp)
0842b425 +0x015:  movl   $"DBThread.cpp",0x4(%esp)
0842b42d +0x01d:  mov    %eax,(%esp)
0842b430 +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0842b435 +0x025:  movl   $0x1,0x8(%esp)
0842b43d +0x02d:  mov    %eax,0x4(%esp)
0842b441 +0x031:  lea    -0x14(%ebp),%eax
0842b444 +0x034:  mov    %eax,(%esp)
0842b447 +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0842b44c +0x03c:  lea    -0x14(%ebp),%eax
0842b44f +0x03f:  mov    %eax,(%esp)
0842b452 +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842b457 +0x047:  movl   $0xfd,0x4(%esp)
0842b45f +0x04f:  mov    %eax,(%esp)
0842b462 +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0842b467 +0x057:  lea    -0x14(%ebp),%eax
0842b46a +0x05a:  mov    %eax,(%esp)
0842b46d +0x05d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842b472 +0x062:  mov    0xc(%ebp),%edx
0842b475 +0x065:  mov    %edx,0x4(%esp)
0842b479 +0x069:  mov    %eax,(%esp)
0842b47c +0x06c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0842b481 +0x071:  lea    -0x14(%ebp),%eax
0842b484 +0x074:  mov    %eax,(%esp)
0842b487 +0x077:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0842b48c +0x07c:  mov    %eax,(%esp)
0842b48f +0x07f:  call   08452608 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x521e>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x521e
0842b494 +0x084:  mov    %eax,-0xc(%ebp)
0842b497 +0x087:  mov    -0xc(%ebp),%eax
0842b49a +0x08a:  mov    0x20(%ebp),%edx
0842b49d +0x08d:  mov    %edx,0x8c(%eax)
0842b4a3 +0x093:  cmpl   $0x0,0x14(%ebp)
0842b4a7 +0x097:  je     0842b4c6 <+0xb6>
0842b4a9 +0x099:  mov    -0xc(%ebp),%eax
0842b4ac +0x09c:  lea    0x4(%eax),%edx
0842b4af +0x09f:  movl   $0x21,0x8(%esp)
0842b4b7 +0x0a7:  mov    0x14(%ebp),%eax
0842b4ba +0x0aa:  mov    %eax,0x4(%esp)
0842b4be +0x0ae:  mov    %edx,(%esp)
0842b4c1 +0x0b1:  call   0807d8d0 <_init+0x1c8>
0842b4c6 +0x0b6:  cmpl   $0x0,0x18(%ebp)
0842b4ca +0x0ba:  je     0842b4e9 <+0xd9>
0842b4cc +0x0bc:  mov    -0xc(%ebp),%eax
0842b4cf +0x0bf:  lea    0x37(%eax),%edx
0842b4d2 +0x0c2:  movl   $0x27,0x8(%esp)
0842b4da +0x0ca:  mov    0x18(%ebp),%eax
0842b4dd +0x0cd:  mov    %eax,0x4(%esp)
0842b4e1 +0x0d1:  mov    %edx,(%esp)
0842b4e4 +0x0d4:  call   0807d8d0 <_init+0x1c8>
0842b4e9 +0x0d9:  cmpl   $0x0,0x1c(%ebp)
0842b4ed +0x0dd:  je     0842b50c <+0xfc>
0842b4ef +0x0df:  mov    -0xc(%ebp),%eax
0842b4f2 +0x0e2:  lea    0x5e(%eax),%edx
0842b4f5 +0x0e5:  movl   $0x5,0x8(%esp)
0842b4fd +0x0ed:  mov    0x1c(%ebp),%eax
0842b500 +0x0f0:  mov    %eax,0x4(%esp)
0842b504 +0x0f4:  mov    %edx,(%esp)
0842b507 +0x0f7:  call   0807d8d0 <_init+0x1c8>
0842b50c +0x0fc:  cmpl   $0x0,0x10(%ebp)
0842b510 +0x100:  je     0842b52f <+0x11f>
0842b512 +0x102:  mov    -0xc(%ebp),%eax
0842b515 +0x105:  lea    0x25(%eax),%edx
0842b518 +0x108:  movl   $0xc,0x8(%esp)
0842b520 +0x110:  mov    0x10(%ebp),%eax
0842b523 +0x113:  mov    %eax,0x4(%esp)
0842b527 +0x117:  mov    %edx,(%esp)
0842b52a +0x11a:  call   0807d8d0 <_init+0x1c8>
0842b52f +0x11f:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0842b534 +0x124:  lea    -0x14(%ebp),%edx
0842b537 +0x127:  mov    %edx,0x8(%esp)
0842b53b +0x12b:  movl   $0x1,0x4(%esp)
0842b543 +0x133:  mov    %eax,(%esp)
0842b546 +0x136:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0842b54b +0x13b:  jmp    0842b568 <+0x158>
0842b54d +0x13d:  mov    %edx,%ebx
0842b54f +0x13f:  mov    %eax,%esi
0842b551 +0x141:  lea    -0x14(%ebp),%eax
0842b554 +0x144:  mov    %eax,(%esp)
0842b557 +0x147:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0842b55c +0x14c:  mov    %esi,%eax
0842b55e +0x14e:  mov    %ebx,%edx
0842b560 +0x150:  mov    %eax,(%esp)
0842b563 +0x153:  call   08ae3750 <_Unwind_Resume>
0842b568 +0x158:  lea    -0x14(%ebp),%eax
0842b56b +0x15b:  mov    %eax,(%esp)
0842b56e +0x15e:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0842b573 +0x163:  add    $0x20,%esp
0842b576 +0x166:  pop    %ebx
0842b577 +0x167:  pop    %esi
0842b578 +0x168:  pop    %ebp
0842b579 +0x169:  ret
```

## 反编译 C

```c
// DB_SecurityCardIssue::_sendResult @ 0x842b410

/* DB_SecurityCardIssue::_sendResult(int, char const*, char const*, char const*, char const*,
   ENUM_ERROR) */

void __thiscall
DB_SecurityCardIssue::_sendResult
          (undefined4 this,int param_1,char *param_2,char *param_3,char *param_4,char *param_5,
          undefined4 param_7)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_SECURITY_CARD_ISSUE *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x6dec);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0842b462 to 0842b54a has its CatchHandler @ 0842b54d */
  CStreamGuard::operator<<(pCVar2,0xfd);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_SECURITY_CARD_ISSUE>(pCVar2);
  *(undefined4 *)(local_10 + 0x8c) = param_7;
  if (param_3 != (char *)0x0) {
    strncpy((char *)(local_10 + 4),param_3,0x21);
  }
  if (param_4 != (char *)0x0) {
    strncpy((char *)(local_10 + 0x37),param_4,0x27);
  }
  if (param_5 != (char *)0x0) {
    strncpy((char *)(local_10 + 0x5e),param_5,5);
  }
  if (param_2 != (char *)0x0) {
    strncpy((char *)(local_10 + 0x25),param_2,0xc);
  }
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```
