# dispatch

`_ZN20DB_SaveMercenaryData8dispatchEiiP6Stream`

`DB_SaveMercenaryData::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_SaveMercenaryData` | `0x084458c6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084458c6  _ZN20DB_SaveMercenaryData8dispatchEiiP6Stream
#           DB_SaveMercenaryData::dispatch(int, int, Stream*)
# range [0x084458c6, 0x08445aa5]
084458c6 +0x000:  push   %ebp
084458c7 +0x001:  mov    %esp,%ebp
084458c9 +0x003:  push   %edi
084458ca +0x004:  push   %esi
084458cb +0x005:  push   %ebx
084458cc +0x006:  sub    $0x3c,%esp
084458cf +0x009:  mov    0x14(%ebp),%eax
084458d2 +0x00c:  mov    %eax,(%esp)
084458d5 +0x00f:  call   084541de <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6df4>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6df4
084458da +0x014:  mov    %eax,-0x24(%ebp)
084458dd +0x017:  cmpl   $0x0,-0x24(%ebp)
084458e1 +0x01b:  jne    084458ed <+0x27>
084458e3 +0x01d:  mov    $0x0,%eax
084458e8 +0x022:  jmp    08445a9d <+0x1d7>
084458ed +0x027:  mov    -0x24(%ebp),%eax
084458f0 +0x02a:  mov    (%eax),%eax
084458f2 +0x02c:  test   %eax,%eax
084458f4 +0x02e:  jle    08445900 <+0x3a>
084458f6 +0x030:  mov    -0x24(%ebp),%eax
084458f9 +0x033:  mov    (%eax),%eax
084458fb +0x035:  cmp    $0x1e,%eax
084458fe +0x038:  jle    0844590a <+0x44>
08445900 +0x03a:  mov    $0x0,%eax
08445905 +0x03f:  jmp    08445a9d <+0x1d7>
0844590a +0x044:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0844590f +0x049:  movl   $0x0,0x8(%esp)
08445917 +0x051:  movl   $0x2,0x4(%esp)
0844591f +0x059:  mov    %eax,(%esp)
08445922 +0x05c:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08445927 +0x061:  mov    %eax,-0x20(%ebp)
0844592a +0x064:  movl   $0x0,-0x1c(%ebp)
08445931 +0x06b:  jmp    08445a85 <+0x1bf>
08445936 +0x070:  mov    -0x1c(%ebp),%eax
08445939 +0x073:  mov    -0x24(%ebp),%edx
0844593c +0x076:  imul   $0x54,%eax,%eax
0844593f +0x079:  lea    (%edx,%eax,1),%eax
08445942 +0x07c:  add    $0x4,%eax
08445945 +0x07f:  mov    (%eax),%esi
08445947 +0x081:  mov    -0x1c(%ebp),%eax
0844594a +0x084:  mov    -0x24(%ebp),%edx
0844594d +0x087:  imul   $0x54,%eax,%eax
08445950 +0x08a:  lea    (%edx,%eax,1),%eax
08445953 +0x08d:  add    $0x30,%eax
08445956 +0x090:  movzbl 0x5(%eax),%eax
0844595a +0x094:  movsbl %al,%ebx
0844595d +0x097:  mov    -0x1c(%ebp),%eax
08445960 +0x09a:  mov    -0x24(%ebp),%edx
08445963 +0x09d:  imul   $0x54,%eax,%eax
08445966 +0x0a0:  lea    (%edx,%eax,1),%eax
08445969 +0x0a3:  add    $0x30,%eax
0844596c +0x0a6:  movzbl 0x4(%eax),%eax
08445970 +0x0aa:  movsbl %al,%ecx
08445973 +0x0ad:  mov    -0x1c(%ebp),%eax
08445976 +0x0b0:  mov    -0x24(%ebp),%edx
08445979 +0x0b3:  imul   $0x54,%eax,%eax
0844597c +0x0b6:  lea    (%edx,%eax,1),%eax
0844597f +0x0b9:  add    $0x30,%eax
08445982 +0x0bc:  mov    (%eax),%edx
08445984 +0x0be:  mov    -0x1c(%ebp),%eax
08445987 +0x0c1:  mov    -0x24(%ebp),%edi
0844598a +0x0c4:  imul   $0x54,%eax,%eax
0844598d +0x0c7:  lea    (%edi,%eax,1),%eax
08445990 +0x0ca:  add    $0x2c,%eax
08445993 +0x0cd:  mov    (%eax),%eax
08445995 +0x0cf:  mov    %esi,0x18(%esp)
08445999 +0x0d3:  mov    %ebx,0x14(%esp)
0844599d +0x0d7:  mov    %ecx,0x10(%esp)
084459a1 +0x0db:  mov    %edx,0xc(%esp)
084459a5 +0x0df:  mov    %eax,0x8(%esp)
084459a9 +0x0e3:  movl   $"upDate charac_link_bonus set mercenary_start_time=%d,mercenary_finish_time=%d,mercenary_area=%d,mercenary_period=%d where charac_no=%u",0x4(%esp)
084459b1 +0x0eb:  mov    -0x20(%ebp),%eax
084459b4 +0x0ee:  mov    %eax,(%esp)
084459b7 +0x0f1:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084459bc +0x0f6:  movl   $0x1,0x4(%esp)
084459c4 +0x0fe:  mov    -0x20(%ebp),%eax
084459c7 +0x101:  mov    %eax,(%esp)
084459ca +0x104:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084459cf +0x109:  xor    $0x1,%eax
084459d2 +0x10c:  test   %al,%al
084459d4 +0x10e:  je     08445a81 <+0x1bb>
084459da +0x114:  mov    -0x1c(%ebp),%eax
084459dd +0x117:  mov    -0x24(%ebp),%edx
084459e0 +0x11a:  imul   $0x54,%eax,%eax
084459e3 +0x11d:  lea    (%edx,%eax,1),%eax
084459e6 +0x120:  add    $0x4,%eax
084459e9 +0x123:  mov    (%eax),%esi
084459eb +0x125:  mov    -0x1c(%ebp),%eax
084459ee +0x128:  mov    -0x24(%ebp),%edx
084459f1 +0x12b:  imul   $0x54,%eax,%eax
084459f4 +0x12e:  lea    (%edx,%eax,1),%eax
084459f7 +0x131:  add    $0x30,%eax
084459fa +0x134:  movzbl 0x5(%eax),%eax
084459fe +0x138:  movsbl %al,%ebx
08445a01 +0x13b:  mov    -0x1c(%ebp),%eax
08445a04 +0x13e:  mov    -0x24(%ebp),%edx
08445a07 +0x141:  imul   $0x54,%eax,%eax
08445a0a +0x144:  lea    (%edx,%eax,1),%eax
08445a0d +0x147:  add    $0x30,%eax
08445a10 +0x14a:  movzbl 0x4(%eax),%eax
08445a14 +0x14e:  movsbl %al,%ecx
08445a17 +0x151:  mov    -0x1c(%ebp),%eax
08445a1a +0x154:  mov    -0x24(%ebp),%edx
08445a1d +0x157:  imul   $0x54,%eax,%eax
08445a20 +0x15a:  lea    (%edx,%eax,1),%eax
08445a23 +0x15d:  add    $0x30,%eax
08445a26 +0x160:  mov    (%eax),%edx
08445a28 +0x162:  mov    -0x1c(%ebp),%eax
08445a2b +0x165:  mov    -0x24(%ebp),%edi
08445a2e +0x168:  imul   $0x54,%eax,%eax
08445a31 +0x16b:  lea    (%edi,%eax,1),%eax
08445a34 +0x16e:  add    $0x2c,%eax
08445a37 +0x171:  mov    (%eax),%eax
08445a39 +0x173:  mov    %esi,0x18(%esp)
08445a3d +0x177:  mov    %ebx,0x14(%esp)
08445a41 +0x17b:  mov    %ecx,0x10(%esp)
08445a45 +0x17f:  mov    %edx,0xc(%esp)
08445a49 +0x183:  mov    %eax,0x8(%esp)
08445a4d +0x187:  movl   $"inSert into charac_info(mercenary_start_time,mercenary_finish_time,mercenary_area,mercenary_period) values(%d,%d,%d,%d) where charac_no=%u",0x4(%esp)
08445a55 +0x18f:  mov    -0x20(%ebp),%eax
08445a58 +0x192:  mov    %eax,(%esp)
08445a5b +0x195:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08445a60 +0x19a:  movl   $0x1,0x4(%esp)
08445a68 +0x1a2:  mov    -0x20(%ebp),%eax
08445a6b +0x1a5:  mov    %eax,(%esp)
08445a6e +0x1a8:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08445a73 +0x1ad:  xor    $0x1,%eax
08445a76 +0x1b0:  test   %al,%al
08445a78 +0x1b2:  je     08445a81 <+0x1bb>
08445a7a +0x1b4:  mov    $0x0,%eax
08445a7f +0x1b9:  jmp    08445a9d <+0x1d7>
08445a81 +0x1bb:  addl   $0x1,-0x1c(%ebp)
08445a85 +0x1bf:  mov    -0x24(%ebp),%eax
08445a88 +0x1c2:  mov    (%eax),%eax
08445a8a +0x1c4:  cmp    -0x1c(%ebp),%eax
08445a8d +0x1c7:  setg   %al
08445a90 +0x1ca:  test   %al,%al
08445a92 +0x1cc:  jne    08445936 <+0x70>
08445a98 +0x1d2:  mov    $0x1,%eax
08445a9d +0x1d7:  add    $0x3c,%esp
08445aa0 +0x1da:  pop    %ebx
08445aa1 +0x1db:  pop    %esi
08445aa2 +0x1dc:  pop    %edi
08445aa3 +0x1dd:  pop    %ebp
08445aa4 +0x1de:  ret
08445aa5 +0x1df:  nop
```

