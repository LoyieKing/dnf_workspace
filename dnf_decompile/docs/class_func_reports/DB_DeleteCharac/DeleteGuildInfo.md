# DeleteGuildInfo

`_ZN15DB_DeleteCharac15DeleteGuildInfoEP17SIG_DELETE_CHARAC`

`DB_DeleteCharac::DeleteGuildInfo(SIG_DELETE_CHARAC*)`

| 类 | 地址 |
|---|---|
| `DB_DeleteCharac` | `0x08402f4c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08402f4c  _ZN15DB_DeleteCharac15DeleteGuildInfoEP17SIG_DELETE_CHARAC
#           DB_DeleteCharac::DeleteGuildInfo(SIG_DELETE_CHARAC*)
# range [0x08402f4c, 0x084032a9]
08402f4c +0x000:  push   %ebp
08402f4d +0x001:  mov    %esp,%ebp
08402f4f +0x003:  sub    $0x38,%esp
08402f52 +0x006:  mov    0xc(%ebp),%eax
08402f55 +0x009:  mov    0xc(%eax),%eax
08402f58 +0x00c:  test   %eax,%eax
08402f5a +0x00e:  jne    0840306f <+0x123>
08402f60 +0x014:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08402f65 +0x019:  movl   $0x0,0x8(%esp)
08402f6d +0x021:  movl   $0x2,0x4(%esp)
08402f75 +0x029:  mov    %eax,(%esp)
08402f78 +0x02c:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08402f7d +0x031:  mov    %eax,-0xc(%ebp)
08402f80 +0x034:  mov    0xc(%ebp),%eax
08402f83 +0x037:  mov    0x4(%eax),%eax
08402f86 +0x03a:  mov    %eax,0x8(%esp)
08402f8a +0x03e:  movl   $"seLect guild_id from charac_info where charac_no = %d",0x4(%esp)
08402f92 +0x046:  mov    -0xc(%ebp),%eax
08402f95 +0x049:  mov    %eax,(%esp)
08402f98 +0x04c:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08402f9d +0x051:  movl   $0x1,0x4(%esp)
08402fa5 +0x059:  mov    -0xc(%ebp),%eax
08402fa8 +0x05c:  mov    %eax,(%esp)
08402fab +0x05f:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08402fb0 +0x064:  xor    $0x1,%eax
08402fb3 +0x067:  test   %al,%al
08402fb5 +0x069:  je     08402fcb <+0x7f>
08402fb7 +0x06b:  mov    0xc(%ebp),%eax
08402fba +0x06e:  movl   $0x1,0x8(%eax)
08402fc1 +0x075:  mov    $0x0,%eax
08402fc6 +0x07a:  jmp    084032a8 <+0x35c>
08402fcb +0x07f:  mov    -0xc(%ebp),%eax
08402fce +0x082:  mov    %eax,(%esp)
08402fd1 +0x085:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08402fd6 +0x08a:  xor    $0x1,%eax
08402fd9 +0x08d:  test   %al,%al
08402fdb +0x08f:  jne    08403001 <+0xb5>
08402fdd +0x091:  mov    0xc(%ebp),%eax
08402fe0 +0x094:  add    $0xc,%eax
08402fe3 +0x097:  mov    %eax,0x8(%esp)
08402fe7 +0x09b:  movl   $0x0,0x4(%esp)
08402fef +0x0a3:  mov    -0xc(%ebp),%eax
08402ff2 +0x0a6:  mov    %eax,(%esp)
08402ff5 +0x0a9:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
08402ffa +0x0ae:  xor    $0x1,%eax
08402ffd +0x0b1:  test   %al,%al
08402fff +0x0b3:  je     08403008 <+0xbc>
08403001 +0x0b5:  mov    $0x1,%eax
08403006 +0x0ba:  jmp    0840300d <+0xc1>
08403008 +0x0bc:  mov    $0x0,%eax
0840300d +0x0c1:  test   %al,%al
0840300f +0x0c3:  je     08403025 <+0xd9>
08403011 +0x0c5:  mov    0xc(%ebp),%eax
08403014 +0x0c8:  movl   $0x1,0x8(%eax)
0840301b +0x0cf:  mov    $0x0,%eax
08403020 +0x0d4:  jmp    084032a8 <+0x35c>
08403025 +0x0d9:  mov    0xc(%ebp),%eax
08403028 +0x0dc:  mov    0xc(%eax),%eax
0840302b +0x0df:  test   %eax,%eax
0840302d +0x0e1:  jne    0840306f <+0x123>
0840302f +0x0e3:  mov    0xc(%ebp),%eax
08403032 +0x0e6:  mov    0x4(%eax),%eax
08403035 +0x0e9:  mov    %eax,0x14(%esp)
08403039 +0x0ed:  movl   $"[Guild Del Error] guild_id=0, charac_no:%d",0x10(%esp)
08403041 +0x0f5:  movl   $0x1312,0xc(%esp)
08403049 +0x0fd:  movl   $&_ZZN15DB_DeleteCharac15DeleteGuildInfoEP17SIG_DELETE_CHARACE19__PRETTY_FUNCTION__,0x8(%esp)
08403051 +0x105:  movl   $"DBThread.cpp",0x4(%esp)
08403059 +0x10d:  movl   $0x1,(%esp)
08403060 +0x114:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08403065 +0x119:  mov    $0x1,%eax
0840306a +0x11e:  jmp    084032a8 <+0x35c>
0840306f +0x123:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08403074 +0x128:  movl   $0x0,0x8(%esp)
0840307c +0x130:  movl   $0x8,0x4(%esp)
08403084 +0x138:  mov    %eax,(%esp)
08403087 +0x13b:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0840308c +0x140:  mov    %eax,-0x10(%ebp)
0840308f +0x143:  mov    0xc(%ebp),%eax
08403092 +0x146:  mov    0xc(%eax),%eax
08403095 +0x149:  mov    %eax,0x8(%esp)
08403099 +0x14d:  movl   $"seLect master_no from guild_info where guild_id = %d",0x4(%esp)
084030a1 +0x155:  mov    -0x10(%ebp),%eax
084030a4 +0x158:  mov    %eax,(%esp)
084030a7 +0x15b:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084030ac +0x160:  movl   $0x1,0x4(%esp)
084030b4 +0x168:  mov    -0x10(%ebp),%eax
084030b7 +0x16b:  mov    %eax,(%esp)
084030ba +0x16e:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084030bf +0x173:  xor    $0x1,%eax
084030c2 +0x176:  test   %al,%al
084030c4 +0x178:  je     084030da <+0x18e>
084030c6 +0x17a:  mov    0xc(%ebp),%eax
084030c9 +0x17d:  movl   $0x1,0x8(%eax)
084030d0 +0x184:  mov    $0x0,%eax
084030d5 +0x189:  jmp    084032a8 <+0x35c>
084030da +0x18e:  movl   $0x0,-0x14(%ebp)
084030e1 +0x195:  mov    -0x10(%ebp),%eax
084030e4 +0x198:  mov    %eax,(%esp)
084030e7 +0x19b:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
084030ec +0x1a0:  xor    $0x1,%eax
084030ef +0x1a3:  test   %al,%al
084030f1 +0x1a5:  jne    08403114 <+0x1c8>
084030f3 +0x1a7:  lea    -0x14(%ebp),%eax
084030f6 +0x1aa:  mov    %eax,0x8(%esp)
084030fa +0x1ae:  movl   $0x0,0x4(%esp)
08403102 +0x1b6:  mov    -0x10(%ebp),%eax
08403105 +0x1b9:  mov    %eax,(%esp)
08403108 +0x1bc:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
0840310d +0x1c1:  xor    $0x1,%eax
08403110 +0x1c4:  test   %al,%al
08403112 +0x1c6:  je     0840311b <+0x1cf>
08403114 +0x1c8:  mov    $0x1,%eax
08403119 +0x1cd:  jmp    08403120 <+0x1d4>
0840311b +0x1cf:  mov    $0x0,%eax
08403120 +0x1d4:  test   %al,%al
08403122 +0x1d6:  je     08403138 <+0x1ec>
08403124 +0x1d8:  mov    0xc(%ebp),%eax
08403127 +0x1db:  movl   $0x1,0x8(%eax)
0840312e +0x1e2:  mov    $0x0,%eax
08403133 +0x1e7:  jmp    084032a8 <+0x35c>
08403138 +0x1ec:  mov    0xc(%ebp),%eax
0840313b +0x1ef:  mov    0x4(%eax),%edx
0840313e +0x1f2:  mov    -0x14(%ebp),%eax
08403141 +0x1f5:  cmp    %eax,%edx
08403143 +0x1f7:  jne    08403159 <+0x20d>
08403145 +0x1f9:  mov    0xc(%ebp),%eax
08403148 +0x1fc:  movl   $0x2,0x8(%eax)
0840314f +0x203:  mov    $0x0,%eax
08403154 +0x208:  jmp    084032a8 <+0x35c>
08403159 +0x20d:  mov    0xc(%ebp),%eax
0840315c +0x210:  mov    0x4(%eax),%edx
0840315f +0x213:  mov    0xc(%ebp),%eax
08403162 +0x216:  mov    0xc(%eax),%eax
08403165 +0x219:  mov    %edx,0xc(%esp)
08403169 +0x21d:  mov    %eax,0x8(%esp)
0840316d +0x221:  movl   $"upDate guild_member set member_flag = 2, secede_time = now(), secede_type = 2 where guild_id = %d and charac_no = %d",0x4(%esp)
08403175 +0x229:  mov    -0x10(%ebp),%eax
08403178 +0x22c:  mov    %eax,(%esp)
0840317b +0x22f:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08403180 +0x234:  movl   $0x1,0x4(%esp)
08403188 +0x23c:  mov    -0x10(%ebp),%eax
0840318b +0x23f:  mov    %eax,(%esp)
0840318e +0x242:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08403193 +0x247:  xor    $0x1,%eax
08403196 +0x24a:  test   %al,%al
08403198 +0x24c:  je     084031ae <+0x262>
0840319a +0x24e:  mov    0xc(%ebp),%eax
0840319d +0x251:  movl   $0x1,0x8(%eax)
084031a4 +0x258:  mov    $0x0,%eax
084031a9 +0x25d:  jmp    084032a8 <+0x35c>
084031ae +0x262:  mov    0xc(%ebp),%eax
084031b1 +0x265:  mov    0xc(%eax),%eax
084031b4 +0x268:  mov    %eax,0x8(%esp)
084031b8 +0x26c:  movl   $"seLect count(*) from guild_member where guild_id = %d and member_flag = 1",0x4(%esp)
084031c0 +0x274:  mov    -0x10(%ebp),%eax
084031c3 +0x277:  mov    %eax,(%esp)
084031c6 +0x27a:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084031cb +0x27f:  movl   $0x1,0x4(%esp)
084031d3 +0x287:  mov    -0x10(%ebp),%eax
084031d6 +0x28a:  mov    %eax,(%esp)
084031d9 +0x28d:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084031de +0x292:  xor    $0x1,%eax
084031e1 +0x295:  test   %al,%al
084031e3 +0x297:  je     084031f9 <+0x2ad>
084031e5 +0x299:  mov    0xc(%ebp),%eax
084031e8 +0x29c:  movl   $0x1,0x8(%eax)
084031ef +0x2a3:  mov    $0x0,%eax
084031f4 +0x2a8:  jmp    084032a8 <+0x35c>
084031f9 +0x2ad:  mov    -0x10(%ebp),%eax
084031fc +0x2b0:  mov    %eax,(%esp)
084031ff +0x2b3:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08403204 +0x2b8:  xor    $0x1,%eax
08403207 +0x2bb:  test   %al,%al
08403209 +0x2bd:  jne    0840322c <+0x2e0>
0840320b +0x2bf:  lea    -0x18(%ebp),%eax
0840320e +0x2c2:  mov    %eax,0x8(%esp)
08403212 +0x2c6:  movl   $0x0,0x4(%esp)
0840321a +0x2ce:  mov    -0x10(%ebp),%eax
0840321d +0x2d1:  mov    %eax,(%esp)
08403220 +0x2d4:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08403225 +0x2d9:  xor    $0x1,%eax
08403228 +0x2dc:  test   %al,%al
0840322a +0x2de:  je     08403233 <+0x2e7>
0840322c +0x2e0:  mov    $0x1,%eax
08403231 +0x2e5:  jmp    08403238 <+0x2ec>
08403233 +0x2e7:  mov    $0x0,%eax
08403238 +0x2ec:  test   %al,%al
0840323a +0x2ee:  je     0840324d <+0x301>
0840323c +0x2f0:  mov    0xc(%ebp),%eax
0840323f +0x2f3:  movl   $0x1,0x8(%eax)
08403246 +0x2fa:  mov    $0x0,%eax
0840324b +0x2ff:  jmp    084032a8 <+0x35c>
0840324d +0x301:  mov    -0x18(%ebp),%eax
08403250 +0x304:  test   %eax,%eax
08403252 +0x306:  je     084032a3 <+0x357>
08403254 +0x308:  mov    0xc(%ebp),%eax
08403257 +0x30b:  mov    0xc(%eax),%edx
0840325a +0x30e:  mov    -0x18(%ebp),%eax
0840325d +0x311:  mov    %edx,0xc(%esp)
08403261 +0x315:  mov    %eax,0x8(%esp)
08403265 +0x319:  movl   $"upDate guild_info set member_count = %d where guild_id = %d",0x4(%esp)
0840326d +0x321:  mov    -0x10(%ebp),%eax
08403270 +0x324:  mov    %eax,(%esp)
08403273 +0x327:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08403278 +0x32c:  movl   $0x1,0x4(%esp)
08403280 +0x334:  mov    -0x10(%ebp),%eax
08403283 +0x337:  mov    %eax,(%esp)
08403286 +0x33a:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0840328b +0x33f:  xor    $0x1,%eax
0840328e +0x342:  test   %al,%al
08403290 +0x344:  je     084032a3 <+0x357>
08403292 +0x346:  mov    0xc(%ebp),%eax
08403295 +0x349:  movl   $0x1,0x8(%eax)
0840329c +0x350:  mov    $0x0,%eax
084032a1 +0x355:  jmp    084032a8 <+0x35c>
084032a3 +0x357:  mov    $0x1,%eax
084032a8 +0x35c:  leave
084032a9 +0x35d:  ret
```

