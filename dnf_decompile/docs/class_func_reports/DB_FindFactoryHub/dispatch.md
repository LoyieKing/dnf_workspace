# dispatch

`_ZN17DB_FindFactoryHub8dispatchEiiP6Stream`

`DB_FindFactoryHub::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_FindFactoryHub` | `0x08436ba0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08436ba0  _ZN17DB_FindFactoryHub8dispatchEiiP6Stream
#           DB_FindFactoryHub::dispatch(int, int, Stream*)
# range [0x08436ba0, 0x08436deb]
08436ba0 +0x000:  push   %ebp
08436ba1 +0x001:  mov    %esp,%ebp
08436ba3 +0x003:  push   %edi
08436ba4 +0x004:  push   %esi
08436ba5 +0x005:  push   %ebx
08436ba6 +0x006:  sub    $0x7c,%esp
08436ba9 +0x009:  mov    0x14(%ebp),%eax
08436bac +0x00c:  mov    %eax,(%esp)
08436baf +0x00f:  call   084533ec <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6002>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6002
08436bb4 +0x014:  mov    %eax,-0x24(%ebp)
08436bb7 +0x017:  movl   $0x0,-0x28(%ebp)
08436bbe +0x01e:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08436bc3 +0x023:  movl   $0x0,0x8(%esp)
08436bcb +0x02b:  movl   $0x2,0x4(%esp)
08436bd3 +0x033:  mov    %eax,(%esp)
08436bd6 +0x036:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08436bdb +0x03b:  mov    %eax,-0x20(%ebp)
08436bde +0x03e:  lea    -0x6b(%ebp),%edx
08436be1 +0x041:  mov    $0x3b,%ebx
08436be6 +0x046:  mov    $0x0,%eax
08436beb +0x04b:  mov    %edx,%ecx
08436bed +0x04d:  and    $0x1,%ecx
08436bf0 +0x050:  test   %ecx,%ecx
08436bf2 +0x052:  je     08436bfc <+0x5c>
08436bf4 +0x054:  mov    %al,(%edx)
08436bf6 +0x056:  add    $0x1,%edx
08436bf9 +0x059:  sub    $0x1,%ebx
08436bfc +0x05c:  mov    %edx,%ecx
08436bfe +0x05e:  and    $0x2,%ecx
08436c01 +0x061:  test   %ecx,%ecx
08436c03 +0x063:  je     08436c0e <+0x6e>
08436c05 +0x065:  mov    %ax,(%edx)
08436c08 +0x068:  add    $0x2,%edx
08436c0b +0x06b:  sub    $0x2,%ebx
08436c0e +0x06e:  mov    %ebx,%ecx
08436c10 +0x070:  shr    $0x2,%ecx
08436c13 +0x073:  mov    %edx,%edi
08436c15 +0x075:  rep stos %eax,%es:(%edi)
08436c17 +0x077:  mov    %edi,%edx
08436c19 +0x079:  mov    %ebx,%ecx
08436c1b +0x07b:  and    $0x2,%ecx
08436c1e +0x07e:  test   %ecx,%ecx
08436c20 +0x080:  je     08436c28 <+0x88>
08436c22 +0x082:  mov    %ax,(%edx)
08436c25 +0x085:  add    $0x2,%edx
08436c28 +0x088:  mov    %ebx,%ecx
08436c2a +0x08a:  and    $0x1,%ecx
08436c2d +0x08d:  test   %ecx,%ecx
08436c2f +0x08f:  je     08436c36 <+0x96>
08436c31 +0x091:  mov    %al,(%edx)
08436c33 +0x093:  add    $0x1,%edx
08436c36 +0x096:  mov    -0x24(%ebp),%eax
08436c39 +0x099:  add    $0x4,%eax
08436c3c +0x09c:  mov    %eax,0x8(%esp)
08436c40 +0x0a0:  lea    -0x6b(%ebp),%eax
08436c43 +0x0a3:  mov    %eax,0x4(%esp)
08436c47 +0x0a7:  mov    -0x20(%ebp),%eax
08436c4a +0x0aa:  mov    %eax,(%esp)
08436c4d +0x0ad:  call   083f48aa <_ZN5MySQL13escape_stringEPcPKc>  ; MySQL::escape_string(char*, char const*)
08436c52 +0x0b2:  lea    -0x6b(%ebp),%eax
08436c55 +0x0b5:  mov    %eax,0x8(%esp)
08436c59 +0x0b9:  movl   $"seLect m_id from charac_info where charac_name='%s' limit 1",0x4(%esp)
08436c61 +0x0c1:  mov    -0x20(%ebp),%eax
08436c64 +0x0c4:  mov    %eax,(%esp)
08436c67 +0x0c7:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08436c6c +0x0cc:  movl   $0x1,0x4(%esp)
08436c74 +0x0d4:  mov    -0x20(%ebp),%eax
08436c77 +0x0d7:  mov    %eax,(%esp)
08436c7a +0x0da:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08436c7f +0x0df:  xor    $0x1,%eax
08436c82 +0x0e2:  test   %al,%al
08436c84 +0x0e4:  je     08436c90 <+0xf0>
08436c86 +0x0e6:  mov    $0x0,%eax
08436c8b +0x0eb:  jmp    08436de4 <+0x244>
08436c90 +0x0f0:  mov    -0x20(%ebp),%eax
08436c93 +0x0f3:  mov    %eax,(%esp)
08436c96 +0x0f6:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08436c9b +0x0fb:  xor    $0x1,%eax
08436c9e +0x0fe:  test   %al,%al
08436ca0 +0x100:  je     08436cac <+0x10c>
08436ca2 +0x102:  mov    $0x0,%eax
08436ca7 +0x107:  jmp    08436de4 <+0x244>
08436cac +0x10c:  lea    -0x28(%ebp),%eax
08436caf +0x10f:  mov    %eax,0x8(%esp)
08436cb3 +0x113:  movl   $0x0,0x4(%esp)
08436cbb +0x11b:  mov    -0x20(%ebp),%eax
08436cbe +0x11e:  mov    %eax,(%esp)
08436cc1 +0x121:  call   080e22ae <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x54>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x54
08436cc6 +0x126:  xor    $0x1,%eax
08436cc9 +0x129:  test   %al,%al
08436ccb +0x12b:  je     08436cd7 <+0x137>
08436ccd +0x12d:  mov    $0x0,%eax
08436cd2 +0x132:  jmp    08436de4 <+0x244>
08436cd7 +0x137:  mov    -0x24(%ebp),%eax
08436cda +0x13a:  mov    (%eax),%edx
08436cdc +0x13c:  mov    -0x28(%ebp),%eax
08436cdf +0x13f:  cmp    %eax,%edx
08436ce1 +0x141:  je     08436ddf <+0x23f>
08436ce7 +0x147:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08436cec +0x14c:  movl   $0x8253,0x8(%esp)
08436cf4 +0x154:  movl   $"DBThread.cpp",0x4(%esp)
08436cfc +0x15c:  mov    %eax,(%esp)
08436cff +0x15f:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08436d04 +0x164:  movl   $0x1,0x8(%esp)
08436d0c +0x16c:  mov    %eax,0x4(%esp)
08436d10 +0x170:  lea    -0x30(%ebp),%eax
08436d13 +0x173:  mov    %eax,(%esp)
08436d16 +0x176:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08436d1b +0x17b:  lea    -0x30(%ebp),%eax
08436d1e +0x17e:  mov    %eax,(%esp)
08436d21 +0x181:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08436d26 +0x186:  movl   $0x18a,0x4(%esp)
08436d2e +0x18e:  mov    %eax,(%esp)
08436d31 +0x191:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08436d36 +0x196:  lea    -0x30(%ebp),%eax
08436d39 +0x199:  mov    %eax,(%esp)
08436d3c +0x19c:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08436d41 +0x1a1:  mov    0x10(%ebp),%edx
08436d44 +0x1a4:  mov    %edx,0x4(%esp)
08436d48 +0x1a8:  mov    %eax,(%esp)
08436d4b +0x1ab:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08436d50 +0x1b0:  lea    -0x30(%ebp),%eax
08436d53 +0x1b3:  mov    %eax,(%esp)
08436d56 +0x1b6:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08436d5b +0x1bb:  mov    %eax,(%esp)
08436d5e +0x1be:  call   08453440 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6056>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6056
08436d63 +0x1c3:  mov    %eax,-0x1c(%ebp)
08436d66 +0x1c6:  mov    -0x24(%ebp),%eax
08436d69 +0x1c9:  movzbl 0x21(%eax),%edx
08436d6d +0x1cd:  mov    -0x1c(%ebp),%eax
08436d70 +0x1d0:  mov    %dl,0x4(%eax)
08436d73 +0x1d3:  mov    -0x28(%ebp),%edx
08436d76 +0x1d6:  mov    -0x1c(%ebp),%eax
08436d79 +0x1d9:  mov    %edx,(%eax)
08436d7b +0x1db:  mov    -0x24(%ebp),%eax
08436d7e +0x1de:  lea    0x4(%eax),%edx
08436d81 +0x1e1:  mov    -0x1c(%ebp),%eax
08436d84 +0x1e4:  add    $0x5,%eax
08436d87 +0x1e7:  movl   $0x1d,0x8(%esp)
08436d8f +0x1ef:  mov    %edx,0x4(%esp)
08436d93 +0x1f3:  mov    %eax,(%esp)
08436d96 +0x1f6:  call   0807d8d0 <_init+0x1c8>
08436d9b +0x1fb:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08436da0 +0x200:  lea    -0x30(%ebp),%edx
08436da3 +0x203:  mov    %edx,0x8(%esp)
08436da7 +0x207:  movl   $0x1,0x4(%esp)
08436daf +0x20f:  mov    %eax,(%esp)
08436db2 +0x212:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08436db7 +0x217:  jmp    08436dd4 <+0x234>
08436db9 +0x219:  mov    %edx,%ebx
08436dbb +0x21b:  mov    %eax,%esi
08436dbd +0x21d:  lea    -0x30(%ebp),%eax
08436dc0 +0x220:  mov    %eax,(%esp)
08436dc3 +0x223:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08436dc8 +0x228:  mov    %esi,%eax
08436dca +0x22a:  mov    %ebx,%edx
08436dcc +0x22c:  mov    %eax,(%esp)
08436dcf +0x22f:  call   08ae3750 <_Unwind_Resume>
08436dd4 +0x234:  lea    -0x30(%ebp),%eax
08436dd7 +0x237:  mov    %eax,(%esp)
08436dda +0x23a:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08436ddf +0x23f:  mov    $0x1,%eax
08436de4 +0x244:  add    $0x7c,%esp
08436de7 +0x247:  pop    %ebx
08436de8 +0x248:  pop    %esi
08436de9 +0x249:  pop    %edi
08436dea +0x24a:  pop    %ebp
08436deb +0x24b:  ret
```

