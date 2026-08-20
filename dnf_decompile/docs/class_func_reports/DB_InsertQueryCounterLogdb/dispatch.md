# dispatch

`_ZN26DB_InsertQueryCounterLogdb8dispatchEiiP6Stream`

`DB_InsertQueryCounterLogdb::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_InsertQueryCounterLogdb` | `0x08425cde` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08425cde  _ZN26DB_InsertQueryCounterLogdb8dispatchEiiP6Stream
#           DB_InsertQueryCounterLogdb::dispatch(int, int, Stream*)
# range [0x08425cde, 0x08425dbd]
08425cde +0x00:  push   %ebp
08425cdf +0x01:  mov    %esp,%ebp
08425ce1 +0x03:  push   %ebx
08425ce2 +0x04:  sub    $0x6024,%esp
08425ce8 +0x0a:  movl   $0x0,-0x10(%ebp)
08425cef +0x11:  movl   $0x0,-0x14(%ebp)
08425cf6 +0x18:  lea    -0x6015(%ebp),%eax
08425cfc +0x1e:  mov    $0x6001,%edx
08425d01 +0x23:  mov    %edx,0x8(%esp)
08425d05 +0x27:  movl   $0x0,0x4(%esp)
08425d0d +0x2f:  mov    %eax,(%esp)
08425d10 +0x32:  call   0807dcc0 <_init+0x5b8>
08425d15 +0x37:  lea    -0x10(%ebp),%eax
08425d18 +0x3a:  mov    %eax,0x4(%esp)
08425d1c +0x3e:  mov    0x14(%ebp),%eax
08425d1f +0x41:  mov    %eax,(%esp)
08425d22 +0x44:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
08425d27 +0x49:  lea    -0x14(%ebp),%eax
08425d2a +0x4c:  mov    %eax,0x4(%esp)
08425d2e +0x50:  mov    0x14(%ebp),%eax
08425d31 +0x53:  mov    %eax,(%esp)
08425d34 +0x56:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
08425d39 +0x5b:  mov    -0x14(%ebp),%eax
08425d3c +0x5e:  mov    %eax,0x8(%esp)
08425d40 +0x62:  lea    -0x6015(%ebp),%eax
08425d46 +0x68:  mov    %eax,0x4(%esp)
08425d4a +0x6c:  mov    0x14(%ebp),%eax
08425d4d +0x6f:  mov    %eax,(%esp)
08425d50 +0x72:  call   0861c7fa <_ZN6Stream10get_binaryEPvi>  ; Stream::get_binary(void*, int)
08425d55 +0x77:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08425d5a +0x7c:  movl   $0x0,0x8(%esp)
08425d62 +0x84:  movl   $0x4,0x4(%esp)
08425d6a +0x8c:  mov    %eax,(%esp)
08425d6d +0x8f:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08425d72 +0x94:  mov    %eax,-0xc(%ebp)
08425d75 +0x97:  mov    -0x10(%ebp),%ebx
08425d78 +0x9a:  mov    -0xc(%ebp),%eax
08425d7b +0x9d:  mov    %eax,(%esp)
08425d7e +0xa0:  call   082a4202 <_GLOBAL__I__ZN4CLog5this_E+0x629>  ; global constructors keyed to CLog::this_+0x629
08425d83 +0xa5:  movl   $0x0,0xc(%esp)
08425d8b +0xad:  mov    %ebx,0x8(%esp)
08425d8f +0xb1:  lea    -0x6015(%ebp),%edx
08425d95 +0xb7:  mov    %edx,0x4(%esp)
08425d99 +0xbb:  mov    %eax,(%esp)
08425d9c +0xbe:  call   085ed5ae <_ZN13CQueryCounter13RegisterQueryEPKcii>  ; CQueryCounter::RegisterQuery(char const*, int, int)
08425da1 +0xc3:  xor    $0x1,%eax
08425da4 +0xc6:  test   %al,%al
08425da6 +0xc8:  je     08425daf <+0xd1>
08425da8 +0xca:  mov    $0x0,%eax
08425dad +0xcf:  jmp    08425db4 <+0xd6>
08425daf +0xd1:  mov    $0x1,%eax
08425db4 +0xd6:  add    $0x6024,%esp
08425dba +0xdc:  pop    %ebx
08425dbb +0xdd:  pop    %ebp
08425dbc +0xde:  ret
08425dbd +0xdf:  nop
```

## 反编译 C

```c
// DB_InsertQueryCounterLogdb::dispatch @ 0x8425cde

/* DB_InsertQueryCounterLogdb::dispatch(int, int, Stream*) */

bool DB_InsertQueryCounterLogdb::dispatch(int param_1,int param_2,Stream *param_3)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  Stream *in_stack_00000010;
  undefined1 local_6019 [24577];
  int local_18;
  int local_14;
  MySQL *local_10;
  
  local_14 = 0;
  local_18 = 0;
  memset(local_6019,0,0x6001);
  Stream::operator>>(in_stack_00000010,&local_14);
  Stream::operator>>(in_stack_00000010,&local_18);
  Stream::get_binary(in_stack_00000010,local_6019,local_18);
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  iVar1 = local_14;
  pcVar3 = (char *)MySQL::GetQueryCounter(local_10);
  cVar2 = CQueryCounter::RegisterQuery(pcVar3,(int)local_6019,iVar1);
  return cVar2 == '\x01';
}
```
