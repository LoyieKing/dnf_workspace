# UpdateStatistic4ChannelUserLev

`_ZN9GameWorld30UpdateStatistic4ChannelUserLevEv`

`GameWorld::UpdateStatistic4ChannelUserLev()`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086cd0b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086cd0b0  _ZN9GameWorld30UpdateStatistic4ChannelUserLevEv
#           GameWorld::UpdateStatistic4ChannelUserLev()
# range [0x086cd0b0, 0x086cd271]
086cd0b0 +0x000:  push   %ebp
086cd0b1 +0x001:  mov    %esp,%ebp
086cd0b3 +0x003:  push   %esi
086cd0b4 +0x004:  push   %ebx
086cd0b5 +0x005:  sub    $0x30,%esp
086cd0b8 +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
086cd0bd +0x00d:  movl   $0x14ab,0x8(%esp)
086cd0c5 +0x015:  movl   $"world.cpp",0x4(%esp)
086cd0cd +0x01d:  mov    %eax,(%esp)
086cd0d0 +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
086cd0d5 +0x025:  movl   $0x1,0x8(%esp)
086cd0dd +0x02d:  mov    %eax,0x4(%esp)
086cd0e1 +0x031:  lea    -0x18(%ebp),%eax
086cd0e4 +0x034:  mov    %eax,(%esp)
086cd0e7 +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
086cd0ec +0x03c:  lea    -0x18(%ebp),%eax
086cd0ef +0x03f:  mov    %eax,(%esp)
086cd0f2 +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
086cd0f7 +0x047:  movl   $0x6b,0x4(%esp)
086cd0ff +0x04f:  mov    %eax,(%esp)
086cd102 +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
086cd107 +0x057:  lea    -0x18(%ebp),%eax
086cd10a +0x05a:  mov    %eax,(%esp)
086cd10d +0x05d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
086cd112 +0x062:  movl   $0xffffffff,0x4(%esp)
086cd11a +0x06a:  mov    %eax,(%esp)
086cd11d +0x06d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
086cd122 +0x072:  lea    -0x18(%ebp),%eax
086cd125 +0x075:  mov    %eax,(%esp)
086cd128 +0x078:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
086cd12d +0x07d:  mov    %eax,(%esp)
086cd130 +0x080:  call   086d40ee <_GLOBAL__I_MAX_VILLAGE_NUM+0x291f>  ; global constructors keyed to MAX_VILLAGE_NUM+0x291f
086cd135 +0x085:  mov    %eax,-0x10(%ebp)
086cd138 +0x088:  movl   $0x124,0x8(%esp)
086cd140 +0x090:  movl   $0x0,0x4(%esp)
086cd148 +0x098:  mov    -0x10(%ebp),%eax
086cd14b +0x09b:  mov    %eax,(%esp)
086cd14e +0x09e:  call   0807dcc0 <_init+0x5b8>
086cd153 +0x0a3:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
086cd158 +0x0a8:  mov    0x1b0(%eax),%edx
086cd15e +0x0ae:  mov    -0x10(%ebp),%eax
086cd161 +0x0b1:  mov    %edx,(%eax)
086cd163 +0x0b3:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
086cd16a +0x0ba:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
086cd16f +0x0bf:  mov    -0x10(%ebp),%edx
086cd172 +0x0c2:  mov    %eax,0x120(%edx)
086cd178 +0x0c8:  mov    0x8(%ebp),%eax
086cd17b +0x0cb:  lea    0x134(%eax),%edx
086cd181 +0x0d1:  lea    -0x1c(%ebp),%eax
086cd184 +0x0d4:  mov    %edx,0x4(%esp)
086cd188 +0x0d8:  mov    %eax,(%esp)
086cd18b +0x0db:  call   080f78cc <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xc9>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xc9
086cd190 +0x0e0:  sub    $0x4,%esp
086cd193 +0x0e3:  mov    0x8(%ebp),%eax
086cd196 +0x0e6:  lea    0x134(%eax),%edx
086cd19c +0x0ec:  lea    -0x20(%ebp),%eax
086cd19f +0x0ef:  mov    %edx,0x4(%esp)
086cd1a3 +0x0f3:  mov    %eax,(%esp)
086cd1a6 +0x0f6:  call   080f78a6 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xa3>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xa3
086cd1ab +0x0fb:  sub    $0x4,%esp
086cd1ae +0x0fe:  jmp    086cd20d <+0x15d>
086cd1b0 +0x100:  lea    -0x20(%ebp),%eax
086cd1b3 +0x103:  mov    %eax,(%esp)
086cd1b6 +0x106:  call   080f7944 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x141>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x141
086cd1bb +0x10b:  mov    0x4(%eax),%eax
086cd1be +0x10e:  mov    %eax,-0xc(%ebp)
086cd1c1 +0x111:  cmpl   $0x0,-0xc(%ebp)
086cd1c5 +0x115:  je     086cd1dd <+0x12d>
086cd1c7 +0x117:  mov    -0xc(%ebp),%eax
086cd1ca +0x11a:  mov    %eax,(%esp)
086cd1cd +0x11d:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
086cd1d2 +0x122:  test   %eax,%eax
086cd1d4 +0x124:  je     086cd1dd <+0x12d>
086cd1d6 +0x126:  mov    $0x1,%eax
086cd1db +0x12b:  jmp    086cd1e2 <+0x132>
086cd1dd +0x12d:  mov    $0x0,%eax
086cd1e2 +0x132:  test   %al,%al
086cd1e4 +0x134:  je     086cd202 <+0x152>
086cd1e6 +0x136:  mov    -0xc(%ebp),%eax
086cd1e9 +0x139:  mov    %eax,(%esp)
086cd1ec +0x13c:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
086cd1f1 +0x141:  mov    -0x10(%ebp),%edx
086cd1f4 +0x144:  mov    0x4(%edx,%eax,4),%edx
086cd1f8 +0x148:  lea    0x1(%edx),%ecx
086cd1fb +0x14b:  mov    -0x10(%ebp),%edx
086cd1fe +0x14e:  mov    %ecx,0x4(%edx,%eax,4)
086cd202 +0x152:  lea    -0x20(%ebp),%eax
086cd205 +0x155:  mov    %eax,(%esp)
086cd208 +0x158:  call   0811c9a4 <_GLOBAL__I_events+0x1047>  ; global constructors keyed to events+0x1047
086cd20d +0x15d:  lea    -0x1c(%ebp),%eax
086cd210 +0x160:  mov    %eax,0x4(%esp)
086cd214 +0x164:  lea    -0x20(%ebp),%eax
086cd217 +0x167:  mov    %eax,(%esp)
086cd21a +0x16a:  call   080f78f2 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xef>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xef
086cd21f +0x16f:  test   %al,%al
086cd221 +0x171:  jne    086cd1b0 <+0x100>
086cd223 +0x173:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
086cd228 +0x178:  lea    -0x18(%ebp),%edx
086cd22b +0x17b:  mov    %edx,0x8(%esp)
086cd22f +0x17f:  movl   $0x4,0x4(%esp)
086cd237 +0x187:  mov    %eax,(%esp)
086cd23a +0x18a:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
086cd23f +0x18f:  jmp    086cd25c <+0x1ac>
086cd241 +0x191:  mov    %edx,%ebx
086cd243 +0x193:  mov    %eax,%esi
086cd245 +0x195:  lea    -0x18(%ebp),%eax
086cd248 +0x198:  mov    %eax,(%esp)
086cd24b +0x19b:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
086cd250 +0x1a0:  mov    %esi,%eax
086cd252 +0x1a2:  mov    %ebx,%edx
086cd254 +0x1a4:  mov    %eax,(%esp)
086cd257 +0x1a7:  call   08ae3750 <_Unwind_Resume>
086cd25c +0x1ac:  lea    -0x18(%ebp),%eax
086cd25f +0x1af:  mov    %eax,(%esp)
086cd262 +0x1b2:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
086cd267 +0x1b7:  lea    -0x8(%ebp),%esp
086cd26a +0x1ba:  add    $0x0,%esp
086cd26d +0x1bd:  pop    %ebx
086cd26e +0x1be:  pop    %esi
086cd26f +0x1bf:  pop    %ebp
086cd270 +0x1c0:  ret
086cd271 +0x1c1:  nop
```

## 反编译 C

```c
// GameWorld::UpdateStatistic4ChannelUserLev @ 0x86cd0b0

