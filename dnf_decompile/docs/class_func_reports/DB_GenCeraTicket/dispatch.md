# dispatch

`_ZN16DB_GenCeraTicket8dispatchEiiP6Stream`

`DB_GenCeraTicket::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_GenCeraTicket` | `0x0841a2f8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0841a2f8  _ZN16DB_GenCeraTicket8dispatchEiiP6Stream
#           DB_GenCeraTicket::dispatch(int, int, Stream*)
# range [0x0841a2f8, 0x0841a515]
0841a2f8 +0x000:  push   %ebp
0841a2f9 +0x001:  mov    %esp,%ebp
0841a2fb +0x003:  push   %esi
0841a2fc +0x004:  push   %ebx
0841a2fd +0x005:  sub    $0x60,%esp
0841a300 +0x008:  movl   $0x0,-0x14(%ebp)
0841a307 +0x00f:  lea    -0x18(%ebp),%eax
0841a30a +0x012:  mov    %eax,0x4(%esp)
0841a30e +0x016:  mov    0x14(%ebp),%eax
0841a311 +0x019:  mov    %eax,(%esp)
0841a314 +0x01c:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
0841a319 +0x021:  lea    -0x14(%ebp),%eax
0841a31c +0x024:  mov    %eax,0x4(%esp)
0841a320 +0x028:  mov    0x14(%ebp),%eax
0841a323 +0x02b:  mov    %eax,(%esp)
0841a326 +0x02e:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
0841a32b +0x033:  lea    -0x40(%ebp),%eax
0841a32e +0x036:  mov    %eax,0x4(%esp)
0841a332 +0x03a:  mov    0x14(%ebp),%eax
0841a335 +0x03d:  mov    %eax,(%esp)
0841a338 +0x040:  call   0861c6a8 <_ZN6StreamrsEPc>  ; Stream::operator>>(char*)
0841a33d +0x045:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0841a342 +0x04a:  movl   $0x0,0x8(%esp)
0841a34a +0x052:  movl   $0x3,0x4(%esp)
0841a352 +0x05a:  mov    %eax,(%esp)
0841a355 +0x05d:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0841a35a +0x062:  mov    %eax,-0x10(%ebp)
0841a35d +0x065:  mov    -0x14(%ebp),%ebx
0841a360 +0x068:  mov    -0x18(%ebp),%eax
0841a363 +0x06b:  movl   $0x0,0x4(%esp)
0841a36b +0x073:  mov    %eax,(%esp)
0841a36e +0x076:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0841a373 +0x07b:  movl   $0x3,0x14(%esp)
0841a37b +0x083:  mov    %ebx,0x10(%esp)
0841a37f +0x087:  lea    -0x40(%ebp),%edx
0841a382 +0x08a:  mov    %edx,0xc(%esp)
0841a386 +0x08e:  mov    %eax,0x8(%esp)
0841a38a +0x092:  movl   $"inSert into user_cera_ticket(m_id,ticket_id,ticketKey,expire_time,delete_flag,update_time) values(%s,'%s',%d,adddate(now(),interval %d hour), 0, now())",0x4(%esp)
0841a392 +0x09a:  mov    -0x10(%ebp),%eax
0841a395 +0x09d:  mov    %eax,(%esp)
0841a398 +0x0a0:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0841a39d +0x0a5:  movl   $0x1,0x4(%esp)
0841a3a5 +0x0ad:  mov    -0x10(%ebp),%eax
0841a3a8 +0x0b0:  mov    %eax,(%esp)
0841a3ab +0x0b3:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0841a3b0 +0x0b8:  mov    %al,-0x9(%ebp)
0841a3b3 +0x0bb:  movzbl -0x9(%ebp),%eax
0841a3b7 +0x0bf:  xor    $0x1,%eax
0841a3ba +0x0c2:  test   %al,%al
0841a3bc +0x0c4:  je     0841a42e <+0x136>
0841a3be +0x0c6:  mov    -0x18(%ebp),%eax
0841a3c1 +0x0c9:  movl   $0x0,0x4(%esp)
0841a3c9 +0x0d1:  mov    %eax,(%esp)
0841a3cc +0x0d4:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0841a3d1 +0x0d9:  mov    -0x14(%ebp),%edx
0841a3d4 +0x0dc:  mov    %eax,0x18(%esp)
0841a3d8 +0x0e0:  movl   $0x0,0x14(%esp)
0841a3e0 +0x0e8:  movl   $0x3,0x10(%esp)
0841a3e8 +0x0f0:  mov    %edx,0xc(%esp)
0841a3ec +0x0f4:  lea    -0x40(%ebp),%eax
0841a3ef +0x0f7:  mov    %eax,0x8(%esp)
0841a3f3 +0x0fb:  movl   $"upDate user_cera_ticket set ticket_id='%s',ticketKey=%d,expire_time=adddate(now(),interval %d hour), delete_flag=%d, update_time=now() where m_id=%s",0x4(%esp)
0841a3fb +0x103:  mov    -0x10(%ebp),%eax
0841a3fe +0x106:  mov    %eax,(%esp)
0841a401 +0x109:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0841a406 +0x10e:  movl   $0x1,0x4(%esp)
0841a40e +0x116:  mov    -0x10(%ebp),%eax
0841a411 +0x119:  mov    %eax,(%esp)
0841a414 +0x11c:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0841a419 +0x121:  mov    %al,-0x9(%ebp)
0841a41c +0x124:  movzbl -0x9(%ebp),%eax
0841a420 +0x128:  xor    $0x1,%eax
0841a423 +0x12b:  test   %al,%al
0841a425 +0x12d:  je     0841a42e <+0x136>
0841a427 +0x12f:  movl   $0x0,-0x14(%ebp)
0841a42e +0x136:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0841a433 +0x13b:  movl   $0x4c6d,0x8(%esp)
0841a43b +0x143:  movl   $"DBThread.cpp",0x4(%esp)
0841a443 +0x14b:  mov    %eax,(%esp)
0841a446 +0x14e:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0841a44b +0x153:  movl   $0x1,0x8(%esp)
0841a453 +0x15b:  mov    %eax,0x4(%esp)
0841a457 +0x15f:  lea    -0x20(%ebp),%eax
0841a45a +0x162:  mov    %eax,(%esp)
0841a45d +0x165:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0841a462 +0x16a:  lea    -0x20(%ebp),%eax
0841a465 +0x16d:  mov    %eax,(%esp)
0841a468 +0x170:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0841a46d +0x175:  mov    0xc(%ebp),%edx
0841a470 +0x178:  mov    %edx,0x4(%esp)
0841a474 +0x17c:  mov    %eax,(%esp)
0841a477 +0x17f:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0841a47c +0x184:  lea    -0x20(%ebp),%eax
0841a47f +0x187:  mov    %eax,(%esp)
0841a482 +0x18a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0841a487 +0x18f:  mov    0x10(%ebp),%edx
0841a48a +0x192:  mov    %edx,0x4(%esp)
0841a48e +0x196:  mov    %eax,(%esp)
0841a491 +0x199:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0841a496 +0x19e:  mov    -0x14(%ebp),%ebx
0841a499 +0x1a1:  lea    -0x20(%ebp),%eax
0841a49c +0x1a4:  mov    %eax,(%esp)
0841a49f +0x1a7:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0841a4a4 +0x1ac:  mov    %ebx,0x4(%esp)
0841a4a8 +0x1b0:  mov    %eax,(%esp)
0841a4ab +0x1b3:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0841a4b0 +0x1b8:  lea    -0x20(%ebp),%eax
0841a4b3 +0x1bb:  mov    %eax,(%esp)
0841a4b6 +0x1be:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0841a4bb +0x1c3:  lea    -0x40(%ebp),%edx
0841a4be +0x1c6:  mov    %edx,0x4(%esp)
0841a4c2 +0x1ca:  mov    %eax,(%esp)
0841a4c5 +0x1cd:  call   0822ad8a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x434>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x434
0841a4ca +0x1d2:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0841a4cf +0x1d7:  lea    -0x20(%ebp),%edx
0841a4d2 +0x1da:  mov    %edx,0x8(%esp)
0841a4d6 +0x1de:  movl   $0x1,0x4(%esp)
0841a4de +0x1e6:  mov    %eax,(%esp)
0841a4e1 +0x1e9:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0841a4e6 +0x1ee:  mov    $0x1,%ebx
0841a4eb +0x1f3:  lea    -0x20(%ebp),%eax
0841a4ee +0x1f6:  mov    %eax,(%esp)
0841a4f1 +0x1f9:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0841a4f6 +0x1fe:  mov    %ebx,%eax
0841a4f8 +0x200:  add    $0x60,%esp
0841a4fb +0x203:  pop    %ebx
0841a4fc +0x204:  pop    %esi
0841a4fd +0x205:  pop    %ebp
0841a4fe +0x206:  ret
0841a4ff +0x207:  mov    %edx,%ebx
0841a501 +0x209:  mov    %eax,%esi
0841a503 +0x20b:  lea    -0x20(%ebp),%eax
0841a506 +0x20e:  mov    %eax,(%esp)
0841a509 +0x211:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0841a50e +0x216:  mov    %esi,%eax
0841a510 +0x218:  mov    %ebx,%edx
0841a512 +0x21a:  mov    %eax,(%esp)
0841a515 +0x21d:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// DB_GenCeraTicket::dispatch @ 0x841a2f8

/* DB_GenCeraTicket::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_GenCeraTicket::dispatch(DB_GenCeraTicket *this,int param_1,int param_2,Stream *param_3)

{
  int iVar1;
  undefined4 uVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  char local_44 [32];
  CStreamGuard local_24 [8];
  uint local_1c;
  int local_18;
  MySQL *local_14;
  char local_d;
  
  local_18 = 0;
  Stream::operator>>(param_3,&local_1c);
  Stream::operator>>(param_3,&local_18);
  Stream::operator>>(param_3,local_44);
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  iVar1 = local_18;
  uVar2 = NumberToString(local_1c,0);
  MySQL::set_query(local_14,
                   "inSert into user_cera_ticket(m_id,ticket_id,ticketKey,expire_time,delete_flag,update_time) values(%s,\'%s\',%d,adddate(now(),interval %d hour), 0, now())"
                   ,uVar2,local_44,iVar1,3);
  local_d = MySQL::exec(local_14,true);
  if (local_d != '\x01') {
    uVar2 = NumberToString(local_1c,0);
    MySQL::set_query(local_14,
                     "upDate user_cera_ticket set ticket_id=\'%s\',ticketKey=%d,expire_time=adddate(now(),interval %d hour), delete_flag=%d, update_time=now() where m_id=%s"
                     ,local_44,local_18,3,0,uVar2);
    local_d = MySQL::exec(local_14,true);
    if (local_d != '\x01') {
      local_18 = 0;
    }
  }
  pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x4c6d);
  CStreamGuard::CStreamGuard(local_24,pSVar3,true);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_24);
                    /* try { // try from 0841a477 to 0841a4e5 has its CatchHandler @ 0841a4ff */
  CStreamGuard::operator<<(pCVar4,param_1);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_24);
  CStreamGuard::operator<<(pCVar4,param_2);
  iVar1 = local_18;
  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_24);
  CStreamGuard::operator<<(pCVar4,iVar1);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_24);
  CStreamGuard::operator<<(pCVar4,local_44);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_24);
  CStreamGuard::~CStreamGuard(local_24);
  return 1;
}
```
