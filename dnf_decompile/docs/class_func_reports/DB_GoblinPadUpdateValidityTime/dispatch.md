# dispatch

`_ZN30DB_GoblinPadUpdateValidityTime8dispatchEiiP6Stream`

`DB_GoblinPadUpdateValidityTime::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_GoblinPadUpdateValidityTime` | `0x0842f22a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0842f22a  _ZN30DB_GoblinPadUpdateValidityTime8dispatchEiiP6Stream
#           DB_GoblinPadUpdateValidityTime::dispatch(int, int, Stream*)
# range [0x0842f22a, 0x0842f2ad]
0842f22a +0x00:  push   %ebp
0842f22b +0x01:  mov    %esp,%ebp
0842f22d +0x03:  sub    $0x28,%esp
0842f230 +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0842f235 +0x0b:  movl   $0x0,0x8(%esp)
0842f23d +0x13:  movl   $0x6,0x4(%esp)
0842f245 +0x1b:  mov    %eax,(%esp)
0842f248 +0x1e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0842f24d +0x23:  mov    %eax,-0x10(%ebp)
0842f250 +0x26:  mov    0x14(%ebp),%eax
0842f253 +0x29:  mov    %eax,(%esp)
0842f256 +0x2c:  call   08452a84 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x569a>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x569a
0842f25b +0x31:  mov    %eax,-0xc(%ebp)
0842f25e +0x34:  mov    -0xc(%ebp),%eax
0842f261 +0x37:  mov    (%eax),%eax
0842f263 +0x39:  movl   $0x0,0x4(%esp)
0842f26b +0x41:  mov    %eax,(%esp)
0842f26e +0x44:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0842f273 +0x49:  mov    -0xc(%ebp),%edx
0842f276 +0x4c:  mov    0x4(%edx),%edx
0842f279 +0x4f:  mov    %eax,0xc(%esp)
0842f27d +0x53:  mov    %edx,0x8(%esp)
0842f281 +0x57:  movl   $"upDate member_mousepass set validity_time=unix_timestamp(now())+%d where m_id=%s",0x4(%esp)
0842f289 +0x5f:  mov    -0x10(%ebp),%eax
0842f28c +0x62:  mov    %eax,(%esp)
0842f28f +0x65:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842f294 +0x6a:  movl   $0x1,0x4(%esp)
0842f29c +0x72:  mov    -0x10(%ebp),%eax
0842f29f +0x75:  mov    %eax,(%esp)
0842f2a2 +0x78:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0842f2a7 +0x7d:  mov    $0x1,%eax
0842f2ac +0x82:  leave
0842f2ad +0x83:  ret
```

## 反编译 C

```c
// DB_GoblinPadUpdateValidityTime::dispatch @ 0x842f22a

/* DB_GoblinPadUpdateValidityTime::dispatch(int, int, Stream*) */

undefined4 DB_GoblinPadUpdateValidityTime::dispatch(int param_1,int param_2,Stream *param_3)

{
  MySQL *this;
  SIG_GOBLIN_UPDATE_VALIDITYTIME *pSVar1;
  undefined4 uVar2;
  Stream *in_stack_00000010;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  pSVar1 = Stream::GetOutBuffer<SIG_GOBLIN_UPDATE_VALIDITYTIME>(in_stack_00000010);
  uVar2 = NumberToString(*(uint *)pSVar1,0);
  MySQL::set_query(this,
                   "upDate member_mousepass set validity_time=unix_timestamp(now())+%d where m_id=%s"
                   ,*(undefined4 *)(pSVar1 + 4),uVar2);
  MySQL::exec(this,true);
  return 1;
}
```
