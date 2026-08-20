# dispatch

`_ZN18DB_SelectCharacMid8dispatchEiiP6Stream`

`DB_SelectCharacMid::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_SelectCharacMid` | `0x08446516` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08446516  _ZN18DB_SelectCharacMid8dispatchEiiP6Stream
#           DB_SelectCharacMid::dispatch(int, int, Stream*)
# range [0x08446516, 0x0844676b]
08446516 +0x000:  push   %ebp
08446517 +0x001:  mov    %esp,%ebp
08446519 +0x003:  push   %edi
0844651a +0x004:  push   %esi
0844651b +0x005:  push   %ebx
0844651c +0x006:  sub    $0x7c,%esp
0844651f +0x009:  mov    0x14(%ebp),%eax
08446522 +0x00c:  mov    %eax,(%esp)
08446525 +0x00f:  call   0845429c <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6eb2>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6eb2
0844652a +0x014:  mov    %eax,-0x28(%ebp)
0844652d +0x017:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08446532 +0x01c:  movl   $0x0,0x8(%esp)
0844653a +0x024:  movl   $0x2,0x4(%esp)
08446542 +0x02c:  mov    %eax,(%esp)
08446545 +0x02f:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0844654a +0x034:  mov    %eax,-0x24(%ebp)
0844654d +0x037:  movl   $0x0,-0x2c(%ebp)
08446554 +0x03e:  lea    -0x6f(%ebp),%edx
08446557 +0x041:  mov    $0x3b,%ebx
0844655c +0x046:  mov    $0x0,%eax
08446561 +0x04b:  mov    %edx,%ecx
08446563 +0x04d:  and    $0x1,%ecx
08446566 +0x050:  test   %ecx,%ecx
08446568 +0x052:  je     08446572 <+0x5c>
0844656a +0x054:  mov    %al,(%edx)
0844656c +0x056:  add    $0x1,%edx
0844656f +0x059:  sub    $0x1,%ebx
08446572 +0x05c:  mov    %edx,%ecx
08446574 +0x05e:  and    $0x2,%ecx
08446577 +0x061:  test   %ecx,%ecx
08446579 +0x063:  je     08446584 <+0x6e>
0844657b +0x065:  mov    %ax,(%edx)
0844657e +0x068:  add    $0x2,%edx
08446581 +0x06b:  sub    $0x2,%ebx
08446584 +0x06e:  mov    %ebx,%ecx
08446586 +0x070:  shr    $0x2,%ecx
08446589 +0x073:  mov    %edx,%edi
0844658b +0x075:  rep stos %eax,%es:(%edi)
0844658d +0x077:  mov    %edi,%edx
0844658f +0x079:  mov    %ebx,%ecx
08446591 +0x07b:  and    $0x2,%ecx
08446594 +0x07e:  test   %ecx,%ecx
08446596 +0x080:  je     0844659e <+0x88>
08446598 +0x082:  mov    %ax,(%edx)
0844659b +0x085:  add    $0x2,%edx
0844659e +0x088:  mov    %ebx,%ecx
084465a0 +0x08a:  and    $0x1,%ecx
084465a3 +0x08d:  test   %ecx,%ecx
084465a5 +0x08f:  je     084465ac <+0x96>
084465a7 +0x091:  mov    %al,(%edx)
084465a9 +0x093:  add    $0x1,%edx
084465ac +0x096:  mov    -0x28(%ebp),%eax
084465af +0x099:  add    $0x10,%eax
084465b2 +0x09c:  mov    %eax,0x8(%esp)
084465b6 +0x0a0:  lea    -0x6f(%ebp),%eax
084465b9 +0x0a3:  mov    %eax,0x4(%esp)
084465bd +0x0a7:  mov    -0x24(%ebp),%eax
084465c0 +0x0aa:  mov    %eax,(%esp)
084465c3 +0x0ad:  call   083f48aa <_ZN5MySQL13escape_stringEPcPKc>  ; MySQL::escape_string(char*, char const*)
084465c8 +0x0b2:  lea    -0x6f(%ebp),%eax
084465cb +0x0b5:  mov    %eax,0x8(%esp)
084465cf +0x0b9:  movl   $"seLect m_id from charac_info where charac_name='%s' limit 1",0x4(%esp)
084465d7 +0x0c1:  mov    -0x24(%ebp),%eax
084465da +0x0c4:  mov    %eax,(%esp)
084465dd +0x0c7:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084465e2 +0x0cc:  movl   $0x1,0x4(%esp)
084465ea +0x0d4:  mov    -0x24(%ebp),%eax
084465ed +0x0d7:  mov    %eax,(%esp)
084465f0 +0x0da:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084465f5 +0x0df:  xor    $0x1,%eax
084465f8 +0x0e2:  test   %al,%al
084465fa +0x0e4:  je     08446606 <+0xf0>
084465fc +0x0e6:  mov    $0x0,%eax
08446601 +0x0eb:  jmp    08446763 <+0x24d>
08446606 +0x0f0:  mov    -0x24(%ebp),%eax
08446609 +0x0f3:  mov    %eax,(%esp)
0844660c +0x0f6:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08446611 +0x0fb:  mov    %eax,-0x20(%ebp)
08446614 +0x0fe:  cmpl   $0x0,-0x20(%ebp)
08446618 +0x102:  je     0844675e <+0x248>
0844661e +0x108:  mov    -0x24(%ebp),%eax
08446621 +0x10b:  mov    %eax,(%esp)
08446624 +0x10e:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08446629 +0x113:  xor    $0x1,%eax
0844662c +0x116:  test   %al,%al
0844662e +0x118:  je     0844663a <+0x124>
08446630 +0x11a:  mov    $0x0,%eax
08446635 +0x11f:  jmp    08446763 <+0x24d>
0844663a +0x124:  lea    -0x2c(%ebp),%eax
0844663d +0x127:  mov    %eax,0x8(%esp)
08446641 +0x12b:  movl   $0x0,0x4(%esp)
08446649 +0x133:  mov    -0x24(%ebp),%eax
0844664c +0x136:  mov    %eax,(%esp)
0844664f +0x139:  call   080e22ae <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x54>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x54
08446654 +0x13e:  xor    $0x1,%eax
08446657 +0x141:  test   %al,%al
08446659 +0x143:  je     08446665 <+0x14f>
0844665b +0x145:  mov    $0x0,%eax
08446660 +0x14a:  jmp    08446763 <+0x24d>
08446665 +0x14f:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0844666a +0x154:  movl   $0xae30,0x8(%esp)
08446672 +0x15c:  movl   $"DBThread.cpp",0x4(%esp)
0844667a +0x164:  mov    %eax,(%esp)
0844667d +0x167:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08446682 +0x16c:  movl   $0x1,0x8(%esp)
0844668a +0x174:  mov    %eax,0x4(%esp)
0844668e +0x178:  lea    -0x34(%ebp),%eax
08446691 +0x17b:  mov    %eax,(%esp)
08446694 +0x17e:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08446699 +0x183:  lea    -0x34(%ebp),%eax
0844669c +0x186:  mov    %eax,(%esp)
0844669f +0x189:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084466a4 +0x18e:  mov    0xc(%ebp),%edx
084466a7 +0x191:  mov    %edx,0x4(%esp)
084466ab +0x195:  mov    %eax,(%esp)
084466ae +0x198:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084466b3 +0x19d:  lea    -0x34(%ebp),%eax
084466b6 +0x1a0:  mov    %eax,(%esp)
084466b9 +0x1a3:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084466be +0x1a8:  mov    0x10(%ebp),%edx
084466c1 +0x1ab:  mov    %edx,0x4(%esp)
084466c5 +0x1af:  mov    %eax,(%esp)
084466c8 +0x1b2:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084466cd +0x1b7:  lea    -0x34(%ebp),%eax
084466d0 +0x1ba:  mov    %eax,(%esp)
084466d3 +0x1bd:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
084466d8 +0x1c2:  mov    %eax,(%esp)
084466db +0x1c5:  call   084542f0 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6f06>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6f06
084466e0 +0x1ca:  mov    %eax,-0x1c(%ebp)
084466e3 +0x1cd:  mov    -0x2c(%ebp),%edx
084466e6 +0x1d0:  mov    -0x1c(%ebp),%eax
084466e9 +0x1d3:  mov    %edx,0x10(%eax)
084466ec +0x1d6:  mov    -0x28(%ebp),%eax
084466ef +0x1d9:  mov    0x4(%eax),%edx
084466f2 +0x1dc:  mov    -0x1c(%ebp),%eax
084466f5 +0x1df:  mov    %edx,0x4(%eax)
084466f8 +0x1e2:  mov    -0x28(%ebp),%eax
084466fb +0x1e5:  mov    0x8(%eax),%edx
084466fe +0x1e8:  mov    -0x1c(%ebp),%eax
08446701 +0x1eb:  mov    %edx,0x8(%eax)
08446704 +0x1ee:  mov    -0x28(%ebp),%eax
08446707 +0x1f1:  mov    0xc(%eax),%edx
0844670a +0x1f4:  mov    -0x1c(%ebp),%eax
0844670d +0x1f7:  mov    %edx,0xc(%eax)
08446710 +0x1fa:  mov    -0x28(%ebp),%eax
08446713 +0x1fd:  mov    (%eax),%edx
08446715 +0x1ff:  mov    -0x1c(%ebp),%eax
08446718 +0x202:  mov    %edx,(%eax)
0844671a +0x204:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0844671f +0x209:  lea    -0x34(%ebp),%edx
08446722 +0x20c:  mov    %edx,0x8(%esp)
08446726 +0x210:  movl   $0x1,0x4(%esp)
0844672e +0x218:  mov    %eax,(%esp)
08446731 +0x21b:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08446736 +0x220:  jmp    08446753 <+0x23d>
08446738 +0x222:  mov    %edx,%ebx
0844673a +0x224:  mov    %eax,%esi
0844673c +0x226:  lea    -0x34(%ebp),%eax
0844673f +0x229:  mov    %eax,(%esp)
08446742 +0x22c:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08446747 +0x231:  mov    %esi,%eax
08446749 +0x233:  mov    %ebx,%edx
0844674b +0x235:  mov    %eax,(%esp)
0844674e +0x238:  call   08ae3750 <_Unwind_Resume>
08446753 +0x23d:  lea    -0x34(%ebp),%eax
08446756 +0x240:  mov    %eax,(%esp)
08446759 +0x243:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0844675e +0x248:  mov    $0x1,%eax
08446763 +0x24d:  add    $0x7c,%esp
08446766 +0x250:  pop    %ebx
08446767 +0x251:  pop    %esi
08446768 +0x252:  pop    %edi
08446769 +0x253:  pop    %ebp
0844676a +0x254:  ret
0844676b +0x255:  nop
```

## 反编译 C

```c
// DB_SelectCharacMid::dispatch @ 0x8446516

