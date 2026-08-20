# dispatch

`_ZN22DB_ReqChangeCharacName8dispatchEiiP6Stream`

`DB_ReqChangeCharacName::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_ReqChangeCharacName` | `0x084262ea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084262ea  _ZN22DB_ReqChangeCharacName8dispatchEiiP6Stream
#           DB_ReqChangeCharacName::dispatch(int, int, Stream*)
# range [0x084262ea, 0x0842658f]
084262ea +0x000:  push   %ebp
084262eb +0x001:  mov    %esp,%ebp
084262ed +0x003:  push   %edi
084262ee +0x004:  push   %ebx
084262ef +0x005:  sub    $0x60,%esp
084262f2 +0x008:  mov    0x8(%ebp),%eax
084262f5 +0x00b:  mov    0x14(%ebp),%edx
084262f8 +0x00e:  mov    %edx,0xc(%esp)
084262fc +0x012:  mov    0x10(%ebp),%edx
084262ff +0x015:  mov    %edx,0x8(%esp)
08426303 +0x019:  mov    0xc(%ebp),%edx
08426306 +0x01c:  mov    %edx,0x4(%esp)
0842630a +0x020:  mov    %eax,(%esp)
0842630d +0x023:  call   083fbf7c <_ZN12DBDispatcher8dispatchEiiP6Stream>  ; DBDispatcher::dispatch(int, int, Stream*)
08426312 +0x028:  xor    $0x1,%eax
08426315 +0x02b:  test   %al,%al
08426317 +0x02d:  je     08426323 <+0x39>
08426319 +0x02f:  mov    $0x0,%eax
0842631e +0x034:  jmp    08426588 <+0x29e>
08426323 +0x039:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08426328 +0x03e:  movl   $0x0,0x8(%esp)
08426330 +0x046:  movl   $0x2,0x4(%esp)
08426338 +0x04e:  mov    %eax,(%esp)
0842633b +0x051:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08426340 +0x056:  mov    %eax,-0x18(%ebp)
08426343 +0x059:  mov    0x14(%ebp),%eax
08426346 +0x05c:  mov    %eax,(%esp)
08426349 +0x05f:  call   0845206a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x4c80>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x4c80
0842634e +0x064:  mov    %eax,-0x14(%ebp)
08426351 +0x067:  lea    -0x58(%ebp),%ebx
08426354 +0x06a:  mov    $0x0,%eax
08426359 +0x06f:  mov    $0xf,%edx
0842635e +0x074:  mov    %ebx,%edi
08426360 +0x076:  mov    %edx,%ecx
08426362 +0x078:  rep stos %eax,%es:(%edi)
08426364 +0x07a:  mov    -0x14(%ebp),%eax
08426367 +0x07d:  add    $0x4,%eax
0842636a +0x080:  mov    %eax,0x8(%esp)
0842636e +0x084:  lea    -0x58(%ebp),%eax
08426371 +0x087:  mov    %eax,0x4(%esp)
08426375 +0x08b:  mov    -0x18(%ebp),%eax
08426378 +0x08e:  mov    %eax,(%esp)
0842637b +0x091:  call   083f48aa <_ZN5MySQL13escape_stringEPcPKc>  ; MySQL::escape_string(char*, char const*)
08426380 +0x096:  movl   $0x2,-0x1c(%ebp)
08426387 +0x09d:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0842638c +0x0a2:  lea    0x68(%eax),%edx
0842638f +0x0a5:  lea    -0x1c(%ebp),%eax
08426392 +0x0a8:  mov    %eax,0x4(%esp)
08426396 +0x0ac:  mov    %edx,(%esp)
08426399 +0x0af:  call   080ecf82 <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0x267>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0x267
0842639e +0x0b4:  add    $0x42,%eax
084263a1 +0x0b7:  lea    -0x58(%ebp),%edx
084263a4 +0x0ba:  mov    %edx,0xc(%esp)
084263a8 +0x0be:  mov    %eax,0x8(%esp)
084263ac +0x0c2:  mov    -0x18(%ebp),%eax
084263af +0x0c5:  mov    %eax,0x4(%esp)
084263b3 +0x0c9:  mov    0x8(%ebp),%eax
084263b6 +0x0cc:  mov    %eax,(%esp)
084263b9 +0x0cf:  call   084267c2 <_ZN22DB_ReqChangeCharacName18_hasSameCharacNameEP5MySQLPKcS3_>  ; DB_ReqChangeCharacName::_hasSameCharacName(MySQL*, char const*, char const*)
084263be +0x0d4:  mov    %eax,-0x10(%ebp)
084263c1 +0x0d7:  cmpl   $0x0,-0x10(%ebp)
084263c5 +0x0db:  je     084263f1 <+0x107>
084263c7 +0x0dd:  mov    -0x10(%ebp),%eax
084263ca +0x0e0:  mov    %eax,0xc(%esp)
084263ce +0x0e4:  mov    0x10(%ebp),%eax
084263d1 +0x0e7:  mov    %eax,0x8(%esp)
084263d5 +0x0eb:  mov    -0x14(%ebp),%eax
084263d8 +0x0ee:  mov    %eax,0x4(%esp)
084263dc +0x0f2:  mov    0x8(%ebp),%eax
084263df +0x0f5:  mov    %eax,(%esp)
084263e2 +0x0f8:  call   084266a4 <_ZN22DB_ReqChangeCharacName11_sendResultEPK22SIG_CHANGE_CHARAC_NAMEii>  ; DB_ReqChangeCharacName::_sendResult(SIG_CHANGE_CHARAC_NAME const*, int, int)
084263e7 +0x0fd:  mov    $0x1,%eax
084263ec +0x102:  jmp    08426588 <+0x29e>
084263f1 +0x107:  mov    -0x14(%ebp),%eax
084263f4 +0x10a:  mov    (%eax),%eax
084263f6 +0x10c:  mov    %eax,0xc(%esp)
084263fa +0x110:  lea    -0x58(%ebp),%eax
084263fd +0x113:  mov    %eax,0x8(%esp)
08426401 +0x117:  movl   $"upDate charac_info set charac_name='%s' where charac_no=%d and delete_flag=0",0x4(%esp)
08426409 +0x11f:  mov    -0x18(%ebp),%eax
0842640c +0x122:  mov    %eax,(%esp)
0842640f +0x125:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08426414 +0x12a:  movl   $0x1,0x4(%esp)
0842641c +0x132:  mov    -0x18(%ebp),%eax
0842641f +0x135:  mov    %eax,(%esp)
08426422 +0x138:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08426427 +0x13d:  xor    $0x1,%eax
0842642a +0x140:  test   %al,%al
0842642c +0x142:  jne    0842643f <+0x155>
0842642e +0x144:  mov    -0x18(%ebp),%eax
08426431 +0x147:  mov    %eax,(%esp)
08426434 +0x14a:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
08426439 +0x14f:  or     %edx,%eax
0842643b +0x151:  test   %eax,%eax
0842643d +0x153:  jne    08426446 <+0x15c>
0842643f +0x155:  mov    $0x1,%eax
08426444 +0x15a:  jmp    0842644b <+0x161>
08426446 +0x15c:  mov    $0x0,%eax
0842644b +0x161:  test   %al,%al
0842644d +0x163:  je     0842647a <+0x190>
0842644f +0x165:  movl   $0x2,0xc(%esp)
08426457 +0x16d:  mov    0x10(%ebp),%eax
0842645a +0x170:  mov    %eax,0x8(%esp)
0842645e +0x174:  mov    -0x14(%ebp),%eax
08426461 +0x177:  mov    %eax,0x4(%esp)
08426465 +0x17b:  mov    0x8(%ebp),%eax
08426468 +0x17e:  mov    %eax,(%esp)
0842646b +0x181:  call   084266a4 <_ZN22DB_ReqChangeCharacName11_sendResultEPK22SIG_CHANGE_CHARAC_NAMEii>  ; DB_ReqChangeCharacName::_sendResult(SIG_CHANGE_CHARAC_NAME const*, int, int)
08426470 +0x186:  mov    $0x1,%eax
08426475 +0x18b:  jmp    08426588 <+0x29e>
0842647a +0x190:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0842647f +0x195:  movl   $0x0,0x8(%esp)
08426487 +0x19d:  movl   $0x8,0x4(%esp)
0842648f +0x1a5:  mov    %eax,(%esp)
08426492 +0x1a8:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08426497 +0x1ad:  mov    %eax,-0xc(%ebp)
0842649a +0x1b0:  mov    -0x14(%ebp),%eax
0842649d +0x1b3:  movzbl 0x2c(%eax),%eax
084264a1 +0x1b7:  movzbl %al,%edx
084264a4 +0x1ba:  mov    -0x14(%ebp),%eax
084264a7 +0x1bd:  mov    (%eax),%eax
084264a9 +0x1bf:  mov    %edx,0xc(%esp)
084264ad +0x1c3:  mov    %eax,0x8(%esp)
084264b1 +0x1c7:  movl   $"seLect guild_id from guild_member where charac_no=%d and member_flag=1 and server_id=%d",0x4(%esp)
084264b9 +0x1cf:  mov    -0xc(%ebp),%eax
084264bc +0x1d2:  mov    %eax,(%esp)
084264bf +0x1d5:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084264c4 +0x1da:  mov    -0x14(%ebp),%eax
084264c7 +0x1dd:  movl   $0x0,0x28(%eax)
084264ce +0x1e4:  movl   $0x1,0x4(%esp)
084264d6 +0x1ec:  mov    -0xc(%ebp),%eax
084264d9 +0x1ef:  mov    %eax,(%esp)
084264dc +0x1f2:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084264e1 +0x1f7:  xor    $0x1,%eax
084264e4 +0x1fa:  test   %al,%al
084264e6 +0x1fc:  jne    084264fa <+0x210>
084264e8 +0x1fe:  mov    -0xc(%ebp),%eax
084264eb +0x201:  mov    %eax,(%esp)
084264ee +0x204:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
084264f3 +0x209:  xor    $0x1,%eax
084264f6 +0x20c:  test   %al,%al
084264f8 +0x20e:  je     08426501 <+0x217>
084264fa +0x210:  mov    $0x1,%eax
084264ff +0x215:  jmp    08426506 <+0x21c>
08426501 +0x217:  mov    $0x0,%eax
08426506 +0x21c:  test   %al,%al
08426508 +0x21e:  je     08426514 <+0x22a>
0842650a +0x220:  mov    -0x14(%ebp),%eax
0842650d +0x223:  movl   $0x0,0x28(%eax)
08426514 +0x22a:  mov    -0xc(%ebp),%eax
08426517 +0x22d:  mov    %eax,(%esp)
0842651a +0x230:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0842651f +0x235:  test   %eax,%eax
08426521 +0x237:  sete   %al
08426524 +0x23a:  test   %al,%al
08426526 +0x23c:  je     08426534 <+0x24a>
08426528 +0x23e:  mov    -0x14(%ebp),%eax
0842652b +0x241:  movl   $0x0,0x28(%eax)
08426532 +0x248:  jmp    08426562 <+0x278>
08426534 +0x24a:  mov    -0x14(%ebp),%eax
08426537 +0x24d:  add    $0x28,%eax
0842653a +0x250:  mov    %eax,0x8(%esp)
0842653e +0x254:  movl   $0x0,0x4(%esp)
08426546 +0x25c:  mov    -0xc(%ebp),%eax
08426549 +0x25f:  mov    %eax,(%esp)
0842654c +0x262:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
08426551 +0x267:  xor    $0x1,%eax
08426554 +0x26a:  test   %al,%al
08426556 +0x26c:  je     08426562 <+0x278>
08426558 +0x26e:  mov    -0x14(%ebp),%eax
0842655b +0x271:  movl   $0x0,0x28(%eax)
08426562 +0x278:  movl   $0x0,0xc(%esp)
0842656a +0x280:  mov    0x10(%ebp),%eax
0842656d +0x283:  mov    %eax,0x8(%esp)
08426571 +0x287:  mov    -0x14(%ebp),%eax
08426574 +0x28a:  mov    %eax,0x4(%esp)
08426578 +0x28e:  mov    0x8(%ebp),%eax
0842657b +0x291:  mov    %eax,(%esp)
0842657e +0x294:  call   084266a4 <_ZN22DB_ReqChangeCharacName11_sendResultEPK22SIG_CHANGE_CHARAC_NAMEii>  ; DB_ReqChangeCharacName::_sendResult(SIG_CHANGE_CHARAC_NAME const*, int, int)
08426583 +0x299:  mov    $0x1,%eax
08426588 +0x29e:  add    $0x60,%esp
0842658b +0x2a1:  pop    %ebx
0842658c +0x2a2:  pop    %edi
0842658d +0x2a3:  pop    %ebp
0842658e +0x2a4:  ret
0842658f +0x2a5:  nop
```

