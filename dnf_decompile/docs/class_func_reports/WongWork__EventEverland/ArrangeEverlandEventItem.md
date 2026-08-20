# ArrangeEverlandEventItem

`_ZN8WongWork13EventEverland24ArrangeEverlandEventItemEjj`

`WongWork::EventEverland::ArrangeEverlandEventItem(unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `WongWork::EventEverland` | `0x083fad60` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083fad60  _ZN8WongWork13EventEverland24ArrangeEverlandEventItemEjj
#           WongWork::EventEverland::ArrangeEverlandEventItem(unsigned int, unsigned int)
# range [0x083fad60, 0x083fb046]
083fad60 +0x000:  push   %ebp
083fad61 +0x001:  mov    %esp,%ebp
083fad63 +0x003:  push   %ebx
083fad64 +0x004:  sub    $0xf4,%esp
083fad6a +0x00a:  movl   $0xa,-0x1c(%ebp)
083fad71 +0x011:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
083fad76 +0x016:  movl   $0x0,0x8(%esp)
083fad7e +0x01e:  movl   $0x1,0x4(%esp)
083fad86 +0x026:  mov    %eax,(%esp)
083fad89 +0x029:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
083fad8e +0x02e:  mov    %eax,-0x18(%ebp)
083fad91 +0x031:  movl   $0x0,0x4(%esp)
083fad99 +0x039:  mov    0x8(%ebp),%eax
083fad9c +0x03c:  mov    %eax,(%esp)
083fad9f +0x03f:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
083fada4 +0x044:  movl   $0xa,0xc(%esp)
083fadac +0x04c:  mov    %eax,0x8(%esp)
083fadb0 +0x050:  movl   $"seLect id,server_id,charac_no,coin,coin_check from event_everland_info where m_id=%s and occ_check!=0 limit %d",0x4(%esp)
083fadb8 +0x058:  mov    -0x18(%ebp),%eax
083fadbb +0x05b:  mov    %eax,(%esp)
083fadbe +0x05e:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
083fadc3 +0x063:  movl   $0x1,0x4(%esp)
083fadcb +0x06b:  mov    -0x18(%ebp),%eax
083fadce +0x06e:  mov    %eax,(%esp)
083fadd1 +0x071:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
083fadd6 +0x076:  xor    $0x1,%eax
083fadd9 +0x079:  test   %al,%al
083faddb +0x07b:  je     083fae39 <+0xd9>
083faddd +0x07d:  movl   $0x0,0x4(%esp)
083fade5 +0x085:  mov    0x8(%ebp),%eax
083fade8 +0x088:  mov    %eax,(%esp)
083fadeb +0x08b:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
083fadf0 +0x090:  mov    %eax,%ebx
083fadf2 +0x092:  movl   $0x5,0xc(%esp)
083fadfa +0x09a:  movl   $0x182,0x8(%esp)
083fae02 +0x0a2:  movl   $&_ZZN8WongWork13EventEverland24ArrangeEverlandEventItemEjjE19__PRETTY_FUNCTION__,0x4(%esp)
083fae0a +0x0aa:  lea    -0x2c(%ebp),%eax
083fae0d +0x0ad:  mov    %eax,(%esp)
083fae10 +0x0b0:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
083fae15 +0x0b5:  mov    %ebx,0xc(%esp)
083fae19 +0x0b9:  movl   $&_ZZN8WongWork13EventEverland24ArrangeEverlandEventItemEjjE19__PRETTY_FUNCTION__,0x8(%esp)
083fae21 +0x0c1:  movl   $"%s, exec ERROR m_id=%s",0x4(%esp)
083fae29 +0x0c9:  lea    -0x2c(%ebp),%eax
083fae2c +0x0cc:  mov    %eax,(%esp)
083fae2f +0x0cf:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
083fae34 +0x0d4:  jmp    083fb03e <+0x2de>
083fae39 +0x0d9:  movl   $0x0,-0x14(%ebp)
083fae40 +0x0e0:  movl   $0x0,-0x10(%ebp)
083fae47 +0x0e7:  jmp    083faf7a <+0x21a>
083fae4c +0x0ec:  mov    -0x18(%ebp),%eax
083fae4f +0x0ef:  mov    %eax,(%esp)
083fae52 +0x0f2:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
083fae57 +0x0f7:  xor    $0x1,%eax
083fae5a +0x0fa:  test   %al,%al
083fae5c +0x0fc:  jne    083faf95 <+0x235>
083fae62 +0x102:  movl   $0x0,-0x30(%ebp)
083fae69 +0x109:  movl   $0x0,-0x34(%ebp)
083fae70 +0x110:  movl   $0x0,-0x38(%ebp)
083fae77 +0x117:  movl   $0x0,-0x3c(%ebp)
083fae7e +0x11e:  movl   $0x0,-0x40(%ebp)
083fae85 +0x125:  lea    -0x30(%ebp),%eax
083fae88 +0x128:  mov    %eax,0x8(%esp)
083fae8c +0x12c:  movl   $0x0,0x4(%esp)
083fae94 +0x134:  mov    -0x18(%ebp),%eax
083fae97 +0x137:  mov    %eax,(%esp)
083fae9a +0x13a:  call   080e22ae <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x54>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x54
083fae9f +0x13f:  lea    -0x34(%ebp),%eax
083faea2 +0x142:  mov    %eax,0x8(%esp)
083faea6 +0x146:  movl   $0x1,0x4(%esp)
083faeae +0x14e:  mov    -0x18(%ebp),%eax
083faeb1 +0x151:  mov    %eax,(%esp)
083faeb4 +0x154:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
083faeb9 +0x159:  lea    -0x38(%ebp),%eax
083faebc +0x15c:  mov    %eax,0x8(%esp)
083faec0 +0x160:  movl   $0x2,0x4(%esp)
083faec8 +0x168:  mov    -0x18(%ebp),%eax
083faecb +0x16b:  mov    %eax,(%esp)
083faece +0x16e:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
083faed3 +0x173:  lea    -0x3c(%ebp),%eax
083faed6 +0x176:  mov    %eax,0x8(%esp)
083faeda +0x17a:  movl   $0x3,0x4(%esp)
083faee2 +0x182:  mov    -0x18(%ebp),%eax
083faee5 +0x185:  mov    %eax,(%esp)
083faee8 +0x188:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
083faeed +0x18d:  lea    -0x40(%ebp),%eax
083faef0 +0x190:  mov    %eax,0x8(%esp)
083faef4 +0x194:  movl   $0x4,0x4(%esp)
083faefc +0x19c:  mov    -0x18(%ebp),%eax
083faeff +0x19f:  mov    %eax,(%esp)
083faf02 +0x1a2:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
083faf07 +0x1a7:  mov    -0x40(%ebp),%eax
083faf0a +0x1aa:  test   %eax,%eax
083faf0c +0x1ac:  jne    083faf76 <+0x216>
083faf0e +0x1ae:  mov    -0x34(%ebp),%eax
083faf11 +0x1b1:  cmp    0xc(%ebp),%eax
083faf14 +0x1b4:  jne    083faf76 <+0x216>
083faf16 +0x1b6:  mov    -0x14(%ebp),%edx
083faf19 +0x1b9:  mov    -0x30(%ebp),%eax
083faf1c +0x1bc:  shl    $0x4,%edx
083faf1f +0x1bf:  lea    -0x8(%ebp),%ecx
083faf22 +0x1c2:  lea    (%ecx,%edx,1),%edx
083faf25 +0x1c5:  sub    $0xd8,%edx
083faf2b +0x1cb:  mov    %eax,(%edx)
083faf2d +0x1cd:  mov    -0x14(%ebp),%eax
083faf30 +0x1d0:  shl    $0x4,%eax
083faf33 +0x1d3:  lea    -0x8(%ebp),%ebx
083faf36 +0x1d6:  lea    (%ebx,%eax,1),%eax
083faf39 +0x1d9:  sub    $0xd0,%eax
083faf3e +0x1de:  movl   $0x1,(%eax)
083faf44 +0x1e4:  mov    -0x14(%ebp),%edx
083faf47 +0x1e7:  mov    -0x3c(%ebp),%eax
083faf4a +0x1ea:  shl    $0x4,%edx
083faf4d +0x1ed:  lea    -0x8(%ebp),%ecx
083faf50 +0x1f0:  lea    (%ecx,%edx,1),%edx
083faf53 +0x1f3:  sub    $0xcc,%edx
083faf59 +0x1f9:  mov    %eax,(%edx)
083faf5b +0x1fb:  mov    -0x14(%ebp),%edx
083faf5e +0x1fe:  mov    -0x38(%ebp),%eax
083faf61 +0x201:  shl    $0x4,%edx
083faf64 +0x204:  lea    -0x8(%ebp),%ebx
083faf67 +0x207:  lea    (%ebx,%edx,1),%edx
083faf6a +0x20a:  sub    $0xd4,%edx
083faf70 +0x210:  mov    %eax,(%edx)
083faf72 +0x212:  addl   $0x1,-0x14(%ebp)
083faf76 +0x216:  addl   $0x1,-0x10(%ebp)
083faf7a +0x21a:  mov    -0x18(%ebp),%eax
083faf7d +0x21d:  mov    %eax,(%esp)
083faf80 +0x220:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
083faf85 +0x225:  cmp    -0x10(%ebp),%eax
083faf88 +0x228:  seta   %al
083faf8b +0x22b:  test   %al,%al
083faf8d +0x22d:  jne    083fae4c <+0xec>
083faf93 +0x233:  jmp    083faf96 <+0x236>
083faf95 +0x235:  nop
083faf96 +0x236:  movl   $0x0,-0xc(%ebp)
083faf9d +0x23d:  jmp    083fb02d <+0x2cd>
083fafa2 +0x242:  mov    -0xc(%ebp),%eax
083fafa5 +0x245:  shl    $0x4,%eax
083fafa8 +0x248:  lea    -0x8(%ebp),%edx
083fafab +0x24b:  lea    (%edx,%eax,1),%eax
083fafae +0x24e:  sub    $0xd0,%eax
083fafb3 +0x253:  mov    (%eax),%edx
083fafb5 +0x255:  mov    -0xc(%ebp),%eax
083fafb8 +0x258:  shl    $0x4,%eax
083fafbb +0x25b:  lea    -0x8(%ebp),%ecx
083fafbe +0x25e:  lea    (%ecx,%eax,1),%eax
083fafc1 +0x261:  sub    $0xd8,%eax
083fafc6 +0x266:  mov    (%eax),%eax
083fafc8 +0x268:  mov    %edx,0x4(%esp)
083fafcc +0x26c:  mov    %eax,(%esp)
083fafcf +0x26f:  call   083face3 <_ZN8WongWork13EventEverland23UpdateEventEverlandInfoEji>  ; WongWork::EventEverland::UpdateEventEverlandInfo(unsigned int, int)
083fafd4 +0x274:  mov    -0xc(%ebp),%eax
083fafd7 +0x277:  shl    $0x4,%eax
083fafda +0x27a:  lea    -0x8(%ebp),%ebx
083fafdd +0x27d:  lea    (%ebx,%eax,1),%eax
083fafe0 +0x280:  sub    $0xcc,%eax
083fafe5 +0x285:  mov    (%eax),%eax
083fafe7 +0x287:  mov    %eax,%ecx
083fafe9 +0x289:  mov    -0xc(%ebp),%eax
083fafec +0x28c:  shl    $0x4,%eax
083fafef +0x28f:  lea    -0x8(%ebp),%edx
083faff2 +0x292:  lea    (%edx,%eax,1),%eax
083faff5 +0x295:  sub    $0xd0,%eax
083faffa +0x29a:  mov    (%eax),%eax
083faffc +0x29c:  mov    %eax,%edx
083faffe +0x29e:  mov    -0xc(%ebp),%eax
083fb001 +0x2a1:  shl    $0x4,%eax
083fb004 +0x2a4:  lea    -0x8(%ebp),%ebx
083fb007 +0x2a7:  lea    (%ebx,%eax,1),%eax
083fb00a +0x2aa:  sub    $0xd4,%eax
083fb00f +0x2af:  mov    (%eax),%eax
083fb011 +0x2b1:  movl   $0x3,0xc(%esp)
083fb019 +0x2b9:  mov    %ecx,0x8(%esp)
083fb01d +0x2bd:  mov    %edx,0x4(%esp)
083fb021 +0x2c1:  mov    %eax,(%esp)
083fb024 +0x2c4:  call   083f9b54 <_ZN8WongWork11EventCommon26InsertEventItem2EventTableEjjjj>  ; WongWork::EventCommon::InsertEventItem2EventTable(unsigned int, unsigned int, unsigned int, unsigned int)
083fb029 +0x2c9:  addl   $0x1,-0xc(%ebp)
083fb02d +0x2cd:  mov    -0xc(%ebp),%eax
083fb030 +0x2d0:  cmp    -0x14(%ebp),%eax
083fb033 +0x2d3:  setl   %al
083fb036 +0x2d6:  test   %al,%al
083fb038 +0x2d8:  jne    083fafa2 <+0x242>
083fb03e +0x2de:  add    $0xf4,%esp
083fb044 +0x2e4:  pop    %ebx
083fb045 +0x2e5:  pop    %ebp
083fb046 +0x2e6:  ret
```

