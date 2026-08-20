# dispatch

`_ZN28DB_InsertServerLoadStatistic8dispatchEiiP6Stream`

`DB_InsertServerLoadStatistic::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_InsertServerLoadStatistic` | `0x08436ad4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08436ad4  _ZN28DB_InsertServerLoadStatistic8dispatchEiiP6Stream
#           DB_InsertServerLoadStatistic::dispatch(int, int, Stream*)
# range [0x08436ad4, 0x08436b9f]
08436ad4 +0x00:  push   %ebp
08436ad5 +0x01:  mov    %esp,%ebp
08436ad7 +0x03:  push   %edi
08436ad8 +0x04:  push   %esi
08436ad9 +0x05:  push   %ebx
08436ada +0x06:  sub    $0x3c,%esp
08436add +0x09:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08436ae2 +0x0e:  movl   $0x0,0x8(%esp)
08436aea +0x16:  movl   $0x4,0x4(%esp)
08436af2 +0x1e:  mov    %eax,(%esp)
08436af5 +0x21:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08436afa +0x26:  mov    %eax,-0x20(%ebp)
08436afd +0x29:  mov    0x14(%ebp),%eax
08436b00 +0x2c:  mov    %eax,(%esp)
08436b03 +0x2f:  call   08453398 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x5fae>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x5fae
08436b08 +0x34:  mov    %eax,-0x1c(%ebp)
08436b0b +0x37:  mov    -0x1c(%ebp),%eax
08436b0e +0x3a:  movzwl 0x8(%eax),%eax
08436b12 +0x3e:  movswl %ax,%edi
08436b15 +0x41:  mov    -0x1c(%ebp),%eax
08436b18 +0x44:  movzwl 0x6(%eax),%eax
08436b1c +0x48:  movswl %ax,%esi
08436b1f +0x4b:  mov    -0x1c(%ebp),%eax
08436b22 +0x4e:  movzwl 0x4(%eax),%eax
08436b26 +0x52:  movswl %ax,%ebx
08436b29 +0x55:  mov    -0x1c(%ebp),%eax
08436b2c +0x58:  movzwl 0x2(%eax),%eax
08436b30 +0x5c:  movswl %ax,%ecx
08436b33 +0x5f:  mov    -0x1c(%ebp),%eax
08436b36 +0x62:  movzbl 0x1(%eax),%eax
08436b3a +0x66:  movsbl %al,%edx
08436b3d +0x69:  mov    -0x1c(%ebp),%eax
08436b40 +0x6c:  movzbl (%eax),%eax
08436b43 +0x6f:  movsbl %al,%eax
08436b46 +0x72:  mov    %edi,0x1c(%esp)
08436b4a +0x76:  mov    %esi,0x18(%esp)
08436b4e +0x7a:  mov    %ebx,0x14(%esp)
08436b52 +0x7e:  mov    %ecx,0x10(%esp)
08436b56 +0x82:  mov    %edx,0xc(%esp)
08436b5a +0x86:  mov    %eax,0x8(%esp)
08436b5e +0x8a:  movl   $"inSert into log_gameserver_load_stat set occ_time=now(), server_id=%d, channel_no=%d, dbq_cnt=%d, logdbq_cnt=%d, netq_cnt=%d, packetq_cnt=%d",0x4(%esp)
08436b66 +0x92:  mov    -0x20(%ebp),%eax
08436b69 +0x95:  mov    %eax,(%esp)
08436b6c +0x98:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08436b71 +0x9d:  movl   $0x1,0x4(%esp)
08436b79 +0xa5:  mov    -0x20(%ebp),%eax
08436b7c +0xa8:  mov    %eax,(%esp)
08436b7f +0xab:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08436b84 +0xb0:  xor    $0x1,%eax
08436b87 +0xb3:  test   %al,%al
08436b89 +0xb5:  je     08436b92 <+0xbe>
08436b8b +0xb7:  mov    $0x0,%eax
08436b90 +0xbc:  jmp    08436b97 <+0xc3>
08436b92 +0xbe:  mov    $0x1,%eax
08436b97 +0xc3:  add    $0x3c,%esp
08436b9a +0xc6:  pop    %ebx
08436b9b +0xc7:  pop    %esi
08436b9c +0xc8:  pop    %edi
08436b9d +0xc9:  pop    %ebp
08436b9e +0xca:  ret
08436b9f +0xcb:  nop
```

## 反编译 C

```c
// DB_InsertServerLoadStatistic::dispatch @ 0x8436ad4

/* DB_InsertServerLoadStatistic::dispatch(int, int, Stream*) */

bool DB_InsertServerLoadStatistic::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  MySQL *this;
  SIG_INSERT_SERVER_LOAD_STATISTIC *pSVar2;
  Stream *in_stack_00000010;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  pSVar2 = Stream::GetOutBuffer<SIG_INSERT_SERVER_LOAD_STATISTIC>(in_stack_00000010);
  MySQL::set_query(this,
                   "inSert into log_gameserver_load_stat set occ_time=now(), server_id=%d, channel_no=%d, dbq_cnt=%d, logdbq_cnt=%d, netq_cnt=%d, packetq_cnt=%d"
                   ,(int)(char)*pSVar2,(int)(char)pSVar2[1],(int)*(short *)(pSVar2 + 2),
                   (int)*(short *)(pSVar2 + 4),(int)*(short *)(pSVar2 + 6),
                   (int)*(short *)(pSVar2 + 8));
  cVar1 = MySQL::exec(this,true);
  return cVar1 == '\x01';
}
```
