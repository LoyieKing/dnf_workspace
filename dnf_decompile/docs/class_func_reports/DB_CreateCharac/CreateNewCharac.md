# CreateNewCharac

`_ZN15DB_CreateCharac15CreateNewCharacEP17SIG_CREATE_CHARAC`

`DB_CreateCharac::CreateNewCharac(SIG_CREATE_CHARAC*)`

| 类 | 地址 |
|---|---|
| `DB_CreateCharac` | `0x08401dcc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08401dcc  _ZN15DB_CreateCharac15CreateNewCharacEP17SIG_CREATE_CHARAC
#           DB_CreateCharac::CreateNewCharac(SIG_CREATE_CHARAC*)
# range [0x08401dcc, 0x0840215d]
08401dcc +0x000:  push   %ebp
08401dcd +0x001:  mov    %esp,%ebp
08401dcf +0x003:  push   %edi
08401dd0 +0x004:  push   %ebx
08401dd1 +0x005:  sub    $0x70,%esp
08401dd4 +0x008:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08401dd9 +0x00d:  movl   $0x0,0x8(%esp)
08401de1 +0x015:  movl   $0x2,0x4(%esp)
08401de9 +0x01d:  mov    %eax,(%esp)
08401dec +0x020:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08401df1 +0x025:  mov    %eax,-0xc(%ebp)
08401df4 +0x028:  mov    0xc(%ebp),%eax
08401df7 +0x02b:  mov    (%eax),%eax
08401df9 +0x02d:  movl   $0x0,0x4(%esp)
08401e01 +0x035:  mov    %eax,(%esp)
08401e04 +0x038:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08401e09 +0x03d:  mov    %eax,0x8(%esp)
08401e0d +0x041:  movl   $"seLect count(*) from charac_info where m_id=%s and delete_flag=0",0x4(%esp)
08401e15 +0x049:  mov    -0xc(%ebp),%eax
08401e18 +0x04c:  mov    %eax,(%esp)
08401e1b +0x04f:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08401e20 +0x054:  movl   $0x1,0x4(%esp)
08401e28 +0x05c:  mov    -0xc(%ebp),%eax
08401e2b +0x05f:  mov    %eax,(%esp)
08401e2e +0x062:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08401e33 +0x067:  xor    $0x1,%eax
08401e36 +0x06a:  test   %al,%al
08401e38 +0x06c:  je     08401e51 <+0x85>
08401e3a +0x06e:  mov    0xc(%ebp),%eax
08401e3d +0x071:  movl   $0x2,0x5344(%eax)
08401e47 +0x07b:  mov    $0x0,%eax
08401e4c +0x080:  jmp    08402157 <+0x38b>
08401e51 +0x085:  movl   $0x0,-0x28(%ebp)
08401e58 +0x08c:  mov    -0xc(%ebp),%eax
08401e5b +0x08f:  mov    %eax,(%esp)
08401e5e +0x092:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08401e63 +0x097:  xor    $0x1,%eax
08401e66 +0x09a:  test   %al,%al
08401e68 +0x09c:  jne    08401e93 <+0xc7>
08401e6a +0x09e:  lea    -0x28(%ebp),%eax
08401e6d +0x0a1:  mov    %eax,0x8(%esp)
08401e71 +0x0a5:  movl   $0x0,0x4(%esp)
08401e79 +0x0ad:  mov    -0xc(%ebp),%eax
08401e7c +0x0b0:  mov    %eax,(%esp)
08401e7f +0x0b3:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08401e84 +0x0b8:  xor    $0x1,%eax
08401e87 +0x0bb:  test   %al,%al
08401e89 +0x0bd:  jne    08401e93 <+0xc7>
08401e8b +0x0bf:  mov    -0x28(%ebp),%eax
08401e8e +0x0c2:  cmp    $0x23,%eax
08401e91 +0x0c5:  jle    08401e9a <+0xce>
08401e93 +0x0c7:  mov    $0x1,%eax
08401e98 +0x0cc:  jmp    08401e9f <+0xd3>
08401e9a +0x0ce:  mov    $0x0,%eax
08401e9f +0x0d3:  test   %al,%al
08401ea1 +0x0d5:  je     08401eba <+0xee>
08401ea3 +0x0d7:  mov    0xc(%ebp),%eax
08401ea6 +0x0da:  movl   $0x2,0x5344(%eax)
08401eb0 +0x0e4:  mov    $0x0,%eax
08401eb5 +0x0e9:  jmp    08402157 <+0x38b>
08401eba +0x0ee:  movl   $0x2,-0x24(%ebp)
08401ec1 +0x0f5:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08401ec6 +0x0fa:  lea    0x68(%eax),%edx
08401ec9 +0x0fd:  lea    -0x24(%ebp),%eax
08401ecc +0x100:  mov    %eax,0x4(%esp)
08401ed0 +0x104:  mov    %edx,(%esp)
08401ed3 +0x107:  call   080ecf82 <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0x267>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0x267
08401ed8 +0x10c:  add    $0x42,%eax
08401edb +0x10f:  mov    0xc(%ebp),%edx
08401ede +0x112:  mov    %edx,0xc(%esp)
08401ee2 +0x116:  mov    %eax,0x8(%esp)
08401ee6 +0x11a:  mov    -0xc(%ebp),%eax
08401ee9 +0x11d:  mov    %eax,0x4(%esp)
08401eed +0x121:  mov    0x8(%ebp),%eax
08401ef0 +0x124:  mov    %eax,(%esp)
08401ef3 +0x127:  call   084011d4 <_ZN15DB_CreateCharac16_checkCharacNameEP5MySQLPKcP17SIG_CREATE_CHARAC>  ; DB_CreateCharac::_checkCharacName(MySQL*, char const*, SIG_CREATE_CHARAC*)
08401ef8 +0x12c:  xor    $0x1,%eax
08401efb +0x12f:  test   %al,%al
08401efd +0x131:  je     08401f09 <+0x13d>
08401eff +0x133:  mov    $0x0,%eax
08401f04 +0x138:  jmp    08402157 <+0x38b>
08401f09 +0x13d:  mov    0xc(%ebp),%eax
08401f0c +0x140:  movb   $0x0,0x534d(%eax)
08401f13 +0x147:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08401f18 +0x14c:  mov    0x378(%eax),%eax
08401f1e +0x152:  cmp    $0xa,%eax
08401f21 +0x155:  jne    08401f3d <+0x171>
08401f23 +0x157:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08401f2a +0x15e:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08401f2f +0x163:  cmp    $0x478e7050,%eax
08401f34 +0x168:  ja     08401f3d <+0x171>
08401f36 +0x16a:  mov    $0x1,%eax
08401f3b +0x16f:  jmp    08401f42 <+0x176>
08401f3d +0x171:  mov    $0x0,%eax
08401f42 +0x176:  test   %al,%al
08401f44 +0x178:  je     08402019 <+0x24d>
08401f4a +0x17e:  mov    0xc(%ebp),%eax
08401f4d +0x181:  mov    (%eax),%eax
08401f4f +0x183:  movl   $0x0,0x4(%esp)
08401f57 +0x18b:  mov    %eax,(%esp)
08401f5a +0x18e:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08401f5f +0x193:  mov    %eax,0x8(%esp)
08401f63 +0x197:  movl   $"seLect count(*) from charac_info where m_id=%s",0x4(%esp)
08401f6b +0x19f:  mov    -0xc(%ebp),%eax
08401f6e +0x1a2:  mov    %eax,(%esp)
08401f71 +0x1a5:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08401f76 +0x1aa:  movl   $0x1,0x4(%esp)
08401f7e +0x1b2:  mov    -0xc(%ebp),%eax
08401f81 +0x1b5:  mov    %eax,(%esp)
08401f84 +0x1b8:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08401f89 +0x1bd:  xor    $0x1,%eax
08401f8c +0x1c0:  test   %al,%al
08401f8e +0x1c2:  je     08401fa7 <+0x1db>
08401f90 +0x1c4:  mov    0xc(%ebp),%eax
08401f93 +0x1c7:  movl   $0x2,0x5344(%eax)
08401f9d +0x1d1:  mov    $0x0,%eax
08401fa2 +0x1d6:  jmp    08402157 <+0x38b>
08401fa7 +0x1db:  movl   $0x0,-0x2c(%ebp)
08401fae +0x1e2:  mov    -0xc(%ebp),%eax
08401fb1 +0x1e5:  mov    %eax,(%esp)
08401fb4 +0x1e8:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08401fb9 +0x1ed:  xor    $0x1,%eax
08401fbc +0x1f0:  test   %al,%al
08401fbe +0x1f2:  jne    08401fe1 <+0x215>
08401fc0 +0x1f4:  lea    -0x2c(%ebp),%eax
08401fc3 +0x1f7:  mov    %eax,0x8(%esp)
08401fc7 +0x1fb:  movl   $0x0,0x4(%esp)
08401fcf +0x203:  mov    -0xc(%ebp),%eax
08401fd2 +0x206:  mov    %eax,(%esp)
08401fd5 +0x209:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08401fda +0x20e:  xor    $0x1,%eax
08401fdd +0x211:  test   %al,%al
08401fdf +0x213:  je     08401fe8 <+0x21c>
08401fe1 +0x215:  mov    $0x1,%eax
08401fe6 +0x21a:  jmp    08401fed <+0x221>
08401fe8 +0x21c:  mov    $0x0,%eax
08401fed +0x221:  test   %al,%al
08401fef +0x223:  je     08402008 <+0x23c>
08401ff1 +0x225:  mov    0xc(%ebp),%eax
08401ff4 +0x228:  movl   $0x2,0x5344(%eax)
08401ffe +0x232:  mov    $0x0,%eax
08402003 +0x237:  jmp    08402157 <+0x38b>
08402008 +0x23c:  mov    -0x2c(%ebp),%eax
0840200b +0x23f:  test   %eax,%eax
0840200d +0x241:  jne    08402019 <+0x24d>
0840200f +0x243:  mov    0xc(%ebp),%eax
08402012 +0x246:  movb   $0x1,0x534d(%eax)
08402019 +0x24d:  lea    -0x68(%ebp),%ebx
0840201c +0x250:  mov    $0x0,%eax
08402021 +0x255:  mov    $0xf,%edx
08402026 +0x25a:  mov    %ebx,%edi
08402028 +0x25c:  mov    %edx,%ecx
0840202a +0x25e:  rep stos %eax,%es:(%edi)
0840202c +0x260:  mov    0xc(%ebp),%eax
0840202f +0x263:  add    $0x4,%eax
08402032 +0x266:  mov    %eax,0x8(%esp)
08402036 +0x26a:  lea    -0x68(%ebp),%eax
08402039 +0x26d:  mov    %eax,0x4(%esp)
0840203d +0x271:  mov    -0xc(%ebp),%eax
08402040 +0x274:  mov    %eax,(%esp)
08402043 +0x277:  call   083f48aa <_ZN5MySQL13escape_stringEPcPKc>  ; MySQL::escape_string(char*, char const*)
08402048 +0x27c:  mov    0xc(%ebp),%eax
0840204b +0x27f:  movzbl 0x23(%eax),%eax
0840204f +0x283:  test   %al,%al
08402051 +0x285:  jle    0840208a <+0x2be>
08402053 +0x287:  mov    0xc(%ebp),%eax
08402056 +0x28a:  mov    %eax,0x4(%esp)
0840205a +0x28e:  mov    0x8(%ebp),%eax
0840205d +0x291:  mov    %eax,(%esp)
08402060 +0x294:  call   084013b2 <_ZN15DB_CreateCharac26_checkCreateEventCharacterEP17SIG_CREATE_CHARAC>  ; DB_CreateCharac::_checkCreateEventCharacter(SIG_CREATE_CHARAC*)
08402065 +0x299:  xor    $0x1,%eax
08402068 +0x29c:  test   %al,%al
0840206a +0x29e:  je     08402076 <+0x2aa>
0840206c +0x2a0:  mov    $0x0,%eax
08402071 +0x2a5:  jmp    08402157 <+0x38b>
08402076 +0x2aa:  mov    0xc(%ebp),%eax
08402079 +0x2ad:  mov    %eax,0x4(%esp)
0840207d +0x2b1:  mov    0x8(%ebp),%eax
08402080 +0x2b4:  mov    %eax,(%esp)
08402083 +0x2b7:  call   08401428 <_ZN15DB_CreateCharac27_updateCreateEventCharacterEP17SIG_CREATE_CHARAC>  ; DB_CreateCharac::_updateCreateEventCharacter(SIG_CREATE_CHARAC*)
08402088 +0x2bc:  jmp    084020ac <+0x2e0>
0840208a +0x2be:  mov    0xc(%ebp),%eax
0840208d +0x2c1:  movzbl 0x23(%eax),%eax
08402091 +0x2c5:  test   %al,%al
08402093 +0x2c7:  jns    084020ac <+0x2e0>
08402095 +0x2c9:  mov    0xc(%ebp),%eax
08402098 +0x2cc:  movl   $0x4,0x5344(%eax)
084020a2 +0x2d6:  mov    $0x0,%eax
084020a7 +0x2db:  jmp    08402157 <+0x38b>
084020ac +0x2e0:  lea    -0x68(%ebp),%eax
084020af +0x2e3:  mov    %eax,0xc(%esp)
084020b3 +0x2e7:  mov    0xc(%ebp),%eax
084020b6 +0x2ea:  mov    %eax,0x8(%esp)
084020ba +0x2ee:  mov    -0xc(%ebp),%eax
084020bd +0x2f1:  mov    %eax,0x4(%esp)
084020c1 +0x2f5:  mov    0x8(%ebp),%eax
084020c4 +0x2f8:  mov    %eax,(%esp)
084020c7 +0x2fb:  call   080ec2a0 <_ZN15DB_CreateCharac20MakeInsertCharacInfoEP5MySQLP17SIG_CREATE_CHARACPKc>  ; DB_CreateCharac::MakeInsertCharacInfo(MySQL*, SIG_CREATE_CHARAC*, char const*)
084020cc +0x300:  movl   $0x1,0x4(%esp)
084020d4 +0x308:  mov    -0xc(%ebp),%eax
084020d7 +0x30b:  mov    %eax,(%esp)
084020da +0x30e:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084020df +0x313:  mov    %al,-0xd(%ebp)
084020e2 +0x316:  movzbl -0xd(%ebp),%eax
084020e6 +0x31a:  xor    $0x1,%eax
084020e9 +0x31d:  test   %al,%al
084020eb +0x31f:  je     08402152 <+0x386>
084020ed +0x321:  mov    0xc(%ebp),%eax
084020f0 +0x324:  mov    (%eax),%eax
084020f2 +0x326:  movl   $0x0,0x4(%esp)
084020fa +0x32e:  mov    %eax,(%esp)
084020fd +0x331:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08402102 +0x336:  mov    %eax,%ebx
08402104 +0x338:  movl   $0x5,0xc(%esp)
0840210c +0x340:  movl   $0x10e2,0x8(%esp)
08402114 +0x348:  movl   $&_ZZN15DB_CreateCharac15CreateNewCharacEP17SIG_CREATE_CHARACE19__PRETTY_FUNCTION__,0x4(%esp)
0840211c +0x350:  lea    -0x20(%ebp),%eax
0840211f +0x353:  mov    %eax,(%esp)
08402122 +0x356:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08402127 +0x35b:  mov    %ebx,0x8(%esp)
0840212b +0x35f:  movl   $"DB_CreateCharac::CreateNewCharac, exec() ERROR m_id=%s",0x4(%esp)
08402133 +0x367:  lea    -0x20(%ebp),%eax
08402136 +0x36a:  mov    %eax,(%esp)
08402139 +0x36d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0840213e +0x372:  mov    0xc(%ebp),%eax
08402141 +0x375:  movl   $0x1,0x5344(%eax)
0840214b +0x37f:  mov    $0x0,%eax
08402150 +0x384:  jmp    08402157 <+0x38b>
08402152 +0x386:  mov    $0x1,%eax
08402157 +0x38b:  add    $0x70,%esp
0840215a +0x38e:  pop    %ebx
0840215b +0x38f:  pop    %edi
0840215c +0x390:  pop    %ebp
0840215d +0x391:  ret
```

