# DeleteChannel

`_ZN16DB_DeleteChannel13DeleteChannelEP18SIG_DELETE_CHANNEL`

`DB_DeleteChannel::DeleteChannel(SIG_DELETE_CHANNEL*)`

| 类 | 地址 |
|---|---|
| `DB_DeleteChannel` | `0x084029ae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084029ae  _ZN16DB_DeleteChannel13DeleteChannelEP18SIG_DELETE_CHANNEL
#           DB_DeleteChannel::DeleteChannel(SIG_DELETE_CHANNEL*)
# range [0x084029ae, 0x08402aeb]
084029ae +0x000:  push   %ebp
084029af +0x001:  mov    %esp,%ebp
084029b1 +0x003:  push   %ebx
084029b2 +0x004:  sub    $0x44,%esp
084029b5 +0x007:  mov    0xc(%ebp),%eax
084029b8 +0x00a:  mov    0x4(%eax),%edx
084029bb +0x00d:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
084029c0 +0x012:  mov    %edx,0x8(%esp)
084029c4 +0x016:  movl   $0x2,0x4(%esp)
084029cc +0x01e:  mov    %eax,(%esp)
084029cf +0x021:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
084029d4 +0x026:  mov    %eax,-0xc(%ebp)
084029d7 +0x029:  mov    0xc(%ebp),%eax
084029da +0x02c:  mov    (%eax),%eax
084029dc +0x02e:  mov    %eax,0x8(%esp)
084029e0 +0x032:  movl   $"deLete from game_channel where gc_no=%d",0x4(%esp)
084029e8 +0x03a:  mov    -0xc(%ebp),%eax
084029eb +0x03d:  mov    %eax,(%esp)
084029ee +0x040:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084029f3 +0x045:  movl   $0x1,0x4(%esp)
084029fb +0x04d:  mov    -0xc(%ebp),%eax
084029fe +0x050:  mov    %eax,(%esp)
08402a01 +0x053:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08402a06 +0x058:  mov    %al,-0xd(%ebp)
08402a09 +0x05b:  movzbl -0xd(%ebp),%eax
08402a0d +0x05f:  xor    $0x1,%eax
08402a10 +0x062:  test   %al,%al
08402a12 +0x064:  je     08402a1e <+0x70>
08402a14 +0x066:  mov    $0x0,%eax
08402a19 +0x06b:  jmp    08402ae5 <+0x137>
08402a1e +0x070:  mov    0xc(%ebp),%eax
08402a21 +0x073:  mov    (%eax),%ebx
08402a23 +0x075:  movl   $0x0,0xc(%esp)
08402a2b +0x07d:  movl   $0x1262,0x8(%esp)
08402a33 +0x085:  movl   $&_ZZN16DB_DeleteChannel13DeleteChannelEP18SIG_DELETE_CHANNELE19__PRETTY_FUNCTION__,0x4(%esp)
08402a3b +0x08d:  lea    -0x30(%ebp),%eax
08402a3e +0x090:  mov    %eax,(%esp)
08402a41 +0x093:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08402a46 +0x098:  mov    %ebx,0x8(%esp)
08402a4a +0x09c:  movl   $"deLete from game_channel where gc_no=%d",0x4(%esp)
08402a52 +0x0a4:  lea    -0x30(%ebp),%eax
08402a55 +0x0a7:  mov    %eax,(%esp)
08402a58 +0x0aa:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08402a5d +0x0af:  mov    0xc(%ebp),%eax
08402a60 +0x0b2:  mov    (%eax),%eax
08402a62 +0x0b4:  mov    %eax,0x8(%esp)
08402a66 +0x0b8:  movl   $"deLete from channel_occ_info where gc_no=%d",0x4(%esp)
08402a6e +0x0c0:  mov    -0xc(%ebp),%eax
08402a71 +0x0c3:  mov    %eax,(%esp)
08402a74 +0x0c6:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08402a79 +0x0cb:  movl   $0x1,0x4(%esp)
08402a81 +0x0d3:  mov    -0xc(%ebp),%eax
08402a84 +0x0d6:  mov    %eax,(%esp)
08402a87 +0x0d9:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08402a8c +0x0de:  mov    %al,-0xd(%ebp)
08402a8f +0x0e1:  movzbl -0xd(%ebp),%eax
08402a93 +0x0e5:  xor    $0x1,%eax
08402a96 +0x0e8:  test   %al,%al
08402a98 +0x0ea:  je     08402aa1 <+0xf3>
08402a9a +0x0ec:  mov    $0x0,%eax
08402a9f +0x0f1:  jmp    08402ae5 <+0x137>
08402aa1 +0x0f3:  mov    0xc(%ebp),%eax
08402aa4 +0x0f6:  mov    (%eax),%ebx
08402aa6 +0x0f8:  movl   $0x0,0xc(%esp)
08402aae +0x100:  movl   $0x126a,0x8(%esp)
08402ab6 +0x108:  movl   $&_ZZN16DB_DeleteChannel13DeleteChannelEP18SIG_DELETE_CHANNELE19__PRETTY_FUNCTION__,0x4(%esp)
08402abe +0x110:  lea    -0x20(%ebp),%eax
08402ac1 +0x113:  mov    %eax,(%esp)
08402ac4 +0x116:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08402ac9 +0x11b:  mov    %ebx,0x8(%esp)
08402acd +0x11f:  movl   $"deLete from channel_occ_info where gc_no=%d",0x4(%esp)
08402ad5 +0x127:  lea    -0x20(%ebp),%eax
08402ad8 +0x12a:  mov    %eax,(%esp)
08402adb +0x12d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08402ae0 +0x132:  mov    $0x1,%eax
08402ae5 +0x137:  add    $0x44,%esp
08402ae8 +0x13a:  pop    %ebx
08402ae9 +0x13b:  pop    %ebp
08402aea +0x13c:  ret
08402aeb +0x13d:  nop
```

## 反编译 C

```c
// DB_DeleteChannel::DeleteChannel @ 0x84029ae

/* DB_DeleteChannel::DeleteChannel(SIG_DELETE_CHANNEL*) */

undefined4 __thiscall
DB_DeleteChannel::DeleteChannel(DB_DeleteChannel *this,SIG_DELETE_CHANNEL *param_1)

{
  undefined4 uVar1;
  cMyTrace local_34 [16];
  cMyTrace local_24 [19];
  char local_11;
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,*(undefined4 *)(param_1 + 4));
  MySQL::set_query(local_10,"deLete from game_channel where gc_no=%d",*(undefined4 *)param_1);
  local_11 = MySQL::exec(local_10,true);
  if (local_11 == '\x01') {
    uVar1 = *(undefined4 *)param_1;
    cMyTrace::cMyTrace(local_34,"bool DB_DeleteChannel::DeleteChannel(SIG_DELETE_CHANNEL*)",0x1262,0
                      );
    cMyTrace::operator()(local_34,"deLete from game_channel where gc_no=%d",uVar1);
    MySQL::set_query(local_10,"deLete from channel_occ_info where gc_no=%d",*(undefined4 *)param_1);
    local_11 = MySQL::exec(local_10,true);
    if (local_11 == '\x01') {
      uVar1 = *(undefined4 *)param_1;
      cMyTrace::cMyTrace(local_24,"bool DB_DeleteChannel::DeleteChannel(SIG_DELETE_CHANNEL*)",0x126a
                         ,0);
      cMyTrace::operator()(local_24,"deLete from channel_occ_info where gc_no=%d",uVar1);
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
