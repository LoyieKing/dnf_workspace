# dispatch

`_ZN17DB_CheckAddFriend8dispatchEiiP6Stream`

`DB_CheckAddFriend::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_CheckAddFriend` | `0x0844c6e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0844c6e0  _ZN17DB_CheckAddFriend8dispatchEiiP6Stream
#           DB_CheckAddFriend::dispatch(int, int, Stream*)
# range [0x0844c6e0, 0x0844c9d3]
0844c6e0 +0x000:  push   %ebp
0844c6e1 +0x001:  mov    %esp,%ebp
0844c6e3 +0x003:  push   %edi
0844c6e4 +0x004:  push   %esi
0844c6e5 +0x005:  push   %ebx
0844c6e6 +0x006:  sub    $0x7c,%esp
0844c6e9 +0x009:  movl   $0x0,-0x2c(%ebp)
0844c6f0 +0x010:  movl   $0x0,-0x28(%ebp)
0844c6f7 +0x017:  movl   $0x1,-0x24(%ebp)
0844c6fe +0x01e:  movl   $0x0,-0x20(%ebp)
0844c705 +0x025:  movl   $0x0,-0x1c(%ebp)
0844c70c +0x02c:  lea    -0x6f(%ebp),%edx
0844c70f +0x02f:  mov    $0x3b,%ebx
0844c714 +0x034:  mov    $0x0,%eax
0844c719 +0x039:  mov    %edx,%ecx
0844c71b +0x03b:  and    $0x1,%ecx
0844c71e +0x03e:  test   %ecx,%ecx
0844c720 +0x040:  je     0844c72a <+0x4a>
0844c722 +0x042:  mov    %al,(%edx)
0844c724 +0x044:  add    $0x1,%edx
0844c727 +0x047:  sub    $0x1,%ebx
0844c72a +0x04a:  mov    %edx,%ecx
0844c72c +0x04c:  and    $0x2,%ecx
0844c72f +0x04f:  test   %ecx,%ecx
0844c731 +0x051:  je     0844c73c <+0x5c>
0844c733 +0x053:  mov    %ax,(%edx)
0844c736 +0x056:  add    $0x2,%edx
0844c739 +0x059:  sub    $0x2,%ebx
0844c73c +0x05c:  mov    %ebx,%ecx
0844c73e +0x05e:  shr    $0x2,%ecx
0844c741 +0x061:  mov    %edx,%edi
0844c743 +0x063:  rep stos %eax,%es:(%edi)
0844c745 +0x065:  mov    %edi,%edx
0844c747 +0x067:  mov    %ebx,%ecx
0844c749 +0x069:  and    $0x2,%ecx
0844c74c +0x06c:  test   %ecx,%ecx
0844c74e +0x06e:  je     0844c756 <+0x76>
0844c750 +0x070:  mov    %ax,(%edx)
0844c753 +0x073:  add    $0x2,%edx
0844c756 +0x076:  mov    %ebx,%ecx
0844c758 +0x078:  and    $0x1,%ecx
0844c75b +0x07b:  test   %ecx,%ecx
0844c75d +0x07d:  je     0844c764 <+0x84>
0844c75f +0x07f:  mov    %al,(%edx)
0844c761 +0x081:  add    $0x1,%edx
0844c764 +0x084:  cmpl   $0x0,0x14(%ebp)
0844c768 +0x088:  jne    0844c774 <+0x94>
0844c76a +0x08a:  mov    $0x0,%esi
0844c76f +0x08f:  jmp    0844c9ca <+0x2ea>
0844c774 +0x094:  mov    0x14(%ebp),%eax
0844c777 +0x097:  mov    %eax,(%esp)
0844c77a +0x09a:  call   084549dc <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x75f2>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x75f2
0844c77f +0x09f:  mov    %eax,-0x20(%ebp)
0844c782 +0x0a2:  cmpl   $0x0,-0x20(%ebp)
0844c786 +0x0a6:  jne    0844c792 <+0xb2>
0844c788 +0x0a8:  mov    $0x0,%esi
0844c78d +0x0ad:  jmp    0844c9ca <+0x2ea>
0844c792 +0x0b2:  mov    -0x20(%ebp),%eax
0844c795 +0x0b5:  movzbl 0x4(%eax),%eax
0844c799 +0x0b9:  test   %al,%al
0844c79b +0x0bb:  je     0844c8a9 <+0x1c9>
0844c7a1 +0x0c1:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0844c7a6 +0x0c6:  movl   $0x0,0x8(%esp)
0844c7ae +0x0ce:  movl   $0x2,0x4(%esp)
0844c7b6 +0x0d6:  mov    %eax,(%esp)
0844c7b9 +0x0d9:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0844c7be +0x0de:  mov    %eax,-0x28(%ebp)
0844c7c1 +0x0e1:  cmpl   $0x0,-0x28(%ebp)
0844c7c5 +0x0e5:  je     0844c8b2 <+0x1d2>
0844c7cb +0x0eb:  mov    -0x20(%ebp),%eax
0844c7ce +0x0ee:  add    $0x5,%eax
0844c7d1 +0x0f1:  mov    %eax,0x8(%esp)
0844c7d5 +0x0f5:  lea    -0x6f(%ebp),%eax
0844c7d8 +0x0f8:  mov    %eax,0x4(%esp)
0844c7dc +0x0fc:  mov    -0x28(%ebp),%eax
0844c7df +0x0ff:  mov    %eax,(%esp)
0844c7e2 +0x102:  call   083f48aa <_ZN5MySQL13escape_stringEPcPKc>  ; MySQL::escape_string(char*, char const*)
0844c7e7 +0x107:  test   %eax,%eax
0844c7e9 +0x109:  sete   %al
0844c7ec +0x10c:  test   %al,%al
0844c7ee +0x10e:  jne    0844c8b5 <+0x1d5>
0844c7f4 +0x114:  lea    -0x6f(%ebp),%eax
0844c7f7 +0x117:  mov    %eax,0x8(%esp)
0844c7fb +0x11b:  movl   $"seLect m_id from charac_info where charac_name='%s' and delete_flag=0",0x4(%esp)
0844c803 +0x123:  mov    -0x28(%ebp),%eax
0844c806 +0x126:  mov    %eax,(%esp)
0844c809 +0x129:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0844c80e +0x12e:  xor    $0x1,%eax
0844c811 +0x131:  test   %al,%al
0844c813 +0x133:  jne    0844c8b8 <+0x1d8>
0844c819 +0x139:  movl   $0x1,0x4(%esp)
0844c821 +0x141:  mov    -0x28(%ebp),%eax
0844c824 +0x144:  mov    %eax,(%esp)
0844c827 +0x147:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0844c82c +0x14c:  xor    $0x1,%eax
0844c82f +0x14f:  test   %al,%al
0844c831 +0x151:  jne    0844c855 <+0x175>
0844c833 +0x153:  mov    -0x28(%ebp),%eax
0844c836 +0x156:  mov    %eax,(%esp)
0844c839 +0x159:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0844c83e +0x15e:  xor    $0x1,%eax
0844c841 +0x161:  test   %al,%al
0844c843 +0x163:  jne    0844c855 <+0x175>
0844c845 +0x165:  mov    -0x28(%ebp),%eax
0844c848 +0x168:  mov    %eax,(%esp)
0844c84b +0x16b:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0844c850 +0x170:  cmp    $0x1,%eax
0844c853 +0x173:  je     0844c85c <+0x17c>
0844c855 +0x175:  mov    $0x1,%eax
0844c85a +0x17a:  jmp    0844c861 <+0x181>
0844c85c +0x17c:  mov    $0x0,%eax
0844c861 +0x181:  test   %al,%al
0844c863 +0x183:  jne    0844c8bb <+0x1db>
0844c865 +0x185:  lea    -0x2c(%ebp),%eax
0844c868 +0x188:  mov    %eax,0x8(%esp)
0844c86c +0x18c:  movl   $0x0,0x4(%esp)
0844c874 +0x194:  mov    -0x28(%ebp),%eax
0844c877 +0x197:  mov    %eax,(%esp)
0844c87a +0x19a:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0844c87f +0x19f:  xor    $0x1,%eax
0844c882 +0x1a2:  test   %al,%al
0844c884 +0x1a4:  jne    0844c8be <+0x1de>
0844c886 +0x1a6:  mov    -0x2c(%ebp),%eax
0844c889 +0x1a9:  mov    %eax,%edx
0844c88b +0x1ab:  mov    &_ZN10GlobalData14s_pGMAccounts_E,%eax
0844c890 +0x1b0:  mov    %edx,0x4(%esp)
0844c894 +0x1b4:  mov    %eax,(%esp)
0844c897 +0x1b7:  call   08109346 <_ZN8WongWork11CGMAccounts4isGMEj>  ; WongWork::CGMAccounts::isGM(unsigned int)
0844c89c +0x1bc:  test   %al,%al
0844c89e +0x1be:  je     0844c8a9 <+0x1c9>
0844c8a0 +0x1c0:  movl   $0x5a,-0x24(%ebp)
0844c8a7 +0x1c7:  jmp    0844c8bf <+0x1df>
0844c8a9 +0x1c9:  movl   $0x0,-0x24(%ebp)
0844c8b0 +0x1d0:  jmp    0844c8bf <+0x1df>
0844c8b2 +0x1d2:  nop
0844c8b3 +0x1d3:  jmp    0844c8bf <+0x1df>
0844c8b5 +0x1d5:  nop
0844c8b6 +0x1d6:  jmp    0844c8bf <+0x1df>
0844c8b8 +0x1d8:  nop
0844c8b9 +0x1d9:  jmp    0844c8bf <+0x1df>
0844c8bb +0x1db:  nop
0844c8bc +0x1dc:  jmp    0844c8bf <+0x1df>
0844c8be +0x1de:  nop
0844c8bf +0x1df:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0844c8c4 +0x1e4:  movl   $0xc05e,0x8(%esp)
0844c8cc +0x1ec:  movl   $"DBThread.cpp",0x4(%esp)
0844c8d4 +0x1f4:  mov    %eax,(%esp)
0844c8d7 +0x1f7:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0844c8dc +0x1fc:  movl   $0x1,0x8(%esp)
0844c8e4 +0x204:  mov    %eax,0x4(%esp)
0844c8e8 +0x208:  lea    -0x34(%ebp),%eax
0844c8eb +0x20b:  mov    %eax,(%esp)
0844c8ee +0x20e:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0844c8f3 +0x213:  lea    -0x34(%ebp),%eax
0844c8f6 +0x216:  mov    %eax,(%esp)
0844c8f9 +0x219:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0844c8fe +0x21e:  movl   $0x33e,0x4(%esp)
0844c906 +0x226:  mov    %eax,(%esp)
0844c909 +0x229:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0844c90e +0x22e:  lea    -0x34(%ebp),%eax
0844c911 +0x231:  mov    %eax,(%esp)
0844c914 +0x234:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0844c919 +0x239:  mov    0x10(%ebp),%edx
0844c91c +0x23c:  mov    %edx,0x4(%esp)
0844c920 +0x240:  mov    %eax,(%esp)
0844c923 +0x243:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0844c928 +0x248:  lea    -0x34(%ebp),%eax
0844c92b +0x24b:  mov    %eax,(%esp)
0844c92e +0x24e:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0844c933 +0x253:  mov    %eax,(%esp)
0844c936 +0x256:  call   08236df0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc49a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc49a
0844c93b +0x25b:  mov    %eax,-0x1c(%ebp)
0844c93e +0x25e:  cmpl   $0x0,-0x1c(%ebp)
0844c942 +0x262:  jne    0844c950 <+0x270>
0844c944 +0x264:  mov    $0x0,%esi
0844c949 +0x269:  mov    $0x0,%ebx
0844c94e +0x26e:  jmp    0844c9b6 <+0x2d6>
0844c950 +0x270:  mov    -0x1c(%ebp),%eax
0844c953 +0x273:  mov    -0x24(%ebp),%edx
0844c956 +0x276:  mov    %edx,(%eax)
0844c958 +0x278:  mov    -0x20(%ebp),%eax
0844c95b +0x27b:  lea    0x5(%eax),%edx
0844c95e +0x27e:  mov    -0x1c(%ebp),%eax
0844c961 +0x281:  add    $0x5,%eax
0844c964 +0x284:  movl   $0x1e,0x8(%esp)
0844c96c +0x28c:  mov    %edx,0x4(%esp)
0844c970 +0x290:  mov    %eax,(%esp)
0844c973 +0x293:  call   0807d8d0 <_init+0x1c8>
0844c978 +0x298:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0844c97d +0x29d:  lea    -0x34(%ebp),%edx
0844c980 +0x2a0:  mov    %edx,0x8(%esp)
0844c984 +0x2a4:  movl   $0x1,0x4(%esp)
0844c98c +0x2ac:  mov    %eax,(%esp)
0844c98f +0x2af:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0844c994 +0x2b4:  mov    $0x1,%ebx
0844c999 +0x2b9:  jmp    0844c9b6 <+0x2d6>
0844c99b +0x2bb:  mov    %edx,%ebx
0844c99d +0x2bd:  mov    %eax,%esi
0844c99f +0x2bf:  lea    -0x34(%ebp),%eax
0844c9a2 +0x2c2:  mov    %eax,(%esp)
0844c9a5 +0x2c5:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0844c9aa +0x2ca:  mov    %esi,%eax
0844c9ac +0x2cc:  mov    %ebx,%edx
0844c9ae +0x2ce:  mov    %eax,(%esp)
0844c9b1 +0x2d1:  call   08ae3750 <_Unwind_Resume>
0844c9b6 +0x2d6:  lea    -0x34(%ebp),%eax
0844c9b9 +0x2d9:  mov    %eax,(%esp)
0844c9bc +0x2dc:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0844c9c1 +0x2e1:  test   %ebx,%ebx
0844c9c3 +0x2e3:  je     0844c9ca <+0x2ea>
0844c9c5 +0x2e5:  mov    $0x1,%esi
0844c9ca +0x2ea:  mov    %esi,%eax
0844c9cc +0x2ec:  add    $0x7c,%esp
0844c9cf +0x2ef:  pop    %ebx
0844c9d0 +0x2f0:  pop    %esi
0844c9d1 +0x2f1:  pop    %edi
0844c9d2 +0x2f2:  pop    %ebp
0844c9d3 +0x2f3:  ret
```

