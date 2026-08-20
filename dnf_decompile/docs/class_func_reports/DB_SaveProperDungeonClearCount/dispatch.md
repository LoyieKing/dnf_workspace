# dispatch

`_ZN30DB_SaveProperDungeonClearCount8dispatchEiiP6Stream`

`DB_SaveProperDungeonClearCount::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_SaveProperDungeonClearCount` | `0x0843a8b2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843a8b2  _ZN30DB_SaveProperDungeonClearCount8dispatchEiiP6Stream
#           DB_SaveProperDungeonClearCount::dispatch(int, int, Stream*)
# range [0x0843a8b2, 0x0843a997]
0843a8b2 +0x00:  push   %ebp
0843a8b3 +0x01:  mov    %esp,%ebp
0843a8b5 +0x03:  sub    $0x28,%esp
0843a8b8 +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0843a8bd +0x0b:  movl   $0x0,0x8(%esp)
0843a8c5 +0x13:  movl   $0x2,0x4(%esp)
0843a8cd +0x1b:  mov    %eax,(%esp)
0843a8d0 +0x1e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0843a8d5 +0x23:  mov    %eax,-0x10(%ebp)
0843a8d8 +0x26:  mov    0x14(%ebp),%eax
0843a8db +0x29:  mov    %eax,(%esp)
0843a8de +0x2c:  call   08453990 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x65a6>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x65a6
0843a8e3 +0x31:  mov    %eax,-0xc(%ebp)
0843a8e6 +0x34:  mov    -0xc(%ebp),%eax
0843a8e9 +0x37:  mov    (%eax),%edx
0843a8eb +0x39:  mov    -0xc(%ebp),%eax
0843a8ee +0x3c:  movzwl 0x4(%eax),%eax
0843a8f2 +0x40:  cwtl
0843a8f3 +0x41:  mov    %edx,0xc(%esp)
0843a8f7 +0x45:  mov    %eax,0x8(%esp)
0843a8fb +0x49:  movl   $"upDate event_dungeon_clear set clear_cnt=%d, update_time=now() where charac_no=%u",0x4(%esp)
0843a903 +0x51:  mov    -0x10(%ebp),%eax
0843a906 +0x54:  mov    %eax,(%esp)
0843a909 +0x57:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0843a90e +0x5c:  movl   $0x1,0x4(%esp)
0843a916 +0x64:  mov    -0x10(%ebp),%eax
0843a919 +0x67:  mov    %eax,(%esp)
0843a91c +0x6a:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0843a921 +0x6f:  xor    $0x1,%eax
0843a924 +0x72:  test   %al,%al
0843a926 +0x74:  je     0843a92f <+0x7d>
0843a928 +0x76:  mov    $0x0,%eax
0843a92d +0x7b:  jmp    0843a995 <+0xe3>
0843a92f +0x7d:  mov    -0x10(%ebp),%eax
0843a932 +0x80:  mov    %eax,(%esp)
0843a935 +0x83:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
0843a93a +0x88:  or     %edx,%eax
0843a93c +0x8a:  test   %eax,%eax
0843a93e +0x8c:  sete   %al
0843a941 +0x8f:  test   %al,%al
0843a943 +0x91:  je     0843a990 <+0xde>
0843a945 +0x93:  mov    -0xc(%ebp),%eax
0843a948 +0x96:  movzwl 0x4(%eax),%eax
0843a94c +0x9a:  movswl %ax,%edx
0843a94f +0x9d:  mov    -0xc(%ebp),%eax
0843a952 +0xa0:  mov    (%eax),%eax
0843a954 +0xa2:  mov    %edx,0xc(%esp)
0843a958 +0xa6:  mov    %eax,0x8(%esp)
0843a95c +0xaa:  movl   $"inSert into event_dungeon_clear(charac_no, clear_cnt, update_time) values(%u, %d, now())",0x4(%esp)
0843a964 +0xb2:  mov    -0x10(%ebp),%eax
0843a967 +0xb5:  mov    %eax,(%esp)
0843a96a +0xb8:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0843a96f +0xbd:  movl   $0x1,0x4(%esp)
0843a977 +0xc5:  mov    -0x10(%ebp),%eax
0843a97a +0xc8:  mov    %eax,(%esp)
0843a97d +0xcb:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0843a982 +0xd0:  xor    $0x1,%eax
0843a985 +0xd3:  test   %al,%al
0843a987 +0xd5:  je     0843a990 <+0xde>
0843a989 +0xd7:  mov    $0x0,%eax
0843a98e +0xdc:  jmp    0843a995 <+0xe3>
0843a990 +0xde:  mov    $0x1,%eax
0843a995 +0xe3:  leave
0843a996 +0xe4:  ret
0843a997 +0xe5:  nop
```

## 反编译 C

```c
// DB_SaveProperDungeonClearCount::dispatch @ 0x843a8b2

/* DB_SaveProperDungeonClearCount::dispatch(int, int, Stream*) */

undefined4 DB_SaveProperDungeonClearCount::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  MySQL *this;
  SIG_SAVE_BLOOD_CLEAR_COUNT *pSVar2;
  undefined4 uVar3;
  longlong lVar4;
  Stream *in_stack_00000010;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  pSVar2 = Stream::GetOutBuffer<SIG_SAVE_BLOOD_CLEAR_COUNT>(in_stack_00000010);
  MySQL::set_query(this,
                   "upDate event_dungeon_clear set clear_cnt=%d, update_time=now() where charac_no=%u"
                   ,(int)*(short *)(pSVar2 + 4),*(undefined4 *)pSVar2);
  cVar1 = MySQL::exec(this,true);
  if (cVar1 == '\x01') {
    lVar4 = MySQL::getAffectedRowCount(this);
    if (lVar4 == 0) {
      MySQL::set_query(this,
                       "inSert into event_dungeon_clear(charac_no, clear_cnt, update_time) values(%u, %d, now())"
                       ,*(undefined4 *)pSVar2,(int)*(short *)(pSVar2 + 4));
      cVar1 = MySQL::exec(this,true);
      if (cVar1 != '\x01') {
        return 0;
      }
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
