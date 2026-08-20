# dispatch

`_ZN22DB_InsertPVPPlayerRate8dispatchEiiP6Stream`

`DB_InsertPVPPlayerRate::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_InsertPVPPlayerRate` | `0x0842ca06` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0842ca06  _ZN22DB_InsertPVPPlayerRate8dispatchEiiP6Stream
#           DB_InsertPVPPlayerRate::dispatch(int, int, Stream*)
# range [0x0842ca06, 0x0842cb11]
0842ca06 +0x000:  push   %ebp
0842ca07 +0x001:  mov    %esp,%ebp
0842ca09 +0x003:  push   %edi
0842ca0a +0x004:  push   %esi
0842ca0b +0x005:  push   %ebx
0842ca0c +0x006:  sub    $0x6c,%esp
0842ca0f +0x009:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0842ca14 +0x00e:  movl   $0x0,0x8(%esp)
0842ca1c +0x016:  movl   $0x4,0x4(%esp)
0842ca24 +0x01e:  mov    %eax,(%esp)
0842ca27 +0x021:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0842ca2c +0x026:  mov    %eax,-0x20(%ebp)
0842ca2f +0x029:  lea    -0x38(%ebp),%edx
0842ca32 +0x02c:  mov    $0x0,%ecx
0842ca37 +0x031:  mov    $0x18,%eax
0842ca3c +0x036:  mov    %eax,%ebx
0842ca3e +0x038:  and    $0xfffffffc,%ebx
0842ca41 +0x03b:  mov    $0x0,%eax
0842ca46 +0x040:  mov    %ecx,(%edx,%eax,1)
0842ca49 +0x043:  add    $0x4,%eax
0842ca4c +0x046:  cmp    %ebx,%eax
0842ca4e +0x048:  jb     0842ca46 <+0x40>
0842ca50 +0x04a:  add    %eax,%edx
0842ca52 +0x04c:  movl   $0x0,-0x1c(%ebp)
0842ca59 +0x053:  jmp    0842ca79 <+0x73>
0842ca5b +0x055:  mov    -0x1c(%ebp),%edx
0842ca5e +0x058:  lea    -0x38(%ebp),%eax
0842ca61 +0x05b:  shl    $0x2,%edx
0842ca64 +0x05e:  add    %edx,%eax
0842ca66 +0x060:  mov    %eax,0x4(%esp)
0842ca6a +0x064:  mov    0x14(%ebp),%eax
0842ca6d +0x067:  mov    %eax,(%esp)
0842ca70 +0x06a:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
0842ca75 +0x06f:  addl   $0x1,-0x1c(%ebp)
0842ca79 +0x073:  cmpl   $0x5,-0x1c(%ebp)
0842ca7d +0x077:  setle  %al
0842ca80 +0x07a:  test   %al,%al
0842ca82 +0x07c:  jne    0842ca5b <+0x55>
0842ca84 +0x07e:  mov    -0x24(%ebp),%eax
0842ca87 +0x081:  mov    %eax,-0x44(%ebp)
0842ca8a +0x084:  mov    -0x28(%ebp),%edx
0842ca8d +0x087:  mov    %edx,-0x40(%ebp)
0842ca90 +0x08a:  mov    -0x2c(%ebp),%eax
0842ca93 +0x08d:  mov    %eax,-0x3c(%ebp)
0842ca96 +0x090:  mov    -0x30(%ebp),%edi
0842ca99 +0x093:  mov    -0x34(%ebp),%esi
0842ca9c +0x096:  mov    -0x38(%ebp),%ebx
0842ca9f +0x099:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0842caa4 +0x09e:  mov    %eax,(%esp)
0842caa7 +0x0a1:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
0842caac +0x0a6:  mov    -0x44(%ebp),%edx
0842caaf +0x0a9:  mov    %edx,0x20(%esp)
0842cab3 +0x0ad:  mov    -0x40(%ebp),%edx
0842cab6 +0x0b0:  mov    %edx,0x1c(%esp)
0842caba +0x0b4:  mov    -0x3c(%ebp),%edx
0842cabd +0x0b7:  mov    %edx,0x18(%esp)
0842cac1 +0x0bb:  mov    %edi,0x14(%esp)
0842cac5 +0x0bf:  mov    %esi,0x10(%esp)
0842cac9 +0x0c3:  mov    %ebx,0xc(%esp)
0842cacd +0x0c7:  mov    %eax,0x8(%esp)
0842cad1 +0x0cb:  movl   $"inSert into log_pvp_player_rate(channel_no,occ_date,single_one_to_one,single_one_to_one_other,team_one_to_one,team_one_to_one_other,relay_one_to_one,relay_one_to_one_other) values(%d,now(),%d,%d,%d,%d,%d,%d)",0x4(%esp)
0842cad9 +0x0d3:  mov    -0x20(%ebp),%eax
0842cadc +0x0d6:  mov    %eax,(%esp)
0842cadf +0x0d9:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842cae4 +0x0de:  movl   $0x1,0x4(%esp)
0842caec +0x0e6:  mov    -0x20(%ebp),%eax
0842caef +0x0e9:  mov    %eax,(%esp)
0842caf2 +0x0ec:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0842caf7 +0x0f1:  xor    $0x1,%eax
0842cafa +0x0f4:  test   %al,%al
0842cafc +0x0f6:  je     0842cb05 <+0xff>
0842cafe +0x0f8:  mov    $0x0,%eax
0842cb03 +0x0fd:  jmp    0842cb0a <+0x104>
0842cb05 +0x0ff:  mov    $0x1,%eax
0842cb0a +0x104:  add    $0x6c,%esp
0842cb0d +0x107:  pop    %ebx
0842cb0e +0x108:  pop    %esi
0842cb0f +0x109:  pop    %edi
0842cb10 +0x10a:  pop    %ebp
0842cb11 +0x10b:  ret
```

## 反编译 C

```c
// DB_InsertPVPPlayerRate::dispatch @ 0x842ca06

/* DB_InsertPVPPlayerRate::dispatch(int, int, Stream*) */

bool DB_InsertPVPPlayerRate::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  uint uVar2;
  CEnvironment *this;
  undefined4 uVar3;
  Stream *in_stack_00000010;
  int local_3c [6];
  MySQL *local_24;
  int local_20;
  
  local_24 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  uVar2 = 0;
  do {
    *(undefined4 *)((int)local_3c + uVar2) = 0;
    uVar2 = uVar2 + 4;
  } while (uVar2 < 0x18);
  for (local_20 = 0; local_20 < 6; local_20 = local_20 + 1) {
    Stream::operator>>(in_stack_00000010,local_3c + local_20);
  }
  this = (CEnvironment *)G_CEnvironment();
  uVar3 = CEnvironment::get_channel_no(this);
  MySQL::set_query(local_24,
                   "inSert into log_pvp_player_rate(channel_no,occ_date,single_one_to_one,single_one_to_one_other,team_one_to_one,team_one_to_one_other,relay_one_to_one,relay_one_to_one_other) values(%d,now(),%d,%d,%d,%d,%d,%d)"
                   ,uVar3,local_3c[0],local_3c[1],local_3c[2],local_3c[3],local_3c[4],local_3c[5]);
  cVar1 = MySQL::exec(local_24,true);
  return cVar1 == '\x01';
}
```
