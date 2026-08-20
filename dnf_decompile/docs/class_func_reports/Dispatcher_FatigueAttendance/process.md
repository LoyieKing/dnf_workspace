# process

`_ZN28Dispatcher_FatigueAttendance7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_FatigueAttendance::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_FatigueAttendance` | `0x081daffa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081daffa  _ZN28Dispatcher_FatigueAttendance7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_FatigueAttendance::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081daffa, 0x081db30f]
081daffa +0x000:  push   %ebp
081daffb +0x001:  mov    %esp,%ebp
081daffd +0x003:  push   %esi
081daffe +0x004:  push   %ebx
081dafff +0x005:  sub    $0x40,%esp
081db002 +0x008:  mov    0x14(%ebp),%eax
081db005 +0x00b:  mov    %eax,-0x2c(%ebp)
081db008 +0x00e:  mov    0x10(%ebp),%eax
081db00b +0x011:  mov    %eax,-0x28(%ebp)
081db00e +0x014:  mov    -0x28(%ebp),%eax
081db011 +0x017:  mov    0xd(%eax),%edx
081db014 +0x01a:  mov    -0x2c(%ebp),%eax
081db017 +0x01d:  mov    %edx,0x8(%eax)
081db01a +0x020:  mov    0x10(%ebp),%eax
081db01d +0x023:  mov    %eax,0x8(%esp)
081db021 +0x027:  mov    0xc(%ebp),%eax
081db024 +0x02a:  mov    %eax,0x4(%esp)
081db028 +0x02e:  mov    0x8(%ebp),%eax
081db02b +0x031:  mov    %eax,(%esp)
081db02e +0x034:  call   081db310 <_ZN28Dispatcher_FatigueAttendance11check_errorEP5CUserR8MSG_BASE>  ; Dispatcher_FatigueAttendance::check_error(CUser*, MSG_BASE&)
081db033 +0x039:  mov    -0x2c(%ebp),%edx
081db036 +0x03c:  mov    %eax,0x4(%edx)
081db039 +0x03f:  mov    -0x2c(%ebp),%eax
081db03c +0x042:  mov    0x4(%eax),%eax
081db03f +0x045:  test   %eax,%eax
081db041 +0x047:  jle    081db04d <+0x53>
081db043 +0x049:  mov    $0x0,%eax
081db048 +0x04e:  jmp    081db308 <+0x30e>
081db04d +0x053:  mov    -0x2c(%ebp),%eax
081db050 +0x056:  mov    0x4(%eax),%eax
081db053 +0x059:  test   %eax,%eax
081db055 +0x05b:  jns    081db082 <+0x88>
081db057 +0x05d:  mov    -0x2c(%ebp),%eax
081db05a +0x060:  mov    0x4(%eax),%eax
081db05d +0x063:  movl   $0x0,0xc(%esp)
081db065 +0x06b:  mov    %eax,0x8(%esp)
081db069 +0x06f:  movl   $&_ZZN28Dispatcher_FatigueAttendance7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081db071 +0x077:  movl   $0x49c5,(%esp)
081db078 +0x07e:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081db07d +0x083:  jmp    081db308 <+0x30e>
081db082 +0x088:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081db087 +0x08d:  mov    %eax,(%esp)
081db08a +0x090:  call   08110b62 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x74>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x74
081db08f +0x095:  mov    %eax,(%esp)
081db092 +0x098:  call   0810c6ca <_ZN13EventClassify15CEventScriptMng18get_today_time_dayEv>  ; EventClassify::CEventScriptMng::get_today_time_day()
081db097 +0x09d:  mov    %al,-0x21(%ebp)
081db09a +0x0a0:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081db09f +0x0a5:  mov    %eax,(%esp)
081db0a2 +0x0a8:  call   08110b62 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x74>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x74
081db0a7 +0x0ad:  movl   $0x56,0x4(%esp)
081db0af +0x0b5:  mov    %eax,(%esp)
081db0b2 +0x0b8:  call   0810c7b8 <_ZN13EventClassify15CEventScriptMng15get_record_typeEi>  ; EventClassify::CEventScriptMng::get_record_type(int)
081db0b7 +0x0bd:  mov    %eax,-0x20(%ebp)
081db0ba +0x0c0:  lea    -0x34(%ebp),%eax
081db0bd +0x0c3:  mov    %eax,(%esp)
081db0c0 +0x0c6:  call   081b5c8e <_GLOBAL__I__ZN23NeedMaterialDataManagerC2Ev+0x31>  ; global constructors keyed to NeedMaterialDataManager::NeedMaterialDataManager()+0x31
081db0c5 +0x0cb:  lea    -0x34(%ebp),%eax
081db0c8 +0x0ce:  mov    %eax,0x8(%esp)
081db0cc +0x0d2:  mov    -0x20(%ebp),%eax
081db0cf +0x0d5:  mov    %eax,0x4(%esp)
081db0d3 +0x0d9:  mov    0xc(%ebp),%eax
081db0d6 +0x0dc:  mov    %eax,(%esp)
081db0d9 +0x0df:  call   0868d50c <_ZN5CUser24get_ingame_event_historyEiRSt4pairIiiE>  ; CUser::get_ingame_event_history(int, std::pair<int, int>&)
081db0de +0x0e4:  mov    -0x34(%ebp),%eax
081db0e1 +0x0e7:  mov    %eax,-0x38(%ebp)
081db0e4 +0x0ea:  movzbl -0x21(%ebp),%eax
081db0e8 +0x0ee:  lea    -0x1(%eax),%edx
081db0eb +0x0f1:  mov    -0x38(%ebp),%eax
081db0ee +0x0f4:  mov    %edx,0x4(%esp)
081db0f2 +0x0f8:  mov    %eax,(%esp)
081db0f5 +0x0fb:  call   0889232e <_Z13isSetBit_Uintji>  ; isSetBit_Uint(unsigned int, int)
081db0fa +0x100:  test   %al,%al
081db0fc +0x102:  je     081db112 <+0x118>
081db0fe +0x104:  mov    -0x2c(%ebp),%eax
081db101 +0x107:  movl   $0x12,0x4(%eax)
081db108 +0x10e:  mov    $0x0,%eax
081db10d +0x113:  jmp    081db308 <+0x30e>
081db112 +0x118:  movzbl -0x21(%ebp),%eax
081db116 +0x11c:  mov    %eax,0x4(%esp)
081db11a +0x120:  mov    0xc(%ebp),%eax
081db11d +0x123:  mov    %eax,(%esp)
081db120 +0x126:  call   0868d3fe <_ZN5CUser24get_server_fatigue_countEh>  ; CUser::get_server_fatigue_count(unsigned char)
081db125 +0x12b:  movswl %ax,%ebx
081db128 +0x12e:  movzbl -0x21(%ebp),%eax
081db12c +0x132:  mov    %eax,0x4(%esp)
081db130 +0x136:  mov    0xc(%ebp),%eax
081db133 +0x139:  mov    %eax,(%esp)
081db136 +0x13c:  call   0868d4c4 <_ZN5CUser20get_fatigue_count_dbEi>  ; CUser::get_fatigue_count_db(int)
081db13b +0x141:  lea    (%ebx,%eax,1),%eax
081db13e +0x144:  mov    %eax,-0x1c(%ebp)
081db141 +0x147:  movl   $0x0,-0x18(%ebp)
081db148 +0x14e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081db14d +0x153:  mov    %eax,(%esp)
081db150 +0x156:  call   08110b62 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x74>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x74
081db155 +0x15b:  movl   $0x56,0x4(%esp)
081db15d +0x163:  mov    %eax,(%esp)
081db160 +0x166:  call   0810b96a <_ZN13EventClassify15CEventScriptMng16get_event_entityEi>  ; EventClassify::CEventScriptMng::get_event_entity(int)
081db165 +0x16b:  mov    %eax,-0x18(%ebp)
081db168 +0x16e:  cmpl   $0x0,-0x18(%ebp)
081db16c +0x172:  jne    081db178 <+0x17e>
081db16e +0x174:  mov    $0x0,%eax
081db173 +0x179:  jmp    081db308 <+0x30e>
081db178 +0x17e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081db17d +0x183:  mov    %eax,(%esp)
081db180 +0x186:  call   08110b62 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x74>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x74
081db185 +0x18b:  mov    %eax,(%esp)
081db188 +0x18e:  call   0810c6d6 <_ZN13EventClassify15CEventScriptMng14get_today_timeEv>  ; EventClassify::CEventScriptMng::get_today_time()
081db18d +0x193:  mov    %eax,-0x14(%ebp)
081db190 +0x196:  mov    -0x18(%ebp),%eax
081db193 +0x199:  mov    %eax,(%esp)
081db196 +0x19c:  call   0810b094 <_ZN13EventClassify12CEventEntity20get_event_start_timeEv>  ; EventClassify::CEventEntity::get_event_start_time()
081db19b +0x1a1:  cmp    -0x14(%ebp),%eax
081db19e +0x1a4:  jg     081db1b0 <+0x1b6>
081db1a0 +0x1a6:  mov    -0x18(%ebp),%eax
081db1a3 +0x1a9:  mov    %eax,(%esp)
081db1a6 +0x1ac:  call   0810b0a0 <_ZN13EventClassify12CEventEntity18get_event_end_timeEv>  ; EventClassify::CEventEntity::get_event_end_time()
081db1ab +0x1b1:  cmp    -0x14(%ebp),%eax
081db1ae +0x1b4:  jge    081db1b7 <+0x1bd>
081db1b0 +0x1b6:  mov    $0x1,%eax
081db1b5 +0x1bb:  jmp    081db1bc <+0x1c2>
081db1b7 +0x1bd:  mov    $0x0,%eax
081db1bc +0x1c2:  test   %al,%al
081db1be +0x1c4:  je     081db1d4 <+0x1da>
081db1c0 +0x1c6:  mov    -0x2c(%ebp),%eax
081db1c3 +0x1c9:  movl   $0x7,0x4(%eax)
081db1ca +0x1d0:  mov    $0x0,%eax
081db1cf +0x1d5:  jmp    081db308 <+0x30e>
081db1d4 +0x1da:  mov    -0x18(%ebp),%eax
081db1d7 +0x1dd:  mov    %eax,(%esp)
081db1da +0x1e0:  call   0810e7e8 <_ZN13EventClassify11CAttendance21get_fatigue_conditionEv>  ; EventClassify::CAttendance::get_fatigue_condition()
081db1df +0x1e5:  cmp    -0x1c(%ebp),%eax
081db1e2 +0x1e8:  setg   %al
081db1e5 +0x1eb:  test   %al,%al
081db1e7 +0x1ed:  je     081db1fd <+0x203>
081db1e9 +0x1ef:  mov    -0x2c(%ebp),%eax
081db1ec +0x1f2:  movl   $0x16,0x4(%eax)
081db1f3 +0x1f9:  mov    $0x0,%eax
081db1f8 +0x1fe:  jmp    081db308 <+0x30e>
081db1fd +0x203:  movzbl -0x21(%ebp),%eax
081db201 +0x207:  sub    $0x1,%eax
081db204 +0x20a:  mov    %eax,0x8(%esp)
081db208 +0x20e:  movl   $0x1,0x4(%esp)
081db210 +0x216:  lea    -0x38(%ebp),%eax
081db213 +0x219:  mov    %eax,(%esp)
081db216 +0x21c:  call   088922d7 <_Z11setBit_UintRjbi>  ; setBit_Uint(unsigned int&, bool, int)
081db21b +0x221:  mov    -0x38(%ebp),%eax
081db21e +0x224:  movl   $0x0,0xc(%esp)
081db226 +0x22c:  mov    %eax,0x8(%esp)
081db22a +0x230:  mov    -0x20(%ebp),%eax
081db22d +0x233:  mov    %eax,0x4(%esp)
081db231 +0x237:  mov    0xc(%ebp),%eax
081db234 +0x23a:  mov    %eax,(%esp)
081db237 +0x23d:  call   0868d580 <_ZN5CUser24set_ingame_event_historyEiii>  ; CUser::set_ingame_event_history(int, int, int)
081db23c +0x242:  mov    -0x38(%ebp),%eax
081db23f +0x245:  mov    %eax,%edx
081db241 +0x247:  mov    -0x2c(%ebp),%eax
081db244 +0x24a:  mov    %edx,0xc(%eax)
081db247 +0x24d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081db24c +0x252:  mov    %eax,(%esp)
081db24f +0x255:  call   08110b62 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x74>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x74
081db254 +0x25a:  mov    %eax,(%esp)
081db257 +0x25d:  call   0810c6d6 <_ZN13EventClassify15CEventScriptMng14get_today_timeEv>  ; EventClassify::CEventScriptMng::get_today_time()
081db25c +0x262:  mov    -0x2c(%ebp),%edx
081db25f +0x265:  mov    %eax,0x10(%edx)
081db262 +0x268:  mov    -0x2c(%ebp),%eax
081db265 +0x26b:  mov    0x10(%eax),%esi
081db268 +0x26e:  mov    -0x18(%ebp),%eax
081db26b +0x271:  mov    %eax,(%esp)
081db26e +0x274:  call   0810b094 <_ZN13EventClassify12CEventEntity20get_event_start_timeEv>  ; EventClassify::CEventEntity::get_event_start_time()
081db273 +0x279:  mov    %eax,%ebx
081db275 +0x27b:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081db27a +0x280:  mov    %eax,(%esp)
081db27d +0x283:  call   08110b62 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x74>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x74
081db282 +0x288:  mov    %esi,0x8(%esp)
081db286 +0x28c:  mov    %ebx,0x4(%esp)
081db28a +0x290:  mov    %eax,(%esp)
081db28d +0x293:  call   0810c974 <_ZN13EventClassify15CEventScriptMng12get_pass_dayEii>  ; EventClassify::CEventScriptMng::get_pass_day(int, int)
081db292 +0x298:  mov    %eax,-0x10(%ebp)
081db295 +0x29b:  mov    -0x10(%ebp),%eax
081db298 +0x29e:  mov    %eax,0x8(%esp)
081db29c +0x2a2:  mov    0xc(%ebp),%eax
081db29f +0x2a5:  mov    %eax,0x4(%esp)
081db2a3 +0x2a9:  mov    -0x18(%ebp),%eax
081db2a6 +0x2ac:  mov    %eax,(%esp)
081db2a9 +0x2af:  call   0810e878 <_ZN13EventClassify11CAttendance23send_attend_reward_itemEP5CUseri>  ; EventClassify::CAttendance::send_attend_reward_item(CUser*, int)
081db2ae +0x2b4:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081db2b3 +0x2b9:  mov    %eax,(%esp)
081db2b6 +0x2bc:  call   08110b62 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x74>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x74
081db2bb +0x2c1:  mov    0xc(%ebp),%edx
081db2be +0x2c4:  mov    %edx,0x4(%esp)
081db2c2 +0x2c8:  mov    %eax,(%esp)
081db2c5 +0x2cb:  call   0810c82e <_ZN13EventClassify15CEventScriptMng29process_update_ingame_historyEP5CUser>  ; EventClassify::CEventScriptMng::process_update_ingame_history(CUser*)
081db2ca +0x2d0:  mov    0xc(%ebp),%eax
081db2cd +0x2d3:  mov    %eax,(%esp)
081db2d0 +0x2d6:  call   0868d768 <_ZN5CUser33reset_ingame_event_history_updateEv>  ; CUser::reset_ingame_event_history_update()
081db2d5 +0x2db:  mov    -0x18(%ebp),%eax
081db2d8 +0x2de:  mov    %eax,(%esp)
081db2db +0x2e1:  call   0810e7f6 <_ZN13EventClassify11CAttendance23get_final_day_conditionEv>  ; EventClassify::CAttendance::get_final_day_condition()
081db2e0 +0x2e6:  mov    %eax,-0xc(%ebp)
081db2e3 +0x2e9:  mov    -0x38(%ebp),%eax
081db2e6 +0x2ec:  mov    -0xc(%ebp),%edx
081db2e9 +0x2ef:  mov    %edx,0xc(%esp)
081db2ed +0x2f3:  mov    %eax,0x8(%esp)
081db2f1 +0x2f7:  mov    0xc(%ebp),%eax
081db2f4 +0x2fa:  mov    %eax,0x4(%esp)
081db2f8 +0x2fe:  mov    -0x18(%ebp),%eax
081db2fb +0x301:  mov    %eax,(%esp)
081db2fe +0x304:  call   0810e9c0 <_ZN13EventClassify11CAttendance28send_attend_final_rward_itemEP5CUserii>  ; EventClassify::CAttendance::send_attend_final_rward_item(CUser*, int, int)
081db303 +0x309:  mov    $0x0,%eax
081db308 +0x30e:  add    $0x40,%esp
081db30b +0x311:  pop    %ebx
081db30c +0x312:  pop    %esi
081db30d +0x313:  pop    %ebp
081db30e +0x314:  ret
081db30f +0x315:  nop
```

