# GetDailyCleanPadPoint

`_ZN8DB_Login21GetDailyCleanPadPointEP14SIG_LOGIN_DATA`

`DB_Login::GetDailyCleanPadPoint(SIG_LOGIN_DATA*)`

| 类 | 地址 |
|---|---|
| `DB_Login` | `0x08410c12` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08410c12  _ZN8DB_Login21GetDailyCleanPadPointEP14SIG_LOGIN_DATA
#           DB_Login::GetDailyCleanPadPoint(SIG_LOGIN_DATA*)
# range [0x08410c12, 0x08410cf5]
08410c12 +0x00:  push   %ebp
08410c13 +0x01:  mov    %esp,%ebp
08410c15 +0x03:  sub    $0x28,%esp
08410c18 +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08410c1d +0x0b:  movl   $0x0,0x8(%esp)
08410c25 +0x13:  movl   $0x6,0x4(%esp)
08410c2d +0x1b:  mov    %eax,(%esp)
08410c30 +0x1e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08410c35 +0x23:  mov    %eax,-0xc(%ebp)
08410c38 +0x26:  mov    0xc(%ebp),%eax
08410c3b +0x29:  mov    0xc0(%eax),%eax
08410c41 +0x2f:  movl   $0x0,0x4(%esp)
08410c49 +0x37:  mov    %eax,(%esp)
08410c4c +0x3a:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08410c51 +0x3f:  mov    %eax,0x8(%esp)
08410c55 +0x43:  movl   $"seLect cleanpad_point from member_login where m_id=%s",0x4(%esp)
08410c5d +0x4b:  mov    -0xc(%ebp),%eax
08410c60 +0x4e:  mov    %eax,(%esp)
08410c63 +0x51:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08410c68 +0x56:  movl   $0x1,0x4(%esp)
08410c70 +0x5e:  mov    -0xc(%ebp),%eax
08410c73 +0x61:  mov    %eax,(%esp)
08410c76 +0x64:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08410c7b +0x69:  xor    $0x1,%eax
08410c7e +0x6c:  test   %al,%al
08410c80 +0x6e:  jne    08410c91 <+0x7f>
08410c82 +0x70:  mov    -0xc(%ebp),%eax
08410c85 +0x73:  mov    %eax,(%esp)
08410c88 +0x76:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08410c8d +0x7b:  test   %eax,%eax
08410c8f +0x7d:  jne    08410c98 <+0x86>
08410c91 +0x7f:  mov    $0x1,%eax
08410c96 +0x84:  jmp    08410c9d <+0x8b>
08410c98 +0x86:  mov    $0x0,%eax
08410c9d +0x8b:  test   %al,%al
08410c9f +0x8d:  je     08410ca8 <+0x96>
08410ca1 +0x8f:  mov    $0x0,%eax
08410ca6 +0x94:  jmp    08410cf3 <+0xe1>
08410ca8 +0x96:  mov    -0xc(%ebp),%eax
08410cab +0x99:  mov    %eax,(%esp)
08410cae +0x9c:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08410cb3 +0xa1:  xor    $0x1,%eax
08410cb6 +0xa4:  test   %al,%al
08410cb8 +0xa6:  je     08410cc1 <+0xaf>
08410cba +0xa8:  mov    $0x0,%eax
08410cbf +0xad:  jmp    08410cf3 <+0xe1>
08410cc1 +0xaf:  mov    0xc(%ebp),%eax
08410cc4 +0xb2:  add    $0x3a4c,%eax
08410cc9 +0xb7:  mov    %eax,0x8(%esp)
08410ccd +0xbb:  movl   $0x0,0x4(%esp)
08410cd5 +0xc3:  mov    -0xc(%ebp),%eax
08410cd8 +0xc6:  mov    %eax,(%esp)
08410cdb +0xc9:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
08410ce0 +0xce:  xor    $0x1,%eax
08410ce3 +0xd1:  test   %al,%al
08410ce5 +0xd3:  je     08410cee <+0xdc>
08410ce7 +0xd5:  mov    $0x0,%eax
08410cec +0xda:  jmp    08410cf3 <+0xe1>
08410cee +0xdc:  mov    $0x1,%eax
08410cf3 +0xe1:  leave
08410cf4 +0xe2:  ret
08410cf5 +0xe3:  nop
```

## 反编译 C

```c
// DB_Login::GetDailyCleanPadPoint @ 0x8410c12

/* DB_Login::GetDailyCleanPadPoint(SIG_LOGIN_DATA*) */

undefined4 __thiscall DB_Login::GetDailyCleanPadPoint(DB_Login *this,SIG_LOGIN_DATA *param_1)

{
  bool bVar1;
  char cVar2;
  MySQL *this_00;
  undefined4 uVar3;
  int iVar4;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  uVar3 = NumberToString(*(uint *)(param_1 + 0xc0),0);
  MySQL::set_query(this_00,"seLect cleanpad_point from member_login where m_id=%s",uVar3);
  cVar2 = MySQL::exec(this_00,true);
  if (cVar2 == '\x01') {
    iVar4 = MySQL::get_n_rows(this_00);
    if (iVar4 != 0) {
      bVar1 = false;
      goto LAB_08410c9d;
    }
  }
  bVar1 = true;
LAB_08410c9d:
  if (bVar1) {
    uVar3 = 0;
  }
  else {
    cVar2 = MySQL::fetch(this_00);
    if (cVar2 == '\x01') {
      cVar2 = MySQL::get_uint(this_00,0,(uint *)(param_1 + 0x3a4c));
      if (cVar2 == '\x01') {
        uVar3 = 1;
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}
```
