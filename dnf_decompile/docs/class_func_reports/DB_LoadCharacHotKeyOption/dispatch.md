# dispatch

`_ZN25DB_LoadCharacHotKeyOption8dispatchEiiP6Stream`

`DB_LoadCharacHotKeyOption::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_LoadCharacHotKeyOption` | `0x0842f3a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0842f3a0  _ZN25DB_LoadCharacHotKeyOption8dispatchEiiP6Stream
#           DB_LoadCharacHotKeyOption::dispatch(int, int, Stream*)
# range [0x0842f3a0, 0x0842f70f]
0842f3a0 +0x000:  push   %ebp
0842f3a1 +0x001:  mov    %esp,%ebp
0842f3a3 +0x003:  push   %edi
0842f3a4 +0x004:  push   %esi
0842f3a5 +0x005:  push   %ebx
0842f3a6 +0x006:  sub    $0x14c,%esp
0842f3ac +0x00c:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0842f3b1 +0x011:  movl   $0x0,0x8(%esp)
0842f3b9 +0x019:  movl   $0xb,0x4(%esp)
0842f3c1 +0x021:  mov    %eax,(%esp)
0842f3c4 +0x024:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0842f3c9 +0x029:  mov    %eax,-0x2c(%ebp)
0842f3cc +0x02c:  mov    0x14(%ebp),%eax
0842f3cf +0x02f:  mov    %eax,(%esp)
0842f3d2 +0x032:  call   08452aee <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x5704>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x5704
0842f3d7 +0x037:  mov    %eax,-0x28(%ebp)
0842f3da +0x03a:  mov    -0x28(%ebp),%eax
0842f3dd +0x03d:  mov    0x4(%eax),%ebx
0842f3e0 +0x040:  mov    -0x28(%ebp),%eax
0842f3e3 +0x043:  mov    (%eax),%eax
0842f3e5 +0x045:  movl   $0x0,0x4(%esp)
0842f3ed +0x04d:  mov    %eax,(%esp)
0842f3f0 +0x050:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0842f3f5 +0x055:  mov    %ebx,0xc(%esp)
0842f3f9 +0x059:  mov    %eax,0x8(%esp)
0842f3fd +0x05d:  movl   $"seLect key_option from member_key_option where m_id = %s and key_type = %d",0x4(%esp)
0842f405 +0x065:  mov    -0x2c(%ebp),%eax
0842f408 +0x068:  mov    %eax,(%esp)
0842f40b +0x06b:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842f410 +0x070:  movl   $0x1,0x4(%esp)
0842f418 +0x078:  mov    -0x2c(%ebp),%eax
0842f41b +0x07b:  mov    %eax,(%esp)
0842f41e +0x07e:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0842f423 +0x083:  xor    $0x1,%eax
0842f426 +0x086:  test   %al,%al
0842f428 +0x088:  je     0842f434 <+0x94>
0842f42a +0x08a:  mov    $0x0,%ebx
0842f42f +0x08f:  jmp    0842f703 <+0x363>
0842f434 +0x094:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0842f439 +0x099:  movl   $0x746e,0x8(%esp)
0842f441 +0x0a1:  movl   $"DBThread.cpp",0x4(%esp)
0842f449 +0x0a9:  mov    %eax,(%esp)
0842f44c +0x0ac:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0842f451 +0x0b1:  movl   $0x1,0x8(%esp)
0842f459 +0x0b9:  mov    %eax,0x4(%esp)
0842f45d +0x0bd:  lea    -0x54(%ebp),%eax
0842f460 +0x0c0:  mov    %eax,(%esp)
0842f463 +0x0c3:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0842f468 +0x0c8:  lea    -0x54(%ebp),%eax
0842f46b +0x0cb:  mov    %eax,(%esp)
0842f46e +0x0ce:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842f473 +0x0d3:  movl   $0x320,0x4(%esp)
0842f47b +0x0db:  mov    %eax,(%esp)
0842f47e +0x0de:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0842f483 +0x0e3:  lea    -0x54(%ebp),%eax
0842f486 +0x0e6:  mov    %eax,(%esp)
0842f489 +0x0e9:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842f48e +0x0ee:  mov    0x10(%ebp),%edx
0842f491 +0x0f1:  mov    %edx,0x4(%esp)
0842f495 +0x0f5:  mov    %eax,(%esp)
0842f498 +0x0f8:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0842f49d +0x0fd:  lea    -0x54(%ebp),%eax
0842f4a0 +0x100:  mov    %eax,(%esp)
0842f4a3 +0x103:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0842f4a8 +0x108:  mov    %eax,(%esp)
0842f4ab +0x10b:  call   08236eb4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc55e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc55e
0842f4b0 +0x110:  mov    %eax,-0x24(%ebp)
0842f4b3 +0x113:  mov    -0x28(%ebp),%eax
0842f4b6 +0x116:  mov    (%eax),%edx
0842f4b8 +0x118:  mov    -0x24(%ebp),%eax
0842f4bb +0x11b:  mov    %edx,(%eax)
0842f4bd +0x11d:  mov    -0x28(%ebp),%eax
0842f4c0 +0x120:  mov    0x4(%eax),%eax
0842f4c3 +0x123:  mov    %eax,%edx
0842f4c5 +0x125:  mov    -0x24(%ebp),%eax
0842f4c8 +0x128:  mov    %dl,0x4(%eax)
0842f4cb +0x12b:  mov    -0x2c(%ebp),%eax
0842f4ce +0x12e:  mov    %eax,(%esp)
0842f4d1 +0x131:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0842f4d6 +0x136:  test   %eax,%eax
0842f4d8 +0x138:  sete   %al
0842f4db +0x13b:  test   %al,%al
0842f4dd +0x13d:  je     0842f513 <+0x173>
0842f4df +0x13f:  mov    -0x24(%ebp),%eax
0842f4e2 +0x142:  add    $0x5,%eax
0842f4e5 +0x145:  mov    %eax,(%esp)
0842f4e8 +0x148:  call   0822aaf4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x19e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x19e
0842f4ed +0x14d:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0842f4f2 +0x152:  lea    -0x54(%ebp),%edx
0842f4f5 +0x155:  mov    %edx,0x8(%esp)
0842f4f9 +0x159:  movl   $0x1,0x4(%esp)
0842f501 +0x161:  mov    %eax,(%esp)
0842f504 +0x164:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0842f509 +0x169:  mov    $0x1,%ebx
0842f50e +0x16e:  jmp    0842f6f8 <+0x358>
0842f513 +0x173:  mov    -0x2c(%ebp),%eax
0842f516 +0x176:  mov    %eax,(%esp)
0842f519 +0x179:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0842f51e +0x17e:  xor    $0x1,%eax
0842f521 +0x181:  test   %al,%al
0842f523 +0x183:  je     0842f580 <+0x1e0>
0842f525 +0x185:  mov    -0x28(%ebp),%eax
0842f528 +0x188:  mov    (%eax),%eax
0842f52a +0x18a:  movl   $0x0,0x4(%esp)
0842f532 +0x192:  mov    %eax,(%esp)
0842f535 +0x195:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0842f53a +0x19a:  mov    %eax,%ebx
0842f53c +0x19c:  movl   $0x5,0xc(%esp)
0842f544 +0x1a4:  movl   $0x747f,0x8(%esp)
0842f54c +0x1ac:  movl   $&_ZZN25DB_LoadCharacHotKeyOption8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
0842f554 +0x1b4:  lea    -0x4c(%ebp),%eax
0842f557 +0x1b7:  mov    %eax,(%esp)
0842f55a +0x1ba:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0842f55f +0x1bf:  mov    %ebx,0x8(%esp)
0842f563 +0x1c3:  movl   $"DB_LoadCharacHotKeyOption::dispatch, fetch ERROR m_id=%s",0x4(%esp)
0842f56b +0x1cb:  lea    -0x4c(%ebp),%eax
0842f56e +0x1ce:  mov    %eax,(%esp)
0842f571 +0x1d1:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0842f576 +0x1d6:  mov    $0x0,%ebx
0842f57b +0x1db:  jmp    0842f6f8 <+0x358>
0842f580 +0x1e0:  lea    -0x145(%ebp),%edx
0842f586 +0x1e6:  mov    $0xed,%ebx
0842f58b +0x1eb:  mov    $0x0,%eax
0842f590 +0x1f0:  mov    %edx,%ecx
0842f592 +0x1f2:  and    $0x1,%ecx
0842f595 +0x1f5:  test   %ecx,%ecx
0842f597 +0x1f7:  je     0842f5a1 <+0x201>
0842f599 +0x1f9:  mov    %al,(%edx)
0842f59b +0x1fb:  add    $0x1,%edx
0842f59e +0x1fe:  sub    $0x1,%ebx
0842f5a1 +0x201:  mov    %edx,%ecx
0842f5a3 +0x203:  and    $0x2,%ecx
0842f5a6 +0x206:  test   %ecx,%ecx
0842f5a8 +0x208:  je     0842f5b3 <+0x213>
0842f5aa +0x20a:  mov    %ax,(%edx)
0842f5ad +0x20d:  add    $0x2,%edx
0842f5b0 +0x210:  sub    $0x2,%ebx
0842f5b3 +0x213:  mov    %ebx,%ecx
0842f5b5 +0x215:  shr    $0x2,%ecx
0842f5b8 +0x218:  mov    %edx,%edi
0842f5ba +0x21a:  rep stos %eax,%es:(%edi)
0842f5bc +0x21c:  mov    %edi,%edx
0842f5be +0x21e:  mov    %ebx,%ecx
0842f5c0 +0x220:  and    $0x2,%ecx
0842f5c3 +0x223:  test   %ecx,%ecx
0842f5c5 +0x225:  je     0842f5cd <+0x22d>
0842f5c7 +0x227:  mov    %ax,(%edx)
0842f5ca +0x22a:  add    $0x2,%edx
0842f5cd +0x22d:  mov    %ebx,%ecx
0842f5cf +0x22f:  and    $0x1,%ecx
0842f5d2 +0x232:  test   %ecx,%ecx
0842f5d4 +0x234:  je     0842f5db <+0x23b>
0842f5d6 +0x236:  mov    %al,(%edx)
0842f5d8 +0x238:  add    $0x1,%edx
0842f5db +0x23b:  movl   $0xed,0xc(%esp)
0842f5e3 +0x243:  lea    -0x145(%ebp),%eax
0842f5e9 +0x249:  mov    %eax,0x8(%esp)
0842f5ed +0x24d:  movl   $0x0,0x4(%esp)
0842f5f5 +0x255:  mov    -0x2c(%ebp),%eax
0842f5f8 +0x258:  mov    %eax,(%esp)
0842f5fb +0x25b:  call   0812531a <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x7d>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x7d
0842f600 +0x260:  mov    %al,-0x1d(%ebp)
0842f603 +0x263:  movzbl -0x1d(%ebp),%eax
0842f607 +0x267:  xor    $0x1,%eax
0842f60a +0x26a:  test   %al,%al
0842f60c +0x26c:  je     0842f669 <+0x2c9>
0842f60e +0x26e:  mov    -0x28(%ebp),%eax
0842f611 +0x271:  mov    (%eax),%eax
0842f613 +0x273:  movl   $0x0,0x4(%esp)
0842f61b +0x27b:  mov    %eax,(%esp)
0842f61e +0x27e:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0842f623 +0x283:  mov    %eax,%ebx
0842f625 +0x285:  movl   $0x5,0xc(%esp)
0842f62d +0x28d:  movl   $0x7489,0x8(%esp)
0842f635 +0x295:  movl   $&_ZZN25DB_LoadCharacHotKeyOption8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
0842f63d +0x29d:  lea    -0x3c(%ebp),%eax
0842f640 +0x2a0:  mov    %eax,(%esp)
0842f643 +0x2a3:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0842f648 +0x2a8:  mov    %ebx,0x8(%esp)
0842f64c +0x2ac:  movl   $"DB_LoadCharacHotKeyOption, get_binary(0) ERROR m_id=%s",0x4(%esp)
0842f654 +0x2b4:  lea    -0x3c(%ebp),%eax
0842f657 +0x2b7:  mov    %eax,(%esp)
0842f65a +0x2ba:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0842f65f +0x2bf:  mov    $0x0,%ebx
0842f664 +0x2c4:  jmp    0842f6f8 <+0x358>
0842f669 +0x2c9:  movl   $0x0,0x4(%esp)
0842f671 +0x2d1:  mov    -0x2c(%ebp),%eax
0842f674 +0x2d4:  mov    %eax,(%esp)
0842f677 +0x2d7:  call   081253de <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x141>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x141
0842f67c +0x2dc:  mov    %eax,-0x1c(%ebp)
0842f67f +0x2df:  movl   $0xbc,-0x58(%ebp)
0842f686 +0x2e6:  mov    -0x24(%ebp),%eax
0842f689 +0x2e9:  add    $0x5,%eax
0842f68c +0x2ec:  mov    -0x1c(%ebp),%edx
0842f68f +0x2ef:  mov    %edx,0xc(%esp)
0842f693 +0x2f3:  lea    -0x145(%ebp),%edx
0842f699 +0x2f9:  mov    %edx,0x8(%esp)
0842f69d +0x2fd:  lea    -0x58(%ebp),%edx
0842f6a0 +0x300:  mov    %edx,0x4(%esp)
0842f6a4 +0x304:  mov    %eax,(%esp)
0842f6a7 +0x307:  call   086b2102 <_Z14uncompress_zipPcRjPKcj>  ; uncompress_zip(char*, unsigned int&, char const*, unsigned int)
0842f6ac +0x30c:  xor    $0x1,%eax
0842f6af +0x30f:  test   %al,%al
0842f6b1 +0x311:  je     0842f6ba <+0x31a>
0842f6b3 +0x313:  mov    $0x0,%ebx
0842f6b8 +0x318:  jmp    0842f6f8 <+0x358>
0842f6ba +0x31a:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0842f6bf +0x31f:  lea    -0x54(%ebp),%edx
0842f6c2 +0x322:  mov    %edx,0x8(%esp)
0842f6c6 +0x326:  movl   $0x1,0x4(%esp)
0842f6ce +0x32e:  mov    %eax,(%esp)
0842f6d1 +0x331:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0842f6d6 +0x336:  mov    $0x1,%ebx
0842f6db +0x33b:  jmp    0842f6f8 <+0x358>
0842f6dd +0x33d:  mov    %edx,%ebx
0842f6df +0x33f:  mov    %eax,%esi
0842f6e1 +0x341:  lea    -0x54(%ebp),%eax
0842f6e4 +0x344:  mov    %eax,(%esp)
0842f6e7 +0x347:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0842f6ec +0x34c:  mov    %esi,%eax
0842f6ee +0x34e:  mov    %ebx,%edx
0842f6f0 +0x350:  mov    %eax,(%esp)
0842f6f3 +0x353:  call   08ae3750 <_Unwind_Resume>
0842f6f8 +0x358:  lea    -0x54(%ebp),%eax
0842f6fb +0x35b:  mov    %eax,(%esp)
0842f6fe +0x35e:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0842f703 +0x363:  mov    %ebx,%eax
0842f705 +0x365:  add    $0x14c,%esp
0842f70b +0x36b:  pop    %ebx
0842f70c +0x36c:  pop    %esi
0842f70d +0x36d:  pop    %edi
0842f70e +0x36e:  pop    %ebp
0842f70f +0x36f:  ret
```

