# InsertDatabase

`_ZN17CHelpedPartyCount14InsertDatabaseEv`

`CHelpedPartyCount::InsertDatabase()`

| 类 | 地址 |
|---|---|
| `CHelpedPartyCount` | `0x0860e8aa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860e8aa  _ZN17CHelpedPartyCount14InsertDatabaseEv
#           CHelpedPartyCount::InsertDatabase()
# range [0x0860e8aa, 0x0860e9df]
0860e8aa +0x000:  push   %ebp
0860e8ab +0x001:  mov    %esp,%ebp
0860e8ad +0x003:  push   %esi
0860e8ae +0x004:  push   %ebx
0860e8af +0x005:  sub    $0x20,%esp
0860e8b2 +0x008:  mov    0x8(%ebp),%eax
0860e8b5 +0x00b:  add    $0x4,%eax
0860e8b8 +0x00e:  mov    %eax,(%esp)
0860e8bb +0x011:  call   08235840 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xaeea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xaeea
0860e8c0 +0x016:  test   %eax,%eax
0860e8c2 +0x018:  sete   %al
0860e8c5 +0x01b:  test   %al,%al
0860e8c7 +0x01d:  jne    0860e9d8 <+0x12e>
0860e8cd +0x023:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0860e8d2 +0x028:  movl   $0x512,0x8(%esp)
0860e8da +0x030:  movl   $"Statistics.cpp",0x4(%esp)
0860e8e2 +0x038:  mov    %eax,(%esp)
0860e8e5 +0x03b:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0860e8ea +0x040:  movl   $0x1,0x8(%esp)
0860e8f2 +0x048:  mov    %eax,0x4(%esp)
0860e8f6 +0x04c:  lea    -0x10(%ebp),%eax
0860e8f9 +0x04f:  mov    %eax,(%esp)
0860e8fc +0x052:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0860e901 +0x057:  lea    -0x10(%ebp),%eax
0860e904 +0x05a:  mov    %eax,(%esp)
0860e907 +0x05d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0860e90c +0x062:  movl   $0x103,0x4(%esp)
0860e914 +0x06a:  mov    %eax,(%esp)
0860e917 +0x06d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0860e91c +0x072:  lea    -0x10(%ebp),%eax
0860e91f +0x075:  mov    %eax,(%esp)
0860e922 +0x078:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0860e927 +0x07d:  movl   $0xffffffff,0x4(%esp)
0860e92f +0x085:  mov    %eax,(%esp)
0860e932 +0x088:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0860e937 +0x08d:  movl   $0x0,-0x14(%ebp)
0860e93e +0x094:  jmp    0860e977 <+0xcd>
0860e940 +0x096:  mov    0x8(%ebp),%eax
0860e943 +0x099:  lea    0x4(%eax),%edx
0860e946 +0x09c:  lea    -0x14(%ebp),%eax
0860e949 +0x09f:  mov    %eax,0x4(%esp)
0860e94d +0x0a3:  mov    %edx,(%esp)
0860e950 +0x0a6:  call   081934ac <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x114>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x114
0860e955 +0x0ab:  mov    (%eax),%ebx
0860e957 +0x0ad:  lea    -0x10(%ebp),%eax
0860e95a +0x0b0:  mov    %eax,(%esp)
0860e95d +0x0b3:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0860e962 +0x0b8:  mov    %ebx,0x4(%esp)
0860e966 +0x0bc:  mov    %eax,(%esp)
0860e969 +0x0bf:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0860e96e +0x0c4:  mov    -0x14(%ebp),%eax
0860e971 +0x0c7:  add    $0x1,%eax
0860e974 +0x0ca:  mov    %eax,-0x14(%ebp)
0860e977 +0x0cd:  mov    -0x14(%ebp),%eax
0860e97a +0x0d0:  cmp    $0x4,%eax
0860e97d +0x0d3:  setle  %al
0860e980 +0x0d6:  test   %al,%al
0860e982 +0x0d8:  jne    0860e940 <+0x96>
0860e984 +0x0da:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0860e989 +0x0df:  lea    -0x10(%ebp),%edx
0860e98c +0x0e2:  mov    %edx,0x8(%esp)
0860e990 +0x0e6:  movl   $0x4,0x4(%esp)
0860e998 +0x0ee:  mov    %eax,(%esp)
0860e99b +0x0f1:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0860e9a0 +0x0f6:  mov    0x8(%ebp),%eax
0860e9a3 +0x0f9:  add    $0x4,%eax
0860e9a6 +0x0fc:  mov    %eax,(%esp)
0860e9a9 +0x0ff:  call   080c6cde <_GLOBAL__I_g_ServerString_+0x249>  ; global constructors keyed to g_ServerString_+0x249
0860e9ae +0x104:  jmp    0860e9cb <+0x121>
0860e9b0 +0x106:  mov    %edx,%ebx
0860e9b2 +0x108:  mov    %eax,%esi
0860e9b4 +0x10a:  lea    -0x10(%ebp),%eax
0860e9b7 +0x10d:  mov    %eax,(%esp)
0860e9ba +0x110:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0860e9bf +0x115:  mov    %esi,%eax
0860e9c1 +0x117:  mov    %ebx,%edx
0860e9c3 +0x119:  mov    %eax,(%esp)
0860e9c6 +0x11c:  call   08ae3750 <_Unwind_Resume>
0860e9cb +0x121:  lea    -0x10(%ebp),%eax
0860e9ce +0x124:  mov    %eax,(%esp)
0860e9d1 +0x127:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0860e9d6 +0x12c:  jmp    0860e9d9 <+0x12f>
0860e9d8 +0x12e:  nop
0860e9d9 +0x12f:  add    $0x20,%esp
0860e9dc +0x132:  pop    %ebx
0860e9dd +0x133:  pop    %esi
0860e9de +0x134:  pop    %ebp
0860e9df +0x135:  ret
```

## 反编译 C

```c
// CHelpedPartyCount::InsertDatabase @ 0x860e8aa

/* CHelpedPartyCount::InsertDatabase() */

void __thiscall CHelpedPartyCount::InsertDatabase(CHelpedPartyCount *this)

{
  int iVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  int *piVar4;
  int local_18;
  CStreamGuard local_14 [8];
  
  iVar1 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::size
                    ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                     (this + 4));
  if (iVar1 != 0) {
    pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"Statistics.cpp",0x512);
    CStreamGuard::CStreamGuard(local_14,pSVar2,true);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0860e917 to 0860e9ad has its CatchHandler @ 0860e9b0 */
    CStreamGuard::operator<<(pCVar3,0x103);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_14);
    CStreamGuard::operator<<(pCVar3,-1);
    for (local_18 = 0; local_18 < 5; local_18 = local_18 + 1) {
      piVar4 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                      operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                  *)(this + 4),&local_18);
      iVar1 = *piVar4;
      pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_14);
      CStreamGuard::operator<<(pCVar3,iVar1);
    }
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_14);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
              ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 4));
    CStreamGuard::~CStreamGuard(local_14);
  }
  return;
}
```
