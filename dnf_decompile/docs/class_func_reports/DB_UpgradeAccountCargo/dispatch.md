# dispatch

`_ZN22DB_UpgradeAccountCargo8dispatchEiiP6Stream`

`DB_UpgradeAccountCargo::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_UpgradeAccountCargo` | `0x0843af76` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843af76  _ZN22DB_UpgradeAccountCargo8dispatchEiiP6Stream
#           DB_UpgradeAccountCargo::dispatch(int, int, Stream*)
# range [0x0843af76, 0x0843b15d]
0843af76 +0x000:  push   %ebp
0843af77 +0x001:  mov    %esp,%ebp
0843af79 +0x003:  push   %esi
0843af7a +0x004:  push   %ebx
0843af7b +0x005:  sub    $0x30,%esp
0843af7e +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0843af83 +0x00d:  movl   $0x8bfb,0x8(%esp)
0843af8b +0x015:  movl   $"DBThread.cpp",0x4(%esp)
0843af93 +0x01d:  mov    %eax,(%esp)
0843af96 +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0843af9b +0x025:  movl   $0x1,0x8(%esp)
0843afa3 +0x02d:  mov    %eax,0x4(%esp)
0843afa7 +0x031:  lea    -0x18(%ebp),%eax
0843afaa +0x034:  mov    %eax,(%esp)
0843afad +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0843afb2 +0x03c:  lea    -0x18(%ebp),%eax
0843afb5 +0x03f:  mov    %eax,(%esp)
0843afb8 +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843afbd +0x047:  mov    0xc(%ebp),%edx
0843afc0 +0x04a:  mov    %edx,0x4(%esp)
0843afc4 +0x04e:  mov    %eax,(%esp)
0843afc7 +0x051:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843afcc +0x056:  lea    -0x18(%ebp),%eax
0843afcf +0x059:  mov    %eax,(%esp)
0843afd2 +0x05c:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843afd7 +0x061:  mov    0x10(%ebp),%edx
0843afda +0x064:  mov    %edx,0x4(%esp)
0843afde +0x068:  mov    %eax,(%esp)
0843afe1 +0x06b:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843afe6 +0x070:  lea    -0x18(%ebp),%eax
0843afe9 +0x073:  mov    %eax,(%esp)
0843afec +0x076:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0843aff1 +0x07b:  mov    %eax,(%esp)
0843aff4 +0x07e:  call   084539fa <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6610>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6610
0843aff9 +0x083:  mov    %eax,-0x10(%ebp)
0843affc +0x086:  movl   $0x8,0x8(%esp)
0843b004 +0x08e:  movl   $0x0,0x4(%esp)
0843b00c +0x096:  mov    -0x10(%ebp),%eax
0843b00f +0x099:  mov    %eax,(%esp)
0843b012 +0x09c:  call   0807dcc0 <_init+0x5b8>
0843b017 +0x0a1:  movl   $0x0,-0x1c(%ebp)
0843b01e +0x0a8:  movl   $0x0,-0x20(%ebp)
0843b025 +0x0af:  lea    -0x1c(%ebp),%eax
0843b028 +0x0b2:  mov    %eax,0x4(%esp)
0843b02c +0x0b6:  mov    0x14(%ebp),%eax
0843b02f +0x0b9:  mov    %eax,(%esp)
0843b032 +0x0bc:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
0843b037 +0x0c1:  lea    -0x20(%ebp),%eax
0843b03a +0x0c4:  mov    %eax,0x4(%esp)
0843b03e +0x0c8:  mov    0x14(%ebp),%eax
0843b041 +0x0cb:  mov    %eax,(%esp)
0843b044 +0x0ce:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
0843b049 +0x0d3:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0843b04e +0x0d8:  movl   $0x0,0x8(%esp)
0843b056 +0x0e0:  movl   $0x2,0x4(%esp)
0843b05e +0x0e8:  mov    %eax,(%esp)
0843b061 +0x0eb:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0843b066 +0x0f0:  mov    %eax,-0xc(%ebp)
0843b069 +0x0f3:  mov    -0x1c(%ebp),%eax
0843b06c +0x0f6:  movl   $0x0,0x4(%esp)
0843b074 +0x0fe:  mov    %eax,(%esp)
0843b077 +0x101:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0843b07c +0x106:  mov    -0x20(%ebp),%edx
0843b07f +0x109:  mov    %eax,0xc(%esp)
0843b083 +0x10d:  mov    %edx,0x8(%esp)
0843b087 +0x111:  movl   $"upDate account_cargo set capacity = %d where m_id = %s",0x4(%esp)
0843b08f +0x119:  mov    -0xc(%ebp),%eax
0843b092 +0x11c:  mov    %eax,(%esp)
0843b095 +0x11f:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0843b09a +0x124:  movl   $0x1,0x4(%esp)
0843b0a2 +0x12c:  mov    -0xc(%ebp),%eax
0843b0a5 +0x12f:  mov    %eax,(%esp)
0843b0a8 +0x132:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0843b0ad +0x137:  xor    $0x1,%eax
0843b0b0 +0x13a:  test   %al,%al
0843b0b2 +0x13c:  je     0843b0be <+0x148>
0843b0b4 +0x13e:  mov    $0x0,%ebx
0843b0b9 +0x143:  jmp    0843b14a <+0x1d4>
0843b0be +0x148:  mov    -0xc(%ebp),%eax
0843b0c1 +0x14b:  mov    %eax,(%esp)
0843b0c4 +0x14e:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
0843b0c9 +0x153:  or     %edx,%eax
0843b0cb +0x155:  test   %eax,%eax
0843b0cd +0x157:  sete   %al
0843b0d0 +0x15a:  test   %al,%al
0843b0d2 +0x15c:  je     0843b0fd <+0x187>
0843b0d4 +0x15e:  mov    -0x10(%ebp),%eax
0843b0d7 +0x161:  movb   $0x15,(%eax)
0843b0da +0x164:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0843b0df +0x169:  lea    -0x18(%ebp),%edx
0843b0e2 +0x16c:  mov    %edx,0x8(%esp)
0843b0e6 +0x170:  movl   $0x1,0x4(%esp)
0843b0ee +0x178:  mov    %eax,(%esp)
0843b0f1 +0x17b:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0843b0f6 +0x180:  mov    $0x1,%ebx
0843b0fb +0x185:  jmp    0843b14a <+0x1d4>
0843b0fd +0x187:  mov    -0x10(%ebp),%eax
0843b100 +0x18a:  movb   $0x0,(%eax)
0843b103 +0x18d:  mov    -0x20(%ebp),%edx
0843b106 +0x190:  mov    -0x10(%ebp),%eax
0843b109 +0x193:  mov    %edx,0x4(%eax)
0843b10c +0x196:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0843b111 +0x19b:  lea    -0x18(%ebp),%edx
0843b114 +0x19e:  mov    %edx,0x8(%esp)
0843b118 +0x1a2:  movl   $0x1,0x4(%esp)
0843b120 +0x1aa:  mov    %eax,(%esp)
0843b123 +0x1ad:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0843b128 +0x1b2:  mov    $0x1,%ebx
0843b12d +0x1b7:  jmp    0843b14a <+0x1d4>
0843b12f +0x1b9:  mov    %edx,%ebx
0843b131 +0x1bb:  mov    %eax,%esi
0843b133 +0x1bd:  lea    -0x18(%ebp),%eax
0843b136 +0x1c0:  mov    %eax,(%esp)
0843b139 +0x1c3:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843b13e +0x1c8:  mov    %esi,%eax
0843b140 +0x1ca:  mov    %ebx,%edx
0843b142 +0x1cc:  mov    %eax,(%esp)
0843b145 +0x1cf:  call   08ae3750 <_Unwind_Resume>
0843b14a +0x1d4:  lea    -0x18(%ebp),%eax
0843b14d +0x1d7:  mov    %eax,(%esp)
0843b150 +0x1da:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843b155 +0x1df:  mov    %ebx,%eax
0843b157 +0x1e1:  add    $0x30,%esp
0843b15a +0x1e4:  pop    %ebx
0843b15b +0x1e5:  pop    %esi
0843b15c +0x1e6:  pop    %ebp
0843b15d +0x1e7:  ret
```

## 反编译 C

```c
// DB_UpgradeAccountCargo::dispatch @ 0x843af76

