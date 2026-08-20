# _IsPunishedUser

`_ZN8DB_Login15_IsPunishedUserEj`

`DB_Login::_IsPunishedUser(unsigned int)`

| 类 | 地址 |
|---|---|
| `DB_Login` | `0x084129d6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084129d6  _ZN8DB_Login15_IsPunishedUserEj
#           DB_Login::_IsPunishedUser(unsigned int)
# range [0x084129d6, 0x08412ac7]
084129d6 +0x00:  push   %ebp
084129d7 +0x01:  mov    %esp,%ebp
084129d9 +0x03:  sub    $0x28,%esp
084129dc +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
084129e1 +0x0b:  movl   $0x0,0x8(%esp)
084129e9 +0x13:  movl   $0x1,0x4(%esp)
084129f1 +0x1b:  mov    %eax,(%esp)
084129f4 +0x1e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
084129f9 +0x23:  mov    %eax,-0xc(%ebp)
084129fc +0x26:  movl   $0x0,0x4(%esp)
08412a04 +0x2e:  mov    0xc(%ebp),%eax
08412a07 +0x31:  mov    %eax,(%esp)
08412a0a +0x34:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08412a0f +0x39:  mov    %eax,0x8(%esp)
08412a13 +0x3d:  movl   $"seLect count(*) from user_ban where m_id=%s and status=1",0x4(%esp)
08412a1b +0x45:  mov    -0xc(%ebp),%eax
08412a1e +0x48:  mov    %eax,(%esp)
08412a21 +0x4b:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08412a26 +0x50:  movl   $0x1,0x4(%esp)
08412a2e +0x58:  mov    -0xc(%ebp),%eax
08412a31 +0x5b:  mov    %eax,(%esp)
08412a34 +0x5e:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08412a39 +0x63:  xor    $0x1,%eax
08412a3c +0x66:  test   %al,%al
08412a3e +0x68:  je     08412a47 <+0x71>
08412a40 +0x6a:  mov    $0x0,%eax
08412a45 +0x6f:  jmp    08412ac6 <+0xf0>
08412a47 +0x71:  mov    -0xc(%ebp),%eax
08412a4a +0x74:  mov    %eax,(%esp)
08412a4d +0x77:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08412a52 +0x7c:  test   %eax,%eax
08412a54 +0x7e:  sete   %al
08412a57 +0x81:  test   %al,%al
08412a59 +0x83:  je     08412a62 <+0x8c>
08412a5b +0x85:  mov    $0x0,%eax
08412a60 +0x8a:  jmp    08412ac6 <+0xf0>
08412a62 +0x8c:  mov    -0xc(%ebp),%eax
08412a65 +0x8f:  mov    %eax,(%esp)
08412a68 +0x92:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08412a6d +0x97:  xor    $0x1,%eax
08412a70 +0x9a:  test   %al,%al
08412a72 +0x9c:  je     08412a7b <+0xa5>
08412a74 +0x9e:  mov    $0x0,%eax
08412a79 +0xa3:  jmp    08412ac6 <+0xf0>
08412a7b +0xa5:  movl   $0x0,-0x10(%ebp)
08412a82 +0xac:  lea    -0x10(%ebp),%eax
08412a85 +0xaf:  mov    %eax,0x8(%esp)
08412a89 +0xb3:  movl   $0x0,0x4(%esp)
08412a91 +0xbb:  mov    -0xc(%ebp),%eax
08412a94 +0xbe:  mov    %eax,(%esp)
08412a97 +0xc1:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08412a9c +0xc6:  xor    $0x1,%eax
08412a9f +0xc9:  test   %al,%al
08412aa1 +0xcb:  jne    08412aaa <+0xd4>
08412aa3 +0xcd:  mov    -0x10(%ebp),%eax
08412aa6 +0xd0:  test   %eax,%eax
08412aa8 +0xd2:  jne    08412ab1 <+0xdb>
08412aaa +0xd4:  mov    $0x1,%eax
08412aaf +0xd9:  jmp    08412ab6 <+0xe0>
08412ab1 +0xdb:  mov    $0x0,%eax
08412ab6 +0xe0:  test   %al,%al
08412ab8 +0xe2:  je     08412ac1 <+0xeb>
08412aba +0xe4:  mov    $0x0,%eax
08412abf +0xe9:  jmp    08412ac6 <+0xf0>
08412ac1 +0xeb:  mov    $0x1,%eax
08412ac6 +0xf0:  leave
08412ac7 +0xf1:  ret
```

## 反编译 C

```c
// DB_Login::_IsPunishedUser @ 0x84129d6

/* DB_Login::_IsPunishedUser(unsigned int) */

undefined4 __thiscall DB_Login::_IsPunishedUser(DB_Login *this,uint param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int local_14;
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  uVar3 = NumberToString(param_1,0);
  MySQL::set_query(local_10,"seLect count(*) from user_ban where m_id=%s and status=1",uVar3);
  cVar2 = MySQL::exec(local_10,true);
  if (cVar2 == '\x01') {
    iVar4 = MySQL::get_n_rows(local_10);
    if (iVar4 == 0) {
      uVar3 = 0;
    }
    else {
      cVar2 = MySQL::fetch(local_10);
      if (cVar2 == '\x01') {
        local_14 = 0;
        cVar2 = MySQL::get_int(local_10,0,&local_14);
        if ((cVar2 == '\x01') && (local_14 != 0)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          uVar3 = 0;
        }
        else {
          uVar3 = 1;
        }
      }
      else {
        uVar3 = 0;
      }
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