## 反编译 C

```c
// WongWork::EventEverland::ArrangeEverlandEventItem @ 0x83fad60

/* WongWork::EventEverland::ArrangeEverlandEventItem(unsigned int, unsigned int) */

void WongWork::EventEverland::ArrangeEverlandEventItem(uint param_1,uint param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint auStack_e4 [40];
  int local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  cMyTrace local_30 [16];
  undefined4 local_20;
  MySQL *local_1c;
  int local_18;
  uint local_14;
  int local_10;
  
  local_20 = 10;
  local_1c = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  uVar2 = NumberToString(param_1,0);
  MySQL::set_query(local_1c,
                   "seLect id,server_id,charac_no,coin,coin_check from event_everland_info where m_id=%s and occ_check!=0 limit %d"
                   ,uVar2,10);
  cVar1 = MySQL::exec(local_1c,true);
  if (cVar1 == '\x01') {
    local_18 = 0;
    local_14 = 0;
    while ((uVar3 = MySQL::get_n_rows(local_1c), local_14 < uVar3 &&
           (cVar1 = MySQL::fetch(local_1c), cVar1 == '\x01'))) {
      local_34 = 0;
      local_38 = 0;
      local_3c = 0;
      local_40 = 0;
      local_44 = 0;
      MySQL::get_int(local_1c,0,&local_34);
      MySQL::get_int(local_1c,1,(int *)&local_38);
      MySQL::get_int(local_1c,2,(int *)&local_3c);
      MySQL::get_int(local_1c,3,(int *)&local_40);
      MySQL::get_int(local_1c,4,&local_44);
      if ((local_44 == 0) && (local_38 == param_2)) {
        auStack_e4[local_18 * 4] = local_34;
        auStack_e4[local_18 * 4 + 2] = 1;
        auStack_e4[local_18 * 4 + 3] = local_40;
        auStack_e4[local_18 * 4 + 1] = local_3c;
        local_18 = local_18 + 1;
      }
      local_14 = local_14 + 1;
    }
    for (local_10 = 0; local_10 < local_18; local_10 = local_10 + 1) {
      UpdateEventEverlandInfo(auStack_e4[local_10 * 4],auStack_e4[local_10 * 4 + 2]);
      EventCommon::InsertEventItem2EventTable
                (auStack_e4[local_10 * 4 + 1],auStack_e4[local_10 * 4 + 2],
                 auStack_e4[local_10 * 4 + 3],3);
    }
  }
  else {
    uVar2 = NumberToString(param_1,0);
    cMyTrace::cMyTrace(local_30,
                       "void WongWork::EventEverland::ArrangeEverlandEventItem(memberIdentificationNumber_t, unsigned int)"
                       ,0x182,5);
    cMyTrace::operator()
              (local_30,"%s, exec ERROR m_id=%s",
               "void WongWork::EventEverland::ArrangeEverlandEventItem(memberIdentificationNumber_t, unsigned int)"
               ,uVar2);
  }
  return;
}
```
