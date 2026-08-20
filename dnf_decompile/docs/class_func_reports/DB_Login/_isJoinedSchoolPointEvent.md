# _isJoinedSchoolPointEvent

`_ZN8DB_Login25_isJoinedSchoolPointEventEj`

`DB_Login::_isJoinedSchoolPointEvent(unsigned int)`

| 类 | 地址 |
|---|---|
| `DB_Login` | `0x08410f74` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08410f74  _ZN8DB_Login25_isJoinedSchoolPointEventEj
#           DB_Login::_isJoinedSchoolPointEvent(unsigned int)
# range [0x08410f74, 0x0841102d]
08410f74 +0x00:  push   %ebp
08410f75 +0x01:  mov    %esp,%ebp
08410f77 +0x03:  sub    $0x28,%esp
08410f7a +0x06:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08410f81 +0x0d:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08410f86 +0x12:  cmp    $0x4834a970,%eax
08410f8b +0x17:  setg   %al
08410f8e +0x1a:  test   %al,%al
08410f90 +0x1c:  je     08410f9c <+0x28>
08410f92 +0x1e:  mov    $0x0,%eax
08410f97 +0x23:  jmp    0841102b <+0xb7>
08410f9c +0x28:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08410fa1 +0x2d:  movl   $0x0,0x8(%esp)
08410fa9 +0x35:  movl   $0x6,0x4(%esp)
08410fb1 +0x3d:  mov    %eax,(%esp)
08410fb4 +0x40:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08410fb9 +0x45:  mov    %eax,-0xc(%ebp)
08410fbc +0x48:  movl   $0x0,0x4(%esp)
08410fc4 +0x50:  mov    0xc(%ebp),%eax
08410fc7 +0x53:  mov    %eax,(%esp)
08410fca +0x56:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08410fcf +0x5b:  mov    %eax,0x8(%esp)
08410fd3 +0x5f:  movl   $"seLect school_id from event_school_point where m_id=%s",0x4(%esp)
08410fdb +0x67:  mov    -0xc(%ebp),%eax
08410fde +0x6a:  mov    %eax,(%esp)
08410fe1 +0x6d:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08410fe6 +0x72:  movl   $0x1,0x4(%esp)
08410fee +0x7a:  mov    -0xc(%ebp),%eax
08410ff1 +0x7d:  mov    %eax,(%esp)
08410ff4 +0x80:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08410ff9 +0x85:  xor    $0x1,%eax
08410ffc +0x88:  test   %al,%al
08410ffe +0x8a:  jne    0841100f <+0x9b>
08411000 +0x8c:  mov    -0xc(%ebp),%eax
08411003 +0x8f:  mov    %eax,(%esp)
08411006 +0x92:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0841100b +0x97:  test   %eax,%eax
0841100d +0x99:  jne    08411016 <+0xa2>
0841100f +0x9b:  mov    $0x1,%eax
08411014 +0xa0:  jmp    0841101b <+0xa7>
08411016 +0xa2:  mov    $0x0,%eax
0841101b +0xa7:  test   %al,%al
0841101d +0xa9:  je     08411026 <+0xb2>
0841101f +0xab:  mov    $0x0,%eax
08411024 +0xb0:  jmp    0841102b <+0xb7>
08411026 +0xb2:  mov    $0x1,%eax
0841102b +0xb7:  leave
0841102c +0xb8:  ret
0841102d +0xb9:  nop
```

## 反编译 C

```c
// DB_Login::_isJoinedSchoolPointEvent @ 0x8410f74

/* DB_Login::_isJoinedSchoolPointEvent(unsigned int) */

bool __thiscall DB_Login::_isJoinedSchoolPointEvent(DB_Login *this,uint param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  MySQL *this_00;
  undefined4 uVar4;
  
  iVar3 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  if (iVar3 < 0x4834a971) {
    this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
    uVar4 = NumberToString(param_1,0);
    MySQL::set_query(this_00,"seLect school_id from event_school_point where m_id=%s",uVar4);
    cVar2 = MySQL::exec(this_00,true);
    if ((cVar2 == '\x01') && (iVar3 = MySQL::get_n_rows(this_00), iVar3 != 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    return !bVar1;
  }
  return false;
}
```
