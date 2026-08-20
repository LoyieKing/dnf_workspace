# dispatch

`_ZN29DB_AccountHack_CheckMyAccount8dispatchEiiP6Stream`

`DB_AccountHack_CheckMyAccount::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_AccountHack_CheckMyAccount` | `0x08439f06` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08439f06  _ZN29DB_AccountHack_CheckMyAccount8dispatchEiiP6Stream
#           DB_AccountHack_CheckMyAccount::dispatch(int, int, Stream*)
# range [0x08439f06, 0x0843a13d]
08439f06 +0x000:  push   %ebp
08439f07 +0x001:  mov    %esp,%ebp
08439f09 +0x003:  push   %edi
08439f0a +0x004:  push   %esi
08439f0b +0x005:  push   %ebx
08439f0c +0x006:  sub    $0x7c,%esp
08439f0f +0x009:  mov    0x14(%ebp),%eax
08439f12 +0x00c:  mov    %eax,(%esp)
08439f15 +0x00f:  call   08453826 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x643c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x643c
08439f1a +0x014:  mov    %eax,-0x24(%ebp)
08439f1d +0x017:  movl   $0x0,-0x28(%ebp)
08439f24 +0x01e:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08439f29 +0x023:  movl   $0x0,0x8(%esp)
08439f31 +0x02b:  movl   $0x2,0x4(%esp)
08439f39 +0x033:  mov    %eax,(%esp)
08439f3c +0x036:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08439f41 +0x03b:  mov    %eax,-0x20(%ebp)
08439f44 +0x03e:  lea    -0x6b(%ebp),%edx
08439f47 +0x041:  mov    $0x3b,%ebx
08439f4c +0x046:  mov    $0x0,%eax
08439f51 +0x04b:  mov    %edx,%ecx
08439f53 +0x04d:  and    $0x1,%ecx
08439f56 +0x050:  test   %ecx,%ecx
08439f58 +0x052:  je     08439f62 <+0x5c>
08439f5a +0x054:  mov    %al,(%edx)
08439f5c +0x056:  add    $0x1,%edx
08439f5f +0x059:  sub    $0x1,%ebx
08439f62 +0x05c:  mov    %edx,%ecx
08439f64 +0x05e:  and    $0x2,%ecx
08439f67 +0x061:  test   %ecx,%ecx
08439f69 +0x063:  je     08439f74 <+0x6e>
08439f6b +0x065:  mov    %ax,(%edx)
08439f6e +0x068:  add    $0x2,%edx
08439f71 +0x06b:  sub    $0x2,%ebx
08439f74 +0x06e:  mov    %ebx,%ecx
08439f76 +0x070:  shr    $0x2,%ecx
08439f79 +0x073:  mov    %edx,%edi
08439f7b +0x075:  rep stos %eax,%es:(%edi)
08439f7d +0x077:  mov    %edi,%edx
08439f7f +0x079:  mov    %ebx,%ecx
08439f81 +0x07b:  and    $0x2,%ecx
08439f84 +0x07e:  test   %ecx,%ecx
08439f86 +0x080:  je     08439f8e <+0x88>
08439f88 +0x082:  mov    %ax,(%edx)
08439f8b +0x085:  add    $0x2,%edx
08439f8e +0x088:  mov    %ebx,%ecx
08439f90 +0x08a:  and    $0x1,%ecx
08439f93 +0x08d:  test   %ecx,%ecx
08439f95 +0x08f:  je     08439f9c <+0x96>
08439f97 +0x091:  mov    %al,(%edx)
08439f99 +0x093:  add    $0x1,%edx
08439f9c +0x096:  mov    -0x24(%ebp),%eax
08439f9f +0x099:  add    $0x8,%eax
08439fa2 +0x09c:  mov    %eax,0x8(%esp)
08439fa6 +0x0a0:  lea    -0x6b(%ebp),%eax
08439fa9 +0x0a3:  mov    %eax,0x4(%esp)
08439fad +0x0a7:  mov    -0x20(%ebp),%eax
08439fb0 +0x0aa:  mov    %eax,(%esp)
08439fb3 +0x0ad:  call   083f48aa <_ZN5MySQL13escape_stringEPcPKc>  ; MySQL::escape_string(char*, char const*)
08439fb8 +0x0b2:  lea    -0x6b(%ebp),%eax
08439fbb +0x0b5:  mov    %eax,0x8(%esp)
08439fbf +0x0b9:  movl   $"seLect m_id from charac_info where charac_name='%s' limit 1",0x4(%esp)
08439fc7 +0x0c1:  mov    -0x20(%ebp),%eax
08439fca +0x0c4:  mov    %eax,(%esp)
08439fcd +0x0c7:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08439fd2 +0x0cc:  movl   $0x1,0x4(%esp)
08439fda +0x0d4:  mov    -0x20(%ebp),%eax
08439fdd +0x0d7:  mov    %eax,(%esp)
08439fe0 +0x0da:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08439fe5 +0x0df:  xor    $0x1,%eax
08439fe8 +0x0e2:  test   %al,%al
08439fea +0x0e4:  je     08439ff6 <+0xf0>
08439fec +0x0e6:  mov    $0x0,%eax
08439ff1 +0x0eb:  jmp    0843a135 <+0x22f>
08439ff6 +0x0f0:  mov    -0x20(%ebp),%eax
08439ff9 +0x0f3:  mov    %eax,(%esp)
08439ffc +0x0f6:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0843a001 +0x0fb:  xor    $0x1,%eax
0843a004 +0x0fe:  test   %al,%al
0843a006 +0x100:  je     0843a012 <+0x10c>
0843a008 +0x102:  mov    $0x0,%eax
0843a00d +0x107:  jmp    0843a135 <+0x22f>
0843a012 +0x10c:  lea    -0x28(%ebp),%eax
0843a015 +0x10f:  mov    %eax,0x8(%esp)
0843a019 +0x113:  movl   $0x0,0x4(%esp)
0843a021 +0x11b:  mov    -0x20(%ebp),%eax
0843a024 +0x11e:  mov    %eax,(%esp)
0843a027 +0x121:  call   080e22ae <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x54>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x54
0843a02c +0x126:  xor    $0x1,%eax
0843a02f +0x129:  test   %al,%al
0843a031 +0x12b:  je     0843a03d <+0x137>
0843a033 +0x12d:  mov    $0x0,%eax
0843a038 +0x132:  jmp    0843a135 <+0x22f>
0843a03d +0x137:  mov    -0x24(%ebp),%eax
0843a040 +0x13a:  mov    0x4(%eax),%edx
0843a043 +0x13d:  mov    -0x28(%ebp),%eax
0843a046 +0x140:  cmp    %eax,%edx
0843a048 +0x142:  je     0843a130 <+0x22a>
0843a04e +0x148:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0843a053 +0x14d:  movl   $0x8833,0x8(%esp)
0843a05b +0x155:  movl   $"DBThread.cpp",0x4(%esp)
0843a063 +0x15d:  mov    %eax,(%esp)
0843a066 +0x160:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0843a06b +0x165:  movl   $0x1,0x8(%esp)
0843a073 +0x16d:  mov    %eax,0x4(%esp)
0843a077 +0x171:  lea    -0x30(%ebp),%eax
0843a07a +0x174:  mov    %eax,(%esp)
0843a07d +0x177:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0843a082 +0x17c:  lea    -0x30(%ebp),%eax
0843a085 +0x17f:  mov    %eax,(%esp)
0843a088 +0x182:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843a08d +0x187:  movl   $0x18c,0x4(%esp)
0843a095 +0x18f:  mov    %eax,(%esp)
0843a098 +0x192:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843a09d +0x197:  lea    -0x30(%ebp),%eax
0843a0a0 +0x19a:  mov    %eax,(%esp)
0843a0a3 +0x19d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843a0a8 +0x1a2:  mov    0x10(%ebp),%edx
0843a0ab +0x1a5:  mov    %edx,0x4(%esp)
0843a0af +0x1a9:  mov    %eax,(%esp)
0843a0b2 +0x1ac:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843a0b7 +0x1b1:  lea    -0x30(%ebp),%eax
0843a0ba +0x1b4:  mov    %eax,(%esp)
0843a0bd +0x1b7:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0843a0c2 +0x1bc:  mov    %eax,(%esp)
0843a0c5 +0x1bf:  call   0845387a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6490>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6490
0843a0ca +0x1c4:  mov    %eax,-0x1c(%ebp)
0843a0cd +0x1c7:  mov    -0x24(%ebp),%eax
0843a0d0 +0x1ca:  mov    (%eax),%edx
0843a0d2 +0x1cc:  mov    -0x1c(%ebp),%eax
0843a0d5 +0x1cf:  mov    %edx,(%eax)
0843a0d7 +0x1d1:  mov    -0x24(%ebp),%eax
0843a0da +0x1d4:  mov    0x25(%eax),%edx
0843a0dd +0x1d7:  mov    -0x1c(%ebp),%eax
0843a0e0 +0x1da:  mov    %edx,0x4(%eax)
0843a0e3 +0x1dd:  mov    -0x28(%ebp),%edx
0843a0e6 +0x1e0:  mov    -0x1c(%ebp),%eax
0843a0e9 +0x1e3:  mov    %edx,0x8(%eax)
0843a0ec +0x1e6:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0843a0f1 +0x1eb:  lea    -0x30(%ebp),%edx
0843a0f4 +0x1ee:  mov    %edx,0x8(%esp)
0843a0f8 +0x1f2:  movl   $0x1,0x4(%esp)
0843a100 +0x1fa:  mov    %eax,(%esp)
0843a103 +0x1fd:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0843a108 +0x202:  jmp    0843a125 <+0x21f>
0843a10a +0x204:  mov    %edx,%ebx
0843a10c +0x206:  mov    %eax,%esi
0843a10e +0x208:  lea    -0x30(%ebp),%eax
0843a111 +0x20b:  mov    %eax,(%esp)
0843a114 +0x20e:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843a119 +0x213:  mov    %esi,%eax
0843a11b +0x215:  mov    %ebx,%edx
0843a11d +0x217:  mov    %eax,(%esp)
0843a120 +0x21a:  call   08ae3750 <_Unwind_Resume>
0843a125 +0x21f:  lea    -0x30(%ebp),%eax
0843a128 +0x222:  mov    %eax,(%esp)
0843a12b +0x225:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843a130 +0x22a:  mov    $0x1,%eax
0843a135 +0x22f:  add    $0x7c,%esp
0843a138 +0x232:  pop    %ebx
0843a139 +0x233:  pop    %esi
0843a13a +0x234:  pop    %edi
0843a13b +0x235:  pop    %ebp
0843a13c +0x236:  ret
0843a13d +0x237:  nop
```

## 反编译 C

```c
// DB_AccountHack_CheckMyAccount::dispatch @ 0x8439f06

