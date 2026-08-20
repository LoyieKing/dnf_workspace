# SendResult

`_ZN17DB_GetUserRegdate10SendResultEiiP20SIG_GET_USER_REGDATE`

`DB_GetUserRegdate::SendResult(int, int, SIG_GET_USER_REGDATE*)`

| 类 | 地址 |
|---|---|
| `DB_GetUserRegdate` | `0x0844309c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0844309c  _ZN17DB_GetUserRegdate10SendResultEiiP20SIG_GET_USER_REGDATE
#           DB_GetUserRegdate::SendResult(int, int, SIG_GET_USER_REGDATE*)
# range [0x0844309c, 0x08443179]
0844309c +0x00:  push   %ebp
0844309d +0x01:  mov    %esp,%ebp
0844309f +0x03:  push   %esi
084430a0 +0x04:  push   %ebx
084430a1 +0x05:  sub    $0x20,%esp
084430a4 +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
084430a9 +0x0d:  movl   $0xa4c1,0x8(%esp)
084430b1 +0x15:  movl   $"DBThread.cpp",0x4(%esp)
084430b9 +0x1d:  mov    %eax,(%esp)
084430bc +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
084430c1 +0x25:  movl   $0x1,0x8(%esp)
084430c9 +0x2d:  mov    %eax,0x4(%esp)
084430cd +0x31:  lea    -0x10(%ebp),%eax
084430d0 +0x34:  mov    %eax,(%esp)
084430d3 +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
084430d8 +0x3c:  lea    -0x10(%ebp),%eax
084430db +0x3f:  mov    %eax,(%esp)
084430de +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084430e3 +0x47:  mov    0xc(%ebp),%edx
084430e6 +0x4a:  mov    %edx,0x4(%esp)
084430ea +0x4e:  mov    %eax,(%esp)
084430ed +0x51:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084430f2 +0x56:  lea    -0x10(%ebp),%eax
084430f5 +0x59:  mov    %eax,(%esp)
084430f8 +0x5c:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084430fd +0x61:  mov    0x10(%ebp),%edx
08443100 +0x64:  mov    %edx,0x4(%esp)
08443104 +0x68:  mov    %eax,(%esp)
08443107 +0x6b:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0844310c +0x70:  lea    -0x10(%ebp),%eax
0844310f +0x73:  mov    %eax,(%esp)
08443112 +0x76:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08443117 +0x7b:  movl   $0xc,0x8(%esp)
0844311f +0x83:  mov    0x14(%ebp),%edx
08443122 +0x86:  mov    %edx,0x4(%esp)
08443126 +0x8a:  mov    %eax,(%esp)
08443129 +0x8d:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
0844312e +0x92:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08443133 +0x97:  lea    -0x10(%ebp),%edx
08443136 +0x9a:  mov    %edx,0x8(%esp)
0844313a +0x9e:  movl   $0x1,0x4(%esp)
08443142 +0xa6:  mov    %eax,(%esp)
08443145 +0xa9:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0844314a +0xae:  mov    $0x1,%ebx
0844314f +0xb3:  lea    -0x10(%ebp),%eax
08443152 +0xb6:  mov    %eax,(%esp)
08443155 +0xb9:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0844315a +0xbe:  mov    %ebx,%eax
0844315c +0xc0:  add    $0x20,%esp
0844315f +0xc3:  pop    %ebx
08443160 +0xc4:  pop    %esi
08443161 +0xc5:  pop    %ebp
08443162 +0xc6:  ret
08443163 +0xc7:  mov    %edx,%ebx
08443165 +0xc9:  mov    %eax,%esi
08443167 +0xcb:  lea    -0x10(%ebp),%eax
0844316a +0xce:  mov    %eax,(%esp)
0844316d +0xd1:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08443172 +0xd6:  mov    %esi,%eax
08443174 +0xd8:  mov    %ebx,%edx
08443176 +0xda:  mov    %eax,(%esp)
08443179 +0xdd:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// DB_GetUserRegdate::SendResult @ 0x844309c

/* DB_GetUserRegdate::SendResult(int, int, SIG_GET_USER_REGDATE*) */

undefined4 __thiscall
DB_GetUserRegdate::SendResult
          (DB_GetUserRegdate *this,int param_1,int param_2,SIG_GET_USER_REGDATE *param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xa4c1);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 084430ed to 08443149 has its CatchHandler @ 08443163 */
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_14);
  CStreamGuard::put_binary(pCVar2,param_3,0xc);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return 1;
}
```
