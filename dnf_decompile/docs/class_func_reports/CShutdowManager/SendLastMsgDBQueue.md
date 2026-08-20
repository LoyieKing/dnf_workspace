# SendLastMsgDBQueue

`_ZN15CShutdowManager18SendLastMsgDBQueueEP5CUser`

`CShutdowManager::SendLastMsgDBQueue(CUser*)`

| 类 | 地址 |
|---|---|
| `CShutdowManager` | `0x082a37c8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082a37c8  _ZN15CShutdowManager18SendLastMsgDBQueueEP5CUser
#           CShutdowManager::SendLastMsgDBQueue(CUser*)
# range [0x082a37c8, 0x082a396d]
082a37c8 +0x000:  push   %ebp
082a37c9 +0x001:  mov    %esp,%ebp
082a37cb +0x003:  push   %esi
082a37cc +0x004:  push   %ebx
082a37cd +0x005:  sub    $0x20,%esp
082a37d0 +0x008:  mov    0x8(%ebp),%eax
082a37d3 +0x00b:  movzbl (%eax),%eax
082a37d6 +0x00e:  xor    $0x1,%eax
082a37d9 +0x011:  test   %al,%al
082a37db +0x013:  je     082a37e7 <+0x1f>
082a37dd +0x015:  mov    $0x1,%eax
082a37e2 +0x01a:  jmp    082a3966 <+0x19e>
082a37e7 +0x01f:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
082a37ec +0x024:  movl   $0x324c,0x8(%esp)
082a37f4 +0x02c:  movl   $"App.cpp",0x4(%esp)
082a37fc +0x034:  mov    %eax,(%esp)
082a37ff +0x037:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
082a3804 +0x03c:  movl   $0x1,0x8(%esp)
082a380c +0x044:  mov    %eax,0x4(%esp)
082a3810 +0x048:  lea    -0x10(%ebp),%eax
082a3813 +0x04b:  mov    %eax,(%esp)
082a3816 +0x04e:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
082a381b +0x053:  lea    -0x10(%ebp),%eax
082a381e +0x056:  mov    %eax,(%esp)
082a3821 +0x059:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
082a3826 +0x05e:  movl   $0x95,0x4(%esp)
082a382e +0x066:  mov    %eax,(%esp)
082a3831 +0x069:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
082a3836 +0x06e:  lea    -0x10(%ebp),%eax
082a3839 +0x071:  mov    %eax,(%esp)
082a383c +0x074:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
082a3841 +0x079:  movl   $0xffffffff,0x4(%esp)
082a3849 +0x081:  mov    %eax,(%esp)
082a384c +0x084:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
082a3851 +0x089:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
082a3856 +0x08e:  lea    -0x10(%ebp),%edx
082a3859 +0x091:  mov    %edx,0x8(%esp)
082a385d +0x095:  movl   $0x2,0x4(%esp)
082a3865 +0x09d:  mov    %eax,(%esp)
082a3868 +0x0a0:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
082a386d +0x0a5:  jmp    082a388a <+0xc2>
082a386f +0x0a7:  mov    %edx,%ebx
082a3871 +0x0a9:  mov    %eax,%esi
082a3873 +0x0ab:  lea    -0x10(%ebp),%eax
082a3876 +0x0ae:  mov    %eax,(%esp)
082a3879 +0x0b1:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
082a387e +0x0b6:  mov    %esi,%eax
082a3880 +0x0b8:  mov    %ebx,%edx
082a3882 +0x0ba:  mov    %eax,(%esp)
082a3885 +0x0bd:  call   08ae3750 <_Unwind_Resume>
082a388a +0x0c2:  lea    -0x10(%ebp),%eax
082a388d +0x0c5:  mov    %eax,(%esp)
082a3890 +0x0c8:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
082a3895 +0x0cd:  mov    0x8(%ebp),%eax
082a3898 +0x0d0:  mov    0x4(%eax),%eax
082a389b +0x0d3:  lea    0x1(%eax),%edx
082a389e +0x0d6:  mov    0x8(%ebp),%eax
082a38a1 +0x0d9:  mov    %edx,0x4(%eax)
082a38a4 +0x0dc:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
082a38a9 +0x0e1:  movl   $0x3257,0x8(%esp)
082a38b1 +0x0e9:  movl   $"App.cpp",0x4(%esp)
082a38b9 +0x0f1:  mov    %eax,(%esp)
082a38bc +0x0f4:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
082a38c1 +0x0f9:  movl   $0x1,0x8(%esp)
082a38c9 +0x101:  mov    %eax,0x4(%esp)
082a38cd +0x105:  lea    -0x18(%ebp),%eax
082a38d0 +0x108:  mov    %eax,(%esp)
082a38d3 +0x10b:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
082a38d8 +0x110:  lea    -0x18(%ebp),%eax
082a38db +0x113:  mov    %eax,(%esp)
082a38de +0x116:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
082a38e3 +0x11b:  movl   $0x96,0x4(%esp)
082a38eb +0x123:  mov    %eax,(%esp)
082a38ee +0x126:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
082a38f3 +0x12b:  lea    -0x18(%ebp),%eax
082a38f6 +0x12e:  mov    %eax,(%esp)
082a38f9 +0x131:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
082a38fe +0x136:  movl   $0xffffffff,0x4(%esp)
082a3906 +0x13e:  mov    %eax,(%esp)
082a3909 +0x141:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
082a390e +0x146:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
082a3913 +0x14b:  lea    -0x18(%ebp),%edx
082a3916 +0x14e:  mov    %edx,0x8(%esp)
082a391a +0x152:  movl   $0x4,0x4(%esp)
082a3922 +0x15a:  mov    %eax,(%esp)
082a3925 +0x15d:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
082a392a +0x162:  jmp    082a3947 <+0x17f>
082a392c +0x164:  mov    %edx,%ebx
082a392e +0x166:  mov    %eax,%esi
082a3930 +0x168:  lea    -0x18(%ebp),%eax
082a3933 +0x16b:  mov    %eax,(%esp)
082a3936 +0x16e:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
082a393b +0x173:  mov    %esi,%eax
082a393d +0x175:  mov    %ebx,%edx
082a393f +0x177:  mov    %eax,(%esp)
082a3942 +0x17a:  call   08ae3750 <_Unwind_Resume>
082a3947 +0x17f:  lea    -0x18(%ebp),%eax
082a394a +0x182:  mov    %eax,(%esp)
082a394d +0x185:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
082a3952 +0x18a:  mov    0x8(%ebp),%eax
082a3955 +0x18d:  mov    0x4(%eax),%eax
082a3958 +0x190:  lea    0x1(%eax),%edx
082a395b +0x193:  mov    0x8(%ebp),%eax
082a395e +0x196:  mov    %edx,0x4(%eax)
082a3961 +0x199:  mov    $0x1,%eax
082a3966 +0x19e:  add    $0x20,%esp
082a3969 +0x1a1:  pop    %ebx
082a396a +0x1a2:  pop    %esi
082a396b +0x1a3:  pop    %ebp
082a396c +0x1a4:  ret
082a396d +0x1a5:  nop
```

## 反编译 C

```c
// CShutdowManager::SendLastMsgDBQueue @ 0x82a37c8

/* CShutdowManager::SendLastMsgDBQueue(CUser*) */

undefined4 CShutdowManager::SendLastMsgDBQueue(CUser *param_1)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_1c [8];
  CStreamGuard local_14 [8];
  
  if (*param_1 == (CUser)0x1) {
    pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"App.cpp",0x324c);
    CStreamGuard::CStreamGuard(local_14,pSVar1,true);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 082a3831 to 082a386c has its CatchHandler @ 082a386f */
    CStreamGuard::operator<<(pCVar2,0x95);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
    CStreamGuard::operator<<(pCVar2,-1);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
    CStreamGuard::~CStreamGuard(local_14);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
    pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"App.cpp",0x3257);
    CStreamGuard::CStreamGuard(local_1c,pSVar1,true);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
                    /* try { // try from 082a38ee to 082a3929 has its CatchHandler @ 082a392c */
    CStreamGuard::operator<<(pCVar2,0x96);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
    CStreamGuard::operator<<(pCVar2,-1);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_1c);
    CStreamGuard::~CStreamGuard(local_1c);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  return 1;
}
```
