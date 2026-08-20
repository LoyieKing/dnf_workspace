# LoadVillageAttackInfo

`_ZN10DB_LoadEtc21LoadVillageAttackInfoEP12SIG_LOAD_ETC`

`DB_LoadEtc::LoadVillageAttackInfo(SIG_LOAD_ETC*)`

| 类 | 地址 |
|---|---|
| `DB_LoadEtc` | `0x0843f038` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843f038  _ZN10DB_LoadEtc21LoadVillageAttackInfoEP12SIG_LOAD_ETC
#           DB_LoadEtc::LoadVillageAttackInfo(SIG_LOAD_ETC*)
# range [0x0843f038, 0x0843f231]
0843f038 +0x000:  push   %ebp
0843f039 +0x001:  mov    %esp,%ebp
0843f03b +0x003:  sub    $0x58,%esp
0843f03e +0x006:  mov    0xc(%ebp),%eax
0843f041 +0x009:  mov    0x4(%eax),%eax
0843f044 +0x00c:  test   %eax,%eax
0843f046 +0x00e:  jne    0843f052 <+0x1a>
0843f048 +0x010:  mov    $0x0,%eax
0843f04d +0x015:  jmp    0843f22f <+0x1f7>
0843f052 +0x01a:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0843f059 +0x021:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0843f05e +0x026:  mov    %eax,-0x20(%ebp)
0843f061 +0x029:  lea    -0x20(%ebp),%eax
0843f064 +0x02c:  mov    %eax,(%esp)
0843f067 +0x02f:  call   0807e330 <_init+0xc28>
0843f06c +0x034:  mov    %eax,-0x1c(%ebp)
0843f06f +0x037:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0843f074 +0x03c:  mov    0x37c(%eax),%eax
0843f07a +0x042:  mov    %eax,-0x14(%ebp)
0843f07d +0x045:  mov    -0x1c(%ebp),%eax
0843f080 +0x048:  mov    0x8(%eax),%eax
0843f083 +0x04b:  cmp    -0x14(%ebp),%eax
0843f086 +0x04e:  jge    0843f0a8 <+0x70>
0843f088 +0x050:  movl   $0x0,-0x1c(%ebp)
0843f08f +0x057:  mov    -0x20(%ebp),%eax
0843f092 +0x05a:  sub    $&_ZL14gUnicodeBuffer+0xac54,%eax
0843f097 +0x05f:  mov    %eax,-0x20(%ebp)
0843f09a +0x062:  lea    -0x20(%ebp),%eax
0843f09d +0x065:  mov    %eax,(%esp)
0843f0a0 +0x068:  call   0807e330 <_init+0xc28>
0843f0a5 +0x06d:  mov    %eax,-0x1c(%ebp)
0843f0a8 +0x070:  mov    -0x1c(%ebp),%eax
0843f0ab +0x073:  mov    %eax,(%esp)
0843f0ae +0x076:  call   0807e820 <_init+0x1118>
0843f0b3 +0x07b:  mov    %eax,-0x18(%ebp)
0843f0b6 +0x07e:  movl   $0xc,0x8(%esp)
0843f0be +0x086:  movl   $0x0,0x4(%esp)
0843f0c6 +0x08e:  lea    -0x2c(%ebp),%eax
0843f0c9 +0x091:  mov    %eax,(%esp)
0843f0cc +0x094:  call   0807dcc0 <_init+0x5b8>
0843f0d1 +0x099:  mov    -0x1c(%ebp),%eax
0843f0d4 +0x09c:  mov    0xc(%eax),%eax
0843f0d7 +0x09f:  mov    -0x1c(%ebp),%edx
0843f0da +0x0a2:  mov    0x10(%edx),%edx
0843f0dd +0x0a5:  lea    0x1(%edx),%ecx
0843f0e0 +0x0a8:  mov    -0x1c(%ebp),%edx
0843f0e3 +0x0ab:  mov    0x14(%edx),%edx
0843f0e6 +0x0ae:  add    $0x76c,%edx
0843f0ec +0x0b4:  mov    %eax,0x10(%esp)
0843f0f0 +0x0b8:  mov    %ecx,0xc(%esp)
0843f0f4 +0x0bc:  mov    %edx,0x8(%esp)
0843f0f8 +0x0c0:  movl   $"%04d-%02d-%02d",0x4(%esp)
0843f100 +0x0c8:  lea    -0x2c(%ebp),%eax
0843f103 +0x0cb:  mov    %eax,(%esp)
0843f106 +0x0ce:  call   0807e440 <_init+0xd38>
0843f10b +0x0d3:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0843f110 +0x0d8:  movl   $0x0,0x8(%esp)
0843f118 +0x0e0:  movl   $0x3,0x4(%esp)
0843f120 +0x0e8:  mov    %eax,(%esp)
0843f123 +0x0eb:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0843f128 +0x0f0:  mov    %eax,-0x10(%ebp)
0843f12b +0x0f3:  cmpl   $0x0,-0x10(%ebp)
0843f12f +0x0f7:  jne    0843f13b <+0x103>
0843f131 +0x0f9:  mov    $0x0,%eax
0843f136 +0x0fe:  jmp    0843f22f <+0x1f7>
0843f13b +0x103:  mov    0xc(%ebp),%eax
0843f13e +0x106:  mov    0x4(%eax),%eax
0843f141 +0x109:  mov    %eax,0xc(%esp)
0843f145 +0x10d:  lea    -0x2c(%ebp),%eax
0843f148 +0x110:  mov    %eax,0x8(%esp)
0843f14c +0x114:  movl   $"seLect attack_count, revenge_dungeon from village_attack_dungeon \t\t\t\t\t\t   where occ_date = '%s' and charac_no = %u",0x4(%esp)
0843f154 +0x11c:  mov    -0x10(%ebp),%eax
0843f157 +0x11f:  mov    %eax,(%esp)
0843f15a +0x122:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0843f15f +0x127:  movl   $0x1,0x4(%esp)
0843f167 +0x12f:  mov    -0x10(%ebp),%eax
0843f16a +0x132:  mov    %eax,(%esp)
0843f16d +0x135:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0843f172 +0x13a:  xor    $0x1,%eax
0843f175 +0x13d:  test   %al,%al
0843f177 +0x13f:  je     0843f183 <+0x14b>
0843f179 +0x141:  mov    $0x0,%eax
0843f17e +0x146:  jmp    0843f22f <+0x1f7>
0843f183 +0x14b:  mov    -0x10(%ebp),%eax
0843f186 +0x14e:  mov    %eax,(%esp)
0843f189 +0x151:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0843f18e +0x156:  test   %eax,%eax
0843f190 +0x158:  sete   %al
0843f193 +0x15b:  test   %al,%al
0843f195 +0x15d:  je     0843f1b2 <+0x17a>
0843f197 +0x15f:  mov    0xc(%ebp),%eax
0843f19a +0x162:  movb   $0x0,0xc9ac(%eax)
0843f1a1 +0x169:  mov    0xc(%ebp),%eax
0843f1a4 +0x16c:  movb   $0x0,0xc9ad(%eax)
0843f1ab +0x173:  mov    $0x0,%eax
0843f1b0 +0x178:  jmp    0843f22f <+0x1f7>
0843f1b2 +0x17a:  mov    -0x10(%ebp),%eax
0843f1b5 +0x17d:  mov    %eax,(%esp)
0843f1b8 +0x180:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0843f1bd +0x185:  movzbl %al,%eax
0843f1c0 +0x188:  mov    %eax,-0xc(%ebp)
0843f1c3 +0x18b:  cmpl   $0x0,-0xc(%ebp)
0843f1c7 +0x18f:  jne    0843f1d0 <+0x198>
0843f1c9 +0x191:  mov    $0x0,%eax
0843f1ce +0x196:  jmp    0843f22f <+0x1f7>
0843f1d0 +0x198:  mov    0xc(%ebp),%eax
0843f1d3 +0x19b:  add    $0xc9ac,%eax
0843f1d8 +0x1a0:  mov    %eax,0x8(%esp)
0843f1dc +0x1a4:  movl   $0x0,0x4(%esp)
0843f1e4 +0x1ac:  mov    -0x10(%ebp),%eax
0843f1e7 +0x1af:  mov    %eax,(%esp)
0843f1ea +0x1b2:  call   080fdeba <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1e6>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1e6
0843f1ef +0x1b7:  xor    $0x1,%eax
0843f1f2 +0x1ba:  test   %al,%al
0843f1f4 +0x1bc:  je     0843f1fd <+0x1c5>
0843f1f6 +0x1be:  mov    $0x0,%eax
0843f1fb +0x1c3:  jmp    0843f22f <+0x1f7>
0843f1fd +0x1c5:  mov    0xc(%ebp),%eax
0843f200 +0x1c8:  add    $0xc9ad,%eax
0843f205 +0x1cd:  mov    %eax,0x8(%esp)
0843f209 +0x1d1:  movl   $0x1,0x4(%esp)
0843f211 +0x1d9:  mov    -0x10(%ebp),%eax
0843f214 +0x1dc:  mov    %eax,(%esp)
0843f217 +0x1df:  call   080fdeba <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1e6>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1e6
0843f21c +0x1e4:  xor    $0x1,%eax
0843f21f +0x1e7:  test   %al,%al
0843f221 +0x1e9:  je     0843f22a <+0x1f2>
0843f223 +0x1eb:  mov    $0x0,%eax
0843f228 +0x1f0:  jmp    0843f22f <+0x1f7>
0843f22a +0x1f2:  mov    $0x1,%eax
0843f22f +0x1f7:  leave
0843f230 +0x1f8:  ret
0843f231 +0x1f9:  nop
```

## 反编译 C

```c
// DB_LoadEtc::LoadVillageAttackInfo @ 0x843f038

