# dispatch

`_ZN16DB_UpdateNatType8dispatchEiiP6Stream`

`DB_UpdateNatType::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateNatType` | `0x0841c74e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0841c74e  _ZN16DB_UpdateNatType8dispatchEiiP6Stream
#           DB_UpdateNatType::dispatch(int, int, Stream*)
# range [0x0841c74e, 0x0841c7f5]
0841c74e +0x00:  push   %ebp
0841c74f +0x01:  mov    %esp,%ebp
0841c751 +0x03:  push   %esi
0841c752 +0x04:  push   %ebx
0841c753 +0x05:  sub    $0x30,%esp
0841c756 +0x08:  mov    0x14(%ebp),%eax
0841c759 +0x0b:  mov    %eax,(%esp)
0841c75c +0x0e:  call   084514b2 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x40c8>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x40c8
0841c761 +0x13:  mov    %eax,-0x10(%ebp)
0841c764 +0x16:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0841c769 +0x1b:  movl   $0x0,0x8(%esp)
0841c771 +0x23:  movl   $0x4,0x4(%esp)
0841c779 +0x2b:  mov    %eax,(%esp)
0841c77c +0x2e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0841c781 +0x33:  mov    %eax,-0xc(%ebp)
0841c784 +0x36:  mov    -0x10(%ebp),%eax
0841c787 +0x39:  mov    0x8(%eax),%esi
0841c78a +0x3c:  mov    -0x10(%ebp),%eax
0841c78d +0x3f:  mov    0xc(%eax),%ebx
0841c790 +0x42:  mov    -0x10(%ebp),%eax
0841c793 +0x45:  mov    0x4(%eax),%ecx
0841c796 +0x48:  mov    -0x10(%ebp),%eax
0841c799 +0x4b:  mov    (%eax),%edx
0841c79b +0x4d:  mov    -0x10(%ebp),%eax
0841c79e +0x50:  mov    0x10(%eax),%eax
0841c7a1 +0x53:  mov    %esi,0x18(%esp)
0841c7a5 +0x57:  mov    %ebx,0x14(%esp)
0841c7a9 +0x5b:  mov    %ecx,0x10(%esp)
0841c7ad +0x5f:  mov    %edx,0xc(%esp)
0841c7b1 +0x63:  mov    %eax,0x8(%esp)
0841c7b5 +0x67:  movl   $"inSert into log_nat_daily(occ_time,nat_type,nat_type_other,success_cnt,fail_cnt) values(from_unixtime(%d),%d,%d,%d,%d)",0x4(%esp)
0841c7bd +0x6f:  mov    -0xc(%ebp),%eax
0841c7c0 +0x72:  mov    %eax,(%esp)
0841c7c3 +0x75:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0841c7c8 +0x7a:  movl   $0x1,0x4(%esp)
0841c7d0 +0x82:  mov    -0xc(%ebp),%eax
0841c7d3 +0x85:  mov    %eax,(%esp)
0841c7d6 +0x88:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0841c7db +0x8d:  xor    $0x1,%eax
0841c7de +0x90:  test   %al,%al
0841c7e0 +0x92:  je     0841c7e9 <+0x9b>
0841c7e2 +0x94:  mov    $0x0,%eax
0841c7e7 +0x99:  jmp    0841c7ee <+0xa0>
0841c7e9 +0x9b:  mov    $0x1,%eax
0841c7ee +0xa0:  add    $0x30,%esp
0841c7f1 +0xa3:  pop    %ebx
0841c7f2 +0xa4:  pop    %esi
0841c7f3 +0xa5:  pop    %ebp
0841c7f4 +0xa6:  ret
0841c7f5 +0xa7:  nop
```

## 反编译 C

```c
// DB_UpdateNatType::dispatch @ 0x841c74e

/* DB_UpdateNatType::dispatch(int, int, Stream*) */

bool DB_UpdateNatType::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  SIG_NAT_TYPE *pSVar2;
  MySQL *this;
  Stream *in_stack_00000010;
  
  pSVar2 = Stream::GetOutBuffer<SIG_NAT_TYPE>(in_stack_00000010);
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  MySQL::set_query(this,
                   "inSert into log_nat_daily(occ_time,nat_type,nat_type_other,success_cnt,fail_cnt) values(from_unixtime(%d),%d,%d,%d,%d)"
                   ,*(undefined4 *)(pSVar2 + 0x10),*(undefined4 *)pSVar2,*(undefined4 *)(pSVar2 + 4)
                   ,*(undefined4 *)(pSVar2 + 0xc),*(undefined4 *)(pSVar2 + 8));
  cVar1 = MySQL::exec(this,true);
  return cVar1 == '\x01';
}
```
