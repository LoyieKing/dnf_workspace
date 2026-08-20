# SavePrivateStore

`_ZN13private_store13CPrivateStore16SavePrivateStoreEv`

`private_store::CPrivateStore::SavePrivateStore()`

| 类 | 地址 |
|---|---|
| `private_store::CPrivateStore` | `0x085ca116` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085ca116  _ZN13private_store13CPrivateStore16SavePrivateStoreEv
#           private_store::CPrivateStore::SavePrivateStore()
# range [0x085ca116, 0x085ca2d9]
085ca116 +0x000:  push   %ebp
085ca117 +0x001:  mov    %esp,%ebp
085ca119 +0x003:  push   %esi
085ca11a +0x004:  push   %ebx
085ca11b +0x005:  sub    $0x30,%esp
085ca11e +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
085ca123 +0x00d:  movl   $0xbc6,0x8(%esp)
085ca12b +0x015:  movl   $"PrivateStore.cpp",0x4(%esp)
085ca133 +0x01d:  mov    %eax,(%esp)
085ca136 +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
085ca13b +0x025:  movl   $0x1,0x8(%esp)
085ca143 +0x02d:  mov    %eax,0x4(%esp)
085ca147 +0x031:  lea    -0x24(%ebp),%eax
085ca14a +0x034:  mov    %eax,(%esp)
085ca14d +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
085ca152 +0x03c:  lea    -0x24(%ebp),%eax
085ca155 +0x03f:  mov    %eax,(%esp)
085ca158 +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
085ca15d +0x047:  movl   $0x77,0x4(%esp)
085ca165 +0x04f:  mov    %eax,(%esp)
085ca168 +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
085ca16d +0x057:  mov    0x8(%ebp),%eax
085ca170 +0x05a:  mov    0x2c(%eax),%eax
085ca173 +0x05d:  mov    %eax,(%esp)
085ca176 +0x060:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
085ca17b +0x065:  mov    %eax,%ebx
085ca17d +0x067:  lea    -0x24(%ebp),%eax
085ca180 +0x06a:  mov    %eax,(%esp)
085ca183 +0x06d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
085ca188 +0x072:  mov    %ebx,0x4(%esp)
085ca18c +0x076:  mov    %eax,(%esp)
085ca18f +0x079:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
085ca194 +0x07e:  lea    -0x24(%ebp),%eax
085ca197 +0x081:  mov    %eax,(%esp)
085ca19a +0x084:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
085ca19f +0x089:  mov    %eax,(%esp)
085ca1a2 +0x08c:  call   0845139c <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x3fb2>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x3fb2
085ca1a7 +0x091:  mov    %eax,-0xc(%ebp)
085ca1aa +0x094:  movl   $0x434,0x8(%esp)
085ca1b2 +0x09c:  movl   $0x0,0x4(%esp)
085ca1ba +0x0a4:  mov    -0xc(%ebp),%eax
085ca1bd +0x0a7:  mov    %eax,(%esp)
085ca1c0 +0x0aa:  call   0807dcc0 <_init+0x5b8>
085ca1c5 +0x0af:  mov    0x8(%ebp),%eax
085ca1c8 +0x0b2:  mov    0x2c(%eax),%eax
085ca1cb +0x0b5:  movl   $0xffffffff,0x4(%esp)
085ca1d3 +0x0bd:  mov    %eax,(%esp)
085ca1d6 +0x0c0:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
085ca1db +0x0c5:  mov    -0xc(%ebp),%edx
085ca1de +0x0c8:  mov    %eax,(%edx)
085ca1e0 +0x0ca:  mov    -0xc(%ebp),%eax
085ca1e3 +0x0cd:  lea    0x8(%eax),%ebx
085ca1e6 +0x0d0:  movl   $0xe,-0x18(%ebp)
085ca1ed +0x0d7:  mov    0x8(%ebp),%eax
085ca1f0 +0x0da:  lea    0x3c(%eax),%edx
085ca1f3 +0x0dd:  lea    -0x14(%ebp),%eax
085ca1f6 +0x0e0:  mov    %edx,0x4(%esp)
085ca1fa +0x0e4:  mov    %eax,(%esp)
085ca1fd +0x0e7:  call   085cd178 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x1e8e>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x1e8e
085ca202 +0x0ec:  sub    $0x4,%esp
085ca205 +0x0ef:  lea    -0x1c(%ebp),%eax
085ca208 +0x0f2:  lea    -0x18(%ebp),%edx
085ca20b +0x0f5:  mov    %edx,0x8(%esp)
085ca20f +0x0f9:  lea    -0x14(%ebp),%edx
085ca212 +0x0fc:  mov    %edx,0x4(%esp)
085ca216 +0x100:  mov    %eax,(%esp)
085ca219 +0x103:  call   085cd372 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x2088>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x2088
085ca21e +0x108:  sub    $0x4,%esp
085ca221 +0x10b:  mov    0x8(%ebp),%eax
085ca224 +0x10e:  lea    0x3c(%eax),%edx
085ca227 +0x111:  lea    -0x10(%ebp),%eax
085ca22a +0x114:  mov    %edx,0x4(%esp)
085ca22e +0x118:  mov    %eax,(%esp)
085ca231 +0x11b:  call   085cd178 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x1e8e>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x1e8e
085ca236 +0x120:  sub    $0x4,%esp
085ca239 +0x123:  mov    %ebx,0x8(%esp)
085ca23d +0x127:  mov    -0x1c(%ebp),%eax
085ca240 +0x12a:  mov    %eax,0x4(%esp)
085ca244 +0x12e:  mov    -0x10(%ebp),%eax
085ca247 +0x131:  mov    %eax,(%esp)
085ca24a +0x134:  call   085cd3a8 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x20be>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x20be
085ca24f +0x139:  mov    0x8(%ebp),%eax
085ca252 +0x13c:  mov    %eax,(%esp)
085ca255 +0x13f:  call   082345e4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c8e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c8e
085ca25a +0x144:  test   %al,%al
085ca25c +0x146:  je     085ca26d <+0x157>
085ca25e +0x148:  mov    -0xc(%ebp),%eax
085ca261 +0x14b:  movl   $0x1,0x430(%eax)
085ca26b +0x155:  jmp    085ca28c <+0x176>
085ca26d +0x157:  mov    0x8(%ebp),%eax
085ca270 +0x15a:  mov    %eax,(%esp)
085ca273 +0x15d:  call   082345e4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c8e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c8e
085ca278 +0x162:  xor    $0x1,%eax
085ca27b +0x165:  test   %al,%al
085ca27d +0x167:  je     085ca28c <+0x176>
085ca27f +0x169:  mov    -0xc(%ebp),%eax
085ca282 +0x16c:  movl   $0x0,0x430(%eax)
085ca28c +0x176:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
085ca291 +0x17b:  lea    -0x24(%ebp),%edx
085ca294 +0x17e:  mov    %edx,0x8(%esp)
085ca298 +0x182:  movl   $0x2,0x4(%esp)
085ca2a0 +0x18a:  mov    %eax,(%esp)
085ca2a3 +0x18d:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
085ca2a8 +0x192:  jmp    085ca2c5 <+0x1af>
085ca2aa +0x194:  mov    %edx,%ebx
085ca2ac +0x196:  mov    %eax,%esi
085ca2ae +0x198:  lea    -0x24(%ebp),%eax
085ca2b1 +0x19b:  mov    %eax,(%esp)
085ca2b4 +0x19e:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
085ca2b9 +0x1a3:  mov    %esi,%eax
085ca2bb +0x1a5:  mov    %ebx,%edx
085ca2bd +0x1a7:  mov    %eax,(%esp)
085ca2c0 +0x1aa:  call   08ae3750 <_Unwind_Resume>
085ca2c5 +0x1af:  lea    -0x24(%ebp),%eax
085ca2c8 +0x1b2:  mov    %eax,(%esp)
085ca2cb +0x1b5:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
085ca2d0 +0x1ba:  lea    -0x8(%ebp),%esp
085ca2d3 +0x1bd:  add    $0x0,%esp
085ca2d6 +0x1c0:  pop    %ebx
085ca2d7 +0x1c1:  pop    %esi
085ca2d8 +0x1c2:  pop    %ebp
085ca2d9 +0x1c3:  ret
```

## 反编译 C

```c
// private_store::CPrivateStore::SavePrivateStore @ 0x85ca116

