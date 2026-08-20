# dispatch

`_ZN18DB_UpdateGiftCount8dispatchEiiP6Stream`

`DB_UpdateGiftCount::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateGiftCount` | `0x08427112` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08427112  _ZN18DB_UpdateGiftCount8dispatchEiiP6Stream
#           DB_UpdateGiftCount::dispatch(int, int, Stream*)
# range [0x08427112, 0x084271eb]
08427112 +0x00:  push   %ebp
08427113 +0x01:  mov    %esp,%ebp
08427115 +0x03:  sub    $0x38,%esp
08427118 +0x06:  movl   $0x0,-0x10(%ebp)
0842711f +0x0d:  movl   $0x0,-0x14(%ebp)
08427126 +0x14:  lea    -0x10(%ebp),%eax
08427129 +0x17:  mov    %eax,0x4(%esp)
0842712d +0x1b:  mov    0x14(%ebp),%eax
08427130 +0x1e:  mov    %eax,(%esp)
08427133 +0x21:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
08427138 +0x26:  lea    -0x14(%ebp),%eax
0842713b +0x29:  mov    %eax,0x4(%esp)
0842713f +0x2d:  mov    0x14(%ebp),%eax
08427142 +0x30:  mov    %eax,(%esp)
08427145 +0x33:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
0842714a +0x38:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0842714f +0x3d:  movl   $0x0,0x8(%esp)
08427157 +0x45:  movl   $0x6,0x4(%esp)
0842715f +0x4d:  mov    %eax,(%esp)
08427162 +0x50:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08427167 +0x55:  mov    %eax,-0xc(%ebp)
0842716a +0x58:  movl   $0x14,0x8(%esp)
08427172 +0x60:  movl   $0x0,0x4(%esp)
0842717a +0x68:  lea    -0x28(%ebp),%eax
0842717d +0x6b:  mov    %eax,(%esp)
08427180 +0x6e:  call   0807dcc0 <_init+0x5b8>
08427185 +0x73:  movl   $0xd,0x8(%esp)
0842718d +0x7b:  movl   $"member_login",0x4(%esp)
08427195 +0x83:  lea    -0x28(%ebp),%eax
08427198 +0x86:  mov    %eax,(%esp)
0842719b +0x89:  call   0807d8a0 <_init+0x198>
084271a0 +0x8e:  mov    -0x10(%ebp),%eax
084271a3 +0x91:  movl   $0x0,0x4(%esp)
084271ab +0x99:  mov    %eax,(%esp)
084271ae +0x9c:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084271b3 +0xa1:  mov    -0x14(%ebp),%edx
084271b6 +0xa4:  mov    %eax,0xc(%esp)
084271ba +0xa8:  mov    %edx,0x8(%esp)
084271be +0xac:  movl   $"upDate member_login set last_gift_time=unix_timestamp(now()),gift_cnt=gift_cnt+%d where m_id=%s",0x4(%esp)
084271c6 +0xb4:  mov    -0xc(%ebp),%eax
084271c9 +0xb7:  mov    %eax,(%esp)
084271cc +0xba:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084271d1 +0xbf:  movl   $0x1,0x4(%esp)
084271d9 +0xc7:  mov    -0xc(%ebp),%eax
084271dc +0xca:  mov    %eax,(%esp)
084271df +0xcd:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084271e4 +0xd2:  mov    $0x1,%eax
084271e9 +0xd7:  leave
084271ea +0xd8:  ret
084271eb +0xd9:  nop
```

## 反编译 C

```c
// DB_UpdateGiftCount::dispatch @ 0x8427112

/* DB_UpdateGiftCount::dispatch(int, int, Stream*) */

undefined4 DB_UpdateGiftCount::dispatch(int param_1,int param_2,Stream *param_3)

{
  undefined4 uVar1;
  Stream *in_stack_00000010;
  undefined1 local_2c [20];
  int local_18;
  uint local_14;
  MySQL *local_10;
  
  local_14 = 0;
  local_18 = 0;
  Stream::operator>>(in_stack_00000010,&local_14);
  Stream::operator>>(in_stack_00000010,&local_18);
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  memset(local_2c,0,0x14);
  memcpy(local_2c,"member_login",0xd);
  uVar1 = NumberToString(local_14,0);
  MySQL::set_query(local_10,
                   "upDate member_login set last_gift_time=unix_timestamp(now()),gift_cnt=gift_cnt+%d where m_id=%s"
                   ,local_18,uVar1);
  MySQL::exec(local_10,true);
  return 1;
}
```
