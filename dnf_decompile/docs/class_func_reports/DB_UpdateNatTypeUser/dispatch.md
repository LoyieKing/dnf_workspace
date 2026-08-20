# dispatch

`_ZN20DB_UpdateNatTypeUser8dispatchEiiP6Stream`

`DB_UpdateNatTypeUser::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateNatTypeUser` | `0x0841c7f6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0841c7f6  _ZN20DB_UpdateNatTypeUser8dispatchEiiP6Stream
#           DB_UpdateNatTypeUser::dispatch(int, int, Stream*)
# range [0x0841c7f6, 0x0841c881]
0841c7f6 +0x00:  push   %ebp
0841c7f7 +0x01:  mov    %esp,%ebp
0841c7f9 +0x03:  sub    $0x38,%esp
0841c7fc +0x06:  mov    0x14(%ebp),%eax
0841c7ff +0x09:  mov    %eax,(%esp)
0841c802 +0x0c:  call   08451506 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x411c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x411c
0841c807 +0x11:  mov    %eax,-0x10(%ebp)
0841c80a +0x14:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0841c80f +0x19:  movl   $0x0,0x8(%esp)
0841c817 +0x21:  movl   $0x4,0x4(%esp)
0841c81f +0x29:  mov    %eax,(%esp)
0841c822 +0x2c:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0841c827 +0x31:  mov    %eax,-0xc(%ebp)
0841c82a +0x34:  mov    -0x10(%ebp),%eax
0841c82d +0x37:  mov    0x4(%eax),%ecx
0841c830 +0x3a:  mov    -0x10(%ebp),%eax
0841c833 +0x3d:  mov    (%eax),%edx
0841c835 +0x3f:  mov    -0x10(%ebp),%eax
0841c838 +0x42:  mov    0x8(%eax),%eax
0841c83b +0x45:  mov    %ecx,0x10(%esp)
0841c83f +0x49:  mov    %edx,0xc(%esp)
0841c843 +0x4d:  mov    %eax,0x8(%esp)
0841c847 +0x51:  movl   $"inSert into log_nat_stat(occ_time,nat_type,nat_cnt) values(from_unixtime(%d),%d,%d)",0x4(%esp)
0841c84f +0x59:  mov    -0xc(%ebp),%eax
0841c852 +0x5c:  mov    %eax,(%esp)
0841c855 +0x5f:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0841c85a +0x64:  movl   $0x1,0x4(%esp)
0841c862 +0x6c:  mov    -0xc(%ebp),%eax
0841c865 +0x6f:  mov    %eax,(%esp)
0841c868 +0x72:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0841c86d +0x77:  xor    $0x1,%eax
0841c870 +0x7a:  test   %al,%al
0841c872 +0x7c:  je     0841c87b <+0x85>
0841c874 +0x7e:  mov    $0x0,%eax
0841c879 +0x83:  jmp    0841c880 <+0x8a>
0841c87b +0x85:  mov    $0x1,%eax
0841c880 +0x8a:  leave
0841c881 +0x8b:  ret
```

## 反编译 C

```c
// DB_UpdateNatTypeUser::dispatch @ 0x841c7f6

/* DB_UpdateNatTypeUser::dispatch(int, int, Stream*) */

bool DB_UpdateNatTypeUser::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  SIG_NAT_TYPE_USER *pSVar2;
  MySQL *this;
  Stream *in_stack_00000010;
  
  pSVar2 = Stream::GetOutBuffer<SIG_NAT_TYPE_USER>(in_stack_00000010);
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  MySQL::set_query(this,
                   "inSert into log_nat_stat(occ_time,nat_type,nat_cnt) values(from_unixtime(%d),%d,%d)"
                   ,*(undefined4 *)(pSVar2 + 8),*(undefined4 *)pSVar2,*(undefined4 *)(pSVar2 + 4));
  cVar1 = MySQL::exec(this,true);
  return cVar1 == '\x01';
}
```
