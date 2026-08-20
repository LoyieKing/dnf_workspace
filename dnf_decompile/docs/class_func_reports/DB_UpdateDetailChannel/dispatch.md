# dispatch

`_ZN22DB_UpdateDetailChannel8dispatchEiiP6Stream`

`DB_UpdateDetailChannel::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateDetailChannel` | `0x0841bcee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0841bcee  _ZN22DB_UpdateDetailChannel8dispatchEiiP6Stream
#           DB_UpdateDetailChannel::dispatch(int, int, Stream*)
# range [0x0841bcee, 0x0841be4f]
0841bcee +0x000:  push   %ebp
0841bcef +0x001:  mov    %esp,%ebp
0841bcf1 +0x003:  push   %edi
0841bcf2 +0x004:  push   %esi
0841bcf3 +0x005:  push   %ebx
0841bcf4 +0x006:  sub    $0x5c,%esp
0841bcf7 +0x009:  mov    0x14(%ebp),%eax
0841bcfa +0x00c:  mov    %eax,(%esp)
0841bcfd +0x00f:  call   084512a0 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x3eb6>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x3eb6
0841bd02 +0x014:  mov    %eax,-0x28(%ebp)
0841bd05 +0x017:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0841bd0c +0x01e:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0841bd11 +0x023:  mov    %eax,-0x24(%ebp)
0841bd14 +0x026:  mov    -0x24(%ebp),%ecx
0841bd17 +0x029:  mov    $0x91a2b3c5,%edx
0841bd1c +0x02e:  mov    %ecx,%eax
0841bd1e +0x030:  imul   %edx
0841bd20 +0x032:  lea    (%edx,%ecx,1),%eax
0841bd23 +0x035:  mov    %eax,%edx
0841bd25 +0x037:  sar    $0xa,%edx
0841bd28 +0x03a:  mov    %ecx,%eax
0841bd2a +0x03c:  sar    $0x1f,%eax
0841bd2d +0x03f:  mov    %edx,%ebx
0841bd2f +0x041:  sub    %eax,%ebx
0841bd31 +0x043:  mov    %ebx,%eax
0841bd33 +0x045:  imul   $0x708,%eax,%eax
0841bd39 +0x04b:  mov    %ecx,%edx
0841bd3b +0x04d:  sub    %eax,%edx
0841bd3d +0x04f:  mov    %edx,%eax
0841bd3f +0x051:  mov    %eax,-0x20(%ebp)
0841bd42 +0x054:  cmpl   $0x383,-0x20(%ebp)
0841bd49 +0x05b:  jg     0841bd53 <+0x65>
0841bd4b +0x05d:  mov    -0x20(%ebp),%eax
0841bd4e +0x060:  sub    %eax,-0x24(%ebp)
0841bd51 +0x063:  jmp    0841bd5e <+0x70>
0841bd53 +0x065:  mov    $0x708,%eax
0841bd58 +0x06a:  sub    -0x20(%ebp),%eax
0841bd5b +0x06d:  add    %eax,-0x24(%ebp)
0841bd5e +0x070:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0841bd63 +0x075:  movl   $0x0,0x8(%esp)
0841bd6b +0x07d:  movl   $0x4,0x4(%esp)
0841bd73 +0x085:  mov    %eax,(%esp)
0841bd76 +0x088:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0841bd7b +0x08d:  mov    %eax,-0x1c(%ebp)
0841bd7e +0x090:  mov    -0x28(%ebp),%eax
0841bd81 +0x093:  mov    0xc(%eax),%ebx
0841bd84 +0x096:  mov    -0x28(%ebp),%eax
0841bd87 +0x099:  mov    0x8(%eax),%ecx
0841bd8a +0x09c:  mov    -0x28(%ebp),%eax
0841bd8d +0x09f:  mov    0x4(%eax),%edx
0841bd90 +0x0a2:  mov    -0x28(%ebp),%eax
0841bd93 +0x0a5:  mov    (%eax),%eax
0841bd95 +0x0a7:  mov    %ebx,0x18(%esp)
0841bd99 +0x0ab:  mov    %ecx,0x14(%esp)
0841bd9d +0x0af:  mov    %edx,0x10(%esp)
0841bda1 +0x0b3:  mov    %eax,0xc(%esp)
0841bda5 +0x0b7:  mov    -0x24(%ebp),%eax
0841bda8 +0x0ba:  mov    %eax,0x8(%esp)
0841bdac +0x0be:  movl   $"inSert into concurrent_user_status(occ_time,player_status,dungeon_index,channel_no,occ_count) values(from_unixtime(%d),%d,%d,%d,%d)",0x4(%esp)
0841bdb4 +0x0c6:  mov    -0x1c(%ebp),%eax
0841bdb7 +0x0c9:  mov    %eax,(%esp)
0841bdba +0x0cc:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0841bdbf +0x0d1:  movl   $0x1,0x4(%esp)
0841bdc7 +0x0d9:  mov    -0x1c(%ebp),%eax
0841bdca +0x0dc:  mov    %eax,(%esp)
0841bdcd +0x0df:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0841bdd2 +0x0e4:  xor    $0x1,%eax
0841bdd5 +0x0e7:  test   %al,%al
0841bdd7 +0x0e9:  je     0841bde0 <+0xf2>
0841bdd9 +0x0eb:  mov    $0x0,%eax
0841bdde +0x0f0:  jmp    0841be48 <+0x15a>
0841bde0 +0x0f2:  mov    -0x28(%ebp),%eax
0841bde3 +0x0f5:  mov    0xc(%eax),%eax
0841bde6 +0x0f8:  mov    %eax,-0x3c(%ebp)
0841bde9 +0x0fb:  mov    -0x28(%ebp),%eax
0841bdec +0x0fe:  mov    0x8(%eax),%edi
0841bdef +0x101:  mov    -0x28(%ebp),%eax
0841bdf2 +0x104:  mov    0x4(%eax),%esi
0841bdf5 +0x107:  mov    -0x28(%ebp),%eax
0841bdf8 +0x10a:  mov    (%eax),%ebx
0841bdfa +0x10c:  movl   $0x0,0xc(%esp)
0841be02 +0x114:  movl   $0x4f28,0x8(%esp)
0841be0a +0x11c:  movl   $&_ZZN22DB_UpdateDetailChannel8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
0841be12 +0x124:  lea    -0x38(%ebp),%eax
0841be15 +0x127:  mov    %eax,(%esp)
0841be18 +0x12a:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0841be1d +0x12f:  mov    -0x3c(%ebp),%eax
0841be20 +0x132:  mov    %eax,0x14(%esp)
0841be24 +0x136:  mov    %edi,0x10(%esp)
0841be28 +0x13a:  mov    %esi,0xc(%esp)
0841be2c +0x13e:  mov    %ebx,0x8(%esp)
0841be30 +0x142:  movl   $"content concurrent %d,%d,%d,%d\n",0x4(%esp)
0841be38 +0x14a:  lea    -0x38(%ebp),%eax
0841be3b +0x14d:  mov    %eax,(%esp)
0841be3e +0x150:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0841be43 +0x155:  mov    $0x1,%eax
0841be48 +0x15a:  add    $0x5c,%esp
0841be4b +0x15d:  pop    %ebx
0841be4c +0x15e:  pop    %esi
0841be4d +0x15f:  pop    %edi
0841be4e +0x160:  pop    %ebp
0841be4f +0x161:  ret
```

