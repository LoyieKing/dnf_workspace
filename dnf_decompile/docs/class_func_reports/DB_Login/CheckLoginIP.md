# CheckLoginIP

`_ZN8DB_Login12CheckLoginIPEP14SIG_LOGIN_DATA`

`DB_Login::CheckLoginIP(SIG_LOGIN_DATA*)`

| 类 | 地址 |
|---|---|
| `DB_Login` | `0x08415472` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08415472  _ZN8DB_Login12CheckLoginIPEP14SIG_LOGIN_DATA
#           DB_Login::CheckLoginIP(SIG_LOGIN_DATA*)
# range [0x08415472, 0x08415617]
08415472 +0x000:  push   %ebp
08415473 +0x001:  mov    %esp,%ebp
08415475 +0x003:  sub    $0x58,%esp
08415478 +0x006:  cmpl   $0x0,0xc(%ebp)
0841547c +0x00a:  jne    08415488 <+0x16>
0841547e +0x00c:  mov    $0x0,%eax
08415483 +0x011:  jmp    08415615 <+0x1a3>
08415488 +0x016:  mov    0xc(%ebp),%eax
0841548b +0x019:  movb   $0x0,0x4124(%eax)
08415492 +0x020:  movl   $0x0,-0x10(%ebp)
08415499 +0x027:  movl   $0x0,-0x20(%ebp)
084154a0 +0x02e:  movl   $0x0,-0x1c(%ebp)
084154a7 +0x035:  movl   $0x0,-0x18(%ebp)
084154ae +0x03c:  movl   $0x0,-0x14(%ebp)
084154b5 +0x043:  movl   $0x0,-0x30(%ebp)
084154bc +0x04a:  movl   $0x0,-0x2c(%ebp)
084154c3 +0x051:  movl   $0x0,-0x28(%ebp)
084154ca +0x058:  movl   $0x0,-0x24(%ebp)
084154d1 +0x05f:  mov    0xc(%ebp),%eax
084154d4 +0x062:  add    $0xa1,%eax
084154d9 +0x067:  mov    %eax,0x4(%esp)
084154dd +0x06b:  lea    -0x20(%ebp),%eax
084154e0 +0x06e:  mov    %eax,(%esp)
084154e3 +0x071:  call   0807def0 <_init+0x7e8>
084154e8 +0x076:  mov    0xc(%ebp),%eax
084154eb +0x079:  add    $0x4114,%eax
084154f0 +0x07e:  mov    %eax,0x4(%esp)
084154f4 +0x082:  lea    -0x30(%ebp),%eax
084154f7 +0x085:  mov    %eax,(%esp)
084154fa +0x088:  call   0807def0 <_init+0x7e8>
084154ff +0x08d:  movl   $0x2e,0x4(%esp)
08415507 +0x095:  lea    -0x20(%ebp),%eax
0841550a +0x098:  mov    %eax,(%esp)
0841550d +0x09b:  call   08265244 <_GLOBAL__I__ZN30Dispatcher_SecurityCardAuthRpy4readER9PacketBufR8MSG_BASE+0x1c>  ; global constructors keyed to Dispatcher_SecurityCardAuthRpy::read(PacketBuf&, MSG_BASE&)+0x1c
08415512 +0x0a0:  mov    %eax,-0x10(%ebp)
08415515 +0x0a3:  cmpl   $0x0,-0x10(%ebp)
08415519 +0x0a7:  je     08415521 <+0xaf>
0841551b +0x0a9:  mov    -0x10(%ebp),%eax
0841551e +0x0ac:  movb   $0x0,(%eax)
08415521 +0x0af:  movl   $0x2e,0x4(%esp)
08415529 +0x0b7:  lea    -0x30(%ebp),%eax
0841552c +0x0ba:  mov    %eax,(%esp)
0841552f +0x0bd:  call   08265244 <_GLOBAL__I__ZN30Dispatcher_SecurityCardAuthRpy4readER9PacketBufR8MSG_BASE+0x1c>  ; global constructors keyed to Dispatcher_SecurityCardAuthRpy::read(PacketBuf&, MSG_BASE&)+0x1c
08415534 +0x0c2:  mov    %eax,-0x10(%ebp)
08415537 +0x0c5:  cmpl   $0x0,-0x10(%ebp)
0841553b +0x0c9:  je     08415543 <+0xd1>
0841553d +0x0cb:  mov    -0x10(%ebp),%eax
08415540 +0x0ce:  movb   $0x0,(%eax)
08415543 +0x0d1:  lea    -0x30(%ebp),%eax
08415546 +0x0d4:  mov    %eax,0x4(%esp)
0841554a +0x0d8:  lea    -0x20(%ebp),%eax
0841554d +0x0db:  mov    %eax,(%esp)
08415550 +0x0de:  call   0807e4e0 <_init+0xdd8>
08415555 +0x0e3:  test   %eax,%eax
08415557 +0x0e5:  je     08415610 <+0x19e>
0841555d +0x0eb:  mov    0xc(%ebp),%eax
08415560 +0x0ee:  add    $0x4114,%eax
08415565 +0x0f3:  movzbl (%eax),%eax
08415568 +0x0f6:  test   %al,%al
0841556a +0x0f8:  je     08415576 <+0x104>
0841556c +0x0fa:  mov    0xc(%ebp),%eax
0841556f +0x0fd:  movb   $0x1,0x4124(%eax)
08415576 +0x104:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0841557b +0x109:  movl   $0x0,0x8(%esp)
08415583 +0x111:  movl   $0x9,0x4(%esp)
0841558b +0x119:  mov    %eax,(%esp)
0841558e +0x11c:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08415593 +0x121:  mov    %eax,-0xc(%ebp)
08415596 +0x124:  mov    0xc(%ebp),%eax
08415599 +0x127:  mov    0xc0(%eax),%eax
0841559f +0x12d:  mov    0xc(%ebp),%edx
084155a2 +0x130:  add    $0xa1,%edx
084155a8 +0x136:  mov    %eax,0xc(%esp)
084155ac +0x13a:  mov    %edx,0x8(%esp)
084155b0 +0x13e:  movl   $"upDate login_common set login_ip='%s' where m_id=%u",0x4(%esp)
084155b8 +0x146:  mov    -0xc(%ebp),%eax
084155bb +0x149:  mov    %eax,(%esp)
084155be +0x14c:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084155c3 +0x151:  movl   $0x1,0x4(%esp)
084155cb +0x159:  mov    -0xc(%ebp),%eax
084155ce +0x15c:  mov    %eax,(%esp)
084155d1 +0x15f:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084155d6 +0x164:  xor    $0x1,%eax
084155d9 +0x167:  test   %al,%al
084155db +0x169:  je     08415610 <+0x19e>
084155dd +0x16b:  movl   $"LOGIN_IP : IP Address UDATE DB ERROR!!",0x10(%esp)
084155e5 +0x173:  movl   $0x3e63,0xc(%esp)
084155ed +0x17b:  movl   $&_ZZN8DB_Login12CheckLoginIPEP14SIG_LOGIN_DATAE19__PRETTY_FUNCTION__,0x8(%esp)
084155f5 +0x183:  movl   $"DBThread.cpp",0x4(%esp)
084155fd +0x18b:  movl   $0x1,(%esp)
08415604 +0x192:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08415609 +0x197:  mov    $0x0,%eax
0841560e +0x19c:  jmp    08415615 <+0x1a3>
08415610 +0x19e:  mov    $0x1,%eax
08415615 +0x1a3:  leave
08415616 +0x1a4:  ret
08415617 +0x1a5:  nop
```

## 反编译 C

```c
// DB_Login::CheckLoginIP @ 0x8415472

