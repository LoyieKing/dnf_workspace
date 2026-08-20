# dispatch

`_ZN37DB_UpdateGoblinPadAdvicePwdRewardTime8dispatchEiiP6Stream`

`DB_UpdateGoblinPadAdvicePwdRewardTime::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateGoblinPadAdvicePwdRewardTime` | `0x0843f5d2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843f5d2  _ZN37DB_UpdateGoblinPadAdvicePwdRewardTime8dispatchEiiP6Stream
#           DB_UpdateGoblinPadAdvicePwdRewardTime::dispatch(int, int, Stream*)
# range [0x0843f5d2, 0x0843f683]
0843f5d2 +0x00:  push   %ebp
0843f5d3 +0x01:  mov    %esp,%ebp
0843f5d5 +0x03:  sub    $0x28,%esp
0843f5d8 +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0843f5dd +0x0b:  movl   $0x0,0x8(%esp)
0843f5e5 +0x13:  movl   $0x6,0x4(%esp)
0843f5ed +0x1b:  mov    %eax,(%esp)
0843f5f0 +0x1e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0843f5f5 +0x23:  mov    %eax,-0xc(%ebp)
0843f5f8 +0x26:  movl   $0x0,-0x10(%ebp)
0843f5ff +0x2d:  lea    -0x10(%ebp),%eax
0843f602 +0x30:  mov    %eax,0x4(%esp)
0843f606 +0x34:  mov    0x14(%ebp),%eax
0843f609 +0x37:  mov    %eax,(%esp)
0843f60c +0x3a:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
0843f611 +0x3f:  mov    -0x10(%ebp),%eax
0843f614 +0x42:  movl   $0x0,0x4(%esp)
0843f61c +0x4a:  mov    %eax,(%esp)
0843f61f +0x4d:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0843f624 +0x52:  mov    %eax,0x8(%esp)
0843f628 +0x56:  movl   $"upDate member_mousepass set reward_time=0 where m_id=%s and enable_flag = '1'",0x4(%esp)
0843f630 +0x5e:  mov    -0xc(%ebp),%eax
0843f633 +0x61:  mov    %eax,(%esp)
0843f636 +0x64:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0843f63b +0x69:  movl   $0x1,0x4(%esp)
0843f643 +0x71:  mov    -0xc(%ebp),%eax
0843f646 +0x74:  mov    %eax,(%esp)
0843f649 +0x77:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0843f64e +0x7c:  xor    $0x1,%eax
0843f651 +0x7f:  test   %al,%al
0843f653 +0x81:  jne    0843f666 <+0x94>
0843f655 +0x83:  mov    -0xc(%ebp),%eax
0843f658 +0x86:  mov    %eax,(%esp)
0843f65b +0x89:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
0843f660 +0x8e:  or     %edx,%eax
0843f662 +0x90:  test   %eax,%eax
0843f664 +0x92:  jne    0843f66d <+0x9b>
0843f666 +0x94:  mov    $0x1,%eax
0843f66b +0x99:  jmp    0843f672 <+0xa0>
0843f66d +0x9b:  mov    $0x0,%eax
0843f672 +0xa0:  test   %al,%al
0843f674 +0xa2:  je     0843f67d <+0xab>
0843f676 +0xa4:  mov    $0x0,%eax
0843f67b +0xa9:  jmp    0843f682 <+0xb0>
0843f67d +0xab:  mov    $0x1,%eax
0843f682 +0xb0:  leave
0843f683 +0xb1:  ret
```

## 反编译 C

```c
// DB_UpdateGoblinPadAdvicePwdRewardTime::dispatch @ 0x843f5d2

/* DB_UpdateGoblinPadAdvicePwdRewardTime::dispatch(int, int, Stream*) */

bool DB_UpdateGoblinPadAdvicePwdRewardTime::dispatch(int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  Stream *in_stack_00000010;
  uint local_14;
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  local_14 = 0;
  Stream::operator>>(in_stack_00000010,&local_14);
  uVar3 = NumberToString(local_14,0);
  MySQL::set_query(local_10,
                   "upDate member_mousepass set reward_time=0 where m_id=%s and enable_flag = \'1\'"
                   ,uVar3);
  cVar2 = MySQL::exec(local_10,true);
  if ((cVar2 == '\x01') && (lVar4 = MySQL::getAffectedRowCount(local_10), lVar4 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  return !bVar1;
}
```
