# dispatch

`_ZN21DB_CreateAccountCargo8dispatchEiiP6Stream`

`DB_CreateAccountCargo::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_CreateAccountCargo` | `0x0843ac52` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843ac52  _ZN21DB_CreateAccountCargo8dispatchEiiP6Stream
#           DB_CreateAccountCargo::dispatch(int, int, Stream*)
# range [0x0843ac52, 0x0843ae85]
0843ac52 +0x000:  push   %ebp
0843ac53 +0x001:  mov    %esp,%ebp
0843ac55 +0x003:  push   %esi
0843ac56 +0x004:  push   %ebx
0843ac57 +0x005:  sub    $0x30,%esp
0843ac5a +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0843ac5f +0x00d:  movl   $0x8bc7,0x8(%esp)
0843ac67 +0x015:  movl   $"DBThread.cpp",0x4(%esp)
0843ac6f +0x01d:  mov    %eax,(%esp)
0843ac72 +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0843ac77 +0x025:  movl   $0x1,0x8(%esp)
0843ac7f +0x02d:  mov    %eax,0x4(%esp)
0843ac83 +0x031:  lea    -0x18(%ebp),%eax
0843ac86 +0x034:  mov    %eax,(%esp)
0843ac89 +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0843ac8e +0x03c:  lea    -0x18(%ebp),%eax
0843ac91 +0x03f:  mov    %eax,(%esp)
0843ac94 +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843ac99 +0x047:  mov    0xc(%ebp),%edx
0843ac9c +0x04a:  mov    %edx,0x4(%esp)
0843aca0 +0x04e:  mov    %eax,(%esp)
0843aca3 +0x051:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843aca8 +0x056:  lea    -0x18(%ebp),%eax
0843acab +0x059:  mov    %eax,(%esp)
0843acae +0x05c:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843acb3 +0x061:  mov    0x10(%ebp),%edx
0843acb6 +0x064:  mov    %edx,0x4(%esp)
0843acba +0x068:  mov    %eax,(%esp)
0843acbd +0x06b:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843acc2 +0x070:  lea    -0x18(%ebp),%eax
0843acc5 +0x073:  mov    %eax,(%esp)
0843acc8 +0x076:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0843accd +0x07b:  mov    %eax,(%esp)
0843acd0 +0x07e:  call   084539e4 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x65fa>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x65fa
0843acd5 +0x083:  mov    %eax,-0x10(%ebp)
0843acd8 +0x086:  movl   $0x8,0x8(%esp)
0843ace0 +0x08e:  movl   $0x0,0x4(%esp)
0843ace8 +0x096:  mov    -0x10(%ebp),%eax
0843aceb +0x099:  mov    %eax,(%esp)
0843acee +0x09c:  call   0807dcc0 <_init+0x5b8>
0843acf3 +0x0a1:  movl   $0x0,-0x1c(%ebp)
0843acfa +0x0a8:  movl   $0x0,-0x20(%ebp)
0843ad01 +0x0af:  lea    -0x1c(%ebp),%eax
0843ad04 +0x0b2:  mov    %eax,0x4(%esp)
0843ad08 +0x0b6:  mov    0x14(%ebp),%eax
0843ad0b +0x0b9:  mov    %eax,(%esp)
0843ad0e +0x0bc:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
0843ad13 +0x0c1:  lea    -0x20(%ebp),%eax
0843ad16 +0x0c4:  mov    %eax,0x4(%esp)
0843ad1a +0x0c8:  mov    0x14(%ebp),%eax
0843ad1d +0x0cb:  mov    %eax,(%esp)
0843ad20 +0x0ce:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
0843ad25 +0x0d3:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0843ad2a +0x0d8:  movl   $0x0,0x8(%esp)
0843ad32 +0x0e0:  movl   $0x2,0x4(%esp)
0843ad3a +0x0e8:  mov    %eax,(%esp)
0843ad3d +0x0eb:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0843ad42 +0x0f0:  mov    %eax,-0xc(%ebp)
0843ad45 +0x0f3:  mov    -0x1c(%ebp),%eax
0843ad48 +0x0f6:  movl   $0x0,0x4(%esp)
0843ad50 +0x0fe:  mov    %eax,(%esp)
0843ad53 +0x101:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0843ad58 +0x106:  mov    %eax,0x8(%esp)
0843ad5c +0x10a:  movl   $"seLect * from account_cargo where m_id = %s",0x4(%esp)
0843ad64 +0x112:  mov    -0xc(%ebp),%eax
0843ad67 +0x115:  mov    %eax,(%esp)
0843ad6a +0x118:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0843ad6f +0x11d:  movl   $0x1,0x4(%esp)
0843ad77 +0x125:  mov    -0xc(%ebp),%eax
0843ad7a +0x128:  mov    %eax,(%esp)
0843ad7d +0x12b:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0843ad82 +0x130:  xor    $0x1,%eax
0843ad85 +0x133:  test   %al,%al
0843ad87 +0x135:  je     0843ad93 <+0x141>
0843ad89 +0x137:  mov    $0x0,%ebx
0843ad8e +0x13c:  jmp    0843ae72 <+0x220>
0843ad93 +0x141:  mov    -0xc(%ebp),%eax
0843ad96 +0x144:  mov    %eax,(%esp)
0843ad99 +0x147:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0843ad9e +0x14c:  test   %eax,%eax
0843ada0 +0x14e:  setne  %al
0843ada3 +0x151:  test   %al,%al
0843ada5 +0x153:  je     0843add3 <+0x181>
0843ada7 +0x155:  mov    -0x10(%ebp),%eax
0843adaa +0x158:  movb   $0x14,(%eax)
0843adad +0x15b:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0843adb2 +0x160:  lea    -0x18(%ebp),%edx
0843adb5 +0x163:  mov    %edx,0x8(%esp)
0843adb9 +0x167:  movl   $0x1,0x4(%esp)
0843adc1 +0x16f:  mov    %eax,(%esp)
0843adc4 +0x172:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0843adc9 +0x177:  mov    $0x1,%ebx
0843adce +0x17c:  jmp    0843ae72 <+0x220>
0843add3 +0x181:  mov    -0x20(%ebp),%ebx
0843add6 +0x184:  mov    -0x1c(%ebp),%eax
0843add9 +0x187:  movl   $0x0,0x4(%esp)
0843ade1 +0x18f:  mov    %eax,(%esp)
0843ade4 +0x192:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0843ade9 +0x197:  mov    %ebx,0xc(%esp)
0843aded +0x19b:  mov    %eax,0x8(%esp)
0843adf1 +0x19f:  movl   $"inSert into account_cargo(m_id, capacity, money, occ_time, cargo) values(%s, %d, 0, now(),'')",0x4(%esp)
0843adf9 +0x1a7:  mov    -0xc(%ebp),%eax
0843adfc +0x1aa:  mov    %eax,(%esp)
0843adff +0x1ad:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0843ae04 +0x1b2:  movl   $0x1,0x4(%esp)
0843ae0c +0x1ba:  mov    -0xc(%ebp),%eax
0843ae0f +0x1bd:  mov    %eax,(%esp)
0843ae12 +0x1c0:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0843ae17 +0x1c5:  xor    $0x1,%eax
0843ae1a +0x1c8:  test   %al,%al
0843ae1c +0x1ca:  je     0843ae25 <+0x1d3>
0843ae1e +0x1cc:  mov    $0x0,%ebx
0843ae23 +0x1d1:  jmp    0843ae72 <+0x220>
0843ae25 +0x1d3:  mov    -0x10(%ebp),%eax
0843ae28 +0x1d6:  movb   $0x0,(%eax)
0843ae2b +0x1d9:  mov    -0x20(%ebp),%edx
0843ae2e +0x1dc:  mov    -0x10(%ebp),%eax
0843ae31 +0x1df:  mov    %edx,0x4(%eax)
0843ae34 +0x1e2:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0843ae39 +0x1e7:  lea    -0x18(%ebp),%edx
0843ae3c +0x1ea:  mov    %edx,0x8(%esp)
0843ae40 +0x1ee:  movl   $0x1,0x4(%esp)
0843ae48 +0x1f6:  mov    %eax,(%esp)
0843ae4b +0x1f9:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0843ae50 +0x1fe:  mov    $0x1,%ebx
0843ae55 +0x203:  jmp    0843ae72 <+0x220>
0843ae57 +0x205:  mov    %edx,%ebx
0843ae59 +0x207:  mov    %eax,%esi
0843ae5b +0x209:  lea    -0x18(%ebp),%eax
0843ae5e +0x20c:  mov    %eax,(%esp)
0843ae61 +0x20f:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843ae66 +0x214:  mov    %esi,%eax
0843ae68 +0x216:  mov    %ebx,%edx
0843ae6a +0x218:  mov    %eax,(%esp)
0843ae6d +0x21b:  call   08ae3750 <_Unwind_Resume>
0843ae72 +0x220:  lea    -0x18(%ebp),%eax
0843ae75 +0x223:  mov    %eax,(%esp)
0843ae78 +0x226:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843ae7d +0x22b:  mov    %ebx,%eax
0843ae7f +0x22d:  add    $0x30,%esp
0843ae82 +0x230:  pop    %ebx
0843ae83 +0x231:  pop    %esi
0843ae84 +0x232:  pop    %ebp
0843ae85 +0x233:  ret
```

## 反编译 C

```c
// DB_CreateAccountCargo::dispatch @ 0x843ac52

