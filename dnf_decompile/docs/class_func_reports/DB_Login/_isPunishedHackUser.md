# _isPunishedHackUser

`_ZN8DB_Login19_isPunishedHackUserEj`

`DB_Login::_isPunishedHackUser(unsigned int)`

| 类 | 地址 |
|---|---|
| `DB_Login` | `0x08412ac8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08412ac8  _ZN8DB_Login19_isPunishedHackUserEj
#           DB_Login::_isPunishedHackUser(unsigned int)
# range [0x08412ac8, 0x08412c51]
08412ac8 +0x000:  push   %ebp
08412ac9 +0x001:  mov    %esp,%ebp
08412acb +0x003:  sub    $0x38,%esp
08412ace +0x006:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08412ad3 +0x00b:  movl   $0x0,0x8(%esp)
08412adb +0x013:  movl   $0x6,0x4(%esp)
08412ae3 +0x01b:  mov    %eax,(%esp)
08412ae6 +0x01e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08412aeb +0x023:  mov    %eax,-0x10(%ebp)
08412aee +0x026:  movl   $0x0,0x4(%esp)
08412af6 +0x02e:  mov    0xc(%ebp),%eax
08412af9 +0x031:  mov    %eax,(%esp)
08412afc +0x034:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08412b01 +0x039:  mov    %eax,0x8(%esp)
08412b05 +0x03d:  movl   $"seLect occ_time,period,now_flag from member_punish_hack where m_id=%s",0x4(%esp)
08412b0d +0x045:  mov    -0x10(%ebp),%eax
08412b10 +0x048:  mov    %eax,(%esp)
08412b13 +0x04b:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08412b18 +0x050:  movl   $0x1,0x4(%esp)
08412b20 +0x058:  mov    -0x10(%ebp),%eax
08412b23 +0x05b:  mov    %eax,(%esp)
08412b26 +0x05e:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08412b2b +0x063:  xor    $0x1,%eax
08412b2e +0x066:  test   %al,%al
08412b30 +0x068:  je     08412b3c <+0x74>
08412b32 +0x06a:  mov    $0x0,%eax
08412b37 +0x06f:  jmp    08412c4f <+0x187>
08412b3c +0x074:  mov    -0x10(%ebp),%eax
08412b3f +0x077:  mov    %eax,(%esp)
08412b42 +0x07a:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08412b47 +0x07f:  test   %eax,%eax
08412b49 +0x081:  sete   %al
08412b4c +0x084:  test   %al,%al
08412b4e +0x086:  je     08412b5a <+0x92>
08412b50 +0x088:  mov    $0x0,%eax
08412b55 +0x08d:  jmp    08412c4f <+0x187>
08412b5a +0x092:  mov    -0x10(%ebp),%eax
08412b5d +0x095:  mov    %eax,(%esp)
08412b60 +0x098:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08412b65 +0x09d:  xor    $0x1,%eax
08412b68 +0x0a0:  test   %al,%al
08412b6a +0x0a2:  je     08412b76 <+0xae>
08412b6c +0x0a4:  mov    $0x0,%eax
08412b71 +0x0a9:  jmp    08412c4f <+0x187>
08412b76 +0x0ae:  movl   $0x0,-0x14(%ebp)
08412b7d +0x0b5:  movl   $0x0,-0x18(%ebp)
08412b84 +0x0bc:  movl   $0x0,-0x1c(%ebp)
08412b8b +0x0c3:  lea    -0x14(%ebp),%eax
08412b8e +0x0c6:  mov    %eax,0x8(%esp)
08412b92 +0x0ca:  movl   $0x0,0x4(%esp)
08412b9a +0x0d2:  mov    -0x10(%ebp),%eax
08412b9d +0x0d5:  mov    %eax,(%esp)
08412ba0 +0x0d8:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08412ba5 +0x0dd:  xor    $0x1,%eax
08412ba8 +0x0e0:  test   %al,%al
08412baa +0x0e2:  je     08412bb6 <+0xee>
08412bac +0x0e4:  mov    $0x0,%eax
08412bb1 +0x0e9:  jmp    08412c4f <+0x187>
08412bb6 +0x0ee:  lea    -0x18(%ebp),%eax
08412bb9 +0x0f1:  mov    %eax,0x8(%esp)
08412bbd +0x0f5:  movl   $0x1,0x4(%esp)
08412bc5 +0x0fd:  mov    -0x10(%ebp),%eax
08412bc8 +0x100:  mov    %eax,(%esp)
08412bcb +0x103:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08412bd0 +0x108:  xor    $0x1,%eax
08412bd3 +0x10b:  test   %al,%al
08412bd5 +0x10d:  je     08412bde <+0x116>
08412bd7 +0x10f:  mov    $0x0,%eax
08412bdc +0x114:  jmp    08412c4f <+0x187>
08412bde +0x116:  lea    -0x1c(%ebp),%eax
08412be1 +0x119:  mov    %eax,0x8(%esp)
08412be5 +0x11d:  movl   $0x2,0x4(%esp)
08412bed +0x125:  mov    -0x10(%ebp),%eax
08412bf0 +0x128:  mov    %eax,(%esp)
08412bf3 +0x12b:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08412bf8 +0x130:  xor    $0x1,%eax
08412bfb +0x133:  test   %al,%al
08412bfd +0x135:  je     08412c06 <+0x13e>
08412bff +0x137:  mov    $0x0,%eax
08412c04 +0x13c:  jmp    08412c4f <+0x187>
08412c06 +0x13e:  mov    -0x18(%ebp),%eax
08412c09 +0x141:  test   %eax,%eax
08412c0b +0x143:  je     08412c3c <+0x174>
08412c0d +0x145:  mov    -0x18(%ebp),%eax
08412c10 +0x148:  imul   $0xe10,%eax,%edx
08412c16 +0x14e:  mov    -0x14(%ebp),%eax
08412c19 +0x151:  lea    (%edx,%eax,1),%eax
08412c1c +0x154:  mov    %eax,-0xc(%ebp)
08412c1f +0x157:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08412c26 +0x15e:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08412c2b +0x163:  cmp    -0xc(%ebp),%eax
08412c2e +0x166:  setg   %al
08412c31 +0x169:  test   %al,%al
08412c33 +0x16b:  je     08412c3c <+0x174>
08412c35 +0x16d:  mov    $0x0,%eax
08412c3a +0x172:  jmp    08412c4f <+0x187>
08412c3c +0x174:  mov    -0x1c(%ebp),%eax
08412c3f +0x177:  test   %eax,%eax
08412c41 +0x179:  jne    08412c4a <+0x182>
08412c43 +0x17b:  mov    $0x0,%eax
08412c48 +0x180:  jmp    08412c4f <+0x187>
08412c4a +0x182:  mov    $0x1,%eax
08412c4f +0x187:  leave
08412c50 +0x188:  ret
08412c51 +0x189:  nop
```

