# dispatch

`_ZN14DB_HadesPunish8dispatchEiiP6Stream`

`DB_HadesPunish::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_HadesPunish` | `0x08445aa6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08445aa6  _ZN14DB_HadesPunish8dispatchEiiP6Stream
#           DB_HadesPunish::dispatch(int, int, Stream*)
# range [0x08445aa6, 0x08445dd3]
08445aa6 +0x000:  push   %ebp
08445aa7 +0x001:  mov    %esp,%ebp
08445aa9 +0x003:  sub    $0x1d8,%esp
08445aaf +0x009:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08445ab4 +0x00e:  movl   $0x0,0x8(%esp)
08445abc +0x016:  movl   $0x1,0x4(%esp)
08445ac4 +0x01e:  mov    %eax,(%esp)
08445ac7 +0x021:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08445acc +0x026:  mov    %eax,-0x18(%ebp)
08445acf +0x029:  mov    0x14(%ebp),%eax
08445ad2 +0x02c:  mov    %eax,(%esp)
08445ad5 +0x02f:  call   08454232 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6e48>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6e48
08445ada +0x034:  mov    %eax,-0x14(%ebp)
08445add +0x037:  mov    -0x14(%ebp),%eax
08445ae0 +0x03a:  mov    0x8(%eax),%eax
08445ae3 +0x03d:  test   %eax,%eax
08445ae5 +0x03f:  jne    08445b07 <+0x61>
08445ae7 +0x041:  movl   $0x16,0x8(%esp)
08445aef +0x049:  movl   $"'9999-12-31 23:59:59'",0x4(%esp)
08445af7 +0x051:  lea    -0xb8(%ebp),%eax
08445afd +0x057:  mov    %eax,(%esp)
08445b00 +0x05a:  call   0807d8a0 <_init+0x198>
08445b05 +0x05f:  jmp    08445b27 <+0x81>
08445b07 +0x061:  mov    -0x14(%ebp),%eax
08445b0a +0x064:  mov    0x8(%eax),%eax
08445b0d +0x067:  mov    %eax,0x8(%esp)
08445b11 +0x06b:  movl   $"adddate(now(),interval %d day)",0x4(%esp)
08445b19 +0x073:  lea    -0xb8(%ebp),%eax
08445b1f +0x079:  mov    %eax,(%esp)
08445b22 +0x07c:  call   0807e440 <_init+0xd38>
08445b27 +0x081:  mov    -0x14(%ebp),%eax
08445b2a +0x084:  mov    0xc(%eax),%eax
08445b2d +0x087:  test   %eax,%eax
08445b2f +0x089:  je     08445b38 <+0x92>
08445b31 +0x08b:  mov    $0x2,%eax
08445b36 +0x090:  jmp    08445b3d <+0x97>
08445b38 +0x092:  mov    $0x1,%eax
08445b3d +0x097:  mov    %eax,-0x10(%ebp)
08445b40 +0x09a:  movl   $0x0,-0xc(%ebp)
08445b47 +0x0a1:  mov    -0x14(%ebp),%eax
08445b4a +0x0a4:  mov    0x4(%eax),%eax
08445b4d +0x0a7:  cmp    $0x1,%eax
08445b50 +0x0aa:  jne    08445b5b <+0xb5>
08445b52 +0x0ac:  movl   $0x3,-0xc(%ebp)
08445b59 +0x0b3:  jmp    08445b62 <+0xbc>
08445b5b +0x0b5:  movl   $0xc,-0xc(%ebp)
08445b62 +0x0bc:  mov    -0x14(%ebp),%eax
08445b65 +0x0bf:  mov    (%eax),%eax
08445b67 +0x0c1:  movl   $0x0,0x4(%esp)
08445b6f +0x0c9:  mov    %eax,(%esp)
08445b72 +0x0cc:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08445b77 +0x0d1:  mov    -0xc(%ebp),%edx
08445b7a +0x0d4:  mov    %edx,0x14(%esp)
08445b7e +0x0d8:  mov    %eax,0x10(%esp)
08445b82 +0x0dc:  mov    -0x10(%ebp),%eax
08445b85 +0x0df:  mov    %eax,0xc(%esp)
08445b89 +0x0e3:  lea    -0xb8(%ebp),%eax
08445b8f +0x0e9:  mov    %eax,0x8(%esp)
08445b93 +0x0ed:  movl   $"upDate member_punish_info set occ_time=now(), start_time=now(), end_time=%s, apply_flag=%d where m_id=%s and punish_type=%d",0x4(%esp)
08445b9b +0x0f5:  mov    -0x18(%ebp),%eax
08445b9e +0x0f8:  mov    %eax,(%esp)
08445ba1 +0x0fb:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08445ba6 +0x100:  movl   $0x1,0x4(%esp)
08445bae +0x108:  mov    -0x18(%ebp),%eax
08445bb1 +0x10b:  mov    %eax,(%esp)
08445bb4 +0x10e:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08445bb9 +0x113:  xor    $0x1,%eax
08445bbc +0x116:  test   %al,%al
08445bbe +0x118:  jne    08445bd1 <+0x12b>
08445bc0 +0x11a:  mov    -0x18(%ebp),%eax
08445bc3 +0x11d:  mov    %eax,(%esp)
08445bc6 +0x120:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
08445bcb +0x125:  or     %edx,%eax
08445bcd +0x127:  test   %eax,%eax
08445bcf +0x129:  jne    08445bd8 <+0x132>
08445bd1 +0x12b:  mov    $0x1,%eax
08445bd6 +0x130:  jmp    08445bdd <+0x137>
08445bd8 +0x132:  mov    $0x0,%eax
08445bdd +0x137:  test   %al,%al
08445bdf +0x139:  je     08445c49 <+0x1a3>
08445be1 +0x13b:  mov    -0x14(%ebp),%eax
08445be4 +0x13e:  mov    (%eax),%eax
08445be6 +0x140:  movl   $0x0,0x4(%esp)
08445bee +0x148:  mov    %eax,(%esp)
08445bf1 +0x14b:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08445bf6 +0x150:  mov    -0x10(%ebp),%edx
08445bf9 +0x153:  mov    %edx,0x14(%esp)
08445bfd +0x157:  lea    -0xb8(%ebp),%edx
08445c03 +0x15d:  mov    %edx,0x10(%esp)
08445c07 +0x161:  mov    -0xc(%ebp),%edx
08445c0a +0x164:  mov    %edx,0xc(%esp)
08445c0e +0x168:  mov    %eax,0x8(%esp)
08445c12 +0x16c:  movl   $"inSert into member_punish_info (m_id, punish_type, occ_time, start_time, end_time, punish_value, apply_flag) values(%s, %d, now(), now(), %s, 0, %d)",0x4(%esp)
08445c1a +0x174:  mov    -0x18(%ebp),%eax
08445c1d +0x177:  mov    %eax,(%esp)
08445c20 +0x17a:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08445c25 +0x17f:  movl   $0x1,0x4(%esp)
08445c2d +0x187:  mov    -0x18(%ebp),%eax
08445c30 +0x18a:  mov    %eax,(%esp)
08445c33 +0x18d:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08445c38 +0x192:  xor    $0x1,%eax
08445c3b +0x195:  test   %al,%al
08445c3d +0x197:  je     08445c49 <+0x1a3>
08445c3f +0x199:  mov    $0x0,%eax
08445c44 +0x19e:  jmp    08445dd1 <+0x32b>
08445c49 +0x1a3:  mov    -0x14(%ebp),%eax
08445c4c +0x1a6:  mov    0x4(%eax),%eax
08445c4f +0x1a9:  cmp    $0x1,%eax
08445c52 +0x1ac:  jne    08445c74 <+0x1ce>
08445c54 +0x1ae:  movl   $0xa6,0x8(%esp)
08445c5c +0x1b6:  movl   $"|*|HADES 제재 / 불법프로그램 및 유해 프로그램을 사용하여 이득을 취하거나, 불법 재화 생성 및 유통한 경우(퍼스트서버 포함) / 1차 : 해지불가 / 계정해킹 주장 시 확인요청",0x4(%esp)
08445c64 +0x1be:  lea    -0x1b7(%ebp),%eax
08445c6a +0x1c4:  mov    %eax,(%esp)
08445c6d +0x1c7:  call   0807d8a0 <_init+0x198>
08445c72 +0x1cc:  jmp    08445c92 <+0x1ec>
08445c74 +0x1ce:  movl   $0x3d,0x8(%esp)
08445c7c +0x1d6:  movl   $"|*|HADES 제재 / 불법프로그램에 의한 처벌 / 계정보호제도 적용",0x4(%esp)
08445c84 +0x1de:  lea    -0x1b7(%ebp),%eax
08445c8a +0x1e4:  mov    %eax,(%esp)
08445c8d +0x1e7:  call   0807d8a0 <_init+0x198>
08445c92 +0x1ec:  movl   $0x0,-0x22(%ebp)
08445c99 +0x1f3:  movl   $0x0,-0x1e(%ebp)
08445ca0 +0x1fa:  movw   $0x0,-0x1a(%ebp)
08445ca6 +0x200:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08445cad +0x207:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08445cb2 +0x20c:  mov    %eax,-0x28(%ebp)
08445cb5 +0x20f:  lea    -0x54(%ebp),%eax
08445cb8 +0x212:  mov    %eax,0x4(%esp)
08445cbc +0x216:  lea    -0x28(%ebp),%eax
08445cbf +0x219:  mov    %eax,(%esp)
08445cc2 +0x21c:  call   0807e360 <_init+0xc58>
08445cc7 +0x221:  lea    -0x54(%ebp),%eax
08445cca +0x224:  mov    %eax,0xc(%esp)
08445cce +0x228:  movl   $"%Y",0x8(%esp)
08445cd6 +0x230:  movl   $0xa,0x4(%esp)
08445cde +0x238:  lea    -0x22(%ebp),%eax
08445ce1 +0x23b:  mov    %eax,(%esp)
08445ce4 +0x23e:  call   0807dbc0 <_init+0x4b8>
08445ce9 +0x243:  mov    -0x14(%ebp),%eax
08445cec +0x246:  mov    (%eax),%eax
08445cee +0x248:  movl   $0x0,0x4(%esp)
08445cf6 +0x250:  mov    %eax,(%esp)
08445cf9 +0x253:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08445cfe +0x258:  lea    -0x1b7(%ebp),%edx
08445d04 +0x25e:  mov    %edx,0x1c(%esp)
08445d08 +0x262:  mov    -0x10(%ebp),%edx
08445d0b +0x265:  mov    %edx,0x18(%esp)
08445d0f +0x269:  lea    -0xb8(%ebp),%edx
08445d15 +0x26f:  mov    %edx,0x14(%esp)
08445d19 +0x273:  mov    -0xc(%ebp),%edx
08445d1c +0x276:  mov    %edx,0x10(%esp)
08445d20 +0x27a:  mov    %eax,0xc(%esp)
08445d24 +0x27e:  lea    -0x22(%ebp),%eax
08445d27 +0x281:  mov    %eax,0x8(%esp)
08445d2b +0x285:  movl   $"inSert into member_punish_info_history_%s (m_id, punish_type, occ_time, punish_value, start_time, end_time, admin_id, apply_flag, reason) values(%s, %d, now(), 6, now(), %s, 'HADES', %d, '%s') ",0x4(%esp)
08445d33 +0x28d:  mov    -0x18(%ebp),%eax
08445d36 +0x290:  mov    %eax,(%esp)
08445d39 +0x293:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08445d3e +0x298:  movl   $0x1,0x4(%esp)
08445d46 +0x2a0:  mov    -0x18(%ebp),%eax
08445d49 +0x2a3:  mov    %eax,(%esp)
08445d4c +0x2a6:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08445d51 +0x2ab:  xor    $0x1,%eax
08445d54 +0x2ae:  test   %al,%al
08445d56 +0x2b0:  je     08445d5f <+0x2b9>
08445d58 +0x2b2:  mov    $0x0,%eax
08445d5d +0x2b7:  jmp    08445dd1 <+0x32b>
08445d5f +0x2b9:  cmpl   $0x3,-0xc(%ebp)
08445d63 +0x2bd:  je     08445d71 <+0x2cb>
08445d65 +0x2bf:  cmpl   $0xc,-0xc(%ebp)
08445d69 +0x2c3:  jne    08445dcc <+0x326>
08445d6b +0x2c5:  cmpl   $0x1,-0x10(%ebp)
08445d6f +0x2c9:  jne    08445dcc <+0x326>
08445d71 +0x2cb:  mov    -0x14(%ebp),%eax
08445d74 +0x2ce:  mov    (%eax),%eax
08445d76 +0x2d0:  movl   $0x0,0x4(%esp)
08445d7e +0x2d8:  mov    %eax,(%esp)
08445d81 +0x2db:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08445d86 +0x2e0:  mov    -0x10(%ebp),%edx
08445d89 +0x2e3:  mov    %edx,0x10(%esp)
08445d8d +0x2e7:  mov    -0xc(%ebp),%edx
08445d90 +0x2ea:  mov    %edx,0xc(%esp)
08445d94 +0x2ee:  mov    %eax,0x8(%esp)
08445d98 +0x2f2:  movl   $"inSert into member_punish_info_ars_mail (m_id, punish_type, apply_flag, occ_time) values(%s, %d, %d, now())",0x4(%esp)
08445da0 +0x2fa:  mov    -0x18(%ebp),%eax
08445da3 +0x2fd:  mov    %eax,(%esp)
08445da6 +0x300:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08445dab +0x305:  movl   $0x1,0x4(%esp)
08445db3 +0x30d:  mov    -0x18(%ebp),%eax
08445db6 +0x310:  mov    %eax,(%esp)
08445db9 +0x313:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08445dbe +0x318:  xor    $0x1,%eax
08445dc1 +0x31b:  test   %al,%al
08445dc3 +0x31d:  je     08445dcc <+0x326>
08445dc5 +0x31f:  mov    $0x0,%eax
08445dca +0x324:  jmp    08445dd1 <+0x32b>
08445dcc +0x326:  mov    $0x1,%eax
08445dd1 +0x32b:  leave
08445dd2 +0x32c:  ret
08445dd3 +0x32d:  nop
```

