# dispatch

`_ZN17DB_GetUserRegdate8dispatchEiiP6Stream`

`DB_GetUserRegdate::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_GetUserRegdate` | `0x08442e68` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08442e68  _ZN17DB_GetUserRegdate8dispatchEiiP6Stream
#           DB_GetUserRegdate::dispatch(int, int, Stream*)
# range [0x08442e68, 0x08442fad]
08442e68 +0x000:  push   %ebp
08442e69 +0x001:  mov    %esp,%ebp
08442e6b +0x003:  sub    $0x38,%esp
08442e6e +0x006:  movl   $0x0,-0x14(%ebp)
08442e75 +0x00d:  movl   $0x0,-0x18(%ebp)
08442e7c +0x014:  mov    0x14(%ebp),%eax
08442e7f +0x017:  mov    %eax,(%esp)
08442e82 +0x01a:  call   08453e1e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6a34>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6a34
08442e87 +0x01f:  mov    %eax,-0x10(%ebp)
08442e8a +0x022:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08442e8f +0x027:  movl   $0x0,0x8(%esp)
08442e97 +0x02f:  movl   $0x1,0x4(%esp)
08442e9f +0x037:  mov    %eax,(%esp)
08442ea2 +0x03a:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08442ea7 +0x03f:  mov    %eax,-0xc(%ebp)
08442eaa +0x042:  mov    -0x10(%ebp),%eax
08442ead +0x045:  mov    (%eax),%eax
08442eaf +0x047:  mov    %eax,0x8(%esp)
08442eb3 +0x04b:  movl   $"seLect DATE_FORMAT(from_unixtime(reg_date),'%%Y%%m%%d%%H') ,reg_date from member_info where m_id=%d",0x4(%esp)
08442ebb +0x053:  mov    -0xc(%ebp),%eax
08442ebe +0x056:  mov    %eax,(%esp)
08442ec1 +0x059:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08442ec6 +0x05e:  movl   $0x1,0x4(%esp)
08442ece +0x066:  mov    -0xc(%ebp),%eax
08442ed1 +0x069:  mov    %eax,(%esp)
08442ed4 +0x06c:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08442ed9 +0x071:  xor    $0x1,%eax
08442edc +0x074:  test   %al,%al
08442ede +0x076:  je     08442eea <+0x82>
08442ee0 +0x078:  mov    $0x0,%eax
08442ee5 +0x07d:  jmp    08442fac <+0x144>
08442eea +0x082:  mov    -0xc(%ebp),%eax
08442eed +0x085:  mov    %eax,(%esp)
08442ef0 +0x088:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08442ef5 +0x08d:  test   %eax,%eax
08442ef7 +0x08f:  setne  %al
08442efa +0x092:  test   %al,%al
08442efc +0x094:  je     08442f6a <+0x102>
08442efe +0x096:  mov    -0xc(%ebp),%eax
08442f01 +0x099:  mov    %eax,(%esp)
08442f04 +0x09c:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08442f09 +0x0a1:  xor    $0x1,%eax
08442f0c +0x0a4:  test   %al,%al
08442f0e +0x0a6:  je     08442f1a <+0xb2>
08442f10 +0x0a8:  mov    $0x0,%eax
08442f15 +0x0ad:  jmp    08442fac <+0x144>
08442f1a +0x0b2:  lea    -0x14(%ebp),%eax
08442f1d +0x0b5:  mov    %eax,0x8(%esp)
08442f21 +0x0b9:  movl   $0x0,0x4(%esp)
08442f29 +0x0c1:  mov    -0xc(%ebp),%eax
08442f2c +0x0c4:  mov    %eax,(%esp)
08442f2f +0x0c7:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
08442f34 +0x0cc:  xor    $0x1,%eax
08442f37 +0x0cf:  test   %al,%al
08442f39 +0x0d1:  je     08442f42 <+0xda>
08442f3b +0x0d3:  mov    $0x0,%eax
08442f40 +0x0d8:  jmp    08442fac <+0x144>
08442f42 +0x0da:  lea    -0x18(%ebp),%eax
08442f45 +0x0dd:  mov    %eax,0x8(%esp)
08442f49 +0x0e1:  movl   $0x1,0x4(%esp)
08442f51 +0x0e9:  mov    -0xc(%ebp),%eax
08442f54 +0x0ec:  mov    %eax,(%esp)
08442f57 +0x0ef:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
08442f5c +0x0f4:  xor    $0x1,%eax
08442f5f +0x0f7:  test   %al,%al
08442f61 +0x0f9:  je     08442f6a <+0x102>
08442f63 +0x0fb:  mov    $0x0,%eax
08442f68 +0x100:  jmp    08442fac <+0x144>
08442f6a +0x102:  mov    -0x14(%ebp),%eax
08442f6d +0x105:  mov    %eax,-0x1c(%ebp)
08442f70 +0x108:  mov    $0x51eb851f,%edx
08442f75 +0x10d:  mov    -0x1c(%ebp),%eax
08442f78 +0x110:  mul    %edx
08442f7a +0x112:  shr    $0x5,%edx
08442f7d +0x115:  mov    -0x10(%ebp),%eax
08442f80 +0x118:  mov    %edx,0x4(%eax)
08442f83 +0x11b:  mov    -0x18(%ebp),%edx
08442f86 +0x11e:  mov    -0x10(%ebp),%eax
08442f89 +0x121:  mov    %edx,0x8(%eax)
08442f8c +0x124:  mov    -0x10(%ebp),%eax
08442f8f +0x127:  mov    %eax,0xc(%esp)
08442f93 +0x12b:  mov    0x10(%ebp),%eax
08442f96 +0x12e:  mov    %eax,0x8(%esp)
08442f9a +0x132:  mov    0xc(%ebp),%eax
08442f9d +0x135:  mov    %eax,0x4(%esp)
08442fa1 +0x139:  mov    0x8(%ebp),%eax
08442fa4 +0x13c:  mov    %eax,(%esp)
08442fa7 +0x13f:  call   0844309c <_ZN17DB_GetUserRegdate10SendResultEiiP20SIG_GET_USER_REGDATE>  ; DB_GetUserRegdate::SendResult(int, int, SIG_GET_USER_REGDATE*)
08442fac +0x144:  leave
08442fad +0x145:  ret
```

## 反编译 C

```c
// DB_GetUserRegdate::dispatch @ 0x8442e68

