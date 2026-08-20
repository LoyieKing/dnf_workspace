# SendResult

`_ZN19DB_SaveDungeonClear10SendResultEiiP22SIG_SAVE_DUNGEON_CLEAR`

`DB_SaveDungeonClear::SendResult(int, int, SIG_SAVE_DUNGEON_CLEAR*)`

| 类 | 地址 |
|---|---|
| `DB_SaveDungeonClear` | `0x0841a1a2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0841a1a2  _ZN19DB_SaveDungeonClear10SendResultEiiP22SIG_SAVE_DUNGEON_CLEAR
#           DB_SaveDungeonClear::SendResult(int, int, SIG_SAVE_DUNGEON_CLEAR*)
# range [0x0841a1a2, 0x0841a27f]
0841a1a2 +0x00:  push   %ebp
0841a1a3 +0x01:  mov    %esp,%ebp
0841a1a5 +0x03:  push   %esi
0841a1a6 +0x04:  push   %ebx
0841a1a7 +0x05:  sub    $0x20,%esp
0841a1aa +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0841a1af +0x0d:  movl   $0x4c23,0x8(%esp)
0841a1b7 +0x15:  movl   $"DBThread.cpp",0x4(%esp)
0841a1bf +0x1d:  mov    %eax,(%esp)
0841a1c2 +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0841a1c7 +0x25:  movl   $0x1,0x8(%esp)
0841a1cf +0x2d:  mov    %eax,0x4(%esp)
0841a1d3 +0x31:  lea    -0x10(%ebp),%eax
0841a1d6 +0x34:  mov    %eax,(%esp)
0841a1d9 +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0841a1de +0x3c:  lea    -0x10(%ebp),%eax
0841a1e1 +0x3f:  mov    %eax,(%esp)
0841a1e4 +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0841a1e9 +0x47:  mov    0xc(%ebp),%edx
0841a1ec +0x4a:  mov    %edx,0x4(%esp)
0841a1f0 +0x4e:  mov    %eax,(%esp)
0841a1f3 +0x51:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0841a1f8 +0x56:  lea    -0x10(%ebp),%eax
0841a1fb +0x59:  mov    %eax,(%esp)
0841a1fe +0x5c:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0841a203 +0x61:  mov    0x10(%ebp),%edx
0841a206 +0x64:  mov    %edx,0x4(%esp)
0841a20a +0x68:  mov    %eax,(%esp)
0841a20d +0x6b:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0841a212 +0x70:  lea    -0x10(%ebp),%eax
0841a215 +0x73:  mov    %eax,(%esp)
0841a218 +0x76:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0841a21d +0x7b:  movl   $0x180c,0x8(%esp)
0841a225 +0x83:  mov    0x14(%ebp),%edx
0841a228 +0x86:  mov    %edx,0x4(%esp)
0841a22c +0x8a:  mov    %eax,(%esp)
0841a22f +0x8d:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
0841a234 +0x92:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0841a239 +0x97:  lea    -0x10(%ebp),%edx
0841a23c +0x9a:  mov    %edx,0x8(%esp)
0841a240 +0x9e:  movl   $0x1,0x4(%esp)
0841a248 +0xa6:  mov    %eax,(%esp)
0841a24b +0xa9:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0841a250 +0xae:  mov    $0x1,%ebx
0841a255 +0xb3:  lea    -0x10(%ebp),%eax
0841a258 +0xb6:  mov    %eax,(%esp)
0841a25b +0xb9:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0841a260 +0xbe:  mov    %ebx,%eax
0841a262 +0xc0:  add    $0x20,%esp
0841a265 +0xc3:  pop    %ebx
0841a266 +0xc4:  pop    %esi
0841a267 +0xc5:  pop    %ebp
0841a268 +0xc6:  ret
0841a269 +0xc7:  mov    %edx,%ebx
0841a26b +0xc9:  mov    %eax,%esi
0841a26d +0xcb:  lea    -0x10(%ebp),%eax
0841a270 +0xce:  mov    %eax,(%esp)
0841a273 +0xd1:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0841a278 +0xd6:  mov    %esi,%eax
0841a27a +0xd8:  mov    %ebx,%edx
0841a27c +0xda:  mov    %eax,(%esp)
0841a27f +0xdd:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// DB_SaveDungeonClear::SendResult @ 0x841a1a2

/* DB_SaveDungeonClear::SendResult(int, int, SIG_SAVE_DUNGEON_CLEAR*) */

undefined4 __thiscall
DB_SaveDungeonClear::SendResult
          (DB_SaveDungeonClear *this,int param_1,int param_2,SIG_SAVE_DUNGEON_CLEAR *param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x4c23);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0841a1f3 to 0841a24f has its CatchHandler @ 0841a269 */
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_14);
  CStreamGuard::put_binary(pCVar2,param_3,0x180c);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return 1;
}
```
