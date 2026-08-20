# dispatch

`_ZN18DB_SavePuUserCheck8dispatchEiiP6Stream`

`DB_SavePuUserCheck::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_SavePuUserCheck` | `0x0844bfb8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0844bfb8  _ZN18DB_SavePuUserCheck8dispatchEiiP6Stream
#           DB_SavePuUserCheck::dispatch(int, int, Stream*)
# range [0x0844bfb8, 0x0844c097]
0844bfb8 +0x00:  push   %ebp
0844bfb9 +0x01:  mov    %esp,%ebp
0844bfbb +0x03:  sub    $0x28,%esp
0844bfbe +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0844bfc3 +0x0b:  movl   $0x0,0x8(%esp)
0844bfcb +0x13:  movl   $0x1,0x4(%esp)
0844bfd3 +0x1b:  mov    %eax,(%esp)
0844bfd6 +0x1e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0844bfdb +0x23:  mov    %eax,-0xc(%ebp)
0844bfde +0x26:  cmpl   $0x0,-0xc(%ebp)
0844bfe2 +0x2a:  jne    0844bfee <+0x36>
0844bfe4 +0x2c:  mov    $0x0,%eax
0844bfe9 +0x31:  jmp    0844c096 <+0xde>
0844bfee +0x36:  movl   $0x0,-0x10(%ebp)
0844bff5 +0x3d:  lea    -0x10(%ebp),%eax
0844bff8 +0x40:  mov    %eax,0x4(%esp)
0844bffc +0x44:  mov    0x14(%ebp),%eax
0844bfff +0x47:  mov    %eax,(%esp)
0844c002 +0x4a:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
0844c007 +0x4f:  mov    -0x10(%ebp),%eax
0844c00a +0x52:  mov    %eax,0x8(%esp)
0844c00e +0x56:  movl   $"seLect m_id from pu_user_list where m_id = %u",0x4(%esp)
0844c016 +0x5e:  mov    -0xc(%ebp),%eax
0844c019 +0x61:  mov    %eax,(%esp)
0844c01c +0x64:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0844c021 +0x69:  movl   $0x1,0x4(%esp)
0844c029 +0x71:  mov    -0xc(%ebp),%eax
0844c02c +0x74:  mov    %eax,(%esp)
0844c02f +0x77:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0844c034 +0x7c:  xor    $0x1,%eax
0844c037 +0x7f:  test   %al,%al
0844c039 +0x81:  je     0844c042 <+0x8a>
0844c03b +0x83:  mov    $0x0,%eax
0844c040 +0x88:  jmp    0844c096 <+0xde>
0844c042 +0x8a:  mov    -0xc(%ebp),%eax
0844c045 +0x8d:  mov    %eax,(%esp)
0844c048 +0x90:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0844c04d +0x95:  test   %eax,%eax
0844c04f +0x97:  sete   %al
0844c052 +0x9a:  test   %al,%al
0844c054 +0x9c:  je     0844c091 <+0xd9>
0844c056 +0x9e:  mov    -0x10(%ebp),%eax
0844c059 +0xa1:  mov    %eax,0x8(%esp)
0844c05d +0xa5:  movl   $"inSert into pu_user_list(m_id) values(%u)",0x4(%esp)
0844c065 +0xad:  mov    -0xc(%ebp),%eax
0844c068 +0xb0:  mov    %eax,(%esp)
0844c06b +0xb3:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0844c070 +0xb8:  movl   $0x1,0x4(%esp)
0844c078 +0xc0:  mov    -0xc(%ebp),%eax
0844c07b +0xc3:  mov    %eax,(%esp)
0844c07e +0xc6:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0844c083 +0xcb:  xor    $0x1,%eax
0844c086 +0xce:  test   %al,%al
0844c088 +0xd0:  je     0844c091 <+0xd9>
0844c08a +0xd2:  mov    $0x0,%eax
0844c08f +0xd7:  jmp    0844c096 <+0xde>
0844c091 +0xd9:  mov    $0x1,%eax
0844c096 +0xde:  leave
0844c097 +0xdf:  ret
```

## 反编译 C

```c
// DB_SavePuUserCheck::dispatch @ 0x844bfb8

/* DB_SavePuUserCheck::dispatch(int, int, Stream*) */

undefined4 DB_SavePuUserCheck::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  Stream *in_stack_00000010;
  uint local_14;
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  if (local_10 == (MySQL *)0x0) {
    uVar2 = 0;
  }
  else {
    local_14 = 0;
    Stream::operator>>(in_stack_00000010,&local_14);
    MySQL::set_query(local_10,"seLect m_id from pu_user_list where m_id = %u",local_14);
    cVar1 = MySQL::exec(local_10,true);
    if (cVar1 == '\x01') {
      iVar3 = MySQL::get_n_rows(local_10);
      if (iVar3 == 0) {
        MySQL::set_query(local_10,"inSert into pu_user_list(m_id) values(%u)",local_14);
        cVar1 = MySQL::exec(local_10,true);
        if (cVar1 != '\x01') {
          return 0;
        }
      }
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
```
