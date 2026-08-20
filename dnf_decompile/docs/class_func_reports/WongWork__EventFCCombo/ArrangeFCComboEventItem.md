# ArrangeFCComboEventItem

`_ZN8WongWork12EventFCCombo23ArrangeFCComboEventItemEjj`

`WongWork::EventFCCombo::ArrangeFCComboEventItem(unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `WongWork::EventFCCombo` | `0x083fb976` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083fb976  _ZN8WongWork12EventFCCombo23ArrangeFCComboEventItemEjj
#           WongWork::EventFCCombo::ArrangeFCComboEventItem(unsigned int, unsigned int)
# range [0x083fb976, 0x083fbc65]
083fb976 +0x000:  push   %ebp
083fb977 +0x001:  mov    %esp,%ebp
083fb979 +0x003:  push   %ebx
083fb97a +0x004:  sub    $0xf4,%esp
083fb980 +0x00a:  movl   $0xa,-0x1c(%ebp)
083fb987 +0x011:  call   0844dc7c <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x892>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x892
083fb98c +0x016:  mov    %eax,-0x18(%ebp)
083fb98f +0x019:  movl   $0x0,0x4(%esp)
083fb997 +0x021:  mov    0x8(%ebp),%eax
083fb99a +0x024:  mov    %eax,(%esp)
083fb99d +0x027:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
083fb9a2 +0x02c:  movl   $0xa,0xc(%esp)
083fb9aa +0x034:  mov    %eax,0x8(%esp)
083fb9ae +0x038:  movl   $"seLect id,item_server_id,item_charac_no,item_no,item_check,item_cnt from event_combo_entry where m_id=%s and occ_check!=0 limit %d",0x4(%esp)
083fb9b6 +0x040:  mov    -0x18(%ebp),%eax
083fb9b9 +0x043:  mov    %eax,(%esp)
083fb9bc +0x046:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
083fb9c1 +0x04b:  movl   $0x1,0x4(%esp)
083fb9c9 +0x053:  mov    -0x18(%ebp),%eax
083fb9cc +0x056:  mov    %eax,(%esp)
083fb9cf +0x059:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
083fb9d4 +0x05e:  xor    $0x1,%eax
083fb9d7 +0x061:  test   %al,%al
083fb9d9 +0x063:  je     083fba37 <+0xc1>
083fb9db +0x065:  movl   $0x0,0x4(%esp)
083fb9e3 +0x06d:  mov    0x8(%ebp),%eax
083fb9e6 +0x070:  mov    %eax,(%esp)
083fb9e9 +0x073:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
083fb9ee +0x078:  mov    %eax,%ebx
083fb9f0 +0x07a:  movl   $0x5,0xc(%esp)
083fb9f8 +0x082:  movl   $0x27a,0x8(%esp)
083fba00 +0x08a:  movl   $&_ZZN8WongWork12EventFCCombo23ArrangeFCComboEventItemEjjE19__PRETTY_FUNCTION__,0x4(%esp)
083fba08 +0x092:  lea    -0x2c(%ebp),%eax
083fba0b +0x095:  mov    %eax,(%esp)
083fba0e +0x098:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
083fba13 +0x09d:  mov    %ebx,0xc(%esp)
083fba17 +0x0a1:  movl   $&_ZZN8WongWork12EventFCCombo23ArrangeFCComboEventItemEjjE19__PRETTY_FUNCTION__,0x8(%esp)
083fba1f +0x0a9:  movl   $"%s, exec ERROR m_id=%s",0x4(%esp)
083fba27 +0x0b1:  lea    -0x2c(%ebp),%eax
083fba2a +0x0b4:  mov    %eax,(%esp)
083fba2d +0x0b7:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
083fba32 +0x0bc:  jmp    083fbc5d <+0x2e7>
083fba37 +0x0c1:  movl   $0x0,-0x14(%ebp)
083fba3e +0x0c8:  movl   $0x0,-0x10(%ebp)
083fba45 +0x0cf:  jmp    083fbb99 <+0x223>
083fba4a +0x0d4:  mov    -0x18(%ebp),%eax
083fba4d +0x0d7:  mov    %eax,(%esp)
083fba50 +0x0da:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
083fba55 +0x0df:  xor    $0x1,%eax
083fba58 +0x0e2:  test   %al,%al
083fba5a +0x0e4:  jne    083fbbb4 <+0x23e>
083fba60 +0x0ea:  movl   $0x0,-0x30(%ebp)
083fba67 +0x0f1:  movl   $0x0,-0x34(%ebp)
083fba6e +0x0f8:  movl   $0x0,-0x38(%ebp)
083fba75 +0x0ff:  movl   $0x0,-0x3c(%ebp)
083fba7c +0x106:  movl   $0x0,-0x40(%ebp)
083fba83 +0x10d:  movl   $0x0,-0x44(%ebp)
083fba8a +0x114:  lea    -0x30(%ebp),%eax
083fba8d +0x117:  mov    %eax,0x8(%esp)
083fba91 +0x11b:  movl   $0x0,0x4(%esp)
083fba99 +0x123:  mov    -0x18(%ebp),%eax
083fba9c +0x126:  mov    %eax,(%esp)
083fba9f +0x129:  call   080e22ae <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x54>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x54
083fbaa4 +0x12e:  lea    -0x34(%ebp),%eax
083fbaa7 +0x131:  mov    %eax,0x8(%esp)
083fbaab +0x135:  movl   $0x1,0x4(%esp)
083fbab3 +0x13d:  mov    -0x18(%ebp),%eax
083fbab6 +0x140:  mov    %eax,(%esp)
083fbab9 +0x143:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
083fbabe +0x148:  lea    -0x38(%ebp),%eax
083fbac1 +0x14b:  mov    %eax,0x8(%esp)
083fbac5 +0x14f:  movl   $0x2,0x4(%esp)
083fbacd +0x157:  mov    -0x18(%ebp),%eax
083fbad0 +0x15a:  mov    %eax,(%esp)
083fbad3 +0x15d:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
083fbad8 +0x162:  lea    -0x3c(%ebp),%eax
083fbadb +0x165:  mov    %eax,0x8(%esp)
083fbadf +0x169:  movl   $0x3,0x4(%esp)
083fbae7 +0x171:  mov    -0x18(%ebp),%eax
083fbaea +0x174:  mov    %eax,(%esp)
083fbaed +0x177:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
083fbaf2 +0x17c:  lea    -0x40(%ebp),%eax
083fbaf5 +0x17f:  mov    %eax,0x8(%esp)
083fbaf9 +0x183:  movl   $0x4,0x4(%esp)
083fbb01 +0x18b:  mov    -0x18(%ebp),%eax
083fbb04 +0x18e:  mov    %eax,(%esp)
083fbb07 +0x191:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
083fbb0c +0x196:  lea    -0x44(%ebp),%eax
083fbb0f +0x199:  mov    %eax,0x8(%esp)
083fbb13 +0x19d:  movl   $0x5,0x4(%esp)
083fbb1b +0x1a5:  mov    -0x18(%ebp),%eax
083fbb1e +0x1a8:  mov    %eax,(%esp)
083fbb21 +0x1ab:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
083fbb26 +0x1b0:  mov    -0x40(%ebp),%eax
083fbb29 +0x1b3:  test   %eax,%eax
083fbb2b +0x1b5:  jne    083fbb95 <+0x21f>
083fbb2d +0x1b7:  mov    -0x34(%ebp),%eax
083fbb30 +0x1ba:  cmp    0xc(%ebp),%eax
083fbb33 +0x1bd:  jne    083fbb95 <+0x21f>
083fbb35 +0x1bf:  mov    -0x14(%ebp),%edx
083fbb38 +0x1c2:  mov    -0x30(%ebp),%eax
083fbb3b +0x1c5:  shl    $0x4,%edx
083fbb3e +0x1c8:  lea    -0x8(%ebp),%ecx
083fbb41 +0x1cb:  lea    (%ecx,%edx,1),%edx
083fbb44 +0x1ce:  sub    $0xdc,%edx
083fbb4a +0x1d4:  mov    %eax,(%edx)
083fbb4c +0x1d6:  mov    -0x14(%ebp),%edx
083fbb4f +0x1d9:  mov    -0x3c(%ebp),%eax
083fbb52 +0x1dc:  shl    $0x4,%edx
083fbb55 +0x1df:  lea    -0x8(%ebp),%ebx
083fbb58 +0x1e2:  lea    (%ebx,%edx,1),%edx
083fbb5b +0x1e5:  sub    $0xd4,%edx
083fbb61 +0x1eb:  mov    %eax,(%edx)
083fbb63 +0x1ed:  mov    -0x14(%ebp),%edx
083fbb66 +0x1f0:  mov    -0x44(%ebp),%eax
083fbb69 +0x1f3:  shl    $0x4,%edx
083fbb6c +0x1f6:  lea    -0x8(%ebp),%ecx
083fbb6f +0x1f9:  lea    (%ecx,%edx,1),%edx
083fbb72 +0x1fc:  sub    $0xd0,%edx
083fbb78 +0x202:  mov    %eax,(%edx)
083fbb7a +0x204:  mov    -0x14(%ebp),%edx
083fbb7d +0x207:  mov    -0x38(%ebp),%eax
083fbb80 +0x20a:  shl    $0x4,%edx
083fbb83 +0x20d:  lea    -0x8(%ebp),%ebx
083fbb86 +0x210:  lea    (%ebx,%edx,1),%edx
083fbb89 +0x213:  sub    $0xd8,%edx
083fbb8f +0x219:  mov    %eax,(%edx)
083fbb91 +0x21b:  addl   $0x1,-0x14(%ebp)
083fbb95 +0x21f:  addl   $0x1,-0x10(%ebp)
083fbb99 +0x223:  mov    -0x18(%ebp),%eax
083fbb9c +0x226:  mov    %eax,(%esp)
083fbb9f +0x229:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
083fbba4 +0x22e:  cmp    -0x10(%ebp),%eax
083fbba7 +0x231:  seta   %al
083fbbaa +0x234:  test   %al,%al
083fbbac +0x236:  jne    083fba4a <+0xd4>
083fbbb2 +0x23c:  jmp    083fbbb5 <+0x23f>
083fbbb4 +0x23e:  nop
083fbbb5 +0x23f:  movl   $0x0,-0xc(%ebp)
083fbbbc +0x246:  jmp    083fbc4c <+0x2d6>
083fbbc1 +0x24b:  mov    -0xc(%ebp),%eax
083fbbc4 +0x24e:  shl    $0x4,%eax
083fbbc7 +0x251:  lea    -0x8(%ebp),%edx
083fbbca +0x254:  lea    (%edx,%eax,1),%eax
083fbbcd +0x257:  sub    $0xd4,%eax
083fbbd2 +0x25c:  mov    (%eax),%edx
083fbbd4 +0x25e:  mov    -0xc(%ebp),%eax
083fbbd7 +0x261:  shl    $0x4,%eax
083fbbda +0x264:  lea    -0x8(%ebp),%ecx
083fbbdd +0x267:  lea    (%ecx,%eax,1),%eax
083fbbe0 +0x26a:  sub    $0xdc,%eax
083fbbe5 +0x26f:  mov    (%eax),%eax
083fbbe7 +0x271:  mov    %edx,0x4(%esp)
083fbbeb +0x275:  mov    %eax,(%esp)
083fbbee +0x278:  call   083fb929 <_ZN8WongWork12EventFCCombo22UpdateFCComboEventInfoEji>  ; WongWork::EventFCCombo::UpdateFCComboEventInfo(unsigned int, int)
083fbbf3 +0x27d:  mov    -0xc(%ebp),%eax
083fbbf6 +0x280:  shl    $0x4,%eax
083fbbf9 +0x283:  lea    -0x8(%ebp),%ebx
083fbbfc +0x286:  lea    (%ebx,%eax,1),%eax
083fbbff +0x289:  sub    $0xd0,%eax
083fbc04 +0x28e:  mov    (%eax),%eax
083fbc06 +0x290:  mov    %eax,%ecx
083fbc08 +0x292:  mov    -0xc(%ebp),%eax
083fbc0b +0x295:  shl    $0x4,%eax
083fbc0e +0x298:  lea    -0x8(%ebp),%edx
083fbc11 +0x29b:  lea    (%edx,%eax,1),%eax
083fbc14 +0x29e:  sub    $0xd4,%eax
083fbc19 +0x2a3:  mov    (%eax),%eax
083fbc1b +0x2a5:  mov    %eax,%edx
083fbc1d +0x2a7:  mov    -0xc(%ebp),%eax
083fbc20 +0x2aa:  shl    $0x4,%eax
083fbc23 +0x2ad:  lea    -0x8(%ebp),%ebx
083fbc26 +0x2b0:  lea    (%ebx,%eax,1),%eax
083fbc29 +0x2b3:  sub    $0xd8,%eax
083fbc2e +0x2b8:  mov    (%eax),%eax
083fbc30 +0x2ba:  movl   $0x7,0xc(%esp)
083fbc38 +0x2c2:  mov    %ecx,0x8(%esp)
083fbc3c +0x2c6:  mov    %edx,0x4(%esp)
083fbc40 +0x2ca:  mov    %eax,(%esp)
083fbc43 +0x2cd:  call   083f9b54 <_ZN8WongWork11EventCommon26InsertEventItem2EventTableEjjjj>  ; WongWork::EventCommon::InsertEventItem2EventTable(unsigned int, unsigned int, unsigned int, unsigned int)
083fbc48 +0x2d2:  addl   $0x1,-0xc(%ebp)
083fbc4c +0x2d6:  mov    -0xc(%ebp),%eax
083fbc4f +0x2d9:  cmp    -0x14(%ebp),%eax
083fbc52 +0x2dc:  setl   %al
083fbc55 +0x2df:  test   %al,%al
083fbc57 +0x2e1:  jne    083fbbc1 <+0x24b>
083fbc5d +0x2e7:  add    $0xf4,%esp
083fbc63 +0x2ed:  pop    %ebx
083fbc64 +0x2ee:  pop    %ebp
083fbc65 +0x2ef:  ret
```

