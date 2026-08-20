# LoadConditionEventInfo

`_ZN10DB_LoadEtc22LoadConditionEventInfoEP12SIG_LOAD_ETC`

`DB_LoadEtc::LoadConditionEventInfo(SIG_LOAD_ETC*)`

| 类 | 地址 |
|---|---|
| `DB_LoadEtc` | `0x08407296` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08407296  _ZN10DB_LoadEtc22LoadConditionEventInfoEP12SIG_LOAD_ETC
#           DB_LoadEtc::LoadConditionEventInfo(SIG_LOAD_ETC*)
# range [0x08407296, 0x084073a9]
08407296 +0x000:  push   %ebp
08407297 +0x001:  mov    %esp,%ebp
08407299 +0x003:  sub    $0x28,%esp
0840729c +0x006:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
084072a1 +0x00b:  movl   $0x0,0x8(%esp)
084072a9 +0x013:  movl   $0x2,0x4(%esp)
084072b1 +0x01b:  mov    %eax,(%esp)
084072b4 +0x01e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
084072b9 +0x023:  mov    %eax,-0x10(%ebp)
084072bc +0x026:  mov    0xc(%ebp),%eax
084072bf +0x029:  mov    0x4(%eax),%eax
084072c2 +0x02c:  mov    %eax,0x8(%esp)
084072c6 +0x030:  movl   $"seLect current_step, reward_step from event_conditionable_info where charac_no=%u",0x4(%esp)
084072ce +0x038:  mov    -0x10(%ebp),%eax
084072d1 +0x03b:  mov    %eax,(%esp)
084072d4 +0x03e:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084072d9 +0x043:  movl   $0x1,0x4(%esp)
084072e1 +0x04b:  mov    -0x10(%ebp),%eax
084072e4 +0x04e:  mov    %eax,(%esp)
084072e7 +0x051:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084072ec +0x056:  xor    $0x1,%eax
084072ef +0x059:  test   %al,%al
084072f1 +0x05b:  je     084072fd <+0x67>
084072f3 +0x05d:  mov    $0x0,%eax
084072f8 +0x062:  jmp    084073a8 <+0x112>
084072fd +0x067:  mov    -0x10(%ebp),%eax
08407300 +0x06a:  mov    %eax,(%esp)
08407303 +0x06d:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08407308 +0x072:  mov    %eax,-0xc(%ebp)
0840730b +0x075:  cmpl   $0x1,-0xc(%ebp)
0840730f +0x079:  je     08407330 <+0x9a>
08407311 +0x07b:  mov    0xc(%ebp),%eax
08407314 +0x07e:  movw   $0x0,0x40c8(%eax)
0840731d +0x087:  mov    0xc(%ebp),%eax
08407320 +0x08a:  movw   $0x0,0x40ca(%eax)
08407329 +0x093:  mov    $0x1,%eax
0840732e +0x098:  jmp    084073a8 <+0x112>
08407330 +0x09a:  mov    -0x10(%ebp),%eax
08407333 +0x09d:  mov    %eax,(%esp)
08407336 +0x0a0:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0840733b +0x0a5:  xor    $0x1,%eax
0840733e +0x0a8:  test   %al,%al
08407340 +0x0aa:  je     08407349 <+0xb3>
08407342 +0x0ac:  mov    $0x0,%eax
08407347 +0x0b1:  jmp    084073a8 <+0x112>
08407349 +0x0b3:  mov    0xc(%ebp),%eax
0840734c +0x0b6:  add    $0x40c8,%eax
08407351 +0x0bb:  mov    %eax,0x8(%esp)
08407355 +0x0bf:  movl   $0x0,0x4(%esp)
0840735d +0x0c7:  mov    -0x10(%ebp),%eax
08407360 +0x0ca:  mov    %eax,(%esp)
08407363 +0x0cd:  call   080fddec <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x118>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x118
08407368 +0x0d2:  xor    $0x1,%eax
0840736b +0x0d5:  test   %al,%al
0840736d +0x0d7:  je     08407376 <+0xe0>
0840736f +0x0d9:  mov    $0x0,%eax
08407374 +0x0de:  jmp    084073a8 <+0x112>
08407376 +0x0e0:  mov    0xc(%ebp),%eax
08407379 +0x0e3:  add    $0x40ca,%eax
0840737e +0x0e8:  mov    %eax,0x8(%esp)
08407382 +0x0ec:  movl   $0x1,0x4(%esp)
0840738a +0x0f4:  mov    -0x10(%ebp),%eax
0840738d +0x0f7:  mov    %eax,(%esp)
08407390 +0x0fa:  call   080fddec <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x118>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x118
08407395 +0x0ff:  xor    $0x1,%eax
08407398 +0x102:  test   %al,%al
0840739a +0x104:  je     084073a3 <+0x10d>
0840739c +0x106:  mov    $0x0,%eax
084073a1 +0x10b:  jmp    084073a8 <+0x112>
084073a3 +0x10d:  mov    $0x1,%eax
084073a8 +0x112:  leave
084073a9 +0x113:  ret
```

## 反编译 C

```c
// DB_LoadEtc::LoadConditionEventInfo @ 0x8407296

/* DB_LoadEtc::LoadConditionEventInfo(SIG_LOAD_ETC*) */

undefined4 __thiscall DB_LoadEtc::LoadConditionEventInfo(DB_LoadEtc *this,SIG_LOAD_ETC *param_1)

{
  char cVar1;
  MySQL *this_00;
  undefined4 uVar2;
  int iVar3;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  MySQL::set_query(this_00,
                   "seLect current_step, reward_step from event_conditionable_info where charac_no=%u"
                   ,*(undefined4 *)(param_1 + 4));
  cVar1 = MySQL::exec(this_00,true);
  if (cVar1 == '\x01') {
    iVar3 = MySQL::get_n_rows(this_00);
    if (iVar3 == 1) {
      cVar1 = MySQL::fetch(this_00);
      if (cVar1 == '\x01') {
        cVar1 = MySQL::get_short(this_00,0,(short *)(param_1 + 0x40c8));
        if (cVar1 == '\x01') {
          cVar1 = MySQL::get_short(this_00,1,(short *)(param_1 + 0x40ca));
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
      else {
        uVar2 = 0;
      }
    }
    else {
      *(undefined2 *)(param_1 + 0x40c8) = 0;
      *(undefined2 *)(param_1 + 0x40ca) = 0;
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
