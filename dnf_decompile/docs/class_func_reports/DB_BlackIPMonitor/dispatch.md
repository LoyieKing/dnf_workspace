# dispatch

`_ZN17DB_BlackIPMonitor8dispatchEiiP6Stream`

`DB_BlackIPMonitor::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_BlackIPMonitor` | `0x08432ad2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08432ad2  _ZN17DB_BlackIPMonitor8dispatchEiiP6Stream
#           DB_BlackIPMonitor::dispatch(int, int, Stream*)
# range [0x08432ad2, 0x08432e7f]
08432ad2 +0x000:  push   %ebp
08432ad3 +0x001:  mov    %esp,%ebp
08432ad5 +0x003:  push   %esi
08432ad6 +0x004:  push   %ebx
08432ad7 +0x005:  sub    $0xcc0,%esp
08432add +0x00b:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08432ae2 +0x010:  movl   $0x0,0x8(%esp)
08432aea +0x018:  movl   $0x6,0x4(%esp)
08432af2 +0x020:  mov    %eax,(%esp)
08432af5 +0x023:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08432afa +0x028:  mov    %eax,-0x1c(%ebp)
08432afd +0x02b:  movl   $"seLect ip, type, m_id_cnt, unix_timestamp(start_time), unix_timestamp(end_time) from ip_monitor_punish ORDER BY start_time ASC",0x4(%esp)
08432b05 +0x033:  mov    -0x1c(%ebp),%eax
08432b08 +0x036:  mov    %eax,(%esp)
08432b0b +0x039:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08432b10 +0x03e:  movl   $0x1,0x4(%esp)
08432b18 +0x046:  mov    -0x1c(%ebp),%eax
08432b1b +0x049:  mov    %eax,(%esp)
08432b1e +0x04c:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08432b23 +0x051:  xor    $0x1,%eax
08432b26 +0x054:  test   %al,%al
08432b28 +0x056:  je     08432b34 <+0x62>
08432b2a +0x058:  mov    $0x0,%eax
08432b2f +0x05d:  jmp    08432e75 <+0x3a3>
08432b34 +0x062:  mov    -0x1c(%ebp),%eax
08432b37 +0x065:  mov    %eax,(%esp)
08432b3a +0x068:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08432b3f +0x06d:  mov    %eax,%ebx
08432b41 +0x06f:  movl   $0x0,0xc(%esp)
08432b49 +0x077:  movl   $0x7a03,0x8(%esp)
08432b51 +0x07f:  movl   $&_ZZN17DB_BlackIPMonitor8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
08432b59 +0x087:  lea    -0x2c(%ebp),%eax
08432b5c +0x08a:  mov    %eax,(%esp)
08432b5f +0x08d:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08432b64 +0x092:  mov    %ebx,0x8(%esp)
08432b68 +0x096:  movl   $"BLACKIP GET DB ROWS COUNT : %d",0x4(%esp)
08432b70 +0x09e:  lea    -0x2c(%ebp),%eax
08432b73 +0x0a1:  mov    %eax,(%esp)
08432b76 +0x0a4:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08432b7b +0x0a9:  movl   $0x0,-0x18(%ebp)
08432b82 +0x0b0:  movl   $0x0,-0x14(%ebp)
08432b89 +0x0b7:  movb   $0x0,-0xd(%ebp)
08432b8d +0x0bb:  movl   $0x0,-0x18(%ebp)
08432b94 +0x0c2:  jmp    08432e57 <+0x385>
08432b99 +0x0c7:  mov    -0x1c(%ebp),%eax
08432b9c +0x0ca:  mov    %eax,(%esp)
08432b9f +0x0cd:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08432ba4 +0x0d2:  xor    $0x1,%eax
08432ba7 +0x0d5:  test   %al,%al
08432ba9 +0x0d7:  je     08432bb5 <+0xe3>
08432bab +0x0d9:  mov    $0x0,%eax
08432bb0 +0x0de:  jmp    08432e75 <+0x3a3>
08432bb5 +0x0e3:  cmpl   $0x0,-0x14(%ebp)
08432bb9 +0x0e7:  jne    08432bd9 <+0x107>
08432bbb +0x0e9:  movl   $0xc80,0x8(%esp)
08432bc3 +0x0f1:  movl   $0x0,0x4(%esp)
08432bcb +0x0f9:  lea    -0xcb4(%ebp),%eax
08432bd1 +0x0ff:  mov    %eax,(%esp)
08432bd4 +0x102:  call   0807dcc0 <_init+0x5b8>
08432bd9 +0x107:  mov    -0x14(%ebp),%edx
08432bdc +0x10a:  lea    -0xcb4(%ebp),%eax
08432be2 +0x110:  shl    $0x5,%edx
08432be5 +0x113:  add    %edx,%eax
08432be7 +0x115:  movl   $0x10,0xc(%esp)
08432bef +0x11d:  mov    %eax,0x8(%esp)
08432bf3 +0x121:  movl   $0x0,0x4(%esp)
08432bfb +0x129:  mov    -0x1c(%ebp),%eax
08432bfe +0x12c:  mov    %eax,(%esp)
08432c01 +0x12f:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
08432c06 +0x134:  xor    $0x1,%eax
08432c09 +0x137:  test   %al,%al
08432c0b +0x139:  je     08432c17 <+0x145>
08432c0d +0x13b:  mov    $0x0,%eax
08432c12 +0x140:  jmp    08432e75 <+0x3a3>
08432c17 +0x145:  mov    -0x14(%ebp),%edx
08432c1a +0x148:  lea    -0xcb4(%ebp),%eax
08432c20 +0x14e:  add    %edx,%edx
08432c22 +0x150:  add    $0x1,%edx
08432c25 +0x153:  shl    $0x4,%edx
08432c28 +0x156:  add    %edx,%eax
08432c2a +0x158:  mov    %eax,0x8(%esp)
08432c2e +0x15c:  movl   $0x1,0x4(%esp)
08432c36 +0x164:  mov    -0x1c(%ebp),%eax
08432c39 +0x167:  mov    %eax,(%esp)
08432c3c +0x16a:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08432c41 +0x16f:  xor    $0x1,%eax
08432c44 +0x172:  test   %al,%al
08432c46 +0x174:  je     08432c52 <+0x180>
08432c48 +0x176:  mov    $0x0,%eax
08432c4d +0x17b:  jmp    08432e75 <+0x3a3>
08432c52 +0x180:  mov    -0x14(%ebp),%edx
08432c55 +0x183:  lea    -0xcb4(%ebp),%eax
08432c5b +0x189:  add    %edx,%edx
08432c5d +0x18b:  add    $0x1,%edx
08432c60 +0x18e:  shl    $0x4,%edx
08432c63 +0x191:  add    %edx,%eax
08432c65 +0x193:  add    $0x4,%eax
08432c68 +0x196:  mov    %eax,0x8(%esp)
08432c6c +0x19a:  movl   $0x2,0x4(%esp)
08432c74 +0x1a2:  mov    -0x1c(%ebp),%eax
08432c77 +0x1a5:  mov    %eax,(%esp)
08432c7a +0x1a8:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
08432c7f +0x1ad:  xor    $0x1,%eax
08432c82 +0x1b0:  test   %al,%al
08432c84 +0x1b2:  je     08432c90 <+0x1be>
08432c86 +0x1b4:  mov    $0x0,%eax
08432c8b +0x1b9:  jmp    08432e75 <+0x3a3>
08432c90 +0x1be:  mov    -0x14(%ebp),%edx
08432c93 +0x1c1:  lea    -0xcb4(%ebp),%eax
08432c99 +0x1c7:  add    %edx,%edx
08432c9b +0x1c9:  add    $0x1,%edx
08432c9e +0x1cc:  shl    $0x4,%edx
08432ca1 +0x1cf:  add    %edx,%eax
08432ca3 +0x1d1:  add    $0x8,%eax
08432ca6 +0x1d4:  mov    %eax,0x8(%esp)
08432caa +0x1d8:  movl   $0x3,0x4(%esp)
08432cb2 +0x1e0:  mov    -0x1c(%ebp),%eax
08432cb5 +0x1e3:  mov    %eax,(%esp)
08432cb8 +0x1e6:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
08432cbd +0x1eb:  xor    $0x1,%eax
08432cc0 +0x1ee:  test   %al,%al
08432cc2 +0x1f0:  je     08432cce <+0x1fc>
08432cc4 +0x1f2:  mov    $0x0,%eax
08432cc9 +0x1f7:  jmp    08432e75 <+0x3a3>
08432cce +0x1fc:  mov    -0x14(%ebp),%edx
08432cd1 +0x1ff:  lea    -0xcb4(%ebp),%eax
08432cd7 +0x205:  add    %edx,%edx
08432cd9 +0x207:  add    $0x1,%edx
08432cdc +0x20a:  shl    $0x4,%edx
08432cdf +0x20d:  add    %edx,%eax
08432ce1 +0x20f:  add    $0xc,%eax
08432ce4 +0x212:  mov    %eax,0x8(%esp)
08432ce8 +0x216:  movl   $0x4,0x4(%esp)
08432cf0 +0x21e:  mov    -0x1c(%ebp),%eax
08432cf3 +0x221:  mov    %eax,(%esp)
08432cf6 +0x224:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
08432cfb +0x229:  xor    $0x1,%eax
08432cfe +0x22c:  test   %al,%al
08432d00 +0x22e:  je     08432d0c <+0x23a>
08432d02 +0x230:  mov    $0x0,%eax
08432d07 +0x235:  jmp    08432e75 <+0x3a3>
08432d0c +0x23a:  cmpl   $0x62,-0x14(%ebp)
08432d10 +0x23e:  ja     08432d33 <+0x261>
08432d12 +0x240:  mov    -0x1c(%ebp),%eax
08432d15 +0x243:  mov    %eax,(%esp)
08432d18 +0x246:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08432d1d +0x24b:  sub    $0x1,%eax
08432d20 +0x24e:  cmp    -0x18(%ebp),%eax
08432d23 +0x251:  seta   %al
08432d26 +0x254:  test   %al,%al
08432d28 +0x256:  je     08432d33 <+0x261>
08432d2a +0x258:  addl   $0x1,-0x14(%ebp)
08432d2e +0x25c:  jmp    08432e53 <+0x381>
08432d33 +0x261:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08432d38 +0x266:  movl   $0x7a28,0x8(%esp)
08432d40 +0x26e:  movl   $"DBThread.cpp",0x4(%esp)
08432d48 +0x276:  mov    %eax,(%esp)
08432d4b +0x279:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08432d50 +0x27e:  movl   $0x1,0x8(%esp)
08432d58 +0x286:  mov    %eax,0x4(%esp)
08432d5c +0x28a:  lea    -0x34(%ebp),%eax
08432d5f +0x28d:  mov    %eax,(%esp)
08432d62 +0x290:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08432d67 +0x295:  lea    -0x34(%ebp),%eax
08432d6a +0x298:  mov    %eax,(%esp)
08432d6d +0x29b:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08432d72 +0x2a0:  movl   $0x156,0x4(%esp)
08432d7a +0x2a8:  mov    %eax,(%esp)
08432d7d +0x2ab:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08432d82 +0x2b0:  lea    -0x34(%ebp),%eax
08432d85 +0x2b3:  mov    %eax,(%esp)
08432d88 +0x2b6:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08432d8d +0x2bb:  movl   $0xffffffff,0x4(%esp)
08432d95 +0x2c3:  mov    %eax,(%esp)
08432d98 +0x2c6:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08432d9d +0x2cb:  lea    -0x34(%ebp),%eax
08432da0 +0x2ce:  mov    %eax,(%esp)
08432da3 +0x2d1:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08432da8 +0x2d6:  mov    %eax,(%esp)
08432dab +0x2d9:  call   08453048 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x5c5e>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x5c5e
08432db0 +0x2de:  mov    %eax,-0xc(%ebp)
08432db3 +0x2e1:  mov    -0x14(%ebp),%eax
08432db6 +0x2e4:  add    $0x1,%eax
08432db9 +0x2e7:  mov    %eax,%edx
08432dbb +0x2e9:  mov    -0xc(%ebp),%eax
08432dbe +0x2ec:  mov    %edx,(%eax)
08432dc0 +0x2ee:  mov    -0xc(%ebp),%eax
08432dc3 +0x2f1:  lea    0x4(%eax),%edx
08432dc6 +0x2f4:  movl   $0xc80,0x8(%esp)
08432dce +0x2fc:  lea    -0xcb4(%ebp),%eax
08432dd4 +0x302:  mov    %eax,0x4(%esp)
08432dd8 +0x306:  mov    %edx,(%esp)
08432ddb +0x309:  call   0807d8a0 <_init+0x198>
08432de0 +0x30e:  movzbl -0xd(%ebp),%eax
08432de4 +0x312:  xor    $0x1,%eax
08432de7 +0x315:  test   %al,%al
08432de9 +0x317:  je     08432dfe <+0x32c>
08432deb +0x319:  movb   $0x1,-0xd(%ebp)
08432def +0x31d:  mov    -0xc(%ebp),%eax
08432df2 +0x320:  movzbl -0xd(%ebp),%edx
08432df6 +0x324:  mov    %dl,0xc84(%eax)
08432dfc +0x32a:  jmp    08432e08 <+0x336>
08432dfe +0x32c:  mov    -0xc(%ebp),%eax
08432e01 +0x32f:  movb   $0x0,0xc84(%eax)
08432e08 +0x336:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08432e0d +0x33b:  lea    -0x34(%ebp),%edx
08432e10 +0x33e:  mov    %edx,0x8(%esp)
08432e14 +0x342:  movl   $0x1,0x4(%esp)
08432e1c +0x34a:  mov    %eax,(%esp)
08432e1f +0x34d:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08432e24 +0x352:  movl   $0x0,-0x14(%ebp)
08432e2b +0x359:  lea    -0x34(%ebp),%eax
08432e2e +0x35c:  mov    %eax,(%esp)
08432e31 +0x35f:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08432e36 +0x364:  jmp    08432e53 <+0x381>
08432e38 +0x366:  mov    %edx,%ebx
08432e3a +0x368:  mov    %eax,%esi
08432e3c +0x36a:  lea    -0x34(%ebp),%eax
08432e3f +0x36d:  mov    %eax,(%esp)
08432e42 +0x370:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08432e47 +0x375:  mov    %esi,%eax
08432e49 +0x377:  mov    %ebx,%edx
08432e4b +0x379:  mov    %eax,(%esp)
08432e4e +0x37c:  call   08ae3750 <_Unwind_Resume>
08432e53 +0x381:  addl   $0x1,-0x18(%ebp)
08432e57 +0x385:  mov    -0x1c(%ebp),%eax
08432e5a +0x388:  mov    %eax,(%esp)
08432e5d +0x38b:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08432e62 +0x390:  cmp    -0x18(%ebp),%eax
08432e65 +0x393:  seta   %al
08432e68 +0x396:  test   %al,%al
08432e6a +0x398:  jne    08432b99 <+0xc7>
08432e70 +0x39e:  mov    $0x1,%eax
08432e75 +0x3a3:  add    $0xcc0,%esp
08432e7b +0x3a9:  pop    %ebx
08432e7c +0x3aa:  pop    %esi
08432e7d +0x3ab:  pop    %ebp
08432e7e +0x3ac:  ret
08432e7f +0x3ad:  nop
```

