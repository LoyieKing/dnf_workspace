# convertPassPadInfo

`_ZN16DB_MouseRegister18convertPassPadInfoEjPcRiRcS1_RbS0_S3_S0_RlS3_`

`DB_MouseRegister::convertPassPadInfo(unsigned int, char*, int&, char&, int&, bool&, char*, bool&, char*, long&, bool&)`

| 类 | 地址 |
|---|---|
| `DB_MouseRegister` | `0x08422e6a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08422e6a  _ZN16DB_MouseRegister18convertPassPadInfoEjPcRiRcS1_RbS0_S3_S0_RlS3_
#           DB_MouseRegister::convertPassPadInfo(unsigned int, char*, int&, char&, int&, bool&, char*, bool&, char*, long&, bool&)
# range [0x08422e6a, 0x084231b5]
08422e6a +0x000:  push   %ebp
08422e6b +0x001:  mov    %esp,%ebp
08422e6d +0x003:  sub    $0x68,%esp
08422e70 +0x006:  mov    0x1c(%ebp),%eax
08422e73 +0x009:  movb   $0x0,(%eax)
08422e76 +0x00c:  call   08422938 <_ZN16DB_MouseRegister30_getDBHandleForDevideAccountDBEv>  ; DB_MouseRegister::_getDBHandleForDevideAccountDB()
08422e7b +0x011:  mov    %eax,-0xc(%ebp)
08422e7e +0x014:  movl   $0x0,0x4(%esp)
08422e86 +0x01c:  mov    0x8(%ebp),%eax
08422e89 +0x01f:  mov    %eax,(%esp)
08422e8c +0x022:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08422e91 +0x027:  mov    %eax,0x8(%esp)
08422e95 +0x02b:  movl   $"seLect mousepass, fail_cnt, cancel_cnt, version_info, validity_time>unix_timestamp(now()), adddate(now(),interval -1 month) >= occ_time from member_mousepass where m_id=%s and enable_flag = '1'",0x4(%esp)
08422e9d +0x033:  mov    -0xc(%ebp),%eax
08422ea0 +0x036:  mov    %eax,(%esp)
08422ea3 +0x039:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08422ea8 +0x03e:  movl   $0x1,0x4(%esp)
08422eb0 +0x046:  mov    -0xc(%ebp),%eax
08422eb3 +0x049:  mov    %eax,(%esp)
08422eb6 +0x04c:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08422ebb +0x051:  xor    $0x1,%eax
08422ebe +0x054:  test   %al,%al
08422ec0 +0x056:  je     08422ecc <+0x62>
08422ec2 +0x058:  mov    $0x1,%eax
08422ec7 +0x05d:  jmp    084231b4 <+0x34a>
08422ecc +0x062:  mov    -0xc(%ebp),%eax
08422ecf +0x065:  mov    %eax,(%esp)
08422ed2 +0x068:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08422ed7 +0x06d:  test   %eax,%eax
08422ed9 +0x06f:  sete   %al
08422edc +0x072:  test   %al,%al
08422ede +0x074:  je     08422ef0 <+0x86>
08422ee0 +0x076:  mov    0x14(%ebp),%eax
08422ee3 +0x079:  movb   $0x0,(%eax)
08422ee6 +0x07c:  mov    $0x0,%eax
08422eeb +0x081:  jmp    084231b4 <+0x34a>
08422ef0 +0x086:  mov    -0xc(%ebp),%eax
08422ef3 +0x089:  mov    %eax,(%esp)
08422ef6 +0x08c:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08422efb +0x091:  xor    $0x1,%eax
08422efe +0x094:  test   %al,%al
08422f00 +0x096:  je     08422f0c <+0xa2>
08422f02 +0x098:  mov    $0x1,%eax
08422f07 +0x09d:  jmp    084231b4 <+0x34a>
08422f0c +0x0a2:  movl   $0x24,0xc(%esp)
08422f14 +0x0aa:  mov    0x20(%ebp),%eax
08422f17 +0x0ad:  mov    %eax,0x8(%esp)
08422f1b +0x0b1:  movl   $0x0,0x4(%esp)
08422f23 +0x0b9:  mov    -0xc(%ebp),%eax
08422f26 +0x0bc:  mov    %eax,(%esp)
08422f29 +0x0bf:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
08422f2e +0x0c4:  xor    $0x1,%eax
08422f31 +0x0c7:  test   %al,%al
08422f33 +0x0c9:  je     08422f3f <+0xd5>
08422f35 +0x0cb:  mov    $0x1,%eax
08422f3a +0x0d0:  jmp    084231b4 <+0x34a>
08422f3f +0x0d5:  mov    0x10(%ebp),%eax
08422f42 +0x0d8:  mov    %eax,0x8(%esp)
08422f46 +0x0dc:  movl   $0x1,0x4(%esp)
08422f4e +0x0e4:  mov    -0xc(%ebp),%eax
08422f51 +0x0e7:  mov    %eax,(%esp)
08422f54 +0x0ea:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08422f59 +0x0ef:  xor    $0x1,%eax
08422f5c +0x0f2:  test   %al,%al
08422f5e +0x0f4:  je     08422f6a <+0x100>
08422f60 +0x0f6:  mov    $0x1,%eax
08422f65 +0x0fb:  jmp    084231b4 <+0x34a>
08422f6a +0x100:  mov    0x18(%ebp),%eax
08422f6d +0x103:  mov    %eax,0x8(%esp)
08422f71 +0x107:  movl   $0x2,0x4(%esp)
08422f79 +0x10f:  mov    -0xc(%ebp),%eax
08422f7c +0x112:  mov    %eax,(%esp)
08422f7f +0x115:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08422f84 +0x11a:  xor    $0x1,%eax
08422f87 +0x11d:  test   %al,%al
08422f89 +0x11f:  je     08422f95 <+0x12b>
08422f8b +0x121:  mov    $0x1,%eax
08422f90 +0x126:  jmp    084231b4 <+0x34a>
08422f95 +0x12b:  lea    -0xd(%ebp),%eax
08422f98 +0x12e:  mov    %eax,0x8(%esp)
08422f9c +0x132:  movl   $0x3,0x4(%esp)
08422fa4 +0x13a:  mov    -0xc(%ebp),%eax
08422fa7 +0x13d:  mov    %eax,(%esp)
08422faa +0x140:  call   080fde54 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x180>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x180
08422faf +0x145:  xor    $0x1,%eax
08422fb2 +0x148:  test   %al,%al
08422fb4 +0x14a:  je     08422fc0 <+0x156>
08422fb6 +0x14c:  mov    $0x1,%eax
08422fbb +0x151:  jmp    084231b4 <+0x34a>
08422fc0 +0x156:  mov    0x2c(%ebp),%eax
08422fc3 +0x159:  movl   $0x0,(%eax)
08422fc9 +0x15f:  mov    0x2c(%ebp),%eax
08422fcc +0x162:  mov    %eax,0x8(%esp)
08422fd0 +0x166:  movl   $0x4,0x4(%esp)
08422fd8 +0x16e:  mov    -0xc(%ebp),%eax
08422fdb +0x171:  mov    %eax,(%esp)
08422fde +0x174:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
08422fe3 +0x179:  xor    $0x1,%eax
08422fe6 +0x17c:  test   %al,%al
08422fe8 +0x17e:  je     08422ff4 <+0x18a>
08422fea +0x180:  mov    $0x1,%eax
08422fef +0x185:  jmp    084231b4 <+0x34a>
08422ff4 +0x18a:  movb   $0x0,-0xe(%ebp)
08422ff8 +0x18e:  lea    -0xe(%ebp),%eax
08422ffb +0x191:  mov    %eax,0x8(%esp)
08422fff +0x195:  movl   $0x5,0x4(%esp)
08423007 +0x19d:  mov    -0xc(%ebp),%eax
0842300a +0x1a0:  mov    %eax,(%esp)
0842300d +0x1a3:  call   080fde54 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x180>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x180
08423012 +0x1a8:  xor    $0x1,%eax
08423015 +0x1ab:  test   %al,%al
08423017 +0x1ad:  je     08423023 <+0x1b9>
08423019 +0x1af:  mov    $0x1,%eax
0842301e +0x1b4:  jmp    084231b4 <+0x34a>
08423023 +0x1b9:  movzbl -0xe(%ebp),%eax
08423027 +0x1bd:  test   %al,%al
08423029 +0x1bf:  setne  %dl
0842302c +0x1c2:  mov    0x30(%ebp),%eax
0842302f +0x1c5:  mov    %dl,(%eax)
08423031 +0x1c7:  mov    0x24(%ebp),%eax
08423034 +0x1ca:  movb   $0x0,(%eax)
08423037 +0x1cd:  mov    0x2c(%ebp),%eax
0842303a +0x1d0:  mov    (%eax),%eax
0842303c +0x1d2:  test   %eax,%eax
0842303e +0x1d4:  je     08423046 <+0x1dc>
08423040 +0x1d6:  mov    0x24(%ebp),%eax
08423043 +0x1d9:  movb   $0x1,(%eax)
08423046 +0x1dc:  movzbl -0xd(%ebp),%eax
0842304a +0x1e0:  cmp    $0x2,%al
0842304c +0x1e2:  jne    08423064 <+0x1fa>
0842304e +0x1e4:  mov    0x1c(%ebp),%eax
08423051 +0x1e7:  movb   $0x1,(%eax)
08423054 +0x1ea:  mov    0x14(%ebp),%eax
08423057 +0x1ed:  movb   $0x2,(%eax)
0842305a +0x1f0:  mov    $0x0,%eax
0842305f +0x1f5:  jmp    084231b4 <+0x34a>
08423064 +0x1fa:  mov    0x14(%ebp),%eax
08423067 +0x1fd:  movb   $0x1,(%eax)
0842306a +0x200:  movl   $0x24,0x8(%esp)
08423072 +0x208:  mov    0xc(%ebp),%eax
08423075 +0x20b:  mov    %eax,0x4(%esp)
08423079 +0x20f:  lea    -0x32(%ebp),%eax
0842307c +0x212:  mov    %eax,(%esp)
0842307f +0x215:  call   0807d8d0 <_init+0x1c8>
08423084 +0x21a:  mov    &_ZN10GlobalData31s_pcryptRijndael_MousePassword_E,%eax
08423089 +0x21f:  lea    -0x56(%ebp),%edx
0842308c +0x222:  mov    %edx,0x8(%esp)
08423090 +0x226:  lea    -0x32(%ebp),%edx
08423093 +0x229:  mov    %edx,0x4(%esp)
08423097 +0x22d:  mov    %eax,(%esp)
0842309a +0x230:  call   0846c398 <_Z11encryptAES_P9CRijndaelPcS1_>  ; encryptAES_(CRijndael*, char*, char*)
0842309f +0x235:  movl   $0x24,0x8(%esp)
084230a7 +0x23d:  lea    -0x56(%ebp),%eax
084230aa +0x240:  mov    %eax,0x4(%esp)
084230ae +0x244:  mov    0x20(%ebp),%eax
084230b1 +0x247:  mov    %eax,(%esp)
084230b4 +0x24a:  call   0807e8c0 <_init+0x11b8>
084230b9 +0x24f:  test   %eax,%eax
084230bb +0x251:  je     08423103 <+0x299>
084230bd +0x253:  mov    0x10(%ebp),%eax
084230c0 +0x256:  mov    (%eax),%eax
084230c2 +0x258:  lea    0x1(%eax),%edx
084230c5 +0x25b:  mov    0x10(%ebp),%eax
084230c8 +0x25e:  mov    %edx,(%eax)
084230ca +0x260:  mov    0x10(%ebp),%eax
084230cd +0x263:  mov    (%eax),%eax
084230cf +0x265:  mov    0x28(%ebp),%edx
084230d2 +0x268:  mov    %edx,0x8(%esp)
084230d6 +0x26c:  mov    %eax,0x4(%esp)
084230da +0x270:  mov    0x8(%ebp),%eax
084230dd +0x273:  mov    %eax,(%esp)
084230e0 +0x276:  call   084231b6 <_ZN16DB_MouseRegister14_updateFailCntEjiPc>  ; DB_MouseRegister::_updateFailCnt(unsigned int, int, char*)
084230e5 +0x27b:  mov    0x10(%ebp),%eax
084230e8 +0x27e:  mov    (%eax),%eax
084230ea +0x280:  cmp    $0x9,%eax
084230ed +0x283:  jle    084230f9 <+0x28f>
084230ef +0x285:  mov    $0x49,%eax
084230f4 +0x28a:  jmp    084231b4 <+0x34a>
084230f9 +0x28f:  mov    $0x48,%eax
084230fe +0x294:  jmp    084231b4 <+0x34a>
08423103 +0x299:  mov    0x10(%ebp),%eax
08423106 +0x29c:  movl   $0x0,(%eax)
0842310c +0x2a2:  mov    0x18(%ebp),%eax
0842310f +0x2a5:  movl   $0x0,(%eax)
08423115 +0x2ab:  mov    0x28(%ebp),%eax
08423118 +0x2ae:  mov    %eax,0x8(%esp)
0842311c +0x2b2:  movl   $0x7,0x4(%esp)
08423124 +0x2ba:  mov    0x8(%ebp),%eax
08423127 +0x2bd:  mov    %eax,(%esp)
0842312a +0x2c0:  call   08423914 <_ZN16DB_MouseRegister14_updateHistoryEjiPc>  ; DB_MouseRegister::_updateHistory(unsigned int, int, char*)
0842312f +0x2c5:  xor    $0x1,%eax
08423132 +0x2c8:  test   %al,%al
08423134 +0x2ca:  je     0842313d <+0x2d3>
08423136 +0x2cc:  mov    $0x1,%eax
0842313b +0x2d1:  jmp    084231b4 <+0x34a>
0842313d +0x2d3:  movl   $0x0,0x4(%esp)
08423145 +0x2db:  mov    0x8(%ebp),%eax
08423148 +0x2de:  mov    %eax,(%esp)
0842314b +0x2e1:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08423150 +0x2e6:  mov    %eax,0x8(%esp)
08423154 +0x2ea:  movl   $"upDate member_mousepass set enable_flag = '0' where m_id=%s",0x4(%esp)
0842315c +0x2f2:  mov    -0xc(%ebp),%eax
0842315f +0x2f5:  mov    %eax,(%esp)
08423162 +0x2f8:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08423167 +0x2fd:  movl   $0x1,0x4(%esp)
0842316f +0x305:  mov    -0xc(%ebp),%eax
08423172 +0x308:  mov    %eax,(%esp)
08423175 +0x30b:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0842317a +0x310:  xor    $0x1,%eax
0842317d +0x313:  test   %al,%al
0842317f +0x315:  jne    08423192 <+0x328>
08423181 +0x317:  mov    -0xc(%ebp),%eax
08423184 +0x31a:  mov    %eax,(%esp)
08423187 +0x31d:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
0842318c +0x322:  or     %edx,%eax
0842318e +0x324:  test   %eax,%eax
08423190 +0x326:  jne    08423199 <+0x32f>
08423192 +0x328:  mov    $0x1,%eax
08423197 +0x32d:  jmp    0842319e <+0x334>
08423199 +0x32f:  mov    $0x0,%eax
0842319e +0x334:  test   %al,%al
084231a0 +0x336:  je     084231a9 <+0x33f>
084231a2 +0x338:  mov    $0x1,%eax
084231a7 +0x33d:  jmp    084231b4 <+0x34a>
084231a9 +0x33f:  mov    0x1c(%ebp),%eax
084231ac +0x342:  movb   $0x0,(%eax)
084231af +0x345:  mov    $0x0,%eax
084231b4 +0x34a:  leave
084231b5 +0x34b:  ret
```