/* private_store::CPrivateStore::SavePrivateStore() */

void __thiscall private_store::CPrivateStore::SavePrivateStore(CPrivateStore *this)

{
  SIG_PRIVATE_STORE *pSVar1;
  char cVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  int iVar5;
  undefined4 uVar6;
  CStreamGuard local_28 [8];
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  SIG_PRIVATE_STORE *local_10;
  
  pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"PrivateStore.cpp",0xbc6);
  CStreamGuard::CStreamGuard(local_28,pSVar3,true);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_28);
                    /* try { // try from 085ca168 to 085ca2a7 has its CatchHandler @ 085ca2aa */
  CStreamGuard::operator<<(pCVar4,0x77);
  iVar5 = CUser::GetUID(*(CUser **)(this + 0x2c));
  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_28);
  CStreamGuard::operator<<(pCVar4,iVar5);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_28);
  local_10 = CStreamGuard::GetInBuffer<private_store::SIG_PRIVATE_STORE>(pCVar4);
  memset(local_10,0,0x434);
  uVar6 = CUser::get_charac_no(*(CUser **)(this + 0x2c),-1);
  *(undefined4 *)local_10 = uVar6;
  pSVar1 = local_10 + 8;
  local_1c = 0xe;
  std::vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>::
  begin();
  __gnu_cxx::
  __normal_iterator<private_store::PrivateStoreItem*,std::vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>>
  ::operator+((__normal_iterator<private_store::PrivateStoreItem*,std::vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>>
               *)&local_20,&local_18);
  std::vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>::
  begin();
  std::
  copy<__gnu_cxx::__normal_iterator<private_store::PrivateStoreItem*,std::vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>>,private_store::PrivateStoreItem*>
            (local_14,local_20,pSVar1);
  cVar2 = isDollCreated(this);
  if (cVar2 == '\0') {
    cVar2 = isDollCreated(this);
    if (cVar2 != '\x01') {
      *(undefined4 *)(local_10 + 0x430) = 0;
    }
  }
  else {
    *(undefined4 *)(local_10 + 0x430) = 1;
  }
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_28);
  CStreamGuard::~CStreamGuard(local_28);
  return;
}
```