## 反编译 C

```c
// DB_CreateCharac::CreateNewCharac @ 0x8401dcc

/* WARNING: Type propagation algorithm not settling */
/* DB_CreateCharac::CreateNewCharac(SIG_CREATE_CHARAC*) */

bool __thiscall DB_CreateCharac::CreateNewCharac(DB_CreateCharac *this,SIG_CREATE_CHARAC *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  bool bVar6;
  byte bVar7;
  char local_6c [60];
  int local_30;
  int local_2c [2];
  cMyTrace local_24 [19];
  char local_11;
  MySQL *local_10;
  
  bVar7 = 0;
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  uVar2 = NumberToString(*(uint *)param_1,0);
  MySQL::set_query(local_10,"seLect count(*) from charac_info where m_id=%s and delete_flag=0",uVar2
                  );
  cVar1 = MySQL::exec(local_10,true);
  if (cVar1 != '\x01') {
    *(undefined4 *)(param_1 + 0x5344) = 2;
    return false;
  }
  local_2c[0] = 0;
  cVar1 = MySQL::fetch(local_10);
  if (((cVar1 == '\x01') && (cVar1 = MySQL::get_int(local_10,0,local_2c), cVar1 == '\x01')) &&
     (local_2c[0] < 0x24)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (bVar6) {
    *(undefined4 *)(param_1 + 0x5344) = 2;
    return false;
  }
  local_2c[1] = 2;
  iVar3 = G_CEnvironment();
  iVar3 = std::
          map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>
          ::operator[]((map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>
                        *)(iVar3 + 0x68),(ENUM_DB_HANDLE_IDX *)(local_2c + 1));
  cVar1 = _checkCharacName(this,local_10,(char *)(iVar3 + 0x42),param_1);
  if (cVar1 != '\x01') {
    return false;
  }
  param_1[0x534d] = (SIG_CREATE_CHARAC)0x0;
  iVar3 = G_CEnvironment();
  if ((*(int *)(iVar3 + 0x378) == 10) &&
     (uVar4 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_), uVar4 < 0x478e7051))
  {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  if (bVar6) {
    uVar2 = NumberToString(*(uint *)param_1,0);
    MySQL::set_query(local_10,"seLect count(*) from charac_info where m_id=%s",uVar2);
    cVar1 = MySQL::exec(local_10,true);
    if (cVar1 != '\x01') {
      *(undefined4 *)(param_1 + 0x5344) = 2;
      return false;
    }
    local_30 = 0;
    cVar1 = MySQL::fetch(local_10);
    if ((cVar1 == '\x01') && (cVar1 = MySQL::get_int(local_10,0,&local_30), cVar1 == '\x01')) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      *(undefined4 *)(param_1 + 0x5344) = 2;
      return false;
    }
    if (local_30 == 0) {
      param_1[0x534d] = (SIG_CREATE_CHARAC)0x1;
    }
  }
  pcVar5 = local_6c;
  for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5[2] = '\0';
    pcVar5[3] = '\0';
    pcVar5 = pcVar5 + ((uint)bVar7 * -2 + 1) * 4;
  }
  MySQL::escape_string(local_10,local_6c,(char *)(param_1 + 4));
  if ((char)param_1[0x23] < '\x01') {
    if ((char)param_1[0x23] < '\0') {
      *(undefined4 *)(param_1 + 0x5344) = 4;
      return false;
    }
  }
  else {
    cVar1 = _checkCreateEventCharacter(this,param_1);
    if (cVar1 != '\x01') {
      return false;
    }
    _updateCreateEventCharacter(this,param_1);
  }
  MakeInsertCharacInfo(this,local_10,param_1,local_6c);
  local_11 = MySQL::exec(local_10,true);
  bVar6 = local_11 == '\x01';
  if (!bVar6) {
    uVar2 = NumberToString(*(uint *)param_1,0);
    cMyTrace::cMyTrace(local_24,"bool DB_CreateCharac::CreateNewCharac(SIG_CREATE_CHARAC*)",0x10e2,5
                      );
    cMyTrace::operator()(local_24,"DB_CreateCharac::CreateNewCharac, exec() ERROR m_id=%s",uVar2);
    *(undefined4 *)(param_1 + 0x5344) = 1;
  }
  return bVar6;
}
```
