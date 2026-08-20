# UpdateAccountMemberBonusFatigue

`_ZN15DB_UpdateLogout31UpdateAccountMemberBonusFatigueEjs`

`DB_UpdateLogout::UpdateAccountMemberBonusFatigue(unsigned int, short)`

| 类 | 地址 |
|---|---|
| `DB_UpdateLogout` | `0x08418442` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08418442  _ZN15DB_UpdateLogout31UpdateAccountMemberBonusFatigueEjs
#           DB_UpdateLogout::UpdateAccountMemberBonusFatigue(unsigned int, short)
# range [0x08418442, 0x0841852d]
08418442 +0x00:  push   %ebp
08418443 +0x01:  mov    %esp,%ebp
08418445 +0x03:  push   %ebx
08418446 +0x04:  sub    $0x34,%esp
08418449 +0x07:  mov    0x10(%ebp),%eax
0841844c +0x0a:  mov    %ax,-0x1c(%ebp)
08418450 +0x0e:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08418455 +0x13:  movl   $0x0,0x8(%esp)
0841845d +0x1b:  movl   $0x9,0x4(%esp)
08418465 +0x23:  mov    %eax,(%esp)
08418468 +0x26:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0841846d +0x2b:  mov    %eax,-0xc(%ebp)
08418470 +0x2e:  movl   $0x0,0x4(%esp)
08418478 +0x36:  mov    0xc(%ebp),%eax
0841847b +0x39:  mov    %eax,(%esp)
0841847e +0x3c:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08418483 +0x41:  movswl -0x1c(%ebp),%edx
08418487 +0x45:  mov    %eax,0xc(%esp)
0841848b +0x49:  mov    %edx,0x8(%esp)
0841848f +0x4d:  movl   $"upDate login_common set member_bonus_fatigue=%d where m_id=%s",0x4(%esp)
08418497 +0x55:  mov    -0xc(%ebp),%eax
0841849a +0x58:  mov    %eax,(%esp)
0841849d +0x5b:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084184a2 +0x60:  movl   $0x1,0x4(%esp)
084184aa +0x68:  mov    -0xc(%ebp),%eax
084184ad +0x6b:  mov    %eax,(%esp)
084184b0 +0x6e:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084184b5 +0x73:  xor    $0x1,%eax
084184b8 +0x76:  test   %al,%al
084184ba +0x78:  jne    084184cd <+0x8b>
084184bc +0x7a:  mov    -0xc(%ebp),%eax
084184bf +0x7d:  mov    %eax,(%esp)
084184c2 +0x80:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
084184c7 +0x85:  or     %edx,%eax
084184c9 +0x87:  test   %eax,%eax
084184cb +0x89:  jne    084184d4 <+0x92>
084184cd +0x8b:  mov    $0x1,%eax
084184d2 +0x90:  jmp    084184d9 <+0x97>
084184d4 +0x92:  mov    $0x0,%eax
084184d9 +0x97:  test   %al,%al
084184db +0x99:  je     08418527 <+0xe5>
084184dd +0x9b:  movswl -0x1c(%ebp),%ebx
084184e1 +0x9f:  movl   $0x0,0x4(%esp)
084184e9 +0xa7:  mov    0xc(%ebp),%eax
084184ec +0xaa:  mov    %eax,(%esp)
084184ef +0xad:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084184f4 +0xb2:  mov    %ebx,0xc(%esp)
084184f8 +0xb6:  mov    %eax,0x8(%esp)
084184fc +0xba:  movl   $"inSert into login_common(m_id,member_bonus_fatigue,update_time) values(%s,%d,unix_timestamp(now()))",0x4(%esp)
08418504 +0xc2:  mov    -0xc(%ebp),%eax
08418507 +0xc5:  mov    %eax,(%esp)
0841850a +0xc8:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0841850f +0xcd:  movl   $0x1,0x4(%esp)
08418517 +0xd5:  mov    -0xc(%ebp),%eax
0841851a +0xd8:  mov    %eax,(%esp)
0841851d +0xdb:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08418522 +0xe0:  xor    $0x1,%eax
08418525 +0xe3:  test   %al,%al
08418527 +0xe5:  add    $0x34,%esp
0841852a +0xe8:  pop    %ebx
0841852b +0xe9:  pop    %ebp
0841852c +0xea:  ret
0841852d +0xeb:  nop
```

## 反编译 C

```c
// DB_UpdateLogout::UpdateAccountMemberBonusFatigue @ 0x8418442

/* DB_UpdateLogout::UpdateAccountMemberBonusFatigue(unsigned int, short) */

uint __thiscall
DB_UpdateLogout::UpdateAccountMemberBonusFatigue(DB_UpdateLogout *this,uint param_1,short param_2)

{
  char cVar1;
  MySQL *this_00;
  undefined4 uVar2;
  uint uVar3;
  longlong lVar4;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  uVar2 = NumberToString(param_1,0);
  MySQL::set_query(this_00,"upDate login_common set member_bonus_fatigue=%d where m_id=%s",
                   (int)param_2,uVar2);
  cVar1 = MySQL::exec(this_00,true);
  if (cVar1 == '\x01') {
    lVar4 = MySQL::getAffectedRowCount(this_00);
    if (lVar4 != 0) {
      uVar3 = 0;
      goto LAB_084184d9;
    }
  }
  uVar3 = 1;
LAB_084184d9:
  if ((char)uVar3 != '\0') {
    uVar2 = NumberToString(param_1,0);
    MySQL::set_query(this_00,
                     "inSert into login_common(m_id,member_bonus_fatigue,update_time) values(%s,%d,unix_timestamp(now()))"
                     ,uVar2,(int)param_2);
    uVar3 = MySQL::exec(this_00,true);
    uVar3 = uVar3 ^ 1;
  }
  return uVar3;
}
```
