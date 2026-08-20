# GetReturnUserInfo

`_ZN8DB_Login17GetReturnUserInfoEP14SIG_LOGIN_DATA`

`DB_Login::GetReturnUserInfo(SIG_LOGIN_DATA*)`

| 类 | 地址 |
|---|---|
| `DB_Login` | `0x08410ad8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08410ad8  _ZN8DB_Login17GetReturnUserInfoEP14SIG_LOGIN_DATA
#           DB_Login::GetReturnUserInfo(SIG_LOGIN_DATA*)
# range [0x08410ad8, 0x08410c11]
08410ad8 +0x000:  push   %ebp
08410ad9 +0x001:  mov    %esp,%ebp
08410adb +0x003:  sub    $0x28,%esp
08410ade +0x006:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08410ae3 +0x00b:  movl   $0x0,0x8(%esp)
08410aeb +0x013:  movl   $0x9,0x4(%esp)
08410af3 +0x01b:  mov    %eax,(%esp)
08410af6 +0x01e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08410afb +0x023:  mov    %eax,-0x10(%ebp)
08410afe +0x026:  mov    0xc(%ebp),%eax
08410b01 +0x029:  mov    0xc0(%eax),%eax
08410b07 +0x02f:  movl   $0x0,0x4(%esp)
08410b0f +0x037:  mov    %eax,(%esp)
08410b12 +0x03a:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08410b17 +0x03f:  mov    %eax,0x8(%esp)
08410b1b +0x043:  movl   $"seLect unix_timestamp(expire_time), first_login from return_user where m_id=%s and expire_time > now()",0x4(%esp)
08410b23 +0x04b:  mov    -0x10(%ebp),%eax
08410b26 +0x04e:  mov    %eax,(%esp)
08410b29 +0x051:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08410b2e +0x056:  movl   $0x1,0x4(%esp)
08410b36 +0x05e:  mov    -0x10(%ebp),%eax
08410b39 +0x061:  mov    %eax,(%esp)
08410b3c +0x064:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08410b41 +0x069:  xor    $0x1,%eax
08410b44 +0x06c:  test   %al,%al
08410b46 +0x06e:  je     08410b52 <+0x7a>
08410b48 +0x070:  mov    $0x0,%eax
08410b4d +0x075:  jmp    08410c0f <+0x137>
08410b52 +0x07a:  mov    -0x10(%ebp),%eax
08410b55 +0x07d:  mov    %eax,(%esp)
08410b58 +0x080:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08410b5d +0x085:  mov    %eax,-0xc(%ebp)
08410b60 +0x088:  cmpl   $0x0,-0xc(%ebp)
08410b64 +0x08c:  jne    08410b7a <+0xa2>
08410b66 +0x08e:  mov    0xc(%ebp),%eax
08410b69 +0x091:  movb   $0x0,0x3f04(%eax)
08410b70 +0x098:  mov    $0x1,%eax
08410b75 +0x09d:  jmp    08410c0f <+0x137>
08410b7a +0x0a2:  mov    -0x10(%ebp),%eax
08410b7d +0x0a5:  mov    %eax,(%esp)
08410b80 +0x0a8:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08410b85 +0x0ad:  xor    $0x1,%eax
08410b88 +0x0b0:  test   %al,%al
08410b8a +0x0b2:  je     08410b93 <+0xbb>
08410b8c +0x0b4:  mov    $0x0,%eax
08410b91 +0x0b9:  jmp    08410c0f <+0x137>
08410b93 +0x0bb:  mov    0xc(%ebp),%eax
08410b96 +0x0be:  add    $0x3f08,%eax
08410b9b +0x0c3:  mov    %eax,0x8(%esp)
08410b9f +0x0c7:  movl   $0x0,0x4(%esp)
08410ba7 +0x0cf:  mov    -0x10(%ebp),%eax
08410baa +0x0d2:  mov    %eax,(%esp)
08410bad +0x0d5:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08410bb2 +0x0da:  xor    $0x1,%eax
08410bb5 +0x0dd:  test   %al,%al
08410bb7 +0x0df:  je     08410bc0 <+0xe8>
08410bb9 +0x0e1:  mov    $0x0,%eax
08410bbe +0x0e6:  jmp    08410c0f <+0x137>
08410bc0 +0x0e8:  movl   $0x0,-0x14(%ebp)
08410bc7 +0x0ef:  lea    -0x14(%ebp),%eax
08410bca +0x0f2:  mov    %eax,0x8(%esp)
08410bce +0x0f6:  movl   $0x1,0x4(%esp)
08410bd6 +0x0fe:  mov    -0x10(%ebp),%eax
08410bd9 +0x101:  mov    %eax,(%esp)
08410bdc +0x104:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08410be1 +0x109:  xor    $0x1,%eax
08410be4 +0x10c:  test   %al,%al
08410be6 +0x10e:  je     08410bef <+0x117>
08410be8 +0x110:  mov    $0x0,%eax
08410bed +0x115:  jmp    08410c0f <+0x137>
08410bef +0x117:  mov    -0x14(%ebp),%eax
08410bf2 +0x11a:  test   %eax,%eax
08410bf4 +0x11c:  sete   %dl
08410bf7 +0x11f:  mov    0xc(%ebp),%eax
08410bfa +0x122:  mov    %dl,0x3f05(%eax)
08410c00 +0x128:  mov    0xc(%ebp),%eax
08410c03 +0x12b:  movb   $0x1,0x3f04(%eax)
08410c0a +0x132:  mov    $0x1,%eax
08410c0f +0x137:  leave
08410c10 +0x138:  ret
08410c11 +0x139:  nop
```

## 反编译 C

```c
// DB_Login::GetReturnUserInfo @ 0x8410ad8

/* DB_Login::GetReturnUserInfo(SIG_LOGIN_DATA*) */

undefined4 __thiscall DB_Login::GetReturnUserInfo(DB_Login *this,SIG_LOGIN_DATA *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int local_18;
  MySQL *local_14;
  int local_10;
  
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  uVar2 = NumberToString(*(uint *)(param_1 + 0xc0),0);
  MySQL::set_query(local_14,
                   "seLect unix_timestamp(expire_time), first_login from return_user where m_id=%s and expire_time > now()"
                   ,uVar2);
  cVar1 = MySQL::exec(local_14,true);
  if (cVar1 == '\x01') {
    local_10 = MySQL::get_n_rows(local_14);
    if (local_10 == 0) {
      param_1[0x3f04] = (SIG_LOGIN_DATA)0x0;
      uVar2 = 1;
    }
    else {
      cVar1 = MySQL::fetch(local_14);
      if (cVar1 == '\x01') {
        cVar1 = MySQL::get_int(local_14,0,(int *)(param_1 + 0x3f08));
        if (cVar1 == '\x01') {
          local_18 = 0;
          cVar1 = MySQL::get_int(local_14,1,&local_18);
          if (cVar1 == '\x01') {
            param_1[0x3f05] = (SIG_LOGIN_DATA)(local_18 == 0);
            param_1[0x3f04] = (SIG_LOGIN_DATA)0x1;
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
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
