# dispatch

`_ZN19DB_MercenaryLogInfo8dispatchEiiP6Stream`

`DB_MercenaryLogInfo::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_MercenaryLogInfo` | `0x08446196` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08446196  _ZN19DB_MercenaryLogInfo8dispatchEiiP6Stream
#           DB_MercenaryLogInfo::dispatch(int, int, Stream*)
# range [0x08446196, 0x0844633f]
08446196 +0x000:  push   %ebp
08446197 +0x001:  mov    %esp,%ebp
08446199 +0x003:  push   %edi
0844619a +0x004:  push   %esi
0844619b +0x005:  push   %ebx
0844619c +0x006:  sub    $0x8c,%esp
084461a2 +0x00c:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
084461a7 +0x011:  movl   $0x0,0x8(%esp)
084461af +0x019:  movl   $0x4,0x4(%esp)
084461b7 +0x021:  mov    %eax,(%esp)
084461ba +0x024:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
084461bf +0x029:  mov    %eax,-0x1c(%ebp)
084461c2 +0x02c:  lea    -0x20(%ebp),%eax
084461c5 +0x02f:  mov    %eax,0x4(%esp)
084461c9 +0x033:  mov    0x14(%ebp),%eax
084461cc +0x036:  mov    %eax,(%esp)
084461cf +0x039:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
084461d4 +0x03e:  lea    -0x24(%ebp),%eax
084461d7 +0x041:  mov    %eax,0x4(%esp)
084461db +0x045:  mov    0x14(%ebp),%eax
084461de +0x048:  mov    %eax,(%esp)
084461e1 +0x04b:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
084461e6 +0x050:  lea    -0x28(%ebp),%eax
084461e9 +0x053:  mov    %eax,0x4(%esp)
084461ed +0x057:  mov    0x14(%ebp),%eax
084461f0 +0x05a:  mov    %eax,(%esp)
084461f3 +0x05d:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
084461f8 +0x062:  lea    -0x2c(%ebp),%eax
084461fb +0x065:  mov    %eax,0x4(%esp)
084461ff +0x069:  mov    0x14(%ebp),%eax
08446202 +0x06c:  mov    %eax,(%esp)
08446205 +0x06f:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
0844620a +0x074:  lea    -0x39(%ebp),%eax
0844620d +0x077:  mov    %eax,0x4(%esp)
08446211 +0x07b:  mov    0x14(%ebp),%eax
08446214 +0x07e:  mov    %eax,(%esp)
08446217 +0x081:  call   0861c4f0 <_ZN6StreamrsERc>  ; Stream::operator>>(char&)
0844621c +0x086:  lea    -0x3a(%ebp),%eax
0844621f +0x089:  mov    %eax,0x4(%esp)
08446223 +0x08d:  mov    0x14(%ebp),%eax
08446226 +0x090:  mov    %eax,(%esp)
08446229 +0x093:  call   0861c4f0 <_ZN6StreamrsERc>  ; Stream::operator>>(char&)
0844622e +0x098:  lea    -0x3b(%ebp),%eax
08446231 +0x09b:  mov    %eax,0x4(%esp)
08446235 +0x09f:  mov    0x14(%ebp),%eax
08446238 +0x0a2:  mov    %eax,(%esp)
0844623b +0x0a5:  call   0861c4f0 <_ZN6StreamrsERc>  ; Stream::operator>>(char&)
08446240 +0x0aa:  lea    -0x30(%ebp),%eax
08446243 +0x0ad:  mov    %eax,0x4(%esp)
08446247 +0x0b1:  mov    0x14(%ebp),%eax
0844624a +0x0b4:  mov    %eax,(%esp)
0844624d +0x0b7:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
08446252 +0x0bc:  lea    -0x34(%ebp),%eax
08446255 +0x0bf:  mov    %eax,0x4(%esp)
08446259 +0x0c3:  mov    0x14(%ebp),%eax
0844625c +0x0c6:  mov    %eax,(%esp)
0844625f +0x0c9:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
08446264 +0x0ce:  lea    -0x38(%ebp),%eax
08446267 +0x0d1:  mov    %eax,0x4(%esp)
0844626b +0x0d5:  mov    0x14(%ebp),%eax
0844626e +0x0d8:  mov    %eax,(%esp)
08446271 +0x0db:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
08446276 +0x0e0:  mov    -0x38(%ebp),%ebx
08446279 +0x0e3:  mov    -0x34(%ebp),%edi
0844627c +0x0e6:  mov    -0x30(%ebp),%eax
0844627f +0x0e9:  mov    %eax,-0x60(%ebp)
08446282 +0x0ec:  movzbl -0x3b(%ebp),%eax
08446286 +0x0f0:  movsbl %al,%eax
08446289 +0x0f3:  mov    %eax,-0x5c(%ebp)
0844628c +0x0f6:  movzbl -0x3a(%ebp),%eax
08446290 +0x0fa:  movsbl %al,%eax
08446293 +0x0fd:  mov    %eax,-0x58(%ebp)
08446296 +0x100:  movzbl -0x39(%ebp),%eax
0844629a +0x104:  movsbl %al,%eax
0844629d +0x107:  mov    %eax,-0x54(%ebp)
084462a0 +0x10a:  mov    -0x2c(%ebp),%edx
084462a3 +0x10d:  mov    %edx,-0x50(%ebp)
084462a6 +0x110:  mov    -0x28(%ebp),%eax
084462a9 +0x113:  mov    %eax,-0x4c(%ebp)
084462ac +0x116:  mov    -0x24(%ebp),%esi
084462af +0x119:  mov    -0x20(%ebp),%eax
084462b2 +0x11c:  movl   $0x0,0x4(%esp)
084462ba +0x124:  mov    %eax,(%esp)
084462bd +0x127:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084462c2 +0x12c:  mov    %ebx,0x2c(%esp)
084462c6 +0x130:  mov    %edi,0x28(%esp)
084462ca +0x134:  mov    -0x60(%ebp),%edx
084462cd +0x137:  mov    %edx,0x24(%esp)
084462d1 +0x13b:  mov    -0x5c(%ebp),%edx
084462d4 +0x13e:  mov    %edx,0x20(%esp)
084462d8 +0x142:  mov    -0x58(%ebp),%edx
084462db +0x145:  mov    %edx,0x1c(%esp)
084462df +0x149:  mov    -0x54(%ebp),%edx
084462e2 +0x14c:  mov    %edx,0x18(%esp)
084462e6 +0x150:  mov    -0x50(%ebp),%edx
084462e9 +0x153:  mov    %edx,0x14(%esp)
084462ed +0x157:  mov    -0x4c(%ebp),%edx
084462f0 +0x15a:  mov    %edx,0x10(%esp)
084462f4 +0x15e:  mov    %esi,0xc(%esp)
084462f8 +0x162:  mov    %eax,0x8(%esp)
084462fc +0x166:  movl   $"inSert into log_mercenary(m_id,charac_no,start_time,finish_time,type,period,area,gold,item_id,rarity) values(%s,%u,from_unixtime(%d),from_unixtime(%d),%d,%d,%d,%d,%d,%d)",0x4(%esp)
08446304 +0x16e:  mov    -0x1c(%ebp),%eax
08446307 +0x171:  mov    %eax,(%esp)
0844630a +0x174:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0844630f +0x179:  movl   $0x1,0x4(%esp)
08446317 +0x181:  mov    -0x1c(%ebp),%eax
0844631a +0x184:  mov    %eax,(%esp)
0844631d +0x187:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08446322 +0x18c:  xor    $0x1,%eax
08446325 +0x18f:  test   %al,%al
08446327 +0x191:  je     08446330 <+0x19a>
08446329 +0x193:  mov    $0x0,%eax
0844632e +0x198:  jmp    08446335 <+0x19f>
08446330 +0x19a:  mov    $0x1,%eax
08446335 +0x19f:  add    $0x8c,%esp
0844633b +0x1a5:  pop    %ebx
0844633c +0x1a6:  pop    %esi
0844633d +0x1a7:  pop    %edi
0844633e +0x1a8:  pop    %ebp
0844633f +0x1a9:  ret
```

## 反编译 C

```c
// DB_MercenaryLogInfo::dispatch @ 0x8446196

