# dispatch

`_ZN14DB_DeleteGuild8dispatchEiiP6Stream`

`DB_DeleteGuild::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_DeleteGuild` | `0x0843a9c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843a9c0  _ZN14DB_DeleteGuild8dispatchEiiP6Stream
#           DB_DeleteGuild::dispatch(int, int, Stream*)
# range [0x0843a9c0, 0x0843ac3d]
0843a9c0 +0x000:  push   %ebp
0843a9c1 +0x001:  mov    %esp,%ebp
0843a9c3 +0x003:  sub    $0x28,%esp
0843a9c6 +0x006:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0843a9cb +0x00b:  movl   $0x0,0x8(%esp)
0843a9d3 +0x013:  movl   $0x2,0x4(%esp)
0843a9db +0x01b:  mov    %eax,(%esp)
0843a9de +0x01e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0843a9e3 +0x023:  mov    %eax,-0x10(%ebp)
0843a9e6 +0x026:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0843a9eb +0x02b:  movl   $0x0,0x8(%esp)
0843a9f3 +0x033:  movl   $0x8,0x4(%esp)
0843a9fb +0x03b:  mov    %eax,(%esp)
0843a9fe +0x03e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0843aa03 +0x043:  mov    %eax,-0xc(%ebp)
0843aa06 +0x046:  movl   $0x0,-0x14(%ebp)
0843aa0d +0x04d:  movl   $0x0,-0x18(%ebp)
0843aa14 +0x054:  lea    -0x14(%ebp),%eax
0843aa17 +0x057:  mov    %eax,0x4(%esp)
0843aa1b +0x05b:  mov    0x14(%ebp),%eax
0843aa1e +0x05e:  mov    %eax,(%esp)
0843aa21 +0x061:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
0843aa26 +0x066:  lea    -0x18(%ebp),%eax
0843aa29 +0x069:  mov    %eax,0x4(%esp)
0843aa2d +0x06d:  mov    0x14(%ebp),%eax
0843aa30 +0x070:  mov    %eax,(%esp)
0843aa33 +0x073:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
0843aa38 +0x078:  mov    -0x14(%ebp),%eax
0843aa3b +0x07b:  test   %eax,%eax
0843aa3d +0x07d:  je     0843aa46 <+0x86>
0843aa3f +0x07f:  mov    -0x18(%ebp),%eax
0843aa42 +0x082:  test   %eax,%eax
0843aa44 +0x084:  jne    0843aa50 <+0x90>
0843aa46 +0x086:  mov    $0x1,%eax
0843aa4b +0x08b:  jmp    0843ac3c <+0x27c>
0843aa50 +0x090:  mov    -0x14(%ebp),%eax
0843aa53 +0x093:  mov    %eax,0x8(%esp)
0843aa57 +0x097:  movl   $"upDate charac_info set guild_right=0, guild_id=0 where charac_no=%d",0x4(%esp)
0843aa5f +0x09f:  mov    -0x10(%ebp),%eax
0843aa62 +0x0a2:  mov    %eax,(%esp)
0843aa65 +0x0a5:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0843aa6a +0x0aa:  movl   $0x1,0x4(%esp)
0843aa72 +0x0b2:  mov    -0x10(%ebp),%eax
0843aa75 +0x0b5:  mov    %eax,(%esp)
0843aa78 +0x0b8:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0843aa7d +0x0bd:  xor    $0x1,%eax
0843aa80 +0x0c0:  test   %al,%al
0843aa82 +0x0c2:  je     0843aa8e <+0xce>
0843aa84 +0x0c4:  mov    $0x0,%eax
0843aa89 +0x0c9:  jmp    0843ac3c <+0x27c>
0843aa8e +0x0ce:  mov    -0x18(%ebp),%eax
0843aa91 +0x0d1:  mov    %eax,0x8(%esp)
0843aa95 +0x0d5:  movl   $"upDate guild_info set expire_flag=1, expire_time=now() where guild_id=%d",0x4(%esp)
0843aa9d +0x0dd:  mov    -0xc(%ebp),%eax
0843aaa0 +0x0e0:  mov    %eax,(%esp)
0843aaa3 +0x0e3:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0843aaa8 +0x0e8:  movl   $0x1,0x4(%esp)
0843aab0 +0x0f0:  mov    -0xc(%ebp),%eax
0843aab3 +0x0f3:  mov    %eax,(%esp)
0843aab6 +0x0f6:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0843aabb +0x0fb:  xor    $0x1,%eax
0843aabe +0x0fe:  test   %al,%al
0843aac0 +0x100:  je     0843aacc <+0x10c>
0843aac2 +0x102:  mov    $0x0,%eax
0843aac7 +0x107:  jmp    0843ac3c <+0x27c>
0843aacc +0x10c:  mov    -0x18(%ebp),%eax
0843aacf +0x10f:  mov    %eax,0x8(%esp)
0843aad3 +0x113:  movl   $"deLete from guild_introduce where guild_id=%d",0x4(%esp)
0843aadb +0x11b:  mov    -0xc(%ebp),%eax
0843aade +0x11e:  mov    %eax,(%esp)
0843aae1 +0x121:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0843aae6 +0x126:  movl   $0x1,0x4(%esp)
0843aaee +0x12e:  mov    -0xc(%ebp),%eax
0843aaf1 +0x131:  mov    %eax,(%esp)
0843aaf4 +0x134:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0843aaf9 +0x139:  xor    $0x1,%eax
0843aafc +0x13c:  test   %al,%al
0843aafe +0x13e:  je     0843ab0a <+0x14a>
0843ab00 +0x140:  mov    $0x0,%eax
0843ab05 +0x145:  jmp    0843ac3c <+0x27c>
0843ab0a +0x14a:  mov    -0x18(%ebp),%eax
0843ab0d +0x14d:  mov    %eax,0x8(%esp)
0843ab11 +0x151:  movl   $"deLete from guild_member where guild_id=%d",0x4(%esp)
0843ab19 +0x159:  mov    -0xc(%ebp),%eax
0843ab1c +0x15c:  mov    %eax,(%esp)
0843ab1f +0x15f:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0843ab24 +0x164:  movl   $0x1,0x4(%esp)
0843ab2c +0x16c:  mov    -0xc(%ebp),%eax
0843ab2f +0x16f:  mov    %eax,(%esp)
0843ab32 +0x172:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0843ab37 +0x177:  xor    $0x1,%eax
0843ab3a +0x17a:  test   %al,%al
0843ab3c +0x17c:  je     0843ab48 <+0x188>
0843ab3e +0x17e:  mov    $0x0,%eax
0843ab43 +0x183:  jmp    0843ac3c <+0x27c>
0843ab48 +0x188:  mov    -0x18(%ebp),%eax
0843ab4b +0x18b:  mov    %eax,0x8(%esp)
0843ab4f +0x18f:  movl   $"deLete from guild_visit where guild_id=%d",0x4(%esp)
0843ab57 +0x197:  mov    -0xc(%ebp),%eax
0843ab5a +0x19a:  mov    %eax,(%esp)
0843ab5d +0x19d:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0843ab62 +0x1a2:  movl   $0x1,0x4(%esp)
0843ab6a +0x1aa:  mov    -0xc(%ebp),%eax
0843ab6d +0x1ad:  mov    %eax,(%esp)
0843ab70 +0x1b0:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0843ab75 +0x1b5:  xor    $0x1,%eax
0843ab78 +0x1b8:  test   %al,%al
0843ab7a +0x1ba:  je     0843ab86 <+0x1c6>
0843ab7c +0x1bc:  mov    $0x0,%eax
0843ab81 +0x1c1:  jmp    0843ac3c <+0x27c>
0843ab86 +0x1c6:  mov    -0x18(%ebp),%eax
0843ab89 +0x1c9:  mov    %eax,0x8(%esp)
0843ab8d +0x1cd:  movl   $"deLete from guild_notice where guild_id=%d",0x4(%esp)
0843ab95 +0x1d5:  mov    -0xc(%ebp),%eax
0843ab98 +0x1d8:  mov    %eax,(%esp)
0843ab9b +0x1db:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0843aba0 +0x1e0:  movl   $0x1,0x4(%esp)
0843aba8 +0x1e8:  mov    -0xc(%ebp),%eax
0843abab +0x1eb:  mov    %eax,(%esp)
0843abae +0x1ee:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0843abb3 +0x1f3:  xor    $0x1,%eax
0843abb6 +0x1f6:  test   %al,%al
0843abb8 +0x1f8:  je     0843abc1 <+0x201>
0843abba +0x1fa:  mov    $0x0,%eax
0843abbf +0x1ff:  jmp    0843ac3c <+0x27c>
0843abc1 +0x201:  mov    -0x18(%ebp),%eax
0843abc4 +0x204:  mov    %eax,0x8(%esp)
0843abc8 +0x208:  movl   $"deLete from guild_skill where guild_id=%d",0x4(%esp)
0843abd0 +0x210:  mov    -0xc(%ebp),%eax
0843abd3 +0x213:  mov    %eax,(%esp)
0843abd6 +0x216:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0843abdb +0x21b:  movl   $0x1,0x4(%esp)
0843abe3 +0x223:  mov    -0xc(%ebp),%eax
0843abe6 +0x226:  mov    %eax,(%esp)
0843abe9 +0x229:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0843abee +0x22e:  xor    $0x1,%eax
0843abf1 +0x231:  test   %al,%al
0843abf3 +0x233:  je     0843abfc <+0x23c>
0843abf5 +0x235:  mov    $0x0,%eax
0843abfa +0x23a:  jmp    0843ac3c <+0x27c>
0843abfc +0x23c:  mov    -0x18(%ebp),%eax
0843abff +0x23f:  mov    %eax,0x8(%esp)
0843ac03 +0x243:  movl   $"upDate charac_info set guild_id=0, guild_secede=1 where guild_id = %u",0x4(%esp)
0843ac0b +0x24b:  mov    -0x10(%ebp),%eax
0843ac0e +0x24e:  mov    %eax,(%esp)
0843ac11 +0x251:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0843ac16 +0x256:  movl   $0x1,0x4(%esp)
0843ac1e +0x25e:  mov    -0x10(%ebp),%eax
0843ac21 +0x261:  mov    %eax,(%esp)
0843ac24 +0x264:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0843ac29 +0x269:  xor    $0x1,%eax
0843ac2c +0x26c:  test   %al,%al
0843ac2e +0x26e:  je     0843ac37 <+0x277>
0843ac30 +0x270:  mov    $0x0,%eax
0843ac35 +0x275:  jmp    0843ac3c <+0x27c>
0843ac37 +0x277:  mov    $0x1,%eax
0843ac3c +0x27c:  leave
0843ac3d +0x27d:  ret
```