## 反编译 C

```c
// DB_DeleteCharac::DeleteGuildInfo @ 0x8402f4c

/* DB_DeleteCharac::DeleteGuildInfo(SIG_DELETE_CHARAC*) */

undefined4 __thiscall
DB_DeleteCharac::DeleteGuildInfo(DB_DeleteCharac *this,SIG_DELETE_CHARAC *param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int local_1c;
  uint local_18;
  MySQL *local_14;
  MySQL *local_10;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
    MySQL::set_query(local_10,"seLect guild_id from charac_info where charac_no = %d",
                     *(undefined4 *)(param_1 + 4));
    cVar2 = MySQL::exec(local_10,true);
    if (cVar2 != '\x01') {
      *(undefined4 *)(param_1 + 8) = 1;
      return 0;
    }
    cVar2 = MySQL::fetch(local_10);
    if ((cVar2 == '\x01') &&
       (cVar2 = MySQL::get_uint(local_10,0,(uint *)(param_1 + 0xc)), cVar2 == '\x01')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      *(undefined4 *)(param_1 + 8) = 1;
      return 0;
    }
    if (*(int *)(param_1 + 0xc) == 0) {
      LogManager::logFormat
                (1,"DBThread.cpp","bool DB_DeleteCharac::DeleteGuildInfo(SIG_DELETE_CHARAC*)",0x1312
                 ,"[Guild Del Error] guild_id=0, charac_no:%d",*(undefined4 *)(param_1 + 4));
      return 1;
    }
  }
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,8,0);
  MySQL::set_query(local_14,"seLect master_no from guild_info where guild_id = %d",
                   *(undefined4 *)(param_1 + 0xc));
  cVar2 = MySQL::exec(local_14,true);
  if (cVar2 != '\x01') {
    *(undefined4 *)(param_1 + 8) = 1;
    return 0;
  }
  local_18 = 0;
  cVar2 = MySQL::fetch(local_14);
  if ((cVar2 == '\x01') && (cVar2 = MySQL::get_uint(local_14,0,&local_18), cVar2 == '\x01')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    if (*(uint *)(param_1 + 4) == local_18) {
      *(undefined4 *)(param_1 + 8) = 2;
      return 0;
    }
    uVar3 = *(undefined4 *)(param_1 + 4);
    MySQL::set_query(local_14,
                     "upDate guild_member set member_flag = 2, secede_time = now(), secede_type = 2 where guild_id = %d and charac_no = %d"
                     ,*(undefined4 *)(param_1 + 0xc),uVar3);
    cVar2 = MySQL::exec(local_14,true);
    if (cVar2 == '\x01') {
      MySQL::set_query(local_14,
                       "seLect count(*) from guild_member where guild_id = %d and member_flag = 1",
                       *(undefined4 *)(param_1 + 0xc),uVar3);
      cVar2 = MySQL::exec(local_14,true);
      if (cVar2 != '\x01') {
        *(undefined4 *)(param_1 + 8) = 1;
        return 0;
      }
      cVar2 = MySQL::fetch(local_14);
      if ((cVar2 == '\x01') && (cVar2 = MySQL::get_int(local_14,0,&local_1c), cVar2 == '\x01')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        *(undefined4 *)(param_1 + 8) = 1;
        uVar3 = 0;
      }
      else {
        if (local_1c != 0) {
          MySQL::set_query(local_14,"upDate guild_info set member_count = %d where guild_id = %d",
                           local_1c,*(undefined4 *)(param_1 + 0xc));
          cVar2 = MySQL::exec(local_14,true);
          if (cVar2 != '\x01') {
            *(undefined4 *)(param_1 + 8) = 1;
            return 0;
          }
        }
        uVar3 = 1;
      }
      return uVar3;
    }
    *(undefined4 *)(param_1 + 8) = 1;
    return 0;
  }
  *(undefined4 *)(param_1 + 8) = 1;
  return 0;
}
```
