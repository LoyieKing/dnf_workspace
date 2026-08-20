# InsertDatabase

`_ZN14CPVPPlayerRate14InsertDatabaseEv`

`CPVPPlayerRate::InsertDatabase()`

| 类 | 地址 |
|---|---|
| `CPVPPlayerRate` | `0x0860e9e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860e9e0  _ZN14CPVPPlayerRate14InsertDatabaseEv
#           CPVPPlayerRate::InsertDatabase()
# range [0x0860e9e0, 0x0860eb15]
0860e9e0 +0x000:  push   %ebp
0860e9e1 +0x001:  mov    %esp,%ebp
0860e9e3 +0x003:  push   %esi
0860e9e4 +0x004:  push   %ebx
0860e9e5 +0x005:  sub    $0x20,%esp
0860e9e8 +0x008:  mov    0x8(%ebp),%eax
0860e9eb +0x00b:  add    $0x4,%eax
0860e9ee +0x00e:  mov    %eax,(%esp)
0860e9f1 +0x011:  call   08235840 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xaeea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xaeea
0860e9f6 +0x016:  test   %eax,%eax
0860e9f8 +0x018:  sete   %al
0860e9fb +0x01b:  test   %al,%al
0860e9fd +0x01d:  jne    0860eb0e <+0x12e>
0860ea03 +0x023:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0860ea08 +0x028:  movl   $0x525,0x8(%esp)
0860ea10 +0x030:  movl   $"Statistics.cpp",0x4(%esp)
0860ea18 +0x038:  mov    %eax,(%esp)
0860ea1b +0x03b:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0860ea20 +0x040:  movl   $0x1,0x8(%esp)
0860ea28 +0x048:  mov    %eax,0x4(%esp)
0860ea2c +0x04c:  lea    -0x10(%ebp),%eax
0860ea2f +0x04f:  mov    %eax,(%esp)
0860ea32 +0x052:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0860ea37 +0x057:  lea    -0x10(%ebp),%eax
0860ea3a +0x05a:  mov    %eax,(%esp)
0860ea3d +0x05d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0860ea42 +0x062:  movl   $0x104,0x4(%esp)
0860ea4a +0x06a:  mov    %eax,(%esp)
0860ea4d +0x06d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0860ea52 +0x072:  lea    -0x10(%ebp),%eax
0860ea55 +0x075:  mov    %eax,(%esp)
0860ea58 +0x078:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0860ea5d +0x07d:  movl   $0xffffffff,0x4(%esp)
0860ea65 +0x085:  mov    %eax,(%esp)
0860ea68 +0x088:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0860ea6d +0x08d:  movl   $0x0,-0x14(%ebp)
0860ea74 +0x094:  jmp    0860eaad <+0xcd>
0860ea76 +0x096:  mov    0x8(%ebp),%eax
0860ea79 +0x099:  lea    0x4(%eax),%edx
0860ea7c +0x09c:  lea    -0x14(%ebp),%eax
0860ea7f +0x09f:  mov    %eax,0x4(%esp)
0860ea83 +0x0a3:  mov    %edx,(%esp)
0860ea86 +0x0a6:  call   081934ac <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x114>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x114
0860ea8b +0x0ab:  mov    (%eax),%ebx
0860ea8d +0x0ad:  lea    -0x10(%ebp),%eax
0860ea90 +0x0b0:  mov    %eax,(%esp)
0860ea93 +0x0b3:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0860ea98 +0x0b8:  mov    %ebx,0x4(%esp)
0860ea9c +0x0bc:  mov    %eax,(%esp)
0860ea9f +0x0bf:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0860eaa4 +0x0c4:  mov    -0x14(%ebp),%eax
0860eaa7 +0x0c7:  add    $0x1,%eax
0860eaaa +0x0ca:  mov    %eax,-0x14(%ebp)
0860eaad +0x0cd:  mov    -0x14(%ebp),%eax
0860eab0 +0x0d0:  cmp    $0x5,%eax
0860eab3 +0x0d3:  setle  %al
0860eab6 +0x0d6:  test   %al,%al
0860eab8 +0x0d8:  jne    0860ea76 <+0x96>
0860eaba +0x0da:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0860eabf +0x0df:  lea    -0x10(%ebp),%edx
0860eac2 +0x0e2:  mov    %edx,0x8(%esp)
0860eac6 +0x0e6:  movl   $0x4,0x4(%esp)
0860eace +0x0ee:  mov    %eax,(%esp)
0860ead1 +0x0f1:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0860ead6 +0x0f6:  mov    0x8(%ebp),%eax
0860ead9 +0x0f9:  add    $0x4,%eax
0860eadc +0x0fc:  mov    %eax,(%esp)
0860eadf +0x0ff:  call   080c6cde <_GLOBAL__I_g_ServerString_+0x249>  ; global constructors keyed to g_ServerString_+0x249
0860eae4 +0x104:  jmp    0860eb01 <+0x121>
0860eae6 +0x106:  mov    %edx,%ebx
0860eae8 +0x108:  mov    %eax,%esi
0860eaea +0x10a:  lea    -0x10(%ebp),%eax
0860eaed +0x10d:  mov    %eax,(%esp)
0860eaf0 +0x110:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0860eaf5 +0x115:  mov    %esi,%eax
0860eaf7 +0x117:  mov    %ebx,%edx
0860eaf9 +0x119:  mov    %eax,(%esp)
0860eafc +0x11c:  call   08ae3750 <_Unwind_Resume>
0860eb01 +0x121:  lea    -0x10(%ebp),%eax
0860eb04 +0x124:  mov    %eax,(%esp)
0860eb07 +0x127:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0860eb0c +0x12c:  jmp    0860eb0f <+0x12f>
0860eb0e +0x12e:  nop
0860eb0f +0x12f:  add    $0x20,%esp
0860eb12 +0x132:  pop    %ebx
0860eb13 +0x133:  pop    %esi
0860eb14 +0x134:  pop    %ebp
0860eb15 +0x135:  ret
```

## 反编译 C

```c
// CPVPPlayerRate::InsertDatabase @ 0x860e9e0

/* CPVPPlayerRate::InsertDatabase() */

void __thiscall CPVPPlayerRate::InsertDatabase(CPVPPlayerRate *this)

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
    pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"Statistics.cpp",0x525);
    CStreamGuard::CStreamGuard(local_14,pSVar2,true);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0860ea4d to 0860eae3 has its CatchHandler @ 0860eae6 */
    CStreamGuard::operator<<(pCVar3,0x104);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_14);
    CStreamGuard::operator<<(pCVar3,-1);
    for (local_18 = 0; local_18 < 6; local_18 = local_18 + 1) {
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
