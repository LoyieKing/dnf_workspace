# dispatch

`_ZN18DB_CheckCharacName8dispatchEiiP6Stream`

`DB_CheckCharacName::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_CheckCharacName` | `0x0844317e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0844317e  _ZN18DB_CheckCharacName8dispatchEiiP6Stream
#           DB_CheckCharacName::dispatch(int, int, Stream*)
# range [0x0844317e, 0x08443351]
0844317e +0x000:  push   %ebp
0844317f +0x001:  mov    %esp,%ebp
08443181 +0x003:  push   %esi
08443182 +0x004:  push   %ebx
08443183 +0x005:  sub    $0x30,%esp
08443186 +0x008:  mov    0x14(%ebp),%eax
08443189 +0x00b:  mov    %eax,(%esp)
0844318c +0x00e:  call   08453e88 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6a9e>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6a9e
08443191 +0x013:  mov    %eax,-0x18(%ebp)
08443194 +0x016:  movl   $0x0,-0x1c(%ebp)
0844319b +0x01d:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
084431a0 +0x022:  movl   $0x0,0x8(%esp)
084431a8 +0x02a:  movl   $0x2,0x4(%esp)
084431b0 +0x032:  mov    %eax,(%esp)
084431b3 +0x035:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
084431b8 +0x03a:  mov    %eax,-0x14(%ebp)
084431bb +0x03d:  mov    -0x18(%ebp),%eax
084431be +0x040:  add    $0x4,%eax
084431c1 +0x043:  mov    %eax,0x8(%esp)
084431c5 +0x047:  movl   $"seLect m_id from charac_info where charac_name='%s' limit 1",0x4(%esp)
084431cd +0x04f:  mov    -0x14(%ebp),%eax
084431d0 +0x052:  mov    %eax,(%esp)
084431d3 +0x055:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084431d8 +0x05a:  movb   $0x0,-0xd(%ebp)
084431dc +0x05e:  movl   $0x1,0x4(%esp)
084431e4 +0x066:  mov    -0x14(%ebp),%eax
084431e7 +0x069:  mov    %eax,(%esp)
084431ea +0x06c:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084431ef +0x071:  xor    $0x1,%eax
084431f2 +0x074:  test   %al,%al
084431f4 +0x076:  je     08443200 <+0x82>
084431f6 +0x078:  mov    $0x0,%ebx
084431fb +0x07d:  jmp    08443349 <+0x1cb>
08443200 +0x082:  mov    -0x14(%ebp),%eax
08443203 +0x085:  mov    %eax,(%esp)
08443206 +0x088:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0844320b +0x08d:  test   %eax,%eax
0844320d +0x08f:  setne  %al
08443210 +0x092:  test   %al,%al
08443212 +0x094:  je     0844326b <+0xed>
08443214 +0x096:  mov    -0x14(%ebp),%eax
08443217 +0x099:  mov    %eax,(%esp)
0844321a +0x09c:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0844321f +0x0a1:  xor    $0x1,%eax
08443222 +0x0a4:  test   %al,%al
08443224 +0x0a6:  je     08443230 <+0xb2>
08443226 +0x0a8:  mov    $0x0,%ebx
0844322b +0x0ad:  jmp    08443349 <+0x1cb>
08443230 +0x0b2:  lea    -0x1c(%ebp),%eax
08443233 +0x0b5:  mov    %eax,0x8(%esp)
08443237 +0x0b9:  movl   $0x0,0x4(%esp)
0844323f +0x0c1:  mov    -0x14(%ebp),%eax
08443242 +0x0c4:  mov    %eax,(%esp)
08443245 +0x0c7:  call   080e22ae <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x54>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x54
0844324a +0x0cc:  xor    $0x1,%eax
0844324d +0x0cf:  test   %al,%al
0844324f +0x0d1:  je     0844325b <+0xdd>
08443251 +0x0d3:  mov    $0x0,%ebx
08443256 +0x0d8:  jmp    08443349 <+0x1cb>
0844325b +0x0dd:  mov    -0x18(%ebp),%eax
0844325e +0x0e0:  mov    (%eax),%edx
08443260 +0x0e2:  mov    -0x1c(%ebp),%eax
08443263 +0x0e5:  cmp    %eax,%edx
08443265 +0x0e7:  jne    0844326b <+0xed>
08443267 +0x0e9:  movb   $0x1,-0xd(%ebp)
0844326b +0x0ed:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08443270 +0x0f2:  movl   $0xa4ec,0x8(%esp)
08443278 +0x0fa:  movl   $"DBThread.cpp",0x4(%esp)
08443280 +0x102:  mov    %eax,(%esp)
08443283 +0x105:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08443288 +0x10a:  movl   $0x1,0x8(%esp)
08443290 +0x112:  mov    %eax,0x4(%esp)
08443294 +0x116:  lea    -0x24(%ebp),%eax
08443297 +0x119:  mov    %eax,(%esp)
0844329a +0x11c:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0844329f +0x121:  lea    -0x24(%ebp),%eax
084432a2 +0x124:  mov    %eax,(%esp)
084432a5 +0x127:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084432aa +0x12c:  movl   $0x2a3,0x4(%esp)
084432b2 +0x134:  mov    %eax,(%esp)
084432b5 +0x137:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084432ba +0x13c:  lea    -0x24(%ebp),%eax
084432bd +0x13f:  mov    %eax,(%esp)
084432c0 +0x142:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084432c5 +0x147:  mov    0x10(%ebp),%edx
084432c8 +0x14a:  mov    %edx,0x4(%esp)
084432cc +0x14e:  mov    %eax,(%esp)
084432cf +0x151:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084432d4 +0x156:  lea    -0x24(%ebp),%eax
084432d7 +0x159:  mov    %eax,(%esp)
084432da +0x15c:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
084432df +0x161:  mov    %eax,(%esp)
084432e2 +0x164:  call   08453edc <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6af2>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6af2
084432e7 +0x169:  mov    %eax,-0xc(%ebp)
084432ea +0x16c:  mov    -0xc(%ebp),%eax
084432ed +0x16f:  movzbl -0xd(%ebp),%edx
084432f1 +0x173:  mov    %dl,(%eax)
084432f3 +0x175:  mov    -0x18(%ebp),%eax
084432f6 +0x178:  movzbl 0x22(%eax),%edx
084432fa +0x17c:  mov    -0xc(%ebp),%eax
084432fd +0x17f:  mov    %dl,0x1(%eax)
08443300 +0x182:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08443305 +0x187:  lea    -0x24(%ebp),%edx
08443308 +0x18a:  mov    %edx,0x8(%esp)
0844330c +0x18e:  movl   $0x1,0x4(%esp)
08443314 +0x196:  mov    %eax,(%esp)
08443317 +0x199:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0844331c +0x19e:  mov    $0x1,%ebx
08443321 +0x1a3:  lea    -0x24(%ebp),%eax
08443324 +0x1a6:  mov    %eax,(%esp)
08443327 +0x1a9:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0844332c +0x1ae:  jmp    08443349 <+0x1cb>
0844332e +0x1b0:  mov    %edx,%ebx
08443330 +0x1b2:  mov    %eax,%esi
08443332 +0x1b4:  lea    -0x24(%ebp),%eax
08443335 +0x1b7:  mov    %eax,(%esp)
08443338 +0x1ba:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0844333d +0x1bf:  mov    %esi,%eax
0844333f +0x1c1:  mov    %ebx,%edx
08443341 +0x1c3:  mov    %eax,(%esp)
08443344 +0x1c6:  call   08ae3750 <_Unwind_Resume>
08443349 +0x1cb:  mov    %ebx,%eax
0844334b +0x1cd:  add    $0x30,%esp
0844334e +0x1d0:  pop    %ebx
0844334f +0x1d1:  pop    %esi
08443350 +0x1d2:  pop    %ebp
08443351 +0x1d3:  ret
```

