# ProcessSkillConfirm

`_ZN25DB_UpdateOneDayLetheSkill19ProcessSkillConfirmEP35SIG_RESULT_PREMIUM_LETHE_SKILL_LOADi`

`DB_UpdateOneDayLetheSkill::ProcessSkillConfirm(SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD*, int)`

| 类 | 地址 |
|---|---|
| `DB_UpdateOneDayLetheSkill` | `0x08434340` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08434340  _ZN25DB_UpdateOneDayLetheSkill19ProcessSkillConfirmEP35SIG_RESULT_PREMIUM_LETHE_SKILL_LOADi
#           DB_UpdateOneDayLetheSkill::ProcessSkillConfirm(SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD*, int)
# range [0x08434340, 0x084345a3]
08434340 +0x000:  push   %ebp
08434341 +0x001:  mov    %esp,%ebp
08434343 +0x003:  push   %edi
08434344 +0x004:  push   %esi
08434345 +0x005:  push   %ebx
08434346 +0x006:  sub    $0x6c,%esp
08434349 +0x009:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0843434e +0x00e:  movl   $0x0,0x8(%esp)
08434356 +0x016:  movl   $0x6,0x4(%esp)
0843435e +0x01e:  mov    %eax,(%esp)
08434361 +0x021:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08434366 +0x026:  mov    %eax,-0x30(%ebp)
08434369 +0x029:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0843436e +0x02e:  movl   $0x0,0x8(%esp)
08434376 +0x036:  movl   $0x3,0x4(%esp)
0843437e +0x03e:  mov    %eax,(%esp)
08434381 +0x041:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08434386 +0x046:  mov    %eax,-0x2c(%ebp)
08434389 +0x049:  movl   $0x0,-0x54(%ebp)
08434390 +0x050:  mov    0xc(%ebp),%eax
08434393 +0x053:  add    $0xd,%eax
08434396 +0x056:  lea    -0x54(%ebp),%edx
08434399 +0x059:  mov    %edx,0x10(%esp)
0843439d +0x05d:  movl   $0x198,0xc(%esp)
084343a5 +0x065:  mov    %eax,0x8(%esp)
084343a9 +0x069:  movl   $0x0,0x4(%esp)
084343b1 +0x071:  mov    -0x2c(%ebp),%eax
084343b4 +0x074:  mov    %eax,(%esp)
084343b7 +0x077:  call   083fbd06 <_Z24put_compressed_blob_dataP5MySQLiPciPS1_>  ; put_compressed_blob_data(MySQL*, int, char*, int, char**)
084343bc +0x07c:  xor    $0x1,%eax
084343bf +0x07f:  test   %al,%al
084343c1 +0x081:  je     084343cd <+0x8d>
084343c3 +0x083:  mov    $0x0,%eax
084343c8 +0x088:  jmp    0843459c <+0x25c>
084343cd +0x08d:  mov    0xc(%ebp),%eax
084343d0 +0x090:  movzbl 0x1a6(%eax),%eax
084343d7 +0x097:  cmp    $0xff,%al
084343d9 +0x099:  je     084343e9 <+0xa9>
084343db +0x09b:  mov    0xc(%ebp),%eax
084343de +0x09e:  movzbl 0x1a6(%eax),%eax
084343e5 +0x0a5:  test   %al,%al
084343e7 +0x0a7:  jne    0843442d <+0xed>
084343e9 +0x0a9:  mov    0xc(%ebp),%eax
084343ec +0x0ac:  mov    0x4(%eax),%edi
084343ef +0x0af:  movzbl &_ZN20CPremiumLetheManager19SKILL_CONFIRM_STATEE,%eax
084343f6 +0x0b6:  movzbl %al,%esi
084343f9 +0x0b9:  mov    -0x54(%ebp),%ebx
084343fc +0x0bc:  movl   $0x0,(%esp)
08434403 +0x0c3:  call   083fbdc6 <_Z20get_skill_table_nameb>  ; get_skill_table_name(bool)
08434408 +0x0c8:  mov    %edi,0x14(%esp)
0843440c +0x0cc:  mov    %esi,0x10(%esp)
08434410 +0x0d0:  mov    %ebx,0xc(%esp)
08434414 +0x0d4:  mov    %eax,0x8(%esp)
08434418 +0x0d8:  movl   $"upDate %s set skill_slot_lethe='%s', lethe_flag=%u  where charac_no=%u",0x4(%esp)
08434420 +0x0e0:  mov    -0x2c(%ebp),%eax
08434423 +0x0e3:  mov    %eax,(%esp)
08434426 +0x0e6:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0843442b +0x0eb:  jmp    0843446f <+0x12f>
0843442d +0x0ed:  mov    0xc(%ebp),%eax
08434430 +0x0f0:  mov    0x4(%eax),%edi
08434433 +0x0f3:  movzbl &_ZN20CPremiumLetheManager19SKILL_CONFIRM_STATEE,%eax
0843443a +0x0fa:  movzbl %al,%esi
0843443d +0x0fd:  mov    -0x54(%ebp),%ebx
08434440 +0x100:  movl   $0x0,(%esp)
08434447 +0x107:  call   083fbdc6 <_Z20get_skill_table_nameb>  ; get_skill_table_name(bool)
0843444c +0x10c:  mov    %edi,0x14(%esp)
08434450 +0x110:  mov    %esi,0x10(%esp)
08434454 +0x114:  mov    %ebx,0xc(%esp)
08434458 +0x118:  mov    %eax,0x8(%esp)
0843445c +0x11c:  movl   $"upDate %s set skill_slot_lethe_2nd='%s', lethe_flag_2nd=%u  where charac_no=%u",0x4(%esp)
08434464 +0x124:  mov    -0x2c(%ebp),%eax
08434467 +0x127:  mov    %eax,(%esp)
0843446a +0x12a:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0843446f +0x12f:  movl   $0x1,0x4(%esp)
08434477 +0x137:  mov    -0x2c(%ebp),%eax
0843447a +0x13a:  mov    %eax,(%esp)
0843447d +0x13d:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08434482 +0x142:  xor    $0x1,%eax
08434485 +0x145:  test   %al,%al
08434487 +0x147:  je     08434493 <+0x153>
08434489 +0x149:  mov    $0x0,%eax
0843448e +0x14e:  jmp    0843459c <+0x25c>
08434493 +0x153:  movl   $0x0,0xc(%esp)
0843449b +0x15b:  movl   $0x7d1a,0x8(%esp)
084344a3 +0x163:  movl   $&_ZZN25DB_UpdateOneDayLetheSkill19ProcessSkillConfirmEP35SIG_RESULT_PREMIUM_LETHE_SKILL_LOADiE19__PRETTY_FUNCTION__,0x4(%esp)
084344ab +0x16b:  lea    -0x50(%ebp),%eax
084344ae +0x16e:  mov    %eax,(%esp)
084344b1 +0x171:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084344b6 +0x176:  movl   $"ONE_DAY_LETHE : DB_CONFIRM_SKILL-FLAG_WRITE",0x4(%esp)
084344be +0x17e:  lea    -0x50(%ebp),%eax
084344c1 +0x181:  mov    %eax,(%esp)
084344c4 +0x184:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084344c9 +0x189:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084344ce +0x18e:  mov    0xc(%eax),%eax
084344d1 +0x191:  movl   $0xc5,0x4(%esp)
084344d9 +0x199:  mov    %eax,(%esp)
084344dc +0x19c:  call   0817a10c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x18a>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x18a
084344e1 +0x1a1:  mov    %eax,-0x28(%ebp)
084344e4 +0x1a4:  movl   $0x21,-0x24(%ebp)
084344eb +0x1ab:  mov    0xc(%ebp),%eax
084344ee +0x1ae:  mov    (%eax),%eax
084344f0 +0x1b0:  mov    %eax,-0x20(%ebp)
084344f3 +0x1b3:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084344f8 +0x1b8:  mov    0x378(%eax),%eax
084344fe +0x1be:  mov    %eax,-0x1c(%ebp)
08434501 +0x1c1:  movl   $0x0,0x4(%esp)
08434509 +0x1c9:  mov    -0x20(%ebp),%eax
0843450c +0x1cc:  mov    %eax,(%esp)
0843450f +0x1cf:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08434514 +0x1d4:  mov    -0x1c(%ebp),%edx
08434517 +0x1d7:  mov    %edx,0x14(%esp)
0843451b +0x1db:  mov    %eax,0x10(%esp)
0843451f +0x1df:  mov    -0x24(%ebp),%eax
08434522 +0x1e2:  mov    %eax,0xc(%esp)
08434526 +0x1e6:  mov    -0x28(%ebp),%eax
08434529 +0x1e9:  mov    %eax,0x8(%esp)
0843452d +0x1ed:  movl   $"upDate member_premium set service_end=now() where event_id=%u and pre_type=%u and m_id=%s and server_id in(0,%u) and service_end>now()",0x4(%esp)
08434535 +0x1f5:  mov    -0x30(%ebp),%eax
08434538 +0x1f8:  mov    %eax,(%esp)
0843453b +0x1fb:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08434540 +0x200:  movl   $0x1,0x4(%esp)
08434548 +0x208:  mov    -0x30(%ebp),%eax
0843454b +0x20b:  mov    %eax,(%esp)
0843454e +0x20e:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08434553 +0x213:  xor    $0x1,%eax
08434556 +0x216:  test   %al,%al
08434558 +0x218:  je     08434561 <+0x221>
0843455a +0x21a:  mov    $0x0,%eax
0843455f +0x21f:  jmp    0843459c <+0x25c>
08434561 +0x221:  movl   $0x0,0xc(%esp)
08434569 +0x229:  movl   $0x7d29,0x8(%esp)
08434571 +0x231:  movl   $&_ZZN25DB_UpdateOneDayLetheSkill19ProcessSkillConfirmEP35SIG_RESULT_PREMIUM_LETHE_SKILL_LOADiE19__PRETTY_FUNCTION__,0x4(%esp)
08434579 +0x239:  lea    -0x40(%ebp),%eax
0843457c +0x23c:  mov    %eax,(%esp)
0843457f +0x23f:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08434584 +0x244:  movl   $"ONE_DAY_LETHE : DB_CONFIRM_SKILL-PREMIUM_END_CHANGE",0x4(%esp)
0843458c +0x24c:  lea    -0x40(%ebp),%eax
0843458f +0x24f:  mov    %eax,(%esp)
08434592 +0x252:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08434597 +0x257:  mov    $0x1,%eax
0843459c +0x25c:  add    $0x6c,%esp
0843459f +0x25f:  pop    %ebx
084345a0 +0x260:  pop    %esi
084345a1 +0x261:  pop    %edi
084345a2 +0x262:  pop    %ebp
084345a3 +0x263:  ret
```

## 反编译 C

```c
// DB_UpdateOneDayLetheSkill::ProcessSkillConfirm @ 0x8434340

