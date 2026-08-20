# GetLoginCommonData

`_ZN8DB_Login18GetLoginCommonDataEP14SIG_LOGIN_DATA`

`DB_Login::GetLoginCommonData(SIG_LOGIN_DATA*)`

| 类 | 地址 |
|---|---|
| `DB_Login` | `0x0841090c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0841090c  _ZN8DB_Login18GetLoginCommonDataEP14SIG_LOGIN_DATA
#           DB_Login::GetLoginCommonData(SIG_LOGIN_DATA*)
# range [0x0841090c, 0x08410ad7]
0841090c +0x000:  push   %ebp
0841090d +0x001:  mov    %esp,%ebp
0841090f +0x003:  sub    $0x38,%esp
08410912 +0x006:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08410917 +0x00b:  movl   $0x0,0x8(%esp)
0841091f +0x013:  movl   $0x9,0x4(%esp)
08410927 +0x01b:  mov    %eax,(%esp)
0841092a +0x01e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0841092f +0x023:  mov    %eax,-0x14(%ebp)
08410932 +0x026:  mov    0xc(%ebp),%eax
08410935 +0x029:  mov    0xc0(%eax),%eax
0841093b +0x02f:  movl   $0x0,0x4(%esp)
08410943 +0x037:  mov    %eax,(%esp)
08410946 +0x03a:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0841094b +0x03f:  mov    %eax,0x8(%esp)
0841094f +0x043:  movl   $"seLect  member_bonus_fatigue , update_time , login_ip , inform_notice  from login_common where m_id=%s",0x4(%esp)
08410957 +0x04b:  mov    -0x14(%ebp),%eax
0841095a +0x04e:  mov    %eax,(%esp)
0841095d +0x051:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08410962 +0x056:  movl   $0x1,0x4(%esp)
0841096a +0x05e:  mov    -0x14(%ebp),%eax
0841096d +0x061:  mov    %eax,(%esp)
08410970 +0x064:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08410975 +0x069:  xor    $0x1,%eax
08410978 +0x06c:  test   %al,%al
0841097a +0x06e:  je     08410986 <+0x7a>
0841097c +0x070:  mov    $0x0,%eax
08410981 +0x075:  jmp    08410ad5 <+0x1c9>
08410986 +0x07a:  mov    -0x14(%ebp),%eax
08410989 +0x07d:  mov    %eax,(%esp)
0841098c +0x080:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08410991 +0x085:  mov    %eax,-0x10(%ebp)
08410994 +0x088:  cmpl   $0x0,-0x10(%ebp)
08410998 +0x08c:  jne    084109f0 <+0xe4>
0841099a +0x08e:  mov    0xc(%ebp),%eax
0841099d +0x091:  movw   $0x0,0x3f5e(%eax)
084109a6 +0x09a:  mov    0xc(%ebp),%eax
084109a9 +0x09d:  add    $0x4114,%eax
084109ae +0x0a2:  movl   $0x10,0x8(%esp)
084109b6 +0x0aa:  movl   $0x0,0x4(%esp)
084109be +0x0b2:  mov    %eax,(%esp)
084109c1 +0x0b5:  call   0807dcc0 <_init+0x5b8>
084109c6 +0x0ba:  mov    0xc(%ebp),%eax
084109c9 +0x0bd:  add    $0x4125,%eax
084109ce +0x0c2:  movl   $0x10,0x8(%esp)
084109d6 +0x0ca:  movl   $0x0,0x4(%esp)
084109de +0x0d2:  mov    %eax,(%esp)
084109e1 +0x0d5:  call   0807dcc0 <_init+0x5b8>
084109e6 +0x0da:  mov    $0x1,%eax
084109eb +0x0df:  jmp    08410ad5 <+0x1c9>
084109f0 +0x0e4:  mov    -0x14(%ebp),%eax
084109f3 +0x0e7:  mov    %eax,(%esp)
084109f6 +0x0ea:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
084109fb +0x0ef:  xor    $0x1,%eax
084109fe +0x0f2:  test   %al,%al
08410a00 +0x0f4:  je     08410a0c <+0x100>
08410a02 +0x0f6:  mov    $0x0,%eax
08410a07 +0x0fb:  jmp    08410ad5 <+0x1c9>
08410a0c +0x100:  movl   $0x0,-0xc(%ebp)
08410a13 +0x107:  movl   $0x0,-0x18(%ebp)
08410a1a +0x10e:  mov    -0xc(%ebp),%eax
08410a1d +0x111:  addl   $0x1,-0xc(%ebp)
08410a21 +0x115:  lea    -0x18(%ebp),%edx
08410a24 +0x118:  mov    %edx,0x8(%esp)
08410a28 +0x11c:  mov    %eax,0x4(%esp)
08410a2c +0x120:  mov    -0x14(%ebp),%eax
08410a2f +0x123:  mov    %eax,(%esp)
08410a32 +0x126:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08410a37 +0x12b:  xor    $0x1,%eax
08410a3a +0x12e:  test   %al,%al
08410a3c +0x130:  je     08410a48 <+0x13c>
08410a3e +0x132:  mov    $0x0,%eax
08410a43 +0x137:  jmp    08410ad5 <+0x1c9>
08410a48 +0x13c:  movl   $0x0,-0x1c(%ebp)
08410a4f +0x143:  mov    -0xc(%ebp),%eax
08410a52 +0x146:  addl   $0x1,-0xc(%ebp)
08410a56 +0x14a:  lea    -0x1c(%ebp),%edx
08410a59 +0x14d:  mov    %edx,0x8(%esp)
08410a5d +0x151:  mov    %eax,0x4(%esp)
08410a61 +0x155:  mov    -0x14(%ebp),%eax
08410a64 +0x158:  mov    %eax,(%esp)
08410a67 +0x15b:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08410a6c +0x160:  xor    $0x1,%eax
08410a6f +0x163:  test   %al,%al
08410a71 +0x165:  je     08410a7a <+0x16e>
08410a73 +0x167:  mov    $0x0,%eax
08410a78 +0x16c:  jmp    08410ad5 <+0x1c9>
08410a7a +0x16e:  mov    -0x1c(%ebp),%eax
08410a7d +0x171:  mov    %eax,%edx
08410a7f +0x173:  mov    0xc(%ebp),%eax
08410a82 +0x176:  mov    %edx,0x3f60(%eax)
08410a88 +0x17c:  mov    -0x18(%ebp),%eax
08410a8b +0x17f:  mov    %eax,%edx
08410a8d +0x181:  mov    0xc(%ebp),%eax
08410a90 +0x184:  mov    %dx,0x3f5e(%eax)
08410a97 +0x18b:  mov    0xc(%ebp),%eax
08410a9a +0x18e:  lea    0x4114(%eax),%edx
08410aa0 +0x194:  mov    -0xc(%ebp),%eax
08410aa3 +0x197:  addl   $0x1,-0xc(%ebp)
08410aa7 +0x19b:  movl   $0x10,0xc(%esp)
08410aaf +0x1a3:  mov    %edx,0x8(%esp)
08410ab3 +0x1a7:  mov    %eax,0x4(%esp)
08410ab7 +0x1ab:  mov    -0x14(%ebp),%eax
08410aba +0x1ae:  mov    %eax,(%esp)
08410abd +0x1b1:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
08410ac2 +0x1b6:  xor    $0x1,%eax
08410ac5 +0x1b9:  test   %al,%al
08410ac7 +0x1bb:  je     08410ad0 <+0x1c4>
08410ac9 +0x1bd:  mov    $0x0,%eax
08410ace +0x1c2:  jmp    08410ad5 <+0x1c9>
08410ad0 +0x1c4:  mov    $0x1,%eax
08410ad5 +0x1c9:  leave
08410ad6 +0x1ca:  ret
08410ad7 +0x1cb:  nop
```

