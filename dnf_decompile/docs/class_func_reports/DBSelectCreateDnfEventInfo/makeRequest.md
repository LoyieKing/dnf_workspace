# makeRequest

`_ZN26DBSelectCreateDnfEventInfo11makeRequestEv`

`DBSelectCreateDnfEventInfo::makeRequest()`

| 类 | 地址 |
|---|---|
| `DBSelectCreateDnfEventInfo` | `0x0815ba94` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0815ba94  _ZN26DBSelectCreateDnfEventInfo11makeRequestEv
#           DBSelectCreateDnfEventInfo::makeRequest()
# range [0x0815ba94, 0x0815bb8b]
0815ba94 +0x00:  push   %ebp
0815ba95 +0x01:  mov    %esp,%ebp
0815ba97 +0x03:  push   %esi
0815ba98 +0x04:  push   %ebx
0815ba99 +0x05:  sub    $0x20,%esp
0815ba9c +0x08:  mov    &_ZN10GlobalData15s_event_managerE,%eax
0815baa1 +0x0d:  movl   $0xa0,0x4(%esp)
0815baa9 +0x15:  mov    %eax,(%esp)
0815baac +0x18:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
0815bab1 +0x1d:  mov    %eax,-0xc(%ebp)
0815bab4 +0x20:  cmpl   $0x0,-0xc(%ebp)
0815bab8 +0x24:  je     0815badb <+0x47>
0815baba +0x26:  mov    -0xc(%ebp),%eax
0815babd +0x29:  mov    (%eax),%eax
0815babf +0x2b:  add    $0x34,%eax
0815bac2 +0x2e:  mov    (%eax),%edx
0815bac4 +0x30:  movl   $0x0,0x4(%esp)
0815bacc +0x38:  mov    -0xc(%ebp),%eax
0815bacf +0x3b:  mov    %eax,(%esp)
0815bad2 +0x3e:  call   *%edx
0815bad4 +0x40:  xor    $0x1,%eax
0815bad7 +0x43:  test   %al,%al
0815bad9 +0x45:  je     0815bae2 <+0x4e>
0815badb +0x47:  mov    $0x1,%eax
0815bae0 +0x4c:  jmp    0815bae7 <+0x53>
0815bae2 +0x4e:  mov    $0x0,%eax
0815bae7 +0x53:  test   %al,%al
0815bae9 +0x55:  jne    0815bb84 <+0xf0>
0815baef +0x5b:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0815baf4 +0x60:  movl   $0x1e4,0x8(%esp)
0815bafc +0x68:  movl   $"localtaiwan/Dispatcher/Taiwan_DbThread.cpp",0x4(%esp)
0815bb04 +0x70:  mov    %eax,(%esp)
0815bb07 +0x73:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0815bb0c +0x78:  movl   $0x1,0x8(%esp)
0815bb14 +0x80:  mov    %eax,0x4(%esp)
0815bb18 +0x84:  lea    -0x14(%ebp),%eax
0815bb1b +0x87:  mov    %eax,(%esp)
0815bb1e +0x8a:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0815bb23 +0x8f:  movl   $0xffffffff,0x8(%esp)
0815bb2b +0x97:  movl   $0x9,0x4(%esp)
0815bb33 +0x9f:  lea    -0x14(%ebp),%eax
0815bb36 +0xa2:  mov    %eax,(%esp)
0815bb39 +0xa5:  call   08163950 <_ZN6Taiwan15internal_streamER12CStreamGuardN18TaiwanInternalPack1TEi>  ; Taiwan::internal_stream(CStreamGuard&, TaiwanInternalPack::T, int)
0815bb3e +0xaa:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0815bb43 +0xaf:  lea    -0x14(%ebp),%edx
0815bb46 +0xb2:  mov    %edx,0x8(%esp)
0815bb4a +0xb6:  movl   $0x2,0x4(%esp)
0815bb52 +0xbe:  mov    %eax,(%esp)
0815bb55 +0xc1:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0815bb5a +0xc6:  jmp    0815bb77 <+0xe3>
0815bb5c +0xc8:  mov    %edx,%ebx
0815bb5e +0xca:  mov    %eax,%esi
0815bb60 +0xcc:  lea    -0x14(%ebp),%eax
0815bb63 +0xcf:  mov    %eax,(%esp)
0815bb66 +0xd2:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0815bb6b +0xd7:  mov    %esi,%eax
0815bb6d +0xd9:  mov    %ebx,%edx
0815bb6f +0xdb:  mov    %eax,(%esp)
0815bb72 +0xde:  call   08ae3750 <_Unwind_Resume>
0815bb77 +0xe3:  lea    -0x14(%ebp),%eax
0815bb7a +0xe6:  mov    %eax,(%esp)
0815bb7d +0xe9:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0815bb82 +0xee:  jmp    0815bb85 <+0xf1>
0815bb84 +0xf0:  nop
0815bb85 +0xf1:  add    $0x20,%esp
0815bb88 +0xf4:  pop    %ebx
0815bb89 +0xf5:  pop    %esi
0815bb8a +0xf6:  pop    %ebp
0815bb8b +0xf7:  ret
```

## 反编译 C

```c
// DBSelectCreateDnfEventInfo::makeRequest @ 0x815ba94

/* DBSelectCreateDnfEventInfo::makeRequest() */

void DBSelectCreateDnfEventInfo::makeRequest(void)

{
  bool bVar1;
  char cVar2;
  Stream *pSVar3;
  CStreamGuard local_18 [8];
  int *local_10;
  
  local_10 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0xa0);
  if (local_10 != (int *)0x0) {
    cVar2 = (**(code **)(*local_10 + 0x34))(local_10,0);
    if (cVar2 == '\x01') {
      bVar1 = false;
      goto LAB_0815bae7;
    }
  }
  bVar1 = true;
LAB_0815bae7:
  if (!bVar1) {
    pSVar3 = (Stream *)
             StreamPool::Acquire(GlobalData::s_stream_pool,
                                 "localtaiwan/Dispatcher/Taiwan_DbThread.cpp",0x1e4);
    CStreamGuard::CStreamGuard(local_18,pSVar3,true);
                    /* try { // try from 0815bb39 to 0815bb59 has its CatchHandler @ 0815bb5c */
    Taiwan::internal_stream(local_18,9,0xffffffff);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
    CStreamGuard::~CStreamGuard(local_18);
  }
  return;
}
```
