# UpdateLogout

`_ZN15DB_UpdateLogout12UpdateLogoutEP17SIG_UPDATE_LOGOUT`

`DB_UpdateLogout::UpdateLogout(SIG_UPDATE_LOGOUT*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateLogout` | `0x08418a96` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08418a96  _ZN15DB_UpdateLogout12UpdateLogoutEP17SIG_UPDATE_LOGOUT
#           DB_UpdateLogout::UpdateLogout(SIG_UPDATE_LOGOUT*)
# range [0x08418a96, 0x08418b73]
08418a96 +0x00:  push   %ebp
08418a97 +0x01:  mov    %esp,%ebp
08418a99 +0x03:  sub    $0x38,%esp
08418a9c +0x06:  mov    0xc(%ebp),%eax
08418a9f +0x09:  mov    (%eax),%eax
08418aa1 +0x0b:  test   %eax,%eax
08418aa3 +0x0d:  jne    08418aaf <+0x19>
08418aa5 +0x0f:  mov    $0x1,%eax
08418aaa +0x14:  jmp    08418b72 <+0xdc>
08418aaf +0x19:  movl   $0x0,-0x10(%ebp)
08418ab6 +0x20:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08418abb +0x25:  mov    %eax,(%esp)
08418abe +0x28:  call   080f131e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3a0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a0
08418ac3 +0x2d:  test   %al,%al
08418ac5 +0x2f:  je     08418ad2 <+0x3c>
08418ac7 +0x31:  mov    0xc(%ebp),%eax
08418aca +0x34:  mov    0xe(%eax),%eax
08418acd +0x37:  mov    %eax,-0x10(%ebp)
08418ad0 +0x3a:  jmp    08418ae0 <+0x4a>
08418ad2 +0x3c:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08418ad7 +0x41:  mov    0x378(%eax),%eax
08418add +0x47:  mov    %eax,-0x10(%ebp)
08418ae0 +0x4a:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08418ae5 +0x4f:  movl   $0x0,0x8(%esp)
08418aed +0x57:  movl   $0x6,0x4(%esp)
08418af5 +0x5f:  mov    %eax,(%esp)
08418af8 +0x62:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08418afd +0x67:  mov    %eax,-0xc(%ebp)
08418b00 +0x6a:  mov    0xc(%ebp),%eax
08418b03 +0x6d:  mov    (%eax),%eax
08418b05 +0x6f:  movl   $0x0,0x4(%esp)
08418b0d +0x77:  mov    %eax,(%esp)
08418b10 +0x7a:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08418b15 +0x7f:  mov    0xc(%ebp),%edx
08418b18 +0x82:  mov    0x8(%edx),%ecx
08418b1b +0x85:  mov    -0x10(%ebp),%edx
08418b1e +0x88:  mov    %eax,0x14(%esp)
08418b22 +0x8c:  movl   $0x0,0x10(%esp)
08418b2a +0x94:  mov    %ecx,0xc(%esp)
08418b2e +0x98:  mov    %edx,0x8(%esp)
08418b32 +0x9c:  movl   $"upDate login_account_%d set m_channel_no=%d,login_status=%d,last_login_date=now() where m_id=%s",0x4(%esp)
08418b3a +0xa4:  mov    -0xc(%ebp),%eax
08418b3d +0xa7:  mov    %eax,(%esp)
08418b40 +0xaa:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08418b45 +0xaf:  movl   $0x1,0x4(%esp)
08418b4d +0xb7:  mov    -0xc(%ebp),%eax
08418b50 +0xba:  mov    %eax,(%esp)
08418b53 +0xbd:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08418b58 +0xc2:  mov    %al,-0x11(%ebp)
08418b5b +0xc5:  movzbl -0x11(%ebp),%eax
08418b5f +0xc9:  xor    $0x1,%eax
08418b62 +0xcc:  test   %al,%al
08418b64 +0xce:  je     08418b6d <+0xd7>
08418b66 +0xd0:  mov    $0x0,%eax
08418b6b +0xd5:  jmp    08418b72 <+0xdc>
08418b6d +0xd7:  mov    $0x1,%eax
08418b72 +0xdc:  leave
08418b73 +0xdd:  ret
```

## 反编译 C

```c
// DB_UpdateLogout::UpdateLogout @ 0x8418a96

/* DB_UpdateLogout::UpdateLogout(SIG_UPDATE_LOGOUT*) */

undefined4 __thiscall
DB_UpdateLogout::UpdateLogout(DB_UpdateLogout *this,SIG_UPDATE_LOGOUT *param_1)

{
  char cVar1;
  undefined4 uVar2;
  GameWorld *this_00;
  int iVar3;
  MySQL *this_01;
  undefined4 local_14;
  
  if (*(int *)param_1 == 0) {
    uVar2 = 1;
  }
  else {
    this_00 = (GameWorld *)G_GameWorld();
    cVar1 = GameWorld::IsIntegratedPvPBaseChannel(this_00);
    if (cVar1 == '\0') {
      iVar3 = G_CEnvironment();
      local_14 = *(undefined4 *)(iVar3 + 0x378);
    }
    else {
      local_14 = *(undefined4 *)(param_1 + 0xe);
    }
    this_01 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
    uVar2 = NumberToString(*(uint *)param_1,0);
    MySQL::set_query(this_01,
                     "upDate login_account_%d set m_channel_no=%d,login_status=%d,last_login_date=now() where m_id=%s"
                     ,local_14,*(undefined4 *)(param_1 + 8),0,uVar2);
    cVar1 = MySQL::exec(this_01,true);
    if (cVar1 == '\x01') {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
```
