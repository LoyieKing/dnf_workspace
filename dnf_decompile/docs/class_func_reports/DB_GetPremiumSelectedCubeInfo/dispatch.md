# dispatch

`_ZN29DB_GetPremiumSelectedCubeInfo8dispatchEiiP6Stream`

`DB_GetPremiumSelectedCubeInfo::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_GetPremiumSelectedCubeInfo` | `0x0844c4e2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0844c4e2  _ZN29DB_GetPremiumSelectedCubeInfo8dispatchEiiP6Stream
#           DB_GetPremiumSelectedCubeInfo::dispatch(int, int, Stream*)
# range [0x0844c4e2, 0x0844c6df]
0844c4e2 +0x000:  push   %ebp
0844c4e3 +0x001:  mov    %esp,%ebp
0844c4e5 +0x003:  push   %esi
0844c4e6 +0x004:  push   %ebx
0844c4e7 +0x005:  sub    $0x30,%esp
0844c4ea +0x008:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0844c4ef +0x00d:  movl   $0x0,0x8(%esp)
0844c4f7 +0x015:  movl   $0x2,0x4(%esp)
0844c4ff +0x01d:  mov    %eax,(%esp)
0844c502 +0x020:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0844c507 +0x025:  mov    %eax,-0x18(%ebp)
0844c50a +0x028:  cmpl   $0x0,-0x18(%ebp)
0844c50e +0x02c:  jne    0844c51a <+0x38>
0844c510 +0x02e:  mov    $0x0,%ebx
0844c515 +0x033:  jmp    0844c6d6 <+0x1f4>
0844c51a +0x038:  mov    0x14(%ebp),%eax
0844c51d +0x03b:  mov    %eax,(%esp)
0844c520 +0x03e:  call   08454972 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x7588>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x7588
0844c525 +0x043:  mov    %eax,-0x14(%ebp)
0844c528 +0x046:  cmpl   $0x0,-0x14(%ebp)
0844c52c +0x04a:  jne    0844c538 <+0x56>
0844c52e +0x04c:  mov    $0x0,%ebx
0844c533 +0x051:  jmp    0844c6d6 <+0x1f4>
0844c538 +0x056:  mov    -0x14(%ebp),%eax
0844c53b +0x059:  mov    (%eax),%eax
0844c53d +0x05b:  mov    %eax,0x8(%esp)
0844c541 +0x05f:  movl   $"seLect selected, cube_type from cube_premium where charac_no=%u",0x4(%esp)
0844c549 +0x067:  mov    -0x18(%ebp),%eax
0844c54c +0x06a:  mov    %eax,(%esp)
0844c54f +0x06d:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0844c554 +0x072:  movl   $0x1,0x4(%esp)
0844c55c +0x07a:  mov    -0x18(%ebp),%eax
0844c55f +0x07d:  mov    %eax,(%esp)
0844c562 +0x080:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0844c567 +0x085:  mov    %al,-0xd(%ebp)
0844c56a +0x088:  movzbl -0xd(%ebp),%eax
0844c56e +0x08c:  xor    $0x1,%eax
0844c571 +0x08f:  test   %al,%al
0844c573 +0x091:  je     0844c57f <+0x9d>
0844c575 +0x093:  mov    $0x0,%ebx
0844c57a +0x098:  jmp    0844c6d6 <+0x1f4>
0844c57f +0x09d:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0844c584 +0x0a2:  movl   $0xbf71,0x8(%esp)
0844c58c +0x0aa:  movl   $"DBThread.cpp",0x4(%esp)
0844c594 +0x0b2:  mov    %eax,(%esp)
0844c597 +0x0b5:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0844c59c +0x0ba:  movl   $0x1,0x8(%esp)
0844c5a4 +0x0c2:  mov    %eax,0x4(%esp)
0844c5a8 +0x0c6:  lea    -0x20(%ebp),%eax
0844c5ab +0x0c9:  mov    %eax,(%esp)
0844c5ae +0x0cc:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0844c5b3 +0x0d1:  lea    -0x20(%ebp),%eax
0844c5b6 +0x0d4:  mov    %eax,(%esp)
0844c5b9 +0x0d7:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0844c5be +0x0dc:  mov    0xc(%ebp),%edx
0844c5c1 +0x0df:  mov    %edx,0x4(%esp)
0844c5c5 +0x0e3:  mov    %eax,(%esp)
0844c5c8 +0x0e6:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0844c5cd +0x0eb:  lea    -0x20(%ebp),%eax
0844c5d0 +0x0ee:  mov    %eax,(%esp)
0844c5d3 +0x0f1:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0844c5d8 +0x0f6:  mov    0x10(%ebp),%edx
0844c5db +0x0f9:  mov    %edx,0x4(%esp)
0844c5df +0x0fd:  mov    %eax,(%esp)
0844c5e2 +0x100:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0844c5e7 +0x105:  lea    -0x20(%ebp),%eax
0844c5ea +0x108:  mov    %eax,(%esp)
0844c5ed +0x10b:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0844c5f2 +0x110:  mov    %eax,(%esp)
0844c5f5 +0x113:  call   084549c6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x75dc>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x75dc
0844c5fa +0x118:  mov    %eax,-0xc(%ebp)
0844c5fd +0x11b:  mov    -0x14(%ebp),%eax
0844c600 +0x11e:  mov    (%eax),%edx
0844c602 +0x120:  mov    -0xc(%ebp),%eax
0844c605 +0x123:  mov    %edx,(%eax)
0844c607 +0x125:  mov    -0xc(%ebp),%eax
0844c60a +0x128:  movb   $0x0,0x4(%eax)
0844c60e +0x12c:  mov    -0xc(%ebp),%eax
0844c611 +0x12f:  movb   $0x0,0x5(%eax)
0844c615 +0x133:  mov    -0x18(%ebp),%eax
0844c618 +0x136:  mov    %eax,(%esp)
0844c61b +0x139:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0844c620 +0x13e:  mov    %al,-0xd(%ebp)
0844c623 +0x141:  cmpb   $0x0,-0xd(%ebp)
0844c627 +0x145:  je     0844c68d <+0x1ab>
0844c629 +0x147:  mov    -0xc(%ebp),%eax
0844c62c +0x14a:  add    $0x4,%eax
0844c62f +0x14d:  mov    %eax,0x8(%esp)
0844c633 +0x151:  movl   $0x0,0x4(%esp)
0844c63b +0x159:  mov    -0x18(%ebp),%eax
0844c63e +0x15c:  mov    %eax,(%esp)
0844c641 +0x15f:  call   080fdeba <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1e6>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1e6
0844c646 +0x164:  mov    %al,-0xd(%ebp)
0844c649 +0x167:  movzbl -0xd(%ebp),%eax
0844c64d +0x16b:  xor    $0x1,%eax
0844c650 +0x16e:  test   %al,%al
0844c652 +0x170:  je     0844c65b <+0x179>
0844c654 +0x172:  mov    $0x0,%ebx
0844c659 +0x177:  jmp    0844c6cb <+0x1e9>
0844c65b +0x179:  mov    -0xc(%ebp),%eax
0844c65e +0x17c:  add    $0x5,%eax
0844c661 +0x17f:  mov    %eax,0x8(%esp)
0844c665 +0x183:  movl   $0x1,0x4(%esp)
0844c66d +0x18b:  mov    -0x18(%ebp),%eax
0844c670 +0x18e:  mov    %eax,(%esp)
0844c673 +0x191:  call   080fdeba <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1e6>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1e6
0844c678 +0x196:  mov    %al,-0xd(%ebp)
0844c67b +0x199:  movzbl -0xd(%ebp),%eax
0844c67f +0x19d:  xor    $0x1,%eax
0844c682 +0x1a0:  test   %al,%al
0844c684 +0x1a2:  je     0844c68d <+0x1ab>
0844c686 +0x1a4:  mov    $0x0,%ebx
0844c68b +0x1a9:  jmp    0844c6cb <+0x1e9>
0844c68d +0x1ab:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0844c692 +0x1b0:  lea    -0x20(%ebp),%edx
0844c695 +0x1b3:  mov    %edx,0x8(%esp)
0844c699 +0x1b7:  movl   $0x1,0x4(%esp)
0844c6a1 +0x1bf:  mov    %eax,(%esp)
0844c6a4 +0x1c2:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0844c6a9 +0x1c7:  mov    $0x1,%ebx
0844c6ae +0x1cc:  jmp    0844c6cb <+0x1e9>
0844c6b0 +0x1ce:  mov    %edx,%ebx
0844c6b2 +0x1d0:  mov    %eax,%esi
0844c6b4 +0x1d2:  lea    -0x20(%ebp),%eax
0844c6b7 +0x1d5:  mov    %eax,(%esp)
0844c6ba +0x1d8:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0844c6bf +0x1dd:  mov    %esi,%eax
0844c6c1 +0x1df:  mov    %ebx,%edx
0844c6c3 +0x1e1:  mov    %eax,(%esp)
0844c6c6 +0x1e4:  call   08ae3750 <_Unwind_Resume>
0844c6cb +0x1e9:  lea    -0x20(%ebp),%eax
0844c6ce +0x1ec:  mov    %eax,(%esp)
0844c6d1 +0x1ef:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0844c6d6 +0x1f4:  mov    %ebx,%eax
0844c6d8 +0x1f6:  add    $0x30,%esp
0844c6db +0x1f9:  pop    %ebx
0844c6dc +0x1fa:  pop    %esi
0844c6dd +0x1fb:  pop    %ebp
0844c6de +0x1fc:  ret
0844c6df +0x1fd:  nop
```

