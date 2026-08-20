# dispatch

`_ZN29DB_UpdateBlueMarbleEnterCount8dispatchEiiP6Stream`

`DB_UpdateBlueMarbleEnterCount::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateBlueMarbleEnterCount` | `0x0844874e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0844874e  _ZN29DB_UpdateBlueMarbleEnterCount8dispatchEiiP6Stream
#           DB_UpdateBlueMarbleEnterCount::dispatch(int, int, Stream*)
# range [0x0844874e, 0x0844884b]
0844874e +0x00:  push   %ebp
0844874f +0x01:  mov    %esp,%ebp
08448751 +0x03:  sub    $0x28,%esp
08448754 +0x06:  movl   $0x0,-0x10(%ebp)
0844875b +0x0d:  movb   $0x0,-0x11(%ebp)
0844875f +0x11:  lea    -0x10(%ebp),%eax
08448762 +0x14:  mov    %eax,0x4(%esp)
08448766 +0x18:  mov    0x14(%ebp),%eax
08448769 +0x1b:  mov    %eax,(%esp)
0844876c +0x1e:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
08448771 +0x23:  lea    -0x11(%ebp),%eax
08448774 +0x26:  mov    %eax,0x4(%esp)
08448778 +0x2a:  mov    0x14(%ebp),%eax
0844877b +0x2d:  mov    %eax,(%esp)
0844877e +0x30:  call   0861c732 <_ZN6StreamrsERh>  ; Stream::operator>>(unsigned char&)
08448783 +0x35:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08448788 +0x3a:  movl   $0x0,0x8(%esp)
08448790 +0x42:  movl   $0x2,0x4(%esp)
08448798 +0x4a:  mov    %eax,(%esp)
0844879b +0x4d:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
084487a0 +0x52:  mov    %eax,-0xc(%ebp)
084487a3 +0x55:  mov    -0x10(%ebp),%edx
084487a6 +0x58:  movzbl -0x11(%ebp),%eax
084487aa +0x5c:  movzbl %al,%eax
084487ad +0x5f:  mov    %edx,0xc(%esp)
084487b1 +0x63:  mov    %eax,0x8(%esp)
084487b5 +0x67:  movl   $"upDate charac_option set blue_marble_enter_count = %u where charac_no = %u",0x4(%esp)
084487bd +0x6f:  mov    -0xc(%ebp),%eax
084487c0 +0x72:  mov    %eax,(%esp)
084487c3 +0x75:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084487c8 +0x7a:  movl   $0x1,0x4(%esp)
084487d0 +0x82:  mov    -0xc(%ebp),%eax
084487d3 +0x85:  mov    %eax,(%esp)
084487d6 +0x88:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084487db +0x8d:  xor    $0x1,%eax
084487de +0x90:  test   %al,%al
084487e0 +0x92:  je     084487e9 <+0x9b>
084487e2 +0x94:  mov    $0x0,%eax
084487e7 +0x99:  jmp    0844884a <+0xfc>
084487e9 +0x9b:  mov    -0xc(%ebp),%eax
084487ec +0x9e:  mov    %eax,(%esp)
084487ef +0xa1:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
084487f4 +0xa6:  or     %edx,%eax
084487f6 +0xa8:  test   %eax,%eax
084487f8 +0xaa:  sete   %al
084487fb +0xad:  test   %al,%al
084487fd +0xaf:  je     08448845 <+0xf7>
084487ff +0xb1:  movzbl -0x11(%ebp),%eax
08448803 +0xb5:  movzbl %al,%edx
08448806 +0xb8:  mov    -0x10(%ebp),%eax
08448809 +0xbb:  mov    %edx,0xc(%esp)
0844880d +0xbf:  mov    %eax,0x8(%esp)
08448811 +0xc3:  movl   $"inSert into charac_option(charac_no, blue_marble_enter_count) values(%u, %u)",0x4(%esp)
08448819 +0xcb:  mov    -0xc(%ebp),%eax
0844881c +0xce:  mov    %eax,(%esp)
0844881f +0xd1:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08448824 +0xd6:  movl   $0x1,0x4(%esp)
0844882c +0xde:  mov    -0xc(%ebp),%eax
0844882f +0xe1:  mov    %eax,(%esp)
08448832 +0xe4:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08448837 +0xe9:  xor    $0x1,%eax
0844883a +0xec:  test   %al,%al
0844883c +0xee:  je     08448845 <+0xf7>
0844883e +0xf0:  mov    $0x0,%eax
08448843 +0xf5:  jmp    0844884a <+0xfc>
08448845 +0xf7:  mov    $0x1,%eax
0844884a +0xfc:  leave
0844884b +0xfd:  ret
```

## 反编译 C

```c
// DB_UpdateBlueMarbleEnterCount::dispatch @ 0x844874e

/* DB_UpdateBlueMarbleEnterCount::dispatch(int, int, Stream*) */

undefined4 DB_UpdateBlueMarbleEnterCount::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  Stream *in_stack_00000010;
  byte local_15;
  uint local_14;
  MySQL *local_10;
  
  local_14 = 0;
  local_15 = 0;
  Stream::operator>>(in_stack_00000010,&local_14);
  Stream::operator>>(in_stack_00000010,&local_15);
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  MySQL::set_query(local_10,
                   "upDate charac_option set blue_marble_enter_count = %u where charac_no = %u",
                   (uint)local_15,local_14);
  cVar1 = MySQL::exec(local_10,true);
  if (cVar1 == '\x01') {
    lVar3 = MySQL::getAffectedRowCount(local_10);
    if (lVar3 == 0) {
      MySQL::set_query(local_10,
                       "inSert into charac_option(charac_no, blue_marble_enter_count) values(%u, %u)"
                       ,local_14,(uint)local_15);
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
  return uVar2;
}
```
