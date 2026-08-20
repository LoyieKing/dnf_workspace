# SendResult

`_ZN15DB_DeleteCharac10SendResultEiiP17SIG_DELETE_CHARAC`

`DB_DeleteCharac::SendResult(int, int, SIG_DELETE_CHARAC*)`

| 类 | 地址 |
|---|---|
| `DB_DeleteCharac` | `0x084034fe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084034fe  _ZN15DB_DeleteCharac10SendResultEiiP17SIG_DELETE_CHARAC
#           DB_DeleteCharac::SendResult(int, int, SIG_DELETE_CHARAC*)
# range [0x084034fe, 0x084035db]
084034fe +0x00:  push   %ebp
084034ff +0x01:  mov    %esp,%ebp
08403501 +0x03:  push   %esi
08403502 +0x04:  push   %ebx
08403503 +0x05:  sub    $0x20,%esp
08403506 +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0840350b +0x0d:  movl   $0x13b0,0x8(%esp)
08403513 +0x15:  movl   $"DBThread.cpp",0x4(%esp)
0840351b +0x1d:  mov    %eax,(%esp)
0840351e +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08403523 +0x25:  movl   $0x1,0x8(%esp)
0840352b +0x2d:  mov    %eax,0x4(%esp)
0840352f +0x31:  lea    -0x10(%ebp),%eax
08403532 +0x34:  mov    %eax,(%esp)
08403535 +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0840353a +0x3c:  lea    -0x10(%ebp),%eax
0840353d +0x3f:  mov    %eax,(%esp)
08403540 +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08403545 +0x47:  mov    0xc(%ebp),%edx
08403548 +0x4a:  mov    %edx,0x4(%esp)
0840354c +0x4e:  mov    %eax,(%esp)
0840354f +0x51:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08403554 +0x56:  lea    -0x10(%ebp),%eax
08403557 +0x59:  mov    %eax,(%esp)
0840355a +0x5c:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0840355f +0x61:  mov    0x10(%ebp),%edx
08403562 +0x64:  mov    %edx,0x4(%esp)
08403566 +0x68:  mov    %eax,(%esp)
08403569 +0x6b:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0840356e +0x70:  lea    -0x10(%ebp),%eax
08403571 +0x73:  mov    %eax,(%esp)
08403574 +0x76:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08403579 +0x7b:  movl   $0x14,0x8(%esp)
08403581 +0x83:  mov    0x14(%ebp),%edx
08403584 +0x86:  mov    %edx,0x4(%esp)
08403588 +0x8a:  mov    %eax,(%esp)
0840358b +0x8d:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08403590 +0x92:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08403595 +0x97:  lea    -0x10(%ebp),%edx
08403598 +0x9a:  mov    %edx,0x8(%esp)
0840359c +0x9e:  movl   $0x1,0x4(%esp)
084035a4 +0xa6:  mov    %eax,(%esp)
084035a7 +0xa9:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084035ac +0xae:  mov    $0x1,%ebx
084035b1 +0xb3:  lea    -0x10(%ebp),%eax
084035b4 +0xb6:  mov    %eax,(%esp)
084035b7 +0xb9:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084035bc +0xbe:  mov    %ebx,%eax
084035be +0xc0:  add    $0x20,%esp
084035c1 +0xc3:  pop    %ebx
084035c2 +0xc4:  pop    %esi
084035c3 +0xc5:  pop    %ebp
084035c4 +0xc6:  ret
084035c5 +0xc7:  mov    %edx,%ebx
084035c7 +0xc9:  mov    %eax,%esi
084035c9 +0xcb:  lea    -0x10(%ebp),%eax
084035cc +0xce:  mov    %eax,(%esp)
084035cf +0xd1:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084035d4 +0xd6:  mov    %esi,%eax
084035d6 +0xd8:  mov    %ebx,%edx
084035d8 +0xda:  mov    %eax,(%esp)
084035db +0xdd:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// DB_DeleteCharac::SendResult @ 0x84034fe

/* DB_DeleteCharac::SendResult(int, int, SIG_DELETE_CHARAC*) */

undefined4 __thiscall
DB_DeleteCharac::SendResult
          (DB_DeleteCharac *this,int param_1,int param_2,SIG_DELETE_CHARAC *param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x13b0);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0840354f to 084035ab has its CatchHandler @ 084035c5 */
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_14);
  CStreamGuard::put_binary(pCVar2,param_3,0x14);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return 1;
}
```