## 反编译 C

```c
// DB_Login::_isPunishedHackUser @ 0x8412ac8

/* DB_Login::_isPunishedHackUser(unsigned int) */

undefined4 __thiscall DB_Login::_isPunishedHackUser(DB_Login *this,uint param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int local_20;
  int local_1c;
  int local_18;
  MySQL *local_14;
  int local_10;
  
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  uVar2 = NumberToString(param_1,0);
  MySQL::set_query(local_14,"seLect occ_time,period,now_flag from member_punish_hack where m_id=%s",
                   uVar2);
  cVar1 = MySQL::exec(local_14,true);
  if (cVar1 == '\x01') {
    iVar3 = MySQL::get_n_rows(local_14);
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      cVar1 = MySQL::fetch(local_14);
      if (cVar1 == '\x01') {
        local_18 = 0;
        local_1c = 0;
        local_20 = 0;
        cVar1 = MySQL::get_int(local_14,0,&local_18);
        if (cVar1 == '\x01') {
          cVar1 = MySQL::get_int(local_14,1,&local_1c);
          if (cVar1 == '\x01') {
            cVar1 = MySQL::get_int(local_14,2,&local_20);
            if (cVar1 == '\x01') {
              if (local_1c != 0) {
                local_10 = local_1c * 0xe10 + local_18;
                iVar3 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
                if (local_10 < iVar3) {
                  return 0;
                }
              }
              if (local_20 == 0) {
                uVar2 = 0;
              }
              else {
                uVar2 = 1;
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
