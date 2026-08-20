# dispatch

`_ZN22DB_LoadBloodBestRecord8dispatchEiiP6Stream`

`DB_LoadBloodBestRecord::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_LoadBloodBestRecord` | `0x0843199a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843199a  _ZN22DB_LoadBloodBestRecord8dispatchEiiP6Stream
#           DB_LoadBloodBestRecord::dispatch(int, int, Stream*)
# range [0x0843199a, 0x08431c73]
0843199a +0x000:  push   %ebp
0843199b +0x001:  mov    %esp,%ebp
0843199d +0x003:  push   %esi
0843199e +0x004:  push   %ebx
0843199f +0x005:  sub    $0x50,%esp
084319a2 +0x008:  mov    0x8(%ebp),%eax
084319a5 +0x00b:  mov    0x14(%ebp),%edx
084319a8 +0x00e:  mov    %edx,0xc(%esp)
084319ac +0x012:  mov    0x10(%ebp),%edx
084319af +0x015:  mov    %edx,0x8(%esp)
084319b3 +0x019:  mov    0xc(%ebp),%edx
084319b6 +0x01c:  mov    %edx,0x4(%esp)
084319ba +0x020:  mov    %eax,(%esp)
084319bd +0x023:  call   083fbf7c <_ZN12DBDispatcher8dispatchEiiP6Stream>  ; DBDispatcher::dispatch(int, int, Stream*)
084319c2 +0x028:  xor    $0x1,%eax
084319c5 +0x02b:  test   %al,%al
084319c7 +0x02d:  je     084319d3 <+0x39>
084319c9 +0x02f:  mov    $0x0,%eax
084319ce +0x034:  jmp    08431c6c <+0x2d2>
084319d3 +0x039:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
084319d8 +0x03e:  movl   $0x0,0x8(%esp)
084319e0 +0x046:  movl   $0x2,0x4(%esp)
084319e8 +0x04e:  mov    %eax,(%esp)
084319eb +0x051:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
084319f0 +0x056:  mov    %eax,-0x14(%ebp)
084319f3 +0x059:  movl   $0x0,-0x28(%ebp)
084319fa +0x060:  movl   $0x0,-0x2c(%ebp)
08431a01 +0x067:  movl   $0x0,-0x30(%ebp)
08431a08 +0x06e:  movl   $0x0,-0x34(%ebp)
08431a0f +0x075:  lea    -0x28(%ebp),%eax
08431a12 +0x078:  mov    %eax,0x4(%esp)
08431a16 +0x07c:  mov    0x14(%ebp),%eax
08431a19 +0x07f:  mov    %eax,(%esp)
08431a1c +0x082:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
08431a21 +0x087:  mov    -0x28(%ebp),%eax
08431a24 +0x08a:  mov    %eax,0x8(%esp)
08431a28 +0x08e:  movl   $"seLect best_round, best_time, dungeon_index from charac_blood_best_record where charac_no=%u",0x4(%esp)
08431a30 +0x096:  mov    -0x14(%ebp),%eax
08431a33 +0x099:  mov    %eax,(%esp)
08431a36 +0x09c:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08431a3b +0x0a1:  movl   $0x1,0x4(%esp)
08431a43 +0x0a9:  mov    -0x14(%ebp),%eax
08431a46 +0x0ac:  mov    %eax,(%esp)
08431a49 +0x0af:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08431a4e +0x0b4:  xor    $0x1,%eax
08431a51 +0x0b7:  test   %al,%al
08431a53 +0x0b9:  je     08431a5f <+0xc5>
08431a55 +0x0bb:  mov    $0x0,%eax
08431a5a +0x0c0:  jmp    08431c6c <+0x2d2>
08431a5f +0x0c5:  mov    -0x14(%ebp),%eax
08431a62 +0x0c8:  mov    %eax,(%esp)
08431a65 +0x0cb:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08431a6a +0x0d0:  xor    $0x1,%eax
08431a6d +0x0d3:  test   %al,%al
08431a6f +0x0d5:  jne    08431a80 <+0xe6>
08431a71 +0x0d7:  mov    -0x14(%ebp),%eax
08431a74 +0x0da:  mov    %eax,(%esp)
08431a77 +0x0dd:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08431a7c +0x0e2:  test   %eax,%eax
08431a7e +0x0e4:  jne    08431a87 <+0xed>
08431a80 +0x0e6:  mov    $0x1,%eax
08431a85 +0x0eb:  jmp    08431a8c <+0xf2>
08431a87 +0x0ed:  mov    $0x0,%eax
08431a8c +0x0f2:  test   %al,%al
08431a8e +0x0f4:  je     08431ad7 <+0x13d>
08431a90 +0x0f6:  mov    -0x28(%ebp),%ebx
08431a93 +0x0f9:  movl   $0x0,0xc(%esp)
08431a9b +0x101:  movl   $0x78e4,0x8(%esp)
08431aa3 +0x109:  movl   $&_ZZN22DB_LoadBloodBestRecord8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
08431aab +0x111:  lea    -0x24(%ebp),%eax
08431aae +0x114:  mov    %eax,(%esp)
08431ab1 +0x117:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08431ab6 +0x11c:  mov    %ebx,0x8(%esp)
08431aba +0x120:  movl   $"Not exist data charac_blood_best_record. [charac_no:%d]",0x4(%esp)
08431ac2 +0x128:  lea    -0x24(%ebp),%eax
08431ac5 +0x12b:  mov    %eax,(%esp)
08431ac8 +0x12e:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08431acd +0x133:  mov    $0x1,%eax
08431ad2 +0x138:  jmp    08431c6c <+0x2d2>
08431ad7 +0x13d:  movl   $0x0,-0x10(%ebp)
08431ade +0x144:  jmp    08431c4e <+0x2b4>
08431ae3 +0x149:  lea    -0x30(%ebp),%eax
08431ae6 +0x14c:  mov    %eax,0x8(%esp)
08431aea +0x150:  movl   $0x0,0x4(%esp)
08431af2 +0x158:  mov    -0x14(%ebp),%eax
08431af5 +0x15b:  mov    %eax,(%esp)
08431af8 +0x15e:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08431afd +0x163:  xor    $0x1,%eax
08431b00 +0x166:  test   %al,%al
08431b02 +0x168:  je     08431b0e <+0x174>
08431b04 +0x16a:  mov    $0x0,%eax
08431b09 +0x16f:  jmp    08431c6c <+0x2d2>
08431b0e +0x174:  lea    -0x2c(%ebp),%eax
08431b11 +0x177:  mov    %eax,0x8(%esp)
08431b15 +0x17b:  movl   $0x1,0x4(%esp)
08431b1d +0x183:  mov    -0x14(%ebp),%eax
08431b20 +0x186:  mov    %eax,(%esp)
08431b23 +0x189:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
08431b28 +0x18e:  xor    $0x1,%eax
08431b2b +0x191:  test   %al,%al
08431b2d +0x193:  je     08431b39 <+0x19f>
08431b2f +0x195:  mov    $0x0,%eax
08431b34 +0x19a:  jmp    08431c6c <+0x2d2>
08431b39 +0x19f:  lea    -0x34(%ebp),%eax
08431b3c +0x1a2:  mov    %eax,0x8(%esp)
08431b40 +0x1a6:  movl   $0x2,0x4(%esp)
08431b48 +0x1ae:  mov    -0x14(%ebp),%eax
08431b4b +0x1b1:  mov    %eax,(%esp)
08431b4e +0x1b4:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08431b53 +0x1b9:  xor    $0x1,%eax
08431b56 +0x1bc:  test   %al,%al
08431b58 +0x1be:  je     08431b64 <+0x1ca>
08431b5a +0x1c0:  mov    $0x0,%eax
08431b5f +0x1c5:  jmp    08431c6c <+0x2d2>
08431b64 +0x1ca:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08431b69 +0x1cf:  movl   $0x78f2,0x8(%esp)
08431b71 +0x1d7:  movl   $"DBThread.cpp",0x4(%esp)
08431b79 +0x1df:  mov    %eax,(%esp)
08431b7c +0x1e2:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08431b81 +0x1e7:  movl   $0x1,0x8(%esp)
08431b89 +0x1ef:  mov    %eax,0x4(%esp)
08431b8d +0x1f3:  lea    -0x3c(%ebp),%eax
08431b90 +0x1f6:  mov    %eax,(%esp)
08431b93 +0x1f9:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08431b98 +0x1fe:  lea    -0x3c(%ebp),%eax
08431b9b +0x201:  mov    %eax,(%esp)
08431b9e +0x204:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08431ba3 +0x209:  movl   $0x13f,0x4(%esp)
08431bab +0x211:  mov    %eax,(%esp)
08431bae +0x214:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08431bb3 +0x219:  lea    -0x3c(%ebp),%eax
08431bb6 +0x21c:  mov    %eax,(%esp)
08431bb9 +0x21f:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08431bbe +0x224:  mov    0x10(%ebp),%edx
08431bc1 +0x227:  mov    %edx,0x4(%esp)
08431bc5 +0x22b:  mov    %eax,(%esp)
08431bc8 +0x22e:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08431bcd +0x233:  lea    -0x3c(%ebp),%eax
08431bd0 +0x236:  mov    %eax,(%esp)
08431bd3 +0x239:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08431bd8 +0x23e:  mov    %eax,(%esp)
08431bdb +0x241:  call   08452e78 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x5a8e>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x5a8e
08431be0 +0x246:  mov    %eax,-0xc(%ebp)
08431be3 +0x249:  mov    -0x28(%ebp),%edx
08431be6 +0x24c:  mov    -0xc(%ebp),%eax
08431be9 +0x24f:  mov    %edx,(%eax)
08431beb +0x251:  mov    -0x2c(%ebp),%edx
08431bee +0x254:  mov    -0xc(%ebp),%eax
08431bf1 +0x257:  mov    %edx,0x4(%eax)
08431bf4 +0x25a:  mov    -0x30(%ebp),%edx
08431bf7 +0x25d:  mov    -0xc(%ebp),%eax
08431bfa +0x260:  mov    %edx,0x8(%eax)
08431bfd +0x263:  mov    -0x34(%ebp),%edx
08431c00 +0x266:  mov    -0xc(%ebp),%eax
08431c03 +0x269:  mov    %edx,0xc(%eax)
08431c06 +0x26c:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08431c0b +0x271:  lea    -0x3c(%ebp),%edx
08431c0e +0x274:  mov    %edx,0x8(%esp)
08431c12 +0x278:  movl   $0x1,0x4(%esp)
08431c1a +0x280:  mov    %eax,(%esp)
08431c1d +0x283:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08431c22 +0x288:  jmp    08431c3f <+0x2a5>
08431c24 +0x28a:  mov    %edx,%ebx
08431c26 +0x28c:  mov    %eax,%esi
08431c28 +0x28e:  lea    -0x3c(%ebp),%eax
08431c2b +0x291:  mov    %eax,(%esp)
08431c2e +0x294:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08431c33 +0x299:  mov    %esi,%eax
08431c35 +0x29b:  mov    %ebx,%edx
08431c37 +0x29d:  mov    %eax,(%esp)
08431c3a +0x2a0:  call   08ae3750 <_Unwind_Resume>
08431c3f +0x2a5:  lea    -0x3c(%ebp),%eax
08431c42 +0x2a8:  mov    %eax,(%esp)
08431c45 +0x2ab:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08431c4a +0x2b0:  addl   $0x1,-0x10(%ebp)
08431c4e +0x2b4:  mov    -0x14(%ebp),%eax
08431c51 +0x2b7:  mov    %eax,(%esp)
08431c54 +0x2ba:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08431c59 +0x2bf:  cmp    -0x10(%ebp),%eax
08431c5c +0x2c2:  seta   %al
08431c5f +0x2c5:  test   %al,%al
08431c61 +0x2c7:  jne    08431ae3 <+0x149>
08431c67 +0x2cd:  mov    $0x1,%eax
08431c6c +0x2d2:  add    $0x50,%esp
08431c6f +0x2d5:  pop    %ebx
08431c70 +0x2d6:  pop    %esi
08431c71 +0x2d7:  pop    %ebp
08431c72 +0x2d8:  ret
08431c73 +0x2d9:  nop
```

