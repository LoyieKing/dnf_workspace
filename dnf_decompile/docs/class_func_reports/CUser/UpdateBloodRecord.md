# UpdateBloodRecord

`_ZN5CUser17UpdateBloodRecordEv`

`CUser::UpdateBloodRecord()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08651de6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08651de6  _ZN5CUser17UpdateBloodRecordEv
#           CUser::UpdateBloodRecord()
# range [0x08651de6, 0x08651fb9]
08651de6 +0x000:  push   %ebp
08651de7 +0x001:  mov    %esp,%ebp
08651de9 +0x003:  push   %esi
08651dea +0x004:  push   %ebx
08651deb +0x005:  sub    $0x30,%esp
08651dee +0x008:  mov    0x8(%ebp),%eax
08651df1 +0x00b:  mov    %eax,(%esp)
08651df4 +0x00e:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08651df9 +0x013:  mov    %eax,-0x10(%ebp)
08651dfc +0x016:  cmpl   $0x0,-0x10(%ebp)
08651e00 +0x01a:  je     08651fae <+0x1c8>
08651e06 +0x020:  mov    -0x10(%ebp),%eax
08651e09 +0x023:  lea    0xecc(%eax),%edx
08651e0f +0x029:  lea    -0x18(%ebp),%eax
08651e12 +0x02c:  mov    %edx,0x4(%esp)
08651e16 +0x030:  mov    %eax,(%esp)
08651e19 +0x033:  call   0869a9a8 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x71fd>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x71fd
08651e1e +0x038:  sub    $0x4,%esp
08651e21 +0x03b:  jmp    08651f64 <+0x17e>
08651e26 +0x040:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08651e2b +0x045:  movl   $0x1bbb,0x8(%esp)
08651e33 +0x04d:  movl   $"user.cpp",0x4(%esp)
08651e3b +0x055:  mov    %eax,(%esp)
08651e3e +0x058:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08651e43 +0x05d:  movl   $0x1,0x8(%esp)
08651e4b +0x065:  mov    %eax,0x4(%esp)
08651e4f +0x069:  lea    -0x20(%ebp),%eax
08651e52 +0x06c:  mov    %eax,(%esp)
08651e55 +0x06f:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08651e5a +0x074:  lea    -0x20(%ebp),%eax
08651e5d +0x077:  mov    %eax,(%esp)
08651e60 +0x07a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08651e65 +0x07f:  movl   $0x140,0x4(%esp)
08651e6d +0x087:  mov    %eax,(%esp)
08651e70 +0x08a:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08651e75 +0x08f:  mov    0x8(%ebp),%eax
08651e78 +0x092:  mov    %eax,(%esp)
08651e7b +0x095:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08651e80 +0x09a:  mov    %eax,%ebx
08651e82 +0x09c:  lea    -0x20(%ebp),%eax
08651e85 +0x09f:  mov    %eax,(%esp)
08651e88 +0x0a2:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08651e8d +0x0a7:  mov    %ebx,0x4(%esp)
08651e91 +0x0ab:  mov    %eax,(%esp)
08651e94 +0x0ae:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08651e99 +0x0b3:  lea    -0x20(%ebp),%eax
08651e9c +0x0b6:  mov    %eax,(%esp)
08651e9f +0x0b9:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08651ea4 +0x0be:  mov    %eax,(%esp)
08651ea7 +0x0c1:  call   0869aa26 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x727b>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x727b
08651eac +0x0c6:  mov    %eax,-0xc(%ebp)
08651eaf +0x0c9:  movl   $0x10,0x8(%esp)
08651eb7 +0x0d1:  movl   $0x0,0x4(%esp)
08651ebf +0x0d9:  mov    -0xc(%ebp),%eax
08651ec2 +0x0dc:  mov    %eax,(%esp)
08651ec5 +0x0df:  call   0807dcc0 <_init+0x5b8>
08651eca +0x0e4:  mov    0x8(%ebp),%eax
08651ecd +0x0e7:  mov    %eax,(%esp)
08651ed0 +0x0ea:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08651ed5 +0x0ef:  mov    -0xc(%ebp),%edx
08651ed8 +0x0f2:  mov    %eax,(%edx)
08651eda +0x0f4:  lea    -0x18(%ebp),%eax
08651edd +0x0f7:  mov    %eax,(%esp)
08651ee0 +0x0fa:  call   0869aa3c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7291>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7291
08651ee5 +0x0ff:  mov    0x8(%eax),%edx
08651ee8 +0x102:  mov    -0xc(%ebp),%eax
08651eeb +0x105:  mov    %edx,0x4(%eax)
08651eee +0x108:  lea    -0x18(%ebp),%eax
08651ef1 +0x10b:  mov    %eax,(%esp)
08651ef4 +0x10e:  call   0869aa3c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7291>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7291
08651ef9 +0x113:  mov    0x4(%eax),%edx
08651efc +0x116:  mov    -0xc(%ebp),%eax
08651eff +0x119:  mov    %edx,0x8(%eax)
08651f02 +0x11c:  lea    -0x18(%ebp),%eax
08651f05 +0x11f:  mov    %eax,(%esp)
08651f08 +0x122:  call   0869aa3c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7291>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7291
08651f0d +0x127:  mov    (%eax),%edx
08651f0f +0x129:  mov    -0xc(%ebp),%eax
08651f12 +0x12c:  mov    %edx,0xc(%eax)
08651f15 +0x12f:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08651f1a +0x134:  lea    -0x20(%ebp),%edx
08651f1d +0x137:  mov    %edx,0x8(%esp)
08651f21 +0x13b:  movl   $0x2,0x4(%esp)
08651f29 +0x143:  mov    %eax,(%esp)
08651f2c +0x146:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08651f31 +0x14b:  jmp    08651f4e <+0x168>
08651f33 +0x14d:  mov    %edx,%ebx
08651f35 +0x14f:  mov    %eax,%esi
08651f37 +0x151:  lea    -0x20(%ebp),%eax
08651f3a +0x154:  mov    %eax,(%esp)
08651f3d +0x157:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08651f42 +0x15c:  mov    %esi,%eax
08651f44 +0x15e:  mov    %ebx,%edx
08651f46 +0x160:  mov    %eax,(%esp)
08651f49 +0x163:  call   08ae3750 <_Unwind_Resume>
08651f4e +0x168:  lea    -0x20(%ebp),%eax
08651f51 +0x16b:  mov    %eax,(%esp)
08651f54 +0x16e:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08651f59 +0x173:  lea    -0x18(%ebp),%eax
08651f5c +0x176:  mov    %eax,(%esp)
08651f5f +0x179:  call   0869aa08 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x725d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x725d
08651f64 +0x17e:  mov    -0x10(%ebp),%eax
08651f67 +0x181:  lea    0xecc(%eax),%edx
08651f6d +0x187:  lea    -0x14(%ebp),%eax
08651f70 +0x18a:  mov    %edx,0x4(%esp)
08651f74 +0x18e:  mov    %eax,(%esp)
08651f77 +0x191:  call   0869a9ce <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7223>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7223
08651f7c +0x196:  sub    $0x4,%esp
08651f7f +0x199:  lea    -0x14(%ebp),%eax
08651f82 +0x19c:  mov    %eax,0x4(%esp)
08651f86 +0x1a0:  lea    -0x18(%ebp),%eax
08651f89 +0x1a3:  mov    %eax,(%esp)
08651f8c +0x1a6:  call   0869a9f4 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7249>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7249
08651f91 +0x1ab:  test   %al,%al
08651f93 +0x1ad:  jne    08651e26 <+0x40>
08651f99 +0x1b3:  mov    0x8(%ebp),%eax
08651f9c +0x1b6:  movl   $0x0,0x4(%esp)
08651fa4 +0x1be:  mov    %eax,(%esp)
08651fa7 +0x1c1:  call   086961a8 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x29fd>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x29fd
08651fac +0x1c6:  jmp    08651faf <+0x1c9>
08651fae +0x1c8:  nop
08651faf +0x1c9:  lea    -0x8(%ebp),%esp
08651fb2 +0x1cc:  add    $0x0,%esp
08651fb5 +0x1cf:  pop    %ebx
08651fb6 +0x1d0:  pop    %esi
08651fb7 +0x1d1:  pop    %ebp
08651fb8 +0x1d2:  ret
08651fb9 +0x1d3:  nop
```

