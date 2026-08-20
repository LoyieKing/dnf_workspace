# LoadSeriaRoomAniDeco

`_ZN10DB_LoadEtc20LoadSeriaRoomAniDecoEP12SIG_LOAD_ETC`

`DB_LoadEtc::LoadSeriaRoomAniDeco(SIG_LOAD_ETC*)`

| 类 | 地址 |
|---|---|
| `DB_LoadEtc` | `0x0844a20a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0844a20a  _ZN10DB_LoadEtc20LoadSeriaRoomAniDecoEP12SIG_LOAD_ETC
#           DB_LoadEtc::LoadSeriaRoomAniDeco(SIG_LOAD_ETC*)
# range [0x0844a20a, 0x0844a38a]
0844a20a +0x000:  push   %ebp
0844a20b +0x001:  mov    %esp,%ebp
0844a20d +0x003:  sub    $0x38,%esp
0844a210 +0x006:  mov    &_ZN10GlobalData15s_event_managerE,%eax
0844a215 +0x00b:  movl   $0x69,0x4(%esp)
0844a21d +0x013:  mov    %eax,(%esp)
0844a220 +0x016:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
0844a225 +0x01b:  mov    (%eax),%edx
0844a227 +0x01d:  add    $0x34,%edx
0844a22a +0x020:  mov    (%edx),%edx
0844a22c +0x022:  movl   $0x0,0x4(%esp)
0844a234 +0x02a:  mov    %eax,(%esp)
0844a237 +0x02d:  call   *%edx
0844a239 +0x02f:  xor    $0x1,%eax
0844a23c +0x032:  test   %al,%al
0844a23e +0x034:  je     0844a24a <+0x40>
0844a240 +0x036:  mov    $0x0,%eax
0844a245 +0x03b:  jmp    0844a389 <+0x17f>
0844a24a +0x040:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0844a24f +0x045:  movl   $0x0,0x8(%esp)
0844a257 +0x04d:  movl   $0x9,0x4(%esp)
0844a25f +0x055:  mov    %eax,(%esp)
0844a262 +0x058:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0844a267 +0x05d:  mov    %eax,-0xc(%ebp)
0844a26a +0x060:  mov    0xc(%ebp),%eax
0844a26d +0x063:  mov    0x4(%eax),%ecx
0844a270 +0x066:  mov    0xc(%ebp),%eax
0844a273 +0x069:  mov    0x2d30(%eax),%edx
0844a279 +0x06f:  mov    0xc(%ebp),%eax
0844a27c +0x072:  mov    (%eax),%eax
0844a27e +0x074:  mov    %ecx,0x10(%esp)
0844a282 +0x078:  mov    %edx,0xc(%esp)
0844a286 +0x07c:  mov    %eax,0x8(%esp)
0844a28a +0x080:  movl   $"seLect receive_flow, deco_flow from event_1208_seriaroom_anideco where m_id = %d and server_id = %d and charac_no = %d",0x4(%esp)
0844a292 +0x088:  mov    -0xc(%ebp),%eax
0844a295 +0x08b:  mov    %eax,(%esp)
0844a298 +0x08e:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0844a29d +0x093:  movl   $0x1,0x4(%esp)
0844a2a5 +0x09b:  mov    -0xc(%ebp),%eax
0844a2a8 +0x09e:  mov    %eax,(%esp)
0844a2ab +0x0a1:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0844a2b0 +0x0a6:  mov    %al,-0xd(%ebp)
0844a2b3 +0x0a9:  movzbl -0xd(%ebp),%eax
0844a2b7 +0x0ad:  xor    $0x1,%eax
0844a2ba +0x0b0:  test   %al,%al
0844a2bc +0x0b2:  je     0844a2fd <+0xf3>
0844a2be +0x0b4:  mov    0xc(%ebp),%eax
0844a2c1 +0x0b7:  mov    (%eax),%eax
0844a2c3 +0x0b9:  mov    %eax,0x14(%esp)
0844a2c7 +0x0bd:  movl   $"LoadSeriaRoomAniDeco Query Error : m_id(%d)",0x10(%esp)
0844a2cf +0x0c5:  movl   $0xba8f,0xc(%esp)
0844a2d7 +0x0cd:  movl   $&_ZZN10DB_LoadEtc20LoadSeriaRoomAniDecoEP12SIG_LOAD_ETCE19__PRETTY_FUNCTION__,0x8(%esp)
0844a2df +0x0d5:  movl   $"DBThread.cpp",0x4(%esp)
0844a2e7 +0x0dd:  movl   $0x1,(%esp)
0844a2ee +0x0e4:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0844a2f3 +0x0e9:  mov    $0x0,%eax
0844a2f8 +0x0ee:  jmp    0844a389 <+0x17f>
0844a2fd +0x0f3:  mov    -0xc(%ebp),%eax
0844a300 +0x0f6:  mov    %eax,(%esp)
0844a303 +0x0f9:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0844a308 +0x0fe:  test   %eax,%eax
0844a30a +0x100:  setne  %al
0844a30d +0x103:  test   %al,%al
0844a30f +0x105:  je     0844a384 <+0x17a>
0844a311 +0x107:  mov    -0xc(%ebp),%eax
0844a314 +0x10a:  mov    %eax,(%esp)
0844a317 +0x10d:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0844a31c +0x112:  xor    $0x1,%eax
0844a31f +0x115:  test   %al,%al
0844a321 +0x117:  je     0844a32a <+0x120>
0844a323 +0x119:  mov    $0x0,%eax
0844a328 +0x11e:  jmp    0844a389 <+0x17f>
0844a32a +0x120:  mov    0xc(%ebp),%eax
0844a32d +0x123:  add    $&_ZL14gUnicodeBuffer+0xa630,%eax
0844a332 +0x128:  mov    %eax,0x8(%esp)
0844a336 +0x12c:  movl   $0x0,0x4(%esp)
0844a33e +0x134:  mov    -0xc(%ebp),%eax
0844a341 +0x137:  mov    %eax,(%esp)
0844a344 +0x13a:  call   080fddec <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x118>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x118
0844a349 +0x13f:  xor    $0x1,%eax
0844a34c +0x142:  test   %al,%al
0844a34e +0x144:  je     0844a357 <+0x14d>
0844a350 +0x146:  mov    $0x0,%eax
0844a355 +0x14b:  jmp    0844a389 <+0x17f>
0844a357 +0x14d:  mov    0xc(%ebp),%eax
0844a35a +0x150:  add    $&_ZL14gUnicodeBuffer+0xa632,%eax
0844a35f +0x155:  mov    %eax,0x8(%esp)
0844a363 +0x159:  movl   $0x1,0x4(%esp)
0844a36b +0x161:  mov    -0xc(%ebp),%eax
0844a36e +0x164:  mov    %eax,(%esp)
0844a371 +0x167:  call   080fddec <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x118>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x118
0844a376 +0x16c:  xor    $0x1,%eax
0844a379 +0x16f:  test   %al,%al
0844a37b +0x171:  je     0844a384 <+0x17a>
0844a37d +0x173:  mov    $0x0,%eax
0844a382 +0x178:  jmp    0844a389 <+0x17f>
0844a384 +0x17a:  mov    $0x1,%eax
0844a389 +0x17f:  leave
0844a38a +0x180:  ret
```

