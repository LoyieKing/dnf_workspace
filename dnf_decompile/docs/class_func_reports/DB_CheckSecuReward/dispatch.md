# dispatch

`_ZN18DB_CheckSecuReward8dispatchEiiP6Stream`

`DB_CheckSecuReward::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_CheckSecuReward` | `0x084441e6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084441e6  _ZN18DB_CheckSecuReward8dispatchEiiP6Stream
#           DB_CheckSecuReward::dispatch(int, int, Stream*)
# range [0x084441e6, 0x08444407]
084441e6 +0x000:  push   %ebp
084441e7 +0x001:  mov    %esp,%ebp
084441e9 +0x003:  push   %esi
084441ea +0x004:  push   %ebx
084441eb +0x005:  sub    $0x30,%esp
084441ee +0x008:  mov    0x14(%ebp),%eax
084441f1 +0x00b:  mov    %eax,(%esp)
084441f4 +0x00e:  call   08454004 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6c1a>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6c1a
084441f9 +0x013:  mov    %eax,-0x18(%ebp)
084441fc +0x016:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08444201 +0x01b:  movl   $0x0,0x8(%esp)
08444209 +0x023:  movl   $0x1,0x4(%esp)
08444211 +0x02b:  mov    %eax,(%esp)
08444214 +0x02e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08444219 +0x033:  mov    %eax,-0x14(%ebp)
0844421c +0x036:  movl   $0x0,-0x1c(%ebp)
08444223 +0x03d:  mov    -0x18(%ebp),%eax
08444226 +0x040:  mov    (%eax),%eax
08444228 +0x042:  movl   $0x0,0x4(%esp)
08444230 +0x04a:  mov    %eax,(%esp)
08444233 +0x04d:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08444238 +0x052:  mov    %eax,0x8(%esp)
0844423c +0x056:  movl   $"seLect unix_timestamp(last_check_time) from member_security_grade where m_id=%s",0x4(%esp)
08444244 +0x05e:  mov    -0x14(%ebp),%eax
08444247 +0x061:  mov    %eax,(%esp)
0844424a +0x064:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0844424f +0x069:  movl   $0x1,0x4(%esp)
08444257 +0x071:  mov    -0x14(%ebp),%eax
0844425a +0x074:  mov    %eax,(%esp)
0844425d +0x077:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08444262 +0x07c:  xor    $0x1,%eax
08444265 +0x07f:  test   %al,%al
08444267 +0x081:  jne    0844428a <+0xa4>
08444269 +0x083:  mov    -0x14(%ebp),%eax
0844426c +0x086:  mov    %eax,(%esp)
0844426f +0x089:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08444274 +0x08e:  test   %eax,%eax
08444276 +0x090:  je     0844428a <+0xa4>
08444278 +0x092:  mov    -0x14(%ebp),%eax
0844427b +0x095:  mov    %eax,(%esp)
0844427e +0x098:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08444283 +0x09d:  xor    $0x1,%eax
08444286 +0x0a0:  test   %al,%al
08444288 +0x0a2:  je     08444291 <+0xab>
0844428a +0x0a4:  mov    $0x1,%eax
0844428f +0x0a9:  jmp    08444296 <+0xb0>
08444291 +0x0ab:  mov    $0x0,%eax
08444296 +0x0b0:  test   %al,%al
08444298 +0x0b2:  je     084442a4 <+0xbe>
0844429a +0x0b4:  mov    $0x1,%eax
0844429f +0x0b9:  jmp    08444401 <+0x21b>
084442a4 +0x0be:  lea    -0x1c(%ebp),%eax
084442a7 +0x0c1:  mov    %eax,0x8(%esp)
084442ab +0x0c5:  movl   $0x0,0x4(%esp)
084442b3 +0x0cd:  mov    -0x14(%ebp),%eax
084442b6 +0x0d0:  mov    %eax,(%esp)
084442b9 +0x0d3:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
084442be +0x0d8:  lea    -0x20(%ebp),%eax
084442c1 +0x0db:  mov    %eax,(%esp)
084442c4 +0x0de:  call   0807d750 <_init+0x48>
084442c9 +0x0e3:  mov    -0x20(%ebp),%ecx
084442cc +0x0e6:  mov    $0xc22e4507,%edx
084442d1 +0x0eb:  mov    %ecx,%eax
084442d3 +0x0ed:  imul   %edx
084442d5 +0x0ef:  lea    (%edx,%ecx,1),%eax
084442d8 +0x0f2:  mov    %eax,%edx
084442da +0x0f4:  sar    $0x10,%edx
084442dd +0x0f7:  mov    %ecx,%eax
084442df +0x0f9:  sar    $0x1f,%eax
084442e2 +0x0fc:  mov    %edx,%ebx
084442e4 +0x0fe:  sub    %eax,%ebx
084442e6 +0x100:  mov    %ebx,%eax
084442e8 +0x102:  mov    %eax,-0x10(%ebp)
084442eb +0x105:  mov    -0x10(%ebp),%eax
084442ee +0x108:  imul   $&_ZL14gUnicodeBuffer+0xac54,%eax,%eax
084442f4 +0x10e:  mov    %ecx,%edx
084442f6 +0x110:  sub    %eax,%edx
084442f8 +0x112:  mov    %edx,%eax
084442fa +0x114:  mov    %eax,-0x10(%ebp)
084442fd +0x117:  mov    -0x20(%ebp),%eax
08444300 +0x11a:  sub    -0x10(%ebp),%eax
08444303 +0x11d:  sub    $0x2a30,%eax
08444308 +0x122:  mov    %eax,-0x20(%ebp)
0844430b +0x125:  cmpl   $&_ZL14gUnicodeBuffer+0x8223,-0x10(%ebp)
08444312 +0x12c:  jle    0844431f <+0x139>
08444314 +0x12e:  mov    -0x20(%ebp),%eax
08444317 +0x131:  add    $&_ZL14gUnicodeBuffer+0xac54,%eax
0844431c +0x136:  mov    %eax,-0x20(%ebp)
0844431f +0x139:  mov    -0x1c(%ebp),%eax
08444322 +0x13c:  mov    %eax,%edx
08444324 +0x13e:  mov    -0x20(%ebp),%eax
08444327 +0x141:  cmp    %eax,%edx
08444329 +0x143:  jge    084443fc <+0x216>
0844432f +0x149:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08444334 +0x14e:  movl   $0xab25,0x8(%esp)
0844433c +0x156:  movl   $"DBThread.cpp",0x4(%esp)
08444344 +0x15e:  mov    %eax,(%esp)
08444347 +0x161:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0844434c +0x166:  movl   $0x1,0x8(%esp)
08444354 +0x16e:  mov    %eax,0x4(%esp)
08444358 +0x172:  lea    -0x28(%ebp),%eax
0844435b +0x175:  mov    %eax,(%esp)
0844435e +0x178:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08444363 +0x17d:  lea    -0x28(%ebp),%eax
08444366 +0x180:  mov    %eax,(%esp)
08444369 +0x183:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0844436e +0x188:  mov    0xc(%ebp),%edx
08444371 +0x18b:  mov    %edx,0x4(%esp)
08444375 +0x18f:  mov    %eax,(%esp)
08444378 +0x192:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0844437d +0x197:  lea    -0x28(%ebp),%eax
08444380 +0x19a:  mov    %eax,(%esp)
08444383 +0x19d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08444388 +0x1a2:  mov    0x10(%ebp),%edx
0844438b +0x1a5:  mov    %edx,0x4(%esp)
0844438f +0x1a9:  mov    %eax,(%esp)
08444392 +0x1ac:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08444397 +0x1b1:  lea    -0x28(%ebp),%eax
0844439a +0x1b4:  mov    %eax,(%esp)
0844439d +0x1b7:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
084443a2 +0x1bc:  mov    %eax,(%esp)
084443a5 +0x1bf:  call   08454058 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6c6e>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6c6e
084443aa +0x1c4:  mov    %eax,-0xc(%ebp)
084443ad +0x1c7:  mov    -0x18(%ebp),%eax
084443b0 +0x1ca:  mov    0x4(%eax),%edx
084443b3 +0x1cd:  mov    -0xc(%ebp),%eax
084443b6 +0x1d0:  mov    %edx,(%eax)
084443b8 +0x1d2:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084443bd +0x1d7:  lea    -0x28(%ebp),%edx
084443c0 +0x1da:  mov    %edx,0x8(%esp)
084443c4 +0x1de:  movl   $0x1,0x4(%esp)
084443cc +0x1e6:  mov    %eax,(%esp)
084443cf +0x1e9:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084443d4 +0x1ee:  jmp    084443f1 <+0x20b>
084443d6 +0x1f0:  mov    %edx,%ebx
084443d8 +0x1f2:  mov    %eax,%esi
084443da +0x1f4:  lea    -0x28(%ebp),%eax
084443dd +0x1f7:  mov    %eax,(%esp)
084443e0 +0x1fa:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084443e5 +0x1ff:  mov    %esi,%eax
084443e7 +0x201:  mov    %ebx,%edx
084443e9 +0x203:  mov    %eax,(%esp)
084443ec +0x206:  call   08ae3750 <_Unwind_Resume>
084443f1 +0x20b:  lea    -0x28(%ebp),%eax
084443f4 +0x20e:  mov    %eax,(%esp)
084443f7 +0x211:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084443fc +0x216:  mov    $0x1,%eax
08444401 +0x21b:  add    $0x30,%esp
08444404 +0x21e:  pop    %ebx
08444405 +0x21f:  pop    %esi
08444406 +0x220:  pop    %ebp
08444407 +0x221:  ret
```

