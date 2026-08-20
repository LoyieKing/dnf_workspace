# dispatch

`_ZN24DB_UpdatePvPLastPlayTime8dispatchEiiP6Stream`

`DB_UpdatePvPLastPlayTime::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_UpdatePvPLastPlayTime` | `0x084317b2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084317b2  _ZN24DB_UpdatePvPLastPlayTime8dispatchEiiP6Stream
#           DB_UpdatePvPLastPlayTime::dispatch(int, int, Stream*)
# range [0x084317b2, 0x084318c3]
084317b2 +0x000:  push   %ebp
084317b3 +0x001:  mov    %esp,%ebp
084317b5 +0x003:  push   %esi
084317b6 +0x004:  push   %ebx
084317b7 +0x005:  sub    $0x20,%esp
084317ba +0x008:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
084317bf +0x00d:  movl   $0x0,0x8(%esp)
084317c7 +0x015:  movl   $0x10,0x4(%esp)
084317cf +0x01d:  mov    %eax,(%esp)
084317d2 +0x020:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
084317d7 +0x025:  mov    %eax,-0x18(%ebp)
084317da +0x028:  mov    0x14(%ebp),%eax
084317dd +0x02b:  mov    %eax,(%esp)
084317e0 +0x02e:  call   08452e24 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x5a3a>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x5a3a
084317e5 +0x033:  mov    %eax,-0x14(%ebp)
084317e8 +0x036:  movl   $0x0,-0x10(%ebp)
084317ef +0x03d:  jmp    0843189f <+0xed>
084317f4 +0x042:  movl   $0x0,-0xc(%ebp)
084317fb +0x049:  jmp    0843188c <+0xda>
08431800 +0x04e:  mov    -0xc(%ebp),%eax
08431803 +0x051:  mov    -0x10(%ebp),%ebx
08431806 +0x054:  mov    -0x14(%ebp),%ecx
08431809 +0x057:  add    %eax,%eax
0843180b +0x059:  lea    0x0(,%eax,8),%edx
08431812 +0x060:  sub    %eax,%edx
08431814 +0x062:  lea    (%edx,%ebx,1),%eax
08431817 +0x065:  add    $0x8,%eax
0843181a +0x068:  mov    0x8(%ecx,%eax,4),%ebx
0843181e +0x06c:  mov    -0xc(%ebp),%eax
08431821 +0x06f:  mov    -0x10(%ebp),%esi
08431824 +0x072:  mov    -0x14(%ebp),%ecx
08431827 +0x075:  add    %eax,%eax
08431829 +0x077:  lea    0x0(,%eax,8),%edx
08431830 +0x07e:  sub    %eax,%edx
08431832 +0x080:  lea    (%edx,%esi,1),%eax
08431835 +0x083:  add    $0xc,%eax
08431838 +0x086:  mov    0x8(%ecx,%eax,4),%eax
0843183c +0x08a:  movl   $0x0,0x4(%esp)
08431844 +0x092:  mov    %eax,(%esp)
08431847 +0x095:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0843184c +0x09a:  mov    %ebx,0xc(%esp)
08431850 +0x09e:  mov    %eax,0x8(%esp)
08431854 +0x0a2:  movl   $"upDate school_member set last_play_time=NOW()  where m_id=%s and school_id=%d",0x4(%esp)
0843185c +0x0aa:  mov    -0x18(%ebp),%eax
0843185f +0x0ad:  mov    %eax,(%esp)
08431862 +0x0b0:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08431867 +0x0b5:  movl   $0x1,0x4(%esp)
0843186f +0x0bd:  mov    -0x18(%ebp),%eax
08431872 +0x0c0:  mov    %eax,(%esp)
08431875 +0x0c3:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0843187a +0x0c8:  xor    $0x1,%eax
0843187d +0x0cb:  test   %al,%al
0843187f +0x0cd:  je     08431888 <+0xd6>
08431881 +0x0cf:  mov    $0x0,%eax
08431886 +0x0d4:  jmp    084318bc <+0x10a>
08431888 +0x0d6:  addl   $0x1,-0xc(%ebp)
0843188c +0x0da:  cmpl   $0x1,-0xc(%ebp)
08431890 +0x0de:  setle  %al
08431893 +0x0e1:  test   %al,%al
08431895 +0x0e3:  jne    08431800 <+0x4e>
0843189b +0x0e9:  addl   $0x1,-0x10(%ebp)
0843189f +0x0ed:  mov    -0x14(%ebp),%eax
084318a2 +0x0f0:  movzbl 0xf(%eax),%eax
084318a6 +0x0f4:  movzbl %al,%eax
084318a9 +0x0f7:  cmp    -0x10(%ebp),%eax
084318ac +0x0fa:  setg   %al
084318af +0x0fd:  test   %al,%al
084318b1 +0x0ff:  jne    084317f4 <+0x42>
084318b7 +0x105:  mov    $0x1,%eax
084318bc +0x10a:  add    $0x20,%esp
084318bf +0x10d:  pop    %ebx
084318c0 +0x10e:  pop    %esi
084318c1 +0x10f:  pop    %ebp
084318c2 +0x110:  ret
084318c3 +0x111:  nop
```

## 反编译 C

```c
// DB_UpdatePvPLastPlayTime::dispatch @ 0x84317b2

/* DB_UpdatePvPLastPlayTime::dispatch(int, int, Stream*) */

undefined4 DB_UpdatePvPLastPlayTime::dispatch(int param_1,int param_2,Stream *param_3)

{
  undefined4 uVar1;
  char cVar2;
  MySQL *this;
  Packet_PvPResult *pPVar3;
  undefined4 uVar4;
  Stream *in_stack_00000010;
  int local_14;
  int local_10;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,0x10,0);
  pPVar3 = Stream::GetOutBuffer<Packet_PvPResult>(in_stack_00000010);
  local_14 = 0;
  do {
    if ((int)(uint)(byte)pPVar3[0xf] <= local_14) {
      return 1;
    }
    for (local_10 = 0; local_10 < 2; local_10 = local_10 + 1) {
      uVar1 = *(undefined4 *)(pPVar3 + (local_10 * 0xe + local_14 + 8) * 4 + 8);
      uVar4 = NumberToString(*(uint *)(pPVar3 + (local_10 * 0xe + local_14 + 0xc) * 4 + 8),0);
      MySQL::set_query(this,
                       "upDate school_member set last_play_time=NOW()  where m_id=%s and school_id=%d"
                       ,uVar4,uVar1);
      cVar2 = MySQL::exec(this,true);
      if (cVar2 != '\x01') {
        return 0;
      }
    }
    local_14 = local_14 + 1;
  } while( true );
}
```
