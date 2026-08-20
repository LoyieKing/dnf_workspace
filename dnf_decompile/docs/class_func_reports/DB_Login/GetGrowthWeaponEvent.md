# GetGrowthWeaponEvent

`_ZN8DB_Login20GetGrowthWeaponEventEP14SIG_LOGIN_DATA`

`DB_Login::GetGrowthWeaponEvent(SIG_LOGIN_DATA*)`

| 类 | 地址 |
|---|---|
| `DB_Login` | `0x08447ea6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08447ea6  _ZN8DB_Login20GetGrowthWeaponEventEP14SIG_LOGIN_DATA
#           DB_Login::GetGrowthWeaponEvent(SIG_LOGIN_DATA*)
# range [0x08447ea6, 0x08448101]
08447ea6 +0x000:  push   %ebp
08447ea7 +0x001:  mov    %esp,%ebp
08447ea9 +0x003:  sub    $0x38,%esp
08447eac +0x006:  mov    &_ZN10GlobalData15s_event_managerE,%eax
08447eb1 +0x00b:  movl   $0x64,0x4(%esp)
08447eb9 +0x013:  mov    %eax,(%esp)
08447ebc +0x016:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
08447ec1 +0x01b:  mov    (%eax),%edx
08447ec3 +0x01d:  add    $0x34,%edx
08447ec6 +0x020:  mov    (%edx),%edx
08447ec8 +0x022:  movl   $0x0,0x4(%esp)
08447ed0 +0x02a:  mov    %eax,(%esp)
08447ed3 +0x02d:  call   *%edx
08447ed5 +0x02f:  xor    $0x1,%eax
08447ed8 +0x032:  test   %al,%al
08447eda +0x034:  je     08447ee6 <+0x40>
08447edc +0x036:  mov    $0x1,%eax
08447ee1 +0x03b:  jmp    08448100 <+0x25a>
08447ee6 +0x040:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08447eeb +0x045:  movl   $0x0,0x8(%esp)
08447ef3 +0x04d:  movl   $0x9,0x4(%esp)
08447efb +0x055:  mov    %eax,(%esp)
08447efe +0x058:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08447f03 +0x05d:  mov    %eax,-0xc(%ebp)
08447f06 +0x060:  mov    0xc(%ebp),%eax
08447f09 +0x063:  mov    0xc0(%eax),%eax
08447f0f +0x069:  mov    %eax,0x8(%esp)
08447f13 +0x06d:  movl   $"seLect server_id, charac_no, growthweapon_id, timepiece, infinityweapon_id from event_1207_growthweapon where m_id = %d",0x4(%esp)
08447f1b +0x075:  mov    -0xc(%ebp),%eax
08447f1e +0x078:  mov    %eax,(%esp)
08447f21 +0x07b:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08447f26 +0x080:  movl   $0x1,0x4(%esp)
08447f2e +0x088:  mov    -0xc(%ebp),%eax
08447f31 +0x08b:  mov    %eax,(%esp)
08447f34 +0x08e:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08447f39 +0x093:  mov    %al,-0xd(%ebp)
08447f3c +0x096:  movzbl -0xd(%ebp),%eax
08447f40 +0x09a:  xor    $0x1,%eax
08447f43 +0x09d:  test   %al,%al
08447f45 +0x09f:  je     08447f8a <+0xe4>
08447f47 +0x0a1:  mov    0xc(%ebp),%eax
08447f4a +0x0a4:  mov    0xc0(%eax),%eax
08447f50 +0x0aa:  mov    %eax,0x14(%esp)
08447f54 +0x0ae:  movl   $"LoadGrowthWeaponEvent Query Error : m_id(%d)",0x10(%esp)
08447f5c +0x0b6:  movl   $0xb487,0xc(%esp)
08447f64 +0x0be:  movl   $&_ZZN8DB_Login20GetGrowthWeaponEventEP14SIG_LOGIN_DATAE19__PRETTY_FUNCTION__,0x8(%esp)
08447f6c +0x0c6:  movl   $"DBThread.cpp",0x4(%esp)
08447f74 +0x0ce:  movl   $0x1,(%esp)
08447f7b +0x0d5:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08447f80 +0x0da:  mov    $0x0,%eax
08447f85 +0x0df:  jmp    08448100 <+0x25a>
08447f8a +0x0e4:  mov    -0xc(%ebp),%eax
08447f8d +0x0e7:  mov    %eax,(%esp)
08447f90 +0x0ea:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08447f95 +0x0ef:  test   %eax,%eax
08447f97 +0x0f1:  setne  %al
08447f9a +0x0f4:  test   %al,%al
08447f9c +0x0f6:  je     084480b2 <+0x20c>
08447fa2 +0x0fc:  mov    -0xc(%ebp),%eax
08447fa5 +0x0ff:  mov    %eax,(%esp)
08447fa8 +0x102:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08447fad +0x107:  xor    $0x1,%eax
08447fb0 +0x10a:  test   %al,%al
08447fb2 +0x10c:  je     08447fbe <+0x118>
08447fb4 +0x10e:  mov    $0x0,%eax
08447fb9 +0x113:  jmp    08448100 <+0x25a>
08447fbe +0x118:  mov    0xc(%ebp),%eax
08447fc1 +0x11b:  movb   $0x1,0x4140(%eax)
08447fc8 +0x122:  mov    0xc(%ebp),%eax
08447fcb +0x125:  add    $0x4152,%eax
08447fd0 +0x12a:  mov    %eax,0x8(%esp)
08447fd4 +0x12e:  movl   $0x0,0x4(%esp)
08447fdc +0x136:  mov    -0xc(%ebp),%eax
08447fdf +0x139:  mov    %eax,(%esp)
08447fe2 +0x13c:  call   080fddec <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x118>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x118
08447fe7 +0x141:  xor    $0x1,%eax
08447fea +0x144:  test   %al,%al
08447fec +0x146:  je     08447ff8 <+0x152>
08447fee +0x148:  mov    $0x0,%eax
08447ff3 +0x14d:  jmp    08448100 <+0x25a>
08447ff8 +0x152:  mov    0xc(%ebp),%eax
08447ffb +0x155:  add    $0x4144,%eax
08448000 +0x15a:  mov    %eax,0x8(%esp)
08448004 +0x15e:  movl   $0x1,0x4(%esp)
0844800c +0x166:  mov    -0xc(%ebp),%eax
0844800f +0x169:  mov    %eax,(%esp)
08448012 +0x16c:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08448017 +0x171:  xor    $0x1,%eax
0844801a +0x174:  test   %al,%al
0844801c +0x176:  je     08448028 <+0x182>
0844801e +0x178:  mov    $0x0,%eax
08448023 +0x17d:  jmp    08448100 <+0x25a>
08448028 +0x182:  mov    0xc(%ebp),%eax
0844802b +0x185:  add    $0x4148,%eax
08448030 +0x18a:  mov    %eax,0x8(%esp)
08448034 +0x18e:  movl   $0x2,0x4(%esp)
0844803c +0x196:  mov    -0xc(%ebp),%eax
0844803f +0x199:  mov    %eax,(%esp)
08448042 +0x19c:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08448047 +0x1a1:  xor    $0x1,%eax
0844804a +0x1a4:  test   %al,%al
0844804c +0x1a6:  je     08448058 <+0x1b2>
0844804e +0x1a8:  mov    $0x0,%eax
08448053 +0x1ad:  jmp    08448100 <+0x25a>
08448058 +0x1b2:  mov    0xc(%ebp),%eax
0844805b +0x1b5:  add    $0x4150,%eax
08448060 +0x1ba:  mov    %eax,0x8(%esp)
08448064 +0x1be:  movl   $0x3,0x4(%esp)
0844806c +0x1c6:  mov    -0xc(%ebp),%eax
0844806f +0x1c9:  mov    %eax,(%esp)
08448072 +0x1cc:  call   080fddec <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x118>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x118
08448077 +0x1d1:  xor    $0x1,%eax
0844807a +0x1d4:  test   %al,%al
0844807c +0x1d6:  je     08448085 <+0x1df>
0844807e +0x1d8:  mov    $0x0,%eax
08448083 +0x1dd:  jmp    08448100 <+0x25a>
08448085 +0x1df:  mov    0xc(%ebp),%eax
08448088 +0x1e2:  add    $0x414c,%eax
0844808d +0x1e7:  mov    %eax,0x8(%esp)
08448091 +0x1eb:  movl   $0x4,0x4(%esp)
08448099 +0x1f3:  mov    -0xc(%ebp),%eax
0844809c +0x1f6:  mov    %eax,(%esp)
0844809f +0x1f9:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
084480a4 +0x1fe:  xor    $0x1,%eax
084480a7 +0x201:  test   %al,%al
084480a9 +0x203:  je     084480fb <+0x255>
084480ab +0x205:  mov    $0x0,%eax
084480b0 +0x20a:  jmp    08448100 <+0x25a>
084480b2 +0x20c:  mov    0xc(%ebp),%eax
084480b5 +0x20f:  movb   $0x0,0x4140(%eax)
084480bc +0x216:  mov    0xc(%ebp),%eax
084480bf +0x219:  movw   $0x0,0x4152(%eax)
084480c8 +0x222:  mov    0xc(%ebp),%eax
084480cb +0x225:  movl   $0x0,0x4144(%eax)
084480d5 +0x22f:  mov    0xc(%ebp),%eax
084480d8 +0x232:  movl   $0x0,0x4148(%eax)
084480e2 +0x23c:  mov    0xc(%ebp),%eax
084480e5 +0x23f:  movw   $0x0,0x4150(%eax)
084480ee +0x248:  mov    0xc(%ebp),%eax
084480f1 +0x24b:  movl   $0x0,0x414c(%eax)
084480fb +0x255:  mov    $0x1,%eax
08448100 +0x25a:  leave
08448101 +0x25b:  ret
```

