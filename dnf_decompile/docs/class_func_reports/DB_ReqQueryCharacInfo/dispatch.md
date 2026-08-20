# dispatch

`_ZN21DB_ReqQueryCharacInfo8dispatchEiiP6Stream`

`DB_ReqQueryCharacInfo::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_ReqQueryCharacInfo` | `0x0842688c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0842688c  _ZN21DB_ReqQueryCharacInfo8dispatchEiiP6Stream
#           DB_ReqQueryCharacInfo::dispatch(int, int, Stream*)
# range [0x0842688c, 0x08426d17]
0842688c +0x000:  push   %ebp
0842688d +0x001:  mov    %esp,%ebp
0842688f +0x003:  push   %edi
08426890 +0x004:  push   %esi
08426891 +0x005:  push   %ebx
08426892 +0x006:  sub    $0xdc,%esp
08426898 +0x00c:  mov    0x8(%ebp),%eax
0842689b +0x00f:  mov    0x14(%ebp),%edx
0842689e +0x012:  mov    %edx,0xc(%esp)
084268a2 +0x016:  mov    0x10(%ebp),%edx
084268a5 +0x019:  mov    %edx,0x8(%esp)
084268a9 +0x01d:  mov    0xc(%ebp),%edx
084268ac +0x020:  mov    %edx,0x4(%esp)
084268b0 +0x024:  mov    %eax,(%esp)
084268b3 +0x027:  call   083fbf7c <_ZN12DBDispatcher8dispatchEiiP6Stream>  ; DBDispatcher::dispatch(int, int, Stream*)
084268b8 +0x02c:  xor    $0x1,%eax
084268bb +0x02f:  test   %al,%al
084268bd +0x031:  je     084268c9 <+0x3d>
084268bf +0x033:  mov    $0x0,%eax
084268c4 +0x038:  jmp    08426d0d <+0x481>
084268c9 +0x03d:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
084268ce +0x042:  movl   $0x0,0x8(%esp)
084268d6 +0x04a:  movl   $0x2,0x4(%esp)
084268de +0x052:  mov    %eax,(%esp)
084268e1 +0x055:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
084268e6 +0x05a:  mov    %eax,-0x24(%ebp)
084268e9 +0x05d:  mov    0x14(%ebp),%eax
084268ec +0x060:  mov    %eax,(%esp)
084268ef +0x063:  call   084520d4 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x4cea>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x4cea
084268f4 +0x068:  mov    %eax,-0x20(%ebp)
084268f7 +0x06b:  lea    -0x90(%ebp),%ebx
084268fd +0x071:  mov    $0x0,%eax
08426902 +0x076:  mov    $0xf,%edx
08426907 +0x07b:  mov    %ebx,%edi
08426909 +0x07d:  mov    %edx,%ecx
0842690b +0x07f:  rep stos %eax,%es:(%edi)
0842690d +0x081:  mov    -0x20(%ebp),%eax
08426910 +0x084:  mov    %eax,0x8(%esp)
08426914 +0x088:  lea    -0x90(%ebp),%eax
0842691a +0x08e:  mov    %eax,0x4(%esp)
0842691e +0x092:  mov    -0x24(%ebp),%eax
08426921 +0x095:  mov    %eax,(%esp)
08426924 +0x098:  call   083f48aa <_ZN5MySQL13escape_stringEPcPKc>  ; MySQL::escape_string(char*, char const*)
08426929 +0x09d:  lea    -0x90(%ebp),%eax
0842692f +0x0a3:  mov    %eax,0x8(%esp)
08426933 +0x0a7:  movl   $"seLect delete_flag,m_id,charac_no,job,lev,grow_type,sex from charac_info where charac_name='%s'",0x4(%esp)
0842693b +0x0af:  mov    -0x24(%ebp),%eax
0842693e +0x0b2:  mov    %eax,(%esp)
08426941 +0x0b5:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08426946 +0x0ba:  movl   $0x1,0x4(%esp)
0842694e +0x0c2:  mov    -0x24(%ebp),%eax
08426951 +0x0c5:  mov    %eax,(%esp)
08426954 +0x0c8:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08426959 +0x0cd:  xor    $0x1,%eax
0842695c +0x0d0:  test   %al,%al
0842695e +0x0d2:  je     084269b7 <+0x12b>
08426960 +0x0d4:  movl   $0x0,0x24(%esp)
08426968 +0x0dc:  movl   $0x0,0x20(%esp)
08426970 +0x0e4:  movl   $0x0,0x1c(%esp)
08426978 +0x0ec:  movl   $0x0,0x18(%esp)
08426980 +0x0f4:  movl   $0x0,0x14(%esp)
08426988 +0x0fc:  movl   $0x0,0x10(%esp)
08426990 +0x104:  movl   $0x0,0xc(%esp)
08426998 +0x10c:  mov    0x10(%ebp),%eax
0842699b +0x10f:  mov    %eax,0x8(%esp)
0842699f +0x113:  movl   $0x2,0x4(%esp)
084269a7 +0x11b:  mov    0x8(%ebp),%eax
084269aa +0x11e:  mov    %eax,(%esp)
084269ad +0x121:  call   08426e04 <_ZN21DB_ReqQueryCharacInfo11_sendResultEiiPKciiiiii>  ; DB_ReqQueryCharacInfo::_sendResult(int, int, char const*, int, int, int, int, int, int)
084269b2 +0x126:  jmp    08426d0d <+0x481>
084269b7 +0x12b:  mov    -0x24(%ebp),%eax
084269ba +0x12e:  mov    %eax,(%esp)
084269bd +0x131:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
084269c2 +0x136:  test   %eax,%eax
084269c4 +0x138:  sete   %al
084269c7 +0x13b:  test   %al,%al
084269c9 +0x13d:  je     08426a22 <+0x196>
084269cb +0x13f:  movl   $0x0,0x24(%esp)
084269d3 +0x147:  movl   $0x0,0x20(%esp)
084269db +0x14f:  movl   $0x0,0x1c(%esp)
084269e3 +0x157:  movl   $0x0,0x18(%esp)
084269eb +0x15f:  movl   $0x0,0x14(%esp)
084269f3 +0x167:  movl   $0x0,0x10(%esp)
084269fb +0x16f:  movl   $0x0,0xc(%esp)
08426a03 +0x177:  mov    0x10(%ebp),%eax
08426a06 +0x17a:  mov    %eax,0x8(%esp)
08426a0a +0x17e:  movl   $0x15,0x4(%esp)
08426a12 +0x186:  mov    0x8(%ebp),%eax
08426a15 +0x189:  mov    %eax,(%esp)
08426a18 +0x18c:  call   08426e04 <_ZN21DB_ReqQueryCharacInfo11_sendResultEiiPKciiiiii>  ; DB_ReqQueryCharacInfo::_sendResult(int, int, char const*, int, int, int, int, int, int)
08426a1d +0x191:  jmp    08426d0d <+0x481>
08426a22 +0x196:  mov    -0x24(%ebp),%eax
08426a25 +0x199:  mov    %eax,(%esp)
08426a28 +0x19c:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08426a2d +0x1a1:  test   %eax,%eax
08426a2f +0x1a3:  setne  %al
08426a32 +0x1a6:  test   %al,%al
08426a34 +0x1a8:  je     08426cb6 <+0x42a>
08426a3a +0x1ae:  movl   $0x0,-0x28(%ebp)
08426a41 +0x1b5:  mov    -0x24(%ebp),%eax
08426a44 +0x1b8:  mov    %eax,(%esp)
08426a47 +0x1bb:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08426a4c +0x1c0:  xor    $0x1,%eax
08426a4f +0x1c3:  test   %al,%al
08426a51 +0x1c5:  jne    08426a74 <+0x1e8>
08426a53 +0x1c7:  lea    -0x28(%ebp),%eax
08426a56 +0x1ca:  mov    %eax,0x8(%esp)
08426a5a +0x1ce:  movl   $0x0,0x4(%esp)
08426a62 +0x1d6:  mov    -0x24(%ebp),%eax
08426a65 +0x1d9:  mov    %eax,(%esp)
08426a68 +0x1dc:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08426a6d +0x1e1:  xor    $0x1,%eax
08426a70 +0x1e4:  test   %al,%al
08426a72 +0x1e6:  je     08426a7b <+0x1ef>
08426a74 +0x1e8:  mov    $0x1,%eax
08426a79 +0x1ed:  jmp    08426a80 <+0x1f4>
08426a7b +0x1ef:  mov    $0x0,%eax
08426a80 +0x1f4:  test   %al,%al
08426a82 +0x1f6:  je     08426adb <+0x24f>
08426a84 +0x1f8:  movl   $0x0,0x24(%esp)
08426a8c +0x200:  movl   $0x0,0x20(%esp)
08426a94 +0x208:  movl   $0x0,0x1c(%esp)
08426a9c +0x210:  movl   $0x0,0x18(%esp)
08426aa4 +0x218:  movl   $0x0,0x14(%esp)
08426aac +0x220:  movl   $0x0,0x10(%esp)
08426ab4 +0x228:  movl   $0x0,0xc(%esp)
08426abc +0x230:  mov    0x10(%ebp),%eax
08426abf +0x233:  mov    %eax,0x8(%esp)
08426ac3 +0x237:  movl   $0x2,0x4(%esp)
08426acb +0x23f:  mov    0x8(%ebp),%eax
08426ace +0x242:  mov    %eax,(%esp)
08426ad1 +0x245:  call   08426e04 <_ZN21DB_ReqQueryCharacInfo11_sendResultEiiPKciiiiii>  ; DB_ReqQueryCharacInfo::_sendResult(int, int, char const*, int, int, int, int, int, int)
08426ad6 +0x24a:  jmp    08426d0d <+0x481>
08426adb +0x24f:  mov    -0x28(%ebp),%eax
08426ade +0x252:  test   %eax,%eax
08426ae0 +0x254:  je     08426b39 <+0x2ad>
08426ae2 +0x256:  movl   $0x0,0x24(%esp)
08426aea +0x25e:  movl   $0x0,0x20(%esp)
08426af2 +0x266:  movl   $0x0,0x1c(%esp)
08426afa +0x26e:  movl   $0x0,0x18(%esp)
08426b02 +0x276:  movl   $0x0,0x14(%esp)
08426b0a +0x27e:  movl   $0x0,0x10(%esp)
08426b12 +0x286:  movl   $0x0,0xc(%esp)
08426b1a +0x28e:  mov    0x10(%ebp),%eax
08426b1d +0x291:  mov    %eax,0x8(%esp)
08426b21 +0x295:  movl   $0x15,0x4(%esp)
08426b29 +0x29d:  mov    0x8(%ebp),%eax
08426b2c +0x2a0:  mov    %eax,(%esp)
08426b2f +0x2a3:  call   08426e04 <_ZN21DB_ReqQueryCharacInfo11_sendResultEiiPKciiiiii>  ; DB_ReqQueryCharacInfo::_sendResult(int, int, char const*, int, int, int, int, int, int)
08426b34 +0x2a8:  jmp    08426d0d <+0x481>
08426b39 +0x2ad:  movl   $0x0,-0x2c(%ebp)
08426b40 +0x2b4:  movl   $0x0,-0x30(%ebp)
08426b47 +0x2bb:  movl   $0x0,-0x34(%ebp)
08426b4e +0x2c2:  movl   $0x0,-0x38(%ebp)
08426b55 +0x2c9:  movl   $0x0,-0x1c(%ebp)
08426b5c +0x2d0:  movl   $0x0,-0x3c(%ebp)
08426b63 +0x2d7:  movl   $0x0,-0x40(%ebp)
08426b6a +0x2de:  lea    -0x40(%ebp),%eax
08426b6d +0x2e1:  mov    %eax,0x8(%esp)
08426b71 +0x2e5:  movl   $0x1,0x4(%esp)
08426b79 +0x2ed:  mov    -0x24(%ebp),%eax
08426b7c +0x2f0:  mov    %eax,(%esp)
08426b7f +0x2f3:  call   080e22ae <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x54>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x54
08426b84 +0x2f8:  lea    -0x38(%ebp),%eax
08426b87 +0x2fb:  mov    %eax,0x8(%esp)
08426b8b +0x2ff:  movl   $0x2,0x4(%esp)
08426b93 +0x307:  mov    -0x24(%ebp),%eax
08426b96 +0x30a:  mov    %eax,(%esp)
08426b99 +0x30d:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08426b9e +0x312:  lea    -0x2c(%ebp),%eax
08426ba1 +0x315:  mov    %eax,0x8(%esp)
08426ba5 +0x319:  movl   $0x3,0x4(%esp)
08426bad +0x321:  mov    -0x24(%ebp),%eax
08426bb0 +0x324:  mov    %eax,(%esp)
08426bb3 +0x327:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08426bb8 +0x32c:  lea    -0x30(%ebp),%eax
08426bbb +0x32f:  mov    %eax,0x8(%esp)
08426bbf +0x333:  movl   $0x4,0x4(%esp)
08426bc7 +0x33b:  mov    -0x24(%ebp),%eax
08426bca +0x33e:  mov    %eax,(%esp)
08426bcd +0x341:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08426bd2 +0x346:  lea    -0x34(%ebp),%eax
08426bd5 +0x349:  mov    %eax,0x8(%esp)
08426bd9 +0x34d:  movl   $0x5,0x4(%esp)
08426be1 +0x355:  mov    -0x24(%ebp),%eax
08426be4 +0x358:  mov    %eax,(%esp)
08426be7 +0x35b:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08426bec +0x360:  lea    -0x3c(%ebp),%eax
08426bef +0x363:  mov    %eax,0x8(%esp)
08426bf3 +0x367:  movl   $0x6,0x4(%esp)
08426bfb +0x36f:  mov    -0x24(%ebp),%eax
08426bfe +0x372:  mov    %eax,(%esp)
08426c01 +0x375:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08426c06 +0x37a:  movl   $0x14,0x8(%esp)
08426c0e +0x382:  movl   $0x0,0x4(%esp)
08426c16 +0x38a:  lea    -0x54(%ebp),%eax
08426c19 +0x38d:  mov    %eax,(%esp)
08426c1c +0x390:  call   0807dcc0 <_init+0x5b8>
08426c21 +0x395:  movl   $0xd,0x8(%esp)
08426c29 +0x39d:  movl   $"member_login",0x4(%esp)
08426c31 +0x3a5:  lea    -0x54(%ebp),%eax
08426c34 +0x3a8:  mov    %eax,(%esp)
08426c37 +0x3ab:  call   0807d8a0 <_init+0x198>
08426c3c +0x3b0:  mov    -0x40(%ebp),%eax
08426c3f +0x3b3:  mov    %eax,0x4(%esp)
08426c43 +0x3b7:  mov    0x8(%ebp),%eax
08426c46 +0x3ba:  mov    %eax,(%esp)
08426c49 +0x3bd:  call   08426f46 <_ZN21DB_ReqQueryCharacInfo17_getGiftRecvCountEj>  ; DB_ReqQueryCharacInfo::_getGiftRecvCount(unsigned int)
08426c4e +0x3c2:  mov    %eax,-0x1c(%ebp)
08426c51 +0x3c5:  mov    -0x3c(%ebp),%edi
08426c54 +0x3c8:  mov    -0x34(%ebp),%esi
08426c57 +0x3cb:  mov    -0x30(%ebp),%ebx
08426c5a +0x3ce:  mov    -0x2c(%ebp),%ecx
08426c5d +0x3d1:  mov    -0x38(%ebp),%edx
08426c60 +0x3d4:  mov    -0x20(%ebp),%eax
08426c63 +0x3d7:  mov    %eax,-0xac(%ebp)
08426c69 +0x3dd:  mov    -0x1c(%ebp),%eax
08426c6c +0x3e0:  mov    %eax,-0x9c(%ebp)
08426c72 +0x3e6:  mov    -0x9c(%ebp),%eax
08426c78 +0x3ec:  mov    %eax,0x24(%esp)
08426c7c +0x3f0:  mov    %edi,0x20(%esp)
08426c80 +0x3f4:  mov    %esi,0x1c(%esp)
08426c84 +0x3f8:  mov    %ebx,0x18(%esp)
08426c88 +0x3fc:  mov    %ecx,0x14(%esp)
08426c8c +0x400:  mov    %edx,0x10(%esp)
08426c90 +0x404:  mov    -0xac(%ebp),%ecx
08426c96 +0x40a:  mov    %ecx,0xc(%esp)
08426c9a +0x40e:  mov    0x10(%ebp),%eax
08426c9d +0x411:  mov    %eax,0x8(%esp)
08426ca1 +0x415:  movl   $0x0,0x4(%esp)
08426ca9 +0x41d:  mov    0x8(%ebp),%eax
08426cac +0x420:  mov    %eax,(%esp)
08426caf +0x423:  call   08426e04 <_ZN21DB_ReqQueryCharacInfo11_sendResultEiiPKciiiiii>  ; DB_ReqQueryCharacInfo::_sendResult(int, int, char const*, int, int, int, int, int, int)
08426cb4 +0x428:  jmp    08426d08 <+0x47c>
08426cb6 +0x42a:  movl   $0x0,0x24(%esp)
08426cbe +0x432:  movl   $0x0,0x20(%esp)
08426cc6 +0x43a:  movl   $0x0,0x1c(%esp)
08426cce +0x442:  movl   $0x0,0x18(%esp)
08426cd6 +0x44a:  movl   $0x0,0x14(%esp)
08426cde +0x452:  movl   $0x0,0x10(%esp)
08426ce6 +0x45a:  movl   $0x0,0xc(%esp)
08426cee +0x462:  mov    0x10(%ebp),%eax
08426cf1 +0x465:  mov    %eax,0x8(%esp)
08426cf5 +0x469:  movl   $0x15,0x4(%esp)
08426cfd +0x471:  mov    0x8(%ebp),%eax
08426d00 +0x474:  mov    %eax,(%esp)
08426d03 +0x477:  call   08426e04 <_ZN21DB_ReqQueryCharacInfo11_sendResultEiiPKciiiiii>  ; DB_ReqQueryCharacInfo::_sendResult(int, int, char const*, int, int, int, int, int, int)
08426d08 +0x47c:  mov    $0x1,%eax
08426d0d +0x481:  add    $0xdc,%esp
08426d13 +0x487:  pop    %ebx
08426d14 +0x488:  pop    %esi
08426d15 +0x489:  pop    %edi
08426d16 +0x48a:  pop    %ebp
08426d17 +0x48b:  ret
```

