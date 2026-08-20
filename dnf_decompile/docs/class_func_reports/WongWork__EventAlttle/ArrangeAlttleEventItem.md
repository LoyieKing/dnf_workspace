# ArrangeAlttleEventItem

`_ZN8WongWork11EventAlttle22ArrangeAlttleEventItemEjj`

`WongWork::EventAlttle::ArrangeAlttleEventItem(unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `WongWork::EventAlttle` | `0x083fb595` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083fb595  _ZN8WongWork11EventAlttle22ArrangeAlttleEventItemEjj
#           WongWork::EventAlttle::ArrangeAlttleEventItem(unsigned int, unsigned int)
# range [0x083fb595, 0x083fb882]
083fb595 +0x000:  push   %ebp
083fb596 +0x001:  mov    %esp,%ebp
083fb598 +0x003:  push   %ebx
083fb599 +0x004:  sub    $0xf4,%esp
083fb59f +0x00a:  movl   $0xa,-0x20(%ebp)
083fb5a6 +0x011:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
083fb5ab +0x016:  movl   $0x0,0x8(%esp)
083fb5b3 +0x01e:  movl   $0x1,0x4(%esp)
083fb5bb +0x026:  mov    %eax,(%esp)
083fb5be +0x029:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
083fb5c3 +0x02e:  mov    %eax,-0x1c(%ebp)
083fb5c6 +0x031:  movl   $0x0,0x4(%esp)
083fb5ce +0x039:  mov    0x8(%ebp),%eax
083fb5d1 +0x03c:  mov    %eax,(%esp)
083fb5d4 +0x03f:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
083fb5d9 +0x044:  movl   $0xa,0xc(%esp)
083fb5e1 +0x04c:  mov    %eax,0x8(%esp)
083fb5e5 +0x050:  movl   $"seLect item_server_id,item_charac_no,item_no,item_check,item_cnt from event_alttle_info where m_id=%s and occ_check!=0 limit %d",0x4(%esp)
083fb5ed +0x058:  mov    -0x1c(%ebp),%eax
083fb5f0 +0x05b:  mov    %eax,(%esp)
083fb5f3 +0x05e:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
083fb5f8 +0x063:  movl   $0x1,0x4(%esp)
083fb600 +0x06b:  mov    -0x1c(%ebp),%eax
083fb603 +0x06e:  mov    %eax,(%esp)
083fb606 +0x071:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
083fb60b +0x076:  xor    $0x1,%eax
083fb60e +0x079:  test   %al,%al
083fb610 +0x07b:  je     083fb66e <+0xd9>
083fb612 +0x07d:  movl   $0x0,0x4(%esp)
083fb61a +0x085:  mov    0x8(%ebp),%eax
083fb61d +0x088:  mov    %eax,(%esp)
083fb620 +0x08b:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
083fb625 +0x090:  mov    %eax,%ebx
083fb627 +0x092:  movl   $0x5,0xc(%esp)
083fb62f +0x09a:  movl   $0x21b,0x8(%esp)
083fb637 +0x0a2:  movl   $&_ZZN8WongWork11EventAlttle22ArrangeAlttleEventItemEjjE19__PRETTY_FUNCTION__,0x4(%esp)
083fb63f +0x0aa:  lea    -0x30(%ebp),%eax
083fb642 +0x0ad:  mov    %eax,(%esp)
083fb645 +0x0b0:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
083fb64a +0x0b5:  mov    %ebx,0xc(%esp)
083fb64e +0x0b9:  movl   $&_ZZN8WongWork11EventAlttle22ArrangeAlttleEventItemEjjE19__PRETTY_FUNCTION__,0x8(%esp)
083fb656 +0x0c1:  movl   $"%s, exec ERROR m_id=%s",0x4(%esp)
083fb65e +0x0c9:  lea    -0x30(%ebp),%eax
083fb661 +0x0cc:  mov    %eax,(%esp)
083fb664 +0x0cf:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
083fb669 +0x0d4:  jmp    083fb87a <+0x2e5>
083fb66e +0x0d9:  movl   $0x0,-0x18(%ebp)
083fb675 +0x0e0:  movl   $0x0,-0x14(%ebp)
083fb67c +0x0e7:  jmp    083fb7b6 <+0x221>
083fb681 +0x0ec:  mov    -0x1c(%ebp),%eax
083fb684 +0x0ef:  mov    %eax,(%esp)
083fb687 +0x0f2:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
083fb68c +0x0f7:  xor    $0x1,%eax
083fb68f +0x0fa:  test   %al,%al
083fb691 +0x0fc:  jne    083fb7d1 <+0x23c>
083fb697 +0x102:  movl   $0x0,-0x10(%ebp)
083fb69e +0x109:  movl   $0x0,-0x34(%ebp)
083fb6a5 +0x110:  movl   $0x0,-0x38(%ebp)
083fb6ac +0x117:  movl   $0x0,-0x3c(%ebp)
083fb6b3 +0x11e:  movl   $0x0,-0x40(%ebp)
083fb6ba +0x125:  movl   $0x0,-0x44(%ebp)
083fb6c1 +0x12c:  lea    -0x34(%ebp),%eax
083fb6c4 +0x12f:  mov    %eax,0x8(%esp)
083fb6c8 +0x133:  movl   $0x0,0x4(%esp)
083fb6d0 +0x13b:  mov    -0x1c(%ebp),%eax
083fb6d3 +0x13e:  mov    %eax,(%esp)
083fb6d6 +0x141:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
083fb6db +0x146:  lea    -0x38(%ebp),%eax
083fb6de +0x149:  mov    %eax,0x8(%esp)
083fb6e2 +0x14d:  movl   $0x1,0x4(%esp)
083fb6ea +0x155:  mov    -0x1c(%ebp),%eax
083fb6ed +0x158:  mov    %eax,(%esp)
083fb6f0 +0x15b:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
083fb6f5 +0x160:  lea    -0x3c(%ebp),%eax
083fb6f8 +0x163:  mov    %eax,0x8(%esp)
083fb6fc +0x167:  movl   $0x2,0x4(%esp)
083fb704 +0x16f:  mov    -0x1c(%ebp),%eax
083fb707 +0x172:  mov    %eax,(%esp)
083fb70a +0x175:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
083fb70f +0x17a:  lea    -0x40(%ebp),%eax
083fb712 +0x17d:  mov    %eax,0x8(%esp)
083fb716 +0x181:  movl   $0x3,0x4(%esp)
083fb71e +0x189:  mov    -0x1c(%ebp),%eax
083fb721 +0x18c:  mov    %eax,(%esp)
083fb724 +0x18f:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
083fb729 +0x194:  lea    -0x44(%ebp),%eax
083fb72c +0x197:  mov    %eax,0x8(%esp)
083fb730 +0x19b:  movl   $0x4,0x4(%esp)
083fb738 +0x1a3:  mov    -0x1c(%ebp),%eax
083fb73b +0x1a6:  mov    %eax,(%esp)
083fb73e +0x1a9:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
083fb743 +0x1ae:  mov    -0x40(%ebp),%eax
083fb746 +0x1b1:  test   %eax,%eax
083fb748 +0x1b3:  jne    083fb7b2 <+0x21d>
083fb74a +0x1b5:  mov    -0x34(%ebp),%eax
083fb74d +0x1b8:  cmp    0xc(%ebp),%eax
083fb750 +0x1bb:  jne    083fb7b2 <+0x21d>
083fb752 +0x1bd:  mov    -0x18(%ebp),%eax
083fb755 +0x1c0:  shl    $0x4,%eax
083fb758 +0x1c3:  lea    -0x8(%ebp),%edx
083fb75b +0x1c6:  lea    (%edx,%eax,1),%eax
083fb75e +0x1c9:  lea    -0xdc(%eax),%edx
083fb764 +0x1cf:  mov    0x8(%ebp),%eax
083fb767 +0x1d2:  mov    %eax,(%edx)
083fb769 +0x1d4:  mov    -0x18(%ebp),%edx
083fb76c +0x1d7:  mov    -0x3c(%ebp),%eax
083fb76f +0x1da:  shl    $0x4,%edx
083fb772 +0x1dd:  lea    -0x8(%ebp),%ecx
083fb775 +0x1e0:  lea    (%ecx,%edx,1),%edx
083fb778 +0x1e3:  sub    $0xd4,%edx
083fb77e +0x1e9:  mov    %eax,(%edx)
083fb780 +0x1eb:  mov    -0x18(%ebp),%edx
083fb783 +0x1ee:  mov    -0x44(%ebp),%eax
083fb786 +0x1f1:  shl    $0x4,%edx
083fb789 +0x1f4:  lea    -0x8(%ebp),%ebx
083fb78c +0x1f7:  lea    (%ebx,%edx,1),%edx
083fb78f +0x1fa:  sub    $0xd0,%edx
083fb795 +0x200:  mov    %eax,(%edx)
083fb797 +0x202:  mov    -0x18(%ebp),%edx
083fb79a +0x205:  mov    -0x38(%ebp),%eax
083fb79d +0x208:  shl    $0x4,%edx
083fb7a0 +0x20b:  lea    -0x8(%ebp),%ecx
083fb7a3 +0x20e:  lea    (%ecx,%edx,1),%edx
083fb7a6 +0x211:  sub    $0xd8,%edx
083fb7ac +0x217:  mov    %eax,(%edx)
083fb7ae +0x219:  addl   $0x1,-0x18(%ebp)
083fb7b2 +0x21d:  addl   $0x1,-0x14(%ebp)
083fb7b6 +0x221:  mov    -0x1c(%ebp),%eax
083fb7b9 +0x224:  mov    %eax,(%esp)
083fb7bc +0x227:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
083fb7c1 +0x22c:  cmp    -0x14(%ebp),%eax
083fb7c4 +0x22f:  seta   %al
083fb7c7 +0x232:  test   %al,%al
083fb7c9 +0x234:  jne    083fb681 <+0xec>
083fb7cf +0x23a:  jmp    083fb7d2 <+0x23d>
083fb7d1 +0x23c:  nop
083fb7d2 +0x23d:  movl   $0x0,-0xc(%ebp)
083fb7d9 +0x244:  jmp    083fb869 <+0x2d4>
083fb7de +0x249:  mov    -0xc(%ebp),%eax
083fb7e1 +0x24c:  shl    $0x4,%eax
083fb7e4 +0x24f:  lea    -0x8(%ebp),%ebx
083fb7e7 +0x252:  lea    (%ebx,%eax,1),%eax
083fb7ea +0x255:  sub    $0xd4,%eax
083fb7ef +0x25a:  mov    (%eax),%edx
083fb7f1 +0x25c:  mov    -0xc(%ebp),%eax
083fb7f4 +0x25f:  shl    $0x4,%eax
083fb7f7 +0x262:  lea    -0x8(%ebp),%ecx
083fb7fa +0x265:  lea    (%ecx,%eax,1),%eax
083fb7fd +0x268:  sub    $0xdc,%eax
083fb802 +0x26d:  mov    (%eax),%eax
083fb804 +0x26f:  mov    %edx,0x4(%esp)
083fb808 +0x273:  mov    %eax,(%esp)
083fb80b +0x276:  call   083fb530 <_ZN8WongWork11EventAlttle21UpdateEventAlttleInfoEji>  ; WongWork::EventAlttle::UpdateEventAlttleInfo(unsigned int, int)
083fb810 +0x27b:  mov    -0xc(%ebp),%eax
083fb813 +0x27e:  shl    $0x4,%eax
083fb816 +0x281:  lea    -0x8(%ebp),%ebx
083fb819 +0x284:  lea    (%ebx,%eax,1),%eax
083fb81c +0x287:  sub    $0xd0,%eax
083fb821 +0x28c:  mov    (%eax),%eax
083fb823 +0x28e:  mov    %eax,%ecx
083fb825 +0x290:  mov    -0xc(%ebp),%eax
083fb828 +0x293:  shl    $0x4,%eax
083fb82b +0x296:  lea    -0x8(%ebp),%edx
083fb82e +0x299:  lea    (%edx,%eax,1),%eax
083fb831 +0x29c:  sub    $0xd4,%eax
083fb836 +0x2a1:  mov    (%eax),%eax
083fb838 +0x2a3:  mov    %eax,%edx
083fb83a +0x2a5:  mov    -0xc(%ebp),%eax
083fb83d +0x2a8:  shl    $0x4,%eax
083fb840 +0x2ab:  lea    -0x8(%ebp),%ebx
083fb843 +0x2ae:  lea    (%ebx,%eax,1),%eax
083fb846 +0x2b1:  sub    $0xd8,%eax
083fb84b +0x2b6:  mov    (%eax),%eax
083fb84d +0x2b8:  movl   $0x6,0xc(%esp)
083fb855 +0x2c0:  mov    %ecx,0x8(%esp)
083fb859 +0x2c4:  mov    %edx,0x4(%esp)
083fb85d +0x2c8:  mov    %eax,(%esp)
083fb860 +0x2cb:  call   083f9b54 <_ZN8WongWork11EventCommon26InsertEventItem2EventTableEjjjj>  ; WongWork::EventCommon::InsertEventItem2EventTable(unsigned int, unsigned int, unsigned int, unsigned int)
083fb865 +0x2d0:  addl   $0x1,-0xc(%ebp)
083fb869 +0x2d4:  mov    -0xc(%ebp),%eax
083fb86c +0x2d7:  cmp    -0x18(%ebp),%eax
083fb86f +0x2da:  setl   %al
083fb872 +0x2dd:  test   %al,%al
083fb874 +0x2df:  jne    083fb7de <+0x249>
083fb87a +0x2e5:  add    $0xf4,%esp
083fb880 +0x2eb:  pop    %ebx
083fb881 +0x2ec:  pop    %ebp
083fb882 +0x2ed:  ret
```