## 反编译 C

```c
// Dispatcher_FatigueAttendance::process @ 0x81daffa

/* Dispatcher_FatigueAttendance::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_FatigueAttendance::process
          (Dispatcher_FatigueAttendance *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  CDataManager *pCVar5;
  CEventScriptMng *pCVar6;
  int iVar7;
  int iVar8;
  uint local_3c;
  uint local_38 [2];
  ParamBase *local_30;
  MSG_BASE *local_2c;
  byte local_25;
  int local_24;
  int local_20;
  CEventEntity *local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_30 = param_3;
  local_2c = param_2;
  *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_2 + 0xd);
  uVar4 = check_error((CUser *)this,(MSG_BASE *)param_1);
  *(undefined4 *)(local_30 + 4) = uVar4;
  if (0 < *(int *)(local_30 + 4)) {
    return 0;
  }
  if (*(int *)(local_30 + 4) < 0) {
    uVar4 = LineFunc(0x49c5,
                     "virtual int Dispatcher_FatigueAttendance::process(CUser*, MSG_BASE&, ParamBase&)"
                     ,*(int *)(local_30 + 4),0);
    return uVar4;
  }
  pCVar5 = (CDataManager *)G_CDataManager();
  pCVar6 = (CEventScriptMng *)CDataManager::get_event_script_mng(pCVar5);
  local_25 = EventClassify::CEventScriptMng::get_today_time_day(pCVar6);
  pCVar5 = (CDataManager *)G_CDataManager();
  iVar7 = CDataManager::get_event_script_mng(pCVar5);
  local_24 = EventClassify::CEventScriptMng::get_record_type(iVar7);
  std::pair<int,int>::pair((pair<int,int> *)local_38);
  CUser::get_ingame_event_history(param_1,local_24,(pair *)local_38);
  local_3c = local_38[0];
  cVar2 = isSetBit_Uint(local_38[0],local_25 - 1);
  if (cVar2 != '\0') {
    *(undefined4 *)(local_30 + 4) = 0x12;
    return 0;
  }
  sVar3 = CUser::get_server_fatigue_count((uchar)param_1);
  local_20 = CUser::get_fatigue_count_db(param_1,(uint)local_25);
  local_20 = sVar3 + local_20;
  local_1c = (CEventEntity *)0x0;
  pCVar5 = (CDataManager *)G_CDataManager();
  iVar7 = CDataManager::get_event_script_mng(pCVar5);
  local_1c = (CEventEntity *)EventClassify::CEventScriptMng::get_event_entity(iVar7);
  if (local_1c != (CEventEntity *)0x0) {
    pCVar5 = (CDataManager *)G_CDataManager();
    pCVar6 = (CEventScriptMng *)CDataManager::get_event_script_mng(pCVar5);
    local_18 = EventClassify::CEventScriptMng::get_today_time(pCVar6);
    iVar7 = EventClassify::CEventEntity::get_event_start_time(local_1c);
    if ((local_18 < iVar7) ||
       (iVar7 = EventClassify::CEventEntity::get_event_end_time(local_1c), iVar7 < local_18)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      *(undefined4 *)(local_30 + 4) = 7;
    }
    else {
      iVar7 = EventClassify::CAttendance::get_fatigue_condition((CAttendance *)local_1c);
      if (local_20 < iVar7) {
        *(undefined4 *)(local_30 + 4) = 0x16;
      }
      else {
        setBit_Uint(&local_3c,true,local_25 - 1);
        CUser::set_ingame_event_history(param_1,local_24,local_3c,0);
        *(uint *)(local_30 + 0xc) = local_3c;
        pCVar5 = (CDataManager *)G_CDataManager();
        pCVar6 = (CEventScriptMng *)CDataManager::get_event_script_mng(pCVar5);
        uVar4 = EventClassify::CEventScriptMng::get_today_time(pCVar6);
        *(undefined4 *)(local_30 + 0x10) = uVar4;
        iVar7 = *(int *)(local_30 + 0x10);
        iVar8 = EventClassify::CEventEntity::get_event_start_time(local_1c);
        pCVar5 = (CDataManager *)G_CDataManager();
        pCVar6 = (CEventScriptMng *)CDataManager::get_event_script_mng(pCVar5);
        local_14 = EventClassify::CEventScriptMng::get_pass_day(pCVar6,iVar8,iVar7);
        EventClassify::CAttendance::send_attend_reward_item
                  ((CAttendance *)local_1c,param_1,local_14);
        pCVar5 = (CDataManager *)G_CDataManager();
        pCVar6 = (CEventScriptMng *)CDataManager::get_event_script_mng(pCVar5);
        EventClassify::CEventScriptMng::process_update_ingame_history(pCVar6,param_1);
        CUser::reset_ingame_event_history_update(param_1);
        local_10 = EventClassify::CAttendance::get_final_day_condition((CAttendance *)local_1c);
        EventClassify::CAttendance::send_attend_final_rward_item
                  ((CAttendance *)local_1c,param_1,local_3c,local_10);
      }
    }
    return 0;
  }
  return 0;
}
```