## 反编译 C

```c
// DB_CheckSecuReward::dispatch @ 0x84441e6

/* DB_CheckSecuReward::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_CheckSecuReward::dispatch(DB_CheckSecuReward *this,int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  Stream *pSVar5;
  CStreamGuard *pCVar6;
  CStreamGuard local_2c [8];
  int local_24;
  uint local_20;
  SIG_CHECK_USER_SECU_REWARD *local_1c;
  MySQL *local_18;
  int local_14;
  SIG_SEND_USER_REWARD *local_10;
  
  local_1c = Stream::GetOutBuffer<SIG_CHECK_USER_SECU_REWARD>(param_3);
  local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  local_20 = 0;
  uVar3 = NumberToString(*(uint *)local_1c,0);
  MySQL::set_query(local_18,
                   "seLect unix_timestamp(last_check_time) from member_security_grade where m_id=%s"
                   ,uVar3);
  cVar2 = MySQL::exec(local_18,true);
  if (((cVar2 == '\x01') && (iVar4 = MySQL::get_n_rows(local_18), iVar4 != 0)) &&
     (cVar2 = MySQL::fetch(local_18), cVar2 == '\x01')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    MySQL::get_uint(local_18,0,&local_20);
    time(&local_24);
    local_14 = local_24 % 0x15180;
    iVar4 = local_24 - local_14;
    local_24 = iVar4 + -0x2a30;
    if (0x1274f < local_14) {
      local_24 = iVar4 + 0x12750;
    }
    if ((int)local_20 < local_24) {
      pSVar5 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xab25);
      CStreamGuard::CStreamGuard(local_2c,pSVar5,true);
      pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_2c);
                    /* try { // try from 08444378 to 084443d3 has its CatchHandler @ 084443d6 */
      CStreamGuard::operator<<(pCVar6,param_1);
      pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_2c);
      CStreamGuard::operator<<(pCVar6,param_2);
      pCVar6 = (CStreamGuard *)CStreamGuard::operator->(local_2c);
      local_10 = CStreamGuard::GetInBuffer<SIG_SEND_USER_REWARD>(pCVar6);
      *(uint *)local_10 = *(uint *)(local_1c + 4);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_2c);
      CStreamGuard::~CStreamGuard(local_2c);
    }
  }
  return 1;
}
```
