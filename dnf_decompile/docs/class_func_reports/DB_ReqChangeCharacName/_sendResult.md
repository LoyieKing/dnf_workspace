# _sendResult

`_ZN22DB_ReqChangeCharacName11_sendResultEPK22SIG_CHANGE_CHARAC_NAMEii`

`DB_ReqChangeCharacName::_sendResult(SIG_CHANGE_CHARAC_NAME const*, int, int)`

| 类 | 地址 |
|---|---|
| `DB_ReqChangeCharacName` | `0x084266a4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084266a4  _ZN22DB_ReqChangeCharacName11_sendResultEPK22SIG_CHANGE_CHARAC_NAMEii
#           DB_ReqChangeCharacName::_sendResult(SIG_CHANGE_CHARAC_NAME const*, int, int)
# range [0x084266a4, 0x084267c1]
084266a4 +0x000:  push   %ebp
084266a5 +0x001:  mov    %esp,%ebp
084266a7 +0x003:  push   %esi
084266a8 +0x004:  push   %ebx
084266a9 +0x005:  sub    $0x20,%esp
084266ac +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
084266b1 +0x00d:  movl   $0x64f8,0x8(%esp)
084266b9 +0x015:  movl   $"DBThread.cpp",0x4(%esp)
084266c1 +0x01d:  mov    %eax,(%esp)
084266c4 +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
084266c9 +0x025:  movl   $0x1,0x8(%esp)
084266d1 +0x02d:  mov    %eax,0x4(%esp)
084266d5 +0x031:  lea    -0x14(%ebp),%eax
084266d8 +0x034:  mov    %eax,(%esp)
084266db +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
084266e0 +0x03c:  lea    -0x14(%ebp),%eax
084266e3 +0x03f:  mov    %eax,(%esp)
084266e6 +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084266eb +0x047:  movl   $0xc3,0x4(%esp)
084266f3 +0x04f:  mov    %eax,(%esp)
084266f6 +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084266fb +0x057:  lea    -0x14(%ebp),%eax
084266fe +0x05a:  mov    %eax,(%esp)
08426701 +0x05d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08426706 +0x062:  mov    0x10(%ebp),%edx
08426709 +0x065:  mov    %edx,0x4(%esp)
0842670d +0x069:  mov    %eax,(%esp)
08426710 +0x06c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08426715 +0x071:  lea    -0x14(%ebp),%eax
08426718 +0x074:  mov    %eax,(%esp)
0842671b +0x077:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08426720 +0x07c:  mov    %eax,(%esp)
08426723 +0x07f:  call   084520be <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x4cd4>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x4cd4
08426728 +0x084:  mov    %eax,-0xc(%ebp)
0842672b +0x087:  mov    0xc(%ebp),%eax
0842672e +0x08a:  mov    0x24(%eax),%edx
08426731 +0x08d:  mov    -0xc(%ebp),%eax
08426734 +0x090:  mov    %edx,0x28(%eax)
08426737 +0x093:  mov    -0xc(%ebp),%eax
0842673a +0x096:  mov    0x14(%ebp),%edx
0842673d +0x099:  mov    %edx,0x24(%eax)
08426740 +0x09c:  mov    0xc(%ebp),%eax
08426743 +0x09f:  mov    (%eax),%edx
08426745 +0x0a1:  mov    -0xc(%ebp),%eax
08426748 +0x0a4:  mov    %edx,(%eax)
0842674a +0x0a6:  mov    0xc(%ebp),%eax
0842674d +0x0a9:  mov    0x28(%eax),%edx
08426750 +0x0ac:  mov    -0xc(%ebp),%eax
08426753 +0x0af:  mov    %edx,0x2c(%eax)
08426756 +0x0b2:  mov    0xc(%ebp),%eax
08426759 +0x0b5:  lea    0x4(%eax),%edx
0842675c +0x0b8:  mov    -0xc(%ebp),%eax
0842675f +0x0bb:  add    $0x4,%eax
08426762 +0x0be:  movl   $0x1d,0x8(%esp)
0842676a +0x0c6:  mov    %edx,0x4(%esp)
0842676e +0x0ca:  mov    %eax,(%esp)
08426771 +0x0cd:  call   0807d8d0 <_init+0x1c8>
08426776 +0x0d2:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0842677b +0x0d7:  lea    -0x14(%ebp),%edx
0842677e +0x0da:  mov    %edx,0x8(%esp)
08426782 +0x0de:  movl   $0x1,0x4(%esp)
0842678a +0x0e6:  mov    %eax,(%esp)
0842678d +0x0e9:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08426792 +0x0ee:  jmp    084267af <+0x10b>
08426794 +0x0f0:  mov    %edx,%ebx
08426796 +0x0f2:  mov    %eax,%esi
08426798 +0x0f4:  lea    -0x14(%ebp),%eax
0842679b +0x0f7:  mov    %eax,(%esp)
0842679e +0x0fa:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084267a3 +0x0ff:  mov    %esi,%eax
084267a5 +0x101:  mov    %ebx,%edx
084267a7 +0x103:  mov    %eax,(%esp)
084267aa +0x106:  call   08ae3750 <_Unwind_Resume>
084267af +0x10b:  lea    -0x14(%ebp),%eax
084267b2 +0x10e:  mov    %eax,(%esp)
084267b5 +0x111:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084267ba +0x116:  add    $0x20,%esp
084267bd +0x119:  pop    %ebx
084267be +0x11a:  pop    %esi
084267bf +0x11b:  pop    %ebp
084267c0 +0x11c:  ret
084267c1 +0x11d:  nop
```

## 反编译 C

```c
// DB_ReqChangeCharacName::_sendResult @ 0x84266a4

/* DB_ReqChangeCharacName::_sendResult(SIG_CHANGE_CHARAC_NAME const*, int, int) */

void __thiscall
DB_ReqChangeCharacName::_sendResult
          (DB_ReqChangeCharacName *this,SIG_CHANGE_CHARAC_NAME *param_1,int param_2,int param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_CHANGE_CHARAC_NAME *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x64f8);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 084266f6 to 08426791 has its CatchHandler @ 08426794 */
  CStreamGuard::operator<<(pCVar2,0xc3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_CHANGE_CHARAC_NAME>(pCVar2);
  *(undefined4 *)(local_10 + 0x28) = *(undefined4 *)(param_1 + 0x24);
  *(int *)(local_10 + 0x24) = param_3;
  *(undefined4 *)local_10 = *(undefined4 *)param_1;
  *(undefined4 *)(local_10 + 0x2c) = *(undefined4 *)(param_1 + 0x28);
  strncpy((char *)(local_10 + 4),(char *)(param_1 + 4),0x1d);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```
