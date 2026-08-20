# arad_sp_convert_pass_pad_info

`_ZN4ARAD8DATABASE11LOGIN_QUERY29arad_sp_convert_pass_pad_infoEP14SIG_LOGIN_DATA`

`ARAD::DATABASE::LOGIN_QUERY::arad_sp_convert_pass_pad_info(SIG_LOGIN_DATA*)`

| 类 | 地址 |
|---|---|
| `ARAD::DATABASE::LOGIN_QUERY` | `0x0818c0e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0818c0e0  _ZN4ARAD8DATABASE11LOGIN_QUERY29arad_sp_convert_pass_pad_infoEP14SIG_LOGIN_DATA
#           ARAD::DATABASE::LOGIN_QUERY::arad_sp_convert_pass_pad_info(SIG_LOGIN_DATA*)
# range [0x0818c0e0, 0x0818c4f2]
0818c0e0 +0x000:  push   %ebp
0818c0e1 +0x001:  mov    %esp,%ebp
0818c0e3 +0x003:  sub    $0x48,%esp
0818c0e6 +0x006:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0818c0eb +0x00b:  movl   $0x0,0x8(%esp)
0818c0f3 +0x013:  movl   $0x6,0x4(%esp)
0818c0fb +0x01b:  mov    %eax,(%esp)
0818c0fe +0x01e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0818c103 +0x023:  mov    %eax,-0xc(%ebp)
0818c106 +0x026:  cmpl   $0x0,-0xc(%ebp)
0818c10a +0x02a:  jne    0818c14a <+0x6a>
0818c10c +0x02c:  movl   $"Database null!!",0x14(%esp)
0818c114 +0x034:  movl   $"%s",0x10(%esp)
0818c11c +0x03c:  movl   $0x2b0,0xc(%esp)
0818c124 +0x044:  movl   $&_ZZN4ARAD8DATABASE11LOGIN_QUERY29arad_sp_convert_pass_pad_infoEP14SIG_LOGIN_DATAE19__PRETTY_FUNCTION__,0x8(%esp)
0818c12c +0x04c:  movl   $"localjapan/Arad_DB_Query.cpp",0x4(%esp)
0818c134 +0x054:  movl   $0x1,(%esp)
0818c13b +0x05b:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0818c140 +0x060:  mov    $0xffffffff,%eax
0818c145 +0x065:  jmp    0818c4f1 <+0x411>
0818c14a +0x06a:  mov    0x8(%ebp),%eax
0818c14d +0x06d:  mov    0xc0(%eax),%eax
0818c153 +0x073:  mov    %eax,0x8(%esp)
0818c157 +0x077:  movl   $"seLect mousepass, fail_cnt, cancel_cnt, version_info, validity_time, enable_flag from member_mousepass where m_id=%d",0x4(%esp)
0818c15f +0x07f:  mov    -0xc(%ebp),%eax
0818c162 +0x082:  mov    %eax,(%esp)
0818c165 +0x085:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0818c16a +0x08a:  xor    $0x1,%eax
0818c16d +0x08d:  test   %al,%al
0818c16f +0x08f:  je     0818c17b <+0x9b>
0818c171 +0x091:  mov    $0xffffffff,%eax
0818c176 +0x096:  jmp    0818c4f1 <+0x411>
0818c17b +0x09b:  movl   $0x1,0x4(%esp)
0818c183 +0x0a3:  mov    -0xc(%ebp),%eax
0818c186 +0x0a6:  mov    %eax,(%esp)
0818c189 +0x0a9:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0818c18e +0x0ae:  xor    $0x1,%eax
0818c191 +0x0b1:  test   %al,%al
0818c193 +0x0b3:  je     0818c1d3 <+0xf3>
0818c195 +0x0b5:  movl   $"arad_sp_convert_pass_pad_info fail",0x14(%esp)
0818c19d +0x0bd:  movl   $"%s",0x10(%esp)
0818c1a5 +0x0c5:  movl   $0x2bc,0xc(%esp)
0818c1ad +0x0cd:  movl   $&_ZZN4ARAD8DATABASE11LOGIN_QUERY29arad_sp_convert_pass_pad_infoEP14SIG_LOGIN_DATAE19__PRETTY_FUNCTION__,0x8(%esp)
0818c1b5 +0x0d5:  movl   $"localjapan/Arad_DB_Query.cpp",0x4(%esp)
0818c1bd +0x0dd:  movl   $0x1,(%esp)
0818c1c4 +0x0e4:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0818c1c9 +0x0e9:  mov    $0xffffffff,%eax
0818c1ce +0x0ee:  jmp    0818c4f1 <+0x411>
0818c1d3 +0x0f3:  mov    -0xc(%ebp),%eax
0818c1d6 +0x0f6:  mov    %eax,(%esp)
0818c1d9 +0x0f9:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0818c1de +0x0fe:  test   %eax,%eax
0818c1e0 +0x100:  sete   %al
0818c1e3 +0x103:  test   %al,%al
0818c1e5 +0x105:  je     0818c231 <+0x151>
0818c1e7 +0x107:  movl   $0x0,0xc(%esp)
0818c1ef +0x10f:  movl   $0x2c2,0x8(%esp)
0818c1f7 +0x117:  movl   $&_ZZN4ARAD8DATABASE11LOGIN_QUERY29arad_sp_convert_pass_pad_infoEP14SIG_LOGIN_DATAE19__PRETTY_FUNCTION__,0x4(%esp)
0818c1ff +0x11f:  lea    -0x1c(%ebp),%eax
0818c202 +0x122:  mov    %eax,(%esp)
0818c205 +0x125:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0818c20a +0x12a:  movl   $"Goblin Pad Exist",0x4(%esp)
0818c212 +0x132:  lea    -0x1c(%ebp),%eax
0818c215 +0x135:  mov    %eax,(%esp)
0818c218 +0x138:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0818c21d +0x13d:  mov    0x8(%ebp),%eax
0818c220 +0x140:  movb   $0x0,0x390c(%eax)
0818c227 +0x147:  mov    $0x0,%eax
0818c22c +0x14c:  jmp    0818c4f1 <+0x411>
0818c231 +0x151:  mov    -0xc(%ebp),%eax
0818c234 +0x154:  mov    %eax,(%esp)
0818c237 +0x157:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0818c23c +0x15c:  xor    $0x1,%eax
0818c23f +0x15f:  test   %al,%al
0818c241 +0x161:  je     0818c281 <+0x1a1>
0818c243 +0x163:  movl   $"arad_sp_convert_pass_pad_info fetch fail",0x14(%esp)
0818c24b +0x16b:  movl   $"%s",0x10(%esp)
0818c253 +0x173:  movl   $0x2c9,0xc(%esp)
0818c25b +0x17b:  movl   $&_ZZN4ARAD8DATABASE11LOGIN_QUERY29arad_sp_convert_pass_pad_infoEP14SIG_LOGIN_DATAE19__PRETTY_FUNCTION__,0x8(%esp)
0818c263 +0x183:  movl   $"localjapan/Arad_DB_Query.cpp",0x4(%esp)
0818c26b +0x18b:  movl   $0x1,(%esp)
0818c272 +0x192:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0818c277 +0x197:  mov    $0xffffffff,%eax
0818c27c +0x19c:  jmp    0818c4f1 <+0x411>
0818c281 +0x1a1:  mov    0x8(%ebp),%eax
0818c284 +0x1a4:  add    $0x38e1,%eax
0818c289 +0x1a9:  movl   $0x24,0xc(%esp)
0818c291 +0x1b1:  mov    %eax,0x8(%esp)
0818c295 +0x1b5:  movl   $0x0,0x4(%esp)
0818c29d +0x1bd:  mov    -0xc(%ebp),%eax
0818c2a0 +0x1c0:  mov    %eax,(%esp)
0818c2a3 +0x1c3:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
0818c2a8 +0x1c8:  xor    $0x1,%eax
0818c2ab +0x1cb:  test   %al,%al
0818c2ad +0x1cd:  je     0818c2ed <+0x20d>
0818c2af +0x1cf:  movl   $"Mouse Pass Encrypted Parsing error",0x14(%esp)
0818c2b7 +0x1d7:  movl   $"%s",0x10(%esp)
0818c2bf +0x1df:  movl   $0x2cf,0xc(%esp)
0818c2c7 +0x1e7:  movl   $&_ZZN4ARAD8DATABASE11LOGIN_QUERY29arad_sp_convert_pass_pad_infoEP14SIG_LOGIN_DATAE19__PRETTY_FUNCTION__,0x8(%esp)
0818c2cf +0x1ef:  movl   $"localjapan/Arad_DB_Query.cpp",0x4(%esp)
0818c2d7 +0x1f7:  movl   $0x1,(%esp)
0818c2de +0x1fe:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0818c2e3 +0x203:  mov    $0xffffffff,%eax
0818c2e8 +0x208:  jmp    0818c4f1 <+0x411>
0818c2ed +0x20d:  mov    0x8(%ebp),%eax
0818c2f0 +0x210:  add    $0x3914,%eax
0818c2f5 +0x215:  mov    %eax,0x8(%esp)
0818c2f9 +0x219:  movl   $0x1,0x4(%esp)
0818c301 +0x221:  mov    -0xc(%ebp),%eax
0818c304 +0x224:  mov    %eax,(%esp)
0818c307 +0x227:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0818c30c +0x22c:  xor    $0x1,%eax
0818c30f +0x22f:  test   %al,%al
0818c311 +0x231:  je     0818c351 <+0x271>
0818c313 +0x233:  movl   $"Mouse PassPad Fail Count Parsing error",0x14(%esp)
0818c31b +0x23b:  movl   $"%s",0x10(%esp)
0818c323 +0x243:  movl   $0x2d5,0xc(%esp)
0818c32b +0x24b:  movl   $&_ZZN4ARAD8DATABASE11LOGIN_QUERY29arad_sp_convert_pass_pad_infoEP14SIG_LOGIN_DATAE19__PRETTY_FUNCTION__,0x8(%esp)
0818c333 +0x253:  movl   $"localjapan/Arad_DB_Query.cpp",0x4(%esp)
0818c33b +0x25b:  movl   $0x1,(%esp)
0818c342 +0x262:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0818c347 +0x267:  mov    $0xffffffff,%eax
0818c34c +0x26c:  jmp    0818c4f1 <+0x411>
0818c351 +0x271:  mov    0x8(%ebp),%eax
0818c354 +0x274:  add    $0x3918,%eax
0818c359 +0x279:  mov    %eax,0x8(%esp)
0818c35d +0x27d:  movl   $0x2,0x4(%esp)
0818c365 +0x285:  mov    -0xc(%ebp),%eax
0818c368 +0x288:  mov    %eax,(%esp)
0818c36b +0x28b:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0818c370 +0x290:  xor    $0x1,%eax
0818c373 +0x293:  test   %al,%al
0818c375 +0x295:  je     0818c3b5 <+0x2d5>
0818c377 +0x297:  movl   $"PassPad Cancel Count Parsing error",0x14(%esp)
0818c37f +0x29f:  movl   $"%s",0x10(%esp)
0818c387 +0x2a7:  movl   $0x2db,0xc(%esp)
0818c38f +0x2af:  movl   $&_ZZN4ARAD8DATABASE11LOGIN_QUERY29arad_sp_convert_pass_pad_infoEP14SIG_LOGIN_DATAE19__PRETTY_FUNCTION__,0x8(%esp)
0818c397 +0x2b7:  movl   $"localjapan/Arad_DB_Query.cpp",0x4(%esp)
0818c39f +0x2bf:  movl   $0x1,(%esp)
0818c3a6 +0x2c6:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0818c3ab +0x2cb:  mov    $0xffffffff,%eax
0818c3b0 +0x2d0:  jmp    0818c4f1 <+0x411>
0818c3b5 +0x2d5:  mov    0x8(%ebp),%eax
0818c3b8 +0x2d8:  add    $0x390c,%eax
0818c3bd +0x2dd:  mov    %eax,0x8(%esp)
0818c3c1 +0x2e1:  movl   $0x3,0x4(%esp)
0818c3c9 +0x2e9:  mov    -0xc(%ebp),%eax
0818c3cc +0x2ec:  mov    %eax,(%esp)
0818c3cf +0x2ef:  call   080fde54 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x180>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x180
0818c3d4 +0x2f4:  xor    $0x1,%eax
0818c3d7 +0x2f7:  test   %al,%al
0818c3d9 +0x2f9:  je     0818c419 <+0x339>
0818c3db +0x2fb:  movl   $"VersionInfo Parsing error",0x14(%esp)
0818c3e3 +0x303:  movl   $"%s",0x10(%esp)
0818c3eb +0x30b:  movl   $0x2e0,0xc(%esp)
0818c3f3 +0x313:  movl   $&_ZZN4ARAD8DATABASE11LOGIN_QUERY29arad_sp_convert_pass_pad_infoEP14SIG_LOGIN_DATAE19__PRETTY_FUNCTION__,0x8(%esp)
0818c3fb +0x31b:  movl   $"localjapan/Arad_DB_Query.cpp",0x4(%esp)
0818c403 +0x323:  movl   $0x1,(%esp)
0818c40a +0x32a:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0818c40f +0x32f:  mov    $0xffffffff,%eax
0818c414 +0x334:  jmp    0818c4f1 <+0x411>
0818c419 +0x339:  mov    0x8(%ebp),%eax
0818c41c +0x33c:  add    $0x3910,%eax
0818c421 +0x341:  mov    %eax,0x8(%esp)
0818c425 +0x345:  movl   $0x4,0x4(%esp)
0818c42d +0x34d:  mov    -0xc(%ebp),%eax
0818c430 +0x350:  mov    %eax,(%esp)
0818c433 +0x353:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
0818c438 +0x358:  xor    $0x1,%eax
0818c43b +0x35b:  test   %al,%al
0818c43d +0x35d:  je     0818c47a <+0x39a>
0818c43f +0x35f:  movl   $"Goblin Validity Time Parsing error",0x14(%esp)
0818c447 +0x367:  movl   $"%s",0x10(%esp)
0818c44f +0x36f:  movl   $0x2e6,0xc(%esp)
0818c457 +0x377:  movl   $&_ZZN4ARAD8DATABASE11LOGIN_QUERY29arad_sp_convert_pass_pad_infoEP14SIG_LOGIN_DATAE19__PRETTY_FUNCTION__,0x8(%esp)
0818c45f +0x37f:  movl   $"localjapan/Arad_DB_Query.cpp",0x4(%esp)
0818c467 +0x387:  movl   $0x1,(%esp)
0818c46e +0x38e:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0818c473 +0x393:  mov    $0xffffffff,%eax
0818c478 +0x398:  jmp    0818c4f1 <+0x411>
0818c47a +0x39a:  movb   $0x0,-0x1d(%ebp)
0818c47e +0x39e:  lea    -0x1d(%ebp),%eax
0818c481 +0x3a1:  mov    %eax,0x8(%esp)
0818c485 +0x3a5:  movl   $0x5,0x4(%esp)
0818c48d +0x3ad:  mov    -0xc(%ebp),%eax
0818c490 +0x3b0:  mov    %eax,(%esp)
0818c493 +0x3b3:  call   080fde54 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x180>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x180
0818c498 +0x3b8:  xor    $0x1,%eax
0818c49b +0x3bb:  test   %al,%al
0818c49d +0x3bd:  je     0818c4da <+0x3fa>
0818c49f +0x3bf:  movl   $"Goblin enable flage Parsing error",0x14(%esp)
0818c4a7 +0x3c7:  movl   $"%s",0x10(%esp)
0818c4af +0x3cf:  movl   $0x2ed,0xc(%esp)
0818c4b7 +0x3d7:  movl   $&_ZZN4ARAD8DATABASE11LOGIN_QUERY29arad_sp_convert_pass_pad_infoEP14SIG_LOGIN_DATAE19__PRETTY_FUNCTION__,0x8(%esp)
0818c4bf +0x3df:  movl   $"localjapan/Arad_DB_Query.cpp",0x4(%esp)
0818c4c7 +0x3e7:  movl   $0x1,(%esp)
0818c4ce +0x3ee:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0818c4d3 +0x3f3:  mov    $0xffffffff,%eax
0818c4d8 +0x3f8:  jmp    0818c4f1 <+0x411>
0818c4da +0x3fa:  movzbl -0x1d(%ebp),%eax
0818c4de +0x3fe:  cmp    $0x1,%al
0818c4e0 +0x400:  jne    0818c4ec <+0x40c>
0818c4e2 +0x402:  mov    0x8(%ebp),%eax
0818c4e5 +0x405:  movb   $0x1,0x390e(%eax)
0818c4ec +0x40c:  mov    $0x0,%eax
0818c4f1 +0x411:  leave
0818c4f2 +0x412:  ret
```