## 反编译 C

```c
// DB_BlackIPMonitor::dispatch @ 0x8432ad2

/* DB_BlackIPMonitor::dispatch(int, int, Stream*) */

undefined4 DB_BlackIPMonitor::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  Stream *pSVar4;
  CStreamGuard *pCVar5;
  uint uVar6;
  uint local_cb8 [800];
  CStreamGuard local_38 [8];
  cMyTrace local_30 [16];
  MySQL *local_20;
  uint local_1c;
  uint local_18;
  char local_11;
  SIG_IP_MONITOR_PUNISH *local_10;
  
  local_20 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  MySQL::set_query(local_20,
                   "seLect ip, type, m_id_cnt, unix_timestamp(start_time), unix_timestamp(end_time) from ip_monitor_punish ORDER BY start_time ASC"
                  );
  cVar1 = MySQL::exec(local_20,true);
  if (cVar1 == '\x01') {
    uVar2 = MySQL::get_n_rows(local_20);
    cMyTrace::cMyTrace(local_30,"virtual bool DB_BlackIPMonitor::dispatch(int, int, Stream*)",0x7a03
                       ,0);
    cMyTrace::operator()(local_30,"BLACKIP GET DB ROWS COUNT : %d",uVar2);
    local_18 = 0;
    local_11 = '\0';
    local_1c = 0;
    while (uVar6 = MySQL::get_n_rows(local_20), local_1c < uVar6) {
      cVar1 = MySQL::fetch(local_20);
      if (cVar1 != '\x01') {
        return 0;
      }
      if (local_18 == 0) {
        memset(local_cb8,0,0xc80);
      }
      cVar1 = MySQL::get_str(local_20,0,(char *)(local_cb8 + local_18 * 8),0x10);
      if (cVar1 != '\x01') {
        return 0;
      }
      cVar1 = MySQL::get_int(local_20,1,(int *)(local_cb8 + (local_18 * 2 + 1) * 4));
      if (cVar1 != '\x01') {
        return 0;
      }
      cVar1 = MySQL::get_uint(local_20,2,local_cb8 + (local_18 * 2 + 1) * 4 + 1);
      if (cVar1 != '\x01') {
        return 0;
      }
      cVar1 = MySQL::get_uint(local_20,3,local_cb8 + (local_18 * 2 + 1) * 4 + 2);
      if (cVar1 != '\x01') {
        return 0;
      }
      cVar1 = MySQL::get_uint(local_20,4,local_cb8 + (local_18 * 2 + 1) * 4 + 3);
      if (cVar1 != '\x01') {
        return 0;
      }
      if ((local_18 < 99) && (iVar3 = MySQL::get_n_rows(local_20), local_1c < iVar3 - 1U)) {
        local_18 = local_18 + 1;
      }
      else {
        pSVar4 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x7a28);
        CStreamGuard::CStreamGuard(local_38,pSVar4,true);
        pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_38);
                    /* try { // try from 08432d7d to 08432e23 has its CatchHandler @ 08432e38 */
        CStreamGuard::operator<<(pCVar5,0x156);
        pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_38);
        CStreamGuard::operator<<(pCVar5,-1);
        pCVar5 = (CStreamGuard *)CStreamGuard::operator->(local_38);
        local_10 = CStreamGuard::GetInBuffer<SIG_IP_MONITOR_PUNISH>(pCVar5);
        *(uint *)local_10 = local_18 + 1;
        memcpy(local_10 + 4,local_cb8,0xc80);
        if (local_11 == '\x01') {
          local_10[0xc84] = (SIG_IP_MONITOR_PUNISH)0x0;
        }
        else {
          local_11 = '\x01';
          local_10[0xc84] = (SIG_IP_MONITOR_PUNISH)0x1;
        }
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_38);
        local_18 = 0;
        CStreamGuard::~CStreamGuard(local_38);
      }
      local_1c = local_1c + 1;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
