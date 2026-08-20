# dispatch

`_ZN20DB_TestTradeRestrict8dispatchEiiP6Stream`

`DB_TestTradeRestrict::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_TestTradeRestrict` | `0x0844a0be` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0844a0be  _ZN20DB_TestTradeRestrict8dispatchEiiP6Stream
#           DB_TestTradeRestrict::dispatch(int, int, Stream*)
# range [0x0844a0be, 0x0844a131]
0844a0be +0x00:  push   %ebp
0844a0bf +0x01:  mov    %esp,%ebp
0844a0c1 +0x03:  sub    $0x28,%esp
0844a0c4 +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0844a0c9 +0x0b:  movl   $0x0,0x8(%esp)
0844a0d1 +0x13:  movl   $0x3,0x4(%esp)
0844a0d9 +0x1b:  mov    %eax,(%esp)
0844a0dc +0x1e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0844a0e1 +0x23:  mov    %eax,-0xc(%ebp)
0844a0e4 +0x26:  movl   $0x0,-0x10(%ebp)
0844a0eb +0x2d:  lea    -0x10(%ebp),%eax
0844a0ee +0x30:  mov    %eax,0x4(%esp)
0844a0f2 +0x34:  mov    0x14(%ebp),%eax
0844a0f5 +0x37:  mov    %eax,(%esp)
0844a0f8 +0x3a:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
0844a0fd +0x3f:  mov    -0x10(%ebp),%eax
0844a100 +0x42:  mov    %eax,0x8(%esp)
0844a104 +0x46:  movl   $"upDate user_items set trade_restrict = 1 where charac_no = %u",0x4(%esp)
0844a10c +0x4e:  mov    -0xc(%ebp),%eax
0844a10f +0x51:  mov    %eax,(%esp)
0844a112 +0x54:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0844a117 +0x59:  movl   $0x1,0x4(%esp)
0844a11f +0x61:  mov    -0xc(%ebp),%eax
0844a122 +0x64:  mov    %eax,(%esp)
0844a125 +0x67:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0844a12a +0x6c:  mov    $0x1,%eax
0844a12f +0x71:  leave
0844a130 +0x72:  ret
0844a131 +0x73:  nop
```

## 反编译 C

```c
// DB_TestTradeRestrict::dispatch @ 0x844a0be

/* DB_TestTradeRestrict::dispatch(int, int, Stream*) */

undefined4 DB_TestTradeRestrict::dispatch(int param_1,int param_2,Stream *param_3)

{
  Stream *in_stack_00000010;
  uint local_14;
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  local_14 = 0;
  Stream::operator>>(in_stack_00000010,&local_14);
  MySQL::set_query(local_10,"upDate user_items set trade_restrict = 1 where charac_no = %u",local_14
                  );
  MySQL::exec(local_10,true);
  return 1;
}
```
