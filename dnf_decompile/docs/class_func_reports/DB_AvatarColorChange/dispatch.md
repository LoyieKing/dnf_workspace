# dispatch

`_ZN20DB_AvatarColorChange8dispatchEiiP6Stream`

`DB_AvatarColorChange::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_AvatarColorChange` | `0x08446944` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08446944  _ZN20DB_AvatarColorChange8dispatchEiiP6Stream
#           DB_AvatarColorChange::dispatch(int, int, Stream*)
# range [0x08446944, 0x08446a1d]
08446944 +0x00:  push   %ebp
08446945 +0x01:  mov    %esp,%ebp
08446947 +0x03:  push   %ebx
08446948 +0x04:  sub    $0x44,%esp
0844694b +0x07:  mov    0x14(%ebp),%eax
0844694e +0x0a:  mov    %eax,(%esp)
08446951 +0x0d:  call   08454370 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6f86>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6f86
08446956 +0x12:  mov    %eax,-0x10(%ebp)
08446959 +0x15:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0844695e +0x1a:  movl   $0x0,0x8(%esp)
08446966 +0x22:  movl   $0x3,0x4(%esp)
0844696e +0x2a:  mov    %eax,(%esp)
08446971 +0x2d:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08446976 +0x32:  mov    %eax,-0xc(%ebp)
08446979 +0x35:  mov    -0x10(%ebp),%eax
0844697c +0x38:  mov    (%eax),%ebx
0844697e +0x3a:  mov    -0x10(%ebp),%eax
08446981 +0x3d:  mov    0x4(%eax),%ecx
08446984 +0x40:  mov    -0x10(%ebp),%eax
08446987 +0x43:  movzwl 0xa(%eax),%eax
0844698b +0x47:  movzwl %ax,%edx
0844698e +0x4a:  mov    -0x10(%ebp),%eax
08446991 +0x4d:  movzwl 0x8(%eax),%eax
08446995 +0x51:  movzwl %ax,%eax
08446998 +0x54:  mov    %ebx,0x14(%esp)
0844699c +0x58:  mov    %ecx,0x10(%esp)
084469a0 +0x5c:  mov    %edx,0xc(%esp)
084469a4 +0x60:  mov    %eax,0x8(%esp)
084469a8 +0x64:  movl   $"upDate user_items set color1=%d, color2=%d where ui_id=%d and charac_no=%d",0x4(%esp)
084469b0 +0x6c:  mov    -0xc(%ebp),%eax
084469b3 +0x6f:  mov    %eax,(%esp)
084469b6 +0x72:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084469bb +0x77:  movl   $0x1,0x4(%esp)
084469c3 +0x7f:  mov    -0xc(%ebp),%eax
084469c6 +0x82:  mov    %eax,(%esp)
084469c9 +0x85:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084469ce +0x8a:  xor    $0x1,%eax
084469d1 +0x8d:  test   %al,%al
084469d3 +0x8f:  je     08446a12 <+0xce>
084469d5 +0x91:  movl   $0x5,0xc(%esp)
084469dd +0x99:  movl   $0xae70,0x8(%esp)
084469e5 +0xa1:  movl   $&_ZZN20DB_AvatarColorChange8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
084469ed +0xa9:  lea    -0x20(%ebp),%eax
084469f0 +0xac:  mov    %eax,(%esp)
084469f3 +0xaf:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084469f8 +0xb4:  movl   $"AVATAR_COLOR_CHANGE::DB_UPDATE_FAIL",0x4(%esp)
08446a00 +0xbc:  lea    -0x20(%ebp),%eax
08446a03 +0xbf:  mov    %eax,(%esp)
08446a06 +0xc2:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08446a0b +0xc7:  mov    $0x0,%eax
08446a10 +0xcc:  jmp    08446a17 <+0xd3>
08446a12 +0xce:  mov    $0x1,%eax
08446a17 +0xd3:  add    $0x44,%esp
08446a1a +0xd6:  pop    %ebx
08446a1b +0xd7:  pop    %ebp
08446a1c +0xd8:  ret
08446a1d +0xd9:  nop
```

## 反编译 C

```c
// DB_AvatarColorChange::dispatch @ 0x8446944

/* DB_AvatarColorChange::dispatch(int, int, Stream*) */

bool DB_AvatarColorChange::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  Stream *in_stack_00000010;
  cMyTrace local_24 [16];
  SIG_AVATAR_COLOR_CHANGE *local_14;
  MySQL *local_10;
  
  local_14 = Stream::GetOutBuffer<SIG_AVATAR_COLOR_CHANGE>(in_stack_00000010);
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  MySQL::set_query(local_10,
                   "upDate user_items set color1=%d, color2=%d where ui_id=%d and charac_no=%d",
                   (uint)*(ushort *)(local_14 + 8),(uint)*(ushort *)(local_14 + 10),
                   *(undefined4 *)(local_14 + 4),*(undefined4 *)local_14);
  cVar1 = MySQL::exec(local_10,true);
  if (cVar1 != '\x01') {
    cMyTrace::cMyTrace(local_24,"virtual bool DB_AvatarColorChange::dispatch(int, int, Stream*)",
                       0xae70,5);
    cMyTrace::operator()(local_24,"AVATAR_COLOR_CHANGE::DB_UPDATE_FAIL");
  }
  return cVar1 == '\x01';
}
```
