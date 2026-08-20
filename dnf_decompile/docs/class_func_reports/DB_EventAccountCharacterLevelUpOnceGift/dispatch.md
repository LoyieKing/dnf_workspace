# dispatch

`_ZN39DB_EventAccountCharacterLevelUpOnceGift8dispatchEiiP6Stream`

`DB_EventAccountCharacterLevelUpOnceGift::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_EventAccountCharacterLevelUpOnceGift` | `0x08449e3e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08449e3e  _ZN39DB_EventAccountCharacterLevelUpOnceGift8dispatchEiiP6Stream
#           DB_EventAccountCharacterLevelUpOnceGift::dispatch(int, int, Stream*)
# range [0x08449e3e, 0x08449f65]
08449e3e +0x000:  push   %ebp
08449e3f +0x001:  mov    %esp,%ebp
08449e41 +0x003:  push   %edi
08449e42 +0x004:  push   %esi
08449e43 +0x005:  push   %ebx
08449e44 +0x006:  sub    $0x5c,%esp
08449e47 +0x009:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08449e4c +0x00e:  movl   $0x0,0x8(%esp)
08449e54 +0x016:  movl   $0x9,0x4(%esp)
08449e5c +0x01e:  mov    %eax,(%esp)
08449e5f +0x021:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08449e64 +0x026:  mov    %eax,-0x1c(%ebp)
08449e67 +0x029:  movl   $0x0,-0x20(%ebp)
08449e6e +0x030:  movw   $0x0,-0x22(%ebp)
08449e74 +0x036:  movl   $0x0,-0x28(%ebp)
08449e7b +0x03d:  movw   $0x0,-0x2a(%ebp)
08449e81 +0x043:  movw   $0x0,-0x2c(%ebp)
08449e87 +0x049:  lea    -0x20(%ebp),%eax
08449e8a +0x04c:  mov    %eax,0x4(%esp)
08449e8e +0x050:  mov    0x14(%ebp),%eax
08449e91 +0x053:  mov    %eax,(%esp)
08449e94 +0x056:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
08449e99 +0x05b:  lea    -0x22(%ebp),%eax
08449e9c +0x05e:  mov    %eax,0x4(%esp)
08449ea0 +0x062:  mov    0x14(%ebp),%eax
08449ea3 +0x065:  mov    %eax,(%esp)
08449ea6 +0x068:  call   0861c552 <_ZN6StreamrsERs>  ; Stream::operator>>(short&)
08449eab +0x06d:  lea    -0x28(%ebp),%eax
08449eae +0x070:  mov    %eax,0x4(%esp)
08449eb2 +0x074:  mov    0x14(%ebp),%eax
08449eb5 +0x077:  mov    %eax,(%esp)
08449eb8 +0x07a:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
08449ebd +0x07f:  lea    -0x2a(%ebp),%eax
08449ec0 +0x082:  mov    %eax,0x4(%esp)
08449ec4 +0x086:  mov    0x14(%ebp),%eax
08449ec7 +0x089:  mov    %eax,(%esp)
08449eca +0x08c:  call   0861c552 <_ZN6StreamrsERs>  ; Stream::operator>>(short&)
08449ecf +0x091:  lea    -0x2c(%ebp),%eax
08449ed2 +0x094:  mov    %eax,0x4(%esp)
08449ed6 +0x098:  mov    0x14(%ebp),%eax
08449ed9 +0x09b:  mov    %eax,(%esp)
08449edc +0x09e:  call   0861c552 <_ZN6StreamrsERs>  ; Stream::operator>>(short&)
08449ee1 +0x0a3:  movzwl -0x2c(%ebp),%eax
08449ee5 +0x0a7:  cwtl
08449ee6 +0x0a8:  mov    %eax,-0x3c(%ebp)
08449ee9 +0x0ab:  movzwl -0x2a(%ebp),%eax
08449eed +0x0af:  movswl %ax,%edi
08449ef0 +0x0b2:  mov    -0x28(%ebp),%esi
08449ef3 +0x0b5:  movzwl -0x22(%ebp),%eax
08449ef7 +0x0b9:  movswl %ax,%ebx
08449efa +0x0bc:  mov    -0x20(%ebp),%eax
08449efd +0x0bf:  movl   $0x0,0x4(%esp)
08449f05 +0x0c7:  mov    %eax,(%esp)
08449f08 +0x0ca:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08449f0d +0x0cf:  mov    -0x3c(%ebp),%edx
08449f10 +0x0d2:  mov    %edx,0x18(%esp)
08449f14 +0x0d6:  mov    %edi,0x14(%esp)
08449f18 +0x0da:  mov    %esi,0x10(%esp)
08449f1c +0x0de:  mov    %ebx,0xc(%esp)
08449f20 +0x0e2:  mov    %eax,0x8(%esp)
08449f24 +0x0e6:  movl   $"inSert into event_1208_level_achieve(m_id ,server_id, charac_no, job_type, level, occ_date) values(%s, %d, %d, %d, %d, now())",0x4(%esp)
08449f2c +0x0ee:  mov    -0x1c(%ebp),%eax
08449f2f +0x0f1:  mov    %eax,(%esp)
08449f32 +0x0f4:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08449f37 +0x0f9:  movl   $0x1,0x4(%esp)
08449f3f +0x101:  mov    -0x1c(%ebp),%eax
08449f42 +0x104:  mov    %eax,(%esp)
08449f45 +0x107:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08449f4a +0x10c:  xor    $0x1,%eax
08449f4d +0x10f:  test   %al,%al
08449f4f +0x111:  je     08449f58 <+0x11a>
08449f51 +0x113:  mov    $0x0,%eax
08449f56 +0x118:  jmp    08449f5d <+0x11f>
08449f58 +0x11a:  mov    $0x1,%eax
08449f5d +0x11f:  add    $0x5c,%esp
08449f60 +0x122:  pop    %ebx
08449f61 +0x123:  pop    %esi
08449f62 +0x124:  pop    %edi
08449f63 +0x125:  pop    %ebp
08449f64 +0x126:  ret
08449f65 +0x127:  nop
```

## 反编译 C

```c
// DB_EventAccountCharacterLevelUpOnceGift::dispatch @ 0x8449e3e

/* DB_EventAccountCharacterLevelUpOnceGift::dispatch(int, int, Stream*) */

bool DB_EventAccountCharacterLevelUpOnceGift::dispatch(int param_1,int param_2,Stream *param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  Stream *in_stack_00000010;
  short local_30;
  short local_2e;
  int local_2c;
  short local_26;
  uint local_24;
  MySQL *local_20;
  
  local_20 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  local_24 = 0;
  local_26 = 0;
  local_2c = 0;
  local_2e = 0;
  local_30 = 0;
  Stream::operator>>(in_stack_00000010,&local_24);
  Stream::operator>>(in_stack_00000010,&local_26);
  Stream::operator>>(in_stack_00000010,&local_2c);
  Stream::operator>>(in_stack_00000010,&local_2e);
  Stream::operator>>(in_stack_00000010,&local_30);
  iVar1 = local_2c;
  iVar3 = (int)local_30;
  iVar6 = (int)local_2e;
  iVar5 = (int)local_26;
  uVar4 = NumberToString(local_24,0);
  MySQL::set_query(local_20,
                   "inSert into event_1208_level_achieve(m_id ,server_id, charac_no, job_type, level, occ_date) values(%s, %d, %d, %d, %d, now())"
                   ,uVar4,iVar5,iVar1,iVar6,iVar3);
  cVar2 = MySQL::exec(local_20,true);
  return cVar2 == '\x01';
}
```
