# UpdateCoolTimeItemInfo

`_ZN5CUser22UpdateCoolTimeItemInfoEj`

`CUser::UpdateCoolTimeItemInfo(unsigned int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08658b2a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08658b2a  _ZN5CUser22UpdateCoolTimeItemInfoEj
#           CUser::UpdateCoolTimeItemInfo(unsigned int)
# range [0x08658b2a, 0x08658d8f]
08658b2a +0x000:  push   %ebp
08658b2b +0x001:  mov    %esp,%ebp
08658b2d +0x003:  push   %esi
08658b2e +0x004:  push   %ebx
08658b2f +0x005:  sub    $0x1e0,%esp
08658b35 +0x00b:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08658b3a +0x010:  movl   $0x2cb8,0x8(%esp)
08658b42 +0x018:  movl   $"user.cpp",0x4(%esp)
08658b4a +0x020:  mov    %eax,(%esp)
08658b4d +0x023:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08658b52 +0x028:  movl   $0x1,0x8(%esp)
08658b5a +0x030:  mov    %eax,0x4(%esp)
08658b5e +0x034:  lea    -0x24(%ebp),%eax
08658b61 +0x037:  mov    %eax,(%esp)
08658b64 +0x03a:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08658b69 +0x03f:  lea    -0x24(%ebp),%eax
08658b6c +0x042:  mov    %eax,(%esp)
08658b6f +0x045:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08658b74 +0x04a:  movl   $0x132,0x4(%esp)
08658b7c +0x052:  mov    %eax,(%esp)
08658b7f +0x055:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08658b84 +0x05a:  mov    0x8(%ebp),%eax
08658b87 +0x05d:  mov    %eax,(%esp)
08658b8a +0x060:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08658b8f +0x065:  mov    %eax,%ebx
08658b91 +0x067:  lea    -0x24(%ebp),%eax
08658b94 +0x06a:  mov    %eax,(%esp)
08658b97 +0x06d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08658b9c +0x072:  mov    %ebx,0x4(%esp)
08658ba0 +0x076:  mov    %eax,(%esp)
08658ba3 +0x079:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08658ba8 +0x07e:  lea    -0x24(%ebp),%eax
08658bab +0x081:  mov    %eax,(%esp)
08658bae +0x084:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08658bb3 +0x089:  mov    %eax,(%esp)
08658bb6 +0x08c:  call   0869aea4 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x76f9>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x76f9
08658bbb +0x091:  mov    %eax,-0x14(%ebp)
08658bbe +0x094:  movl   $0x0,-0x10(%ebp)
08658bc5 +0x09b:  mov    0x8(%ebp),%eax
08658bc8 +0x09e:  mov    %eax,(%esp)
08658bcb +0x0a1:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08658bd0 +0x0a6:  mov    -0x14(%ebp),%edx
08658bd3 +0x0a9:  mov    %eax,(%edx)
08658bd5 +0x0ab:  lea    -0x1bc(%ebp),%eax
08658bdb +0x0b1:  mov    %eax,(%esp)
08658bde +0x0b4:  call   0848fa0e <_GLOBAL__I__ZN15exchange_server22AcquireCharacterMemoryEi+0x6ec>  ; global constructors keyed to exchange_server::AcquireCharacterMemory(int)+0x6ec
08658be3 +0x0b9:  mov    0x8(%ebp),%eax
08658be6 +0x0bc:  mov    %eax,(%esp)
08658be9 +0x0bf:  call   08696a24 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3279>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3279
08658bee +0x0c4:  mov    %eax,-0xc(%ebp)
08658bf1 +0x0c7:  lea    -0x28(%ebp),%eax
08658bf4 +0x0ca:  mov    -0xc(%ebp),%edx
08658bf7 +0x0cd:  mov    %edx,0x4(%esp)
08658bfb +0x0d1:  mov    %eax,(%esp)
08658bfe +0x0d4:  call   0869aeba <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x770f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x770f
08658c03 +0x0d9:  sub    $0x4,%esp
08658c06 +0x0dc:  mov    -0xc(%ebp),%eax
08658c09 +0x0df:  mov    %eax,(%esp)
08658c0c +0x0e2:  call   0863d2c0 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x17d1>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x17d1
08658c11 +0x0e7:  cmp    $0x32,%eax
08658c14 +0x0ea:  seta   %al
08658c17 +0x0ed:  test   %al,%al
08658c19 +0x0ef:  je     08658cea <+0x1c0>
08658c1f +0x0f5:  jmp    08658d7b <+0x251>
08658c24 +0x0fa:  lea    -0x28(%ebp),%eax
08658c27 +0x0fd:  mov    %eax,(%esp)
08658c2a +0x100:  call   0869af30 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7785>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7785
08658c2f +0x105:  mov    0x4(%eax),%eax
08658c32 +0x108:  cmp    0xc(%ebp),%eax
08658c35 +0x10b:  jb     08658c60 <+0x136>
08658c37 +0x10d:  lea    -0x28(%ebp),%eax
08658c3a +0x110:  mov    %eax,(%esp)
08658c3d +0x113:  call   0869af30 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7785>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7785
08658c42 +0x118:  mov    (%eax),%eax
08658c44 +0x11a:  cmp    $0x7ffffffe,%eax
08658c49 +0x11f:  ja     08658c60 <+0x136>
08658c4b +0x121:  lea    -0x28(%ebp),%eax
08658c4e +0x124:  mov    %eax,(%esp)
08658c51 +0x127:  call   0869af30 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7785>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7785
08658c56 +0x12c:  mov    0x4(%eax),%eax
08658c59 +0x12f:  cmp    $0x77359400,%eax
08658c5e +0x134:  jbe    08658c67 <+0x13d>
08658c60 +0x136:  mov    $0x1,%eax
08658c65 +0x13b:  jmp    08658c6c <+0x142>
08658c67 +0x13d:  mov    $0x0,%eax
08658c6c +0x142:  test   %al,%al
08658c6e +0x144:  je     08658c9a <+0x170>
08658c70 +0x146:  lea    -0x1cc(%ebp),%eax
08658c76 +0x14c:  mov    -0x28(%ebp),%edx
08658c79 +0x14f:  mov    %edx,0x8(%esp)
08658c7d +0x153:  mov    -0xc(%ebp),%edx
08658c80 +0x156:  mov    %edx,0x4(%esp)
08658c84 +0x15a:  mov    %eax,(%esp)
08658c87 +0x15d:  call   0869af3a <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x778f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x778f
08658c8c +0x162:  sub    $0x4,%esp
08658c8f +0x165:  mov    -0x1cc(%ebp),%eax
08658c95 +0x16b:  mov    %eax,-0x28(%ebp)
08658c98 +0x16e:  jmp    08658cea <+0x1c0>
08658c9a +0x170:  mov    -0x10(%ebp),%ebx
08658c9d +0x173:  lea    -0x28(%ebp),%eax
08658ca0 +0x176:  mov    %eax,(%esp)
08658ca3 +0x179:  call   0869af30 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7785>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7785
08658ca8 +0x17e:  mov    (%eax),%eax
08658caa +0x180:  mov    %eax,-0x1b8(%ebp,%ebx,8)
08658cb1 +0x187:  mov    -0x10(%ebp),%ebx
08658cb4 +0x18a:  lea    -0x28(%ebp),%eax
08658cb7 +0x18d:  mov    %eax,(%esp)
08658cba +0x190:  call   0869af30 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7785>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7785
08658cbf +0x195:  mov    0x4(%eax),%eax
08658cc2 +0x198:  mov    %eax,-0x1b4(%ebp,%ebx,8)
08658cc9 +0x19f:  addl   $0x1,-0x10(%ebp)
08658ccd +0x1a3:  lea    -0x18(%ebp),%eax
08658cd0 +0x1a6:  movl   $0x0,0x8(%esp)
08658cd8 +0x1ae:  lea    -0x28(%ebp),%edx
08658cdb +0x1b1:  mov    %edx,0x4(%esp)
08658cdf +0x1b5:  mov    %eax,(%esp)
08658ce2 +0x1b8:  call   0869b020 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7875>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7875
08658ce7 +0x1bd:  sub    $0x4,%esp
08658cea +0x1c0:  lea    -0x1c(%ebp),%eax
08658ced +0x1c3:  mov    -0xc(%ebp),%edx
08658cf0 +0x1c6:  mov    %edx,0x4(%esp)
08658cf4 +0x1ca:  mov    %eax,(%esp)
08658cf7 +0x1cd:  call   0869aede <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7733>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7733
08658cfc +0x1d2:  sub    $0x4,%esp
08658cff +0x1d5:  lea    -0x1c(%ebp),%eax
08658d02 +0x1d8:  mov    %eax,0x4(%esp)
08658d06 +0x1dc:  lea    -0x28(%ebp),%eax
08658d09 +0x1df:  mov    %eax,(%esp)
08658d0c +0x1e2:  call   0869af04 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7759>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7759
08658d11 +0x1e7:  test   %al,%al
08658d13 +0x1e9:  jne    08658c24 <+0xfa>
08658d19 +0x1ef:  mov    -0x10(%ebp),%eax
08658d1c +0x1f2:  mov    %al,-0x1bc(%ebp)
08658d22 +0x1f8:  mov    -0x14(%ebp),%eax
08658d25 +0x1fb:  lea    0x4(%eax),%edx
08658d28 +0x1fe:  movl   $0x194,0x8(%esp)
08658d30 +0x206:  lea    -0x1bc(%ebp),%eax
08658d36 +0x20c:  mov    %eax,0x4(%esp)
08658d3a +0x210:  mov    %edx,(%esp)
08658d3d +0x213:  call   0807d8a0 <_init+0x198>
08658d42 +0x218:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08658d47 +0x21d:  lea    -0x24(%ebp),%edx
08658d4a +0x220:  mov    %edx,0x8(%esp)
08658d4e +0x224:  movl   $0x2,0x4(%esp)
08658d56 +0x22c:  mov    %eax,(%esp)
08658d59 +0x22f:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08658d5e +0x234:  jmp    08658d7b <+0x251>
08658d60 +0x236:  mov    %edx,%ebx
08658d62 +0x238:  mov    %eax,%esi
08658d64 +0x23a:  lea    -0x24(%ebp),%eax
08658d67 +0x23d:  mov    %eax,(%esp)
08658d6a +0x240:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08658d6f +0x245:  mov    %esi,%eax
08658d71 +0x247:  mov    %ebx,%edx
08658d73 +0x249:  mov    %eax,(%esp)
08658d76 +0x24c:  call   08ae3750 <_Unwind_Resume>
08658d7b +0x251:  lea    -0x24(%ebp),%eax
08658d7e +0x254:  mov    %eax,(%esp)
08658d81 +0x257:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08658d86 +0x25c:  lea    -0x8(%ebp),%esp
08658d89 +0x25f:  add    $0x0,%esp
08658d8c +0x262:  pop    %ebx
08658d8d +0x263:  pop    %esi
08658d8e +0x264:  pop    %ebp
08658d8f +0x265:  ret
```

