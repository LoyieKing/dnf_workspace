# GetWhiteAccount

`_ZN8DB_Login15GetWhiteAccountEP14SIG_LOGIN_DATA`

`DB_Login::GetWhiteAccount(SIG_LOGIN_DATA*)`

| 类 | 地址 |
|---|---|
| `DB_Login` | `0x084143ac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084143ac  _ZN8DB_Login15GetWhiteAccountEP14SIG_LOGIN_DATA
#           DB_Login::GetWhiteAccount(SIG_LOGIN_DATA*)
# range [0x084143ac, 0x08414445]
084143ac +0x00:  push   %ebp
084143ad +0x01:  mov    %esp,%ebp
084143af +0x03:  sub    $0x28,%esp
084143b2 +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
084143b7 +0x0b:  movl   $0x0,0x8(%esp)
084143bf +0x13:  movl   $0x1,0x4(%esp)
084143c7 +0x1b:  mov    %eax,(%esp)
084143ca +0x1e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
084143cf +0x23:  mov    %eax,-0xc(%ebp)
084143d2 +0x26:  mov    0xc(%ebp),%eax
084143d5 +0x29:  mov    0xc0(%eax),%eax
084143db +0x2f:  movl   $0x0,0x4(%esp)
084143e3 +0x37:  mov    %eax,(%esp)
084143e6 +0x3a:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084143eb +0x3f:  mov    %eax,0x8(%esp)
084143ef +0x43:  movl   $"seLect m_id from member_white_account where m_id=%s",0x4(%esp)
084143f7 +0x4b:  mov    -0xc(%ebp),%eax
084143fa +0x4e:  mov    %eax,(%esp)
084143fd +0x51:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08414402 +0x56:  movl   $0x1,0x4(%esp)
0841440a +0x5e:  mov    -0xc(%ebp),%eax
0841440d +0x61:  mov    %eax,(%esp)
08414410 +0x64:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08414415 +0x69:  xor    $0x1,%eax
08414418 +0x6c:  test   %al,%al
0841441a +0x6e:  je     08414423 <+0x77>
0841441c +0x70:  mov    $0x0,%eax
08414421 +0x75:  jmp    08414443 <+0x97>
08414423 +0x77:  mov    -0xc(%ebp),%eax
08414426 +0x7a:  mov    %eax,(%esp)
08414429 +0x7d:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0841442e +0x82:  test   %eax,%eax
08414430 +0x84:  setne  %al
08414433 +0x87:  test   %al,%al
08414435 +0x89:  je     0841443e <+0x92>
08414437 +0x8b:  mov    $0x1,%eax
0841443c +0x90:  jmp    08414443 <+0x97>
0841443e +0x92:  mov    $0x0,%eax
08414443 +0x97:  leave
08414444 +0x98:  ret
08414445 +0x99:  nop
```

## 反编译 C

```c
// DB_Login::GetWhiteAccount @ 0x84143ac

/* DB_Login::GetWhiteAccount(SIG_LOGIN_DATA*) */

undefined4 __thiscall DB_Login::GetWhiteAccount(DB_Login *this,SIG_LOGIN_DATA *param_1)

{
  char cVar1;
  MySQL *this_00;
  undefined4 uVar2;
  int iVar3;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  uVar2 = NumberToString(*(uint *)(param_1 + 0xc0),0);
  MySQL::set_query(this_00,"seLect m_id from member_white_account where m_id=%s",uVar2);
  cVar1 = MySQL::exec(this_00,true);
  if (cVar1 == '\x01') {
    iVar3 = MySQL::get_n_rows(this_00);
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
