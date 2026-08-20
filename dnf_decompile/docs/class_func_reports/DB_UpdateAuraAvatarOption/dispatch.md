# dispatch

`_ZN25DB_UpdateAuraAvatarOption8dispatchEiiP6Stream`

`DB_UpdateAuraAvatarOption::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateAuraAvatarOption` | `0x08444e1e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08444e1e  _ZN25DB_UpdateAuraAvatarOption8dispatchEiiP6Stream
#           DB_UpdateAuraAvatarOption::dispatch(int, int, Stream*)
# range [0x08444e1e, 0x08444f25]
08444e1e +0x000:  push   %ebp
08444e1f +0x001:  mov    %esp,%ebp
08444e21 +0x003:  sub    $0x38,%esp
08444e24 +0x006:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08444e29 +0x00b:  movl   $0x0,0x8(%esp)
08444e31 +0x013:  movl   $0x2,0x4(%esp)
08444e39 +0x01b:  mov    %eax,(%esp)
08444e3c +0x01e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08444e41 +0x023:  mov    %eax,-0xc(%ebp)
08444e44 +0x026:  movl   $0x0,-0x10(%ebp)
08444e4b +0x02d:  lea    -0x10(%ebp),%eax
08444e4e +0x030:  mov    %eax,0x4(%esp)
08444e52 +0x034:  mov    0x14(%ebp),%eax
08444e55 +0x037:  mov    %eax,(%esp)
08444e58 +0x03a:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
08444e5d +0x03f:  lea    -0x14(%ebp),%eax
08444e60 +0x042:  mov    %eax,0x4(%esp)
08444e64 +0x046:  mov    0x14(%ebp),%eax
08444e67 +0x049:  mov    %eax,(%esp)
08444e6a +0x04c:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
08444e6f +0x051:  lea    -0x18(%ebp),%eax
08444e72 +0x054:  mov    %eax,0x4(%esp)
08444e76 +0x058:  mov    0x14(%ebp),%eax
08444e79 +0x05b:  mov    %eax,(%esp)
08444e7c +0x05e:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
08444e81 +0x063:  mov    -0x14(%ebp),%ecx
08444e84 +0x066:  mov    -0x10(%ebp),%edx
08444e87 +0x069:  mov    -0x18(%ebp),%eax
08444e8a +0x06c:  mov    %ecx,0x10(%esp)
08444e8e +0x070:  mov    %edx,0xc(%esp)
08444e92 +0x074:  mov    %eax,0x8(%esp)
08444e96 +0x078:  movl   $"upDate aura_avatar_option set value_1=%d where charac_no=%u and option_type = %d",0x4(%esp)
08444e9e +0x080:  mov    -0xc(%ebp),%eax
08444ea1 +0x083:  mov    %eax,(%esp)
08444ea4 +0x086:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08444ea9 +0x08b:  movl   $0x1,0x4(%esp)
08444eb1 +0x093:  mov    -0xc(%ebp),%eax
08444eb4 +0x096:  mov    %eax,(%esp)
08444eb7 +0x099:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08444ebc +0x09e:  xor    $0x1,%eax
08444ebf +0x0a1:  test   %al,%al
08444ec1 +0x0a3:  jne    08444ed4 <+0xb6>
08444ec3 +0x0a5:  mov    -0xc(%ebp),%eax
08444ec6 +0x0a8:  mov    %eax,(%esp)
08444ec9 +0x0ab:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
08444ece +0x0b0:  or     %edx,%eax
08444ed0 +0x0b2:  test   %eax,%eax
08444ed2 +0x0b4:  jne    08444edb <+0xbd>
08444ed4 +0x0b6:  mov    $0x1,%eax
08444ed9 +0x0bb:  jmp    08444ee0 <+0xc2>
08444edb +0x0bd:  mov    $0x0,%eax
08444ee0 +0x0c2:  test   %al,%al
08444ee2 +0x0c4:  je     08444f1f <+0x101>
08444ee4 +0x0c6:  mov    -0x18(%ebp),%ecx
08444ee7 +0x0c9:  mov    -0x14(%ebp),%edx
08444eea +0x0cc:  mov    -0x10(%ebp),%eax
08444eed +0x0cf:  mov    %ecx,0x10(%esp)
08444ef1 +0x0d3:  mov    %edx,0xc(%esp)
08444ef5 +0x0d7:  mov    %eax,0x8(%esp)
08444ef9 +0x0db:  movl   $"inSert into aura_avatar_option(charac_no,option_type,value_1) values(%u,%d,%d)",0x4(%esp)
08444f01 +0x0e3:  mov    -0xc(%ebp),%eax
08444f04 +0x0e6:  mov    %eax,(%esp)
08444f07 +0x0e9:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08444f0c +0x0ee:  movl   $0x1,0x4(%esp)
08444f14 +0x0f6:  mov    -0xc(%ebp),%eax
08444f17 +0x0f9:  mov    %eax,(%esp)
08444f1a +0x0fc:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08444f1f +0x101:  mov    $0x1,%eax
08444f24 +0x106:  leave
08444f25 +0x107:  ret
```

## 反编译 C

```c
// DB_UpdateAuraAvatarOption::dispatch @ 0x8444e1e

/* DB_UpdateAuraAvatarOption::dispatch(int, int, Stream*) */

undefined4 DB_UpdateAuraAvatarOption::dispatch(int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  Stream *in_stack_00000010;
  int local_1c;
  int local_18;
  uint local_14;
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  local_14 = 0;
  Stream::operator>>(in_stack_00000010,&local_14);
  Stream::operator>>(in_stack_00000010,&local_18);
  Stream::operator>>(in_stack_00000010,&local_1c);
  MySQL::set_query(local_10,
                   "upDate aura_avatar_option set value_1=%d where charac_no=%u and option_type = %d"
                   ,local_1c,local_14,local_18);
  cVar2 = MySQL::exec(local_10,true);
  if (cVar2 == '\x01') {
    lVar3 = MySQL::getAffectedRowCount(local_10);
    if (lVar3 != 0) {
      bVar1 = false;
      goto LAB_08444ee0;
    }
  }
  bVar1 = true;
LAB_08444ee0:
  if (bVar1) {
    MySQL::set_query(local_10,
                     "inSert into aura_avatar_option(charac_no,option_type,value_1) values(%u,%d,%d)"
                     ,local_14,local_18,local_1c);
    MySQL::exec(local_10,true);
  }
  return 1;
}
```