## 反编译 C

```c
// DB_UpdateDetailChannel::dispatch @ 0x841bcee

/* DB_UpdateDetailChannel::dispatch(int, int, Stream*) */

bool DB_UpdateDetailChannel::dispatch(int param_1,int param_2,Stream *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  Stream *in_stack_00000010;
  cMyTrace local_3c [16];
  SIG_UPDATE_DETAIL_CHANNEL *local_2c;
  int local_28;
  int local_24;
  MySQL *local_20;
  
  local_2c = Stream::GetOutBuffer<SIG_UPDATE_DETAIL_CHANNEL>(in_stack_00000010);
  local_28 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  local_24 = local_28 % 0x708;
  if (local_24 < 900) {
    iVar6 = -local_24;
  }
  else {
    iVar6 = 0x708 - local_24;
  }
  local_28 = local_28 + iVar6;
  local_20 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  MySQL::set_query(local_20,
                   "inSert into concurrent_user_status(occ_time,player_status,dungeon_index,channel_no,occ_count) values(from_unixtime(%d),%d,%d,%d,%d)"
                   ,local_28,*(undefined4 *)local_2c,*(undefined4 *)(local_2c + 4),
                   *(undefined4 *)(local_2c + 8),*(undefined4 *)(local_2c + 0xc));
  cVar5 = MySQL::exec(local_20,true);
  if (cVar5 == '\x01') {
    uVar1 = *(undefined4 *)(local_2c + 0xc);
    uVar2 = *(undefined4 *)(local_2c + 8);
    uVar3 = *(undefined4 *)(local_2c + 4);
    uVar4 = *(undefined4 *)local_2c;
    cMyTrace::cMyTrace(local_3c,"virtual bool DB_UpdateDetailChannel::dispatch(int, int, Stream*)",
                       0x4f28,0);
    cMyTrace::operator()(local_3c,"content concurrent %d,%d,%d,%d\n",uVar4,uVar3,uVar2,uVar1);
  }
  return cVar5 == '\x01';
}
```
