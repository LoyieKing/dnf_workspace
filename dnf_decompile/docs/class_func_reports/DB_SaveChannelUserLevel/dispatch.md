# dispatch

`_ZN23DB_SaveChannelUserLevel8dispatchEiiP6Stream`

`DB_SaveChannelUserLevel::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_SaveChannelUserLevel` | `0x0841be50` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0841be50  _ZN23DB_SaveChannelUserLevel8dispatchEiiP6Stream
#           DB_SaveChannelUserLevel::dispatch(int, int, Stream*)
# range [0x0841be50, 0x0841bf01]
0841be50 +0x00:  push   %ebp
0841be51 +0x01:  mov    %esp,%ebp
0841be53 +0x03:  sub    $0x38,%esp
0841be56 +0x06:  mov    0x14(%ebp),%eax
0841be59 +0x09:  mov    %eax,(%esp)
0841be5c +0x0c:  call   084512f4 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x3f0a>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x3f0a
0841be61 +0x11:  mov    %eax,-0x14(%ebp)
0841be64 +0x14:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0841be69 +0x19:  movl   $0x0,0x8(%esp)
0841be71 +0x21:  movl   $0x4,0x4(%esp)
0841be79 +0x29:  mov    %eax,(%esp)
0841be7c +0x2c:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0841be81 +0x31:  mov    %eax,-0x10(%ebp)
0841be84 +0x34:  movl   $0x1,-0xc(%ebp)
0841be8b +0x3b:  jmp    0841bef0 <+0xa0>
0841be8d +0x3d:  mov    -0xc(%ebp),%edx
0841be90 +0x40:  mov    -0x14(%ebp),%eax
0841be93 +0x43:  mov    0x4(%eax,%edx,4),%ecx
0841be97 +0x47:  mov    -0x14(%ebp),%eax
0841be9a +0x4a:  mov    (%eax),%edx
0841be9c +0x4c:  mov    -0x14(%ebp),%eax
0841be9f +0x4f:  mov    0x120(%eax),%eax
0841bea5 +0x55:  mov    %ecx,0x14(%esp)
0841bea9 +0x59:  mov    -0xc(%ebp),%ecx
0841beac +0x5c:  mov    %ecx,0x10(%esp)
0841beb0 +0x60:  mov    %edx,0xc(%esp)
0841beb4 +0x64:  mov    %eax,0x8(%esp)
0841beb8 +0x68:  movl   $"inSert into channel_lev_status(occ_time,channel_no,lev,occ_count) values(from_unixtime(%d),%d,%d,%d)",0x4(%esp)
0841bec0 +0x70:  mov    -0x10(%ebp),%eax
0841bec3 +0x73:  mov    %eax,(%esp)
0841bec6 +0x76:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0841becb +0x7b:  movl   $0x1,0x4(%esp)
0841bed3 +0x83:  mov    -0x10(%ebp),%eax
0841bed6 +0x86:  mov    %eax,(%esp)
0841bed9 +0x89:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0841bede +0x8e:  xor    $0x1,%eax
0841bee1 +0x91:  test   %al,%al
0841bee3 +0x93:  je     0841beec <+0x9c>
0841bee5 +0x95:  mov    $0x0,%eax
0841beea +0x9a:  jmp    0841bf00 <+0xb0>
0841beec +0x9c:  addl   $0x1,-0xc(%ebp)
0841bef0 +0xa0:  cmpl   $0x46,-0xc(%ebp)
0841bef4 +0xa4:  setle  %al
0841bef7 +0xa7:  test   %al,%al
0841bef9 +0xa9:  jne    0841be8d <+0x3d>
0841befb +0xab:  mov    $0x1,%eax
0841bf00 +0xb0:  leave
0841bf01 +0xb1:  ret
```

## 反编译 C

```c
// DB_SaveChannelUserLevel::dispatch @ 0x841be50

/* DB_SaveChannelUserLevel::dispatch(int, int, Stream*) */

undefined4 DB_SaveChannelUserLevel::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  SIG_UPDATE_STATISTIC4LEV *pSVar2;
  MySQL *this;
  Stream *in_stack_00000010;
  int local_10;
  
  pSVar2 = Stream::GetOutBuffer<SIG_UPDATE_STATISTIC4LEV>(in_stack_00000010);
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  local_10 = 1;
  while( true ) {
    if (0x46 < local_10) {
      return 1;
    }
    MySQL::set_query(this,
                     "inSert into channel_lev_status(occ_time,channel_no,lev,occ_count) values(from_unixtime(%d),%d,%d,%d)"
                     ,*(undefined4 *)(pSVar2 + 0x120),*(undefined4 *)pSVar2,local_10,
                     *(undefined4 *)(pSVar2 + local_10 * 4 + 4));
    cVar1 = MySQL::exec(this,true);
    if (cVar1 != '\x01') break;
    local_10 = local_10 + 1;
  }
  return 0;
}
```
