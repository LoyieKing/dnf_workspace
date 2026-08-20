# dispatch

`_ZN29DB_UpdateReturnUserFirstLogin8dispatchEiiP6Stream`

`DB_UpdateReturnUserFirstLogin::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateReturnUserFirstLogin` | `0x0843dffe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843dffe  _ZN29DB_UpdateReturnUserFirstLogin8dispatchEiiP6Stream
#           DB_UpdateReturnUserFirstLogin::dispatch(int, int, Stream*)
# range [0x0843dffe, 0x0843e145]
0843dffe +0x000:  push   %ebp
0843dfff +0x001:  mov    %esp,%ebp
0843e001 +0x003:  push   %esi
0843e002 +0x004:  push   %ebx
0843e003 +0x005:  sub    $0x30,%esp
0843e006 +0x008:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0843e00b +0x00d:  movl   $0x0,0x8(%esp)
0843e013 +0x015:  movl   $0x9,0x4(%esp)
0843e01b +0x01d:  mov    %eax,(%esp)
0843e01e +0x020:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0843e023 +0x025:  mov    %eax,-0xc(%ebp)
0843e026 +0x028:  movl   $0x0,-0x10(%ebp)
0843e02d +0x02f:  movl   $0x0,-0x14(%ebp)
0843e034 +0x036:  movl   $0x0,-0x18(%ebp)
0843e03b +0x03d:  lea    -0x10(%ebp),%eax
0843e03e +0x040:  mov    %eax,0x4(%esp)
0843e042 +0x044:  mov    0x14(%ebp),%eax
0843e045 +0x047:  mov    %eax,(%esp)
0843e048 +0x04a:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
0843e04d +0x04f:  lea    -0x14(%ebp),%eax
0843e050 +0x052:  mov    %eax,0x4(%esp)
0843e054 +0x056:  mov    0x14(%ebp),%eax
0843e057 +0x059:  mov    %eax,(%esp)
0843e05a +0x05c:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
0843e05f +0x061:  lea    -0x18(%ebp),%eax
0843e062 +0x064:  mov    %eax,0x4(%esp)
0843e066 +0x068:  mov    0x14(%ebp),%eax
0843e069 +0x06b:  mov    %eax,(%esp)
0843e06c +0x06e:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
0843e071 +0x073:  mov    -0x14(%ebp),%esi
0843e074 +0x076:  mov    -0x18(%ebp),%ebx
0843e077 +0x079:  mov    -0x10(%ebp),%eax
0843e07a +0x07c:  movl   $0x0,0x4(%esp)
0843e082 +0x084:  mov    %eax,(%esp)
0843e085 +0x087:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0843e08a +0x08c:  mov    %esi,0x10(%esp)
0843e08e +0x090:  mov    %ebx,0xc(%esp)
0843e092 +0x094:  mov    %eax,0x8(%esp)
0843e096 +0x098:  movl   $"inSert into return_user(m_id, expire_time, first_login) values(%s, from_unixtime(%d), %d)",0x4(%esp)
0843e09e +0x0a0:  mov    -0xc(%ebp),%eax
0843e0a1 +0x0a3:  mov    %eax,(%esp)
0843e0a4 +0x0a6:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0843e0a9 +0x0ab:  movl   $0x1,0x4(%esp)
0843e0b1 +0x0b3:  mov    -0xc(%ebp),%eax
0843e0b4 +0x0b6:  mov    %eax,(%esp)
0843e0b7 +0x0b9:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0843e0bc +0x0be:  xor    $0x1,%eax
0843e0bf +0x0c1:  test   %al,%al
0843e0c1 +0x0c3:  je     0843e13a <+0x13c>
0843e0c3 +0x0c5:  mov    -0xc(%ebp),%eax
0843e0c6 +0x0c8:  mov    %eax,(%esp)
0843e0c9 +0x0cb:  call   0811b97a <_GLOBAL__I_events+0x1d>  ; global constructors keyed to events+0x1d
0843e0ce +0x0d0:  cmp    $0x426,%eax
0843e0d3 +0x0d5:  sete   %al
0843e0d6 +0x0d8:  test   %al,%al
0843e0d8 +0x0da:  je     0843e133 <+0x135>
0843e0da +0x0dc:  mov    -0x10(%ebp),%eax
0843e0dd +0x0df:  movl   $0x0,0x4(%esp)
0843e0e5 +0x0e7:  mov    %eax,(%esp)
0843e0e8 +0x0ea:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0843e0ed +0x0ef:  mov    -0x14(%ebp),%ecx
0843e0f0 +0x0f2:  mov    -0x18(%ebp),%edx
0843e0f3 +0x0f5:  mov    %eax,0x10(%esp)
0843e0f7 +0x0f9:  mov    %ecx,0xc(%esp)
0843e0fb +0x0fd:  mov    %edx,0x8(%esp)
0843e0ff +0x101:  movl   $"upDate return_user set expire_time = from_unixtime(%d), first_login=%d where m_id=%s",0x4(%esp)
0843e107 +0x109:  mov    -0xc(%ebp),%eax
0843e10a +0x10c:  mov    %eax,(%esp)
0843e10d +0x10f:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0843e112 +0x114:  movl   $0x1,0x4(%esp)
0843e11a +0x11c:  mov    -0xc(%ebp),%eax
0843e11d +0x11f:  mov    %eax,(%esp)
0843e120 +0x122:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0843e125 +0x127:  xor    $0x1,%eax
0843e128 +0x12a:  test   %al,%al
0843e12a +0x12c:  je     0843e133 <+0x135>
0843e12c +0x12e:  mov    $0x0,%eax
0843e131 +0x133:  jmp    0843e13f <+0x141>
0843e133 +0x135:  mov    $0x0,%eax
0843e138 +0x13a:  jmp    0843e13f <+0x141>
0843e13a +0x13c:  mov    $0x1,%eax
0843e13f +0x141:  add    $0x30,%esp
0843e142 +0x144:  pop    %ebx
0843e143 +0x145:  pop    %esi
0843e144 +0x146:  pop    %ebp
0843e145 +0x147:  ret
```

## 反编译 C

```c
// DB_UpdateReturnUserFirstLogin::dispatch @ 0x843dffe

/* DB_UpdateReturnUserFirstLogin::dispatch(int, int, Stream*) */

undefined4 DB_UpdateReturnUserFirstLogin::dispatch(int param_1,int param_2,Stream *param_3)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  Stream *in_stack_00000010;
  int local_1c;
  int local_18;
  uint local_14;
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  Stream::operator>>(in_stack_00000010,&local_14);
  Stream::operator>>(in_stack_00000010,&local_18);
  Stream::operator>>(in_stack_00000010,&local_1c);
  iVar1 = local_18;
  iVar4 = local_1c;
  uVar3 = NumberToString(local_14,0);
  MySQL::set_query(local_10,
                   "inSert into return_user(m_id, expire_time, first_login) values(%s, from_unixtime(%d), %d)"
                   ,uVar3,iVar4,iVar1);
  cVar2 = MySQL::exec(local_10,true);
  if (cVar2 == '\x01') {
    uVar3 = 1;
  }
  else {
    iVar4 = MySQL::getDBError(local_10);
    if (iVar4 == 0x426) {
      uVar3 = NumberToString(local_14,0);
      MySQL::set_query(local_10,
                       "upDate return_user set expire_time = from_unixtime(%d), first_login=%d where m_id=%s"
                       ,local_1c,local_18,uVar3);
      cVar2 = MySQL::exec(local_10,true);
      if (cVar2 != '\x01') {
        return 0;
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}
```
