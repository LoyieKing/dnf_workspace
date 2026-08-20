# SendResult

`_ZN22DB_LoadKillMonsterInfo10SendResultEiiP26SIG_LOAD_KILL_MONSTER_INFO`

`DB_LoadKillMonsterInfo::SendResult(int, int, SIG_LOAD_KILL_MONSTER_INFO*)`

| 类 | 地址 |
|---|---|
| `DB_LoadKillMonsterInfo` | `0x084419ac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084419ac  _ZN22DB_LoadKillMonsterInfo10SendResultEiiP26SIG_LOAD_KILL_MONSTER_INFO
#           DB_LoadKillMonsterInfo::SendResult(int, int, SIG_LOAD_KILL_MONSTER_INFO*)
# range [0x084419ac, 0x08441a89]
084419ac +0x00:  push   %ebp
084419ad +0x01:  mov    %esp,%ebp
084419af +0x03:  push   %esi
084419b0 +0x04:  push   %ebx
084419b1 +0x05:  sub    $0x20,%esp
084419b4 +0x08:  mov    &_ZN10GlobalData17s_big_stream_poolE,%eax
084419b9 +0x0d:  movl   $0xa0c1,0x8(%esp)
084419c1 +0x15:  movl   $"DBThread.cpp",0x4(%esp)
084419c9 +0x1d:  mov    %eax,(%esp)
084419cc +0x20:  call   08290262 <_ZN13BigStreamPool7AcquireEPKci>  ; BigStreamPool::Acquire(char const*, int)
084419d1 +0x25:  movl   $0x1,0x8(%esp)
084419d9 +0x2d:  mov    %eax,0x4(%esp)
084419dd +0x31:  lea    -0x10(%ebp),%eax
084419e0 +0x34:  mov    %eax,(%esp)
084419e3 +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
084419e8 +0x3c:  lea    -0x10(%ebp),%eax
084419eb +0x3f:  mov    %eax,(%esp)
084419ee +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084419f3 +0x47:  mov    0xc(%ebp),%edx
084419f6 +0x4a:  mov    %edx,0x4(%esp)
084419fa +0x4e:  mov    %eax,(%esp)
084419fd +0x51:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08441a02 +0x56:  lea    -0x10(%ebp),%eax
08441a05 +0x59:  mov    %eax,(%esp)
08441a08 +0x5c:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08441a0d +0x61:  mov    0x10(%ebp),%edx
08441a10 +0x64:  mov    %edx,0x4(%esp)
08441a14 +0x68:  mov    %eax,(%esp)
08441a17 +0x6b:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08441a1c +0x70:  lea    -0x10(%ebp),%eax
08441a1f +0x73:  mov    %eax,(%esp)
08441a22 +0x76:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08441a27 +0x7b:  movl   $0xafcc,0x8(%esp)
08441a2f +0x83:  mov    0x14(%ebp),%edx
08441a32 +0x86:  mov    %edx,0x4(%esp)
08441a36 +0x8a:  mov    %eax,(%esp)
08441a39 +0x8d:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08441a3e +0x92:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08441a43 +0x97:  lea    -0x10(%ebp),%edx
08441a46 +0x9a:  mov    %edx,0x8(%esp)
08441a4a +0x9e:  movl   $0x1,0x4(%esp)
08441a52 +0xa6:  mov    %eax,(%esp)
08441a55 +0xa9:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08441a5a +0xae:  mov    $0x1,%ebx
08441a5f +0xb3:  lea    -0x10(%ebp),%eax
08441a62 +0xb6:  mov    %eax,(%esp)
08441a65 +0xb9:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08441a6a +0xbe:  mov    %ebx,%eax
08441a6c +0xc0:  add    $0x20,%esp
08441a6f +0xc3:  pop    %ebx
08441a70 +0xc4:  pop    %esi
08441a71 +0xc5:  pop    %ebp
08441a72 +0xc6:  ret
08441a73 +0xc7:  mov    %edx,%ebx
08441a75 +0xc9:  mov    %eax,%esi
08441a77 +0xcb:  lea    -0x10(%ebp),%eax
08441a7a +0xce:  mov    %eax,(%esp)
08441a7d +0xd1:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08441a82 +0xd6:  mov    %esi,%eax
08441a84 +0xd8:  mov    %ebx,%edx
08441a86 +0xda:  mov    %eax,(%esp)
08441a89 +0xdd:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// DB_LoadKillMonsterInfo::SendResult @ 0x84419ac

/* DB_LoadKillMonsterInfo::SendResult(int, int, SIG_LOAD_KILL_MONSTER_INFO*) */

undefined4 __thiscall
DB_LoadKillMonsterInfo::SendResult
          (DB_LoadKillMonsterInfo *this,int param_1,int param_2,SIG_LOAD_KILL_MONSTER_INFO *param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)BigStreamPool::Acquire(GlobalData::s_big_stream_pool,"DBThread.cpp",0xa0c1);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 084419fd to 08441a59 has its CatchHandler @ 08441a73 */
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_14);
  CStreamGuard::put_binary(pCVar2,param_3,0xafcc);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return 1;
}
```