## 反编译 C

```c
// DB_DeleteGuild::dispatch @ 0x843a9c0

/* DB_DeleteGuild::dispatch(int, int, Stream*) */

undefined4 DB_DeleteGuild::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  Stream *in_stack_00000010;
  uint local_1c;
  uint local_18;
  MySQL *local_14;
  MySQL *local_10;
  
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,8,0);
  local_18 = 0;
  local_1c = 0;
  Stream::operator>>(in_stack_00000010,&local_18);
  Stream::operator>>(in_stack_00000010,&local_1c);
  if ((local_18 == 0) || (local_1c == 0)) {
    uVar2 = 1;
  }
  else {
    MySQL::set_query(local_14,"upDate charac_info set guild_right=0, guild_id=0 where charac_no=%d",
                     local_18);
    cVar1 = MySQL::exec(local_14,true);
    if (cVar1 == '\x01') {
      MySQL::set_query(local_10,
                       "upDate guild_info set expire_flag=1, expire_time=now() where guild_id=%d",
                       local_1c);
      cVar1 = MySQL::exec(local_10,true);
      if (cVar1 == '\x01') {
        MySQL::set_query(local_10,"deLete from guild_introduce where guild_id=%d",local_1c);
        cVar1 = MySQL::exec(local_10,true);
        if (cVar1 == '\x01') {
          MySQL::set_query(local_10,"deLete from guild_member where guild_id=%d",local_1c);
          cVar1 = MySQL::exec(local_10,true);
          if (cVar1 == '\x01') {
            MySQL::set_query(local_10,"deLete from guild_visit where guild_id=%d",local_1c);
            cVar1 = MySQL::exec(local_10,true);
            if (cVar1 == '\x01') {
              MySQL::set_query(local_10,"deLete from guild_notice where guild_id=%d",local_1c);
              cVar1 = MySQL::exec(local_10,true);
              if (cVar1 == '\x01') {
                MySQL::set_query(local_10,"deLete from guild_skill where guild_id=%d",local_1c);
                cVar1 = MySQL::exec(local_10,true);
                if (cVar1 == '\x01') {
                  MySQL::set_query(local_14,
                                   "upDate charac_info set guild_id=0, guild_secede=1 where guild_id = %u"
                                   ,local_1c);
                  cVar1 = MySQL::exec(local_14,true);
                  if (cVar1 == '\x01') {
                    uVar2 = 1;
                  }
                  else {
                    uVar2 = 0;
                  }
                }
                else {
                  uVar2 = 0;
                }
              }
              else {
                uVar2 = 0;
              }
            }
            else {
              uVar2 = 0;
            }
          }
          else {
            uVar2 = 0;
          }
        }
        else {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
```
