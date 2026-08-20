# dispatch

`_ZN18DB_AuctionSubMoney8dispatchEiiP6Stream`

`DB_AuctionSubMoney::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_AuctionSubMoney` | `0x08448530` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08448530  _ZN18DB_AuctionSubMoney8dispatchEiiP6Stream
#           DB_AuctionSubMoney::dispatch(int, int, Stream*)
# range [0x08448530, 0x0844874d]
08448530 +0x000:  push   %ebp
08448531 +0x001:  mov    %esp,%ebp
08448533 +0x003:  push   %edi
08448534 +0x004:  push   %esi
08448535 +0x005:  push   %ebx
08448536 +0x006:  sub    $0x7c,%esp
08448539 +0x009:  mov    0x14(%ebp),%eax
0844853c +0x00c:  mov    %eax,(%esp)
0844853f +0x00f:  call   08454626 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x723c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x723c
08448544 +0x014:  mov    %eax,-0x24(%ebp)
08448547 +0x017:  movl   $0x0,-0x28(%ebp)
0844854e +0x01e:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08448553 +0x023:  movl   $0x0,0x8(%esp)
0844855b +0x02b:  movl   $0x2,0x4(%esp)
08448563 +0x033:  mov    %eax,(%esp)
08448566 +0x036:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0844856b +0x03b:  mov    %eax,-0x20(%ebp)
0844856e +0x03e:  lea    -0x6b(%ebp),%edx
08448571 +0x041:  mov    $0x3b,%ebx
08448576 +0x046:  mov    $0x0,%eax
0844857b +0x04b:  mov    %edx,%ecx
0844857d +0x04d:  and    $0x1,%ecx
08448580 +0x050:  test   %ecx,%ecx
08448582 +0x052:  je     0844858c <+0x5c>
08448584 +0x054:  mov    %al,(%edx)
08448586 +0x056:  add    $0x1,%edx
08448589 +0x059:  sub    $0x1,%ebx
0844858c +0x05c:  mov    %edx,%ecx
0844858e +0x05e:  and    $0x2,%ecx
08448591 +0x061:  test   %ecx,%ecx
08448593 +0x063:  je     0844859e <+0x6e>
08448595 +0x065:  mov    %ax,(%edx)
08448598 +0x068:  add    $0x2,%edx
0844859b +0x06b:  sub    $0x2,%ebx
0844859e +0x06e:  mov    %ebx,%ecx
084485a0 +0x070:  shr    $0x2,%ecx
084485a3 +0x073:  mov    %edx,%edi
084485a5 +0x075:  rep stos %eax,%es:(%edi)
084485a7 +0x077:  mov    %edi,%edx
084485a9 +0x079:  mov    %ebx,%ecx
084485ab +0x07b:  and    $0x2,%ecx
084485ae +0x07e:  test   %ecx,%ecx
084485b0 +0x080:  je     084485b8 <+0x88>
084485b2 +0x082:  mov    %ax,(%edx)
084485b5 +0x085:  add    $0x2,%edx
084485b8 +0x088:  mov    %ebx,%ecx
084485ba +0x08a:  and    $0x1,%ecx
084485bd +0x08d:  test   %ecx,%ecx
084485bf +0x08f:  je     084485c6 <+0x96>
084485c1 +0x091:  mov    %al,(%edx)
084485c3 +0x093:  add    $0x1,%edx
084485c6 +0x096:  mov    -0x24(%ebp),%eax
084485c9 +0x099:  add    $0x8,%eax
084485cc +0x09c:  mov    %eax,0x8(%esp)
084485d0 +0x0a0:  lea    -0x6b(%ebp),%eax
084485d3 +0x0a3:  mov    %eax,0x4(%esp)
084485d7 +0x0a7:  mov    -0x20(%ebp),%eax
084485da +0x0aa:  mov    %eax,(%esp)
084485dd +0x0ad:  call   083f48aa <_ZN5MySQL13escape_stringEPcPKc>  ; MySQL::escape_string(char*, char const*)
084485e2 +0x0b2:  lea    -0x6b(%ebp),%eax
084485e5 +0x0b5:  mov    %eax,0x8(%esp)
084485e9 +0x0b9:  movl   $"seLect m_id from charac_info where charac_name='%s' limit 1",0x4(%esp)
084485f1 +0x0c1:  mov    -0x20(%ebp),%eax
084485f4 +0x0c4:  mov    %eax,(%esp)
084485f7 +0x0c7:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084485fc +0x0cc:  movl   $0x1,0x4(%esp)
08448604 +0x0d4:  mov    -0x20(%ebp),%eax
08448607 +0x0d7:  mov    %eax,(%esp)
0844860a +0x0da:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0844860f +0x0df:  xor    $0x1,%eax
08448612 +0x0e2:  test   %al,%al
08448614 +0x0e4:  je     08448620 <+0xf0>
08448616 +0x0e6:  mov    $0x0,%ebx
0844861b +0x0eb:  jmp    08448743 <+0x213>
08448620 +0x0f0:  mov    -0x20(%ebp),%eax
08448623 +0x0f3:  mov    %eax,(%esp)
08448626 +0x0f6:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0844862b +0x0fb:  xor    $0x1,%eax
0844862e +0x0fe:  test   %al,%al
08448630 +0x100:  je     0844863c <+0x10c>
08448632 +0x102:  mov    $0x0,%ebx
08448637 +0x107:  jmp    08448743 <+0x213>
0844863c +0x10c:  lea    -0x28(%ebp),%eax
0844863f +0x10f:  mov    %eax,0x8(%esp)
08448643 +0x113:  movl   $0x0,0x4(%esp)
0844864b +0x11b:  mov    -0x20(%ebp),%eax
0844864e +0x11e:  mov    %eax,(%esp)
08448651 +0x121:  call   080e22ae <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x54>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x54
08448656 +0x126:  xor    $0x1,%eax
08448659 +0x129:  test   %al,%al
0844865b +0x12b:  je     08448667 <+0x137>
0844865d +0x12d:  mov    $0x0,%ebx
08448662 +0x132:  jmp    08448743 <+0x213>
08448667 +0x137:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0844866c +0x13c:  movl   $0xb551,0x8(%esp)
08448674 +0x144:  movl   $"DBThread.cpp",0x4(%esp)
0844867c +0x14c:  mov    %eax,(%esp)
0844867f +0x14f:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08448684 +0x154:  movl   $0x1,0x8(%esp)
0844868c +0x15c:  mov    %eax,0x4(%esp)
08448690 +0x160:  lea    -0x30(%ebp),%eax
08448693 +0x163:  mov    %eax,(%esp)
08448696 +0x166:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0844869b +0x16b:  lea    -0x30(%ebp),%eax
0844869e +0x16e:  mov    %eax,(%esp)
084486a1 +0x171:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084486a6 +0x176:  movl   $0x309,0x4(%esp)
084486ae +0x17e:  mov    %eax,(%esp)
084486b1 +0x181:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084486b6 +0x186:  lea    -0x30(%ebp),%eax
084486b9 +0x189:  mov    %eax,(%esp)
084486bc +0x18c:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084486c1 +0x191:  mov    0x10(%ebp),%edx
084486c4 +0x194:  mov    %edx,0x4(%esp)
084486c8 +0x198:  mov    %eax,(%esp)
084486cb +0x19b:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084486d0 +0x1a0:  lea    -0x30(%ebp),%eax
084486d3 +0x1a3:  mov    %eax,(%esp)
084486d6 +0x1a6:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
084486db +0x1ab:  mov    %eax,(%esp)
084486de +0x1ae:  call   08237b96 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd240>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd240
084486e3 +0x1b3:  mov    %eax,-0x1c(%ebp)
084486e6 +0x1b6:  mov    -0x28(%ebp),%edx
084486e9 +0x1b9:  mov    -0x1c(%ebp),%eax
084486ec +0x1bc:  mov    %edx,(%eax)
084486ee +0x1be:  mov    -0x24(%ebp),%eax
084486f1 +0x1c1:  mov    0x4(%eax),%edx
084486f4 +0x1c4:  mov    -0x1c(%ebp),%eax
084486f7 +0x1c7:  mov    %edx,0x4(%eax)
084486fa +0x1ca:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084486ff +0x1cf:  lea    -0x30(%ebp),%edx
08448702 +0x1d2:  mov    %edx,0x8(%esp)
08448706 +0x1d6:  movl   $0x1,0x4(%esp)
0844870e +0x1de:  mov    %eax,(%esp)
08448711 +0x1e1:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08448716 +0x1e6:  mov    $0x1,%ebx
0844871b +0x1eb:  lea    -0x30(%ebp),%eax
0844871e +0x1ee:  mov    %eax,(%esp)
08448721 +0x1f1:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08448726 +0x1f6:  jmp    08448743 <+0x213>
08448728 +0x1f8:  mov    %edx,%ebx
0844872a +0x1fa:  mov    %eax,%esi
0844872c +0x1fc:  lea    -0x30(%ebp),%eax
0844872f +0x1ff:  mov    %eax,(%esp)
08448732 +0x202:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08448737 +0x207:  mov    %esi,%eax
08448739 +0x209:  mov    %ebx,%edx
0844873b +0x20b:  mov    %eax,(%esp)
0844873e +0x20e:  call   08ae3750 <_Unwind_Resume>
08448743 +0x213:  mov    %ebx,%eax
08448745 +0x215:  add    $0x7c,%esp
08448748 +0x218:  pop    %ebx
08448749 +0x219:  pop    %esi
0844874a +0x21a:  pop    %edi
0844874b +0x21b:  pop    %ebp
0844874c +0x21c:  ret
0844874d +0x21d:  nop
```

## 反编译 C

```c
// DB_AuctionSubMoney::dispatch @ 0x8448530

