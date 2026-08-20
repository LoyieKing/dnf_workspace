# ArrangeSigongEventItem

`_ZN8WongWork11EventSigong22ArrangeSigongEventItemEjj`

`WongWork::EventSigong::ArrangeSigongEventItem(unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `WongWork::EventSigong` | `0x083fa855` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083fa855  _ZN8WongWork11EventSigong22ArrangeSigongEventItemEjj
#           WongWork::EventSigong::ArrangeSigongEventItem(unsigned int, unsigned int)
# range [0x083fa855, 0x083fac0c]
083fa855 +0x000:  push   %ebp
083fa856 +0x001:  mov    %esp,%ebp
083fa858 +0x003:  push   %ebx
083fa859 +0x004:  sub    $0x114,%esp
083fa85f +0x00a:  movl   $0xa,-0x20(%ebp)
083fa866 +0x011:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
083fa86b +0x016:  movl   $0x0,0x8(%esp)
083fa873 +0x01e:  movl   $0x1,0x4(%esp)
083fa87b +0x026:  mov    %eax,(%esp)
083fa87e +0x029:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
083fa883 +0x02e:  mov    %eax,-0x1c(%ebp)
083fa886 +0x031:  movl   $0x0,0x4(%esp)
083fa88e +0x039:  mov    0x8(%ebp),%eax
083fa891 +0x03c:  mov    %eax,(%esp)
083fa894 +0x03f:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
083fa899 +0x044:  movl   $0xa,0xc(%esp)
083fa8a1 +0x04c:  mov    %eax,0x8(%esp)
083fa8a5 +0x050:  movl   $"seLect id,item1_no,item1_server_id,item1_charac_no,item1_check,item2_no,item2_server_id,item2_charac_no,item2_check from event_sigong_info where m_id=%s and occ_check!=0 limit %d",0x4(%esp)
083fa8ad +0x058:  mov    -0x1c(%ebp),%eax
083fa8b0 +0x05b:  mov    %eax,(%esp)
083fa8b3 +0x05e:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
083fa8b8 +0x063:  movl   $0x1,0x4(%esp)
083fa8c0 +0x06b:  mov    -0x1c(%ebp),%eax
083fa8c3 +0x06e:  mov    %eax,(%esp)
083fa8c6 +0x071:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
083fa8cb +0x076:  xor    $0x1,%eax
083fa8ce +0x079:  test   %al,%al
083fa8d0 +0x07b:  je     083fa92e <+0xd9>
083fa8d2 +0x07d:  movl   $0x0,0x4(%esp)
083fa8da +0x085:  mov    0x8(%ebp),%eax
083fa8dd +0x088:  mov    %eax,(%esp)
083fa8e0 +0x08b:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
083fa8e5 +0x090:  mov    %eax,%ebx
083fa8e7 +0x092:  movl   $0x5,0xc(%esp)
083fa8ef +0x09a:  movl   $0x123,0x8(%esp)
083fa8f7 +0x0a2:  movl   $&_ZZN8WongWork11EventSigong22ArrangeSigongEventItemEjjE19__PRETTY_FUNCTION__,0x4(%esp)
083fa8ff +0x0aa:  lea    -0x30(%ebp),%eax
083fa902 +0x0ad:  mov    %eax,(%esp)
083fa905 +0x0b0:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
083fa90a +0x0b5:  mov    %ebx,0xc(%esp)
083fa90e +0x0b9:  movl   $&_ZZN8WongWork11EventSigong22ArrangeSigongEventItemEjjE19__PRETTY_FUNCTION__,0x8(%esp)
083fa916 +0x0c1:  movl   $"%s, exec ERROR m_id=%s",0x4(%esp)
083fa91e +0x0c9:  lea    -0x30(%ebp),%eax
083fa921 +0x0cc:  mov    %eax,(%esp)
083fa924 +0x0cf:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
083fa929 +0x0d4:  jmp    083fac04 <+0x3af>
083fa92e +0x0d9:  movl   $0x0,-0x18(%ebp)
083fa935 +0x0e0:  movl   $0x0,-0x14(%ebp)
083fa93c +0x0e7:  jmp    083fab40 <+0x2eb>
083fa941 +0x0ec:  mov    -0x1c(%ebp),%eax
083fa944 +0x0ef:  mov    %eax,(%esp)
083fa947 +0x0f2:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
083fa94c +0x0f7:  xor    $0x1,%eax
083fa94f +0x0fa:  test   %al,%al
083fa951 +0x0fc:  jne    083fab5b <+0x306>
083fa957 +0x102:  movl   $0x0,-0x34(%ebp)
083fa95e +0x109:  movl   $0x0,-0x3c(%ebp)
083fa965 +0x110:  movl   $0x0,-0x38(%ebp)
083fa96c +0x117:  movl   $0x0,-0x44(%ebp)
083fa973 +0x11e:  movl   $0x0,-0x40(%ebp)
083fa97a +0x125:  movl   $0x0,-0x4c(%ebp)
083fa981 +0x12c:  movl   $0x0,-0x48(%ebp)
083fa988 +0x133:  movl   $0x0,-0x54(%ebp)
083fa98f +0x13a:  movl   $0x0,-0x50(%ebp)
083fa996 +0x141:  movl   $0x1,-0x5c(%ebp)
083fa99d +0x148:  movl   $0xc8,-0x58(%ebp)
083fa9a4 +0x14f:  lea    -0x34(%ebp),%eax
083fa9a7 +0x152:  mov    %eax,0x8(%esp)
083fa9ab +0x156:  movl   $0x0,0x4(%esp)
083fa9b3 +0x15e:  mov    -0x1c(%ebp),%eax
083fa9b6 +0x161:  mov    %eax,(%esp)
083fa9b9 +0x164:  call   080e22ae <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x54>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x54
083fa9be +0x169:  lea    -0x3c(%ebp),%eax
083fa9c1 +0x16c:  mov    %eax,0x8(%esp)
083fa9c5 +0x170:  movl   $0x1,0x4(%esp)
083fa9cd +0x178:  mov    -0x1c(%ebp),%eax
083fa9d0 +0x17b:  mov    %eax,(%esp)
083fa9d3 +0x17e:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
083fa9d8 +0x183:  lea    -0x44(%ebp),%eax
083fa9db +0x186:  mov    %eax,0x8(%esp)
083fa9df +0x18a:  movl   $0x2,0x4(%esp)
083fa9e7 +0x192:  mov    -0x1c(%ebp),%eax
083fa9ea +0x195:  mov    %eax,(%esp)
083fa9ed +0x198:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
083fa9f2 +0x19d:  lea    -0x4c(%ebp),%eax
083fa9f5 +0x1a0:  mov    %eax,0x8(%esp)
083fa9f9 +0x1a4:  movl   $0x3,0x4(%esp)
083faa01 +0x1ac:  mov    -0x1c(%ebp),%eax
083faa04 +0x1af:  mov    %eax,(%esp)
083faa07 +0x1b2:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
083faa0c +0x1b7:  lea    -0x54(%ebp),%eax
083faa0f +0x1ba:  mov    %eax,0x8(%esp)
083faa13 +0x1be:  movl   $0x4,0x4(%esp)
083faa1b +0x1c6:  mov    -0x1c(%ebp),%eax
083faa1e +0x1c9:  mov    %eax,(%esp)
083faa21 +0x1cc:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
083faa26 +0x1d1:  lea    -0x3c(%ebp),%eax
083faa29 +0x1d4:  add    $0x4,%eax
083faa2c +0x1d7:  mov    %eax,0x8(%esp)
083faa30 +0x1db:  movl   $0x5,0x4(%esp)
083faa38 +0x1e3:  mov    -0x1c(%ebp),%eax
083faa3b +0x1e6:  mov    %eax,(%esp)
083faa3e +0x1e9:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
083faa43 +0x1ee:  lea    -0x44(%ebp),%eax
083faa46 +0x1f1:  add    $0x4,%eax
083faa49 +0x1f4:  mov    %eax,0x8(%esp)
083faa4d +0x1f8:  movl   $0x6,0x4(%esp)
083faa55 +0x200:  mov    -0x1c(%ebp),%eax
083faa58 +0x203:  mov    %eax,(%esp)
083faa5b +0x206:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
083faa60 +0x20b:  lea    -0x4c(%ebp),%eax
083faa63 +0x20e:  add    $0x4,%eax
083faa66 +0x211:  mov    %eax,0x8(%esp)
083faa6a +0x215:  movl   $0x7,0x4(%esp)
083faa72 +0x21d:  mov    -0x1c(%ebp),%eax
083faa75 +0x220:  mov    %eax,(%esp)
083faa78 +0x223:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
083faa7d +0x228:  lea    -0x54(%ebp),%eax
083faa80 +0x22b:  add    $0x4,%eax
083faa83 +0x22e:  mov    %eax,0x8(%esp)
083faa87 +0x232:  movl   $0x8,0x4(%esp)
083faa8f +0x23a:  mov    -0x1c(%ebp),%eax
083faa92 +0x23d:  mov    %eax,(%esp)
083faa95 +0x240:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
083faa9a +0x245:  movl   $0x0,-0x10(%ebp)
083faaa1 +0x24c:  jmp    083fab2d <+0x2d8>
083faaa6 +0x251:  mov    -0x10(%ebp),%eax
083faaa9 +0x254:  mov    -0x54(%ebp,%eax,4),%eax
083faaad +0x258:  test   %eax,%eax
083faaaf +0x25a:  jne    083fab29 <+0x2d4>
083faab1 +0x25c:  mov    -0x10(%ebp),%eax
083faab4 +0x25f:  mov    -0x44(%ebp,%eax,4),%eax
083faab8 +0x263:  cmp    0xc(%ebp),%eax
083faabb +0x266:  jne    083fab29 <+0x2d4>
083faabd +0x268:  mov    -0x18(%ebp),%edx
083faac0 +0x26b:  mov    -0x34(%ebp),%eax
083faac3 +0x26e:  shl    $0x4,%edx
083faac6 +0x271:  lea    -0x8(%ebp),%ecx
083faac9 +0x274:  lea    (%ecx,%edx,1),%edx
083faacc +0x277:  sub    $0xf4,%edx
083faad2 +0x27d:  mov    %eax,(%edx)
083faad4 +0x27f:  mov    -0x18(%ebp),%edx
083faad7 +0x282:  mov    -0x10(%ebp),%eax
083faada +0x285:  mov    -0x3c(%ebp,%eax,4),%eax
083faade +0x289:  shl    $0x4,%edx
083faae1 +0x28c:  lea    -0x8(%ebp),%ebx
083faae4 +0x28f:  lea    (%ebx,%edx,1),%edx
083faae7 +0x292:  sub    $0xec,%edx
083faaed +0x298:  mov    %eax,(%edx)
083faaef +0x29a:  mov    -0x18(%ebp),%edx
083faaf2 +0x29d:  mov    -0x10(%ebp),%eax
083faaf5 +0x2a0:  mov    -0x5c(%ebp,%eax,4),%eax
083faaf9 +0x2a4:  shl    $0x4,%edx
083faafc +0x2a7:  lea    -0x8(%ebp),%ecx
083faaff +0x2aa:  lea    (%ecx,%edx,1),%edx
083fab02 +0x2ad:  sub    $0xe8,%edx
083fab08 +0x2b3:  mov    %eax,(%edx)
083fab0a +0x2b5:  mov    -0x18(%ebp),%edx
083fab0d +0x2b8:  mov    -0x10(%ebp),%eax
083fab10 +0x2bb:  mov    -0x4c(%ebp,%eax,4),%eax
083fab14 +0x2bf:  shl    $0x4,%edx
083fab17 +0x2c2:  lea    -0x8(%ebp),%ebx
083fab1a +0x2c5:  lea    (%ebx,%edx,1),%edx
083fab1d +0x2c8:  sub    $0xf0,%edx
083fab23 +0x2ce:  mov    %eax,(%edx)
083fab25 +0x2d0:  addl   $0x1,-0x18(%ebp)
083fab29 +0x2d4:  addl   $0x1,-0x10(%ebp)
083fab2d +0x2d8:  cmpl   $0x1,-0x10(%ebp)
083fab31 +0x2dc:  setle  %al
083fab34 +0x2df:  test   %al,%al
083fab36 +0x2e1:  jne    083faaa6 <+0x251>
083fab3c +0x2e7:  addl   $0x1,-0x14(%ebp)
083fab40 +0x2eb:  mov    -0x1c(%ebp),%eax
083fab43 +0x2ee:  mov    %eax,(%esp)
083fab46 +0x2f1:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
083fab4b +0x2f6:  cmp    -0x14(%ebp),%eax
083fab4e +0x2f9:  seta   %al
083fab51 +0x2fc:  test   %al,%al
083fab53 +0x2fe:  jne    083fa941 <+0xec>
083fab59 +0x304:  jmp    083fab5c <+0x307>
083fab5b +0x306:  nop
083fab5c +0x307:  movl   $0x0,-0xc(%ebp)
083fab63 +0x30e:  jmp    083fabf3 <+0x39e>
083fab68 +0x313:  mov    -0xc(%ebp),%eax
083fab6b +0x316:  shl    $0x4,%eax
083fab6e +0x319:  lea    -0x8(%ebp),%edx
083fab71 +0x31c:  lea    (%edx,%eax,1),%eax
083fab74 +0x31f:  sub    $0xec,%eax
083fab79 +0x324:  mov    (%eax),%edx
083fab7b +0x326:  mov    -0xc(%ebp),%eax
083fab7e +0x329:  shl    $0x4,%eax
083fab81 +0x32c:  lea    -0x8(%ebp),%ecx
083fab84 +0x32f:  lea    (%ecx,%eax,1),%eax
083fab87 +0x332:  sub    $0xf4,%eax
083fab8c +0x337:  mov    (%eax),%eax
083fab8e +0x339:  mov    %edx,0x4(%esp)
083fab92 +0x33d:  mov    %eax,(%esp)
083fab95 +0x340:  call   083fa7a5 <_ZN8WongWork11EventSigong21UpdateEventSigongInfoEji>  ; WongWork::EventSigong::UpdateEventSigongInfo(unsigned int, int)
083fab9a +0x345:  mov    -0xc(%ebp),%eax
083fab9d +0x348:  shl    $0x4,%eax
083faba0 +0x34b:  lea    -0x8(%ebp),%ebx
083faba3 +0x34e:  lea    (%ebx,%eax,1),%eax
083faba6 +0x351:  sub    $0xe8,%eax
083fabab +0x356:  mov    (%eax),%eax
083fabad +0x358:  mov    %eax,%ecx
083fabaf +0x35a:  mov    -0xc(%ebp),%eax
083fabb2 +0x35d:  shl    $0x4,%eax
083fabb5 +0x360:  lea    -0x8(%ebp),%edx
083fabb8 +0x363:  lea    (%edx,%eax,1),%eax
083fabbb +0x366:  sub    $0xec,%eax
083fabc0 +0x36b:  mov    (%eax),%eax
083fabc2 +0x36d:  mov    %eax,%edx
083fabc4 +0x36f:  mov    -0xc(%ebp),%eax
083fabc7 +0x372:  shl    $0x4,%eax
083fabca +0x375:  lea    -0x8(%ebp),%ebx
083fabcd +0x378:  lea    (%ebx,%eax,1),%eax
083fabd0 +0x37b:  sub    $0xf0,%eax
083fabd5 +0x380:  mov    (%eax),%eax
083fabd7 +0x382:  movl   $0x3,0xc(%esp)
083fabdf +0x38a:  mov    %ecx,0x8(%esp)
083fabe3 +0x38e:  mov    %edx,0x4(%esp)
083fabe7 +0x392:  mov    %eax,(%esp)
083fabea +0x395:  call   083f9b54 <_ZN8WongWork11EventCommon26InsertEventItem2EventTableEjjjj>  ; WongWork::EventCommon::InsertEventItem2EventTable(unsigned int, unsigned int, unsigned int, unsigned int)
083fabef +0x39a:  addl   $0x1,-0xc(%ebp)
083fabf3 +0x39e:  mov    -0xc(%ebp),%eax
083fabf6 +0x3a1:  cmp    -0x18(%ebp),%eax
083fabf9 +0x3a4:  setl   %al
083fabfc +0x3a7:  test   %al,%al
083fabfe +0x3a9:  jne    083fab68 <+0x313>
083fac04 +0x3af:  add    $0x114,%esp
083fac0a +0x3b5:  pop    %ebx
083fac0b +0x3b6:  pop    %ebp
083fac0c +0x3b7:  ret
```

