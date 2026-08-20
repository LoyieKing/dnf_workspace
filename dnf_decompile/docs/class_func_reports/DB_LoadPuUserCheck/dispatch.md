# dispatch

`_ZN18DB_LoadPuUserCheck8dispatchEiiP6Stream`

`DB_LoadPuUserCheck::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_LoadPuUserCheck` | `0x0844bd5c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0844bd5c  _ZN18DB_LoadPuUserCheck8dispatchEiiP6Stream
#           DB_LoadPuUserCheck::dispatch(int, int, Stream*)
# range [0x0844bd5c, 0x0844bee1]
0844bd5c +0x000:  push   %ebp
0844bd5d +0x001:  mov    %esp,%ebp
0844bd5f +0x003:  push   %esi
0844bd60 +0x004:  push   %ebx
0844bd61 +0x005:  sub    $0x30,%esp
0844bd64 +0x008:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0844bd69 +0x00d:  movl   $0x0,0x8(%esp)
0844bd71 +0x015:  movl   $0x1,0x4(%esp)
0844bd79 +0x01d:  mov    %eax,(%esp)
0844bd7c +0x020:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0844bd81 +0x025:  mov    %eax,-0x14(%ebp)
0844bd84 +0x028:  cmpl   $0x0,-0x14(%ebp)
0844bd88 +0x02c:  jne    0844bd94 <+0x38>
0844bd8a +0x02e:  mov    $0x0,%ebx
0844bd8f +0x033:  jmp    0844bed8 <+0x17c>
0844bd94 +0x038:  movl   $0x0,-0x18(%ebp)
0844bd9b +0x03f:  movb   $0x0,-0xd(%ebp)
0844bd9f +0x043:  lea    -0x18(%ebp),%eax
0844bda2 +0x046:  mov    %eax,0x4(%esp)
0844bda6 +0x04a:  mov    0x14(%ebp),%eax
0844bda9 +0x04d:  mov    %eax,(%esp)
0844bdac +0x050:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
0844bdb1 +0x055:  mov    -0x18(%ebp),%eax
0844bdb4 +0x058:  mov    %eax,0x8(%esp)
0844bdb8 +0x05c:  movl   $"seLect m_id from pu_user_list where m_id = %u",0x4(%esp)
0844bdc0 +0x064:  mov    -0x14(%ebp),%eax
0844bdc3 +0x067:  mov    %eax,(%esp)
0844bdc6 +0x06a:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0844bdcb +0x06f:  movl   $0x1,0x4(%esp)
0844bdd3 +0x077:  mov    -0x14(%ebp),%eax
0844bdd6 +0x07a:  mov    %eax,(%esp)
0844bdd9 +0x07d:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0844bdde +0x082:  xor    $0x1,%eax
0844bde1 +0x085:  test   %al,%al
0844bde3 +0x087:  je     0844bdef <+0x93>
0844bde5 +0x089:  mov    $0x0,%ebx
0844bdea +0x08e:  jmp    0844bed8 <+0x17c>
0844bdef +0x093:  mov    -0x14(%ebp),%eax
0844bdf2 +0x096:  mov    %eax,(%esp)
0844bdf5 +0x099:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0844bdfa +0x09e:  test   %eax,%eax
0844bdfc +0x0a0:  setne  %al
0844bdff +0x0a3:  test   %al,%al
0844be01 +0x0a5:  je     0844be07 <+0xab>
0844be03 +0x0a7:  movb   $0x1,-0xd(%ebp)
0844be07 +0x0ab:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0844be0c +0x0b0:  movl   $0xbcad,0x8(%esp)
0844be14 +0x0b8:  movl   $"DBThread.cpp",0x4(%esp)
0844be1c +0x0c0:  mov    %eax,(%esp)
0844be1f +0x0c3:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0844be24 +0x0c8:  movl   $0x1,0x8(%esp)
0844be2c +0x0d0:  mov    %eax,0x4(%esp)
0844be30 +0x0d4:  lea    -0x20(%ebp),%eax
0844be33 +0x0d7:  mov    %eax,(%esp)
0844be36 +0x0da:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0844be3b +0x0df:  lea    -0x20(%ebp),%eax
0844be3e +0x0e2:  mov    %eax,(%esp)
0844be41 +0x0e5:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0844be46 +0x0ea:  movl   $0x2e1,0x4(%esp)
0844be4e +0x0f2:  mov    %eax,(%esp)
0844be51 +0x0f5:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0844be56 +0x0fa:  lea    -0x20(%ebp),%eax
0844be59 +0x0fd:  mov    %eax,(%esp)
0844be5c +0x100:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0844be61 +0x105:  mov    0x10(%ebp),%edx
0844be64 +0x108:  mov    %edx,0x4(%esp)
0844be68 +0x10c:  mov    %eax,(%esp)
0844be6b +0x10f:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0844be70 +0x114:  lea    -0x20(%ebp),%eax
0844be73 +0x117:  mov    %eax,(%esp)
0844be76 +0x11a:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0844be7b +0x11f:  mov    %eax,(%esp)
0844be7e +0x122:  call   08454860 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x7476>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x7476
0844be83 +0x127:  mov    %eax,-0xc(%ebp)
0844be86 +0x12a:  mov    -0xc(%ebp),%eax
0844be89 +0x12d:  movzbl -0xd(%ebp),%edx
0844be8d +0x131:  mov    %dl,(%eax)
0844be8f +0x133:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0844be94 +0x138:  lea    -0x20(%ebp),%edx
0844be97 +0x13b:  mov    %edx,0x8(%esp)
0844be9b +0x13f:  movl   $0x1,0x4(%esp)
0844bea3 +0x147:  mov    %eax,(%esp)
0844bea6 +0x14a:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0844beab +0x14f:  mov    $0x1,%ebx
0844beb0 +0x154:  lea    -0x20(%ebp),%eax
0844beb3 +0x157:  mov    %eax,(%esp)
0844beb6 +0x15a:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0844bebb +0x15f:  jmp    0844bed8 <+0x17c>
0844bebd +0x161:  mov    %edx,%ebx
0844bebf +0x163:  mov    %eax,%esi
0844bec1 +0x165:  lea    -0x20(%ebp),%eax
0844bec4 +0x168:  mov    %eax,(%esp)
0844bec7 +0x16b:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0844becc +0x170:  mov    %esi,%eax
0844bece +0x172:  mov    %ebx,%edx
0844bed0 +0x174:  mov    %eax,(%esp)
0844bed3 +0x177:  call   08ae3750 <_Unwind_Resume>
0844bed8 +0x17c:  mov    %ebx,%eax
0844beda +0x17e:  add    $0x30,%esp
0844bedd +0x181:  pop    %ebx
0844bede +0x182:  pop    %esi
0844bedf +0x183:  pop    %ebp
0844bee0 +0x184:  ret
0844bee1 +0x185:  nop
```