## 反编译 C

```c
// DB_CheckAddFriend::dispatch @ 0x844c6e0

/* DB_CheckAddFriend::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_CheckAddFriend::dispatch(DB_CheckAddFriend *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  int iVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  undefined4 unaff_ESI;
  bool bVar8;
  char local_73;
  char local_72 [58];
  CStreamGuard local_38 [8];
  uint local_30;
  MySQL *local_2c;
  undefined4 local_28;
  SIG_CHECK_ADD_FRIEND *local_24;
  SIG_CHECK_ADD_FRIEND *local_20;
  
  local_30 = 0;
  local_2c = (MySQL *)0x0;
  local_28 = 1;
  local_24 = (SIG_CHECK_ADD_FRIEND *)0x0;
  local_20 = (SIG_CHECK_ADD_FRIEND *)0x0;
  pcVar6 = &local_73;
  uVar7 = 0x3b;
  bVar8 = ((uint)pcVar6 & 1) != 0;
  if (bVar8) {
    local_73 = '\0';
    pcVar6 = local_72;
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
    pcVar6 = pcVar6 + 4;
  }
  if ((uVar7 & 2) != 0) {
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6 = pcVar6 + 2;
  }
  if (!bVar8) {
    *pcVar6 = '\0';
  }
  if (param_3 == (Stream *)0x0) {
    return 0;
  }
  local_24 = Stream::GetOutBuffer<SIG_CHECK_ADD_FRIEND>(param_3);
  if (local_24 == (SIG_CHECK_ADD_FRIEND *)0x0) {
    return 0;
  }
  if (local_24[4] != (SIG_CHECK_ADD_FRIEND)0x0) {
    local_2c = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
    if (((local_2c == (MySQL *)0x0) ||
        (iVar2 = MySQL::escape_string(local_2c,&local_73,(char *)(local_24 + 5)), iVar2 == 0)) ||
       (cVar1 = MySQL::set_query(local_2c,
                                 "seLect m_id from charac_info where charac_name=\'%s\' and delete_flag=0"
                                 ,&local_73), cVar1 != '\x01')) goto LAB_0844c8bf;
    cVar1 = MySQL::exec(local_2c,true);
    if (((cVar1 == '\x01') && (cVar1 = MySQL::fetch(local_2c), cVar1 == '\x01')) &&
       (iVar2 = MySQL::get_n_rows(local_2c), iVar2 == 1)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if ((bVar8) || (cVar1 = MySQL::get_int(local_2c,0,(int *)&local_30), cVar1 != '\x01'))
    goto LAB_0844c8bf;
    cVar1 = WongWork::CGMAccounts::isGM(GlobalData::s_pGMAccounts_,local_30);
    if (cVar1 != '\0') {
      local_28 = 0x5a;
      goto LAB_0844c8bf;
    }
  }
  local_28 = 0;
LAB_0844c8bf:
  pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xc05e);
  CStreamGuard::CStreamGuard(local_38,pSVar3,true);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_38);
                    /* try { // try from 0844c909 to 0844c993 has its CatchHandler @ 0844c99b */
  CStreamGuard::operator<<(pCVar4,0x33e);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_38);
  CStreamGuard::operator<<(pCVar4,param_2);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_38);
  local_20 = CStreamGuard::GetInBuffer<SIG_CHECK_ADD_FRIEND>(pCVar4);
  bVar8 = local_20 != (SIG_CHECK_ADD_FRIEND *)0x0;
  if (bVar8) {
    *(undefined4 *)local_20 = local_28;
    strncpy((char *)(local_20 + 5),(char *)(local_24 + 5),0x1e);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_38);
  }
  else {
    unaff_ESI = 0;
  }
  CStreamGuard::~CStreamGuard(local_38);
  if (bVar8) {
    unaff_ESI = 1;
  }
  return unaff_ESI;
}
```
