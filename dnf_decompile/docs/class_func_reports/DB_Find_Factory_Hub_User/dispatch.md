# dispatch

`_ZN24DB_Find_Factory_Hub_User8dispatchEiiP6Stream`

`DB_Find_Factory_Hub_User::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_Find_Factory_Hub_User` | `0x08437a32` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08437a32  _ZN24DB_Find_Factory_Hub_User8dispatchEiiP6Stream
#           DB_Find_Factory_Hub_User::dispatch(int, int, Stream*)
# range [0x08437a32, 0x08437c4f]
08437a32 +0x000:  push   %ebp
08437a33 +0x001:  mov    %esp,%ebp
08437a35 +0x003:  push   %esi
08437a36 +0x004:  push   %ebx
08437a37 +0x005:  sub    $0x40,%esp
08437a3a +0x008:  mov    0x14(%ebp),%eax
08437a3d +0x00b:  mov    %eax,(%esp)
08437a40 +0x00e:  call   0845363c <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6252>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6252
08437a45 +0x013:  mov    %eax,-0x24(%ebp)
08437a48 +0x016:  movl   $0x0,-0x28(%ebp)
08437a4f +0x01d:  movl   $0x0,-0x20(%ebp)
08437a56 +0x024:  movl   $0x0,-0x1c(%ebp)
08437a5d +0x02b:  movl   $0x0,-0x2c(%ebp)
08437a64 +0x032:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08437a69 +0x037:  movl   $0x0,0x8(%esp)
08437a71 +0x03f:  movl   $0x2,0x4(%esp)
08437a79 +0x047:  mov    %eax,(%esp)
08437a7c +0x04a:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08437a81 +0x04f:  mov    %eax,-0x18(%ebp)
08437a84 +0x052:  movl   $"seLect charac_no,m_id from charac_info where charac_name='%s'",-0x14(%ebp)
08437a8b +0x059:  mov    -0x24(%ebp),%eax
08437a8e +0x05c:  mov    %eax,0x8(%esp)
08437a92 +0x060:  mov    -0x14(%ebp),%eax
08437a95 +0x063:  mov    %eax,0x4(%esp)
08437a99 +0x067:  mov    -0x18(%ebp),%eax
08437a9c +0x06a:  mov    %eax,(%esp)
08437a9f +0x06d:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08437aa4 +0x072:  movl   $0x1,0x4(%esp)
08437aac +0x07a:  mov    -0x18(%ebp),%eax
08437aaf +0x07d:  mov    %eax,(%esp)
08437ab2 +0x080:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08437ab7 +0x085:  xor    $0x1,%eax
08437aba +0x088:  test   %al,%al
08437abc +0x08a:  je     08437ac8 <+0x96>
08437abe +0x08c:  mov    $0x0,%ebx
08437ac3 +0x091:  jmp    08437c47 <+0x215>
08437ac8 +0x096:  movl   $0x0,-0xc(%ebp)
08437acf +0x09d:  jmp    08437b47 <+0x115>
08437ad1 +0x09f:  mov    -0x18(%ebp),%eax
08437ad4 +0x0a2:  mov    %eax,(%esp)
08437ad7 +0x0a5:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08437adc +0x0aa:  xor    $0x1,%eax
08437adf +0x0ad:  test   %al,%al
08437ae1 +0x0af:  je     08437aed <+0xbb>
08437ae3 +0x0b1:  mov    $0x0,%ebx
08437ae8 +0x0b6:  jmp    08437c47 <+0x215>
08437aed +0x0bb:  lea    -0x28(%ebp),%eax
08437af0 +0x0be:  mov    %eax,0x8(%esp)
08437af4 +0x0c2:  movl   $0x0,0x4(%esp)
08437afc +0x0ca:  mov    -0x18(%ebp),%eax
08437aff +0x0cd:  mov    %eax,(%esp)
08437b02 +0x0d0:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08437b07 +0x0d5:  xor    $0x1,%eax
08437b0a +0x0d8:  test   %al,%al
08437b0c +0x0da:  je     08437b18 <+0xe6>
08437b0e +0x0dc:  mov    $0x0,%ebx
08437b13 +0x0e1:  jmp    08437c47 <+0x215>
08437b18 +0x0e6:  lea    -0x2c(%ebp),%eax
08437b1b +0x0e9:  mov    %eax,0x8(%esp)
08437b1f +0x0ed:  movl   $0x1,0x4(%esp)
08437b27 +0x0f5:  mov    -0x18(%ebp),%eax
08437b2a +0x0f8:  mov    %eax,(%esp)
08437b2d +0x0fb:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
08437b32 +0x100:  xor    $0x1,%eax
08437b35 +0x103:  test   %al,%al
08437b37 +0x105:  je     08437b43 <+0x111>
08437b39 +0x107:  mov    $0x0,%ebx
08437b3e +0x10c:  jmp    08437c47 <+0x215>
08437b43 +0x111:  addl   $0x1,-0xc(%ebp)
08437b47 +0x115:  mov    -0x18(%ebp),%eax
08437b4a +0x118:  mov    %eax,(%esp)
08437b4d +0x11b:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08437b52 +0x120:  cmp    -0xc(%ebp),%eax
08437b55 +0x123:  seta   %al
08437b58 +0x126:  test   %al,%al
08437b5a +0x128:  jne    08437ad1 <+0x9f>
08437b60 +0x12e:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08437b65 +0x133:  movl   $0x850f,0x8(%esp)
08437b6d +0x13b:  movl   $"DBThread.cpp",0x4(%esp)
08437b75 +0x143:  mov    %eax,(%esp)
08437b78 +0x146:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08437b7d +0x14b:  movl   $0x1,0x8(%esp)
08437b85 +0x153:  mov    %eax,0x4(%esp)
08437b89 +0x157:  lea    -0x34(%ebp),%eax
08437b8c +0x15a:  mov    %eax,(%esp)
08437b8f +0x15d:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08437b94 +0x162:  lea    -0x34(%ebp),%eax
08437b97 +0x165:  mov    %eax,(%esp)
08437b9a +0x168:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08437b9f +0x16d:  movl   $0x1a1,0x4(%esp)
08437ba7 +0x175:  mov    %eax,(%esp)
08437baa +0x178:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08437baf +0x17d:  lea    -0x34(%ebp),%eax
08437bb2 +0x180:  mov    %eax,(%esp)
08437bb5 +0x183:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08437bba +0x188:  mov    0x10(%ebp),%edx
08437bbd +0x18b:  mov    %edx,0x4(%esp)
08437bc1 +0x18f:  mov    %eax,(%esp)
08437bc4 +0x192:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08437bc9 +0x197:  lea    -0x34(%ebp),%eax
08437bcc +0x19a:  mov    %eax,(%esp)
08437bcf +0x19d:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08437bd4 +0x1a2:  mov    %eax,(%esp)
08437bd7 +0x1a5:  call   08453690 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x62a6>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x62a6
08437bdc +0x1aa:  mov    %eax,-0x10(%ebp)
08437bdf +0x1ad:  mov    -0x2c(%ebp),%edx
08437be2 +0x1b0:  mov    -0x10(%ebp),%eax
08437be5 +0x1b3:  mov    %edx,(%eax)
08437be7 +0x1b5:  mov    -0x28(%ebp),%edx
08437bea +0x1b8:  mov    -0x10(%ebp),%eax
08437bed +0x1bb:  mov    %edx,0x4(%eax)
08437bf0 +0x1be:  mov    -0x24(%ebp),%eax
08437bf3 +0x1c1:  movzwl 0x1e(%eax),%edx
08437bf7 +0x1c5:  mov    -0x10(%ebp),%eax
08437bfa +0x1c8:  mov    %dx,0x8(%eax)
08437bfe +0x1cc:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08437c03 +0x1d1:  lea    -0x34(%ebp),%edx
08437c06 +0x1d4:  mov    %edx,0x8(%esp)
08437c0a +0x1d8:  movl   $0x1,0x4(%esp)
08437c12 +0x1e0:  mov    %eax,(%esp)
08437c15 +0x1e3:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08437c1a +0x1e8:  mov    $0x1,%ebx
08437c1f +0x1ed:  lea    -0x34(%ebp),%eax
08437c22 +0x1f0:  mov    %eax,(%esp)
08437c25 +0x1f3:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08437c2a +0x1f8:  jmp    08437c47 <+0x215>
08437c2c +0x1fa:  mov    %edx,%ebx
08437c2e +0x1fc:  mov    %eax,%esi
08437c30 +0x1fe:  lea    -0x34(%ebp),%eax
08437c33 +0x201:  mov    %eax,(%esp)
08437c36 +0x204:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08437c3b +0x209:  mov    %esi,%eax
08437c3d +0x20b:  mov    %ebx,%edx
08437c3f +0x20d:  mov    %eax,(%esp)
08437c42 +0x210:  call   08ae3750 <_Unwind_Resume>
08437c47 +0x215:  mov    %ebx,%eax
08437c49 +0x217:  add    $0x40,%esp
08437c4c +0x21a:  pop    %ebx
08437c4d +0x21b:  pop    %esi
08437c4e +0x21c:  pop    %ebp
08437c4f +0x21d:  ret
```

## 反编译 C

```c
// DB_Find_Factory_Hub_User::dispatch @ 0x8437a32

