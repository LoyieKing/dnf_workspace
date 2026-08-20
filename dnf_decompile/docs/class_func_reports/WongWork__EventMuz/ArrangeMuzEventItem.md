# ArrangeMuzEventItem

`_ZN8WongWork8EventMuz19ArrangeMuzEventItemEjj`

`WongWork::EventMuz::ArrangeMuzEventItem(unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `WongWork::EventMuz` | `0x083fb16a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083fb16a  _ZN8WongWork8EventMuz19ArrangeMuzEventItemEjj
#           WongWork::EventMuz::ArrangeMuzEventItem(unsigned int, unsigned int)
# range [0x083fb16a, 0x083fb471]
083fb16a +0x000:  push   %ebp
083fb16b +0x001:  mov    %esp,%ebp
083fb16d +0x003:  push   %ebx
083fb16e +0x004:  sub    $0xf4,%esp
083fb174 +0x00a:  movl   $0xa,-0x1c(%ebp)
083fb17b +0x011:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
083fb180 +0x016:  movl   $0x0,0x8(%esp)
083fb188 +0x01e:  movl   $0x1,0x4(%esp)
083fb190 +0x026:  mov    %eax,(%esp)
083fb193 +0x029:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
083fb198 +0x02e:  mov    %eax,-0x18(%ebp)
083fb19b +0x031:  movl   $0x0,0x4(%esp)
083fb1a3 +0x039:  mov    0x8(%ebp),%eax
083fb1a6 +0x03c:  mov    %eax,(%esp)
083fb1a9 +0x03f:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
083fb1ae +0x044:  movl   $0xa,0xc(%esp)
083fb1b6 +0x04c:  mov    %eax,0x8(%esp)
083fb1ba +0x050:  movl   $"seLect id,item_server_id,item_charac_no,item_no,item_check,item_cnt from event_muz_entry where m_id=%s and occ_check!=0 limit %d",0x4(%esp)
083fb1c2 +0x058:  mov    -0x18(%ebp),%eax
083fb1c5 +0x05b:  mov    %eax,(%esp)
083fb1c8 +0x05e:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
083fb1cd +0x063:  movl   $0x1,0x4(%esp)
083fb1d5 +0x06b:  mov    -0x18(%ebp),%eax
083fb1d8 +0x06e:  mov    %eax,(%esp)
083fb1db +0x071:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
083fb1e0 +0x076:  xor    $0x1,%eax
083fb1e3 +0x079:  test   %al,%al
083fb1e5 +0x07b:  je     083fb243 <+0xd9>
083fb1e7 +0x07d:  movl   $0x0,0x4(%esp)
083fb1ef +0x085:  mov    0x8(%ebp),%eax
083fb1f2 +0x088:  mov    %eax,(%esp)
083fb1f5 +0x08b:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
083fb1fa +0x090:  mov    %eax,%ebx
083fb1fc +0x092:  movl   $0x5,0xc(%esp)
083fb204 +0x09a:  movl   $0x1ce,0x8(%esp)
083fb20c +0x0a2:  movl   $&_ZZN8WongWork8EventMuz19ArrangeMuzEventItemEjjE19__PRETTY_FUNCTION__,0x4(%esp)
083fb214 +0x0aa:  lea    -0x2c(%ebp),%eax
083fb217 +0x0ad:  mov    %eax,(%esp)
083fb21a +0x0b0:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
083fb21f +0x0b5:  mov    %ebx,0xc(%esp)
083fb223 +0x0b9:  movl   $&_ZZN8WongWork8EventMuz19ArrangeMuzEventItemEjjE19__PRETTY_FUNCTION__,0x8(%esp)
083fb22b +0x0c1:  movl   $"%s, exec ERROR m_id=%s",0x4(%esp)
083fb233 +0x0c9:  lea    -0x2c(%ebp),%eax
083fb236 +0x0cc:  mov    %eax,(%esp)
083fb239 +0x0cf:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
083fb23e +0x0d4:  jmp    083fb469 <+0x2ff>
083fb243 +0x0d9:  movl   $0x0,-0x14(%ebp)
083fb24a +0x0e0:  movl   $0x0,-0x10(%ebp)
083fb251 +0x0e7:  jmp    083fb3a5 <+0x23b>
083fb256 +0x0ec:  mov    -0x18(%ebp),%eax
083fb259 +0x0ef:  mov    %eax,(%esp)
083fb25c +0x0f2:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
083fb261 +0x0f7:  xor    $0x1,%eax
083fb264 +0x0fa:  test   %al,%al
083fb266 +0x0fc:  jne    083fb3c0 <+0x256>
083fb26c +0x102:  movl   $0x0,-0x30(%ebp)
083fb273 +0x109:  movl   $0x0,-0x34(%ebp)
083fb27a +0x110:  movl   $0x0,-0x38(%ebp)
083fb281 +0x117:  movl   $0x0,-0x3c(%ebp)
083fb288 +0x11e:  movl   $0x0,-0x40(%ebp)
083fb28f +0x125:  movl   $0x0,-0x44(%ebp)
083fb296 +0x12c:  lea    -0x30(%ebp),%eax
083fb299 +0x12f:  mov    %eax,0x8(%esp)
083fb29d +0x133:  movl   $0x0,0x4(%esp)
083fb2a5 +0x13b:  mov    -0x18(%ebp),%eax
083fb2a8 +0x13e:  mov    %eax,(%esp)
083fb2ab +0x141:  call   080e22ae <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x54>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x54
083fb2b0 +0x146:  lea    -0x34(%ebp),%eax
083fb2b3 +0x149:  mov    %eax,0x8(%esp)
083fb2b7 +0x14d:  movl   $0x1,0x4(%esp)
083fb2bf +0x155:  mov    -0x18(%ebp),%eax
083fb2c2 +0x158:  mov    %eax,(%esp)
083fb2c5 +0x15b:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
083fb2ca +0x160:  lea    -0x38(%ebp),%eax
083fb2cd +0x163:  mov    %eax,0x8(%esp)
083fb2d1 +0x167:  movl   $0x2,0x4(%esp)
083fb2d9 +0x16f:  mov    -0x18(%ebp),%eax
083fb2dc +0x172:  mov    %eax,(%esp)
083fb2df +0x175:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
083fb2e4 +0x17a:  lea    -0x3c(%ebp),%eax
083fb2e7 +0x17d:  mov    %eax,0x8(%esp)
083fb2eb +0x181:  movl   $0x3,0x4(%esp)
083fb2f3 +0x189:  mov    -0x18(%ebp),%eax
083fb2f6 +0x18c:  mov    %eax,(%esp)
083fb2f9 +0x18f:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
083fb2fe +0x194:  lea    -0x40(%ebp),%eax
083fb301 +0x197:  mov    %eax,0x8(%esp)
083fb305 +0x19b:  movl   $0x4,0x4(%esp)
083fb30d +0x1a3:  mov    -0x18(%ebp),%eax
083fb310 +0x1a6:  mov    %eax,(%esp)
083fb313 +0x1a9:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
083fb318 +0x1ae:  lea    -0x44(%ebp),%eax
083fb31b +0x1b1:  mov    %eax,0x8(%esp)
083fb31f +0x1b5:  movl   $0x5,0x4(%esp)
083fb327 +0x1bd:  mov    -0x18(%ebp),%eax
083fb32a +0x1c0:  mov    %eax,(%esp)
083fb32d +0x1c3:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
083fb332 +0x1c8:  mov    -0x40(%ebp),%eax
083fb335 +0x1cb:  test   %eax,%eax
083fb337 +0x1cd:  jne    083fb3a1 <+0x237>
083fb339 +0x1cf:  mov    -0x34(%ebp),%eax
083fb33c +0x1d2:  cmp    0xc(%ebp),%eax
083fb33f +0x1d5:  jne    083fb3a1 <+0x237>
083fb341 +0x1d7:  mov    -0x14(%ebp),%edx
083fb344 +0x1da:  mov    -0x30(%ebp),%eax
083fb347 +0x1dd:  shl    $0x4,%edx
083fb34a +0x1e0:  lea    -0x8(%ebp),%ecx
083fb34d +0x1e3:  lea    (%ecx,%edx,1),%edx
083fb350 +0x1e6:  sub    $0xdc,%edx
083fb356 +0x1ec:  mov    %eax,(%edx)
083fb358 +0x1ee:  mov    -0x14(%ebp),%edx
083fb35b +0x1f1:  mov    -0x3c(%ebp),%eax
083fb35e +0x1f4:  shl    $0x4,%edx
083fb361 +0x1f7:  lea    -0x8(%ebp),%ebx
083fb364 +0x1fa:  lea    (%ebx,%edx,1),%edx
083fb367 +0x1fd:  sub    $0xd4,%edx
083fb36d +0x203:  mov    %eax,(%edx)
083fb36f +0x205:  mov    -0x14(%ebp),%edx
083fb372 +0x208:  mov    -0x44(%ebp),%eax
083fb375 +0x20b:  shl    $0x4,%edx
083fb378 +0x20e:  lea    -0x8(%ebp),%ecx
083fb37b +0x211:  lea    (%ecx,%edx,1),%edx
083fb37e +0x214:  sub    $0xd0,%edx
083fb384 +0x21a:  mov    %eax,(%edx)
083fb386 +0x21c:  mov    -0x14(%ebp),%edx
083fb389 +0x21f:  mov    -0x38(%ebp),%eax
083fb38c +0x222:  shl    $0x4,%edx
083fb38f +0x225:  lea    -0x8(%ebp),%ebx
083fb392 +0x228:  lea    (%ebx,%edx,1),%edx
083fb395 +0x22b:  sub    $0xd8,%edx
083fb39b +0x231:  mov    %eax,(%edx)
083fb39d +0x233:  addl   $0x1,-0x14(%ebp)
083fb3a1 +0x237:  addl   $0x1,-0x10(%ebp)
083fb3a5 +0x23b:  mov    -0x18(%ebp),%eax
083fb3a8 +0x23e:  mov    %eax,(%esp)
083fb3ab +0x241:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
083fb3b0 +0x246:  cmp    -0x10(%ebp),%eax
083fb3b3 +0x249:  seta   %al
083fb3b6 +0x24c:  test   %al,%al
083fb3b8 +0x24e:  jne    083fb256 <+0xec>
083fb3be +0x254:  jmp    083fb3c1 <+0x257>
083fb3c0 +0x256:  nop
083fb3c1 +0x257:  movl   $0x0,-0xc(%ebp)
083fb3c8 +0x25e:  jmp    083fb458 <+0x2ee>
083fb3cd +0x263:  mov    -0xc(%ebp),%eax
083fb3d0 +0x266:  shl    $0x4,%eax
083fb3d3 +0x269:  lea    -0x8(%ebp),%edx
083fb3d6 +0x26c:  lea    (%edx,%eax,1),%eax
083fb3d9 +0x26f:  sub    $0xd4,%eax
083fb3de +0x274:  mov    (%eax),%edx
083fb3e0 +0x276:  mov    -0xc(%ebp),%eax
083fb3e3 +0x279:  shl    $0x4,%eax
083fb3e6 +0x27c:  lea    -0x8(%ebp),%ecx
083fb3e9 +0x27f:  lea    (%ecx,%eax,1),%eax
083fb3ec +0x282:  sub    $0xdc,%eax
083fb3f1 +0x287:  mov    (%eax),%eax
083fb3f3 +0x289:  mov    %edx,0x4(%esp)
083fb3f7 +0x28d:  mov    %eax,(%esp)
083fb3fa +0x290:  call   083fb105 <_ZN8WongWork8EventMuz18UpdateEventMuzInfoEji>  ; WongWork::EventMuz::UpdateEventMuzInfo(unsigned int, int)
083fb3ff +0x295:  mov    -0xc(%ebp),%eax
083fb402 +0x298:  shl    $0x4,%eax
083fb405 +0x29b:  lea    -0x8(%ebp),%ebx
083fb408 +0x29e:  lea    (%ebx,%eax,1),%eax
083fb40b +0x2a1:  sub    $0xd0,%eax
083fb410 +0x2a6:  mov    (%eax),%eax
083fb412 +0x2a8:  mov    %eax,%ecx
083fb414 +0x2aa:  mov    -0xc(%ebp),%eax
083fb417 +0x2ad:  shl    $0x4,%eax
083fb41a +0x2b0:  lea    -0x8(%ebp),%edx
083fb41d +0x2b3:  lea    (%edx,%eax,1),%eax
083fb420 +0x2b6:  sub    $0xd4,%eax
083fb425 +0x2bb:  mov    (%eax),%eax
083fb427 +0x2bd:  mov    %eax,%edx
083fb429 +0x2bf:  mov    -0xc(%ebp),%eax
083fb42c +0x2c2:  shl    $0x4,%eax
083fb42f +0x2c5:  lea    -0x8(%ebp),%ebx
083fb432 +0x2c8:  lea    (%ebx,%eax,1),%eax
083fb435 +0x2cb:  sub    $0xd8,%eax
083fb43a +0x2d0:  mov    (%eax),%eax
083fb43c +0x2d2:  movl   $0x5,0xc(%esp)
083fb444 +0x2da:  mov    %ecx,0x8(%esp)
083fb448 +0x2de:  mov    %edx,0x4(%esp)
083fb44c +0x2e2:  mov    %eax,(%esp)
083fb44f +0x2e5:  call   083f9b54 <_ZN8WongWork11EventCommon26InsertEventItem2EventTableEjjjj>  ; WongWork::EventCommon::InsertEventItem2EventTable(unsigned int, unsigned int, unsigned int, unsigned int)
083fb454 +0x2ea:  addl   $0x1,-0xc(%ebp)
083fb458 +0x2ee:  mov    -0xc(%ebp),%eax
083fb45b +0x2f1:  cmp    -0x14(%ebp),%eax
083fb45e +0x2f4:  setl   %al
083fb461 +0x2f7:  test   %al,%al
083fb463 +0x2f9:  jne    083fb3cd <+0x263>
083fb469 +0x2ff:  add    $0xf4,%esp
083fb46f +0x305:  pop    %ebx
083fb470 +0x306:  pop    %ebp
083fb471 +0x307:  ret
```

## 反编译 C

```c
// WongWork::EventMuz::ArrangeMuzEventItem @ 0x83fb16a

