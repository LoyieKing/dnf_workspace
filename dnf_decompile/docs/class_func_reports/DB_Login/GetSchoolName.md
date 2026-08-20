# GetSchoolName

`_ZN8DB_Login13GetSchoolNameEiPc`

`DB_Login::GetSchoolName(int, char*)`

| 类 | 地址 |
|---|---|
| `DB_Login` | `0x08414446` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08414446  _ZN8DB_Login13GetSchoolNameEiPc
#           DB_Login::GetSchoolName(int, char*)
# range [0x08414446, 0x08414511]
08414446 +0x00:  push   %ebp
08414447 +0x01:  mov    %esp,%ebp
08414449 +0x03:  sub    $0x28,%esp
0841444c +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08414451 +0x0b:  movl   $0x0,0x8(%esp)
08414459 +0x13:  movl   $0x10,0x4(%esp)
08414461 +0x1b:  mov    %eax,(%esp)
08414464 +0x1e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08414469 +0x23:  mov    %eax,-0xc(%ebp)
0841446c +0x26:  mov    0xc(%ebp),%eax
0841446f +0x29:  mov    %eax,0x8(%esp)
08414473 +0x2d:  movl   $"seLect school_name from school_info where school_id=%d",0x4(%esp)
0841447b +0x35:  mov    -0xc(%ebp),%eax
0841447e +0x38:  mov    %eax,(%esp)
08414481 +0x3b:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08414486 +0x40:  movl   $0x1,0x4(%esp)
0841448e +0x48:  mov    -0xc(%ebp),%eax
08414491 +0x4b:  mov    %eax,(%esp)
08414494 +0x4e:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08414499 +0x53:  xor    $0x1,%eax
0841449c +0x56:  test   %al,%al
0841449e +0x58:  je     084144a7 <+0x61>
084144a0 +0x5a:  mov    $0x0,%eax
084144a5 +0x5f:  jmp    08414510 <+0xca>
084144a7 +0x61:  mov    -0xc(%ebp),%eax
084144aa +0x64:  mov    %eax,(%esp)
084144ad +0x67:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
084144b2 +0x6c:  test   %eax,%eax
084144b4 +0x6e:  sete   %al
084144b7 +0x71:  test   %al,%al
084144b9 +0x73:  je     084144c2 <+0x7c>
084144bb +0x75:  mov    $0x0,%eax
084144c0 +0x7a:  jmp    08414510 <+0xca>
084144c2 +0x7c:  mov    -0xc(%ebp),%eax
084144c5 +0x7f:  mov    %eax,(%esp)
084144c8 +0x82:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
084144cd +0x87:  xor    $0x1,%eax
084144d0 +0x8a:  test   %al,%al
084144d2 +0x8c:  je     084144db <+0x95>
084144d4 +0x8e:  mov    $0x0,%eax
084144d9 +0x93:  jmp    08414510 <+0xca>
084144db +0x95:  movl   $0x28,0xc(%esp)
084144e3 +0x9d:  mov    0x10(%ebp),%eax
084144e6 +0xa0:  mov    %eax,0x8(%esp)
084144ea +0xa4:  movl   $0x0,0x4(%esp)
084144f2 +0xac:  mov    -0xc(%ebp),%eax
084144f5 +0xaf:  mov    %eax,(%esp)
084144f8 +0xb2:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
084144fd +0xb7:  xor    $0x1,%eax
08414500 +0xba:  test   %al,%al
08414502 +0xbc:  je     0841450b <+0xc5>
08414504 +0xbe:  mov    $0x0,%eax
08414509 +0xc3:  jmp    08414510 <+0xca>
0841450b +0xc5:  mov    $0x1,%eax
08414510 +0xca:  leave
08414511 +0xcb:  ret
```

## 反编译 C

```c
// DB_Login::GetSchoolName @ 0x8414446

/* DB_Login::GetSchoolName(int, char*) */

undefined4 __thiscall DB_Login::GetSchoolName(DB_Login *this,int param_1,char *param_2)

{
  char cVar1;
  MySQL *this_00;
  undefined4 uVar2;
  int iVar3;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,0x10,0);
  MySQL::set_query(this_00,"seLect school_name from school_info where school_id=%d",param_1);
  cVar1 = MySQL::exec(this_00,true);
  if (cVar1 == '\x01') {
    iVar3 = MySQL::get_n_rows(this_00);
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      cVar1 = MySQL::fetch(this_00);
      if (cVar1 == '\x01') {
        cVar1 = MySQL::get_str(this_00,0,param_2,0x28);
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
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