## 反编译 C

```c
// WongWork::EventFCCombo::ArrangeFCComboEventItem @ 0x83fb976

/* WongWork::EventFCCombo::ArrangeFCComboEventItem(unsigned int, unsigned int) */

void WongWork::EventFCCombo::ArrangeFCComboEventItem(uint param_1,uint param_2)

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
  local_1c = (MySQL *)GetDBHandle();
  uVar2 = NumberToString(param_1,0);
  MySQL::set_query(local_1c,
                   "seLect id,item_server_id,item_charac_no,item_no,item_check,item_cnt from event_combo_entry where m_id=%s and occ_check!=0 limit %d"
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
      UpdateFCComboEventInfo(auStack_e8[local_10 * 4],auStack_e8[local_10 * 4 + 2]);
      EventCommon::InsertEventItem2EventTable
                (auStack_e8[local_10 * 4 + 1],auStack_e8[local_10 * 4 + 2],
                 auStack_e8[local_10 * 4 + 3],7);
    }
  }
  else {
    uVar2 = NumberToString(param_1,0);
    cMyTrace::cMyTrace(local_30,
                       "void WongWork::EventFCCombo::ArrangeFCComboEventItem(memberIdentificationNumber_t, unsigned int)"
                       ,0x27a,5);
    cMyTrace::operator()
              (local_30,"%s, exec ERROR m_id=%s",
               "void WongWork::EventFCCombo::ArrangeFCComboEventItem(memberIdentificationNumber_t, unsigned int)"
               ,uVar2);
  }
  return;
}
```