/* DB_Login::CheckLoginIP(SIG_LOGIN_DATA*) */

undefined4 __thiscall DB_Login::CheckLoginIP(DB_Login *this,SIG_LOGIN_DATA *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char local_34 [32];
  undefined1 *local_14;
  MySQL *local_10;
  
  if (param_1 == (SIG_LOGIN_DATA *)0x0) {
    uVar2 = 0;
  }
  else {
    param_1[0x4124] = (SIG_LOGIN_DATA)0x0;
    local_14 = (undefined1 *)0x0;
    local_34[0x10] = '\0';
    local_34[0x11] = '\0';
    local_34[0x12] = '\0';
    local_34[0x13] = '\0';
    local_34[0x14] = '\0';
    local_34[0x15] = '\0';
    local_34[0x16] = '\0';
    local_34[0x17] = '\0';
    local_34[0x18] = '\0';
    local_34[0x19] = '\0';
    local_34[0x1a] = '\0';
    local_34[0x1b] = '\0';
    local_34[0x1c] = '\0';
    local_34[0x1d] = '\0';
    local_34[0x1e] = '\0';
    local_34[0x1f] = '\0';
    local_34[0] = '\0';
    local_34[1] = '\0';
    local_34[2] = '\0';
    local_34[3] = '\0';
    local_34[4] = '\0';
    local_34[5] = '\0';
    local_34[6] = '\0';
    local_34[7] = '\0';
    local_34[8] = '\0';
    local_34[9] = '\0';
    local_34[10] = '\0';
    local_34[0xb] = '\0';
    local_34[0xc] = '\0';
    local_34[0xd] = '\0';
    local_34[0xe] = '\0';
    local_34[0xf] = '\0';
    strcpy(local_34 + 0x10,(char *)(param_1 + 0xa1));
    strcpy(local_34,(char *)(param_1 + 0x4114));
    local_14 = (undefined1 *)std::strrchr(local_34 + 0x10,0x2e);
    if (local_14 != (undefined1 *)0x0) {
      *local_14 = 0;
    }
    local_14 = (undefined1 *)std::strrchr(local_34,0x2e);
    if (local_14 != (undefined1 *)0x0) {
      *local_14 = 0;
    }
    iVar3 = strcmp(local_34 + 0x10,local_34);
    if (iVar3 != 0) {
      if (param_1[0x4114] != (SIG_LOGIN_DATA)0x0) {
        param_1[0x4124] = (SIG_LOGIN_DATA)0x1;
      }
      local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
      MySQL::set_query(local_10,"upDate login_common set login_ip=\'%s\' where m_id=%u",
                       param_1 + 0xa1,*(undefined4 *)(param_1 + 0xc0));
      cVar1 = MySQL::exec(local_10,true);
      if (cVar1 != '\x01') {
        LogManager::logFormat
                  (1,"DBThread.cpp","bool DB_Login::CheckLoginIP(SIG_LOGIN_DATA*)",0x3e63,
                   "LOGIN_IP : IP Address UDATE DB ERROR!!");
        return 0;
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}
```
