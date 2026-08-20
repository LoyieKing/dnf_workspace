# SendResult

`_ZN15DB_CreateCharac10SendResultEiiP17SIG_CREATE_CHARAC`

`DB_CreateCharac::SendResult(int, int, SIG_CREATE_CHARAC*)`

| 类 | 地址 |
|---|---|
| `DB_CreateCharac` | `0x084027b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084027b0  _ZN15DB_CreateCharac10SendResultEiiP17SIG_CREATE_CHARAC
#           DB_CreateCharac::SendResult(int, int, SIG_CREATE_CHARAC*)
# range [0x084027b0, 0x0840288d]
084027b0 +0x00:  push   %ebp
084027b1 +0x01:  mov    %esp,%ebp
084027b3 +0x03:  push   %esi
084027b4 +0x04:  push   %ebx
084027b5 +0x05:  sub    $0x20,%esp
084027b8 +0x08:  mov    &_ZN10GlobalData17s_big_stream_poolE,%eax
084027bd +0x0d:  movl   $0x11db,0x8(%esp)
084027c5 +0x15:  movl   $"DBThread.cpp",0x4(%esp)
084027cd +0x1d:  mov    %eax,(%esp)
084027d0 +0x20:  call   08290262 <_ZN13BigStreamPool7AcquireEPKci>  ; BigStreamPool::Acquire(char const*, int)
084027d5 +0x25:  movl   $0x1,0x8(%esp)
084027dd +0x2d:  mov    %eax,0x4(%esp)
084027e1 +0x31:  lea    -0x10(%ebp),%eax
084027e4 +0x34:  mov    %eax,(%esp)
084027e7 +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
084027ec +0x3c:  lea    -0x10(%ebp),%eax
084027ef +0x3f:  mov    %eax,(%esp)
084027f2 +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084027f7 +0x47:  mov    0xc(%ebp),%edx
084027fa +0x4a:  mov    %edx,0x4(%esp)
084027fe +0x4e:  mov    %eax,(%esp)
08402801 +0x51:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08402806 +0x56:  lea    -0x10(%ebp),%eax
08402809 +0x59:  mov    %eax,(%esp)
0840280c +0x5c:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08402811 +0x61:  mov    0x10(%ebp),%edx
08402814 +0x64:  mov    %edx,0x4(%esp)
08402818 +0x68:  mov    %eax,(%esp)
0840281b +0x6b:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08402820 +0x70:  lea    -0x10(%ebp),%eax
08402823 +0x73:  mov    %eax,(%esp)
08402826 +0x76:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0840282b +0x7b:  movl   $0x5354,0x8(%esp)
08402833 +0x83:  mov    0x14(%ebp),%edx
08402836 +0x86:  mov    %edx,0x4(%esp)
0840283a +0x8a:  mov    %eax,(%esp)
0840283d +0x8d:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08402842 +0x92:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08402847 +0x97:  lea    -0x10(%ebp),%edx
0840284a +0x9a:  mov    %edx,0x8(%esp)
0840284e +0x9e:  movl   $0x1,0x4(%esp)
08402856 +0xa6:  mov    %eax,(%esp)
08402859 +0xa9:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0840285e +0xae:  mov    $0x1,%ebx
08402863 +0xb3:  lea    -0x10(%ebp),%eax
08402866 +0xb6:  mov    %eax,(%esp)
08402869 +0xb9:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0840286e +0xbe:  mov    %ebx,%eax
08402870 +0xc0:  add    $0x20,%esp
08402873 +0xc3:  pop    %ebx
08402874 +0xc4:  pop    %esi
08402875 +0xc5:  pop    %ebp
08402876 +0xc6:  ret
08402877 +0xc7:  mov    %edx,%ebx
08402879 +0xc9:  mov    %eax,%esi
0840287b +0xcb:  lea    -0x10(%ebp),%eax
0840287e +0xce:  mov    %eax,(%esp)
08402881 +0xd1:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08402886 +0xd6:  mov    %esi,%eax
08402888 +0xd8:  mov    %ebx,%edx
0840288a +0xda:  mov    %eax,(%esp)
0840288d +0xdd:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// DB_CreateCharac::SendResult @ 0x84027b0

/* DB_CreateCharac::SendResult(int, int, SIG_CREATE_CHARAC*) */

undefined4 __thiscall
DB_CreateCharac::SendResult
          (DB_CreateCharac *this,int param_1,int param_2,SIG_CREATE_CHARAC *param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)BigStreamPool::Acquire(GlobalData::s_big_stream_pool,"DBThread.cpp",0x11db);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 08402801 to 0840285d has its CatchHandler @ 08402877 */
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_14);
  CStreamGuard::put_binary(pCVar2,param_3,0x5354);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return 1;
}
```
