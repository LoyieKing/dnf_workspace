# CheckEventCharacter40

`_ZN15DB_DeleteCharac21CheckEventCharacter40EP17SIG_DELETE_CHARAC`

`DB_DeleteCharac::CheckEventCharacter40(SIG_DELETE_CHARAC*)`

| 类 | 地址 |
|---|---|
| `DB_DeleteCharac` | `0x08403324` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08403324  _ZN15DB_DeleteCharac21CheckEventCharacter40EP17SIG_DELETE_CHARAC
#           DB_DeleteCharac::CheckEventCharacter40(SIG_DELETE_CHARAC*)
# range [0x08403324, 0x0840340b]
08403324 +0x00:  push   %ebp
08403325 +0x01:  mov    %esp,%ebp
08403327 +0x03:  push   %ebx
08403328 +0x04:  sub    $0x24,%esp
0840332b +0x07:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08403330 +0x0c:  movl   $0x0,0x8(%esp)
08403338 +0x14:  movl   $0x2,0x4(%esp)
08403340 +0x1c:  mov    %eax,(%esp)
08403343 +0x1f:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08403348 +0x24:  mov    %eax,-0xc(%ebp)
0840334b +0x27:  mov    0xc(%ebp),%eax
0840334e +0x2a:  mov    0x4(%eax),%ebx
08403351 +0x2d:  mov    0xc(%ebp),%eax
08403354 +0x30:  mov    (%eax),%eax
08403356 +0x32:  movl   $0x0,0x4(%esp)
0840335e +0x3a:  mov    %eax,(%esp)
08403361 +0x3d:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08403366 +0x42:  mov    %ebx,0xc(%esp)
0840336a +0x46:  mov    %eax,0x8(%esp)
0840336e +0x4a:  movl   $"seLect event_charac_level from charac_info where m_id=%s and charac_no=%d and delete_flag=0",0x4(%esp)
08403376 +0x52:  mov    -0xc(%ebp),%eax
08403379 +0x55:  mov    %eax,(%esp)
0840337c +0x58:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08403381 +0x5d:  movl   $0x1,0x4(%esp)
08403389 +0x65:  mov    -0xc(%ebp),%eax
0840338c +0x68:  mov    %eax,(%esp)
0840338f +0x6b:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08403394 +0x70:  xor    $0x1,%eax
08403397 +0x73:  test   %al,%al
08403399 +0x75:  je     084033a2 <+0x7e>
0840339b +0x77:  mov    $0x0,%eax
084033a0 +0x7c:  jmp    08403406 <+0xe2>
084033a2 +0x7e:  movl   $0x0,-0x10(%ebp)
084033a9 +0x85:  mov    -0xc(%ebp),%eax
084033ac +0x88:  mov    %eax,(%esp)
084033af +0x8b:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
084033b4 +0x90:  xor    $0x1,%eax
084033b7 +0x93:  test   %al,%al
084033b9 +0x95:  jne    084033dc <+0xb8>
084033bb +0x97:  lea    -0x10(%ebp),%eax
084033be +0x9a:  mov    %eax,0x8(%esp)
084033c2 +0x9e:  movl   $0x0,0x4(%esp)
084033ca +0xa6:  mov    -0xc(%ebp),%eax
084033cd +0xa9:  mov    %eax,(%esp)
084033d0 +0xac:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
084033d5 +0xb1:  xor    $0x1,%eax
084033d8 +0xb4:  test   %al,%al
084033da +0xb6:  je     084033e3 <+0xbf>
084033dc +0xb8:  mov    $0x1,%eax
084033e1 +0xbd:  jmp    084033e8 <+0xc4>
084033e3 +0xbf:  mov    $0x0,%eax
084033e8 +0xc4:  test   %al,%al
084033ea +0xc6:  je     084033f3 <+0xcf>
084033ec +0xc8:  mov    $0x0,%eax
084033f1 +0xcd:  jmp    08403406 <+0xe2>
084033f3 +0xcf:  mov    -0x10(%ebp),%eax
084033f6 +0xd2:  test   %eax,%eax
084033f8 +0xd4:  je     08403401 <+0xdd>
084033fa +0xd6:  mov    $0x1,%eax
084033ff +0xdb:  jmp    08403406 <+0xe2>
08403401 +0xdd:  mov    $0x0,%eax
08403406 +0xe2:  add    $0x24,%esp
08403409 +0xe5:  pop    %ebx
0840340a +0xe6:  pop    %ebp
0840340b +0xe7:  ret
```

## 反编译 C

```c
// DB_DeleteCharac::CheckEventCharacter40 @ 0x8403324

/* DB_DeleteCharac::CheckEventCharacter40(SIG_DELETE_CHARAC*) */

undefined4 __thiscall
DB_DeleteCharac::CheckEventCharacter40(DB_DeleteCharac *this,SIG_DELETE_CHARAC *param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int local_14;
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  uVar4 = *(undefined4 *)(param_1 + 4);
  uVar3 = NumberToString(*(uint *)param_1,0);
  MySQL::set_query(local_10,
                   "seLect event_charac_level from charac_info where m_id=%s and charac_no=%d and delete_flag=0"
                   ,uVar3,uVar4);
  cVar2 = MySQL::exec(local_10,true);
  if (cVar2 == '\x01') {
    local_14 = 0;
    cVar2 = MySQL::fetch(local_10);
    if ((cVar2 == '\x01') && (cVar2 = MySQL::get_int(local_10,0,&local_14), cVar2 == '\x01')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar4 = 0;
    }
    else if (local_14 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
    return uVar4;
  }
  return 0;
}
```