## 反编译 C

```c
// WongWork::EventAlttle::ArrangeAlttleEventItem @ 0x83fb595

/* WongWork::EventAlttle::ArrangeAlttleEventItem(unsigned int, unsigned int) */

void WongWork::EventAlttle::ArrangeAlttleEventItem(uint param_1,uint param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint auStack_e8 [40];
  uint local_48;
  int local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  cMyTrace local_34 [16];
  undefined4 local_24;
  MySQL *local_20;
  int local_1c;
  uint local_18;
  undefined4 local_14;
  int local_10;
  
  local_24 = 10;
  local_20 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  uVar2 = NumberToString(param_1,0);
  MySQL::set_query(local_20,
                   "seLect item_server_id,item_charac_no,item_no,item_check,item_cnt from event_alttle_info where m_id=%s and occ_check!=0 limit %d"
                   ,uVar2,10);
  cVar1 = MySQL::exec(local_20,true);
  if (cVar1 == '\x01') {
    local_1c = 0;
    local_18 = 0;
    while ((uVar3 = MySQL::get_n_rows(local_20), local_18 < uVar3 &&
           (cVar1 = MySQL::fetch(local_20), cVar1 == '\x01'))) {
      local_14 = 0;
      local_38 = 0;
      local_3c = 0;
      local_40 = 0;
      local_44 = 0;
      local_48 = 0;
      MySQL::get_int(local_20,0,(int *)&local_38);
      MySQL::get_int(local_20,1,(int *)&local_3c);
      MySQL::get_int(local_20,2,(int *)&local_40);
      MySQL::get_int(local_20,3,&local_44);
      MySQL::get_int(local_20,4,(int *)&local_48);
      if ((local_44 == 0) && (local_38 == param_2)) {
        auStack_e8[local_1c * 4] = param_1;
        auStack_e8[local_1c * 4 + 2] = local_40;
        auStack_e8[local_1c * 4 + 3] = local_48;
        auStack_e8[local_1c * 4 + 1] = local_3c;
        local_1c = local_1c + 1;
      }
      local_18 = local_18 + 1;
    }
    for (local_10 = 0; local_10 < local_1c; local_10 = local_10 + 1) {
      UpdateEventAlttleInfo(auStack_e8[local_10 * 4],auStack_e8[local_10 * 4 + 2]);
      EventCommon::InsertEventItem2EventTable
                (auStack_e8[local_10 * 4 + 1],auStack_e8[local_10 * 4 + 2],
                 auStack_e8[local_10 * 4 + 3],6);
    }
  }
  else {
    uVar2 = NumberToString(param_1,0);
    cMyTrace::cMyTrace(local_34,
                       "void WongWork::EventAlttle::ArrangeAlttleEventItem(memberIdentificationNumber_t, unsigned int)"
                       ,0x21b,5);
    cMyTrace::operator()
              (local_34,"%s, exec ERROR m_id=%s",
               "void WongWork::EventAlttle::ArrangeAlttleEventItem(memberIdentificationNumber_t, unsigned int)"
               ,uVar2);
  }
  return;
}
```
