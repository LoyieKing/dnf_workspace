# dispatch

`_ZN23DB_SaveCharacInfo4Guild8dispatchEiiP6Stream`

`DB_SaveCharacInfo4Guild::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_SaveCharacInfo4Guild` | `0x0841b624` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0841b624  _ZN23DB_SaveCharacInfo4Guild8dispatchEiiP6Stream
#           DB_SaveCharacInfo4Guild::dispatch(int, int, Stream*)
# range [0x0841b624, 0x0841b6df]
0841b624 +0x00:  push   %ebp
0841b625 +0x01:  mov    %esp,%ebp
0841b627 +0x03:  push   %ebx
0841b628 +0x04:  sub    $0x34,%esp
0841b62b +0x07:  mov    0x14(%ebp),%eax
0841b62e +0x0a:  mov    %eax,(%esp)
0841b631 +0x0d:  call   084511c0 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x3dd6>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x3dd6
0841b636 +0x12:  mov    %eax,-0x14(%ebp)
0841b639 +0x15:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0841b63e +0x1a:  movl   $0x0,0x8(%esp)
0841b646 +0x22:  movl   $0x8,0x4(%esp)
0841b64e +0x2a:  mov    %eax,(%esp)
0841b651 +0x2d:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0841b656 +0x32:  mov    %eax,-0x10(%ebp)
0841b659 +0x35:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0841b65e +0x3a:  movl   $0x0,0x8(%esp)
0841b666 +0x42:  movl   $0x1,0x4(%esp)
0841b66e +0x4a:  mov    %eax,(%esp)
0841b671 +0x4d:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0841b676 +0x52:  mov    %eax,-0xc(%ebp)
0841b679 +0x55:  mov    -0x14(%ebp),%eax
0841b67c +0x58:  mov    0x8(%eax),%ebx
0841b67f +0x5b:  mov    -0x14(%ebp),%eax
0841b682 +0x5e:  mov    (%eax),%ecx
0841b684 +0x60:  mov    -0x14(%ebp),%eax
0841b687 +0x63:  mov    0x10(%eax),%edx
0841b68a +0x66:  mov    -0x14(%ebp),%eax
0841b68d +0x69:  mov    0xc(%eax),%eax
0841b690 +0x6c:  mov    %ebx,0x14(%esp)
0841b694 +0x70:  mov    %ecx,0x10(%esp)
0841b698 +0x74:  mov    %edx,0xc(%esp)
0841b69c +0x78:  mov    %eax,0x8(%esp)
0841b6a0 +0x7c:  movl   $"upDate guild_member set grow_type=%d,lev=%d where guild_id=%d and charac_no=%d",0x4(%esp)
0841b6a8 +0x84:  mov    -0x10(%ebp),%eax
0841b6ab +0x87:  mov    %eax,(%esp)
0841b6ae +0x8a:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0841b6b3 +0x8f:  movl   $0x1,0x4(%esp)
0841b6bb +0x97:  mov    -0x10(%ebp),%eax
0841b6be +0x9a:  mov    %eax,(%esp)
0841b6c1 +0x9d:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0841b6c6 +0xa2:  xor    $0x1,%eax
0841b6c9 +0xa5:  test   %al,%al
0841b6cb +0xa7:  je     0841b6d4 <+0xb0>
0841b6cd +0xa9:  mov    $0x0,%eax
0841b6d2 +0xae:  jmp    0841b6d9 <+0xb5>
0841b6d4 +0xb0:  mov    $0x1,%eax
0841b6d9 +0xb5:  add    $0x34,%esp
0841b6dc +0xb8:  pop    %ebx
0841b6dd +0xb9:  pop    %ebp
0841b6de +0xba:  ret
0841b6df +0xbb:  nop
```

## 反编译 C

```c
// DB_SaveCharacInfo4Guild::dispatch @ 0x841b624

/* DB_SaveCharacInfo4Guild::dispatch(int, int, Stream*) */

bool DB_SaveCharacInfo4Guild::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  SIG_SAVE_CHARACINFO4GUILD *pSVar2;
  MySQL *this;
  Stream *in_stack_00000010;
  
  pSVar2 = Stream::GetOutBuffer<SIG_SAVE_CHARACINFO4GUILD>(in_stack_00000010);
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,8,0);
  DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  MySQL::set_query(this,
                   "upDate guild_member set grow_type=%d,lev=%d where guild_id=%d and charac_no=%d",
                   *(undefined4 *)(pSVar2 + 0xc),*(undefined4 *)(pSVar2 + 0x10),
                   *(undefined4 *)pSVar2,*(undefined4 *)(pSVar2 + 8));
  cVar1 = MySQL::exec(this,true);
  return cVar1 == '\x01';
}
```
