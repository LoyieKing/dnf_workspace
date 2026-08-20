# dispatch

`_ZN28DB_ReqQueryCharacInfoMailbox8dispatchEiiP6Stream`

`DB_ReqQueryCharacInfoMailbox::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_ReqQueryCharacInfoMailbox` | `0x0843bd46` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843bd46  _ZN28DB_ReqQueryCharacInfoMailbox8dispatchEiiP6Stream
#           DB_ReqQueryCharacInfoMailbox::dispatch(int, int, Stream*)
# range [0x0843bd46, 0x0843c137]
0843bd46 +0x000:  push   %ebp
0843bd47 +0x001:  mov    %esp,%ebp
0843bd49 +0x003:  push   %edi
0843bd4a +0x004:  push   %esi
0843bd4b +0x005:  push   %ebx
0843bd4c +0x006:  sub    $0xac,%esp
0843bd52 +0x00c:  mov    0x8(%ebp),%eax
0843bd55 +0x00f:  mov    0x14(%ebp),%edx
0843bd58 +0x012:  mov    %edx,0xc(%esp)
0843bd5c +0x016:  mov    0x10(%ebp),%edx
0843bd5f +0x019:  mov    %edx,0x8(%esp)
0843bd63 +0x01d:  mov    0xc(%ebp),%edx
0843bd66 +0x020:  mov    %edx,0x4(%esp)
0843bd6a +0x024:  mov    %eax,(%esp)
0843bd6d +0x027:  call   083fbf7c <_ZN12DBDispatcher8dispatchEiiP6Stream>  ; DBDispatcher::dispatch(int, int, Stream*)
0843bd72 +0x02c:  xor    $0x1,%eax
0843bd75 +0x02f:  test   %al,%al
0843bd77 +0x031:  je     0843bd83 <+0x3d>
0843bd79 +0x033:  mov    $0x0,%eax
0843bd7e +0x038:  jmp    0843c12c <+0x3e6>
0843bd83 +0x03d:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0843bd88 +0x042:  movl   $0x0,0x8(%esp)
0843bd90 +0x04a:  movl   $0x2,0x4(%esp)
0843bd98 +0x052:  mov    %eax,(%esp)
0843bd9b +0x055:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0843bda0 +0x05a:  mov    %eax,-0x24(%ebp)
0843bda3 +0x05d:  mov    0x14(%ebp),%eax
0843bda6 +0x060:  mov    %eax,(%esp)
0843bda9 +0x063:  call   084520d4 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x4cea>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x4cea
0843bdae +0x068:  mov    %eax,-0x20(%ebp)
0843bdb1 +0x06b:  lea    -0x7c(%ebp),%ebx
0843bdb4 +0x06e:  mov    $0x0,%eax
0843bdb9 +0x073:  mov    $0xf,%edx
0843bdbe +0x078:  mov    %ebx,%edi
0843bdc0 +0x07a:  mov    %edx,%ecx
0843bdc2 +0x07c:  rep stos %eax,%es:(%edi)
0843bdc4 +0x07e:  mov    -0x20(%ebp),%eax
0843bdc7 +0x081:  mov    %eax,0x8(%esp)
0843bdcb +0x085:  lea    -0x7c(%ebp),%eax
0843bdce +0x088:  mov    %eax,0x4(%esp)
0843bdd2 +0x08c:  mov    -0x24(%ebp),%eax
0843bdd5 +0x08f:  mov    %eax,(%esp)
0843bdd8 +0x092:  call   083f48aa <_ZN5MySQL13escape_stringEPcPKc>  ; MySQL::escape_string(char*, char const*)
0843bddd +0x097:  lea    -0x7c(%ebp),%eax
0843bde0 +0x09a:  mov    %eax,0x8(%esp)
0843bde4 +0x09e:  movl   $"seLect delete_flag,m_id,charac_no,job,lev,grow_type,sex from charac_info where charac_name='%s'",0x4(%esp)
0843bdec +0x0a6:  mov    -0x24(%ebp),%eax
0843bdef +0x0a9:  mov    %eax,(%esp)
0843bdf2 +0x0ac:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0843bdf7 +0x0b1:  movl   $0x1,0x4(%esp)
0843bdff +0x0b9:  mov    -0x24(%ebp),%eax
0843be02 +0x0bc:  mov    %eax,(%esp)
0843be05 +0x0bf:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0843be0a +0x0c4:  xor    $0x1,%eax
0843be0d +0x0c7:  test   %al,%al
0843be0f +0x0c9:  je     0843be60 <+0x11a>
0843be11 +0x0cb:  movl   $0x0,0x20(%esp)
0843be19 +0x0d3:  movl   $0x0,0x1c(%esp)
0843be21 +0x0db:  movl   $0x0,0x18(%esp)
0843be29 +0x0e3:  movl   $0x0,0x14(%esp)
0843be31 +0x0eb:  movl   $0x0,0x10(%esp)
0843be39 +0x0f3:  movl   $0x0,0xc(%esp)
0843be41 +0x0fb:  mov    0x10(%ebp),%eax
0843be44 +0x0fe:  mov    %eax,0x8(%esp)
0843be48 +0x102:  movl   $0x2,0x4(%esp)
0843be50 +0x10a:  mov    0x8(%ebp),%eax
0843be53 +0x10d:  mov    %eax,(%esp)
0843be56 +0x110:  call   0843c224 <_ZN28DB_ReqQueryCharacInfoMailbox11_sendResultEiiPKciiiii>  ; DB_ReqQueryCharacInfoMailbox::_sendResult(int, int, char const*, int, int, int, int, int)
0843be5b +0x115:  jmp    0843c12c <+0x3e6>
0843be60 +0x11a:  mov    -0x24(%ebp),%eax
0843be63 +0x11d:  mov    %eax,(%esp)
0843be66 +0x120:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0843be6b +0x125:  test   %eax,%eax
0843be6d +0x127:  sete   %al
0843be70 +0x12a:  test   %al,%al
0843be72 +0x12c:  je     0843bec3 <+0x17d>
0843be74 +0x12e:  movl   $0x0,0x20(%esp)
0843be7c +0x136:  movl   $0x0,0x1c(%esp)
0843be84 +0x13e:  movl   $0x0,0x18(%esp)
0843be8c +0x146:  movl   $0x0,0x14(%esp)
0843be94 +0x14e:  movl   $0x0,0x10(%esp)
0843be9c +0x156:  movl   $0x0,0xc(%esp)
0843bea4 +0x15e:  mov    0x10(%ebp),%eax
0843bea7 +0x161:  mov    %eax,0x8(%esp)
0843beab +0x165:  movl   $0x15,0x4(%esp)
0843beb3 +0x16d:  mov    0x8(%ebp),%eax
0843beb6 +0x170:  mov    %eax,(%esp)
0843beb9 +0x173:  call   0843c224 <_ZN28DB_ReqQueryCharacInfoMailbox11_sendResultEiiPKciiiii>  ; DB_ReqQueryCharacInfoMailbox::_sendResult(int, int, char const*, int, int, int, int, int)
0843bebe +0x178:  jmp    0843c12c <+0x3e6>
0843bec3 +0x17d:  mov    -0x24(%ebp),%eax
0843bec6 +0x180:  mov    %eax,(%esp)
0843bec9 +0x183:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0843bece +0x188:  test   %eax,%eax
0843bed0 +0x18a:  setne  %al
0843bed3 +0x18d:  test   %al,%al
0843bed5 +0x18f:  je     0843c0dd <+0x397>
0843bedb +0x195:  movl   $0x0,-0x28(%ebp)
0843bee2 +0x19c:  mov    -0x24(%ebp),%eax
0843bee5 +0x19f:  mov    %eax,(%esp)
0843bee8 +0x1a2:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0843beed +0x1a7:  xor    $0x1,%eax
0843bef0 +0x1aa:  test   %al,%al
0843bef2 +0x1ac:  jne    0843bf15 <+0x1cf>
0843bef4 +0x1ae:  lea    -0x28(%ebp),%eax
0843bef7 +0x1b1:  mov    %eax,0x8(%esp)
0843befb +0x1b5:  movl   $0x0,0x4(%esp)
0843bf03 +0x1bd:  mov    -0x24(%ebp),%eax
0843bf06 +0x1c0:  mov    %eax,(%esp)
0843bf09 +0x1c3:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0843bf0e +0x1c8:  xor    $0x1,%eax
0843bf11 +0x1cb:  test   %al,%al
0843bf13 +0x1cd:  je     0843bf1c <+0x1d6>
0843bf15 +0x1cf:  mov    $0x1,%eax
0843bf1a +0x1d4:  jmp    0843bf21 <+0x1db>
0843bf1c +0x1d6:  mov    $0x0,%eax
0843bf21 +0x1db:  test   %al,%al
0843bf23 +0x1dd:  je     0843bf74 <+0x22e>
0843bf25 +0x1df:  movl   $0x0,0x20(%esp)
0843bf2d +0x1e7:  movl   $0x0,0x1c(%esp)
0843bf35 +0x1ef:  movl   $0x0,0x18(%esp)
0843bf3d +0x1f7:  movl   $0x0,0x14(%esp)
0843bf45 +0x1ff:  movl   $0x0,0x10(%esp)
0843bf4d +0x207:  movl   $0x0,0xc(%esp)
0843bf55 +0x20f:  mov    0x10(%ebp),%eax
0843bf58 +0x212:  mov    %eax,0x8(%esp)
0843bf5c +0x216:  movl   $0x2,0x4(%esp)
0843bf64 +0x21e:  mov    0x8(%ebp),%eax
0843bf67 +0x221:  mov    %eax,(%esp)
0843bf6a +0x224:  call   0843c224 <_ZN28DB_ReqQueryCharacInfoMailbox11_sendResultEiiPKciiiii>  ; DB_ReqQueryCharacInfoMailbox::_sendResult(int, int, char const*, int, int, int, int, int)
0843bf6f +0x229:  jmp    0843c12c <+0x3e6>
0843bf74 +0x22e:  mov    -0x28(%ebp),%eax
0843bf77 +0x231:  test   %eax,%eax
0843bf79 +0x233:  je     0843bfca <+0x284>
0843bf7b +0x235:  movl   $0x0,0x20(%esp)
0843bf83 +0x23d:  movl   $0x0,0x1c(%esp)
0843bf8b +0x245:  movl   $0x0,0x18(%esp)
0843bf93 +0x24d:  movl   $0x0,0x14(%esp)
0843bf9b +0x255:  movl   $0x0,0x10(%esp)
0843bfa3 +0x25d:  movl   $0x0,0xc(%esp)
0843bfab +0x265:  mov    0x10(%ebp),%eax
0843bfae +0x268:  mov    %eax,0x8(%esp)
0843bfb2 +0x26c:  movl   $0x15,0x4(%esp)
0843bfba +0x274:  mov    0x8(%ebp),%eax
0843bfbd +0x277:  mov    %eax,(%esp)
0843bfc0 +0x27a:  call   0843c224 <_ZN28DB_ReqQueryCharacInfoMailbox11_sendResultEiiPKciiiii>  ; DB_ReqQueryCharacInfoMailbox::_sendResult(int, int, char const*, int, int, int, int, int)
0843bfc5 +0x27f:  jmp    0843c12c <+0x3e6>
0843bfca +0x284:  movl   $0x0,-0x2c(%ebp)
0843bfd1 +0x28b:  movl   $0x0,-0x30(%ebp)
0843bfd8 +0x292:  movl   $0x0,-0x34(%ebp)
0843bfdf +0x299:  movl   $0x0,-0x38(%ebp)
0843bfe6 +0x2a0:  movl   $0x0,-0x1c(%ebp)
0843bfed +0x2a7:  movl   $0x0,-0x3c(%ebp)
0843bff4 +0x2ae:  movl   $0x0,-0x40(%ebp)
0843bffb +0x2b5:  lea    -0x40(%ebp),%eax
0843bffe +0x2b8:  mov    %eax,0x8(%esp)
0843c002 +0x2bc:  movl   $0x1,0x4(%esp)
0843c00a +0x2c4:  mov    -0x24(%ebp),%eax
0843c00d +0x2c7:  mov    %eax,(%esp)
0843c010 +0x2ca:  call   080e22ae <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x54>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x54
0843c015 +0x2cf:  lea    -0x38(%ebp),%eax
0843c018 +0x2d2:  mov    %eax,0x8(%esp)
0843c01c +0x2d6:  movl   $0x2,0x4(%esp)
0843c024 +0x2de:  mov    -0x24(%ebp),%eax
0843c027 +0x2e1:  mov    %eax,(%esp)
0843c02a +0x2e4:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0843c02f +0x2e9:  lea    -0x2c(%ebp),%eax
0843c032 +0x2ec:  mov    %eax,0x8(%esp)
0843c036 +0x2f0:  movl   $0x3,0x4(%esp)
0843c03e +0x2f8:  mov    -0x24(%ebp),%eax
0843c041 +0x2fb:  mov    %eax,(%esp)
0843c044 +0x2fe:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0843c049 +0x303:  lea    -0x30(%ebp),%eax
0843c04c +0x306:  mov    %eax,0x8(%esp)
0843c050 +0x30a:  movl   $0x4,0x4(%esp)
0843c058 +0x312:  mov    -0x24(%ebp),%eax
0843c05b +0x315:  mov    %eax,(%esp)
0843c05e +0x318:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0843c063 +0x31d:  lea    -0x34(%ebp),%eax
0843c066 +0x320:  mov    %eax,0x8(%esp)
0843c06a +0x324:  movl   $0x5,0x4(%esp)
0843c072 +0x32c:  mov    -0x24(%ebp),%eax
0843c075 +0x32f:  mov    %eax,(%esp)
0843c078 +0x332:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0843c07d +0x337:  lea    -0x3c(%ebp),%eax
0843c080 +0x33a:  mov    %eax,0x8(%esp)
0843c084 +0x33e:  movl   $0x6,0x4(%esp)
0843c08c +0x346:  mov    -0x24(%ebp),%eax
0843c08f +0x349:  mov    %eax,(%esp)
0843c092 +0x34c:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0843c097 +0x351:  mov    -0x3c(%ebp),%edi
0843c09a +0x354:  mov    -0x34(%ebp),%esi
0843c09d +0x357:  mov    -0x30(%ebp),%ebx
0843c0a0 +0x35a:  mov    -0x2c(%ebp),%ecx
0843c0a3 +0x35d:  mov    -0x38(%ebp),%edx
0843c0a6 +0x360:  mov    -0x20(%ebp),%eax
0843c0a9 +0x363:  mov    %edi,0x20(%esp)
0843c0ad +0x367:  mov    %esi,0x1c(%esp)
0843c0b1 +0x36b:  mov    %ebx,0x18(%esp)
0843c0b5 +0x36f:  mov    %ecx,0x14(%esp)
0843c0b9 +0x373:  mov    %edx,0x10(%esp)
0843c0bd +0x377:  mov    %eax,0xc(%esp)
0843c0c1 +0x37b:  mov    0x10(%ebp),%eax
0843c0c4 +0x37e:  mov    %eax,0x8(%esp)
0843c0c8 +0x382:  movl   $0x0,0x4(%esp)
0843c0d0 +0x38a:  mov    0x8(%ebp),%eax
0843c0d3 +0x38d:  mov    %eax,(%esp)
0843c0d6 +0x390:  call   0843c224 <_ZN28DB_ReqQueryCharacInfoMailbox11_sendResultEiiPKciiiii>  ; DB_ReqQueryCharacInfoMailbox::_sendResult(int, int, char const*, int, int, int, int, int)
0843c0db +0x395:  jmp    0843c127 <+0x3e1>
0843c0dd +0x397:  movl   $0x0,0x20(%esp)
0843c0e5 +0x39f:  movl   $0x0,0x1c(%esp)
0843c0ed +0x3a7:  movl   $0x0,0x18(%esp)
0843c0f5 +0x3af:  movl   $0x0,0x14(%esp)
0843c0fd +0x3b7:  movl   $0x0,0x10(%esp)
0843c105 +0x3bf:  movl   $0x0,0xc(%esp)
0843c10d +0x3c7:  mov    0x10(%ebp),%eax
0843c110 +0x3ca:  mov    %eax,0x8(%esp)
0843c114 +0x3ce:  movl   $0x15,0x4(%esp)
0843c11c +0x3d6:  mov    0x8(%ebp),%eax
0843c11f +0x3d9:  mov    %eax,(%esp)
0843c122 +0x3dc:  call   0843c224 <_ZN28DB_ReqQueryCharacInfoMailbox11_sendResultEiiPKciiiii>  ; DB_ReqQueryCharacInfoMailbox::_sendResult(int, int, char const*, int, int, int, int, int)
0843c127 +0x3e1:  mov    $0x1,%eax
0843c12c +0x3e6:  add    $0xac,%esp
0843c132 +0x3ec:  pop    %ebx
0843c133 +0x3ed:  pop    %esi
0843c134 +0x3ee:  pop    %edi
0843c135 +0x3ef:  pop    %ebp
0843c136 +0x3f0:  ret
0843c137 +0x3f1:  nop
```

## 反编译 C

```c
// DB_ReqQueryCharacInfoMailbox::dispatch @ 0x843bd46

