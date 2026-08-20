# arad_sp_select_member_premium

`_ZN4ARAD8DATABASE11LOGIN_QUERY29arad_sp_select_member_premiumEP14SIG_LOGIN_DATARN8DB_Login16tagDNFEventEntryERSt6vectorIiSaIiEES9_`

`ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_member_premium(SIG_LOGIN_DATA*, DB_Login::tagDNFEventEntry&, std::vector<int, std::allocator<int> >&, std::vector<int, std::allocator<int> >)`

| 类 | 地址 |
|---|---|
| `ARAD::DATABASE::LOGIN_QUERY` | `0x0818cc74` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0818cc74  _ZN4ARAD8DATABASE11LOGIN_QUERY29arad_sp_select_member_premiumEP14SIG_LOGIN_DATARN8DB_Login16tagDNFEventEntryERSt6vectorIiSaIiEES9_
#           ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_member_premium(SIG_LOGIN_DATA*, DB_Login::tagDNFEventEntry&, std::vector<int, std::allocator<int> >&, std::vector<int, std::allocator<int> >)
# range [0x0818cc74, 0x0818cfaa]
0818cc74 +0x000:  push   %ebp
0818cc75 +0x001:  mov    %esp,%ebp
0818cc77 +0x003:  push   %ebx
0818cc78 +0x004:  sub    $0x74,%esp
0818cc7b +0x007:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0818cc80 +0x00c:  movl   $0x0,0x8(%esp)
0818cc88 +0x014:  movl   $0x6,0x4(%esp)
0818cc90 +0x01c:  mov    %eax,(%esp)
0818cc93 +0x01f:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0818cc98 +0x024:  mov    %eax,-0x14(%ebp)
0818cc9b +0x027:  cmpl   $0x0,-0x14(%ebp)
0818cc9f +0x02b:  jne    0818ccdf <+0x6b>
0818cca1 +0x02d:  movl   $"Database null!!",0x14(%esp)
0818cca9 +0x035:  movl   $"%s",0x10(%esp)
0818ccb1 +0x03d:  movl   $0x412,0xc(%esp)
0818ccb9 +0x045:  movl   $&_ZZN4ARAD8DATABASE11LOGIN_QUERY29arad_sp_select_member_premiumEP14SIG_LOGIN_DATARN8DB_Login16tagDNFEventEntryERSt6vectorIiSaIiEES9_E19__PRETTY_FUNCTION__,0x8(%esp)
0818ccc1 +0x04d:  movl   $"localjapan/Arad_DB_Query.cpp",0x4(%esp)
0818ccc9 +0x055:  movl   $0x1,(%esp)
0818ccd0 +0x05c:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0818ccd5 +0x061:  mov    $0xffffffff,%eax
0818ccda +0x066:  jmp    0818cfa5 <+0x331>
0818ccdf +0x06b:  mov    0xc(%ebp),%eax
0818cce2 +0x06e:  mov    0xc(%eax),%ecx
0818cce5 +0x071:  mov    0xc(%ebp),%eax
0818cce8 +0x074:  mov    (%eax),%edx
0818ccea +0x076:  mov    0x8(%ebp),%eax
0818cced +0x079:  mov    0xc0(%eax),%eax
0818ccf3 +0x07f:  mov    %ecx,0x10(%esp)
0818ccf7 +0x083:  mov    %edx,0xc(%esp)
0818ccfb +0x087:  mov    %eax,0x8(%esp)
0818ccff +0x08b:  movl   $"seLect pre_type,unix_timestamp(service_start),unix_timestamp(service_end) from member_premium where m_id=%d and event_id=%d and service_end>now() and server_id in(0,%d) order by service_end desc limit 1",0x4(%esp)
0818cd07 +0x093:  mov    -0x14(%ebp),%eax
0818cd0a +0x096:  mov    %eax,(%esp)
0818cd0d +0x099:  call   083f4678 <_ZN5MySQL6selectEPKcz>  ; MySQL::select(char const*, ...)
0818cd12 +0x09e:  test   %eax,%eax
0818cd14 +0x0a0:  setne  %al
0818cd17 +0x0a3:  test   %al,%al
0818cd19 +0x0a5:  je     0818cd25 <+0xb1>
0818cd1b +0x0a7:  mov    $0xffffffff,%eax
0818cd20 +0x0ac:  jmp    0818cfa5 <+0x331>
0818cd25 +0x0b1:  mov    -0x14(%ebp),%eax
0818cd28 +0x0b4:  mov    %eax,(%esp)
0818cd2b +0x0b7:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0818cd30 +0x0bc:  test   %eax,%eax
0818cd32 +0x0be:  sete   %al
0818cd35 +0x0c1:  test   %al,%al
0818cd37 +0x0c3:  je     0818cd55 <+0xe1>
0818cd39 +0x0c5:  mov    0xc(%ebp),%eax
0818cd3c +0x0c8:  mov    %eax,0x4(%esp)
0818cd40 +0x0cc:  mov    0x14(%ebp),%eax
0818cd43 +0x0cf:  mov    %eax,(%esp)
0818cd46 +0x0d2:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
0818cd4b +0x0d7:  mov    $0x0,%eax
0818cd50 +0x0dc:  jmp    0818cfa5 <+0x331>
0818cd55 +0x0e1:  movl   $0x0,-0x10(%ebp)
0818cd5c +0x0e8:  movl   $0x0,-0xc(%ebp)
0818cd63 +0x0ef:  jmp    0818cf81 <+0x30d>
0818cd68 +0x0f4:  mov    -0x14(%ebp),%eax
0818cd6b +0x0f7:  mov    %eax,(%esp)
0818cd6e +0x0fa:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0818cd73 +0x0ff:  xor    $0x1,%eax
0818cd76 +0x102:  test   %al,%al
0818cd78 +0x104:  jne    0818cf9c <+0x328>
0818cd7e +0x10a:  movl   $0x0,-0x48(%ebp)
0818cd85 +0x111:  movl   $0x0,-0x4c(%ebp)
0818cd8c +0x118:  movl   $0x0,-0x50(%ebp)
0818cd93 +0x11f:  lea    -0x48(%ebp),%eax
0818cd96 +0x122:  mov    %eax,0x8(%esp)
0818cd9a +0x126:  movl   $0x0,0x4(%esp)
0818cda2 +0x12e:  mov    -0x14(%ebp),%eax
0818cda5 +0x131:  mov    %eax,(%esp)
0818cda8 +0x134:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0818cdad +0x139:  xor    $0x1,%eax
0818cdb0 +0x13c:  test   %al,%al
0818cdb2 +0x13e:  je     0818ce01 <+0x18d>
0818cdb4 +0x140:  mov    0x8(%ebp),%eax
0818cdb7 +0x143:  mov    0xc0(%eax),%ebx
0818cdbd +0x149:  movl   $0x5,0xc(%esp)
0818cdc5 +0x151:  movl   $0x432,0x8(%esp)
0818cdcd +0x159:  movl   $&_ZZN4ARAD8DATABASE11LOGIN_QUERY29arad_sp_select_member_premiumEP14SIG_LOGIN_DATARN8DB_Login16tagDNFEventEntryERSt6vectorIiSaIiEES9_E19__PRETTY_FUNCTION__,0x4(%esp)
0818cdd5 +0x161:  lea    -0x44(%ebp),%eax
0818cdd8 +0x164:  mov    %eax,(%esp)
0818cddb +0x167:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0818cde0 +0x16c:  mov    %ebx,0x8(%esp)
0818cde4 +0x170:  movl   $"DB_Login::GetPremiumInfo, get(1) ERROR m_id=%u",0x4(%esp)
0818cdec +0x178:  lea    -0x44(%ebp),%eax
0818cdef +0x17b:  mov    %eax,(%esp)
0818cdf2 +0x17e:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0818cdf7 +0x183:  mov    $0xffffffff,%eax
0818cdfc +0x188:  jmp    0818cfa5 <+0x331>
0818ce01 +0x18d:  lea    -0x4c(%ebp),%eax
0818ce04 +0x190:  mov    %eax,0x8(%esp)
0818ce08 +0x194:  movl   $0x1,0x4(%esp)
0818ce10 +0x19c:  mov    -0x14(%ebp),%eax
0818ce13 +0x19f:  mov    %eax,(%esp)
0818ce16 +0x1a2:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0818ce1b +0x1a7:  xor    $0x1,%eax
0818ce1e +0x1aa:  test   %al,%al
0818ce20 +0x1ac:  je     0818ce6f <+0x1fb>
0818ce22 +0x1ae:  mov    0x8(%ebp),%eax
0818ce25 +0x1b1:  mov    0xc0(%eax),%ebx
0818ce2b +0x1b7:  movl   $0x5,0xc(%esp)
0818ce33 +0x1bf:  movl   $0x438,0x8(%esp)
0818ce3b +0x1c7:  movl   $&_ZZN4ARAD8DATABASE11LOGIN_QUERY29arad_sp_select_member_premiumEP14SIG_LOGIN_DATARN8DB_Login16tagDNFEventEntryERSt6vectorIiSaIiEES9_E19__PRETTY_FUNCTION__,0x4(%esp)
0818ce43 +0x1cf:  lea    -0x34(%ebp),%eax
0818ce46 +0x1d2:  mov    %eax,(%esp)
0818ce49 +0x1d5:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0818ce4e +0x1da:  mov    %ebx,0x8(%esp)
0818ce52 +0x1de:  movl   $"DB_Login::GetPremiumInfo, get(2) ERROR m_id=%u",0x4(%esp)
0818ce5a +0x1e6:  lea    -0x34(%ebp),%eax
0818ce5d +0x1e9:  mov    %eax,(%esp)
0818ce60 +0x1ec:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0818ce65 +0x1f1:  mov    $0xffffffff,%eax
0818ce6a +0x1f6:  jmp    0818cfa5 <+0x331>
0818ce6f +0x1fb:  lea    -0x50(%ebp),%eax
0818ce72 +0x1fe:  mov    %eax,0x8(%esp)
0818ce76 +0x202:  movl   $0x2,0x4(%esp)
0818ce7e +0x20a:  mov    -0x14(%ebp),%eax
0818ce81 +0x20d:  mov    %eax,(%esp)
0818ce84 +0x210:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0818ce89 +0x215:  xor    $0x1,%eax
0818ce8c +0x218:  test   %al,%al
0818ce8e +0x21a:  je     0818cedd <+0x269>
0818ce90 +0x21c:  mov    0x8(%ebp),%eax
0818ce93 +0x21f:  mov    0xc0(%eax),%ebx
0818ce99 +0x225:  movl   $0x5,0xc(%esp)
0818cea1 +0x22d:  movl   $0x43e,0x8(%esp)
0818cea9 +0x235:  movl   $&_ZZN4ARAD8DATABASE11LOGIN_QUERY29arad_sp_select_member_premiumEP14SIG_LOGIN_DATARN8DB_Login16tagDNFEventEntryERSt6vectorIiSaIiEES9_E19__PRETTY_FUNCTION__,0x4(%esp)
0818ceb1 +0x23d:  lea    -0x24(%ebp),%eax
0818ceb4 +0x240:  mov    %eax,(%esp)
0818ceb7 +0x243:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0818cebc +0x248:  mov    %ebx,0x8(%esp)
0818cec0 +0x24c:  movl   $"DB_Login::GetPremiumInfo, get(3) ERROR m_id=%u",0x4(%esp)
0818cec8 +0x254:  lea    -0x24(%ebp),%eax
0818cecb +0x257:  mov    %eax,(%esp)
0818cece +0x25a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0818ced3 +0x25f:  mov    $0xffffffff,%eax
0818ced8 +0x264:  jmp    0818cfa5 <+0x331>
0818cedd +0x269:  cmpl   $0x69,-0x10(%ebp)
0818cee1 +0x26d:  jg     0818cf9f <+0x32b>
0818cee7 +0x273:  mov    -0x10(%ebp),%ecx
0818ceea +0x276:  mov    0xc(%ebp),%eax
0818ceed +0x279:  mov    (%eax),%eax
0818ceef +0x27b:  mov    0x8(%ebp),%edx
0818cef2 +0x27e:  add    $0x229,%ecx
0818cef8 +0x284:  shl    $0x4,%ecx
0818cefb +0x287:  add    %ecx,%edx
0818cefd +0x289:  add    $0x14,%edx
0818cf00 +0x28c:  mov    %eax,(%edx)
0818cf02 +0x28e:  mov    -0x10(%ebp),%ecx
0818cf05 +0x291:  mov    -0x48(%ebp),%eax
0818cf08 +0x294:  mov    0x8(%ebp),%edx
0818cf0b +0x297:  add    $0x229,%ecx
0818cf11 +0x29d:  shl    $0x4,%ecx
0818cf14 +0x2a0:  add    %ecx,%edx
0818cf16 +0x2a2:  add    $0x8,%edx
0818cf19 +0x2a5:  mov    %eax,(%edx)
0818cf1b +0x2a7:  mov    -0x10(%ebp),%ecx
0818cf1e +0x2aa:  mov    -0x4c(%ebp),%eax
0818cf21 +0x2ad:  mov    0x8(%ebp),%edx
0818cf24 +0x2b0:  add    $0x229,%ecx
0818cf2a +0x2b6:  shl    $0x4,%ecx
0818cf2d +0x2b9:  add    %ecx,%edx
0818cf2f +0x2bb:  add    $0xc,%edx
0818cf32 +0x2be:  mov    %eax,(%edx)
0818cf34 +0x2c0:  mov    -0x10(%ebp),%ecx
0818cf37 +0x2c3:  mov    -0x50(%ebp),%eax
0818cf3a +0x2c6:  mov    0x8(%ebp),%edx
0818cf3d +0x2c9:  add    $0x229,%ecx
0818cf43 +0x2cf:  shl    $0x4,%ecx
0818cf46 +0x2d2:  add    %ecx,%edx
0818cf48 +0x2d4:  add    $0x10,%edx
0818cf4b +0x2d7:  mov    %eax,(%edx)
0818cf4d +0x2d9:  addl   $0x1,-0x10(%ebp)
0818cf51 +0x2dd:  mov    0x8(%ebp),%eax
0818cf54 +0x2e0:  movzwl 0x293a(%eax),%eax
0818cf5b +0x2e7:  movzwl %ax,%ebx
0818cf5e +0x2ea:  mov    0xc(%ebp),%edx
0818cf61 +0x2ed:  mov    (%edx),%ecx
0818cf63 +0x2ef:  mov    0x8(%ebp),%edx
0818cf66 +0x2f2:  add    $0xa4c,%ebx
0818cf6c +0x2f8:  mov    %ecx,0xc(%edx,%ebx,4)
0818cf70 +0x2fc:  lea    0x1(%eax),%edx
0818cf73 +0x2ff:  mov    0x8(%ebp),%eax
0818cf76 +0x302:  mov    %dx,0x293a(%eax)
0818cf7d +0x309:  addl   $0x1,-0xc(%ebp)
0818cf81 +0x30d:  mov    -0x14(%ebp),%eax
0818cf84 +0x310:  mov    %eax,(%esp)
0818cf87 +0x313:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0818cf8c +0x318:  cmp    -0xc(%ebp),%eax
0818cf8f +0x31b:  seta   %al
0818cf92 +0x31e:  test   %al,%al
0818cf94 +0x320:  jne    0818cd68 <+0xf4>
0818cf9a +0x326:  jmp    0818cfa0 <+0x32c>
0818cf9c +0x328:  nop
0818cf9d +0x329:  jmp    0818cfa0 <+0x32c>
0818cf9f +0x32b:  nop
0818cfa0 +0x32c:  mov    $0x0,%eax
0818cfa5 +0x331:  add    $0x74,%esp
0818cfa8 +0x334:  pop    %ebx
0818cfa9 +0x335:  pop    %ebp
0818cfaa +0x336:  ret
```

## 反编译 C

```c
// ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_member_premium @ 0x818cc74

/* ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_member_premium(SIG_LOGIN_DATA*,
   DB_Login::tagDNFEventEntry&, std::vector<int, std::allocator<int> >&, std::vector<int,
   std::allocator<int> >) */

undefined4
ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_member_premium
          (int param_1,int *param_2,undefined4 param_3,vector<int,std::allocator<int>> *param_4)

{
  ushort uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int local_54;
  int local_50;
  int local_4c;
  cMyTrace local_48 [16];
  cMyTrace local_38 [16];
  cMyTrace local_28 [16];
  MySQL *local_18;
  int local_14;
  uint local_10;
  
  local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  if (local_18 == (MySQL *)0x0) {
    LogManager::logFormat
              (1,"localjapan/Arad_DB_Query.cpp",
               "int ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_member_premium(SIG_LOGIN_DATA*, DB_Login::tagDNFEventEntry&, IntVector&, ARAD::DATABASE::LOGIN_QUERY::vecPremiumRemoveInfo_t)"
               ,0x412,"%s","Database null!!");
    uVar3 = 0xffffffff;
  }
  else {
    iVar4 = MySQL::select(local_18,
                          "seLect pre_type,unix_timestamp(service_start),unix_timestamp(service_end) from member_premium where m_id=%d and event_id=%d and service_end>now() and server_id in(0,%d) order by service_end desc limit 1"
                          ,*(undefined4 *)(param_1 + 0xc0),*param_2,param_2[3]);
    if (iVar4 == 0) {
      iVar4 = MySQL::get_n_rows(local_18);
      if (iVar4 == 0) {
        std::vector<int,std::allocator<int>>::push_back(param_4,param_2);
        uVar3 = 0;
      }
      else {
        local_14 = 0;
        local_10 = 0;
        while ((uVar5 = MySQL::get_n_rows(local_18), local_10 < uVar5 &&
               (cVar2 = MySQL::fetch(local_18), cVar2 == '\x01'))) {
          local_4c = 0;
          local_50 = 0;
          local_54 = 0;
          cVar2 = MySQL::get_int(local_18,0,&local_4c);
          if (cVar2 != '\x01') {
            uVar3 = *(undefined4 *)(param_1 + 0xc0);
            cMyTrace::cMyTrace(local_48,
                               "int ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_member_premium(SIG_LOGIN_DATA*, DB_Login::tagDNFEventEntry&, IntVector&, ARAD::DATABASE::LOGIN_QUERY::vecPremiumRemoveInfo_t)"
                               ,0x432,5);
            cMyTrace::operator()(local_48,"DB_Login::GetPremiumInfo, get(1) ERROR m_id=%u",uVar3);
            return 0xffffffff;
          }
          cVar2 = MySQL::get_int(local_18,1,&local_50);
          if (cVar2 != '\x01') {
            uVar3 = *(undefined4 *)(param_1 + 0xc0);
            cMyTrace::cMyTrace(local_38,
                               "int ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_member_premium(SIG_LOGIN_DATA*, DB_Login::tagDNFEventEntry&, IntVector&, ARAD::DATABASE::LOGIN_QUERY::vecPremiumRemoveInfo_t)"
                               ,0x438,5);
            cMyTrace::operator()(local_38,"DB_Login::GetPremiumInfo, get(2) ERROR m_id=%u",uVar3);
            return 0xffffffff;
          }
          cVar2 = MySQL::get_int(local_18,2,&local_54);
          if (cVar2 != '\x01') {
            uVar3 = *(undefined4 *)(param_1 + 0xc0);
            cMyTrace::cMyTrace(local_28,
                               "int ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_member_premium(SIG_LOGIN_DATA*, DB_Login::tagDNFEventEntry&, IntVector&, ARAD::DATABASE::LOGIN_QUERY::vecPremiumRemoveInfo_t)"
                               ,0x43e,5);
            cMyTrace::operator()(local_28,"DB_Login::GetPremiumInfo, get(3) ERROR m_id=%u",uVar3);
            return 0xffffffff;
          }
          if (0x69 < local_14) break;
          *(int *)(param_1 + (local_14 + 0x229) * 0x10 + 0x14) = *param_2;
          *(int *)(param_1 + (local_14 + 0x229) * 0x10 + 8) = local_4c;
          *(int *)(param_1 + (local_14 + 0x229) * 0x10 + 0xc) = local_50;
          *(int *)(param_1 + (local_14 + 0x229) * 0x10 + 0x10) = local_54;
          local_14 = local_14 + 1;
          uVar1 = *(ushort *)(param_1 + 0x293a);
          *(int *)(param_1 + 0xc + (uVar1 + 0xa4c) * 4) = *param_2;
          *(ushort *)(param_1 + 0x293a) = uVar1 + 1;
          local_10 = local_10 + 1;
        }
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0xffffffff;
    }
  }
  return uVar3;
}
```
