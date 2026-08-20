# dispatch

`_ZN23DB_UpdateCharacPlayTime8dispatchEiiP6Stream`

`DB_UpdateCharacPlayTime::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateCharacPlayTime` | `0x0843f75a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843f75a  _ZN23DB_UpdateCharacPlayTime8dispatchEiiP6Stream
#           DB_UpdateCharacPlayTime::dispatch(int, int, Stream*)
# range [0x0843f75a, 0x0843f7ed]
0843f75a +0x00:  push   %ebp
0843f75b +0x01:  mov    %esp,%ebp
0843f75d +0x03:  sub    $0x28,%esp
0843f760 +0x06:  movl   $0x0,-0x10(%ebp)
0843f767 +0x0d:  movl   $0x0,-0x14(%ebp)
0843f76e +0x14:  lea    -0x10(%ebp),%eax
0843f771 +0x17:  mov    %eax,0x4(%esp)
0843f775 +0x1b:  mov    0x14(%ebp),%eax
0843f778 +0x1e:  mov    %eax,(%esp)
0843f77b +0x21:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
0843f780 +0x26:  lea    -0x14(%ebp),%eax
0843f783 +0x29:  mov    %eax,0x4(%esp)
0843f787 +0x2d:  mov    0x14(%ebp),%eax
0843f78a +0x30:  mov    %eax,(%esp)
0843f78d +0x33:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
0843f792 +0x38:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0843f797 +0x3d:  movl   $0x0,0x8(%esp)
0843f79f +0x45:  movl   $0x2,0x4(%esp)
0843f7a7 +0x4d:  mov    %eax,(%esp)
0843f7aa +0x50:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0843f7af +0x55:  mov    %eax,-0xc(%ebp)
0843f7b2 +0x58:  mov    -0x10(%ebp),%edx
0843f7b5 +0x5b:  mov    -0x14(%ebp),%eax
0843f7b8 +0x5e:  mov    %edx,0xc(%esp)
0843f7bc +0x62:  mov    %eax,0x8(%esp)
0843f7c0 +0x66:  movl   $"upDate charac_stat set total_play_time=total_play_time + %d where charac_no = %d",0x4(%esp)
0843f7c8 +0x6e:  mov    -0xc(%ebp),%eax
0843f7cb +0x71:  mov    %eax,(%esp)
0843f7ce +0x74:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0843f7d3 +0x79:  movl   $0x1,0x4(%esp)
0843f7db +0x81:  mov    -0xc(%ebp),%eax
0843f7de +0x84:  mov    %eax,(%esp)
0843f7e1 +0x87:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0843f7e6 +0x8c:  mov    $0x1,%eax
0843f7eb +0x91:  leave
0843f7ec +0x92:  ret
0843f7ed +0x93:  nop
```

## 反编译 C

```c
// DB_UpdateCharacPlayTime::dispatch @ 0x843f75a

/* DB_UpdateCharacPlayTime::dispatch(int, int, Stream*) */

undefined4 DB_UpdateCharacPlayTime::dispatch(int param_1,int param_2,Stream *param_3)

{
  Stream *in_stack_00000010;
  int local_18;
  int local_14;
  MySQL *local_10;
  
  local_14 = 0;
  local_18 = 0;
  Stream::operator>>(in_stack_00000010,&local_14);
  Stream::operator>>(in_stack_00000010,&local_18);
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  MySQL::set_query(local_10,
                   "upDate charac_stat set total_play_time=total_play_time + %d where charac_no = %d"
                   ,local_18,local_14);
  MySQL::exec(local_10,true);
  return 1;
}
```