## 反编译 C

```c
// WongWork::EventSigong::ArrangeSigongEventItem @ 0x83fa855

/* WongWork::EventSigong::ArrangeSigongEventItem(unsigned int, unsigned int) */

void WongWork::EventSigong::ArrangeSigongEventItem(uint param_1,uint param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint auStack_100 [40];
  uint local_60 [11];
  cMyTrace local_34 [16];
  undefined4 local_24;
  MySQL *local_20;
  int local_1c;
  uint local_18;
  int local_14;
  int local_10;
  
  local_24 = 10;
  local_20 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  uVar2 = NumberToString(param_1,0);
  MySQL::set_query(local_20,
                   "seLect id,item1_no,item1_server_id,item1_charac_no,item1_check,item2_no,item2_server_id,item2_charac_no,item2_check from event_sigong_info where m_id=%s and occ_check!=0 limit %d"
                   ,uVar2,10);
  cVar1 = MySQL::exec(local_20,true);
  if (cVar1 == '\x01') {
    local_1c = 0;
    local_18 = 0;
    while ((uVar3 = MySQL::get_n_rows(local_20), local_18 < uVar3 &&
           (cVar1 = MySQL::fetch(local_20), cVar1 == '\x01'))) {
      local_60[10] = 0;
      local_60[8] = 0;
      local_60[9] = 0;
      local_60[6] = 0;
      local_60[7] = 0;
      local_60[4] = 0;
      local_60[5] = 0;
      local_60[2] = 0;
      local_60[3] = 0;
      local_60[0] = 1;
      local_60[1] = 200;
      MySQL::get_int(local_20,0,local_60 + 10);
      MySQL::get_int(local_20,1,(int *)(local_60 + 8));
      MySQL::get_int(local_20,2,(int *)(local_60 + 6));
      MySQL::get_int(local_20,3,(int *)(local_60 + 4));
      MySQL::get_int(local_20,4,(int *)(local_60 + 2));
      MySQL::get_int(local_20,5,(int *)(local_60 + 9));
      MySQL::get_int(local_20,6,(int *)(local_60 + 7));
      MySQL::get_int(local_20,7,(int *)(local_60 + 5));
      MySQL::get_int(local_20,8,(int *)(local_60 + 3));
      for (local_14 = 0; local_14 < 2; local_14 = local_14 + 1) {
        if ((local_60[local_14 + 2] == 0) && (local_60[local_14 + 6] == param_2)) {
          auStack_100[local_1c * 4] = local_60[10];
          auStack_100[local_1c * 4 + 2] = local_60[local_14 + 8];
          auStack_100[local_1c * 4 + 3] = local_60[local_14];
          auStack_100[local_1c * 4 + 1] = local_60[local_14 + 4];
          local_1c = local_1c + 1;
        }
      }
      local_18 = local_18 + 1;
    }
    for (local_10 = 0; local_10 < local_1c; local_10 = local_10 + 1) {
      UpdateEventSigongInfo(auStack_100[local_10 * 4],auStack_100[local_10 * 4 + 2]);
      EventCommon::InsertEventItem2EventTable
                (auStack_100[local_10 * 4 + 1],auStack_100[local_10 * 4 + 2],
                 auStack_100[local_10 * 4 + 3],3);
    }
  }
  else {
    uVar2 = NumberToString(param_1,0);
    cMyTrace::cMyTrace(local_34,
                       "void WongWork::EventSigong::ArrangeSigongEventItem(memberIdentificationNumber_t, unsigned int)"
                       ,0x123,5);
    cMyTrace::operator()
              (local_34,"%s, exec ERROR m_id=%s",
               "void WongWork::EventSigong::ArrangeSigongEventItem(memberIdentificationNumber_t, unsigned int)"
               ,uVar2);
  }
  return;
}
```