## 反编译 C

```c
// CUser::UpdateBloodRecord @ 0x8651de6

/* CUser::UpdateBloodRecord() */

void __thiscall CUser::UpdateBloodRecord(CUser *this)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  CStreamGuard local_24 [8];
  map<int,stBloodBestRecord,std::less<int>,std::allocator<std::pair<int_const,stBloodBestRecord>>>
  local_1c [4];
  map<int,stBloodBestRecord,std::less<int>,std::allocator<std::pair<int_const,stBloodBestRecord>>>
  local_18 [4];
  int local_14;
  SIG_UPDATE_BLOOD_DUNGEON_BEST_RECORD *local_10;
  
  local_14 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
  if (local_14 != 0) {
    std::
    map<int,stBloodBestRecord,std::less<int>,std::allocator<std::pair<int_const,stBloodBestRecord>>>
    ::begin(local_1c);
    while( true ) {
      std::
      map<int,stBloodBestRecord,std::less<int>,std::allocator<std::pair<int_const,stBloodBestRecord>>>
      ::end(local_18);
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,stBloodBestRecord>>::operator!=
                        ((_Rb_tree_iterator<std::pair<int_const,stBloodBestRecord>> *)local_1c,
                         (_Rb_tree_iterator *)local_18);
      if (cVar1 == '\0') break;
      pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"user.cpp",0x1bbb);
      CStreamGuard::CStreamGuard(local_24,pSVar2,true);
      pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_24);
                    /* try { // try from 08651e70 to 08651f30 has its CatchHandler @ 08651f33 */
      CStreamGuard::operator<<(pCVar3,0x140);
      iVar4 = GetUID(this);
      pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_24);
      CStreamGuard::operator<<(pCVar3,iVar4);
      pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_24);
      local_10 = CStreamGuard::GetInBuffer<SIG_UPDATE_BLOOD_DUNGEON_BEST_RECORD>(pCVar3);
      memset(local_10,0,0x10);
      uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
      *(undefined4 *)local_10 = uVar5;
      iVar4 = std::_Rb_tree_iterator<std::pair<int_const,stBloodBestRecord>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,stBloodBestRecord>> *)local_1c);
      *(undefined4 *)(local_10 + 4) = *(undefined4 *)(iVar4 + 8);
      iVar4 = std::_Rb_tree_iterator<std::pair<int_const,stBloodBestRecord>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,stBloodBestRecord>> *)local_1c);
      *(undefined4 *)(local_10 + 8) = *(undefined4 *)(iVar4 + 4);
      puVar6 = (undefined4 *)
               std::_Rb_tree_iterator<std::pair<int_const,stBloodBestRecord>>::operator->
                         ((_Rb_tree_iterator<std::pair<int_const,stBloodBestRecord>> *)local_1c);
      *(undefined4 *)(local_10 + 0xc) = *puVar6;
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_24);
      CStreamGuard::~CStreamGuard(local_24);
      std::_Rb_tree_iterator<std::pair<int_const,stBloodBestRecord>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,stBloodBestRecord>> *)local_1c);
    }
    CUserCharacInfo::setBloodBestRecordUpdate((CUserCharacInfo *)this,false);
  }
  return;
}
```
