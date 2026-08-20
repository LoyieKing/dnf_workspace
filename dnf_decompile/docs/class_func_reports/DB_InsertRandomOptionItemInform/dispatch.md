# dispatch

`_ZN31DB_InsertRandomOptionItemInform8dispatchEiiP6Stream`

`DB_InsertRandomOptionItemInform::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_InsertRandomOptionItemInform` | `0x08442c6a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08442c6a  _ZN31DB_InsertRandomOptionItemInform8dispatchEiiP6Stream
#           DB_InsertRandomOptionItemInform::dispatch(int, int, Stream*)
# range [0x08442c6a, 0x08442d6f]
08442c6a +0x000:  push   %ebp
08442c6b +0x001:  mov    %esp,%ebp
08442c6d +0x003:  push   %ebx
08442c6e +0x004:  sub    $0x34,%esp
08442c71 +0x007:  movl   $0x0,-0x20(%ebp)
08442c78 +0x00e:  movb   $0x0,-0x21(%ebp)
08442c7c +0x012:  lea    -0x20(%ebp),%eax
08442c7f +0x015:  mov    %eax,0x4(%esp)
08442c83 +0x019:  mov    0x14(%ebp),%eax
08442c86 +0x01c:  mov    %eax,(%esp)
08442c89 +0x01f:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
08442c8e +0x024:  lea    -0x21(%ebp),%eax
08442c91 +0x027:  mov    %eax,0x4(%esp)
08442c95 +0x02b:  mov    0x14(%ebp),%eax
08442c98 +0x02e:  mov    %eax,(%esp)
08442c9b +0x031:  call   0861c732 <_ZN6StreamrsERh>  ; Stream::operator>>(unsigned char&)
08442ca0 +0x036:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08442ca5 +0x03b:  movl   $0x0,0x8(%esp)
08442cad +0x043:  movl   $0x1,0x4(%esp)
08442cb5 +0x04b:  mov    %eax,(%esp)
08442cb8 +0x04e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08442cbd +0x053:  mov    %eax,-0xc(%ebp)
08442cc0 +0x056:  movzbl -0x21(%ebp),%eax
08442cc4 +0x05a:  movzbl %al,%ebx
08442cc7 +0x05d:  mov    -0x20(%ebp),%eax
08442cca +0x060:  movl   $0x0,0x4(%esp)
08442cd2 +0x068:  mov    %eax,(%esp)
08442cd5 +0x06b:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08442cda +0x070:  mov    %ebx,0xc(%esp)
08442cde +0x074:  mov    %eax,0x8(%esp)
08442ce2 +0x078:  movl   $"inSert into check_pick_up_random_option_item(m_id, check_count) values(%s, %u)",0x4(%esp)
08442cea +0x080:  mov    -0xc(%ebp),%eax
08442ced +0x083:  mov    %eax,(%esp)
08442cf0 +0x086:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08442cf5 +0x08b:  movl   $0x1,0x4(%esp)
08442cfd +0x093:  mov    -0xc(%ebp),%eax
08442d00 +0x096:  mov    %eax,(%esp)
08442d03 +0x099:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08442d08 +0x09e:  xor    $0x1,%eax
08442d0b +0x0a1:  test   %al,%al
08442d0d +0x0a3:  je     08442d65 <+0xfb>
08442d0f +0x0a5:  mov    -0x20(%ebp),%eax
08442d12 +0x0a8:  movl   $0x0,0x4(%esp)
08442d1a +0x0b0:  mov    %eax,(%esp)
08442d1d +0x0b3:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08442d22 +0x0b8:  mov    %eax,%ebx
08442d24 +0x0ba:  movl   $0x5,0xc(%esp)
08442d2c +0x0c2:  movl   $0xa47e,0x8(%esp)
08442d34 +0x0ca:  movl   $&_ZZN31DB_InsertRandomOptionItemInform8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
08442d3c +0x0d2:  lea    -0x1c(%ebp),%eax
08442d3f +0x0d5:  mov    %eax,(%esp)
08442d42 +0x0d8:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08442d47 +0x0dd:  mov    %ebx,0x8(%esp)
08442d4b +0x0e1:  movl   $"inSert into check_pickup_random_option_item failed at m_id(%s) ",0x4(%esp)
08442d53 +0x0e9:  lea    -0x1c(%ebp),%eax
08442d56 +0x0ec:  mov    %eax,(%esp)
08442d59 +0x0ef:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08442d5e +0x0f4:  mov    $0x0,%eax
08442d63 +0x0f9:  jmp    08442d6a <+0x100>
08442d65 +0x0fb:  mov    $0x1,%eax
08442d6a +0x100:  add    $0x34,%esp
08442d6d +0x103:  pop    %ebx
08442d6e +0x104:  pop    %ebp
08442d6f +0x105:  ret
```

## 反编译 C

```c
// DB_InsertRandomOptionItemInform::dispatch @ 0x8442c6a

/* DB_InsertRandomOptionItemInform::dispatch(int, int, Stream*) */

bool DB_InsertRandomOptionItemInform::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  Stream *in_stack_00000010;
  byte local_25;
  uint local_24;
  cMyTrace local_20 [16];
  MySQL *local_10;
  
  local_24 = 0;
  local_25 = 0;
  Stream::operator>>(in_stack_00000010,&local_24);
  Stream::operator>>(in_stack_00000010,&local_25);
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  uVar3 = (uint)local_25;
  uVar2 = NumberToString(local_24,0);
  MySQL::set_query(local_10,
                   "inSert into check_pick_up_random_option_item(m_id, check_count) values(%s, %u)",
                   uVar2,uVar3);
  cVar1 = MySQL::exec(local_10,true);
  if (cVar1 != '\x01') {
    uVar2 = NumberToString(local_24,0);
    cMyTrace::cMyTrace(local_20,
                       "virtual bool DB_InsertRandomOptionItemInform::dispatch(int, int, Stream*)",
                       0xa47e,5);
    cMyTrace::operator()
              (local_20,"inSert into check_pickup_random_option_item failed at m_id(%s) ",uVar2);
  }
  return cVar1 == '\x01';
}
```
