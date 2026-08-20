# dispatch

`_ZN23DB_PassPadUpdateFailCnt8dispatchEiiP6Stream`

`DB_PassPadUpdateFailCnt::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_PassPadUpdateFailCnt` | `0x08423bc4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08423bc4  _ZN23DB_PassPadUpdateFailCnt8dispatchEiiP6Stream
#           DB_PassPadUpdateFailCnt::dispatch(int, int, Stream*)
# range [0x08423bc4, 0x08423eb3]
08423bc4 +0x000:  push   %ebp
08423bc5 +0x001:  mov    %esp,%ebp
08423bc7 +0x003:  push   %ebx
08423bc8 +0x004:  sub    $0x94,%esp
08423bce +0x00a:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08423bd3 +0x00f:  movl   $0x0,0x8(%esp)
08423bdb +0x017:  movl   $0x6,0x4(%esp)
08423be3 +0x01f:  mov    %eax,(%esp)
08423be6 +0x022:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08423beb +0x027:  mov    %eax,-0x14(%ebp)
08423bee +0x02a:  mov    0x14(%ebp),%eax
08423bf1 +0x02d:  mov    %eax,(%esp)
08423bf4 +0x030:  call   08451dc6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x49dc>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x49dc
08423bf9 +0x035:  mov    %eax,-0x10(%ebp)
08423bfc +0x038:  mov    -0x10(%ebp),%eax
08423bff +0x03b:  mov    (%eax),%eax
08423c01 +0x03d:  movl   $0x0,0x4(%esp)
08423c09 +0x045:  mov    %eax,(%esp)
08423c0c +0x048:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08423c11 +0x04d:  mov    -0x10(%ebp),%edx
08423c14 +0x050:  mov    0x4(%edx),%edx
08423c17 +0x053:  mov    %eax,0xc(%esp)
08423c1b +0x057:  mov    %edx,0x8(%esp)
08423c1f +0x05b:  movl   $"upDate member_mousepass set fail_cnt=%d where m_id=%s and enable_flag = '1'",0x4(%esp)
08423c27 +0x063:  mov    -0x14(%ebp),%eax
08423c2a +0x066:  mov    %eax,(%esp)
08423c2d +0x069:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08423c32 +0x06e:  movl   $0x1,0x4(%esp)
08423c3a +0x076:  mov    -0x14(%ebp),%eax
08423c3d +0x079:  mov    %eax,(%esp)
08423c40 +0x07c:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08423c45 +0x081:  mov    -0x10(%ebp),%eax
08423c48 +0x084:  mov    0x4(%eax),%eax
08423c4b +0x087:  test   %eax,%eax
08423c4d +0x089:  je     08423dbd <+0x1f9>
08423c53 +0x08f:  mov    -0x10(%ebp),%eax
08423c56 +0x092:  mov    (%eax),%eax
08423c58 +0x094:  movl   $0x0,0x4(%esp)
08423c60 +0x09c:  mov    %eax,(%esp)
08423c63 +0x09f:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08423c68 +0x0a4:  mov    %eax,0x8(%esp)
08423c6c +0x0a8:  movl   $"seLect mousepass from member_mousepass where m_id=%s",0x4(%esp)
08423c74 +0x0b0:  mov    -0x14(%ebp),%eax
08423c77 +0x0b3:  mov    %eax,(%esp)
08423c7a +0x0b6:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08423c7f +0x0bb:  movl   $0x1,0x4(%esp)
08423c87 +0x0c3:  mov    -0x14(%ebp),%eax
08423c8a +0x0c6:  mov    %eax,(%esp)
08423c8d +0x0c9:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08423c92 +0x0ce:  xor    $0x1,%eax
08423c95 +0x0d1:  test   %al,%al
08423c97 +0x0d3:  jne    08423cba <+0xf6>
08423c99 +0x0d5:  mov    -0x14(%ebp),%eax
08423c9c +0x0d8:  mov    %eax,(%esp)
08423c9f +0x0db:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08423ca4 +0x0e0:  test   %eax,%eax
08423ca6 +0x0e2:  je     08423cba <+0xf6>
08423ca8 +0x0e4:  mov    -0x14(%ebp),%eax
08423cab +0x0e7:  mov    %eax,(%esp)
08423cae +0x0ea:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08423cb3 +0x0ef:  xor    $0x1,%eax
08423cb6 +0x0f2:  test   %al,%al
08423cb8 +0x0f4:  je     08423cc1 <+0xfd>
08423cba +0x0f6:  mov    $0x1,%eax
08423cbf +0x0fb:  jmp    08423cc6 <+0x102>
08423cc1 +0x0fd:  mov    $0x0,%eax
08423cc6 +0x102:  test   %al,%al
08423cc8 +0x104:  je     08423cd4 <+0x110>
08423cca +0x106:  mov    $0x0,%eax
08423ccf +0x10b:  jmp    08423eaa <+0x2e6>
08423cd4 +0x110:  movl   $0x24,0xc(%esp)
08423cdc +0x118:  lea    -0x48(%ebp),%eax
08423cdf +0x11b:  mov    %eax,0x8(%esp)
08423ce3 +0x11f:  movl   $0x0,0x4(%esp)
08423ceb +0x127:  mov    -0x14(%ebp),%eax
08423cee +0x12a:  mov    %eax,(%esp)
08423cf1 +0x12d:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
08423cf6 +0x132:  xor    $0x1,%eax
08423cf9 +0x135:  test   %al,%al
08423cfb +0x137:  je     08423d07 <+0x143>
08423cfd +0x139:  mov    $0x0,%eax
08423d02 +0x13e:  jmp    08423eaa <+0x2e6>
08423d07 +0x143:  movl   $0x0,-0x1e(%ebp)
08423d0e +0x14a:  movl   $0x0,-0x1a(%ebp)
08423d15 +0x151:  movw   $0x0,-0x16(%ebp)
08423d1b +0x157:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08423d22 +0x15e:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08423d27 +0x163:  mov    %eax,-0x24(%ebp)
08423d2a +0x166:  lea    -0x74(%ebp),%eax
08423d2d +0x169:  mov    %eax,0x4(%esp)
08423d31 +0x16d:  lea    -0x24(%ebp),%eax
08423d34 +0x170:  mov    %eax,(%esp)
08423d37 +0x173:  call   0807e360 <_init+0xc58>
08423d3c +0x178:  lea    -0x74(%ebp),%eax
08423d3f +0x17b:  mov    %eax,0xc(%esp)
08423d43 +0x17f:  movl   $"%Y%m",0x8(%esp)
08423d4b +0x187:  movl   $0xa,0x4(%esp)
08423d53 +0x18f:  lea    -0x1e(%ebp),%eax
08423d56 +0x192:  mov    %eax,(%esp)
08423d59 +0x195:  call   0807dbc0 <_init+0x4b8>
08423d5e +0x19a:  mov    -0x10(%ebp),%eax
08423d61 +0x19d:  lea    0x8(%eax),%ebx
08423d64 +0x1a0:  mov    -0x10(%ebp),%eax
08423d67 +0x1a3:  mov    (%eax),%eax
08423d69 +0x1a5:  movl   $0x0,0x4(%esp)
08423d71 +0x1ad:  mov    %eax,(%esp)
08423d74 +0x1b0:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08423d79 +0x1b5:  mov    %ebx,0x18(%esp)
08423d7d +0x1b9:  movl   $0x11,0x14(%esp)
08423d85 +0x1c1:  lea    -0x48(%ebp),%edx
08423d88 +0x1c4:  mov    %edx,0x10(%esp)
08423d8c +0x1c8:  mov    %eax,0xc(%esp)
08423d90 +0x1cc:  lea    -0x1e(%ebp),%eax
08423d93 +0x1cf:  mov    %eax,0x8(%esp)
08423d97 +0x1d3:  movl   $"inSert into member_mousepass_history_%s (occ_time, m_id, pre_mousepass, modify_type, ip_info, port_info) values (now(),%s,'%s',%d,'%s','')",0x4(%esp)
08423d9f +0x1db:  mov    -0x14(%ebp),%eax
08423da2 +0x1de:  mov    %eax,(%esp)
08423da5 +0x1e1:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08423daa +0x1e6:  movl   $0x1,0x4(%esp)
08423db2 +0x1ee:  mov    -0x14(%ebp),%eax
08423db5 +0x1f1:  mov    %eax,(%esp)
08423db8 +0x1f4:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08423dbd +0x1f9:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08423dc2 +0x1fe:  movl   $0x0,0x8(%esp)
08423dca +0x206:  movl   $0x1,0x4(%esp)
08423dd2 +0x20e:  mov    %eax,(%esp)
08423dd5 +0x211:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08423dda +0x216:  mov    %eax,-0xc(%ebp)
08423ddd +0x219:  mov    -0x10(%ebp),%eax
08423de0 +0x21c:  mov    (%eax),%eax
08423de2 +0x21e:  movl   $0x0,0x4(%esp)
08423dea +0x226:  mov    %eax,(%esp)
08423ded +0x229:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08423df2 +0x22e:  mov    -0x10(%ebp),%edx
08423df5 +0x231:  mov    0x4(%edx),%edx
08423df8 +0x234:  mov    %eax,0xc(%esp)
08423dfc +0x238:  mov    %edx,0x8(%esp)
08423e00 +0x23c:  movl   $"upDate member_security_grade set goblin_fail_cnt=%d where m_id=%s",0x4(%esp)
08423e08 +0x244:  mov    -0xc(%ebp),%eax
08423e0b +0x247:  mov    %eax,(%esp)
08423e0e +0x24a:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08423e13 +0x24f:  movl   $0x1,0x4(%esp)
08423e1b +0x257:  mov    -0xc(%ebp),%eax
08423e1e +0x25a:  mov    %eax,(%esp)
08423e21 +0x25d:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08423e26 +0x262:  xor    $0x1,%eax
08423e29 +0x265:  test   %al,%al
08423e2b +0x267:  jne    08423e3e <+0x27a>
08423e2d +0x269:  mov    -0xc(%ebp),%eax
08423e30 +0x26c:  mov    %eax,(%esp)
08423e33 +0x26f:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
08423e38 +0x274:  or     %edx,%eax
08423e3a +0x276:  test   %eax,%eax
08423e3c +0x278:  jne    08423e45 <+0x281>
08423e3e +0x27a:  mov    $0x1,%eax
08423e43 +0x27f:  jmp    08423e4a <+0x286>
08423e45 +0x281:  mov    $0x0,%eax
08423e4a +0x286:  test   %al,%al
08423e4c +0x288:  je     08423ea5 <+0x2e1>
08423e4e +0x28a:  mov    -0x10(%ebp),%eax
08423e51 +0x28d:  mov    0x4(%eax),%ebx
08423e54 +0x290:  mov    -0x10(%ebp),%eax
08423e57 +0x293:  mov    (%eax),%eax
08423e59 +0x295:  movl   $0x0,0x4(%esp)
08423e61 +0x29d:  mov    %eax,(%esp)
08423e64 +0x2a0:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08423e69 +0x2a5:  mov    %ebx,0xc(%esp)
08423e6d +0x2a9:  mov    %eax,0x8(%esp)
08423e71 +0x2ad:  movl   $"inSert into member_security_grade(m_id, goblin_fail_cnt) values(%s, %d)",0x4(%esp)
08423e79 +0x2b5:  mov    -0xc(%ebp),%eax
08423e7c +0x2b8:  mov    %eax,(%esp)
08423e7f +0x2bb:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08423e84 +0x2c0:  movl   $0x1,0x4(%esp)
08423e8c +0x2c8:  mov    -0xc(%ebp),%eax
08423e8f +0x2cb:  mov    %eax,(%esp)
08423e92 +0x2ce:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08423e97 +0x2d3:  xor    $0x1,%eax
08423e9a +0x2d6:  test   %al,%al
08423e9c +0x2d8:  je     08423ea5 <+0x2e1>
08423e9e +0x2da:  mov    $0x0,%eax
08423ea3 +0x2df:  jmp    08423eaa <+0x2e6>
08423ea5 +0x2e1:  mov    $0x1,%eax
08423eaa +0x2e6:  add    $0x94,%esp
08423eb0 +0x2ec:  pop    %ebx
08423eb1 +0x2ed:  pop    %ebp
08423eb2 +0x2ee:  ret
08423eb3 +0x2ef:  nop
```