/* DB_UpgradeAccountCargo::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_UpgradeAccountCargo::dispatch
          (DB_UpgradeAccountCargo *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  undefined4 uVar4;
  longlong lVar5;
  uint local_24;
  uint local_20;
  CStreamGuard local_1c [8];
  SIG_UPGRADE_ACCOUNT_CARGO_RESULT *local_14;
  MySQL *local_10;
  
  pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x8bfb);
  CStreamGuard::CStreamGuard(local_1c,pSVar2,true);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
                    /* try { // try from 0843afc7 to 0843b127 has its CatchHandler @ 0843b12f */
  CStreamGuard::operator<<(pCVar3,param_1);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
  CStreamGuard::operator<<(pCVar3,param_2);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_1c);
  local_14 = CStreamGuard::GetInBuffer<SIG_UPGRADE_ACCOUNT_CARGO_RESULT>(pCVar3);
  memset(local_14,0,8);
  local_20 = 0;
  local_24 = 0;
  Stream::operator>>(param_3,&local_20);
  Stream::operator>>(param_3,&local_24);
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  uVar4 = NumberToString(local_20,0);
  MySQL::set_query(local_10,"upDate account_cargo set capacity = %d where m_id = %s",local_24,uVar4)
  ;
  cVar1 = MySQL::exec(local_10,true);
  if (cVar1 == '\x01') {
    lVar5 = MySQL::getAffectedRowCount(local_10);
    if (lVar5 == 0) {
      *local_14 = (SIG_UPGRADE_ACCOUNT_CARGO_RESULT)0x15;
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_1c);
      uVar4 = 1;
    }
    else {
      *local_14 = (SIG_UPGRADE_ACCOUNT_CARGO_RESULT)0x0;
      *(uint *)(local_14 + 4) = local_24;
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_1c);
      uVar4 = 1;
    }
  }
  else {
    uVar4 = 0;
  }
  CStreamGuard::~CStreamGuard(local_1c);
  return uVar4;
}
```
