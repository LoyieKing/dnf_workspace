# dispatch

`_ZN19DB_ForbidUserToPlay8dispatchEiiP6Stream`

`DB_ForbidUserToPlay::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_ForbidUserToPlay` | `0x08421af4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08421af4  _ZN19DB_ForbidUserToPlay8dispatchEiiP6Stream
#           DB_ForbidUserToPlay::dispatch(int, int, Stream*)
# range [0x08421af4, 0x08421bcb]
08421af4 +0x00:  push   %ebp
08421af5 +0x01:  mov    %esp,%ebp
08421af7 +0x03:  sub    $0x38,%esp
08421afa +0x06:  mov    0x14(%ebp),%eax
08421afd +0x09:  mov    %eax,(%esp)
08421b00 +0x0c:  call   08451b4e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x4764>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x4764
08421b05 +0x11:  mov    %eax,-0x1c(%ebp)
08421b08 +0x14:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08421b0d +0x19:  movl   $0x0,0x8(%esp)
08421b15 +0x21:  movl   $0x2,0x4(%esp)
08421b1d +0x29:  mov    %eax,(%esp)
08421b20 +0x2c:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08421b25 +0x31:  mov    %eax,-0x18(%ebp)
08421b28 +0x34:  movl   $0x0,-0x14(%ebp)
08421b2f +0x3b:  movb   $0x0,-0xd(%ebp)
08421b33 +0x3f:  movl   $0x0,-0xc(%ebp)
08421b3a +0x46:  mov    -0x1c(%ebp),%eax
08421b3d +0x49:  mov    (%eax),%eax
08421b3f +0x4b:  mov    %eax,-0x14(%ebp)
08421b42 +0x4e:  mov    -0x1c(%ebp),%eax
08421b45 +0x51:  movzbl 0x4(%eax),%eax
08421b49 +0x55:  mov    %al,-0xd(%ebp)
08421b4c +0x58:  mov    -0x1c(%ebp),%eax
08421b4f +0x5b:  mov    0x5(%eax),%eax
08421b52 +0x5e:  mov    %eax,-0xc(%ebp)
08421b55 +0x61:  movzbl -0xd(%ebp),%eax
08421b59 +0x65:  xor    $0x1,%eax
08421b5c +0x68:  test   %al,%al
08421b5e +0x6a:  jne    08421b66 <+0x72>
08421b60 +0x6c:  cmpl   $0x0,-0xc(%ebp)
08421b64 +0x70:  jne    08421b82 <+0x8e>
08421b66 +0x72:  mov    -0x14(%ebp),%eax
08421b69 +0x75:  mov    %eax,0x8(%esp)
08421b6d +0x79:  movl   $"upDate charac_stat set forbidden_to_play=0, forbidden_due_to= 0 where charac_no = %d",0x4(%esp)
08421b75 +0x81:  mov    -0x18(%ebp),%eax
08421b78 +0x84:  mov    %eax,(%esp)
08421b7b +0x87:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08421b80 +0x8c:  jmp    08421ba3 <+0xaf>
08421b82 +0x8e:  mov    -0x14(%ebp),%eax
08421b85 +0x91:  mov    %eax,0xc(%esp)
08421b89 +0x95:  mov    -0xc(%ebp),%eax
08421b8c +0x98:  mov    %eax,0x8(%esp)
08421b90 +0x9c:  movl   $"upDate charac_stat set forbidden_to_play=1, forbidden_due_to = date_add(now(), interval %d day) where charac_no = %d",0x4(%esp)
08421b98 +0xa4:  mov    -0x18(%ebp),%eax
08421b9b +0xa7:  mov    %eax,(%esp)
08421b9e +0xaa:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08421ba3 +0xaf:  movl   $0x1,0x4(%esp)
08421bab +0xb7:  mov    -0x18(%ebp),%eax
08421bae +0xba:  mov    %eax,(%esp)
08421bb1 +0xbd:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08421bb6 +0xc2:  xor    $0x1,%eax
08421bb9 +0xc5:  test   %al,%al
08421bbb +0xc7:  je     08421bc4 <+0xd0>
08421bbd +0xc9:  mov    $0x0,%eax
08421bc2 +0xce:  jmp    08421bc9 <+0xd5>
08421bc4 +0xd0:  mov    $0x1,%eax
08421bc9 +0xd5:  leave
08421bca +0xd6:  ret
08421bcb +0xd7:  nop
```

## 反编译 C

```c
// DB_ForbidUserToPlay::dispatch @ 0x8421af4

/* DB_ForbidUserToPlay::dispatch(int, int, Stream*) */

bool DB_ForbidUserToPlay::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  SIG_FORBID_USER_TO_PLAY *pSVar2;
  MySQL *this;
  Stream *in_stack_00000010;
  
  pSVar2 = Stream::GetOutBuffer<SIG_FORBID_USER_TO_PLAY>(in_stack_00000010);
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  if ((pSVar2[4] == (SIG_FORBID_USER_TO_PLAY)0x1) && (*(int *)(pSVar2 + 5) != 0)) {
    MySQL::set_query(this,
                     "upDate charac_stat set forbidden_to_play=1, forbidden_due_to = date_add(now(), interval %d day) where charac_no = %d"
                     ,*(int *)(pSVar2 + 5),*(undefined4 *)pSVar2);
  }
  else {
    MySQL::set_query(this,
                     "upDate charac_stat set forbidden_to_play=0, forbidden_due_to= 0 where charac_no = %d"
                     ,*(undefined4 *)pSVar2);
  }
  cVar1 = MySQL::exec(this,true);
  return cVar1 == '\x01';
}
```