## 反编译 C

```c
// DB_LoadEtc::LoadSeriaRoomAniDeco @ 0x844a20a

/* DB_LoadEtc::LoadSeriaRoomAniDeco(SIG_LOAD_ETC*) */

undefined4 __thiscall DB_LoadEtc::LoadSeriaRoomAniDeco(DB_LoadEtc *this,SIG_LOAD_ETC *param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  MySQL *this_00;
  int iVar4;
  
  piVar2 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x69);
  cVar1 = (**(code **)(*piVar2 + 0x34))(piVar2,0);
  if (cVar1 == '\x01') {
    this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
    MySQL::set_query(this_00,
                     "seLect receive_flow, deco_flow from event_1208_seriaroom_anideco where m_id = %d and server_id = %d and charac_no = %d"
                     ,*(undefined4 *)param_1,*(undefined4 *)(param_1 + 0x2d30),
                     *(undefined4 *)(param_1 + 4));
    cVar1 = MySQL::exec(this_00,true);
    if (cVar1 == '\x01') {
      iVar4 = MySQL::get_n_rows(this_00);
      if (iVar4 != 0) {
        cVar1 = MySQL::fetch(this_00);
        if (cVar1 != '\x01') {
          return 0;
        }
        cVar1 = MySQL::get_short(this_00,0,(short *)(param_1 + 0x14b5c));
        if (cVar1 != '\x01') {
          return 0;
        }
        cVar1 = MySQL::get_short(this_00,1,(short *)(param_1 + 0x14b5e));
        if (cVar1 != '\x01') {
          return 0;
        }
      }
      uVar3 = 1;
    }
    else {
      LogManager::logFormat
                (1,"DBThread.cpp","bool DB_LoadEtc::LoadSeriaRoomAniDeco(SIG_LOAD_ETC*)",0xba8f,
                 "LoadSeriaRoomAniDeco Query Error : m_id(%d)",*(undefined4 *)param_1);
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
