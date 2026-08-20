# dispatch

`_ZN26DB_UpdateQueryCountDbLogdb8dispatchEiiP6Stream`

`DB_UpdateQueryCountDbLogdb::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateQueryCountDbLogdb` | `0x0841c61a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0841c61a  _ZN26DB_UpdateQueryCountDbLogdb8dispatchEiiP6Stream
#           DB_UpdateQueryCountDbLogdb::dispatch(int, int, Stream*)
# range [0x0841c61a, 0x0841c74d]
0841c61a +0x000:  push   %ebp
0841c61b +0x001:  mov    %esp,%ebp
0841c61d +0x003:  push   %esi
0841c61e +0x004:  push   %ebx
0841c61f +0x005:  sub    $0x40,%esp
0841c622 +0x008:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0841c627 +0x00d:  movl   $0x0,0x8(%esp)
0841c62f +0x015:  movl   $0x4,0x4(%esp)
0841c637 +0x01d:  mov    %eax,(%esp)
0841c63a +0x020:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0841c63f +0x025:  mov    %eax,-0x10(%ebp)
0841c642 +0x028:  movl   $0x0,-0x14(%ebp)
0841c649 +0x02f:  movl   $0x0,-0x18(%ebp)
0841c650 +0x036:  lea    -0x14(%ebp),%eax
0841c653 +0x039:  mov    %eax,0x4(%esp)
0841c657 +0x03d:  mov    0x14(%ebp),%eax
0841c65a +0x040:  mov    %eax,(%esp)
0841c65d +0x043:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
0841c662 +0x048:  lea    -0x18(%ebp),%eax
0841c665 +0x04b:  mov    %eax,0x4(%esp)
0841c669 +0x04f:  mov    0x14(%ebp),%eax
0841c66c +0x052:  mov    %eax,(%esp)
0841c66f +0x055:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
0841c674 +0x05a:  movl   $0x0,-0xc(%ebp)
0841c67b +0x061:  jmp    0841c730 <+0x116>
0841c680 +0x066:  movl   $0x0,-0x1c(%ebp)
0841c687 +0x06d:  movl   $0x0,-0x20(%ebp)
0841c68e +0x074:  movl   $0x0,-0x24(%ebp)
0841c695 +0x07b:  lea    -0x1c(%ebp),%eax
0841c698 +0x07e:  mov    %eax,0x4(%esp)
0841c69c +0x082:  mov    0x14(%ebp),%eax
0841c69f +0x085:  mov    %eax,(%esp)
0841c6a2 +0x088:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
0841c6a7 +0x08d:  lea    -0x20(%ebp),%eax
0841c6aa +0x090:  mov    %eax,0x4(%esp)
0841c6ae +0x094:  mov    0x14(%ebp),%eax
0841c6b1 +0x097:  mov    %eax,(%esp)
0841c6b4 +0x09a:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
0841c6b9 +0x09f:  lea    -0x24(%ebp),%eax
0841c6bc +0x0a2:  mov    %eax,0x4(%esp)
0841c6c0 +0x0a6:  mov    0x14(%ebp),%eax
0841c6c3 +0x0a9:  mov    %eax,(%esp)
0841c6c6 +0x0ac:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
0841c6cb +0x0b1:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0841c6d0 +0x0b6:  mov    %eax,(%esp)
0841c6d3 +0x0b9:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
0841c6d8 +0x0be:  mov    -0x24(%ebp),%esi
0841c6db +0x0c1:  mov    -0x20(%ebp),%ebx
0841c6de +0x0c4:  mov    -0x1c(%ebp),%ecx
0841c6e1 +0x0c7:  mov    -0x14(%ebp),%edx
0841c6e4 +0x0ca:  mov    %eax,0x18(%esp)
0841c6e8 +0x0ce:  mov    %esi,0x14(%esp)
0841c6ec +0x0d2:  mov    %ebx,0x10(%esp)
0841c6f0 +0x0d6:  mov    %ecx,0xc(%esp)
0841c6f4 +0x0da:  mov    %edx,0x8(%esp)
0841c6f8 +0x0de:  movl   $"inSert into log_query_stat(occ_time,q_id,total,response_time,gc_no) values(from_unixtime(%d),%d,%d,%d,%d)",0x4(%esp)
0841c700 +0x0e6:  mov    -0x10(%ebp),%eax
0841c703 +0x0e9:  mov    %eax,(%esp)
0841c706 +0x0ec:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0841c70b +0x0f1:  movl   $0x1,0x4(%esp)
0841c713 +0x0f9:  mov    -0x10(%ebp),%eax
0841c716 +0x0fc:  mov    %eax,(%esp)
0841c719 +0x0ff:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0841c71e +0x104:  xor    $0x1,%eax
0841c721 +0x107:  test   %al,%al
0841c723 +0x109:  je     0841c72c <+0x112>
0841c725 +0x10b:  mov    $0x0,%eax
0841c72a +0x110:  jmp    0841c746 <+0x12c>
0841c72c +0x112:  addl   $0x1,-0xc(%ebp)
0841c730 +0x116:  mov    -0x18(%ebp),%eax
0841c733 +0x119:  cmp    %eax,-0xc(%ebp)
0841c736 +0x11c:  setl   %al
0841c739 +0x11f:  test   %al,%al
0841c73b +0x121:  jne    0841c680 <+0x66>
0841c741 +0x127:  mov    $0x1,%eax
0841c746 +0x12c:  add    $0x40,%esp
0841c749 +0x12f:  pop    %ebx
0841c74a +0x130:  pop    %esi
0841c74b +0x131:  pop    %ebp
0841c74c +0x132:  ret
0841c74d +0x133:  nop
```

## 反编译 C

```c
// DB_UpdateQueryCountDbLogdb::dispatch @ 0x841c61a

/* DB_UpdateQueryCountDbLogdb::dispatch(int, int, Stream*) */

undefined4 DB_UpdateQueryCountDbLogdb::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  CEnvironment *this;
  undefined4 uVar2;
  Stream *in_stack_00000010;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  MySQL *local_14;
  int local_10;
  
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  local_18 = 0;
  local_1c = 0;
  Stream::operator>>(in_stack_00000010,&local_18);
  Stream::operator>>(in_stack_00000010,&local_1c);
  local_10 = 0;
  while( true ) {
    if (local_1c <= local_10) {
      return 1;
    }
    local_20 = 0;
    local_24 = 0;
    local_28 = 0;
    Stream::operator>>(in_stack_00000010,&local_20);
    Stream::operator>>(in_stack_00000010,&local_24);
    Stream::operator>>(in_stack_00000010,&local_28);
    this = (CEnvironment *)G_CEnvironment();
    uVar2 = CEnvironment::get_channel_no(this);
    MySQL::set_query(local_14,
                     "inSert into log_query_stat(occ_time,q_id,total,response_time,gc_no) values(from_unixtime(%d),%d,%d,%d,%d)"
                     ,local_18,local_20,local_24,local_28,uVar2);
    cVar1 = MySQL::exec(local_14,true);
    if (cVar1 != '\x01') break;
    local_10 = local_10 + 1;
  }
  return 0;
}
```
