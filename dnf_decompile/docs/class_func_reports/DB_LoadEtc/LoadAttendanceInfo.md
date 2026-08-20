# LoadAttendanceInfo

`_ZN10DB_LoadEtc18LoadAttendanceInfoEP20SIG_ATTENDANCE_EVENTj`

`DB_LoadEtc::LoadAttendanceInfo(SIG_ATTENDANCE_EVENT*, unsigned int)`

| 类 | 地址 |
|---|---|
| `DB_LoadEtc` | `0x08448944` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08448944  _ZN10DB_LoadEtc18LoadAttendanceInfoEP20SIG_ATTENDANCE_EVENTj
#           DB_LoadEtc::LoadAttendanceInfo(SIG_ATTENDANCE_EVENT*, unsigned int)
# range [0x08448944, 0x08448a47]
08448944 +0x000:  push   %ebp
08448945 +0x001:  mov    %esp,%ebp
08448947 +0x003:  push   %ebx
08448948 +0x004:  sub    $0x24,%esp
0844894b +0x007:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08448950 +0x00c:  movl   $0x0,0x8(%esp)
08448958 +0x014:  movl   $0x9,0x4(%esp)
08448960 +0x01c:  mov    %eax,(%esp)
08448963 +0x01f:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08448968 +0x024:  mov    %eax,-0x14(%ebp)
0844896b +0x027:  mov    0xc(%ebp),%eax
0844896e +0x02a:  movb   $0x0,(%eax)
08448971 +0x02d:  mov    &_ZN10GlobalData15s_event_managerE,%eax
08448976 +0x032:  movl   $0x60,0x4(%esp)
0844897e +0x03a:  mov    %eax,(%esp)
08448981 +0x03d:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
08448986 +0x042:  mov    (%eax),%edx
08448988 +0x044:  add    $0x34,%edx
0844898b +0x047:  mov    (%edx),%edx
0844898d +0x049:  movl   $0x0,0x4(%esp)
08448995 +0x051:  mov    %eax,(%esp)
08448998 +0x054:  call   *%edx
0844899a +0x056:  xor    $0x1,%eax
0844899d +0x059:  test   %al,%al
0844899f +0x05b:  je     084489ab <+0x67>
084489a1 +0x05d:  mov    $0x0,%eax
084489a6 +0x062:  jmp    08448a42 <+0xfe>
084489ab +0x067:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084489b0 +0x06c:  mov    0x37c(%eax),%ebx
084489b6 +0x072:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
084489bd +0x079:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
084489c2 +0x07e:  mov    %ebx,0x4(%esp)
084489c6 +0x082:  mov    %eax,(%esp)
084489c9 +0x085:  call   0810912a <_Z23GetCurrentResetBaseTimeli>  ; GetCurrentResetBaseTime(long, int)
084489ce +0x08a:  mov    %eax,-0x10(%ebp)
084489d1 +0x08d:  movl   $0x0,0x4(%esp)
084489d9 +0x095:  mov    0x10(%ebp),%eax
084489dc +0x098:  mov    %eax,(%esp)
084489df +0x09b:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084489e4 +0x0a0:  mov    -0x10(%ebp),%edx
084489e7 +0x0a3:  mov    %edx,0xc(%esp)
084489eb +0x0a7:  mov    %eax,0x8(%esp)
084489ef +0x0ab:  movl   $"seLect occ_date from event_1207_attendance where m_id = %s and occ_date > from_unixtime(%u)",0x4(%esp)
084489f7 +0x0b3:  mov    -0x14(%ebp),%eax
084489fa +0x0b6:  mov    %eax,(%esp)
084489fd +0x0b9:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08448a02 +0x0be:  movl   $0x1,0x4(%esp)
08448a0a +0x0c6:  mov    -0x14(%ebp),%eax
08448a0d +0x0c9:  mov    %eax,(%esp)
08448a10 +0x0cc:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08448a15 +0x0d1:  xor    $0x1,%eax
08448a18 +0x0d4:  test   %al,%al
08448a1a +0x0d6:  je     08448a23 <+0xdf>
08448a1c +0x0d8:  mov    $0x0,%eax
08448a21 +0x0dd:  jmp    08448a42 <+0xfe>
08448a23 +0x0df:  mov    -0x14(%ebp),%eax
08448a26 +0x0e2:  mov    %eax,(%esp)
08448a29 +0x0e5:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08448a2e +0x0ea:  mov    %eax,-0xc(%ebp)
08448a31 +0x0ed:  cmpl   $0x0,-0xc(%ebp)
08448a35 +0x0f1:  jne    08448a3d <+0xf9>
08448a37 +0x0f3:  mov    0xc(%ebp),%eax
08448a3a +0x0f6:  movb   $0x1,(%eax)
08448a3d +0x0f9:  mov    $0x1,%eax
08448a42 +0x0fe:  add    $0x24,%esp
08448a45 +0x101:  pop    %ebx
08448a46 +0x102:  pop    %ebp
08448a47 +0x103:  ret
```

## 反编译 C

```c
// DB_LoadEtc::LoadAttendanceInfo @ 0x8448944

/* DB_LoadEtc::LoadAttendanceInfo(SIG_ATTENDANCE_EVENT*, unsigned int) */

undefined4 __thiscall
DB_LoadEtc::LoadAttendanceInfo(DB_LoadEtc *this,SIG_ATTENDANCE_EVENT *param_1,uint param_2)

{
  char cVar1;
  MySQL *this_00;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  undefined4 uVar6;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  *param_1 = (SIG_ATTENDANCE_EVENT)0x0;
  piVar2 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x60);
  cVar1 = (**(code **)(*piVar2 + 0x34))(piVar2,0);
  if (cVar1 == '\x01') {
    iVar4 = G_CEnvironment();
    iVar4 = *(int *)(iVar4 + 0x37c);
    lVar5 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    uVar3 = GetCurrentResetBaseTime(lVar5,iVar4);
    uVar6 = NumberToString(param_2,0);
    MySQL::set_query(this_00,
                     "seLect occ_date from event_1207_attendance where m_id = %s and occ_date > from_unixtime(%u)"
                     ,uVar6,uVar3);
    cVar1 = MySQL::exec(this_00,true);
    if (cVar1 == '\x01') {
      iVar4 = MySQL::get_n_rows(this_00);
      if (iVar4 == 0) {
        *param_1 = (SIG_ATTENDANCE_EVENT)0x1;
      }
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