## 反编译 C

```c
// DB_ReqQueryCharacInfo::dispatch @ 0x842688c

/* DB_ReqQueryCharacInfo::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_ReqQueryCharacInfo::dispatch(DB_ReqQueryCharacInfo *this,int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  byte bVar6;
  Stream *pSVar7;
  char local_94 [60];
  undefined1 local_58 [20];
  uint local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  MySQL *local_28;
  SIG_QUERY_CHARAC_INFO *local_24;
  int local_20;
  
  bVar6 = 0;
  pSVar7 = param_3;
  cVar2 = DBDispatcher::dispatch((int)this,param_1,(Stream *)param_2);
  if (cVar2 != '\x01') {
    return 0;
  }
  local_28 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0,pSVar7);
  local_24 = Stream::GetOutBuffer<SIG_QUERY_CHARAC_INFO>(param_3);
  pcVar5 = local_94;
  for (iVar4 = 0xf; iVar4 != 0; iVar4 = iVar4 + -1) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5[2] = '\0';
    pcVar5[3] = '\0';
    pcVar5 = pcVar5 + ((uint)bVar6 * -2 + 1) * 4;
  }
  MySQL::escape_string(local_28,local_94,(char *)local_24);
  MySQL::set_query(local_28,
                   "seLect delete_flag,m_id,charac_no,job,lev,grow_type,sex from charac_info where charac_name=\'%s\'"
                   ,local_94);
  cVar2 = MySQL::exec(local_28,true);
  if (cVar2 == '\x01') {
    iVar4 = MySQL::get_n_rows(local_28);
    if (iVar4 == 0) {
      uVar3 = _sendResult(this,0x15,param_2,(char *)0x0,0,0,0,0,0,0);
      return uVar3;
    }
    iVar4 = MySQL::get_n_rows(local_28);
    if (iVar4 == 0) {
      _sendResult(this,0x15,param_2,(char *)0x0,0,0,0,0,0,0);
    }
    else {
      local_2c = 0;
      cVar2 = MySQL::fetch(local_28);
      if ((cVar2 == '\x01') && (cVar2 = MySQL::get_int(local_28,0,&local_2c), cVar2 == '\x01')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        uVar3 = _sendResult(this,2,param_2,(char *)0x0,0,0,0,0,0,0);
        return uVar3;
      }
      if (local_2c != 0) {
        uVar3 = _sendResult(this,0x15,param_2,(char *)0x0,0,0,0,0,0,0);
        return uVar3;
      }
      local_30 = 0;
      local_34 = 0;
      local_38 = 0;
      local_3c = 0;
      local_20 = 0;
      local_40 = 0;
      local_44 = 0;
      MySQL::get_int(local_28,1,&local_44);
      MySQL::get_int(local_28,2,&local_3c);
      MySQL::get_int(local_28,3,&local_30);
      MySQL::get_int(local_28,4,&local_34);
      MySQL::get_int(local_28,5,&local_38);
      MySQL::get_int(local_28,6,&local_40);
      memset(local_58,0,0x14);
      memcpy(local_58,"member_login",0xd);
      local_20 = _getGiftRecvCount(this,local_44);
      _sendResult(this,0,param_2,(char *)local_24,local_3c,local_30,local_34,local_38,local_40,
                  local_20);
    }
    return 1;
  }
  uVar3 = _sendResult(this,2,param_2,(char *)0x0,0,0,0,0,0,0);
  return uVar3;
}
```
