# dispatch

`_ZN28DB_SecurityCardUpdateFailCnt8dispatchEiiP6Stream`

`DB_SecurityCardUpdateFailCnt::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_SecurityCardUpdateFailCnt` | `0x0842bdda` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0842bdda  _ZN28DB_SecurityCardUpdateFailCnt8dispatchEiiP6Stream
#           DB_SecurityCardUpdateFailCnt::dispatch(int, int, Stream*)
# range [0x0842bdda, 0x0842bfa9]
0842bdda +0x000:  push   %ebp
0842bddb +0x001:  mov    %esp,%ebp
0842bddd +0x003:  push   %ebx
0842bdde +0x004:  sub    $0x44,%esp
0842bde1 +0x007:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0842bde6 +0x00c:  movl   $0x0,0x8(%esp)
0842bdee +0x014:  movl   $0x6,0x4(%esp)
0842bdf6 +0x01c:  mov    %eax,(%esp)
0842bdf9 +0x01f:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0842bdfe +0x024:  mov    %eax,-0x14(%ebp)
0842be01 +0x027:  mov    0x14(%ebp),%eax
0842be04 +0x02a:  mov    %eax,(%esp)
0842be07 +0x02d:  call   08451dc6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x49dc>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x49dc
0842be0c +0x032:  mov    %eax,-0x10(%ebp)
0842be0f +0x035:  mov    -0x10(%ebp),%eax
0842be12 +0x038:  mov    0x4(%eax),%eax
0842be15 +0x03b:  test   %eax,%eax
0842be17 +0x03d:  jne    0842be6e <+0x94>
0842be19 +0x03f:  movl   $0x0,-0x19(%ebp)
0842be20 +0x046:  movb   $0x0,-0x15(%ebp)
0842be24 +0x04a:  lea    -0x19(%ebp),%eax
0842be27 +0x04d:  mov    %eax,(%esp)
0842be2a +0x050:  call   086b216d <_Z28generateSecurityCardQuestionPc>  ; generateSecurityCardQuestion(char*)
0842be2f +0x055:  mov    -0x10(%ebp),%eax
0842be32 +0x058:  mov    (%eax),%eax
0842be34 +0x05a:  movl   $0x0,0x4(%esp)
0842be3c +0x062:  mov    %eax,(%esp)
0842be3f +0x065:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0842be44 +0x06a:  mov    -0x10(%ebp),%edx
0842be47 +0x06d:  mov    0x4(%edx),%edx
0842be4a +0x070:  mov    %eax,0x10(%esp)
0842be4e +0x074:  lea    -0x19(%ebp),%eax
0842be51 +0x077:  mov    %eax,0xc(%esp)
0842be55 +0x07b:  mov    %edx,0x8(%esp)
0842be59 +0x07f:  movl   $"upDate member_security_card set fail_cnt=%d , q_pos = '%s' where m_id=%s and apply_flag=1",0x4(%esp)
0842be61 +0x087:  mov    -0x14(%ebp),%eax
0842be64 +0x08a:  mov    %eax,(%esp)
0842be67 +0x08d:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842be6c +0x092:  jmp    0842bea4 <+0xca>
0842be6e +0x094:  mov    -0x10(%ebp),%eax
0842be71 +0x097:  mov    (%eax),%eax
0842be73 +0x099:  movl   $0x0,0x4(%esp)
0842be7b +0x0a1:  mov    %eax,(%esp)
0842be7e +0x0a4:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0842be83 +0x0a9:  mov    -0x10(%ebp),%edx
0842be86 +0x0ac:  mov    0x4(%edx),%edx
0842be89 +0x0af:  mov    %eax,0xc(%esp)
0842be8d +0x0b3:  mov    %edx,0x8(%esp)
0842be91 +0x0b7:  movl   $"upDate member_security_card set fail_cnt=%d where m_id=%s and apply_flag=1",0x4(%esp)
0842be99 +0x0bf:  mov    -0x14(%ebp),%eax
0842be9c +0x0c2:  mov    %eax,(%esp)
0842be9f +0x0c5:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842bea4 +0x0ca:  movl   $0x1,0x4(%esp)
0842beac +0x0d2:  mov    -0x14(%ebp),%eax
0842beaf +0x0d5:  mov    %eax,(%esp)
0842beb2 +0x0d8:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0842beb7 +0x0dd:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0842bebc +0x0e2:  movl   $0x0,0x8(%esp)
0842bec4 +0x0ea:  movl   $0x1,0x4(%esp)
0842becc +0x0f2:  mov    %eax,(%esp)
0842becf +0x0f5:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0842bed4 +0x0fa:  mov    %eax,-0xc(%ebp)
0842bed7 +0x0fd:  mov    -0x10(%ebp),%eax
0842beda +0x100:  mov    (%eax),%eax
0842bedc +0x102:  movl   $0x0,0x4(%esp)
0842bee4 +0x10a:  mov    %eax,(%esp)
0842bee7 +0x10d:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0842beec +0x112:  mov    -0x10(%ebp),%edx
0842beef +0x115:  mov    0x4(%edx),%edx
0842bef2 +0x118:  mov    %eax,0xc(%esp)
0842bef6 +0x11c:  mov    %edx,0x8(%esp)
0842befa +0x120:  movl   $"upDate member_security_grade set security_card_fail_cnt=%d where m_id=%s",0x4(%esp)
0842bf02 +0x128:  mov    -0xc(%ebp),%eax
0842bf05 +0x12b:  mov    %eax,(%esp)
0842bf08 +0x12e:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842bf0d +0x133:  movl   $0x1,0x4(%esp)
0842bf15 +0x13b:  mov    -0xc(%ebp),%eax
0842bf18 +0x13e:  mov    %eax,(%esp)
0842bf1b +0x141:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0842bf20 +0x146:  xor    $0x1,%eax
0842bf23 +0x149:  test   %al,%al
0842bf25 +0x14b:  jne    0842bf38 <+0x15e>
0842bf27 +0x14d:  mov    -0xc(%ebp),%eax
0842bf2a +0x150:  mov    %eax,(%esp)
0842bf2d +0x153:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
0842bf32 +0x158:  or     %edx,%eax
0842bf34 +0x15a:  test   %eax,%eax
0842bf36 +0x15c:  jne    0842bf3f <+0x165>
0842bf38 +0x15e:  mov    $0x1,%eax
0842bf3d +0x163:  jmp    0842bf44 <+0x16a>
0842bf3f +0x165:  mov    $0x0,%eax
0842bf44 +0x16a:  test   %al,%al
0842bf46 +0x16c:  je     0842bf9f <+0x1c5>
0842bf48 +0x16e:  mov    -0x10(%ebp),%eax
0842bf4b +0x171:  mov    0x4(%eax),%ebx
0842bf4e +0x174:  mov    -0x10(%ebp),%eax
0842bf51 +0x177:  mov    (%eax),%eax
0842bf53 +0x179:  movl   $0x0,0x4(%esp)
0842bf5b +0x181:  mov    %eax,(%esp)
0842bf5e +0x184:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0842bf63 +0x189:  mov    %ebx,0xc(%esp)
0842bf67 +0x18d:  mov    %eax,0x8(%esp)
0842bf6b +0x191:  movl   $"inSert into member_security_grade(m_id, security_card_fail_cnt) values(%s, %d)",0x4(%esp)
0842bf73 +0x199:  mov    -0xc(%ebp),%eax
0842bf76 +0x19c:  mov    %eax,(%esp)
0842bf79 +0x19f:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842bf7e +0x1a4:  movl   $0x1,0x4(%esp)
0842bf86 +0x1ac:  mov    -0xc(%ebp),%eax
0842bf89 +0x1af:  mov    %eax,(%esp)
0842bf8c +0x1b2:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0842bf91 +0x1b7:  xor    $0x1,%eax
0842bf94 +0x1ba:  test   %al,%al
0842bf96 +0x1bc:  je     0842bf9f <+0x1c5>
0842bf98 +0x1be:  mov    $0x0,%eax
0842bf9d +0x1c3:  jmp    0842bfa4 <+0x1ca>
0842bf9f +0x1c5:  mov    $0x1,%eax
0842bfa4 +0x1ca:  add    $0x44,%esp
0842bfa7 +0x1cd:  pop    %ebx
0842bfa8 +0x1ce:  pop    %ebp
0842bfa9 +0x1cf:  ret
```

## 反编译 C

```c
// DB_SecurityCardUpdateFailCnt::dispatch @ 0x842bdda