## 反编译 C

```c
// DB_HadesPunish::dispatch @ 0x8445aa6

/* DB_HadesPunish::dispatch(int, int, Stream*) */

undefined4 DB_HadesPunish::dispatch(int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  Stream *in_stack_00000010;
  char *pcVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 local_1bb [255];
  char local_bc [100];
  tm local_58;
  time_t local_2c;
  char local_26 [10];
  MySQL *local_1c;
  SIG_HADES_PUNISH *local_18;
  int local_14;
  int local_10;
  
  local_1c = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  local_18 = Stream::GetOutBuffer<SIG_HADES_PUNISH>(in_stack_00000010);
  if (*(int *)(local_18 + 8) == 0) {
    memcpy(local_bc,"\'9999-12-31 23:59:59\'",0x16);
  }
  else {
    sprintf(local_bc,"adddate(now(),interval %d day)",*(undefined4 *)(local_18 + 8));
  }
  if (*(uint *)(local_18 + 0xc) == 0) {
    local_14 = 1;
  }
  else {
    local_14 = 2;
  }
  if (*(uint *)(local_18 + 4) == 1) {
    local_10 = 3;
  }
  else {
    local_10 = 0xc;
  }
  uVar3 = NumberToString(*(uint *)local_18,0);
  MySQL::set_query(local_1c,
                   "upDate member_punish_info set occ_time=now(), start_time=now(), end_time=%s, apply_flag=%d where m_id=%s and punish_type=%d"
                   ,local_bc,local_14,uVar3,local_10);
  cVar2 = MySQL::exec(local_1c,true);
  if ((cVar2 == '\x01') && (lVar4 = MySQL::getAffectedRowCount(local_1c), lVar4 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    uVar3 = NumberToString(*(uint *)local_18,0);
    MySQL::set_query(local_1c,
                     "inSert into member_punish_info (m_id, punish_type, occ_time, start_time, end_time, punish_value, apply_flag) values(%s, %d, now(), now(), %s, 0, %d)"
                     ,uVar3,local_10,local_bc,local_14);
    cVar2 = MySQL::exec(local_1c,true);
    if (cVar2 != '\x01') {
      return 0;
    }
  }
  if (*(uint *)(local_18 + 4) == 1) {
    memcpy(local_1bb,&DAT_08c57930,0xa6);
  }
  else {
    memcpy(local_1bb,&DAT_08c579d8,0x3d);
  }
  local_26[0] = '\0';
  local_26[1] = '\0';
  local_26[2] = '\0';
  local_26[3] = '\0';
  local_26[4] = '\0';
  local_26[5] = '\0';
  local_26[6] = '\0';
  local_26[7] = '\0';
  local_26[8] = '\0';
  local_26[9] = '\0';
  local_2c = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  localtime_r(&local_2c,&local_58);
  strftime(local_26,10,"%Y",&local_58);
  uVar3 = NumberToString(*(uint *)local_18,0);
  puVar7 = local_1bb;
  pcVar5 = local_bc;
  iVar6 = local_14;
  MySQL::set_query(local_1c,
                   "inSert into member_punish_info_history_%s (m_id, punish_type, occ_time, punish_value, start_time, end_time, admin_id, apply_flag, reason) values(%s, %d, now(), 6, now(), %s, \'HADES\', %d, \'%s\') "
                   ,local_26,uVar3,local_10,pcVar5,local_14,puVar7);
  cVar2 = MySQL::exec(local_1c,true);
  if (cVar2 == '\x01') {
    if ((local_10 == 3) || ((local_10 == 0xc && (local_14 == 1)))) {
      uVar3 = NumberToString(*(uint *)local_18,0);
      MySQL::set_query(local_1c,
                       "inSert into member_punish_info_ars_mail (m_id, punish_type, apply_flag, occ_time) values(%s, %d, %d, now())"
                       ,uVar3,local_10,local_14,pcVar5,iVar6,puVar7);
      cVar2 = MySQL::exec(local_1c,true);
      if (cVar2 != '\x01') {
        return 0;
      }
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