/* DB_UpdateOneDayLetheSkill::ProcessSkillConfirm(SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD*, int) */

undefined4
DB_UpdateOneDayLetheSkill::ProcessSkillConfirm
          (SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD *param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  char *local_58;
  cMyTrace local_54 [16];
  cMyTrace local_44 [16];
  MySQL *local_34;
  MySQL *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  uint local_24;
  undefined4 local_20;
  
  local_34 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  local_30 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  local_58 = (char *)0x0;
  cVar2 = put_compressed_blob_data(local_30,0,(char *)(param_2 + 0xd),0x198,&local_58);
  pcVar1 = local_58;
  if (cVar2 == '\x01') {
    if ((*(char *)(param_2 + 0x1a6) == -1) || (*(char *)(param_2 + 0x1a6) == '\0')) {
      uVar3 = *(undefined4 *)(param_2 + 4);
      uVar4 = (uint)CPremiumLetheManager::SKILL_CONFIRM_STATE;
      uVar5 = get_skill_table_name(false);
      MySQL::set_query(local_30,
                       "upDate %s set skill_slot_lethe=\'%s\', lethe_flag=%u  where charac_no=%u",
                       uVar5,pcVar1,uVar4,uVar3);
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 4);
      uVar4 = (uint)CPremiumLetheManager::SKILL_CONFIRM_STATE;
      uVar5 = get_skill_table_name(false);
      MySQL::set_query(local_30,
                       "upDate %s set skill_slot_lethe_2nd=\'%s\', lethe_flag_2nd=%u  where charac_no=%u"
                       ,uVar5,pcVar1,uVar4,uVar3);
    }
    cVar2 = MySQL::exec(local_30,true);
    if (cVar2 == '\x01') {
      cMyTrace::cMyTrace(local_54,
                         "bool DB_UpdateOneDayLetheSkill::ProcessSkillConfirm(SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD*, int)"
                         ,0x7d1a,0);
      cMyTrace::operator()(local_54,"ONE_DAY_LETHE : DB_CONFIRM_SKILL-FLAG_WRITE");
      iVar6 = G_CDataManager();
      local_2c = CItemList::GetRestrictCode(*(CItemList **)(iVar6 + 0xc),0xc5);
      local_28 = 0x21;
      local_24 = *(uint *)param_2;
      iVar6 = G_CEnvironment();
      local_20 = *(undefined4 *)(iVar6 + 0x378);
      uVar3 = NumberToString(local_24,0);
      MySQL::set_query(local_34,
                       "upDate member_premium set service_end=now() where event_id=%u and pre_type=%u and m_id=%s and server_id in(0,%u) and service_end>now()"
                       ,local_2c,local_28,uVar3,local_20);
      cVar2 = MySQL::exec(local_34,true);
      if (cVar2 == '\x01') {
        cMyTrace::cMyTrace(local_44,
                           "bool DB_UpdateOneDayLetheSkill::ProcessSkillConfirm(SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD*, int)"
                           ,0x7d29,0);
        cMyTrace::operator()(local_44,"ONE_DAY_LETHE : DB_CONFIRM_SKILL-PREMIUM_END_CHANGE");
        uVar3 = 1;
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