## 反编译 C

```c
// DB_ReqChangeCharacName::dispatch @ 0x84262ea

/* DB_ReqChangeCharacName::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_ReqChangeCharacName::dispatch
          (DB_ReqChangeCharacName *this,int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  byte bVar5;
  longlong lVar6;
  Stream *pSVar7;
  char local_5c [60];
  undefined4 local_20;
  MySQL *local_1c;
  SIG_CHANGE_CHARAC_NAME *local_18;
  int local_14;
  MySQL *local_10;
  
  bVar5 = 0;
  pSVar7 = param_3;
  cVar2 = DBDispatcher::dispatch((int)this,param_1,(Stream *)param_2);
  if (cVar2 != '\x01') {
    return 0;
  }
  local_1c = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0,pSVar7);
  local_18 = Stream::GetOutBuffer<SIG_CHANGE_CHARAC_NAME>(param_3);
  pcVar4 = local_5c;
  for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + ((uint)bVar5 * -2 + 1) * 4;
  }
  MySQL::escape_string(local_1c,local_5c,(char *)(local_18 + 4));
  local_20 = 2;
  iVar3 = G_CEnvironment();
  iVar3 = std::
          map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>
          ::operator[]((map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>
                        *)(iVar3 + 0x68),(ENUM_DB_HANDLE_IDX *)&local_20);
  local_14 = _hasSameCharacName(this,local_1c,(char *)(iVar3 + 0x42),local_5c);
  if (local_14 == 0) {
    MySQL::set_query(local_1c,
                     "upDate charac_info set charac_name=\'%s\' where charac_no=%d and delete_flag=0"
                     ,local_5c,*(undefined4 *)local_18);
    cVar2 = MySQL::exec(local_1c,true);
    if ((cVar2 == '\x01') && (lVar6 = MySQL::getAffectedRowCount(local_1c), lVar6 != 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,8,0);
      MySQL::set_query(local_10,
                       "seLect guild_id from guild_member where charac_no=%d and member_flag=1 and server_id=%d"
                       ,*(undefined4 *)local_18,(uint)(byte)local_18[0x2c]);
      *(undefined4 *)(local_18 + 0x28) = 0;
      cVar2 = MySQL::exec(local_10,true);
      if ((cVar2 == '\x01') && (cVar2 = MySQL::fetch(local_10), cVar2 == '\x01')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        *(undefined4 *)(local_18 + 0x28) = 0;
      }
      iVar3 = MySQL::get_n_rows(local_10);
      if (iVar3 == 0) {
        *(undefined4 *)(local_18 + 0x28) = 0;
      }
      else {
        cVar2 = MySQL::get_uint(local_10,0,(uint *)(local_18 + 0x28));
        if (cVar2 != '\x01') {
          *(undefined4 *)(local_18 + 0x28) = 0;
        }
      }
      _sendResult(this,local_18,param_2,0);
      return 1;
    }
    _sendResult(this,local_18,param_2,2);
    return 1;
  }
  _sendResult(this,local_18,param_2,local_14);
  return 1;
}
```