/* DB_LoadEtc::LoadVillageAttackInfo(SIG_LOAD_ETC*) */

undefined4 __thiscall DB_LoadEtc::LoadVillageAttackInfo(DB_LoadEtc *this,SIG_LOAD_ETC *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char local_30 [12];
  int local_24;
  tm *local_20;
  time_t local_1c;
  int local_18;
  MySQL *local_14;
  uint local_10;
  
  if (*(int *)(param_1 + 4) == 0) {
    uVar2 = 0;
  }
  else {
    local_24 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    local_20 = localtime(&local_24);
    iVar3 = G_CEnvironment();
    local_18 = *(int *)(iVar3 + 0x37c);
    if (local_20->tm_hour < local_18) {
      local_20 = (tm *)0x0;
      local_24 = local_24 + -0x15180;
      local_20 = localtime(&local_24);
    }
    local_1c = mktime(local_20);
    memset(local_30,0,0xc);
    sprintf(local_30,"%04d-%02d-%02d",local_20->tm_year + 0x76c,local_20->tm_mon + 1,
            local_20->tm_mday);
    local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
    if (local_14 == (MySQL *)0x0) {
      uVar2 = 0;
    }
    else {
      MySQL::set_query(local_14,
                       "seLect attack_count, revenge_dungeon from village_attack_dungeon \t\t\t\t\t\t   where occ_date = \'%s\' and charac_no = %u"
                       ,local_30,*(undefined4 *)(param_1 + 4));
      cVar1 = MySQL::exec(local_14,true);
      if (cVar1 == '\x01') {
        iVar3 = MySQL::get_n_rows(local_14);
        if (iVar3 == 0) {
          param_1[0xc9ac] = (SIG_LOAD_ETC)0x0;
          param_1[0xc9ad] = (SIG_LOAD_ETC)0x0;
          uVar2 = 0;
        }
        else {
          local_10 = MySQL::fetch(local_14);
          local_10 = local_10 & 0xff;
          if (local_10 == 0) {
            uVar2 = 0;
          }
          else {
            cVar1 = MySQL::get_ubyte(local_14,0,(uchar *)(param_1 + 0xc9ac));
            if (cVar1 == '\x01') {
              cVar1 = MySQL::get_ubyte(local_14,1,(uchar *)(param_1 + 0xc9ad));
              if (cVar1 == '\x01') {
                uVar2 = 1;
              }
              else {
                uVar2 = 0;
              }
            }
            else {
              uVar2 = 0;
            }
          }
        }
      }
      else {
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}
```
