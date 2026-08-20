# dispatch

`_ZN14DB_LoadMileage8dispatchEiiP6Stream`

`DB_LoadMileage::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_LoadMileage` | `0x08443d2c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08443d2c  _ZN14DB_LoadMileage8dispatchEiiP6Stream
#           DB_LoadMileage::dispatch(int, int, Stream*)
# range [0x08443d2c, 0x08444065]
08443d2c +0x000:  push   %ebp
08443d2d +0x001:  mov    %esp,%ebp
08443d2f +0x003:  push   %esi
08443d30 +0x004:  push   %ebx
08443d31 +0x005:  sub    $0x70,%esp
08443d34 +0x008:  mov    0x14(%ebp),%eax
08443d37 +0x00b:  mov    %eax,(%esp)
08443d3a +0x00e:  call   08453f5c <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6b72>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6b72
08443d3f +0x013:  mov    %eax,-0x18(%ebp)
08443d42 +0x016:  cmpl   $0x0,-0x18(%ebp)
08443d46 +0x01a:  jne    08443d52 <+0x26>
08443d48 +0x01c:  mov    $0x0,%ebx
08443d4d +0x021:  jmp    0844405c <+0x330>
08443d52 +0x026:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08443d57 +0x02b:  movl   $0x0,0x8(%esp)
08443d5f +0x033:  movl   $0x1,0x4(%esp)
08443d67 +0x03b:  mov    %eax,(%esp)
08443d6a +0x03e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08443d6f +0x043:  mov    %eax,-0x14(%ebp)
08443d72 +0x046:  cmpl   $0x0,-0x14(%ebp)
08443d76 +0x04a:  jne    08443dc0 <+0x94>
08443d78 +0x04c:  movl   $0x5,0xc(%esp)
08443d80 +0x054:  movl   $0xa7ae,0x8(%esp)
08443d88 +0x05c:  movl   $&_ZZN14DB_LoadMileage8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
08443d90 +0x064:  lea    -0x58(%ebp),%eax
08443d93 +0x067:  mov    %eax,(%esp)
08443d96 +0x06a:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08443d9b +0x06f:  movl   $0x1,0x8(%esp)
08443da3 +0x077:  movl   $"[ERROR] Database Handle is NULL [index:%d]",0x4(%esp)
08443dab +0x07f:  lea    -0x58(%ebp),%eax
08443dae +0x082:  mov    %eax,(%esp)
08443db1 +0x085:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08443db6 +0x08a:  mov    $0x0,%ebx
08443dbb +0x08f:  jmp    0844405c <+0x330>
08443dc0 +0x094:  mov    -0x18(%ebp),%eax
08443dc3 +0x097:  mov    (%eax),%eax
08443dc5 +0x099:  mov    %eax,0x8(%esp)
08443dc9 +0x09d:  movl   $"seLect miles from member_miles where m_id = %u",0x4(%esp)
08443dd1 +0x0a5:  mov    -0x14(%ebp),%eax
08443dd4 +0x0a8:  mov    %eax,(%esp)
08443dd7 +0x0ab:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08443ddc +0x0b0:  movl   $0x1,0x4(%esp)
08443de4 +0x0b8:  mov    -0x14(%ebp),%eax
08443de7 +0x0bb:  mov    %eax,(%esp)
08443dea +0x0be:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08443def +0x0c3:  mov    %al,-0xd(%ebp)
08443df2 +0x0c6:  movzbl -0xd(%ebp),%eax
08443df6 +0x0ca:  xor    $0x1,%eax
08443df9 +0x0cd:  test   %al,%al
08443dfb +0x0cf:  je     08443e50 <+0x124>
08443dfd +0x0d1:  mov    -0x18(%ebp),%eax
08443e00 +0x0d4:  mov    0x4(%eax),%esi
08443e03 +0x0d7:  mov    -0x18(%ebp),%eax
08443e06 +0x0da:  mov    (%eax),%ebx
08443e08 +0x0dc:  movl   $0x5,0xc(%esp)
08443e10 +0x0e4:  movl   $0xa7b6,0x8(%esp)
08443e18 +0x0ec:  movl   $&_ZZN14DB_LoadMileage8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
08443e20 +0x0f4:  lea    -0x48(%ebp),%eax
08443e23 +0x0f7:  mov    %eax,(%esp)
08443e26 +0x0fa:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08443e2b +0x0ff:  mov    %esi,0xc(%esp)
08443e2f +0x103:  mov    %ebx,0x8(%esp)
08443e33 +0x107:  movl   $"[ERROR] Exec [m_id:%u][charac_no:%u]",0x4(%esp)
08443e3b +0x10f:  lea    -0x48(%ebp),%eax
08443e3e +0x112:  mov    %eax,(%esp)
08443e41 +0x115:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08443e46 +0x11a:  mov    $0x0,%ebx
08443e4b +0x11f:  jmp    0844405c <+0x330>
08443e50 +0x124:  mov    -0x14(%ebp),%eax
08443e53 +0x127:  mov    %eax,(%esp)
08443e56 +0x12a:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08443e5b +0x12f:  mov    %eax,-0xc(%ebp)
08443e5e +0x132:  cmpl   $0x0,-0xc(%ebp)
08443e62 +0x136:  jne    08443ea2 <+0x176>
08443e64 +0x138:  mov    -0x18(%ebp),%eax
08443e67 +0x13b:  mov    (%eax),%eax
08443e69 +0x13d:  mov    %eax,0x8(%esp)
08443e6d +0x141:  movl   $"inSert into member_miles (m_id, miles, daily_miles) values (%u, 0, 0)",0x4(%esp)
08443e75 +0x149:  mov    -0x14(%ebp),%eax
08443e78 +0x14c:  mov    %eax,(%esp)
08443e7b +0x14f:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08443e80 +0x154:  movl   $0x1,0x4(%esp)
08443e88 +0x15c:  mov    -0x14(%ebp),%eax
08443e8b +0x15f:  mov    %eax,(%esp)
08443e8e +0x162:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08443e93 +0x167:  mov    -0x18(%ebp),%eax
08443e96 +0x16a:  movl   $0x0,0x8(%eax)
08443e9d +0x171:  jmp    08443f8c <+0x260>
08443ea2 +0x176:  mov    -0x14(%ebp),%eax
08443ea5 +0x179:  mov    %eax,(%esp)
08443ea8 +0x17c:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08443ead +0x181:  mov    %al,-0xd(%ebp)
08443eb0 +0x184:  movzbl -0xd(%ebp),%eax
08443eb4 +0x188:  xor    $0x1,%eax
08443eb7 +0x18b:  test   %al,%al
08443eb9 +0x18d:  je     08443f0e <+0x1e2>
08443ebb +0x18f:  mov    -0x18(%ebp),%eax
08443ebe +0x192:  mov    0x4(%eax),%esi
08443ec1 +0x195:  mov    -0x18(%ebp),%eax
08443ec4 +0x198:  mov    (%eax),%ebx
08443ec6 +0x19a:  movl   $0x5,0xc(%esp)
08443ece +0x1a2:  movl   $0xa7cb,0x8(%esp)
08443ed6 +0x1aa:  movl   $&_ZZN14DB_LoadMileage8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
08443ede +0x1b2:  lea    -0x38(%ebp),%eax
08443ee1 +0x1b5:  mov    %eax,(%esp)
08443ee4 +0x1b8:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08443ee9 +0x1bd:  mov    %esi,0xc(%esp)
08443eed +0x1c1:  mov    %ebx,0x8(%esp)
08443ef1 +0x1c5:  movl   $"[ERROR] Fetch [m_id:%u][charac_no:%u]",0x4(%esp)
08443ef9 +0x1cd:  lea    -0x38(%ebp),%eax
08443efc +0x1d0:  mov    %eax,(%esp)
08443eff +0x1d3:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08443f04 +0x1d8:  mov    $0x0,%ebx
08443f09 +0x1dd:  jmp    0844405c <+0x330>
08443f0e +0x1e2:  mov    -0x18(%ebp),%eax
08443f11 +0x1e5:  add    $0x8,%eax
08443f14 +0x1e8:  mov    %eax,0x8(%esp)
08443f18 +0x1ec:  movl   $0x0,0x4(%esp)
08443f20 +0x1f4:  mov    -0x14(%ebp),%eax
08443f23 +0x1f7:  mov    %eax,(%esp)
08443f26 +0x1fa:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08443f2b +0x1ff:  mov    %al,-0xd(%ebp)
08443f2e +0x202:  movzbl -0xd(%ebp),%eax
08443f32 +0x206:  xor    $0x1,%eax
08443f35 +0x209:  test   %al,%al
08443f37 +0x20b:  je     08443f8c <+0x260>
08443f39 +0x20d:  mov    -0x18(%ebp),%eax
08443f3c +0x210:  mov    0x4(%eax),%esi
08443f3f +0x213:  mov    -0x18(%ebp),%eax
08443f42 +0x216:  mov    (%eax),%ebx
08443f44 +0x218:  movl   $0x5,0xc(%esp)
08443f4c +0x220:  movl   $0xa7d2,0x8(%esp)
08443f54 +0x228:  movl   $&_ZZN14DB_LoadMileage8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
08443f5c +0x230:  lea    -0x28(%ebp),%eax
08443f5f +0x233:  mov    %eax,(%esp)
08443f62 +0x236:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08443f67 +0x23b:  mov    %esi,0xc(%esp)
08443f6b +0x23f:  mov    %ebx,0x8(%esp)
08443f6f +0x243:  movl   $"[ERROR] Mileage [m_id:%u][charac_no:%u]",0x4(%esp)
08443f77 +0x24b:  lea    -0x28(%ebp),%eax
08443f7a +0x24e:  mov    %eax,(%esp)
08443f7d +0x251:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08443f82 +0x256:  mov    $0x0,%ebx
08443f87 +0x25b:  jmp    0844405c <+0x330>
08443f8c +0x260:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08443f91 +0x265:  movl   $0xa7d8,0x8(%esp)
08443f99 +0x26d:  movl   $"DBThread.cpp",0x4(%esp)
08443fa1 +0x275:  mov    %eax,(%esp)
08443fa4 +0x278:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08443fa9 +0x27d:  movl   $0x1,0x8(%esp)
08443fb1 +0x285:  mov    %eax,0x4(%esp)
08443fb5 +0x289:  lea    -0x60(%ebp),%eax
08443fb8 +0x28c:  mov    %eax,(%esp)
08443fbb +0x28f:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08443fc0 +0x294:  lea    -0x60(%ebp),%eax
08443fc3 +0x297:  mov    %eax,(%esp)
08443fc6 +0x29a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08443fcb +0x29f:  mov    0xc(%ebp),%edx
08443fce +0x2a2:  mov    %edx,0x4(%esp)
08443fd2 +0x2a6:  mov    %eax,(%esp)
08443fd5 +0x2a9:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08443fda +0x2ae:  lea    -0x60(%ebp),%eax
08443fdd +0x2b1:  mov    %eax,(%esp)
08443fe0 +0x2b4:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08443fe5 +0x2b9:  mov    0x10(%ebp),%edx
08443fe8 +0x2bc:  mov    %edx,0x4(%esp)
08443fec +0x2c0:  mov    %eax,(%esp)
08443fef +0x2c3:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08443ff4 +0x2c8:  lea    -0x60(%ebp),%eax
08443ff7 +0x2cb:  mov    %eax,(%esp)
08443ffa +0x2ce:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08443fff +0x2d3:  movl   $0xc,0x8(%esp)
08444007 +0x2db:  mov    -0x18(%ebp),%edx
0844400a +0x2de:  mov    %edx,0x4(%esp)
0844400e +0x2e2:  mov    %eax,(%esp)
08444011 +0x2e5:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08444016 +0x2ea:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0844401b +0x2ef:  lea    -0x60(%ebp),%edx
0844401e +0x2f2:  mov    %edx,0x8(%esp)
08444022 +0x2f6:  movl   $0x1,0x4(%esp)
0844402a +0x2fe:  mov    %eax,(%esp)
0844402d +0x301:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08444032 +0x306:  mov    %eax,%ebx
08444034 +0x308:  lea    -0x60(%ebp),%eax
08444037 +0x30b:  mov    %eax,(%esp)
0844403a +0x30e:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0844403f +0x313:  jmp    0844405c <+0x330>
08444041 +0x315:  mov    %edx,%ebx
08444043 +0x317:  mov    %eax,%esi
08444045 +0x319:  lea    -0x60(%ebp),%eax
08444048 +0x31c:  mov    %eax,(%esp)
0844404b +0x31f:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08444050 +0x324:  mov    %esi,%eax
08444052 +0x326:  mov    %ebx,%edx
08444054 +0x328:  mov    %eax,(%esp)
08444057 +0x32b:  call   08ae3750 <_Unwind_Resume>
0844405c +0x330:  mov    %ebx,%eax
0844405e +0x332:  add    $0x70,%esp
08444061 +0x335:  pop    %ebx
08444062 +0x336:  pop    %esi
08444063 +0x337:  pop    %ebp
08444064 +0x338:  ret
08444065 +0x339:  nop
```