/* DB_GetUserRegdate::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_GetUserRegdate::dispatch(DB_GetUserRegdate *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint local_1c;
  uint local_18;
  SIG_GET_USER_REGDATE *local_14;
  MySQL *local_10;
  
  local_18 = 0;
  local_1c = 0;
  local_14 = Stream::GetOutBuffer<SIG_GET_USER_REGDATE>(param_3);
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  MySQL::set_query(local_10,
                   "seLect DATE_FORMAT(from_unixtime(reg_date),\'%%Y%%m%%d%%H\') ,reg_date from member_info where m_id=%d"
                   ,*(undefined4 *)local_14);
  cVar1 = MySQL::exec(local_10,true);
  if (cVar1 != '\x01') {
    return 0;
  }
  iVar2 = MySQL::get_n_rows(local_10);
  if (iVar2 != 0) {
    cVar1 = MySQL::fetch(local_10);
    if (cVar1 != '\x01') {
      return 0;
    }
    cVar1 = MySQL::get_uint(local_10,0,&local_18);
    if (cVar1 != '\x01') {
      return 0;
    }
    cVar1 = MySQL::get_uint(local_10,1,&local_1c);
    if (cVar1 != '\x01') {
      return 0;
    }
  }
  *(uint *)(local_14 + 4) = local_18 / 100;
  *(uint *)(local_14 + 8) = local_1c;
  uVar3 = SendResult(this,param_1,param_2,local_14);
  return uVar3;
}
```