## 反编译 C

```c
// DB_SaveMercenaryData::dispatch @ 0x84458c6

/* DB_SaveMercenaryData::dispatch(int, int, Stream*) */

undefined4 DB_SaveMercenaryData::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  SIG_MERCENARY_DB_DATA *pSVar2;
  undefined4 uVar3;
  MySQL *this;
  Stream *in_stack_00000010;
  int local_20;
  
  pSVar2 = Stream::GetOutBuffer<SIG_MERCENARY_DB_DATA>(in_stack_00000010);
  if (pSVar2 == (SIG_MERCENARY_DB_DATA *)0x0) {
    uVar3 = 0;
  }
  else if ((*(int *)pSVar2 < 1) || (0x1e < *(int *)pSVar2)) {
    uVar3 = 0;
  }
  else {
    this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
    for (local_20 = 0; local_20 < *(int *)pSVar2; local_20 = local_20 + 1) {
      MySQL::set_query(this,
                       "upDate charac_link_bonus set mercenary_start_time=%d,mercenary_finish_time=%d,mercenary_area=%d,mercenary_period=%d where charac_no=%u"
                       ,*(undefined4 *)(pSVar2 + local_20 * 0x54 + 0x2c),
                       *(undefined4 *)(pSVar2 + local_20 * 0x54 + 0x30),
                       (int)(char)pSVar2[local_20 * 0x54 + 0x34],
                       (int)(char)pSVar2[local_20 * 0x54 + 0x35],
                       *(undefined4 *)(pSVar2 + local_20 * 0x54 + 4));
      cVar1 = MySQL::exec(this,true);
      if (cVar1 != '\x01') {
        MySQL::set_query(this,
                         "inSert into charac_info(mercenary_start_time,mercenary_finish_time,mercenary_area,mercenary_period) values(%d,%d,%d,%d) where charac_no=%u"
                         ,*(undefined4 *)(pSVar2 + local_20 * 0x54 + 0x2c),
                         *(undefined4 *)(pSVar2 + local_20 * 0x54 + 0x30),
                         (int)(char)pSVar2[local_20 * 0x54 + 0x34],
                         (int)(char)pSVar2[local_20 * 0x54 + 0x35],
                         *(undefined4 *)(pSVar2 + local_20 * 0x54 + 4));
        cVar1 = MySQL::exec(this,true);
        if (cVar1 != '\x01') {
          return 0;
        }
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}
```
