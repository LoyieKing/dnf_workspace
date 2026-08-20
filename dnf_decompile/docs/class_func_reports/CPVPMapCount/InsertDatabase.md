# InsertDatabase

`_ZN12CPVPMapCount14InsertDatabaseEv`

`CPVPMapCount::InsertDatabase()`

| 类 | 地址 |
|---|---|
| `CPVPMapCount` | `0x0860eb16` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860eb16  _ZN12CPVPMapCount14InsertDatabaseEv
#           CPVPMapCount::InsertDatabase()
# range [0x0860eb16, 0x0860ecc5]
0860eb16 +0x000:  push   %ebp
0860eb17 +0x001:  mov    %esp,%ebp
0860eb19 +0x003:  push   %esi
0860eb1a +0x004:  push   %ebx
0860eb1b +0x005:  sub    $0x20,%esp
0860eb1e +0x008:  mov    0x8(%ebp),%eax
0860eb21 +0x00b:  add    $0x4,%eax
0860eb24 +0x00e:  mov    %eax,(%esp)
0860eb27 +0x011:  call   08235840 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xaeea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xaeea
0860eb2c +0x016:  test   %eax,%eax
0860eb2e +0x018:  sete   %al
0860eb31 +0x01b:  test   %al,%al
0860eb33 +0x01d:  jne    0860ecba <+0x1a4>
0860eb39 +0x023:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0860eb3e +0x028:  movl   $0x538,0x8(%esp)
0860eb46 +0x030:  movl   $"Statistics.cpp",0x4(%esp)
0860eb4e +0x038:  mov    %eax,(%esp)
0860eb51 +0x03b:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0860eb56 +0x040:  movl   $0x1,0x8(%esp)
0860eb5e +0x048:  mov    %eax,0x4(%esp)
0860eb62 +0x04c:  lea    -0x10(%ebp),%eax
0860eb65 +0x04f:  mov    %eax,(%esp)
0860eb68 +0x052:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0860eb6d +0x057:  lea    -0x10(%ebp),%eax
0860eb70 +0x05a:  mov    %eax,(%esp)
0860eb73 +0x05d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0860eb78 +0x062:  movl   $0x105,0x4(%esp)
0860eb80 +0x06a:  mov    %eax,(%esp)
0860eb83 +0x06d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0860eb88 +0x072:  lea    -0x10(%ebp),%eax
0860eb8b +0x075:  mov    %eax,(%esp)
0860eb8e +0x078:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0860eb93 +0x07d:  movl   $0xffffffff,0x4(%esp)
0860eb9b +0x085:  mov    %eax,(%esp)
0860eb9e +0x088:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0860eba3 +0x08d:  mov    0x8(%ebp),%eax
0860eba6 +0x090:  add    $0x4,%eax
0860eba9 +0x093:  mov    %eax,(%esp)
0860ebac +0x096:  call   08235840 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xaeea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xaeea
0860ebb1 +0x09b:  mov    %eax,%ebx
0860ebb3 +0x09d:  lea    -0x10(%ebp),%eax
0860ebb6 +0x0a0:  mov    %eax,(%esp)
0860ebb9 +0x0a3:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0860ebbe +0x0a8:  mov    %ebx,0x4(%esp)
0860ebc2 +0x0ac:  mov    %eax,(%esp)
0860ebc5 +0x0af:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0860ebca +0x0b4:  mov    0x8(%ebp),%eax
0860ebcd +0x0b7:  lea    0x4(%eax),%edx
0860ebd0 +0x0ba:  lea    -0x14(%ebp),%eax
0860ebd3 +0x0bd:  mov    %edx,0x4(%esp)
0860ebd7 +0x0c1:  mov    %eax,(%esp)
0860ebda +0x0c4:  call   08151fa0 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x18d5>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x18d5
0860ebdf +0x0c9:  sub    $0x4,%esp
0860ebe2 +0x0cc:  mov    0x8(%ebp),%eax
0860ebe5 +0x0cf:  lea    0x4(%eax),%edx
0860ebe8 +0x0d2:  lea    -0x18(%ebp),%eax
0860ebeb +0x0d5:  mov    %edx,0x4(%esp)
0860ebef +0x0d9:  mov    %eax,(%esp)
0860ebf2 +0x0dc:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
0860ebf7 +0x0e1:  sub    $0x4,%esp
0860ebfa +0x0e4:  jmp    0860ec50 <+0x13a>
0860ebfc +0x0e6:  lea    -0x14(%ebp),%eax
0860ebff +0x0e9:  mov    %eax,(%esp)
0860ec02 +0x0ec:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
0860ec07 +0x0f1:  mov    (%eax),%ebx
0860ec09 +0x0f3:  lea    -0x10(%ebp),%eax
0860ec0c +0x0f6:  mov    %eax,(%esp)
0860ec0f +0x0f9:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0860ec14 +0x0fe:  mov    %ebx,0x4(%esp)
0860ec18 +0x102:  mov    %eax,(%esp)
0860ec1b +0x105:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0860ec20 +0x10a:  lea    -0x14(%ebp),%eax
0860ec23 +0x10d:  mov    %eax,(%esp)
0860ec26 +0x110:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
0860ec2b +0x115:  mov    0x4(%eax),%ebx
0860ec2e +0x118:  lea    -0x10(%ebp),%eax
0860ec31 +0x11b:  mov    %eax,(%esp)
0860ec34 +0x11e:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0860ec39 +0x123:  mov    %ebx,0x4(%esp)
0860ec3d +0x127:  mov    %eax,(%esp)
0860ec40 +0x12a:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0860ec45 +0x12f:  lea    -0x14(%ebp),%eax
0860ec48 +0x132:  mov    %eax,(%esp)
0860ec4b +0x135:  call   080da746 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x8e3>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x8e3
0860ec50 +0x13a:  lea    -0x18(%ebp),%eax
0860ec53 +0x13d:  mov    %eax,0x4(%esp)
0860ec57 +0x141:  lea    -0x14(%ebp),%eax
0860ec5a +0x144:  mov    %eax,(%esp)
0860ec5d +0x147:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
0860ec62 +0x14c:  test   %al,%al
0860ec64 +0x14e:  jne    0860ebfc <+0xe6>
0860ec66 +0x150:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0860ec6b +0x155:  lea    -0x10(%ebp),%edx
0860ec6e +0x158:  mov    %edx,0x8(%esp)
0860ec72 +0x15c:  movl   $0x4,0x4(%esp)
0860ec7a +0x164:  mov    %eax,(%esp)
0860ec7d +0x167:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0860ec82 +0x16c:  mov    0x8(%ebp),%eax
0860ec85 +0x16f:  add    $0x4,%eax
0860ec88 +0x172:  mov    %eax,(%esp)
0860ec8b +0x175:  call   080c6cde <_GLOBAL__I_g_ServerString_+0x249>  ; global constructors keyed to g_ServerString_+0x249
0860ec90 +0x17a:  jmp    0860ecad <+0x197>
0860ec92 +0x17c:  mov    %edx,%ebx
0860ec94 +0x17e:  mov    %eax,%esi
0860ec96 +0x180:  lea    -0x10(%ebp),%eax
0860ec99 +0x183:  mov    %eax,(%esp)
0860ec9c +0x186:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0860eca1 +0x18b:  mov    %esi,%eax
0860eca3 +0x18d:  mov    %ebx,%edx
0860eca5 +0x18f:  mov    %eax,(%esp)
0860eca8 +0x192:  call   08ae3750 <_Unwind_Resume>
0860ecad +0x197:  lea    -0x10(%ebp),%eax
0860ecb0 +0x19a:  mov    %eax,(%esp)
0860ecb3 +0x19d:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0860ecb8 +0x1a2:  jmp    0860ecbb <+0x1a5>
0860ecba +0x1a4:  nop
0860ecbb +0x1a5:  lea    -0x8(%ebp),%esp
0860ecbe +0x1a8:  add    $0x0,%esp
0860ecc1 +0x1ab:  pop    %ebx
0860ecc2 +0x1ac:  pop    %esi
0860ecc3 +0x1ad:  pop    %ebp
0860ecc4 +0x1ae:  ret
0860ecc5 +0x1af:  nop
```

## 反编译 C

```c
// CPVPMapCount::InsertDatabase @ 0x860eb16