## 反编译 C

```c
// DB_LoadPuUserCheck::dispatch @ 0x844bd5c

/* DB_LoadPuUserCheck::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_LoadPuUserCheck::dispatch(DB_LoadPuUserCheck *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  int iVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  undefined4 uVar5;
  CStreamGuard local_24 [8];
  uint local_1c;
  MySQL *local_18;
  SIG_LOAD_PU_USER_INFO local_11;
  SIG_LOAD_PU_USER_INFO *local_10;
  
  local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  if (local_18 == (MySQL *)0x0) {
    uVar5 = 0;
  }
  else {
    local_1c = 0;
    local_11 = (SIG_LOAD_PU_USER_INFO)0x0;
    Stream::operator>>(param_3,&local_1c);
    MySQL::set_query(local_18,"seLect m_id from pu_user_list where m_id = %u",local_1c);
    cVar1 = MySQL::exec(local_18,true);
    if (cVar1 == '\x01') {
      iVar2 = MySQL::get_n_rows(local_18);
      if (iVar2 != 0) {
        local_11 = (SIG_LOAD_PU_USER_INFO)0x1;
      }
      pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xbcad);
      CStreamGuard::CStreamGuard(local_24,pSVar3,true);
      pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_24);
                    /* try { // try from 0844be51 to 0844beaa has its CatchHandler @ 0844bebd */
      CStreamGuard::operator<<(pCVar4,0x2e1);
      pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_24);
      CStreamGuard::operator<<(pCVar4,param_2);
      pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_24);
      local_10 = CStreamGuard::GetInBuffer<SIG_LOAD_PU_USER_INFO>(pCVar4);
      *local_10 = local_11;
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_24);
      uVar5 = 1;
      CStreamGuard::~CStreamGuard(local_24);
    }
    else {
      uVar5 = 0;
    }
  }
  return uVar5;
}
```
