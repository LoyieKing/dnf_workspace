# GetAccountCharacterLevelUpOnceGift

`_ZN8DB_Login34GetAccountCharacterLevelUpOnceGiftEP14SIG_LOGIN_DATA`

`DB_Login::GetAccountCharacterLevelUpOnceGift(SIG_LOGIN_DATA*)`

| 类 | 地址 |
|---|---|
| `DB_Login` | `0x0844834e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0844834e  _ZN8DB_Login34GetAccountCharacterLevelUpOnceGiftEP14SIG_LOGIN_DATA
#           DB_Login::GetAccountCharacterLevelUpOnceGift(SIG_LOGIN_DATA*)
# range [0x0844834e, 0x0844852f]
0844834e +0x000:  push   %ebp
0844834f +0x001:  mov    %esp,%ebp
08448351 +0x003:  sub    $0x38,%esp
08448354 +0x006:  mov    &_ZN10GlobalData15s_event_managerE,%eax
08448359 +0x00b:  movl   $0x68,0x4(%esp)
08448361 +0x013:  mov    %eax,(%esp)
08448364 +0x016:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
08448369 +0x01b:  mov    (%eax),%edx
0844836b +0x01d:  add    $0x34,%edx
0844836e +0x020:  mov    (%edx),%edx
08448370 +0x022:  movl   $0x0,0x4(%esp)
08448378 +0x02a:  mov    %eax,(%esp)
0844837b +0x02d:  call   *%edx
0844837d +0x02f:  xor    $0x1,%eax
08448380 +0x032:  test   %al,%al
08448382 +0x034:  je     0844838e <+0x40>
08448384 +0x036:  mov    $0x1,%eax
08448389 +0x03b:  jmp    0844852d <+0x1df>
0844838e +0x040:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08448393 +0x045:  movl   $0x0,0x8(%esp)
0844839b +0x04d:  movl   $0x9,0x4(%esp)
084483a3 +0x055:  mov    %eax,(%esp)
084483a6 +0x058:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
084483ab +0x05d:  mov    %eax,-0x14(%ebp)
084483ae +0x060:  mov    0xc(%ebp),%eax
084483b1 +0x063:  mov    0xc0(%eax),%eax
084483b7 +0x069:  mov    %eax,0x8(%esp)
084483bb +0x06d:  movl   $"seLect job_type, level from event_1208_level_achieve where m_id = %d",0x4(%esp)
084483c3 +0x075:  mov    -0x14(%ebp),%eax
084483c6 +0x078:  mov    %eax,(%esp)
084483c9 +0x07b:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084483ce +0x080:  movl   $0x1,0x4(%esp)
084483d6 +0x088:  mov    -0x14(%ebp),%eax
084483d9 +0x08b:  mov    %eax,(%esp)
084483dc +0x08e:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084483e1 +0x093:  mov    %al,-0x15(%ebp)
084483e4 +0x096:  movzbl -0x15(%ebp),%eax
084483e8 +0x09a:  xor    $0x1,%eax
084483eb +0x09d:  test   %al,%al
084483ed +0x09f:  je     08448432 <+0xe4>
084483ef +0x0a1:  mov    0xc(%ebp),%eax
084483f2 +0x0a4:  mov    0xc0(%eax),%eax
084483f8 +0x0aa:  mov    %eax,0x14(%esp)
084483fc +0x0ae:  movl   $"LoadAccountCharacterLevelUpOnceGift Query Error : m_id(%d)",0x10(%esp)
08448404 +0x0b6:  movl   $0xb4e8,0xc(%esp)
0844840c +0x0be:  movl   $&_ZZN8DB_Login34GetAccountCharacterLevelUpOnceGiftEP14SIG_LOGIN_DATAE19__PRETTY_FUNCTION__,0x8(%esp)
08448414 +0x0c6:  movl   $"DBThread.cpp",0x4(%esp)
0844841c +0x0ce:  movl   $0x1,(%esp)
08448423 +0x0d5:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08448428 +0x0da:  mov    $0x0,%eax
0844842d +0x0df:  jmp    0844852d <+0x1df>
08448432 +0x0e4:  mov    -0x14(%ebp),%eax
08448435 +0x0e7:  mov    %eax,(%esp)
08448438 +0x0ea:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0844843d +0x0ef:  test   %eax,%eax
0844843f +0x0f1:  setne  %al
08448442 +0x0f4:  test   %al,%al
08448444 +0x0f6:  je     08448508 <+0x1ba>
0844844a +0x0fc:  movl   $0x0,-0x10(%ebp)
08448451 +0x103:  jmp    084484ed <+0x19f>
08448456 +0x108:  mov    -0x14(%ebp),%eax
08448459 +0x10b:  mov    %eax,(%esp)
0844845c +0x10e:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08448461 +0x113:  xor    $0x1,%eax
08448464 +0x116:  test   %al,%al
08448466 +0x118:  je     08448472 <+0x124>
08448468 +0x11a:  mov    $0x0,%eax
0844846d +0x11f:  jmp    0844852d <+0x1df>
08448472 +0x124:  cmpl   $0x3,-0x10(%ebp)
08448476 +0x128:  jbe    08448482 <+0x134>
08448478 +0x12a:  mov    $0x0,%eax
0844847d +0x12f:  jmp    0844852d <+0x1df>
08448482 +0x134:  mov    -0x10(%ebp),%eax
08448485 +0x137:  add    $0x866,%eax
0844848a +0x13c:  shl    $0x3,%eax
0844848d +0x13f:  add    0xc(%ebp),%eax
08448490 +0x142:  add    $0x8,%eax
08448493 +0x145:  mov    %eax,-0xc(%ebp)
08448496 +0x148:  mov    -0xc(%ebp),%eax
08448499 +0x14b:  mov    %eax,0x8(%esp)
0844849d +0x14f:  movl   $0x0,0x4(%esp)
084484a5 +0x157:  mov    -0x14(%ebp),%eax
084484a8 +0x15a:  mov    %eax,(%esp)
084484ab +0x15d:  call   0814201c <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x370>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x370
084484b0 +0x162:  xor    $0x1,%eax
084484b3 +0x165:  test   %al,%al
084484b5 +0x167:  je     084484be <+0x170>
084484b7 +0x169:  mov    $0x0,%eax
084484bc +0x16e:  jmp    0844852d <+0x1df>
084484be +0x170:  mov    -0xc(%ebp),%eax
084484c1 +0x173:  add    $0x4,%eax
084484c4 +0x176:  mov    %eax,0x8(%esp)
084484c8 +0x17a:  movl   $0x1,0x4(%esp)
084484d0 +0x182:  mov    -0x14(%ebp),%eax
084484d3 +0x185:  mov    %eax,(%esp)
084484d6 +0x188:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
084484db +0x18d:  xor    $0x1,%eax
084484de +0x190:  test   %al,%al
084484e0 +0x192:  je     084484e9 <+0x19b>
084484e2 +0x194:  mov    $0x0,%eax
084484e7 +0x199:  jmp    0844852d <+0x1df>
084484e9 +0x19b:  addl   $0x1,-0x10(%ebp)
084484ed +0x19f:  mov    -0x14(%ebp),%eax
084484f0 +0x1a2:  mov    %eax,(%esp)
084484f3 +0x1a5:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
084484f8 +0x1aa:  cmp    -0x10(%ebp),%eax
084484fb +0x1ad:  seta   %al
084484fe +0x1b0:  test   %al,%al
08448500 +0x1b2:  jne    08448456 <+0x108>
08448506 +0x1b8:  jmp    08448528 <+0x1da>
08448508 +0x1ba:  mov    0xc(%ebp),%eax
0844850b +0x1bd:  add    $0x4338,%eax
08448510 +0x1c2:  movl   $0x20,0x8(%esp)
08448518 +0x1ca:  movl   $0x0,0x4(%esp)
08448520 +0x1d2:  mov    %eax,(%esp)
08448523 +0x1d5:  call   0807dcc0 <_init+0x5b8>
08448528 +0x1da:  mov    $0x1,%eax
0844852d +0x1df:  leave
0844852e +0x1e0:  ret
0844852f +0x1e1:  nop
```