## 反编译 C

```c
// DB_LoadCharacHotKeyOption::dispatch @ 0x842f3a0

/* DB_LoadCharacHotKeyOption::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_LoadCharacHotKeyOption::dispatch
          (DB_LoadCharacHotKeyOption *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 uVar8;
  uint uVar9;
  bool bVar10;
  byte bVar11;
  char local_149;
  char local_148 [236];
  uint local_5c;
  CStreamGuard local_58 [8];
  cMyTrace local_50 [16];
  cMyTrace local_40 [16];
  MySQL *local_30;
  SIG_REQ_LOAD_CHARAC_HOTKEY_OPTION *local_2c;
  SIG_LOAD_CHARAC_HOTKEY_OPTION *local_28;
  char local_21;
  uint local_20;
  
  bVar11 = 0;
  local_30 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,0xb,0);
  local_2c = Stream::GetOutBuffer<SIG_REQ_LOAD_CHARAC_HOTKEY_OPTION>(param_3);
  uVar8 = *(undefined4 *)(local_2c + 4);
  uVar2 = NumberToString(*(uint *)local_2c,0);
  MySQL::set_query(local_30,
                   "seLect key_option from member_key_option where m_id = %s and key_type = %d",
                   uVar2,uVar8);
  cVar1 = MySQL::exec(local_30,true);
  if (cVar1 == '\x01') {
    pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x746e);
    CStreamGuard::CStreamGuard(local_58,pSVar3,true);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_58);
                    /* try { // try from 0842f47e to 0842f6d5 has its CatchHandler @ 0842f6dd */
    CStreamGuard::operator<<(pCVar4,800);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_58);
    CStreamGuard::operator<<(pCVar4,param_2);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_58);
    local_28 = CStreamGuard::GetInBuffer<SIG_LOAD_CHARAC_HOTKEY_OPTION>(pCVar4);
    *(uint *)local_28 = *(uint *)local_2c;
    local_28[4] = SUB41(*(uint *)(local_2c + 4),0);
    iVar5 = MySQL::get_n_rows(local_30);
    if (iVar5 == 0) {
      CHotkeyOption::clear((CHotkeyOption *)(local_28 + 5));
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_58);
      uVar8 = 1;
    }
    else {
      cVar1 = MySQL::fetch(local_30);
      if (cVar1 == '\x01') {
        pcVar7 = &local_149;
        uVar9 = 0xed;
        bVar10 = ((uint)pcVar7 & 1) != 0;
        if (bVar10) {
          local_149 = '\0';
          pcVar7 = local_148;
          uVar9 = 0xec;
        }
        if (((uint)pcVar7 & 2) != 0) {
          pcVar7[0] = '\0';
          pcVar7[1] = '\0';
          pcVar7 = pcVar7 + 2;
          uVar9 = uVar9 - 2;
        }
        for (uVar6 = uVar9 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          pcVar7[0] = '\0';
          pcVar7[1] = '\0';
          pcVar7[2] = '\0';
          pcVar7[3] = '\0';
          pcVar7 = pcVar7 + ((uint)bVar11 * -2 + 1) * 4;
        }
        if ((uVar9 & 2) != 0) {
          pcVar7[0] = '\0';
          pcVar7[1] = '\0';
          pcVar7 = pcVar7 + 2;
        }
        if (!bVar10) {
          *pcVar7 = '\0';
        }
        local_21 = MySQL::get_binary(local_30,0,&local_149,0xed);
        if (local_21 == '\x01') {
          local_20 = MySQL::get_binary_length(local_30,0);
          local_5c = 0xbc;
          cVar1 = uncompress_zip((char *)(local_28 + 5),&local_5c,&local_149,local_20);
          if (cVar1 == '\x01') {
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_58);
            uVar8 = 1;
          }
          else {
            uVar8 = 0;
          }
        }
        else {
          uVar8 = NumberToString(*(uint *)local_2c,0);
          cMyTrace::cMyTrace(local_40,
                             "virtual bool DB_LoadCharacHotKeyOption::dispatch(int, int, Stream*)",
                             0x7489,5);
          cMyTrace::operator()
                    (local_40,"DB_LoadCharacHotKeyOption, get_binary(0) ERROR m_id=%s",uVar8);
          uVar8 = 0;
        }
      }
      else {
        uVar8 = NumberToString(*(uint *)local_2c,0);
        cMyTrace::cMyTrace(local_50,
                           "virtual bool DB_LoadCharacHotKeyOption::dispatch(int, int, Stream*)",
                           0x747f,5);
        cMyTrace::operator()
                  (local_50,"DB_LoadCharacHotKeyOption::dispatch, fetch ERROR m_id=%s",uVar8);
        uVar8 = 0;
      }
    }
    CStreamGuard::~CStreamGuard(local_58);
  }
  else {
    uVar8 = 0;
  }
  return uVar8;
}
```