## 反编译 C

```c
// CUser::UpdateCoolTimeItemInfo @ 0x8658b2a

/* CUser::UpdateCoolTimeItemInfo(unsigned int) */

void __thiscall CUser::UpdateCoolTimeItemInfo(CUser *this,uint param_1)

{
  bool bVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 local_1d0 [4];
  CONTINUOUS_ITEM_INFO local_1c0 [4];
  undefined4 auStack_1bc [100];
  undefined4 local_2c;
  CStreamGuard local_28 [8];
  __normal_iterator local_20 [4];
  __normal_iterator<ContinuousItemInfo*,std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>>
  local_1c [4];
  SIG_SAVE_AND_LOAD_CONTINUOUS_ITEM_INFO *local_18;
  int local_14;
  vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>> *local_10;
  
  pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"user.cpp",0x2cb8);
  CStreamGuard::CStreamGuard(local_28,pSVar2,true);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_28);
                    /* try { // try from 08658b7f to 08658d5d has its CatchHandler @ 08658d60 */
  CStreamGuard::operator<<(pCVar3,0x132);
  iVar4 = GetUID(this);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_28);
  CStreamGuard::operator<<(pCVar3,iVar4);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_28);
  local_18 = CStreamGuard::GetInBuffer<SIG_SAVE_AND_LOAD_CONTINUOUS_ITEM_INFO>(pCVar3);
  local_14 = 0;
  uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
  *(undefined4 *)local_18 = uVar5;
  CONTINUOUS_ITEM_INFO::CONTINUOUS_ITEM_INFO(local_1c0);
  local_10 = (vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>> *)
             CUserCharacInfo::GetCurCharacCoolTimeItemList((CUserCharacInfo *)this);
  std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>::begin();
  uVar6 = std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>::size(local_10);
  if (uVar6 < 0x33) {
    while( true ) {
      std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>::end();
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_2c,local_20);
      if (!bVar1) break;
      iVar4 = __gnu_cxx::
              __normal_iterator<ContinuousItemInfo*,std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>>
              ::operator->((__normal_iterator<ContinuousItemInfo*,std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>>
                            *)&local_2c);
      if (((*(uint *)(iVar4 + 4) < param_1) ||
          (puVar7 = (uint *)__gnu_cxx::
                            __normal_iterator<ContinuousItemInfo*,std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>>
                            ::operator->((__normal_iterator<ContinuousItemInfo*,std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>>
                                          *)&local_2c), 0x7ffffffe < *puVar7)) ||
         (iVar4 = __gnu_cxx::
                  __normal_iterator<ContinuousItemInfo*,std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>>
                  ::operator->((__normal_iterator<ContinuousItemInfo*,std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>>
                                *)&local_2c), 2000000000 < *(uint *)(iVar4 + 4))) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      iVar4 = local_14;
      if (bVar1) {
        std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>::erase
                  (local_1d0,local_10,local_2c);
        local_2c = local_1d0[0];
      }
      else {
        puVar8 = (undefined4 *)
                 __gnu_cxx::
                 __normal_iterator<ContinuousItemInfo*,std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>>
                 ::operator->((__normal_iterator<ContinuousItemInfo*,std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>>
                               *)&local_2c);
        auStack_1bc[iVar4 * 2] = *puVar8;
        iVar4 = local_14;
        iVar9 = __gnu_cxx::
                __normal_iterator<ContinuousItemInfo*,std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>>
                ::operator->((__normal_iterator<ContinuousItemInfo*,std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>>
                              *)&local_2c);
        auStack_1bc[iVar4 * 2 + 1] = *(undefined4 *)(iVar9 + 4);
        local_14 = local_14 + 1;
        __gnu_cxx::
        __normal_iterator<ContinuousItemInfo*,std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>>
        ::operator++(local_1c,(int)&local_2c);
      }
    }
    local_1c0[0] = SUB41(local_14,0);
    memcpy(local_18 + 4,local_1c0,0x194);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_28);
  }
  CStreamGuard::~CStreamGuard(local_28);
  return;
}
```
