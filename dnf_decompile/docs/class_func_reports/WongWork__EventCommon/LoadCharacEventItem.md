# LoadCharacEventItem

`_ZN8WongWork11EventCommon19LoadCharacEventItemEjjj`

`WongWork::EventCommon::LoadCharacEventItem(unsigned int, unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `WongWork::EventCommon` | `0x083f9c7b` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083f9c7b  _ZN8WongWork11EventCommon19LoadCharacEventItemEjjj
#           WongWork::EventCommon::LoadCharacEventItem(unsigned int, unsigned int, unsigned int)
# range [0x083f9c7b, 0x083f9f2d]
083f9c7b +0x000:  push   %ebp
083f9c7c +0x001:  mov    %esp,%ebp
083f9c7e +0x003:  push   %esi
083f9c7f +0x004:  push   %ebx
083f9c80 +0x005:  sub    $0x40,%esp
083f9c83 +0x008:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
083f9c88 +0x00d:  movl   $0x0,0x8(%esp)
083f9c90 +0x015:  movl   $0x3,0x4(%esp)
083f9c98 +0x01d:  mov    %eax,(%esp)
083f9c9b +0x020:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
083f9ca0 +0x025:  mov    %eax,-0x18(%ebp)
083f9ca3 +0x028:  cmpl   $0x0,0x10(%ebp)
083f9ca7 +0x02c:  jne    083f9ccd <+0x52>
083f9ca9 +0x02e:  movl   $0x5,0xc(%esp)
083f9cb1 +0x036:  mov    0xc(%ebp),%eax
083f9cb4 +0x039:  mov    %eax,0x8(%esp)
083f9cb8 +0x03d:  movl   $"seLect id,it_id,stack_count,event_code from charac_event_items where charac_no=%d and delete_flag=0 limit %d",0x4(%esp)
083f9cc0 +0x045:  mov    -0x18(%ebp),%eax
083f9cc3 +0x048:  mov    %eax,(%esp)
083f9cc6 +0x04b:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
083f9ccb +0x050:  jmp    083f9cfe <+0x83>
083f9ccd +0x052:  movl   $0x0,0x4(%esp)
083f9cd5 +0x05a:  mov    0x10(%ebp),%eax
083f9cd8 +0x05d:  mov    %eax,(%esp)
083f9cdb +0x060:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
083f9ce0 +0x065:  mov    0xc(%ebp),%edx
083f9ce3 +0x068:  mov    %edx,0xc(%esp)
083f9ce7 +0x06c:  mov    %eax,0x8(%esp)
083f9ceb +0x070:  movl   $"seLect id,it_id,stack_count,event_code from charac_event_items where id=%s and charac_no=%d",0x4(%esp)
083f9cf3 +0x078:  mov    -0x18(%ebp),%eax
083f9cf6 +0x07b:  mov    %eax,(%esp)
083f9cf9 +0x07e:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
083f9cfe +0x083:  movl   $0x1,0x4(%esp)
083f9d06 +0x08b:  mov    -0x18(%ebp),%eax
083f9d09 +0x08e:  mov    %eax,(%esp)
083f9d0c +0x091:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
083f9d11 +0x096:  xor    $0x1,%eax
083f9d14 +0x099:  test   %al,%al
083f9d16 +0x09b:  je     083f9d5a <+0xdf>
083f9d18 +0x09d:  movl   $0x5,0xc(%esp)
083f9d20 +0x0a5:  movl   $0x37,0x8(%esp)
083f9d28 +0x0ad:  movl   $&_ZZN8WongWork11EventCommon19LoadCharacEventItemEjjjE19__PRETTY_FUNCTION__,0x4(%esp)
083f9d30 +0x0b5:  lea    -0x28(%ebp),%eax
083f9d33 +0x0b8:  mov    %eax,(%esp)
083f9d36 +0x0bb:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
083f9d3b +0x0c0:  mov    0xc(%ebp),%eax
083f9d3e +0x0c3:  mov    %eax,0x8(%esp)
083f9d42 +0x0c7:  movl   $"DB_LoadInventory::GetUserInven, exec ERROR charac_no=%u",0x4(%esp)
083f9d4a +0x0cf:  lea    -0x28(%ebp),%eax
083f9d4d +0x0d2:  mov    %eax,(%esp)
083f9d50 +0x0d5:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
083f9d55 +0x0da:  jmp    083f9f27 <+0x2ac>
083f9d5a +0x0df:  mov    -0x18(%ebp),%eax
083f9d5d +0x0e2:  mov    %eax,(%esp)
083f9d60 +0x0e5:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
083f9d65 +0x0ea:  test   %eax,%eax
083f9d67 +0x0ec:  sete   %al
083f9d6a +0x0ef:  test   %al,%al
083f9d6c +0x0f1:  jne    083f9f26 <+0x2ab>
083f9d72 +0x0f7:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
083f9d77 +0x0fc:  movl   $0x3e,0x8(%esp)
083f9d7f +0x104:  movl   $"DBEventWork.inl",0x4(%esp)
083f9d87 +0x10c:  mov    %eax,(%esp)
083f9d8a +0x10f:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
083f9d8f +0x114:  movl   $0x1,0x8(%esp)
083f9d97 +0x11c:  mov    %eax,0x4(%esp)
083f9d9b +0x120:  lea    -0x30(%ebp),%eax
083f9d9e +0x123:  mov    %eax,(%esp)
083f9da1 +0x126:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
083f9da6 +0x12b:  lea    -0x30(%ebp),%eax
083f9da9 +0x12e:  mov    %eax,(%esp)
083f9dac +0x131:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
083f9db1 +0x136:  movl   $0x4b,0x4(%esp)
083f9db9 +0x13e:  mov    %eax,(%esp)
083f9dbc +0x141:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
083f9dc1 +0x146:  lea    -0x30(%ebp),%eax
083f9dc4 +0x149:  mov    %eax,(%esp)
083f9dc7 +0x14c:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
083f9dcc +0x151:  movl   $0xffffffff,0x4(%esp)
083f9dd4 +0x159:  mov    %eax,(%esp)
083f9dd7 +0x15c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
083f9ddc +0x161:  lea    -0x30(%ebp),%eax
083f9ddf +0x164:  mov    %eax,(%esp)
083f9de2 +0x167:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
083f9de7 +0x16c:  mov    %eax,(%esp)
083f9dea +0x16f:  call   08450256 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2e6c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2e6c
083f9def +0x174:  mov    %eax,-0x14(%ebp)
083f9df2 +0x177:  mov    -0x14(%ebp),%eax
083f9df5 +0x17a:  mov    0x8(%ebp),%edx
083f9df8 +0x17d:  mov    %edx,(%eax)
083f9dfa +0x17f:  mov    -0x14(%ebp),%eax
083f9dfd +0x182:  mov    0xc(%ebp),%edx
083f9e00 +0x185:  mov    %edx,0x4(%eax)
083f9e03 +0x188:  mov    -0x18(%ebp),%eax
083f9e06 +0x18b:  mov    %eax,(%esp)
083f9e09 +0x18e:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
083f9e0e +0x193:  mov    %eax,-0x10(%ebp)
083f9e11 +0x196:  movl   $0x0,-0xc(%ebp)
083f9e18 +0x19d:  jmp    083f9ec3 <+0x248>
083f9e1d +0x1a2:  mov    -0x18(%ebp),%eax
083f9e20 +0x1a5:  mov    %eax,(%esp)
083f9e23 +0x1a8:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
083f9e28 +0x1ad:  xor    $0x1,%eax
083f9e2b +0x1b0:  test   %al,%al
083f9e2d +0x1b2:  jne    083f9ed6 <+0x25b>
083f9e33 +0x1b8:  mov    -0xc(%ebp),%eax
083f9e36 +0x1bb:  shl    $0x4,%eax
083f9e39 +0x1be:  add    -0x14(%ebp),%eax
083f9e3c +0x1c1:  add    $0xc,%eax
083f9e3f +0x1c4:  mov    %eax,0x8(%esp)
083f9e43 +0x1c8:  movl   $0x0,0x4(%esp)
083f9e4b +0x1d0:  mov    -0x18(%ebp),%eax
083f9e4e +0x1d3:  mov    %eax,(%esp)
083f9e51 +0x1d6:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
083f9e56 +0x1db:  mov    -0xc(%ebp),%eax
083f9e59 +0x1de:  shl    $0x4,%eax
083f9e5c +0x1e1:  add    -0x14(%ebp),%eax
083f9e5f +0x1e4:  add    $0x10,%eax
083f9e62 +0x1e7:  mov    %eax,0x8(%esp)
083f9e66 +0x1eb:  movl   $0x1,0x4(%esp)
083f9e6e +0x1f3:  mov    -0x18(%ebp),%eax
083f9e71 +0x1f6:  mov    %eax,(%esp)
083f9e74 +0x1f9:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
083f9e79 +0x1fe:  mov    -0xc(%ebp),%eax
083f9e7c +0x201:  shl    $0x4,%eax
083f9e7f +0x204:  add    -0x14(%ebp),%eax
083f9e82 +0x207:  add    $0x14,%eax
083f9e85 +0x20a:  mov    %eax,0x8(%esp)
083f9e89 +0x20e:  movl   $0x2,0x4(%esp)
083f9e91 +0x216:  mov    -0x18(%ebp),%eax
083f9e94 +0x219:  mov    %eax,(%esp)
083f9e97 +0x21c:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
083f9e9c +0x221:  mov    -0xc(%ebp),%eax
083f9e9f +0x224:  shl    $0x4,%eax
083f9ea2 +0x227:  add    -0x14(%ebp),%eax
083f9ea5 +0x22a:  add    $0x18,%eax
083f9ea8 +0x22d:  mov    %eax,0x8(%esp)
083f9eac +0x231:  movl   $0x3,0x4(%esp)
083f9eb4 +0x239:  mov    -0x18(%ebp),%eax
083f9eb7 +0x23c:  mov    %eax,(%esp)
083f9eba +0x23f:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
083f9ebf +0x244:  addl   $0x1,-0xc(%ebp)
083f9ec3 +0x248:  mov    -0xc(%ebp),%eax
083f9ec6 +0x24b:  cmp    -0x10(%ebp),%eax
083f9ec9 +0x24e:  setl   %al
083f9ecc +0x251:  test   %al,%al
083f9ece +0x253:  jne    083f9e1d <+0x1a2>
083f9ed4 +0x259:  jmp    083f9ed7 <+0x25c>
083f9ed6 +0x25b:  nop
083f9ed7 +0x25c:  mov    -0x14(%ebp),%eax
083f9eda +0x25f:  mov    -0x10(%ebp),%edx
083f9edd +0x262:  mov    %edx,0x8(%eax)
083f9ee0 +0x265:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
083f9ee5 +0x26a:  lea    -0x30(%ebp),%edx
083f9ee8 +0x26d:  mov    %edx,0x8(%esp)
083f9eec +0x271:  movl   $0x1,0x4(%esp)
083f9ef4 +0x279:  mov    %eax,(%esp)
083f9ef7 +0x27c:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
083f9efc +0x281:  jmp    083f9f19 <+0x29e>
083f9efe +0x283:  mov    %edx,%ebx
083f9f00 +0x285:  mov    %eax,%esi
083f9f02 +0x287:  lea    -0x30(%ebp),%eax
083f9f05 +0x28a:  mov    %eax,(%esp)
083f9f08 +0x28d:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
083f9f0d +0x292:  mov    %esi,%eax
083f9f0f +0x294:  mov    %ebx,%edx
083f9f11 +0x296:  mov    %eax,(%esp)
083f9f14 +0x299:  call   08ae3750 <_Unwind_Resume>
083f9f19 +0x29e:  lea    -0x30(%ebp),%eax
083f9f1c +0x2a1:  mov    %eax,(%esp)
083f9f1f +0x2a4:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
083f9f24 +0x2a9:  jmp    083f9f27 <+0x2ac>
083f9f26 +0x2ab:  nop
083f9f27 +0x2ac:  add    $0x40,%esp
083f9f2a +0x2af:  pop    %ebx
083f9f2b +0x2b0:  pop    %esi
083f9f2c +0x2b1:  pop    %ebp
083f9f2d +0x2b2:  ret
```