/* DB_ReqQueryCharacInfoMailbox::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_ReqQueryCharacInfoMailbox::dispatch
          (DB_ReqQueryCharacInfoMailbox *this,int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  byte bVar6;
  Stream *pSVar7;
  char local_80 [60];
  uint local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  MySQL *local_28;
  SIG_QUERY_CHARAC_INFO *local_24;
  undefined4 local_20;
  
  bVar6 = 0;
  pSVar7 = param_3;
  cVar2 = DBDispatcher::dispatch((int)this,param_1,(Stream *)param_2);
  if (cVar2 != '\x01') {
    return 0;
  }
  local_28 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0,pSVar7);
  local_24 = Stream::GetOutBuffer<SIG_QUERY_CHARAC_INFO>(param_3);
  pcVar5 = local_80;
  for (iVar4 = 0xf; iVar4 != 0; iVar4 = iVar4 + -1) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5[2] = '\0';
    pcVar5[3] = '\0';
    pcVar5 = pcVar5 + ((uint)bVar6 * -2 + 1) * 4;
  }
  MySQL::escape_string(local_28,local_80,(char *)local_24);
  MySQL::set_query(local_28,
                   "seLect delete_flag,m_id,charac_no,job,lev,grow_type,sex from charac_info where charac_name=\'%s\'"
                   ,local_80);
  cVar2 = MySQL::exec(local_28,true);
  if (cVar2 == '\x01') {
    iVar4 = MySQL::get_n_rows(local_28);
    if (iVar4 == 0) {
      uVar3 = _sendResult(this,0x15,param_2,(char *)0x0,0,0,0,0,0);
      return uVar3;
    }
    iVar4 = MySQL::get_n_rows(local_28);
    if (iVar4 == 0) {
      _sendResult(this,0x15,param_2,(char *)0x0,0,0,0,0,0);
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
        uVar3 = _sendResult(this,2,param_2,(char *)0x0,0,0,0,0,0);
        return uVar3;
      }
      if (local_2c != 0) {
        uVar3 = _sendResult(this,0x15,param_2,(char *)0x0,0,0,0,0,0);
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
      _sendResult(this,0,param_2,(char *)local_24,local_3c,local_30,local_34,local_38,local_40);
    }
    return 1;
  }
  uVar3 = _sendResult(this,2,param_2,(char *)0x0,0,0,0,0,0);
  return uVar3;
}
```