## 反编译 C

```c
// ARAD::DATABASE::LOGIN_QUERY::arad_sp_convert_pass_pad_info @ 0x818c0e0

/* ARAD::DATABASE::LOGIN_QUERY::arad_sp_convert_pass_pad_info(SIG_LOGIN_DATA*) */

undefined4 ARAD::DATABASE::LOGIN_QUERY::arad_sp_convert_pass_pad_info(SIG_LOGIN_DATA *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char local_21;
  cMyTrace local_20 [16];
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  if (local_10 == (MySQL *)0x0) {
    LogManager::logFormat
              (1,"localjapan/Arad_DB_Query.cpp",
               "int ARAD::DATABASE::LOGIN_QUERY::arad_sp_convert_pass_pad_info(SIG_LOGIN_DATA*)",
               0x2b0,"%s","Database null!!");
    uVar2 = 0xffffffff;
  }
  else {
    cVar1 = MySQL::set_query(local_10,
                             "seLect mousepass, fail_cnt, cancel_cnt, version_info, validity_time, enable_flag from member_mousepass where m_id=%d"
                             ,*(undefined4 *)(param_1 + 0xc0));
    if (cVar1 == '\x01') {
      cVar1 = MySQL::exec(local_10,true);
      if (cVar1 == '\x01') {
        iVar3 = MySQL::get_n_rows(local_10);
        if (iVar3 == 0) {
          cMyTrace::cMyTrace(local_20,
                             "int ARAD::DATABASE::LOGIN_QUERY::arad_sp_convert_pass_pad_info(SIG_LOGIN_DATA*)"
                             ,0x2c2,0);
          cMyTrace::operator()(local_20,"Goblin Pad Exist");
          param_1[0x390c] = (SIG_LOGIN_DATA)0x0;
          uVar2 = 0;
        }
        else {
          cVar1 = MySQL::fetch(local_10);
          if (cVar1 == '\x01') {
            cVar1 = MySQL::get_str(local_10,0,(char *)(param_1 + 0x38e1),0x24);
            if (cVar1 == '\x01') {
              cVar1 = MySQL::get_int(local_10,1,(int *)(param_1 + 0x3914));
              if (cVar1 == '\x01') {
                cVar1 = MySQL::get_int(local_10,2,(int *)(param_1 + 0x3918));
                if (cVar1 == '\x01') {
                  cVar1 = MySQL::get_byte(local_10,3,(char *)(param_1 + 0x390c));
                  if (cVar1 == '\x01') {
                    cVar1 = MySQL::get_uint(local_10,4,(uint *)(param_1 + 0x3910));
                    if (cVar1 == '\x01') {
                      local_21 = '\0';
                      cVar1 = MySQL::get_byte(local_10,5,&local_21);
                      if (cVar1 == '\x01') {
                        if (local_21 == '\x01') {
                          param_1[0x390e] = (SIG_LOGIN_DATA)0x1;
                        }
                        uVar2 = 0;
                      }
                      else {
                        LogManager::logFormat
                                  (1,"localjapan/Arad_DB_Query.cpp",
                                   "int ARAD::DATABASE::LOGIN_QUERY::arad_sp_convert_pass_pad_info(SIG_LOGIN_DATA*)"
                                   ,0x2ed,"%s","Goblin enable flage Parsing error");
                        uVar2 = 0xffffffff;
                      }
                    }
                    else {
                      LogManager::logFormat
                                (1,"localjapan/Arad_DB_Query.cpp",
                                 "int ARAD::DATABASE::LOGIN_QUERY::arad_sp_convert_pass_pad_info(SIG_LOGIN_DATA*)"
                                 ,0x2e6,"%s","Goblin Validity Time Parsing error");
                      uVar2 = 0xffffffff;
                    }
                  }
                  else {
                    LogManager::logFormat
                              (1,"localjapan/Arad_DB_Query.cpp",
                               "int ARAD::DATABASE::LOGIN_QUERY::arad_sp_convert_pass_pad_info(SIG_LOGIN_DATA*)"
                               ,0x2e0,"%s","VersionInfo Parsing error");
                    uVar2 = 0xffffffff;
                  }
                }
                else {
                  LogManager::logFormat
                            (1,"localjapan/Arad_DB_Query.cpp",
                             "int ARAD::DATABASE::LOGIN_QUERY::arad_sp_convert_pass_pad_info(SIG_LOGIN_DATA*)"
                             ,0x2db,"%s","PassPad Cancel Count Parsing error");
                  uVar2 = 0xffffffff;
                }
              }
              else {
                LogManager::logFormat
                          (1,"localjapan/Arad_DB_Query.cpp",
                           "int ARAD::DATABASE::LOGIN_QUERY::arad_sp_convert_pass_pad_info(SIG_LOGIN_DATA*)"
                           ,0x2d5,"%s","Mouse PassPad Fail Count Parsing error");
                uVar2 = 0xffffffff;
              }
            }
            else {
              LogManager::logFormat
                        (1,"localjapan/Arad_DB_Query.cpp",
                         "int ARAD::DATABASE::LOGIN_QUERY::arad_sp_convert_pass_pad_info(SIG_LOGIN_DATA*)"
                         ,0x2cf,"%s","Mouse Pass Encrypted Parsing error");
              uVar2 = 0xffffffff;
            }
          }
          else {
            LogManager::logFormat
                      (1,"localjapan/Arad_DB_Query.cpp",
                       "int ARAD::DATABASE::LOGIN_QUERY::arad_sp_convert_pass_pad_info(SIG_LOGIN_DATA*)"
                       ,0x2c9,"%s","arad_sp_convert_pass_pad_info fetch fail");
            uVar2 = 0xffffffff;
          }
        }
      }
      else {
        LogManager::logFormat
                  (1,"localjapan/Arad_DB_Query.cpp",
                   "int ARAD::DATABASE::LOGIN_QUERY::arad_sp_convert_pass_pad_info(SIG_LOGIN_DATA*)"
                   ,700,"%s","arad_sp_convert_pass_pad_info fail");
        uVar2 = 0xffffffff;
      }
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}
```