/* DB_AccountHack_CheckMyAccount::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_AccountHack_CheckMyAccount::dispatch
          (DB_AccountHack_CheckMyAccount *this,int param_1,int param_2,Stream *param_3)

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
  SIG_CHECK_MY_ACCOUNT_IN_DB *local_28;
  MySQL *local_24;
  SIG_CHECK_MY_ACCOUNT_OK *local_20;
  
  bVar9 = 0;
  local_28 = Stream::GetOutBuffer<SIG_CHECK_MY_ACCOUNT_IN_DB>(param_3);
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
  MySQL::escape_string(local_24,&local_6f,(char *)(local_28 + 8));
  MySQL::set_query(local_24,"seLect m_id from charac_info where charac_name=\'%s\' limit 1",
                   &local_6f);
  cVar1 = MySQL::exec(local_24,true);
  if (cVar1 == '\x01') {
    cVar1 = MySQL::fetch(local_24);
    if (cVar1 == '\x01') {
      cVar1 = MySQL::get_int(local_24,0,&local_2c);
      if (cVar1 == '\x01') {
        if (*(uint *)(local_28 + 4) != local_2c) {
          pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x8833);
          CStreamGuard::CStreamGuard(local_34,pSVar3,true);
          pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_34);
                    /* try { // try from 0843a098 to 0843a107 has its CatchHandler @ 0843a10a */
          CStreamGuard::operator<<(pCVar4,0x18c);
          pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_34);
          CStreamGuard::operator<<(pCVar4,param_2);
          pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_34);
          local_20 = CStreamGuard::GetInBuffer<SIG_CHECK_MY_ACCOUNT_OK>(pCVar4);
          *(undefined4 *)local_20 = *(undefined4 *)local_28;
          *(undefined4 *)(local_20 + 4) = *(undefined4 *)(local_28 + 0x25);
          *(uint *)(local_20 + 8) = local_2c;
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
