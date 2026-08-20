# UpdateNatTypeUser

`_ZN9GameWorld17UpdateNatTypeUserEv`

`GameWorld::UpdateNatTypeUser()`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086cd2f6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086cd2f6  _ZN9GameWorld17UpdateNatTypeUserEv
#           GameWorld::UpdateNatTypeUser()
# range [0x086cd2f6, 0x086cd567]
086cd2f6 +0x000:  push   %ebp
086cd2f7 +0x001:  mov    %esp,%ebp
086cd2f9 +0x003:  push   %esi
086cd2fa +0x004:  push   %ebx
086cd2fb +0x005:  sub    $0x60,%esp
086cd2fe +0x008:  lea    -0x44(%ebp),%eax
086cd301 +0x00b:  mov    %eax,(%esp)
086cd304 +0x00e:  call   080c6c64 <_GLOBAL__I_g_ServerString_+0x1cf>  ; global constructors keyed to g_ServerString_+0x1cf
086cd309 +0x013:  mov    0x8(%ebp),%eax
086cd30c +0x016:  lea    0x134(%eax),%edx
086cd312 +0x01c:  lea    -0x48(%ebp),%eax
086cd315 +0x01f:  mov    %edx,0x4(%esp)
086cd319 +0x023:  mov    %eax,(%esp)
086cd31c +0x026:  call   080f78a6 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xa3>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xa3
086cd321 +0x02b:  sub    $0x4,%esp
086cd324 +0x02e:  jmp    086cd377 <+0x81>
086cd326 +0x030:  lea    -0x48(%ebp),%eax
086cd329 +0x033:  mov    %eax,(%esp)
086cd32c +0x036:  call   080f7944 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x141>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x141
086cd331 +0x03b:  mov    0x4(%eax),%eax
086cd334 +0x03e:  mov    %eax,-0x18(%ebp)
086cd337 +0x041:  cmpl   $0x0,-0x18(%ebp)
086cd33b +0x045:  je     086cd36c <+0x76>
086cd33d +0x047:  mov    -0x18(%ebp),%eax
086cd340 +0x04a:  add    $0xe0,%eax
086cd345 +0x04f:  mov    %eax,(%esp)
086cd348 +0x052:  call   08236de0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc48a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc48a
086cd34d +0x057:  movsbl %al,%eax
086cd350 +0x05a:  mov    %eax,-0x28(%ebp)
086cd353 +0x05d:  lea    -0x28(%ebp),%eax
086cd356 +0x060:  mov    %eax,0x4(%esp)
086cd35a +0x064:  lea    -0x44(%ebp),%eax
086cd35d +0x067:  mov    %eax,(%esp)
086cd360 +0x06a:  call   081934ac <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x114>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x114
086cd365 +0x06f:  mov    (%eax),%edx
086cd367 +0x071:  add    $0x1,%edx
086cd36a +0x074:  mov    %edx,(%eax)
086cd36c +0x076:  lea    -0x48(%ebp),%eax
086cd36f +0x079:  mov    %eax,(%esp)
086cd372 +0x07c:  call   0811c9a4 <_GLOBAL__I_events+0x1047>  ; global constructors keyed to events+0x1047
086cd377 +0x081:  mov    0x8(%ebp),%eax
086cd37a +0x084:  lea    0x134(%eax),%edx
086cd380 +0x08a:  lea    -0x2c(%ebp),%eax
086cd383 +0x08d:  mov    %edx,0x4(%esp)
086cd387 +0x091:  mov    %eax,(%esp)
086cd38a +0x094:  call   080f78cc <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xc9>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xc9
086cd38f +0x099:  sub    $0x4,%esp
086cd392 +0x09c:  lea    -0x2c(%ebp),%eax
086cd395 +0x09f:  mov    %eax,0x4(%esp)
086cd399 +0x0a3:  lea    -0x48(%ebp),%eax
086cd39c +0x0a6:  mov    %eax,(%esp)
086cd39f +0x0a9:  call   080f78f2 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xef>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xef
086cd3a4 +0x0ae:  test   %al,%al
086cd3a6 +0x0b0:  jne    086cd326 <+0x30>
086cd3ac +0x0b6:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
086cd3b3 +0x0bd:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
086cd3b8 +0x0c2:  mov    %eax,-0x1c(%ebp)
086cd3bb +0x0c5:  lea    -0x4c(%ebp),%eax
086cd3be +0x0c8:  lea    -0x44(%ebp),%edx
086cd3c1 +0x0cb:  mov    %edx,0x4(%esp)
086cd3c5 +0x0cf:  mov    %eax,(%esp)
086cd3c8 +0x0d2:  call   08151fa0 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x18d5>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x18d5
086cd3cd +0x0d7:  sub    $0x4,%esp
086cd3d0 +0x0da:  jmp    086cd506 <+0x210>
086cd3d5 +0x0df:  lea    -0x4c(%ebp),%eax
086cd3d8 +0x0e2:  mov    %eax,(%esp)
086cd3db +0x0e5:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
086cd3e0 +0x0ea:  mov    (%eax),%eax
086cd3e2 +0x0ec:  mov    %eax,-0x14(%ebp)
086cd3e5 +0x0ef:  lea    -0x4c(%ebp),%eax
086cd3e8 +0x0f2:  mov    %eax,(%esp)
086cd3eb +0x0f5:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
086cd3f0 +0x0fa:  mov    0x4(%eax),%eax
086cd3f3 +0x0fd:  mov    %eax,-0x10(%ebp)
086cd3f6 +0x100:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
086cd3fb +0x105:  movl   $0x14ef,0x8(%esp)
086cd403 +0x10d:  movl   $"world.cpp",0x4(%esp)
086cd40b +0x115:  mov    %eax,(%esp)
086cd40e +0x118:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
086cd413 +0x11d:  movl   $0x1,0x8(%esp)
086cd41b +0x125:  mov    %eax,0x4(%esp)
086cd41f +0x129:  lea    -0x54(%ebp),%eax
086cd422 +0x12c:  mov    %eax,(%esp)
086cd425 +0x12f:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
086cd42a +0x134:  lea    -0x54(%ebp),%eax
086cd42d +0x137:  mov    %eax,(%esp)
086cd430 +0x13a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
086cd435 +0x13f:  movl   $0x84,0x4(%esp)
086cd43d +0x147:  mov    %eax,(%esp)
086cd440 +0x14a:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
086cd445 +0x14f:  lea    -0x54(%ebp),%eax
086cd448 +0x152:  mov    %eax,(%esp)
086cd44b +0x155:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
086cd450 +0x15a:  movl   $0xffffffff,0x4(%esp)
086cd458 +0x162:  mov    %eax,(%esp)
086cd45b +0x165:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
086cd460 +0x16a:  lea    -0x54(%ebp),%eax
086cd463 +0x16d:  mov    %eax,(%esp)
086cd466 +0x170:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
086cd46b +0x175:  mov    %eax,(%esp)
086cd46e +0x178:  call   086d4104 <_GLOBAL__I_MAX_VILLAGE_NUM+0x2935>  ; global constructors keyed to MAX_VILLAGE_NUM+0x2935
086cd473 +0x17d:  mov    %eax,-0xc(%ebp)
086cd476 +0x180:  movl   $0xc,0x8(%esp)
086cd47e +0x188:  movl   $0x0,0x4(%esp)
086cd486 +0x190:  mov    -0xc(%ebp),%eax
086cd489 +0x193:  mov    %eax,(%esp)
086cd48c +0x196:  call   0807dcc0 <_init+0x5b8>
086cd491 +0x19b:  mov    -0xc(%ebp),%eax
086cd494 +0x19e:  mov    -0x14(%ebp),%edx
086cd497 +0x1a1:  mov    %edx,(%eax)
086cd499 +0x1a3:  mov    -0xc(%ebp),%eax
086cd49c +0x1a6:  mov    -0x10(%ebp),%edx
086cd49f +0x1a9:  mov    %edx,0x4(%eax)
086cd4a2 +0x1ac:  mov    -0xc(%ebp),%eax
086cd4a5 +0x1af:  mov    -0x1c(%ebp),%edx
086cd4a8 +0x1b2:  mov    %edx,0x8(%eax)
086cd4ab +0x1b5:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
086cd4b0 +0x1ba:  lea    -0x54(%ebp),%edx
086cd4b3 +0x1bd:  mov    %edx,0x8(%esp)
086cd4b7 +0x1c1:  movl   $0x4,0x4(%esp)
086cd4bf +0x1c9:  mov    %eax,(%esp)
086cd4c2 +0x1cc:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
086cd4c7 +0x1d1:  jmp    086cd4de <+0x1e8>
086cd4c9 +0x1d3:  mov    %edx,%ebx
086cd4cb +0x1d5:  mov    %eax,%esi
086cd4cd +0x1d7:  lea    -0x54(%ebp),%eax
086cd4d0 +0x1da:  mov    %eax,(%esp)
086cd4d3 +0x1dd:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
086cd4d8 +0x1e2:  mov    %esi,%eax
086cd4da +0x1e4:  mov    %ebx,%edx
086cd4dc +0x1e6:  jmp    086cd537 <+0x241>
086cd4de +0x1e8:  lea    -0x54(%ebp),%eax
086cd4e1 +0x1eb:  mov    %eax,(%esp)
086cd4e4 +0x1ee:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
086cd4e9 +0x1f3:  lea    -0x20(%ebp),%eax
086cd4ec +0x1f6:  movl   $0x0,0x8(%esp)
086cd4f4 +0x1fe:  lea    -0x4c(%ebp),%edx
086cd4f7 +0x201:  mov    %edx,0x4(%esp)
086cd4fb +0x205:  mov    %eax,(%esp)
086cd4fe +0x208:  call   081b8d04 <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x50b>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x50b
086cd503 +0x20d:  sub    $0x4,%esp
086cd506 +0x210:  lea    -0x24(%ebp),%eax
086cd509 +0x213:  lea    -0x44(%ebp),%edx
086cd50c +0x216:  mov    %edx,0x4(%esp)
086cd510 +0x21a:  mov    %eax,(%esp)
086cd513 +0x21d:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
086cd518 +0x222:  sub    $0x4,%esp
086cd51b +0x225:  lea    -0x24(%ebp),%eax
086cd51e +0x228:  mov    %eax,0x4(%esp)
086cd522 +0x22c:  lea    -0x4c(%ebp),%eax
086cd525 +0x22f:  mov    %eax,(%esp)
086cd528 +0x232:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
086cd52d +0x237:  test   %al,%al
086cd52f +0x239:  jne    086cd3d5 <+0xdf>
086cd535 +0x23f:  jmp    086cd552 <+0x25c>
086cd537 +0x241:  mov    %edx,%ebx
086cd539 +0x243:  mov    %eax,%esi
086cd53b +0x245:  lea    -0x44(%ebp),%eax
086cd53e +0x248:  mov    %eax,(%esp)
086cd541 +0x24b:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
086cd546 +0x250:  mov    %esi,%eax
086cd548 +0x252:  mov    %ebx,%edx
086cd54a +0x254:  mov    %eax,(%esp)
086cd54d +0x257:  call   08ae3750 <_Unwind_Resume>
086cd552 +0x25c:  lea    -0x44(%ebp),%eax
086cd555 +0x25f:  mov    %eax,(%esp)
086cd558 +0x262:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
086cd55d +0x267:  lea    -0x8(%ebp),%esp
086cd560 +0x26a:  add    $0x0,%esp
086cd563 +0x26d:  pop    %ebx
086cd564 +0x26e:  pop    %esi
086cd565 +0x26f:  pop    %ebp
086cd566 +0x270:  ret
086cd567 +0x271:  nop
```

## 反编译 C

```c
// GameWorld::UpdateNatTypeUser @ 0x86cd2f6

