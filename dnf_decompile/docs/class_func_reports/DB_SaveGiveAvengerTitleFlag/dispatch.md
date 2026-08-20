# dispatch

`_ZN27DB_SaveGiveAvengerTitleFlag8dispatchEiiP6Stream`

`DB_SaveGiveAvengerTitleFlag::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_SaveGiveAvengerTitleFlag` | `0x08442226` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08442226  _ZN27DB_SaveGiveAvengerTitleFlag8dispatchEiiP6Stream
#           DB_SaveGiveAvengerTitleFlag::dispatch(int, int, Stream*)
# range [0x08442226, 0x084422db]
08442226 +0x00:  push   %ebp
08442227 +0x01:  mov    %esp,%ebp
08442229 +0x03:  push   %ebx
0844222a +0x04:  sub    $0x24,%esp
0844222d +0x07:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08442232 +0x0c:  movl   $0x0,0x8(%esp)
0844223a +0x14:  movl   $0x9,0x4(%esp)
08442242 +0x1c:  mov    %eax,(%esp)
08442245 +0x1f:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0844224a +0x24:  mov    %eax,-0xc(%ebp)
0844224d +0x27:  movl   $0x0,-0x10(%ebp)
08442254 +0x2e:  movl   $0x0,-0x14(%ebp)
0844225b +0x35:  lea    -0x10(%ebp),%eax
0844225e +0x38:  mov    %eax,0x4(%esp)
08442262 +0x3c:  mov    0x14(%ebp),%eax
08442265 +0x3f:  mov    %eax,(%esp)
08442268 +0x42:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
0844226d +0x47:  lea    -0x14(%ebp),%eax
08442270 +0x4a:  mov    %eax,0x4(%esp)
08442274 +0x4e:  mov    0x14(%ebp),%eax
08442277 +0x51:  mov    %eax,(%esp)
0844227a +0x54:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
0844227f +0x59:  mov    -0x14(%ebp),%ebx
08442282 +0x5c:  mov    -0x10(%ebp),%eax
08442285 +0x5f:  movl   $0x0,0x4(%esp)
0844228d +0x67:  mov    %eax,(%esp)
08442290 +0x6a:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08442295 +0x6f:  mov    %ebx,0xc(%esp)
08442299 +0x73:  mov    %eax,0x8(%esp)
0844229d +0x77:  movl   $"inSert into event_1107_avenger_plan(m_id, charac_no, occ_date) values(%s, %u, now())",0x4(%esp)
084422a5 +0x7f:  mov    -0xc(%ebp),%eax
084422a8 +0x82:  mov    %eax,(%esp)
084422ab +0x85:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084422b0 +0x8a:  movl   $0x1,0x4(%esp)
084422b8 +0x92:  mov    -0xc(%ebp),%eax
084422bb +0x95:  mov    %eax,(%esp)
084422be +0x98:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084422c3 +0x9d:  xor    $0x1,%eax
084422c6 +0xa0:  test   %al,%al
084422c8 +0xa2:  je     084422d1 <+0xab>
084422ca +0xa4:  mov    $0x0,%eax
084422cf +0xa9:  jmp    084422d6 <+0xb0>
084422d1 +0xab:  mov    $0x1,%eax
084422d6 +0xb0:  add    $0x24,%esp
084422d9 +0xb3:  pop    %ebx
084422da +0xb4:  pop    %ebp
084422db +0xb5:  ret
```

## 反编译 C

```c
// DB_SaveGiveAvengerTitleFlag::dispatch @ 0x8442226

/* DB_SaveGiveAvengerTitleFlag::dispatch(int, int, Stream*) */

bool DB_SaveGiveAvengerTitleFlag::dispatch(int param_1,int param_2,Stream *param_3)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  Stream *in_stack_00000010;
  uint local_18;
  uint local_14;
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  local_14 = 0;
  local_18 = 0;
  Stream::operator>>(in_stack_00000010,&local_14);
  Stream::operator>>(in_stack_00000010,&local_18);
  uVar1 = local_18;
  uVar3 = NumberToString(local_14,0);
  MySQL::set_query(local_10,
                   "inSert into event_1107_avenger_plan(m_id, charac_no, occ_date) values(%s, %u, now())"
                   ,uVar3,uVar1);
  cVar2 = MySQL::exec(local_10,true);
  return cVar2 == '\x01';
}
```