/* DB_AuctionSubMoney::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_AuctionSubMoney::dispatch(DB_AuctionSubMoney *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 uVar7;
  bool bVar8;
  byte bVar9;
  char local_6f;
  char local_6e [58];
  CStreamGuard local_34 [8];
  uint local_2c;
  SIG_AUCTION_MONEY_SUB *local_28;
  MySQL *local_24;
  SIG_AUCTION_MONEY_SUB *local_20;
  
  bVar9 = 0;
  local_28 = Stream::GetOutBuffer<SIG_AUCTION_MONEY_SUB>(param_3);
  local_2c = 0;
  local_24 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  pcVar5 = &local_6f;
  uVar6 = 0x3b;
  bVar8 = ((uint)pcVar5 & 1) != 0;
  if (bVar8) {
    local_6f = '\0';
    pcVar5 = local_6e;
    uVar6 = 0x3a;
  }
  if (((uint)pcVar5 & 2) != 0) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5 = pcVar5 + 2;
    uVar6 = uVar6 - 2;
  }
  for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5[2] = '\0';
    pcVar5[3] = '\0';
    pcVar5 = pcVar5 + ((uint)bVar9 * -2 + 1) * 4;
  }
  if ((uVar6 & 2) != 0) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5 = pcVar5 + 2;
  }
  if (!bVar8) {
    *pcVar5 = '\0';
  }
  MySQL::escape_string(local_24,&local_6f,(char *)(local_28 + 8));
  MySQL::set_query(local_24,"seLect m_id from charac_info where charac_name=\'%s\' limit 1",
                   &local_6f);
  cVar1 = MySQL::exec(local_24,true);
  if (cVar1 == '\x01') {
    cVar1 = MySQL::fetch(local_24);
    if (cVar1 == '\x01') {
      cVar1 = MySQL::get_int(local_24,0,&local_2c);
      if (cVar1 == '\x01') {
        pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xb551);
        CStreamGuard::CStreamGuard(local_34,pSVar2,true);
        pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_34);
                    /* try { // try from 084486b1 to 08448715 has its CatchHandler @ 08448728 */
        CStreamGuard::operator<<(pCVar3,0x309);
        pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_34);
        CStreamGuard::operator<<(pCVar3,param_2);
        pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_34);
        local_20 = CStreamGuard::GetInBuffer<SIG_AUCTION_MONEY_SUB>(pCVar3);
        *(uint *)local_20 = local_2c;
        *(undefined4 *)(local_20 + 4) = *(undefined4 *)(local_28 + 4);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_34);
        uVar7 = 1;
        CStreamGuard::~CStreamGuard(local_34);
      }
      else {
        uVar7 = 0;
      }
    }
    else {
      uVar7 = 0;
    }
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}
```