/* GameWorld::UpdateNatTypeUser() */

void GameWorld::UpdateNatTypeUser(void)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  Stream *pSVar5;
  CStreamGuard *pCVar6;
  CStreamGuard local_58 [8];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_50 [4];
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_4c [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_48 [24];
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_30 [4];
  int local_2c;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_28 [4];
  _Rb_tree_iterator<std::pair<int_const,int>> local_24 [4];
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  SIG_NAT_TYPE_USER *local_10;
  
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map(local_48);
                    /* try { // try from 086cd31c to 086cd412 has its CatchHandler @ 086cd537 */
  std::
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  ::begin(local_4c);
  while( true ) {
    std::
    map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
    ::end(local_30);
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_4c,
                       (_Rb_tree_iterator *)local_30);
    if (cVar1 == '\0') break;
    iVar4 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_4c);
    local_1c = *(int *)(iVar4 + 4);
    if (local_1c != 0) {
      cVar1 = CNetwork<4096,450000>::get_nat_type((CNetwork<4096,450000> *)(local_1c + 0xe0));
      local_2c = (int)cVar1;
      piVar2 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                      operator[](local_48,&local_2c);
      *piVar2 = *piVar2 + 1;
    }
    std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator++
              ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_4c);
  }
  local_20 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin(local_50);
  while( true ) {
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_28);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_50,
                       (_Rb_tree_iterator *)local_28);
    if (cVar1 == '\0') break;
    puVar3 = (undefined4 *)
             std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                       ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_50);
    local_18 = *puVar3;
    iVar4 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_50);
    local_14 = *(undefined4 *)(iVar4 + 4);
    pSVar5 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"world.cpp",0x14ef);
    CStreamGuard::CStreamGuard(local_58,pSVar5,true);
    pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_58);
                    /* try { // try from 086cd440 to 086cd4c6 has its CatchHandler @ 086cd4c9 */
    CStreamGuard::operator<<(pCVar6,0x84);
    pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_58);
    CStreamGuard::operator<<(pCVar6,-1);
    pCVar6 = (CStreamGuard *)CStreamGuard::operator->(local_58);
    local_10 = CStreamGuard::GetInBuffer<SIG_NAT_TYPE_USER>(pCVar6);
    memset(local_10,0,0xc);
    *(undefined4 *)local_10 = local_18;
    *(undefined4 *)(local_10 + 4) = local_14;
    *(undefined4 *)(local_10 + 8) = local_20;
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_58);
                    /* try { // try from 086cd4e4 to 086cd517 has its CatchHandler @ 086cd537 */
    CStreamGuard::~CStreamGuard(local_58);
    std::_Rb_tree_iterator<std::pair<int_const,int>>::operator++(local_24,(int)local_50);
  }
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map(local_48);
  return;
}
```
