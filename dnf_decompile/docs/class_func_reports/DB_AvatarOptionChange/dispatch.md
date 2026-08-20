# dispatch

`_ZN21DB_AvatarOptionChange8dispatchEiiP6Stream`

`DB_AvatarOptionChange::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_AvatarOptionChange` | `0x0844687e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0844687e  _ZN21DB_AvatarOptionChange8dispatchEiiP6Stream
#           DB_AvatarOptionChange::dispatch(int, int, Stream*)
# range [0x0844687e, 0x08446943]
0844687e +0x00:  push   %ebp
0844687f +0x01:  mov    %esp,%ebp
08446881 +0x03:  sub    $0x48,%esp
08446884 +0x06:  mov    0x14(%ebp),%eax
08446887 +0x09:  mov    %eax,(%esp)
0844688a +0x0c:  call   0845431c <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6f32>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6f32
0844688f +0x11:  mov    %eax,-0x10(%ebp)
08446892 +0x14:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08446897 +0x19:  movl   $0x0,0x8(%esp)
0844689f +0x21:  movl   $0x3,0x4(%esp)
084468a7 +0x29:  mov    %eax,(%esp)
084468aa +0x2c:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
084468af +0x31:  mov    %eax,-0xc(%ebp)
084468b2 +0x34:  mov    -0x10(%ebp),%eax
084468b5 +0x37:  mov    0x8(%eax),%ecx
084468b8 +0x3a:  mov    -0x10(%ebp),%eax
084468bb +0x3d:  mov    (%eax),%edx
084468bd +0x3f:  mov    -0x10(%ebp),%eax
084468c0 +0x42:  movzbl 0x4(%eax),%eax
084468c4 +0x46:  movzbl %al,%eax
084468c7 +0x49:  mov    %ecx,0x10(%esp)
084468cb +0x4d:  mov    %edx,0xc(%esp)
084468cf +0x51:  mov    %eax,0x8(%esp)
084468d3 +0x55:  movl   $"upDate user_items set ability_no=%d where ui_id=%d and charac_no=%d",0x4(%esp)
084468db +0x5d:  mov    -0xc(%ebp),%eax
084468de +0x60:  mov    %eax,(%esp)
084468e1 +0x63:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084468e6 +0x68:  movl   $0x1,0x4(%esp)
084468ee +0x70:  mov    -0xc(%ebp),%eax
084468f1 +0x73:  mov    %eax,(%esp)
084468f4 +0x76:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084468f9 +0x7b:  xor    $0x1,%eax
084468fc +0x7e:  test   %al,%al
084468fe +0x80:  je     0844693d <+0xbf>
08446900 +0x82:  movl   $0x5,0xc(%esp)
08446908 +0x8a:  movl   $0xae5c,0x8(%esp)
08446910 +0x92:  movl   $&_ZZN21DB_AvatarOptionChange8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
08446918 +0x9a:  lea    -0x20(%ebp),%eax
0844691b +0x9d:  mov    %eax,(%esp)
0844691e +0xa0:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08446923 +0xa5:  movl   $"AVATAR_OPTION_CHAGE::DB_UPDATE_FAIL",0x4(%esp)
0844692b +0xad:  lea    -0x20(%ebp),%eax
0844692e +0xb0:  mov    %eax,(%esp)
08446931 +0xb3:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08446936 +0xb8:  mov    $0x0,%eax
0844693b +0xbd:  jmp    08446942 <+0xc4>
0844693d +0xbf:  mov    $0x1,%eax
08446942 +0xc4:  leave
08446943 +0xc5:  ret
```

## 反编译 C

```c
// DB_AvatarOptionChange::dispatch @ 0x844687e

/* DB_AvatarOptionChange::dispatch(int, int, Stream*) */

bool DB_AvatarOptionChange::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  Stream *in_stack_00000010;
  cMyTrace local_24 [16];
  SIG_AVATAR_OPTION_CHANGE *local_14;
  MySQL *local_10;
  
  local_14 = Stream::GetOutBuffer<SIG_AVATAR_OPTION_CHANGE>(in_stack_00000010);
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  MySQL::set_query(local_10,"upDate user_items set ability_no=%d where ui_id=%d and charac_no=%d",
                   (uint)(byte)local_14[4],*(undefined4 *)local_14,*(undefined4 *)(local_14 + 8));
  cVar1 = MySQL::exec(local_10,true);
  if (cVar1 != '\x01') {
    cMyTrace::cMyTrace(local_24,"virtual bool DB_AvatarOptionChange::dispatch(int, int, Stream*)",
                       0xae5c,5);
    cMyTrace::operator()(local_24,"AVATAR_OPTION_CHAGE::DB_UPDATE_FAIL");
  }
  return cVar1 == '\x01';
}
```