/* DB_Find_Factory_Hub_User::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_Find_Factory_Hub_User::dispatch
          (DB_Find_Factory_Hub_User *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  uint uVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  undefined4 uVar5;
  CStreamGuard local_38 [8];
  uint local_30;
  int local_2c;
  SIG_FIND_FACTORY_HUB_USER *local_28;
  undefined4 local_24;
  undefined4 local_20;
  MySQL *local_1c;
  char *local_18;
  SIG_FIND_FACTORY_HUB_USER_NO_CONN *local_14;
  uint local_10;
  
  local_28 = Stream::GetOutBuffer<SIG_FIND_FACTORY_HUB_USER>(param_3);
  local_2c = 0;
  local_24 = 0;
  local_20 = 0;
  local_30 = 0;
  local_1c = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  local_18 = "seLect charac_no,m_id from charac_info where charac_name=\'%s\'";
  MySQL::set_query(local_1c,"seLect charac_no,m_id from charac_info where charac_name=\'%s\'",
                   local_28);
  cVar1 = MySQL::exec(local_1c,true);
  if (cVar1 == '\x01') {
    local_10 = 0;
    while (uVar2 = MySQL::get_n_rows(local_1c), local_10 < uVar2) {
      cVar1 = MySQL::fetch(local_1c);
      if (cVar1 != '\x01') {
        return 0;
      }
      cVar1 = MySQL::get_int(local_1c,0,&local_2c);
      if (cVar1 != '\x01') {
        return 0;
      }
      cVar1 = MySQL::get_uint(local_1c,1,&local_30);
      if (cVar1 != '\x01') {
        return 0;
      }
      local_10 = local_10 + 1;
    }
    pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x850f);
    CStreamGuard::CStreamGuard(local_38,pSVar3,true);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_38);
                    /* try { // try from 08437baa to 08437c19 has its CatchHandler @ 08437c2c */
    CStreamGuard::operator<<(pCVar4,0x1a1);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_38);
    CStreamGuard::operator<<(pCVar4,param_2);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_38);
    local_14 = CStreamGuard::GetInBuffer<SIG_FIND_FACTORY_HUB_USER_NO_CONN>(pCVar4);
    *(uint *)local_14 = local_30;
    *(int *)(local_14 + 4) = local_2c;
    *(undefined2 *)(local_14 + 8) = *(undefined2 *)(local_28 + 0x1e);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_38);
    uVar5 = 1;
    CStreamGuard::~CStreamGuard(local_38);
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}
```