## 反编译 C

```c
// DB_CheckCharacName::dispatch @ 0x844317e

/* DB_CheckCharacName::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_CheckCharacName::dispatch(DB_CheckCharacName *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  int iVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  CStreamGuard local_28 [8];
  uint local_20;
  SIG_CHECK_CHARAC_NAME *local_1c;
  MySQL *local_18;
  SIG_GOLD_CONTROL_EXCEPTION_MID local_11;
  SIG_GOLD_CONTROL_EXCEPTION_MID *local_10;
  
  local_1c = Stream::GetOutBuffer<SIG_CHECK_CHARAC_NAME>(param_3);
  local_20 = 0;
  local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  MySQL::set_query(local_18,"seLect m_id from charac_info where charac_name=\'%s\' limit 1",
                   local_1c + 4);
  local_11 = (SIG_GOLD_CONTROL_EXCEPTION_MID)0x0;
  cVar1 = MySQL::exec(local_18,true);
  if (cVar1 != '\x01') {
    return 0;
  }
  iVar2 = MySQL::get_n_rows(local_18);
  if (iVar2 != 0) {
    cVar1 = MySQL::fetch(local_18);
    if (cVar1 != '\x01') {
      return 0;
    }
    cVar1 = MySQL::get_int(local_18,0,&local_20);
    if (cVar1 != '\x01') {
      return 0;
    }
    if (*(uint *)local_1c == local_20) {
      local_11 = (SIG_GOLD_CONTROL_EXCEPTION_MID)0x1;
    }
  }
  pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xa4ec);
  CStreamGuard::CStreamGuard(local_28,pSVar3,true);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_28);
                    /* try { // try from 084432b5 to 0844331b has its CatchHandler @ 0844332e */
  CStreamGuard::operator<<(pCVar4,0x2a3);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_28);
  CStreamGuard::operator<<(pCVar4,param_2);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_28);
  local_10 = CStreamGuard::GetInBuffer<SIG_GOLD_CONTROL_EXCEPTION_MID>(pCVar4);
  *local_10 = local_11;
  *(SIG_CHECK_CHARAC_NAME *)(local_10 + 1) = local_1c[0x22];
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_28);
  CStreamGuard::~CStreamGuard(local_28);
  return 1;
}
```