## 反编译 C

```c
// DB_MouseRegister::convertPassPadInfo @ 0x8422e6a

/* DB_MouseRegister::convertPassPadInfo(unsigned int, char*, int&, char&, int&, bool&, char*, bool&,
   char*, long&, bool&) */

bool DB_MouseRegister::convertPassPadInfo
               (uint param_1,char *param_2,int *param_3,char *param_4,int *param_5,bool *param_6,
               char *param_7,bool *param_8,char *param_9,long *param_10,bool *param_11)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  char local_5a [36];
  char local_36 [36];
  char local_12;
  char local_11;
  MySQL *local_10;
  
  *param_6 = false;
  local_10 = (MySQL *)_getDBHandleForDevideAccountDB();
  uVar3 = NumberToString(param_1,0);
  MySQL::set_query(local_10,
                   "seLect mousepass, fail_cnt, cancel_cnt, version_info, validity_time>unix_timestamp(now()), adddate(now(),interval -1 month) >= occ_time from member_mousepass where m_id=%s and enable_flag = \'1\'"
                   ,uVar3);
  cVar2 = MySQL::exec(local_10,true);
  if (cVar2 != '\x01') {
    return true;
  }
  iVar4 = MySQL::get_n_rows(local_10);
  if (iVar4 == 0) {
    *param_4 = '\0';
    return false;
  }
  cVar2 = MySQL::fetch(local_10);
  if (cVar2 != '\x01') {
    return true;
  }
  cVar2 = MySQL::get_str(local_10,0,param_7,0x24);
  if (cVar2 != '\x01') {
    return true;
  }
  cVar2 = MySQL::get_int(local_10,1,param_3);
  if (cVar2 != '\x01') {
    return true;
  }
  cVar2 = MySQL::get_int(local_10,2,param_5);
  if (cVar2 != '\x01') {
    return true;
  }
  cVar2 = MySQL::get_byte(local_10,3,&local_11);
  if (cVar2 != '\x01') {
    return true;
  }
  *param_10 = 0;
  cVar2 = MySQL::get_uint(local_10,4,(uint *)param_10);
  if (cVar2 != '\x01') {
    return true;
  }
  local_12 = '\0';
  cVar2 = MySQL::get_byte(local_10,5,&local_12);
  if (cVar2 != '\x01') {
    return true;
  }
  *param_11 = local_12 != '\0';
  *param_8 = false;
  if (*param_10 != 0) {
    *param_8 = true;
  }
  if (local_11 == '\x02') {
    *param_6 = true;
    *param_4 = '\x02';
    return false;
  }
  *param_4 = '\x01';
  strncpy(local_36,param_2,0x24);
  encryptAES_(GlobalData::s_pcryptRijndael_MousePassword_,local_36,local_5a);
  iVar4 = strncmp(param_7,local_5a,0x24);
  if (iVar4 != 0) {
    *param_3 = *param_3 + 1;
    _updateFailCnt(param_1,*param_3,param_9);
    if (*param_3 < 10) {
      return (bool)0x48;
    }
    return (bool)0x49;
  }
  *param_3 = 0;
  *param_5 = 0;
  cVar2 = _updateHistory(param_1,7,param_9);
  if (cVar2 != '\x01') {
    return true;
  }
  uVar3 = NumberToString(param_1,0);
  MySQL::set_query(local_10,"upDate member_mousepass set enable_flag = \'0\' where m_id=%s",uVar3);
  cVar2 = MySQL::exec(local_10,true);
  if ((cVar2 == '\x01') && (lVar5 = MySQL::getAffectedRowCount(local_10), lVar5 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    *param_6 = false;
  }
  return bVar1;
}
```