/* DB_MercenaryLogInfo::dispatch(int, int, Stream*) */

bool DB_MercenaryLogInfo::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  Stream *in_stack_00000010;
  char local_3f;
  char local_3e;
  char local_3d;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  uint local_24;
  MySQL *local_20;
  
  local_20 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  Stream::operator>>(in_stack_00000010,&local_24);
  Stream::operator>>(in_stack_00000010,&local_28);
  Stream::operator>>(in_stack_00000010,&local_2c);
  Stream::operator>>(in_stack_00000010,&local_30);
  Stream::operator>>(in_stack_00000010,&local_3d);
  Stream::operator>>(in_stack_00000010,&local_3e);
  Stream::operator>>(in_stack_00000010,&local_3f);
  Stream::operator>>(in_stack_00000010,&local_34);
  Stream::operator>>(in_stack_00000010,&local_38);
  Stream::operator>>(in_stack_00000010,&local_3c);
  uVar2 = NumberToString(local_24,0);
  MySQL::set_query(local_20,
                   "inSert into log_mercenary(m_id,charac_no,start_time,finish_time,type,period,area,gold,item_id,rarity) values(%s,%u,from_unixtime(%d),from_unixtime(%d),%d,%d,%d,%d,%d,%d)"
                   ,uVar2,local_28,local_2c,local_30,(int)local_3d,(int)local_3e,(int)local_3f,
                   local_34,local_38,local_3c);
  cVar1 = MySQL::exec(local_20,true);
  return cVar1 == '\x01';
}
```