/* DB_SecurityCardUpdateFailCnt::dispatch(int, int, Stream*) */

undefined4 DB_SecurityCardUpdateFailCnt::dispatch(int param_1,int param_2,Stream *param_3)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  Stream *in_stack_00000010;
  char local_1d [5];
  MySQL *local_18;
  SIG_SECURITY_CARD_UPDATE_FAIL_CNT *local_14;
  MySQL *local_10;
  
  local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  local_14 = Stream::GetOutBuffer<SIG_SECURITY_CARD_UPDATE_FAIL_CNT>(in_stack_00000010);
  if (*(int *)(local_14 + 4) == 0) {
    local_1d[0] = '\0';
    local_1d[1] = '\0';
    local_1d[2] = '\0';
    local_1d[3] = '\0';
    local_1d[4] = 0;
    generateSecurityCardQuestion(local_1d);
    uVar4 = NumberToString(*(uint *)local_14,0);
    MySQL::set_query(local_18,
                     "upDate member_security_card set fail_cnt=%d , q_pos = \'%s\' where m_id=%s and apply_flag=1"
                     ,*(uint *)(local_14 + 4),local_1d,uVar4);
  }
  else {
    uVar4 = NumberToString(*(uint *)local_14,0);
    MySQL::set_query(local_18,
                     "upDate member_security_card set fail_cnt=%d where m_id=%s and apply_flag=1",
                     *(uint *)(local_14 + 4),uVar4);
  }
  MySQL::exec(local_18,true);
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  uVar4 = NumberToString(*(uint *)local_14,0);
  MySQL::set_query(local_10,
                   "upDate member_security_grade set security_card_fail_cnt=%d where m_id=%s",
                   *(uint *)(local_14 + 4),uVar4);
  cVar3 = MySQL::exec(local_10,true);
  if ((cVar3 == '\x01') && (lVar5 = MySQL::getAffectedRowCount(local_10), lVar5 != 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    uVar1 = *(uint *)(local_14 + 4);
    uVar4 = NumberToString(*(uint *)local_14,0);
    MySQL::set_query(local_10,
                     "inSert into member_security_grade(m_id, security_card_fail_cnt) values(%s, %d)"
                     ,uVar4,uVar1);
    cVar3 = MySQL::exec(local_10,true);
    if (cVar3 != '\x01') {
      return 0;
    }
  }
  return 1;
}
```
