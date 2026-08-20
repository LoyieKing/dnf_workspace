# _updateCreateEventCharacter

`_ZN15DB_CreateCharac27_updateCreateEventCharacterEP17SIG_CREATE_CHARAC`

`DB_CreateCharac::_updateCreateEventCharacter(SIG_CREATE_CHARAC*)`

| 类 | 地址 |
|---|---|
| `DB_CreateCharac` | `0x08401428` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08401428  _ZN15DB_CreateCharac27_updateCreateEventCharacterEP17SIG_CREATE_CHARAC
#           DB_CreateCharac::_updateCreateEventCharacter(SIG_CREATE_CHARAC*)
# range [0x08401428, 0x08401503]
08401428 +0x00:  push   %ebp
08401429 +0x01:  mov    %esp,%ebp
0840142b +0x03:  sub    $0x28,%esp
0840142e +0x06:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08401435 +0x0d:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0840143a +0x12:  cmp    $0x4b055d6f,%eax
0840143f +0x17:  jle    0840145b <+0x33>
08401441 +0x19:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08401448 +0x20:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0840144d +0x25:  cmp    $0x4b3bbf50,%eax
08401452 +0x2a:  jg     0840145b <+0x33>
08401454 +0x2c:  mov    $0x1,%eax
08401459 +0x31:  jmp    08401460 <+0x38>
0840145b +0x33:  mov    $0x0,%eax
08401460 +0x38:  test   %al,%al
08401462 +0x3a:  je     084014f0 <+0xc8>
08401468 +0x40:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0840146d +0x45:  movl   $0x0,0x8(%esp)
08401475 +0x4d:  movl   $0x6,0x4(%esp)
0840147d +0x55:  mov    %eax,(%esp)
08401480 +0x58:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08401485 +0x5d:  mov    %eax,-0xc(%ebp)
08401488 +0x60:  mov    0xc(%ebp),%eax
0840148b +0x63:  mov    (%eax),%eax
0840148d +0x65:  movl   $0x0,0x4(%esp)
08401495 +0x6d:  mov    %eax,(%esp)
08401498 +0x70:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0840149d +0x75:  mov    %eax,0x8(%esp)
084014a1 +0x79:  movl   $"upDate member_login set event_charac_flag = 1 where m_id = %s",0x4(%esp)
084014a9 +0x81:  mov    -0xc(%ebp),%eax
084014ac +0x84:  mov    %eax,(%esp)
084014af +0x87:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084014b4 +0x8c:  movl   $0x1,0x4(%esp)
084014bc +0x94:  mov    -0xc(%ebp),%eax
084014bf +0x97:  mov    %eax,(%esp)
084014c2 +0x9a:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084014c7 +0x9f:  xor    $0x1,%eax
084014ca +0xa2:  test   %al,%al
084014cc +0xa4:  je     084014e2 <+0xba>
084014ce +0xa6:  mov    0xc(%ebp),%eax
084014d1 +0xa9:  movl   $0x2,0x5344(%eax)
084014db +0xb3:  mov    $0x0,%eax
084014e0 +0xb8:  jmp    08401502 <+0xda>
084014e2 +0xba:  mov    0xc(%ebp),%eax
084014e5 +0xbd:  movb   $0x1,0x24(%eax)
084014e9 +0xc1:  mov    $0x1,%eax
084014ee +0xc6:  jmp    08401502 <+0xda>
084014f0 +0xc8:  mov    0xc(%ebp),%eax
084014f3 +0xcb:  movl   $0x4,0x5344(%eax)
084014fd +0xd5:  mov    $0x0,%eax
08401502 +0xda:  leave
08401503 +0xdb:  ret
```

## 反编译 C

```c
// DB_CreateCharac::_updateCreateEventCharacter @ 0x8401428

/* DB_CreateCharac::_updateCreateEventCharacter(SIG_CREATE_CHARAC*) */

undefined4 __thiscall
DB_CreateCharac::_updateCreateEventCharacter(DB_CreateCharac *this,SIG_CREATE_CHARAC *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  MySQL *this_00;
  undefined4 uVar4;
  
  iVar3 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  if (0x4b055d6f < iVar3) {
    iVar3 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    if (iVar3 < 0x4b3bbf51) {
      bVar1 = true;
      goto LAB_08401460;
    }
  }
  bVar1 = false;
LAB_08401460:
  if (bVar1) {
    this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
    uVar4 = NumberToString(*(uint *)param_1,0);
    MySQL::set_query(this_00,"upDate member_login set event_charac_flag = 1 where m_id = %s",uVar4);
    cVar2 = MySQL::exec(this_00,true);
    if (cVar2 == '\x01') {
      param_1[0x24] = (SIG_CREATE_CHARAC)0x1;
      uVar4 = 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x5344) = 2;
      uVar4 = 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x5344) = 4;
    uVar4 = 0;
  }
  return uVar4;
}
```