/* DB_SelectCharacMid::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_SelectCharacMid::dispatch(DB_SelectCharacMid *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  bool bVar7;
  byte bVar8;
  char local_73;
  char local_72 [58];
  CStreamGuard local_38 [8];
  uint local_30;
  SIG_CHECK_CHAR_MID *local_2c;
  MySQL *local_28;
  int local_24;
  SIG_CHECK_CHAR_MID_RESULT *local_20;
  
  bVar8 = 0;
  local_2c = Stream::GetOutBuffer<SIG_CHECK_CHAR_MID>(param_3);
  local_28 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  local_30 = 0;
  pcVar5 = &local_73;
  uVar6 = 0x3b;
  bVar7 = ((uint)pcVar5 & 1) != 0;
  if (bVar7) {
    local_73 = '\0';
    pcVar5 = local_72;
    uVar6 = 0x3a;
  }
  if (((uint)pcVar5 & 2) != 0) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5 = pcVar5 + 2;
    uVar6 = uVar6 - 2;
  }
  for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5[2] = '\0';
    pcVar5[3] = '\0';
    pcVar5 = pcVar5 + ((uint)bVar8 * -2 + 1) * 4;
  }
  if ((uVar6 & 2) != 0) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5 = pcVar5 + 2;
  }
  if (!bVar7) {
    *pcVar5 = '\0';
  }
  MySQL::escape_string(local_28,&local_73,(char *)(local_2c + 0x10));
  MySQL::set_query(local_28,"seLect m_id from charac_info where charac_name=\'%s\' limit 1",
                   &local_73);
  cVar1 = MySQL::exec(local_28,true);
  if (cVar1 != '\x01') {
    return 0;
  }
  local_24 = MySQL::get_n_rows(local_28);
  if (local_24 != 0) {
    cVar1 = MySQL::fetch(local_28);
    if (cVar1 != '\x01') {
      return 0;
    }
    cVar1 = MySQL::get_int(local_28,0,&local_30);
    if (cVar1 != '\x01') {
      return 0;
    }
    pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xae30);
    CStreamGuard::CStreamGuard(local_38,pSVar2,true);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_38);
                    /* try { // try from 084466ae to 08446735 has its CatchHandler @ 08446738 */
    CStreamGuard::operator<<(pCVar3,param_1);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_38);
    CStreamGuard::operator<<(pCVar3,param_2);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_38);
    local_20 = CStreamGuard::GetInBuffer<SIG_CHECK_CHAR_MID_RESULT>(pCVar3);
    *(uint *)(local_20 + 0x10) = local_30;
    *(undefined4 *)(local_20 + 4) = *(undefined4 *)(local_2c + 4);
    *(undefined4 *)(local_20 + 8) = *(undefined4 *)(local_2c + 8);
    *(undefined4 *)(local_20 + 0xc) = *(undefined4 *)(local_2c + 0xc);
    *(undefined4 *)local_20 = *(undefined4 *)local_2c;
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_38);
    CStreamGuard::~CStreamGuard(local_38);
  }
  return 1;
}
```