## 反编译 C

```c
// DB_GetPremiumSelectedCubeInfo::dispatch @ 0x844c4e2

/* DB_GetPremiumSelectedCubeInfo::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_GetPremiumSelectedCubeInfo::dispatch
          (DB_GetPremiumSelectedCubeInfo *this,int param_1,int param_2,Stream *param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  undefined4 uVar3;
  CStreamGuard local_24 [8];
  MySQL *local_1c;
  SIG_GET_PREMIUM_SELECTED_CUBE_INFO *local_18;
  char local_11;
  SIG_GET_PREMIUM_SELECTED_CUBE_INFO_RES *local_10;
  
  local_1c = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  if (local_1c == (MySQL *)0x0) {
    return 0;
  }
  local_18 = Stream::GetOutBuffer<SIG_GET_PREMIUM_SELECTED_CUBE_INFO>(param_3);
  if (local_18 == (SIG_GET_PREMIUM_SELECTED_CUBE_INFO *)0x0) {
    return 0;
  }
  MySQL::set_query(local_1c,"seLect selected, cube_type from cube_premium where charac_no=%u",
                   *(undefined4 *)local_18);
  local_11 = MySQL::exec(local_1c,true);
  if (local_11 != '\x01') {
    return 0;
  }
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xbf71);
  CStreamGuard::CStreamGuard(local_24,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_24);
                    /* try { // try from 0844c5c8 to 0844c6a8 has its CatchHandler @ 0844c6b0 */
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_24);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_24);
  local_10 = CStreamGuard::GetInBuffer<SIG_GET_PREMIUM_SELECTED_CUBE_INFO_RES>(pCVar2);
  *(undefined4 *)local_10 = *(undefined4 *)local_18;
  local_10[4] = (SIG_GET_PREMIUM_SELECTED_CUBE_INFO_RES)0x0;
  local_10[5] = (SIG_GET_PREMIUM_SELECTED_CUBE_INFO_RES)0x0;
  local_11 = MySQL::fetch(local_1c);
  if (local_11 != '\0') {
    local_11 = MySQL::get_ubyte(local_1c,0,(uchar *)(local_10 + 4));
    if (local_11 != '\x01') {
      uVar3 = 0;
      goto LAB_0844c6cb;
    }
    local_11 = MySQL::get_ubyte(local_1c,1,(uchar *)(local_10 + 5));
    if (local_11 != '\x01') {
      uVar3 = 0;
      goto LAB_0844c6cb;
    }
  }
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_24);
  uVar3 = 1;
LAB_0844c6cb:
  CStreamGuard::~CStreamGuard(local_24);
  return uVar3;
}
```