## 反编译 C

```c
// DB_LoadMileage::dispatch @ 0x8443d2c

/* DB_LoadMileage::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_LoadMileage::dispatch(DB_LoadMileage *this,int param_1,int param_2,Stream *param_3)

{
  undefined4 uVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  undefined4 uVar4;
  CStreamGuard local_64 [8];
  cMyTrace local_5c [16];
  cMyTrace local_4c [16];
  cMyTrace local_3c [16];
  cMyTrace local_2c [16];
  SIG_MILEAGE_STRUCT *local_1c;
  MySQL *local_18;
  char local_11;
  int local_10;
  
  local_1c = Stream::GetOutBuffer<SIG_MILEAGE_STRUCT>(param_3);
  if (local_1c == (SIG_MILEAGE_STRUCT *)0x0) {
    uVar4 = 0;
  }
  else {
    local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
    if (local_18 == (MySQL *)0x0) {
      cMyTrace::cMyTrace(local_5c,"virtual bool DB_LoadMileage::dispatch(int, int, Stream*)",0xa7ae,
                         5);
      cMyTrace::operator()(local_5c,"[ERROR] Database Handle is NULL [index:%d]",1);
      uVar4 = 0;
    }
    else {
      MySQL::set_query(local_18,"seLect miles from member_miles where m_id = %u",
                       *(undefined4 *)local_1c);
      local_11 = MySQL::exec(local_18,true);
      if (local_11 == '\x01') {
        local_10 = MySQL::get_n_rows(local_18);
        if (local_10 == 0) {
          MySQL::set_query(local_18,
                           "inSert into member_miles (m_id, miles, daily_miles) values (%u, 0, 0)",
                           *(undefined4 *)local_1c);
          MySQL::exec(local_18,true);
          *(undefined4 *)(local_1c + 8) = 0;
        }
        else {
          local_11 = MySQL::fetch(local_18);
          if (local_11 != '\x01') {
            uVar4 = *(undefined4 *)(local_1c + 4);
            uVar1 = *(undefined4 *)local_1c;
            cMyTrace::cMyTrace(local_3c,"virtual bool DB_LoadMileage::dispatch(int, int, Stream*)",
                               0xa7cb,5);
            cMyTrace::operator()(local_3c,"[ERROR] Fetch [m_id:%u][charac_no:%u]",uVar1,uVar4);
            return 0;
          }
          local_11 = MySQL::get_int(local_18,0,(int *)(local_1c + 8));
          if (local_11 != '\x01') {
            uVar4 = *(undefined4 *)(local_1c + 4);
            uVar1 = *(undefined4 *)local_1c;
            cMyTrace::cMyTrace(local_2c,"virtual bool DB_LoadMileage::dispatch(int, int, Stream*)",
                               0xa7d2,5);
            cMyTrace::operator()(local_2c,"[ERROR] Mileage [m_id:%u][charac_no:%u]",uVar1,uVar4);
            return 0;
          }
        }
        pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xa7d8);
        CStreamGuard::CStreamGuard(local_64,pSVar2,true);
        pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_64);
                    /* try { // try from 08443fd5 to 08444031 has its CatchHandler @ 08444041 */
        CStreamGuard::operator<<(pCVar3,param_1);
        pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_64);
        CStreamGuard::operator<<(pCVar3,param_2);
        pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_64);
        CStreamGuard::put_binary(pCVar3,local_1c,0xc);
        uVar4 = MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_64);
        CStreamGuard::~CStreamGuard(local_64);
      }
      else {
        uVar4 = *(undefined4 *)(local_1c + 4);
        uVar1 = *(undefined4 *)local_1c;
        cMyTrace::cMyTrace(local_4c,"virtual bool DB_LoadMileage::dispatch(int, int, Stream*)",
                           0xa7b6,5);
        cMyTrace::operator()(local_4c,"[ERROR] Exec [m_id:%u][charac_no:%u]",uVar1,uVar4);
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}
```