## 反编译 C

```c
// DB_FindFactoryHub::dispatch @ 0x8436ba0

/* DB_FindFactoryHub::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_FindFactoryHub::dispatch(DB_FindFactoryHub *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  bool bVar8;
  byte bVar9;
  char local_6f;
  char local_6e [58];
  CStreamGuard local_34 [8];
  uint local_2c;
  SIG_FIND_FACTORY_HUB *local_28;
  MySQL *local_24;
  SIG_FIND_FACTORY_HUB_FATIGUE_CHECK *local_20;
  
  bVar9 = 0;
  local_28 = Stream::GetOutBuffer<SIG_FIND_FACTORY_HUB>(param_3);
  local_2c = 0;
  local_24 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  pcVar6 = &local_6f;
  uVar7 = 0x3b;
  bVar8 = ((uint)pcVar6 & 1) != 0;
  if (bVar8) {
    local_6f = '\0';
    pcVar6 = local_6e;
    uVar7 = 0x3a;
  }
  if (((uint)pcVar6 & 2) != 0) {
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6 = pcVar6 + 2;
    uVar7 = uVar7 - 2;
  }
  for (uVar5 = uVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6[2] = '\0';
    pcVar6[3] = '\0';
    pcVar6 = pcVar6 + ((uint)bVar9 * -2 + 1) * 4;
  }
  if ((uVar7 & 2) != 0) {
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6 = pcVar6 + 2;
  }
  if (!bVar8) {
    *pcVar6 = '\0';
  }
  MySQL::escape_string(local_24,&local_6f,(char *)(local_28 + 4));
  MySQL::set_query(local_24,"seLect m_id from charac_info where charac_name=\'%s\' limit 1",
                   &local_6f);
  cVar1 = MySQL::exec(local_24,true);
  if (cVar1 == '\x01') {
    cVar1 = MySQL::fetch(local_24);
    if (cVar1 == '\x01') {
      cVar1 = MySQL::get_int(local_24,0,&local_2c);
      if (cVar1 == '\x01') {
        if (*(uint *)local_28 != local_2c) {
          pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x8253);
          CStreamGuard::CStreamGuard(local_34,pSVar3,true);
          pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_34);
                    /* try { // try from 08436d31 to 08436db6 has its CatchHandler @ 08436db9 */
          CStreamGuard::operator<<(pCVar4,0x18a);
          pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_34);
          CStreamGuard::operator<<(pCVar4,param_2);
          pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_34);
          local_20 = CStreamGuard::GetInBuffer<SIG_FIND_FACTORY_HUB_FATIGUE_CHECK>(pCVar4);
          *(SIG_FIND_FACTORY_HUB *)(local_20 + 4) = local_28[0x21];
          *(uint *)local_20 = local_2c;
          strncpy((char *)(local_20 + 5),(char *)(local_28 + 4),0x1d);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_34);
          CStreamGuard::~CStreamGuard(local_34);
        }
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