/* WongWork::EventMuz::ArrangeMuzEventItem(unsigned int, unsigned int) */

void WongWork::EventMuz::ArrangeMuzEventItem(uint param_1,uint param_2)

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
                   "seLect id,item_server_id,item_charac_no,item_no,item_check,item_cnt from event_muz_entry where m_id=%s and occ_check!=0 limit %d"
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
      local_48 = 0;
      MySQL::get_int(local_1c,0,&local_34);
      MySQL::get_int(local_1c,1,(int *)&local_38);
      MySQL::get_int(local_1c,2,(int *)&local_3c);
      MySQL::get_int(local_1c,3,(int *)&local_40);
      MySQL::get_int(local_1c,4,&local_44);
      MySQL::get_int(local_1c,5,(int *)&local_48);
      if ((local_44 == 0) && (local_38 == param_2)) {
        auStack_e8[local_18 * 4] = local_34;
        auStack_e8[local_18 * 4 + 2] = local_40;
        auStack_e8[local_18 * 4 + 3] = local_48;
        auStack_e8[local_18 * 4 + 1] = local_3c;
        local_18 = local_18 + 1;
      }
      local_14 = local_14 + 1;
    }
    for (local_10 = 0; local_10 < local_18; local_10 = local_10 + 1) {
      UpdateEventMuzInfo(auStack_e8[local_10 * 4],auStack_e8[local_10 * 4 + 2]);
      EventCommon::InsertEventItem2EventTable
                (auStack_e8[local_10 * 4 + 1],auStack_e8[local_10 * 4 + 2],
                 auStack_e8[local_10 * 4 + 3],5);
    }
  }
  else {
    uVar2 = NumberToString(param_1,0);
    cMyTrace::cMyTrace(local_30,
                       "void WongWork::EventMuz::ArrangeMuzEventItem(memberIdentificationNumber_t, unsigned int)"
                       ,0x1ce,5);
    cMyTrace::operator()
              (local_30,"%s, exec ERROR m_id=%s",
               "void WongWork::EventMuz::ArrangeMuzEventItem(memberIdentificationNumber_t, unsigned int)"
               ,uVar2);
  }
  return;
}
```