## 反编译 C

```c
// WongWork::EventCommon::LoadCharacEventItem @ 0x83f9c7b

/* WongWork::EventCommon::LoadCharacEventItem(unsigned int, unsigned int, unsigned int) */

void WongWork::EventCommon::LoadCharacEventItem(uint param_1,uint param_2,uint param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  Stream *pSVar4;
  CStreamGuard *pCVar5;
  CStreamGuard local_34 [8];
  cMyTrace local_2c [16];
  MySQL *local_1c;
  SIG_LOAD_EVENTITEM *local_18;
  int local_14;
  int local_10;
  
  local_1c = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  if (param_3 == 0) {
    MySQL::set_query(local_1c,
                     "seLect id,it_id,stack_count,event_code from charac_event_items where charac_no=%d and delete_flag=0 limit %d"
                     ,param_2,5);
  }
  else {
    uVar2 = NumberToString(param_3,0);
    MySQL::set_query(local_1c,
                     "seLect id,it_id,stack_count,event_code from charac_event_items where id=%s and charac_no=%d"
                     ,uVar2,param_2);
  }
  cVar1 = MySQL::exec(local_1c,true);
  if (cVar1 == '\x01') {
    iVar3 = MySQL::get_n_rows(local_1c);
    if (iVar3 != 0) {
      pSVar4 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBEventWork.inl",0x3e);
      CStreamGuard::CStreamGuard(local_34,pSVar4,true);
      pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_34);
                    /* try { // try from 083f9dbc to 083f9efb has its CatchHandler @ 083f9efe */
      CStreamGuard::operator<<(pCVar5,0x4b);
      pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_34);
      CStreamGuard::operator<<(pCVar5,-1);
      pCVar5 = (CStreamGuard *)CStreamGuard::operator->(local_34);
      local_18 = CStreamGuard::GetInBuffer<SIG_LOAD_EVENTITEM>(pCVar5);
      *(uint *)local_18 = param_1;
      *(uint *)(local_18 + 4) = param_2;
      local_14 = MySQL::get_n_rows(local_1c);
      local_10 = 0;
      while ((local_10 < local_14 && (cVar1 = MySQL::fetch(local_1c), cVar1 == '\x01'))) {
        MySQL::get_uint(local_1c,0,(uint *)(local_18 + local_10 * 0x10 + 0xc));
        MySQL::get_uint(local_1c,1,(uint *)(local_18 + local_10 * 0x10 + 0x10));
        MySQL::get_uint(local_1c,2,(uint *)(local_18 + local_10 * 0x10 + 0x14));
        MySQL::get_uint(local_1c,3,(uint *)(local_18 + local_10 * 0x10 + 0x18));
        local_10 = local_10 + 1;
      }
      *(int *)(local_18 + 8) = local_14;
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_34);
      CStreamGuard::~CStreamGuard(local_34);
    }
  }
  else {
    cMyTrace::cMyTrace(local_2c,
                       "void WongWork::EventCommon::LoadCharacEventItem(memberIdentificationNumber_t, unsigned int, memberIdentificationNumber_t)"
                       ,0x37,5);
    cMyTrace::operator()(local_2c,"DB_LoadInventory::GetUserInven, exec ERROR charac_no=%u",param_2)
    ;
  }
  return;
}
```