## 反编译 C

```c
// DB_PassPadUpdateFailCnt::dispatch @ 0x8423bc4

/* DB_PassPadUpdateFailCnt::dispatch(int, int, Stream*) */

undefined4 DB_PassPadUpdateFailCnt::dispatch(int param_1,int param_2,Stream *param_3)

{
  SIG_SECURITY_CARD_UPDATE_FAIL_CNT *pSVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  Stream *in_stack_00000010;
  tm local_78;
  char local_4c [36];
  time_t local_28;
  char local_22 [10];
  MySQL *local_18;
  SIG_SECURITY_CARD_UPDATE_FAIL_CNT *local_14;
  MySQL *local_10;
  
  local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  local_14 = Stream::GetOutBuffer<SIG_SECURITY_CARD_UPDATE_FAIL_CNT>(in_stack_00000010);
  uVar5 = NumberToString(*(uint *)local_14,0);
  MySQL::set_query(local_18,
                   "upDate member_mousepass set fail_cnt=%d where m_id=%s and enable_flag = \'1\'",
                   *(uint *)(local_14 + 4),uVar5);
  MySQL::exec(local_18,true);
  if (*(uint *)(local_14 + 4) != 0) {
    uVar6 = NumberToString(*(uint *)local_14,0);
    MySQL::set_query(local_18,"seLect mousepass from member_mousepass where m_id=%s",uVar6,uVar5);
    cVar4 = MySQL::exec(local_18,true);
    if (((cVar4 == '\x01') && (iVar7 = MySQL::get_n_rows(local_18), iVar7 != 0)) &&
       (cVar4 = MySQL::fetch(local_18), cVar4 == '\x01')) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      return 0;
    }
    cVar4 = MySQL::get_str(local_18,0,local_4c,0x24);
    if (cVar4 != '\x01') {
      return 0;
    }
    local_22[0] = '\0';
    local_22[1] = '\0';
    local_22[2] = '\0';
    local_22[3] = '\0';
    local_22[4] = '\0';
    local_22[5] = '\0';
    local_22[6] = '\0';
    local_22[7] = '\0';
    local_22[8] = '\0';
    local_22[9] = '\0';
    local_28 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    localtime_r(&local_28,&local_78);
    strftime(local_22,10,"%Y%m",&local_78);
    pSVar1 = local_14 + 8;
    uVar5 = NumberToString(*(uint *)local_14,0);
    MySQL::set_query(local_18,
                     "inSert into member_mousepass_history_%s (occ_time, m_id, pre_mousepass, modify_type, ip_info, port_info) values (now(),%s,\'%s\',%d,\'%s\',\'\')"
                     ,local_22,uVar5,local_4c,0x11,pSVar1);
    MySQL::exec(local_18,true);
  }
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  uVar5 = NumberToString(*(uint *)local_14,0);
  MySQL::set_query(local_10,"upDate member_security_grade set goblin_fail_cnt=%d where m_id=%s",
                   *(uint *)(local_14 + 4),uVar5);
  cVar4 = MySQL::exec(local_10,true);
  if ((cVar4 == '\x01') && (lVar8 = MySQL::getAffectedRowCount(local_10), lVar8 != 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    uVar2 = *(uint *)(local_14 + 4);
    uVar5 = NumberToString(*(uint *)local_14,0);
    MySQL::set_query(local_10,
                     "inSert into member_security_grade(m_id, goblin_fail_cnt) values(%s, %d)",uVar5
                     ,uVar2);
    cVar4 = MySQL::exec(local_10,true);
    if (cVar4 != '\x01') {
      return 0;
    }
  }
  return 1;
}
```