## 反编译 C

```c
// DB_Login::GetLoginCommonData @ 0x841090c

/* DB_Login::GetLoginCommonData(SIG_LOGIN_DATA*) */

undefined4 __thiscall DB_Login::GetLoginCommonData(DB_Login *this,SIG_LOGIN_DATA *param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int local_20 [2];
  MySQL *local_18;
  int local_14;
  int local_10;
  
  local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  uVar3 = NumberToString(*(uint *)(param_1 + 0xc0),0);
  MySQL::set_query(local_18,
                   "seLect  member_bonus_fatigue , update_time , login_ip , inform_notice  from login_common where m_id=%s"
                   ,uVar3);
  cVar2 = MySQL::exec(local_18,true);
  if (cVar2 == '\x01') {
    local_14 = MySQL::get_n_rows(local_18);
    if (local_14 == 0) {
      *(undefined2 *)(param_1 + 0x3f5e) = 0;
      memset(param_1 + 0x4114,0,0x10);
      memset(param_1 + 0x4125,0,0x10);
      uVar3 = 1;
    }
    else {
      cVar2 = MySQL::fetch(local_18);
      if (cVar2 == '\x01') {
        local_20[1] = 0;
        local_10 = 1;
        cVar2 = MySQL::get_int(local_18,0,local_20 + 1);
        iVar1 = local_10;
        if (cVar2 == '\x01') {
          local_20[0] = 0;
          local_10 = local_10 + 1;
          cVar2 = MySQL::get_int(local_18,iVar1,local_20);
          iVar1 = local_10;
          if (cVar2 == '\x01') {
            *(int *)(param_1 + 0x3f60) = local_20[0];
            *(short *)(param_1 + 0x3f5e) = (short)local_20[1];
            local_10 = local_10 + 1;
            cVar2 = MySQL::get_str(local_18,iVar1,(char *)(param_1 + 0x4114),0x10);
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
        else {
          uVar3 = 0;
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
