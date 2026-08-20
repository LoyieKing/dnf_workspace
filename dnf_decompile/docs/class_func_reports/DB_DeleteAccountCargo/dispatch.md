# dispatch

`_ZN21DB_DeleteAccountCargo8dispatchEiiP6Stream`

`DB_DeleteAccountCargo::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_DeleteAccountCargo` | `0x0843b24e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843b24e  _ZN21DB_DeleteAccountCargo8dispatchEiiP6Stream
#           DB_DeleteAccountCargo::dispatch(int, int, Stream*)
# range [0x0843b24e, 0x0843b2df]
0843b24e +0x00:  push   %ebp
0843b24f +0x01:  mov    %esp,%ebp
0843b251 +0x03:  sub    $0x28,%esp
0843b254 +0x06:  movl   $0x0,-0x10(%ebp)
0843b25b +0x0d:  lea    -0x10(%ebp),%eax
0843b25e +0x10:  mov    %eax,0x4(%esp)
0843b262 +0x14:  mov    0x14(%ebp),%eax
0843b265 +0x17:  mov    %eax,(%esp)
0843b268 +0x1a:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
0843b26d +0x1f:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0843b272 +0x24:  movl   $0x0,0x8(%esp)
0843b27a +0x2c:  movl   $0x2,0x4(%esp)
0843b282 +0x34:  mov    %eax,(%esp)
0843b285 +0x37:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0843b28a +0x3c:  mov    %eax,-0xc(%ebp)
0843b28d +0x3f:  mov    -0x10(%ebp),%eax
0843b290 +0x42:  movl   $0x0,0x4(%esp)
0843b298 +0x4a:  mov    %eax,(%esp)
0843b29b +0x4d:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0843b2a0 +0x52:  mov    %eax,0x8(%esp)
0843b2a4 +0x56:  movl   $"deLete from account_cargo where m_id = %s",0x4(%esp)
0843b2ac +0x5e:  mov    -0xc(%ebp),%eax
0843b2af +0x61:  mov    %eax,(%esp)
0843b2b2 +0x64:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0843b2b7 +0x69:  movl   $0x1,0x4(%esp)
0843b2bf +0x71:  mov    -0xc(%ebp),%eax
0843b2c2 +0x74:  mov    %eax,(%esp)
0843b2c5 +0x77:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0843b2ca +0x7c:  xor    $0x1,%eax
0843b2cd +0x7f:  test   %al,%al
0843b2cf +0x81:  je     0843b2d8 <+0x8a>
0843b2d1 +0x83:  mov    $0x0,%eax
0843b2d6 +0x88:  jmp    0843b2dd <+0x8f>
0843b2d8 +0x8a:  mov    $0x1,%eax
0843b2dd +0x8f:  leave
0843b2de +0x90:  ret
0843b2df +0x91:  nop
```

## 反编译 C

```c
// DB_DeleteAccountCargo::dispatch @ 0x843b24e

/* DB_DeleteAccountCargo::dispatch(int, int, Stream*) */

bool DB_DeleteAccountCargo::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  Stream *in_stack_00000010;
  uint local_14;
  MySQL *local_10;
  
  local_14 = 0;
  Stream::operator>>(in_stack_00000010,&local_14);
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  uVar2 = NumberToString(local_14,0);
  MySQL::set_query(local_10,"deLete from account_cargo where m_id = %s",uVar2);
  cVar1 = MySQL::exec(local_10,true);
  return cVar1 == '\x01';
}
```