/* CPVPMapCount::InsertDatabase() */

void __thiscall CPVPMapCount::InsertDatabase(CPVPMapCount *this)

{
  char cVar1;
  int iVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  int *piVar5;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_1c [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_18 [4];
  CStreamGuard local_14 [8];
  
  iVar2 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::size
                    ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                     (this + 4));
  if (iVar2 != 0) {
    pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"Statistics.cpp",0x538);
    CStreamGuard::CStreamGuard(local_14,pSVar3,true);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0860eb83 to 0860ec8f has its CatchHandler @ 0860ec92 */
    CStreamGuard::operator<<(pCVar4,0x105);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_14);
    CStreamGuard::operator<<(pCVar4,-1);
    iVar2 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::size
                      ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                       (this + 4));
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_14);
    CStreamGuard::operator<<(pCVar4,iVar2);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin(local_18);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_1c);
    while( true ) {
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                        ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_18,
                         (_Rb_tree_iterator *)local_1c);
      if (cVar1 == '\0') break;
      piVar5 = (int *)std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                                ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_18);
      iVar2 = *piVar5;
      pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_14);
      CStreamGuard::operator<<(pCVar4,iVar2);
      iVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_18);
      iVar2 = *(int *)(iVar2 + 4);
      pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_14);
      CStreamGuard::operator<<(pCVar4,iVar2);
      std::_Rb_tree_iterator<std::pair<int_const,int>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_18);
    }
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_14);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
              ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 4));
    CStreamGuard::~CStreamGuard(local_14);
  }
  return;
}
```