## 反编译 C

```c
// DB_Login::GetAccountCharacterLevelUpOnceGift @ 0x844834e

/* DB_Login::GetAccountCharacterLevelUpOnceGift(SIG_LOGIN_DATA*) */

undefined4 __thiscall
DB_Login::GetAccountCharacterLevelUpOnceGift(DB_Login *this,SIG_LOGIN_DATA *param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  MySQL *this_00;
  int iVar4;
  uint uVar5;
  uint local_14;
  
  piVar2 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x68);
  cVar1 = (**(code **)(*piVar2 + 0x34))(piVar2,0);
  if (cVar1 == '\x01') {
    this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
    MySQL::set_query(this_00,"seLect job_type, level from event_1208_level_achieve where m_id = %d",
                     *(undefined4 *)(param_1 + 0xc0));
    cVar1 = MySQL::exec(this_00,true);
    if (cVar1 == '\x01') {
      iVar4 = MySQL::get_n_rows(this_00);
      if (iVar4 == 0) {
        memset(param_1 + 0x4338,0,0x20);
      }
      else {
        for (local_14 = 0; uVar5 = MySQL::get_n_rows(this_00), local_14 < uVar5;
            local_14 = local_14 + 1) {
          cVar1 = MySQL::fetch(this_00);
          if (cVar1 != '\x01') {
            return 0;
          }
          if (3 < local_14) {
            return 0;
          }
          cVar1 = MySQL::get_short(this_00,0,(int *)(param_1 + (local_14 + 0x866) * 8 + 8));
          if (cVar1 != '\x01') {
            return 0;
          }
          cVar1 = MySQL::get_int(this_00,1,(int *)(param_1 + (local_14 + 0x866) * 8 + 0xc));
          if (cVar1 != '\x01') {
            return 0;
          }
        }
      }
      uVar3 = 1;
    }
    else {
      LogManager::logFormat
                (1,"DBThread.cpp",
                 "bool DB_Login::GetAccountCharacterLevelUpOnceGift(SIG_LOGIN_DATA*)",0xb4e8,
                 "LoadAccountCharacterLevelUpOnceGift Query Error : m_id(%d)",
                 *(undefined4 *)(param_1 + 0xc0));
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}
```