/* GameWorld::UpdateStatistic4ChannelUserLev() */

void GameWorld::UpdateStatistic4ChannelUserLev(void)

{
  bool bVar1;
  char cVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  int iVar5;
  undefined4 uVar6;
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_24 [4];
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_20 [4];
  CStreamGuard local_1c [8];
  SIG_UPDATE_STATISTIC4LEV *local_14;
  CUserCharacInfo *local_10;
  
  pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"world.cpp",0x14ab);
  CStreamGuard::CStreamGuard(local_1c,pSVar3,true);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
                    /* try { // try from 086cd102 to 086cd23e has its CatchHandler @ 086cd241 */
  CStreamGuard::operator<<(pCVar4,0x6b);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
  CStreamGuard::operator<<(pCVar4,-1);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_1c);
  local_14 = CStreamGuard::GetInBuffer<SIG_UPDATE_STATISTIC4LEV>(pCVar4);
  memset(local_14,0,0x124);
  iVar5 = G_CEnvironment();
  *(undefined4 *)local_14 = *(undefined4 *)(iVar5 + 0x1b0);
  uVar6 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  *(undefined4 *)(local_14 + 0x120) = uVar6;
  std::
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  ::end(local_20);
  std::
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  ::begin(local_24);
  do {
    cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_24,
                       (_Rb_tree_iterator *)local_20);
    if (cVar2 == '\0') {
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_1c);
      CStreamGuard::~CStreamGuard(local_1c);
      return;
    }
    iVar5 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_24);
    local_10 = *(CUserCharacInfo **)(iVar5 + 4);
    if (local_10 == (CUserCharacInfo *)0x0) {
LAB_086cd1dd:
      bVar1 = false;
    }
    else {
      iVar5 = CUserCharacInfo::getCurCharacR(local_10);
      if (iVar5 == 0) goto LAB_086cd1dd;
      bVar1 = true;
    }
    if (bVar1) {
      iVar5 = CUserCharacInfo::get_charac_level(local_10);
      *(int *)(local_14 + iVar5 * 4 + 4) = *(int *)(local_14 + iVar5 * 4 + 4) + 1;
    }
    std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator++
              ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_24);
  } while( true );
}
```
