# dispatch

`_ZN26DB_SaveEventLevelupSupport8dispatchEiiP6Stream`

`DB_SaveEventLevelupSupport::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_SaveEventLevelupSupport` | `0x0844cafe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0844cafe  _ZN26DB_SaveEventLevelupSupport8dispatchEiiP6Stream
#           DB_SaveEventLevelupSupport::dispatch(int, int, Stream*)
# range [0x0844cafe, 0x0844cc2d]
0844cafe +0x000:  push   %ebp
0844caff +0x001:  mov    %esp,%ebp
0844cb01 +0x003:  sub    $0x38,%esp
0844cb04 +0x006:  movl   $0x0,-0x10(%ebp)
0844cb0b +0x00d:  movl   $0x0,-0x14(%ebp)
0844cb12 +0x014:  movl   $0x0,-0x18(%ebp)
0844cb19 +0x01b:  lea    -0x10(%ebp),%eax
0844cb1c +0x01e:  mov    %eax,0x4(%esp)
0844cb20 +0x022:  mov    0x14(%ebp),%eax
0844cb23 +0x025:  mov    %eax,(%esp)
0844cb26 +0x028:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
0844cb2b +0x02d:  lea    -0x14(%ebp),%eax
0844cb2e +0x030:  mov    %eax,0x4(%esp)
0844cb32 +0x034:  mov    0x14(%ebp),%eax
0844cb35 +0x037:  mov    %eax,(%esp)
0844cb38 +0x03a:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
0844cb3d +0x03f:  lea    -0x18(%ebp),%eax
0844cb40 +0x042:  mov    %eax,0x4(%esp)
0844cb44 +0x046:  mov    0x14(%ebp),%eax
0844cb47 +0x049:  mov    %eax,(%esp)
0844cb4a +0x04c:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
0844cb4f +0x051:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0844cb54 +0x056:  movl   $0x0,0x8(%esp)
0844cb5c +0x05e:  movl   $0x2,0x4(%esp)
0844cb64 +0x066:  mov    %eax,(%esp)
0844cb67 +0x069:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0844cb6c +0x06e:  mov    %eax,-0xc(%ebp)
0844cb6f +0x071:  cmpl   $0x0,-0xc(%ebp)
0844cb73 +0x075:  jne    0844cb7f <+0x81>
0844cb75 +0x077:  mov    $0x0,%eax
0844cb7a +0x07c:  jmp    0844cc2c <+0x12e>
0844cb7f +0x081:  mov    -0x14(%ebp),%ecx
0844cb82 +0x084:  mov    -0x10(%ebp),%edx
0844cb85 +0x087:  mov    -0x18(%ebp),%eax
0844cb88 +0x08a:  mov    %ecx,0x10(%esp)
0844cb8c +0x08e:  mov    %edx,0xc(%esp)
0844cb90 +0x092:  mov    %eax,0x8(%esp)
0844cb94 +0x096:  movl   $"upDate event_levelup_support set state = %d where charac_no = %d and level = %d",0x4(%esp)
0844cb9c +0x09e:  mov    -0xc(%ebp),%eax
0844cb9f +0x0a1:  mov    %eax,(%esp)
0844cba2 +0x0a4:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0844cba7 +0x0a9:  movl   $0x1,0x4(%esp)
0844cbaf +0x0b1:  mov    -0xc(%ebp),%eax
0844cbb2 +0x0b4:  mov    %eax,(%esp)
0844cbb5 +0x0b7:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0844cbba +0x0bc:  xor    $0x1,%eax
0844cbbd +0x0bf:  test   %al,%al
0844cbbf +0x0c1:  je     0844cbc8 <+0xca>
0844cbc1 +0x0c3:  mov    $0x0,%eax
0844cbc6 +0x0c8:  jmp    0844cc2c <+0x12e>
0844cbc8 +0x0ca:  mov    -0xc(%ebp),%eax
0844cbcb +0x0cd:  mov    %eax,(%esp)
0844cbce +0x0d0:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
0844cbd3 +0x0d5:  or     %edx,%eax
0844cbd5 +0x0d7:  test   %eax,%eax
0844cbd7 +0x0d9:  sete   %al
0844cbda +0x0dc:  test   %al,%al
0844cbdc +0x0de:  je     0844cc27 <+0x129>
0844cbde +0x0e0:  mov    -0x18(%ebp),%ecx
0844cbe1 +0x0e3:  mov    -0x14(%ebp),%edx
0844cbe4 +0x0e6:  mov    -0x10(%ebp),%eax
0844cbe7 +0x0e9:  mov    %ecx,0x10(%esp)
0844cbeb +0x0ed:  mov    %edx,0xc(%esp)
0844cbef +0x0f1:  mov    %eax,0x8(%esp)
0844cbf3 +0x0f5:  movl   $"inSert into event_levelup_support(charac_no, level, state) values(%d, %d, %d)",0x4(%esp)
0844cbfb +0x0fd:  mov    -0xc(%ebp),%eax
0844cbfe +0x100:  mov    %eax,(%esp)
0844cc01 +0x103:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0844cc06 +0x108:  movl   $0x1,0x4(%esp)
0844cc0e +0x110:  mov    -0xc(%ebp),%eax
0844cc11 +0x113:  mov    %eax,(%esp)
0844cc14 +0x116:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0844cc19 +0x11b:  xor    $0x1,%eax
0844cc1c +0x11e:  test   %al,%al
0844cc1e +0x120:  je     0844cc27 <+0x129>
0844cc20 +0x122:  mov    $0x0,%eax
0844cc25 +0x127:  jmp    0844cc2c <+0x12e>
0844cc27 +0x129:  mov    $0x1,%eax
0844cc2c +0x12e:  leave
0844cc2d +0x12f:  ret
```

## 反编译 C

```c
// DB_SaveEventLevelupSupport::dispatch @ 0x844cafe

/* DB_SaveEventLevelupSupport::dispatch(int, int, Stream*) */

undefined4 DB_SaveEventLevelupSupport::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  Stream *in_stack_00000010;
  int local_1c;
  int local_18;
  int local_14;
  MySQL *local_10;
  
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  Stream::operator>>(in_stack_00000010,&local_14);
  Stream::operator>>(in_stack_00000010,&local_18);
  Stream::operator>>(in_stack_00000010,&local_1c);
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  if (local_10 == (MySQL *)0x0) {
    uVar2 = 0;
  }
  else {
    MySQL::set_query(local_10,
                     "upDate event_levelup_support set state = %d where charac_no = %d and level = %d"
                     ,local_1c,local_14,local_18);
    cVar1 = MySQL::exec(local_10,true);
    if (cVar1 == '\x01') {
      lVar3 = MySQL::getAffectedRowCount(local_10);
      if (lVar3 == 0) {
        MySQL::set_query(local_10,
                         "inSert into event_levelup_support(charac_no, level, state) values(%d, %d, %d)"
                         ,local_14,local_18,local_1c);
        cVar1 = MySQL::exec(local_10,true);
        if (cVar1 != '\x01') {
          return 0;
        }
      }
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
```
