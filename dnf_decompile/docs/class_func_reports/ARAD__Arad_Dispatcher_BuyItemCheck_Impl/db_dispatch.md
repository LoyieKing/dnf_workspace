# db_dispatch

`_ZN4ARAD33Arad_Dispatcher_BuyItemCheck_Impl11db_dispatchEiiP6Stream`

`ARAD::Arad_Dispatcher_BuyItemCheck_Impl::db_dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `ARAD::Arad_Dispatcher_BuyItemCheck_Impl` | `0x0818eb0c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0818eb0c  _ZN4ARAD33Arad_Dispatcher_BuyItemCheck_Impl11db_dispatchEiiP6Stream
#           ARAD::Arad_Dispatcher_BuyItemCheck_Impl::db_dispatch(int, int, Stream*)
# range [0x0818eb0c, 0x0818ed73]
0818eb0c +0x000:  push   %ebp
0818eb0d +0x001:  mov    %esp,%ebp
0818eb0f +0x003:  push   %esi
0818eb10 +0x004:  push   %ebx
0818eb11 +0x005:  sub    $0x60,%esp
0818eb14 +0x008:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0818eb19 +0x00d:  movl   $0x0,0x8(%esp)
0818eb21 +0x015:  movl   $0x7,0x4(%esp)
0818eb29 +0x01d:  mov    %eax,(%esp)
0818eb2c +0x020:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0818eb31 +0x025:  mov    %eax,-0x14(%ebp)
0818eb34 +0x028:  lea    -0x28(%ebp),%eax
0818eb37 +0x02b:  add    $0xc,%eax
0818eb3a +0x02e:  mov    %eax,0x4(%esp)
0818eb3e +0x032:  mov    0x14(%ebp),%eax
0818eb41 +0x035:  mov    %eax,(%esp)
0818eb44 +0x038:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
0818eb49 +0x03d:  lea    -0x28(%ebp),%eax
0818eb4c +0x040:  add    $0x8,%eax
0818eb4f +0x043:  mov    %eax,0x4(%esp)
0818eb53 +0x047:  mov    0x14(%ebp),%eax
0818eb56 +0x04a:  mov    %eax,(%esp)
0818eb59 +0x04d:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
0818eb5e +0x052:  lea    -0x28(%ebp),%eax
0818eb61 +0x055:  add    $0x10,%eax
0818eb64 +0x058:  mov    %eax,0x4(%esp)
0818eb68 +0x05c:  mov    0x14(%ebp),%eax
0818eb6b +0x05f:  mov    %eax,(%esp)
0818eb6e +0x062:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
0818eb73 +0x067:  lea    -0x28(%ebp),%eax
0818eb76 +0x06a:  add    $0x2,%eax
0818eb79 +0x06d:  mov    %eax,0x4(%esp)
0818eb7d +0x071:  mov    0x14(%ebp),%eax
0818eb80 +0x074:  mov    %eax,(%esp)
0818eb83 +0x077:  call   0861c552 <_ZN6StreamrsERs>  ; Stream::operator>>(short&)
0818eb88 +0x07c:  lea    -0x28(%ebp),%eax
0818eb8b +0x07f:  add    $0x4,%eax
0818eb8e +0x082:  mov    %eax,0x4(%esp)
0818eb92 +0x086:  mov    0x14(%ebp),%eax
0818eb95 +0x089:  mov    %eax,(%esp)
0818eb98 +0x08c:  call   0861c552 <_ZN6StreamrsERs>  ; Stream::operator>>(short&)
0818eb9d +0x091:  mov    0x14(%ebp),%eax
0818eba0 +0x094:  mov    %eax,(%esp)
0818eba3 +0x097:  call   0818ede8 <_GLOBAL__I__ZN4ARAD33Arad_Dispatcher_BuyItemCheck_ImplC2Ev+0x34>  ; global constructors keyed to ARAD::Arad_Dispatcher_BuyItemCheck_Impl::Arad_Dispatcher_BuyItemCheck_Impl()+0x34
0818eba8 +0x09c:  mov    %eax,-0x10(%ebp)
0818ebab +0x09f:  cmpl   $0x0,-0x10(%ebp)
0818ebaf +0x0a3:  jne    0818ec07 <+0xfb>
0818ebb1 +0x0a5:  movzwl -0x26(%ebp),%eax
0818ebb5 +0x0a9:  movswl %ax,%ebx
0818ebb8 +0x0ac:  mov    -0x18(%ebp),%ecx
0818ebbb +0x0af:  mov    -0x20(%ebp),%edx
0818ebbe +0x0b2:  mov    -0x1c(%ebp),%eax
0818ebc1 +0x0b5:  mov    %ebx,0x20(%esp)
0818ebc5 +0x0b9:  mov    %ecx,0x1c(%esp)
0818ebc9 +0x0bd:  mov    %edx,0x18(%esp)
0818ebcd +0x0c1:  mov    %eax,0x14(%esp)
0818ebd1 +0x0c5:  movl   $"[ERROR] MSG_BUY_CERASHOP_ITEM GetOutBuffer => MID[%d], CHARIDX[%d], ITEMIDX[%d], CHECKTYPE[%d]",0x10(%esp)
0818ebd9 +0x0cd:  movl   $0x66,0xc(%esp)
0818ebe1 +0x0d5:  movl   $&_ZZN4ARAD33Arad_Dispatcher_BuyItemCheck_Impl11db_dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x8(%esp)
0818ebe9 +0x0dd:  movl   $"localjapan/Arad_Dispatcher_BuyItemCheck_Impl.cpp",0x4(%esp)
0818ebf1 +0x0e5:  movl   $0x1,(%esp)
0818ebf8 +0x0ec:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0818ebfd +0x0f1:  mov    $0xffffffff,%ebx
0818ec02 +0x0f6:  jmp    0818ed6b <+0x25f>
0818ec07 +0x0fb:  lea    -0x28(%ebp),%eax
0818ec0a +0x0fe:  mov    %eax,(%esp)
0818ec0d +0x101:  call   0818cfab <_ZN4ARAD8DATABASE10ITEM_QUERY22arad_sp_buy_item_checkERN10ARAD_DATAS11BuyItemInfoE>  ; ARAD::DATABASE::ITEM_QUERY::arad_sp_buy_item_check(ARAD_DATAS::BuyItemInfo&)
0818ec12 +0x106:  test   %eax,%eax
0818ec14 +0x108:  setne  %al
0818ec17 +0x10b:  test   %al,%al
0818ec19 +0x10d:  je     0818ec25 <+0x119>
0818ec1b +0x10f:  mov    $0xffffffff,%ebx
0818ec20 +0x114:  jmp    0818ed6b <+0x25f>
0818ec25 +0x119:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0818ec2a +0x11e:  movl   $0x71,0x8(%esp)
0818ec32 +0x126:  movl   $"localjapan/Arad_Dispatcher_BuyItemCheck_Impl.cpp",0x4(%esp)
0818ec3a +0x12e:  mov    %eax,(%esp)
0818ec3d +0x131:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0818ec42 +0x136:  movl   $0x1,0x8(%esp)
0818ec4a +0x13e:  mov    %eax,0x4(%esp)
0818ec4e +0x142:  lea    -0x30(%ebp),%eax
0818ec51 +0x145:  mov    %eax,(%esp)
0818ec54 +0x148:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0818ec59 +0x14d:  lea    -0x30(%ebp),%eax
0818ec5c +0x150:  mov    %eax,(%esp)
0818ec5f +0x153:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0818ec64 +0x158:  mov    0xc(%ebp),%edx
0818ec67 +0x15b:  mov    %edx,0x4(%esp)
0818ec6b +0x15f:  mov    %eax,(%esp)
0818ec6e +0x162:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0818ec73 +0x167:  lea    -0x30(%ebp),%eax
0818ec76 +0x16a:  mov    %eax,(%esp)
0818ec79 +0x16d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0818ec7e +0x172:  mov    0x10(%ebp),%edx
0818ec81 +0x175:  mov    %edx,0x4(%esp)
0818ec85 +0x179:  mov    %eax,(%esp)
0818ec88 +0x17c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0818ec8d +0x181:  lea    -0x30(%ebp),%eax
0818ec90 +0x184:  mov    %eax,(%esp)
0818ec93 +0x187:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0818ec98 +0x18c:  mov    %eax,(%esp)
0818ec9b +0x18f:  call   0818ee3c <_GLOBAL__I__ZN4ARAD33Arad_Dispatcher_BuyItemCheck_ImplC2Ev+0x88>  ; global constructors keyed to ARAD::Arad_Dispatcher_BuyItemCheck_Impl::Arad_Dispatcher_BuyItemCheck_Impl()+0x88
0818eca0 +0x194:  mov    %eax,-0xc(%ebp)
0818eca3 +0x197:  cmpl   $0x0,-0xc(%ebp)
0818eca7 +0x19b:  jne    0818ecfc <+0x1f0>
0818eca9 +0x19d:  movzwl -0x26(%ebp),%eax
0818ecad +0x1a1:  movswl %ax,%ebx
0818ecb0 +0x1a4:  mov    -0x18(%ebp),%ecx
0818ecb3 +0x1a7:  mov    -0x20(%ebp),%edx
0818ecb6 +0x1aa:  mov    -0x1c(%ebp),%eax
0818ecb9 +0x1ad:  mov    %ebx,0x20(%esp)
0818ecbd +0x1b1:  mov    %ecx,0x1c(%esp)
0818ecc1 +0x1b5:  mov    %edx,0x18(%esp)
0818ecc5 +0x1b9:  mov    %eax,0x14(%esp)
0818ecc9 +0x1bd:  movl   $"ITEM_PURCHASE_COUNT_CHECK MID[%d], CHARIDX[%d], ITEMIDX[%d], CHECKTYPE[%d]",0x10(%esp)
0818ecd1 +0x1c5:  movl   $0x7b,0xc(%esp)
0818ecd9 +0x1cd:  movl   $&_ZZN4ARAD33Arad_Dispatcher_BuyItemCheck_Impl11db_dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x8(%esp)
0818ece1 +0x1d5:  movl   $"localjapan/Arad_Dispatcher_BuyItemCheck_Impl.cpp",0x4(%esp)
0818ece9 +0x1dd:  movl   $0x1,(%esp)
0818ecf0 +0x1e4:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0818ecf5 +0x1e9:  mov    $0x0,%ebx
0818ecfa +0x1ee:  jmp    0818ed60 <+0x254>
0818ecfc +0x1f0:  movzbl -0x28(%ebp),%edx
0818ed00 +0x1f4:  mov    -0xc(%ebp),%eax
0818ed03 +0x1f7:  mov    %dl,(%eax)
0818ed05 +0x1f9:  mov    -0xc(%ebp),%eax
0818ed08 +0x1fc:  lea    0x1(%eax),%edx
0818ed0b +0x1ff:  movl   $0x3f84,0x8(%esp)
0818ed13 +0x207:  mov    -0x10(%ebp),%eax
0818ed16 +0x20a:  mov    %eax,0x4(%esp)
0818ed1a +0x20e:  mov    %edx,(%esp)
0818ed1d +0x211:  call   0807d8a0 <_init+0x198>
0818ed22 +0x216:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0818ed27 +0x21b:  lea    -0x30(%ebp),%edx
0818ed2a +0x21e:  mov    %edx,0x8(%esp)
0818ed2e +0x222:  movl   $0x1,0x4(%esp)
0818ed36 +0x22a:  mov    %eax,(%esp)
0818ed39 +0x22d:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0818ed3e +0x232:  mov    $0x0,%ebx
0818ed43 +0x237:  jmp    0818ed60 <+0x254>
0818ed45 +0x239:  mov    %edx,%ebx
0818ed47 +0x23b:  mov    %eax,%esi
0818ed49 +0x23d:  lea    -0x30(%ebp),%eax
0818ed4c +0x240:  mov    %eax,(%esp)
0818ed4f +0x243:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0818ed54 +0x248:  mov    %esi,%eax
0818ed56 +0x24a:  mov    %ebx,%edx
0818ed58 +0x24c:  mov    %eax,(%esp)
0818ed5b +0x24f:  call   08ae3750 <_Unwind_Resume>
0818ed60 +0x254:  lea    -0x30(%ebp),%eax
0818ed63 +0x257:  mov    %eax,(%esp)
0818ed66 +0x25a:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0818ed6b +0x25f:  mov    %ebx,%eax
0818ed6d +0x261:  add    $0x60,%esp
0818ed70 +0x264:  pop    %ebx
0818ed71 +0x265:  pop    %esi
0818ed72 +0x266:  pop    %ebp
0818ed73 +0x267:  ret
```

## 反编译 C

```c
// ARAD::Arad_Dispatcher_BuyItemCheck_Impl::db_dispatch @ 0x818eb0c