## 反编译 C

```c
// DB_Login::GetGrowthWeaponEvent @ 0x8447ea6

/* DB_Login::GetGrowthWeaponEvent(SIG_LOGIN_DATA*) */

undefined4 __thiscall DB_Login::GetGrowthWeaponEvent(DB_Login *this,SIG_LOGIN_DATA *param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  MySQL *this_00;
  int iVar4;
  
  piVar2 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,100);
  cVar1 = (**(code **)(*piVar2 + 0x34))(piVar2,0);
  if (cVar1 == '\x01') {
    this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
    MySQL::set_query(this_00,
                     "seLect server_id, charac_no, growthweapon_id, timepiece, infinityweapon_id from event_1207_growthweapon where m_id = %d"
                     ,*(undefined4 *)(param_1 + 0xc0));
    cVar1 = MySQL::exec(this_00,true);
    if (cVar1 == '\x01') {
      iVar4 = MySQL::get_n_rows(this_00);
      if (iVar4 == 0) {
        param_1[0x4140] = (SIG_LOGIN_DATA)0x0;
        *(undefined2 *)(param_1 + 0x4152) = 0;
        *(undefined4 *)(param_1 + 0x4144) = 0;
        *(undefined4 *)(param_1 + 0x4148) = 0;
        *(undefined2 *)(param_1 + 0x4150) = 0;
        *(undefined4 *)(param_1 + 0x414c) = 0;
      }
      else {
        cVar1 = MySQL::fetch(this_00);
        if (cVar1 != '\x01') {
          return 0;
        }
        param_1[0x4140] = (SIG_LOGIN_DATA)0x1;
        cVar1 = MySQL::get_short(this_00,0,(short *)(param_1 + 0x4152));
        if (cVar1 != '\x01') {
          return 0;
        }
        cVar1 = MySQL::get_int(this_00,1,(int *)(param_1 + 0x4144));
        if (cVar1 != '\x01') {
          return 0;
        }
        cVar1 = MySQL::get_int(this_00,2,(int *)(param_1 + 0x4148));
        if (cVar1 != '\x01') {
          return 0;
        }
        cVar1 = MySQL::get_short(this_00,3,(short *)(param_1 + 0x4150));
        if (cVar1 != '\x01') {
          return 0;
        }
        cVar1 = MySQL::get_int(this_00,4,(int *)(param_1 + 0x414c));
        if (cVar1 != '\x01') {
          return 0;
        }
      }
      uVar3 = 1;
    }
    else {
      LogManager::logFormat
                (1,"DBThread.cpp","bool DB_Login::GetGrowthWeaponEvent(SIG_LOGIN_DATA*)",0xb487,
                 "LoadGrowthWeaponEvent Query Error : m_id(%d)",*(undefined4 *)(param_1 + 0xc0));
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}
```