## 反编译 C

```c
// DB_LoadBloodBestRecord::dispatch @ 0x843199a

/* DB_LoadBloodBestRecord::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_LoadBloodBestRecord::dispatch
          (DB_LoadBloodBestRecord *this,int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  Stream *pSVar4;
  CStreamGuard *pCVar5;
  uint uVar6;
  CStreamGuard local_40 [8];
  int local_38;
  int local_34;
  uint local_30;
  uint local_2c;
  cMyTrace local_28 [16];
  MySQL *local_18;
  uint local_14;
  SIG_LOAD_BLOOD_DUNGEON_BEST_RECORD *local_10;
  
  pSVar4 = param_3;
  cVar2 = DBDispatcher::dispatch((int)this,param_1,(Stream *)param_2);
  if (cVar2 != '\x01') {
    return 0;
  }
  local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0,pSVar4);
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_38 = 0;
  Stream::operator>>(param_3,&local_2c);
  MySQL::set_query(local_18,
                   "seLect best_round, best_time, dungeon_index from charac_blood_best_record where charac_no=%u"
                   ,local_2c);
  cVar2 = MySQL::exec(local_18,true);
  if (cVar2 != '\x01') {
    return 0;
  }
  cVar2 = MySQL::fetch(local_18);
  if ((cVar2 == '\x01') && (iVar3 = MySQL::get_n_rows(local_18), iVar3 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  uVar6 = local_2c;
  if (bVar1) {
    cMyTrace::cMyTrace(local_28,"virtual bool DB_LoadBloodBestRecord::dispatch(int, int, Stream*)",
                       0x78e4,0);
    cMyTrace::operator()(local_28,"Not exist data charac_blood_best_record. [charac_no:%d]",uVar6);
  }
  else {
    local_14 = 0;
    while (uVar6 = MySQL::get_n_rows(local_18), local_14 < uVar6) {
      cVar2 = MySQL::get_int(local_18,0,&local_34);
      if (cVar2 != '\x01') {
        return 0;
      }
      cVar2 = MySQL::get_uint(local_18,1,&local_30);
      if (cVar2 != '\x01') {
        return 0;
      }
      cVar2 = MySQL::get_int(local_18,2,&local_38);
      if (cVar2 != '\x01') {
        return 0;
      }
      pSVar4 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x78f2);
      CStreamGuard::CStreamGuard(local_40,pSVar4,true);
      pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_40);
                    /* try { // try from 08431bae to 08431c21 has its CatchHandler @ 08431c24 */
      CStreamGuard::operator<<(pCVar5,0x13f);
      pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_40);
      CStreamGuard::operator<<(pCVar5,param_2);
      pCVar5 = (CStreamGuard *)CStreamGuard::operator->(local_40);
      local_10 = CStreamGuard::GetInBuffer<SIG_LOAD_BLOOD_DUNGEON_BEST_RECORD>(pCVar5);
      *(uint *)local_10 = local_2c;
      *(uint *)(local_10 + 4) = local_30;
      *(int *)(local_10 + 8) = local_34;
      *(int *)(local_10 + 0xc) = local_38;
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_40);
      CStreamGuard::~CStreamGuard(local_40);
      local_14 = local_14 + 1;
    }
  }
  return 1;
}
```