/* ARAD::Arad_Dispatcher_BuyItemCheck_Impl::db_dispatch(int, int, Stream*) */

undefined4 __thiscall
ARAD::Arad_Dispatcher_BuyItemCheck_Impl::db_dispatch
          (Arad_Dispatcher_BuyItemCheck_Impl *this,int param_1,int param_2,Stream *param_3)

{
  int iVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  undefined4 uVar4;
  CStreamGuard local_34 [8];
  PURCHASE_COUNT_CHECK local_2c [2];
  short local_2a;
  short asStack_28 [2];
  uint local_24;
  uint local_20;
  uint local_1c;
  undefined4 local_18;
  MSG_BUY_CERASHOP_ITEM *local_14;
  PURCHASE_COUNT_CHECK *local_10;
  
  local_18 = DBMgr::GetDBHandle(GlobalData::s_db_mgr,7,0);
  Stream::operator>>(param_3,&local_20);
  Stream::operator>>(param_3,&local_24);
  Stream::operator>>(param_3,&local_1c);
  Stream::operator>>(param_3,&local_2a);
  Stream::operator>>(param_3,asStack_28);
  local_14 = Stream::GetOutBuffer<MSG_BUY_CERASHOP_ITEM>(param_3);
  if (local_14 == (MSG_BUY_CERASHOP_ITEM *)0x0) {
    LogManager::logFormat
              (1,"localjapan/Arad_Dispatcher_BuyItemCheck_Impl.cpp",
               "virtual int ARAD::Arad_Dispatcher_BuyItemCheck_Impl::db_dispatch(int, int, Stream*)"
               ,0x66,
               "[ERROR] MSG_BUY_CERASHOP_ITEM GetOutBuffer => MID[%d], CHARIDX[%d], ITEMIDX[%d], CHECKTYPE[%d]"
               ,local_20,local_24,local_1c,(int)local_2a);
    uVar4 = 0xffffffff;
  }
  else {
    iVar1 = DATABASE::ITEM_QUERY::arad_sp_buy_item_check((BuyItemInfo *)local_2c);
    if (iVar1 == 0) {
      pSVar2 = (Stream *)
               StreamPool::Acquire(GlobalData::s_stream_pool,
                                   "localjapan/Arad_Dispatcher_BuyItemCheck_Impl.cpp",0x71);
      CStreamGuard::CStreamGuard(local_34,pSVar2,true);
      pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_34);
                    /* try { // try from 0818ec6e to 0818ed3d has its CatchHandler @ 0818ed45 */
      CStreamGuard::operator<<(pCVar3,param_1);
      pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_34);
      CStreamGuard::operator<<(pCVar3,param_2);
      pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_34);
      local_10 = CStreamGuard::GetInBuffer<ARAD::INTERNAL_PACKET::PURCHASE_COUNT_CHECK>(pCVar3);
      if (local_10 == (PURCHASE_COUNT_CHECK *)0x0) {
        LogManager::logFormat
                  (1,"localjapan/Arad_Dispatcher_BuyItemCheck_Impl.cpp",
                   "virtual int ARAD::Arad_Dispatcher_BuyItemCheck_Impl::db_dispatch(int, int, Stream*)"
                   ,0x7b,
                   "ITEM_PURCHASE_COUNT_CHECK MID[%d], CHARIDX[%d], ITEMIDX[%d], CHECKTYPE[%d]",
                   local_20,local_24,local_1c,(int)local_2a);
      }
      else {
        *local_10 = local_2c[0];
        memcpy(local_10 + 1,local_14,0x3f84);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_34);
      }
      uVar4 = 0;
      CStreamGuard::~CStreamGuard(local_34);
    }
    else {
      uVar4 = 0xffffffff;
    }
  }
  return uVar4;
}
```