/* DB_CreateAccountCargo::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_CreateAccountCargo::dispatch(DB_CreateAccountCargo *this,int param_1,int param_2,Stream *param_3)

{
  uint uVar1;
  char cVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  undefined4 uVar5;
  int iVar6;
  uint local_24;
  uint local_20;
  CStreamGuard local_1c [8];
  SIG_CREATE_ACCOUNT_CARGO_RESULT *local_14;
  MySQL *local_10;
  
  pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x8bc7);
  CStreamGuard::CStreamGuard(local_1c,pSVar3,true);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
                    /* try { // try from 0843aca3 to 0843ae4f has its CatchHandler @ 0843ae57 */
  CStreamGuard::operator<<(pCVar4,param_1);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
  CStreamGuard::operator<<(pCVar4,param_2);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_1c);
  local_14 = CStreamGuard::GetInBuffer<SIG_CREATE_ACCOUNT_CARGO_RESULT>(pCVar4);
  memset(local_14,0,8);
  local_20 = 0;
  local_24 = 0;
  Stream::operator>>(param_3,&local_20);
  Stream::operator>>(param_3,&local_24);
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  uVar5 = NumberToString(local_20,0);
  MySQL::set_query(local_10,"seLect * from account_cargo where m_id = %s",uVar5);
  cVar2 = MySQL::exec(local_10,true);
  if (cVar2 == '\x01') {
    iVar6 = MySQL::get_n_rows(local_10);
    uVar1 = local_24;
    if (iVar6 == 0) {
      uVar5 = NumberToString(local_20,0);
      MySQL::set_query(local_10,
                       "inSert into account_cargo(m_id, capacity, money, occ_time, cargo) values(%s, %d, 0, now(),\'\')"
                       ,uVar5,uVar1);
      cVar2 = MySQL::exec(local_10,true);
      if (cVar2 == '\x01') {
        *local_14 = (SIG_CREATE_ACCOUNT_CARGO_RESULT)0x0;
        *(uint *)(local_14 + 4) = local_24;
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_1c);
        uVar5 = 1;
      }
      else {
        uVar5 = 0;
      }
    }
    else {
      *local_14 = (SIG_CREATE_ACCOUNT_CARGO_RESULT)0x14;
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_1c);
      uVar5 = 1;
    }
  }
  else {
    uVar5 = 0;
  }
  CStreamGuard::~CStreamGuard(local_1c);
  return uVar5;
}
```
