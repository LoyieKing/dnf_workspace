# SendResult

`_ZN19DB_LoadDungeonClear10SendResultEiiP22SIG_LOAD_DUNGEON_CLEAR`

`DB_LoadDungeonClear::SendResult(int, int, SIG_LOAD_DUNGEON_CLEAR*)`

| 类 | 地址 |
|---|---|
| `DB_LoadDungeonClear` | `0x08419f0a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08419f0a  _ZN19DB_LoadDungeonClear10SendResultEiiP22SIG_LOAD_DUNGEON_CLEAR
#           DB_LoadDungeonClear::SendResult(int, int, SIG_LOAD_DUNGEON_CLEAR*)
# range [0x08419f0a, 0x08419fe7]
08419f0a +0x00:  push   %ebp
08419f0b +0x01:  mov    %esp,%ebp
08419f0d +0x03:  push   %esi
08419f0e +0x04:  push   %ebx
08419f0f +0x05:  sub    $0x20,%esp
08419f12 +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08419f17 +0x0d:  movl   $0x4bca,0x8(%esp)
08419f1f +0x15:  movl   $"DBThread.cpp",0x4(%esp)
08419f27 +0x1d:  mov    %eax,(%esp)
08419f2a +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08419f2f +0x25:  movl   $0x1,0x8(%esp)
08419f37 +0x2d:  mov    %eax,0x4(%esp)
08419f3b +0x31:  lea    -0x10(%ebp),%eax
08419f3e +0x34:  mov    %eax,(%esp)
08419f41 +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08419f46 +0x3c:  lea    -0x10(%ebp),%eax
08419f49 +0x3f:  mov    %eax,(%esp)
08419f4c +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08419f51 +0x47:  mov    0xc(%ebp),%edx
08419f54 +0x4a:  mov    %edx,0x4(%esp)
08419f58 +0x4e:  mov    %eax,(%esp)
08419f5b +0x51:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08419f60 +0x56:  lea    -0x10(%ebp),%eax
08419f63 +0x59:  mov    %eax,(%esp)
08419f66 +0x5c:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08419f6b +0x61:  mov    0x10(%ebp),%edx
08419f6e +0x64:  mov    %edx,0x4(%esp)
08419f72 +0x68:  mov    %eax,(%esp)
08419f75 +0x6b:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08419f7a +0x70:  lea    -0x10(%ebp),%eax
08419f7d +0x73:  mov    %eax,(%esp)
08419f80 +0x76:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08419f85 +0x7b:  movl   $0x1810,0x8(%esp)
08419f8d +0x83:  mov    0x14(%ebp),%edx
08419f90 +0x86:  mov    %edx,0x4(%esp)
08419f94 +0x8a:  mov    %eax,(%esp)
08419f97 +0x8d:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08419f9c +0x92:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08419fa1 +0x97:  lea    -0x10(%ebp),%edx
08419fa4 +0x9a:  mov    %edx,0x8(%esp)
08419fa8 +0x9e:  movl   $0x1,0x4(%esp)
08419fb0 +0xa6:  mov    %eax,(%esp)
08419fb3 +0xa9:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08419fb8 +0xae:  mov    $0x1,%ebx
08419fbd +0xb3:  lea    -0x10(%ebp),%eax
08419fc0 +0xb6:  mov    %eax,(%esp)
08419fc3 +0xb9:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08419fc8 +0xbe:  mov    %ebx,%eax
08419fca +0xc0:  add    $0x20,%esp
08419fcd +0xc3:  pop    %ebx
08419fce +0xc4:  pop    %esi
08419fcf +0xc5:  pop    %ebp
08419fd0 +0xc6:  ret
08419fd1 +0xc7:  mov    %edx,%ebx
08419fd3 +0xc9:  mov    %eax,%esi
08419fd5 +0xcb:  lea    -0x10(%ebp),%eax
08419fd8 +0xce:  mov    %eax,(%esp)
08419fdb +0xd1:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08419fe0 +0xd6:  mov    %esi,%eax
08419fe2 +0xd8:  mov    %ebx,%edx
08419fe4 +0xda:  mov    %eax,(%esp)
08419fe7 +0xdd:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// DB_LoadDungeonClear::SendResult @ 0x8419f0a

/* DB_LoadDungeonClear::SendResult(int, int, SIG_LOAD_DUNGEON_CLEAR*) */

undefined4 __thiscall
DB_LoadDungeonClear::SendResult
          (DB_LoadDungeonClear *this,int param_1,int param_2,SIG_LOAD_DUNGEON_CLEAR *param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x4bca);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 08419f5b to 08419fb7 has its CatchHandler @ 08419fd1 */
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_14);
  CStreamGuard::put_binary(pCVar2,param_3,0x1810);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return 1;
}
```
