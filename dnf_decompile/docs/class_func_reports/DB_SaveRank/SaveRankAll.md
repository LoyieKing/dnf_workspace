# SaveRankAll

`_ZN11DB_SaveRank11SaveRankAllEP13SIG_SAVE_RANK`

`DB_SaveRank::SaveRankAll(SIG_SAVE_RANK*)`

| 类 | 地址 |
|---|---|
| `DB_SaveRank` | `0x08417510` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08417510  _ZN11DB_SaveRank11SaveRankAllEP13SIG_SAVE_RANK
#           DB_SaveRank::SaveRankAll(SIG_SAVE_RANK*)
# range [0x08417510, 0x0841776f]
08417510 +0x000:  push   %ebp
08417511 +0x001:  mov    %esp,%ebp
08417513 +0x003:  push   %edi
08417514 +0x004:  push   %esi
08417515 +0x005:  push   %ebx
08417516 +0x006:  sub    $0x6c,%esp
08417519 +0x009:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0841751e +0x00e:  movl   $0x0,0x8(%esp)
08417526 +0x016:  movl   $0x2,0x4(%esp)
0841752e +0x01e:  mov    %eax,(%esp)
08417531 +0x021:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08417536 +0x026:  mov    %eax,-0x20(%ebp)
08417539 +0x029:  movl   $0x0,-0x1c(%ebp)
08417540 +0x030:  jmp    0841774e <+0x23e>
08417545 +0x035:  mov    -0x1c(%ebp),%edx
08417548 +0x038:  mov    0xc(%ebp),%ecx
0841754b +0x03b:  mov    %edx,%eax
0841754d +0x03d:  shl    $0x2,%eax
08417550 +0x040:  add    %edx,%eax
08417552 +0x042:  shl    $0x4,%eax
08417555 +0x045:  lea    (%ecx,%eax,1),%eax
08417558 +0x048:  add    $0x40,%eax
0841755b +0x04b:  movzwl 0x10(%eax),%eax
0841755f +0x04f:  movzwl %ax,%eax
08417562 +0x052:  mov    %eax,-0x3c(%ebp)
08417565 +0x055:  mov    -0x1c(%ebp),%edx
08417568 +0x058:  mov    0xc(%ebp),%ecx
0841756b +0x05b:  mov    %edx,%eax
0841756d +0x05d:  shl    $0x2,%eax
08417570 +0x060:  add    %edx,%eax
08417572 +0x062:  shl    $0x4,%eax
08417575 +0x065:  lea    (%ecx,%eax,1),%eax
08417578 +0x068:  add    $0x40,%eax
0841757b +0x06b:  mov    0xc(%eax),%eax
0841757e +0x06e:  mov    %eax,-0x38(%ebp)
08417581 +0x071:  mov    -0x1c(%ebp),%edx
08417584 +0x074:  mov    0xc(%ebp),%ecx
08417587 +0x077:  mov    %edx,%eax
08417589 +0x079:  shl    $0x2,%eax
0841758c +0x07c:  add    %edx,%eax
0841758e +0x07e:  shl    $0x4,%eax
08417591 +0x081:  lea    (%ecx,%eax,1),%eax
08417594 +0x084:  add    $0x40,%eax
08417597 +0x087:  movzwl 0xa(%eax),%eax
0841759b +0x08b:  movzwl %ax,%edi
0841759e +0x08e:  mov    -0x1c(%ebp),%edx
084175a1 +0x091:  mov    0xc(%ebp),%ecx
084175a4 +0x094:  mov    %edx,%eax
084175a6 +0x096:  shl    $0x2,%eax
084175a9 +0x099:  add    %edx,%eax
084175ab +0x09b:  shl    $0x4,%eax
084175ae +0x09e:  lea    (%ecx,%eax,1),%eax
084175b1 +0x0a1:  add    $0x40,%eax
084175b4 +0x0a4:  movzwl 0x8(%eax),%eax
084175b8 +0x0a8:  movzwl %ax,%esi
084175bb +0x0ab:  mov    -0x1c(%ebp),%edx
084175be +0x0ae:  mov    0xc(%ebp),%ecx
084175c1 +0x0b1:  mov    %edx,%eax
084175c3 +0x0b3:  shl    $0x2,%eax
084175c6 +0x0b6:  add    %edx,%eax
084175c8 +0x0b8:  shl    $0x4,%eax
084175cb +0x0bb:  lea    (%ecx,%eax,1),%eax
084175ce +0x0be:  add    $0x10,%eax
084175d1 +0x0c1:  movzbl (%eax),%eax
084175d4 +0x0c4:  movzbl %al,%ebx
084175d7 +0x0c7:  mov    -0x1c(%ebp),%edx
084175da +0x0ca:  mov    0xc(%ebp),%ecx
084175dd +0x0cd:  mov    %edx,%eax
084175df +0x0cf:  shl    $0x2,%eax
084175e2 +0x0d2:  add    %edx,%eax
084175e4 +0x0d4:  shl    $0x4,%eax
084175e7 +0x0d7:  mov    0xc(%eax,%ecx,1),%edx
084175eb +0x0db:  mov    0xc(%ebp),%eax
084175ee +0x0de:  mov    (%eax),%eax
084175f0 +0x0e0:  mov    -0x3c(%ebp),%ecx
084175f3 +0x0e3:  mov    %ecx,0x20(%esp)
084175f7 +0x0e7:  mov    -0x38(%ebp),%ecx
084175fa +0x0ea:  mov    %ecx,0x1c(%esp)
084175fe +0x0ee:  mov    %edi,0x18(%esp)
08417602 +0x0f2:  mov    %esi,0x14(%esp)
08417606 +0x0f6:  mov    %ebx,0x10(%esp)
0841760a +0x0fa:  mov    %edx,0xc(%esp)
0841760e +0x0fe:  mov    %eax,0x8(%esp)
08417612 +0x102:  movl   $"inSert into charac_best_record (charac_no,dungeon_no,difficulty,style,technic,attacked,rank) values(%d,%d,%d,%d,%d,%d,%d)",0x4(%esp)
0841761a +0x10a:  mov    -0x20(%ebp),%eax
0841761d +0x10d:  mov    %eax,(%esp)
08417620 +0x110:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08417625 +0x115:  movl   $0x1,0x4(%esp)
0841762d +0x11d:  mov    -0x20(%ebp),%eax
08417630 +0x120:  mov    %eax,(%esp)
08417633 +0x123:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08417638 +0x128:  xor    $0x1,%eax
0841763b +0x12b:  test   %al,%al
0841763d +0x12d:  je     0841774a <+0x23a>
08417643 +0x133:  mov    -0x1c(%ebp),%edx
08417646 +0x136:  mov    0xc(%ebp),%ecx
08417649 +0x139:  mov    %edx,%eax
0841764b +0x13b:  shl    $0x2,%eax
0841764e +0x13e:  add    %edx,%eax
08417650 +0x140:  shl    $0x4,%eax
08417653 +0x143:  lea    (%ecx,%eax,1),%eax
08417656 +0x146:  add    $0x10,%eax
08417659 +0x149:  movzbl (%eax),%eax
0841765c +0x14c:  movzbl %al,%eax
0841765f +0x14f:  mov    %eax,-0x34(%ebp)
08417662 +0x152:  mov    -0x1c(%ebp),%edx
08417665 +0x155:  mov    0xc(%ebp),%ecx
08417668 +0x158:  mov    %edx,%eax
0841766a +0x15a:  shl    $0x2,%eax
0841766d +0x15d:  add    %edx,%eax
0841766f +0x15f:  shl    $0x4,%eax
08417672 +0x162:  mov    0xc(%eax,%ecx,1),%eax
08417676 +0x166:  mov    %eax,-0x30(%ebp)
08417679 +0x169:  mov    0xc(%ebp),%eax
0841767c +0x16c:  mov    (%eax),%eax
0841767e +0x16e:  mov    %eax,-0x2c(%ebp)
08417681 +0x171:  mov    -0x1c(%ebp),%edx
08417684 +0x174:  mov    0xc(%ebp),%ecx
08417687 +0x177:  mov    %edx,%eax
08417689 +0x179:  shl    $0x2,%eax
0841768c +0x17c:  add    %edx,%eax
0841768e +0x17e:  shl    $0x4,%eax
08417691 +0x181:  lea    (%ecx,%eax,1),%eax
08417694 +0x184:  add    $0x40,%eax
08417697 +0x187:  movzwl 0x10(%eax),%eax
0841769b +0x18b:  movzwl %ax,%edi
0841769e +0x18e:  mov    -0x1c(%ebp),%edx
084176a1 +0x191:  mov    0xc(%ebp),%ecx
084176a4 +0x194:  mov    %edx,%eax
084176a6 +0x196:  shl    $0x2,%eax
084176a9 +0x199:  add    %edx,%eax
084176ab +0x19b:  shl    $0x4,%eax
084176ae +0x19e:  lea    (%ecx,%eax,1),%eax
084176b1 +0x1a1:  add    $0x40,%eax
084176b4 +0x1a4:  mov    0xc(%eax),%esi
084176b7 +0x1a7:  mov    -0x1c(%ebp),%edx
084176ba +0x1aa:  mov    0xc(%ebp),%ecx
084176bd +0x1ad:  mov    %edx,%eax
084176bf +0x1af:  shl    $0x2,%eax
084176c2 +0x1b2:  add    %edx,%eax
084176c4 +0x1b4:  shl    $0x4,%eax
084176c7 +0x1b7:  lea    (%ecx,%eax,1),%eax
084176ca +0x1ba:  add    $0x40,%eax
084176cd +0x1bd:  movzwl 0xa(%eax),%eax
084176d1 +0x1c1:  movzwl %ax,%ebx
084176d4 +0x1c4:  mov    -0x1c(%ebp),%edx
084176d7 +0x1c7:  mov    0xc(%ebp),%ecx
084176da +0x1ca:  mov    %edx,%eax
084176dc +0x1cc:  shl    $0x2,%eax
084176df +0x1cf:  add    %edx,%eax
084176e1 +0x1d1:  shl    $0x4,%eax
084176e4 +0x1d4:  lea    (%ecx,%eax,1),%eax
084176e7 +0x1d7:  add    $0x40,%eax
084176ea +0x1da:  movzwl 0x8(%eax),%eax
084176ee +0x1de:  movzwl %ax,%eax
084176f1 +0x1e1:  mov    -0x34(%ebp),%edx
084176f4 +0x1e4:  mov    %edx,0x20(%esp)
084176f8 +0x1e8:  mov    -0x30(%ebp),%ecx
084176fb +0x1eb:  mov    %ecx,0x1c(%esp)
084176ff +0x1ef:  mov    -0x2c(%ebp),%edx
08417702 +0x1f2:  mov    %edx,0x18(%esp)
08417706 +0x1f6:  mov    %edi,0x14(%esp)
0841770a +0x1fa:  mov    %esi,0x10(%esp)
0841770e +0x1fe:  mov    %ebx,0xc(%esp)
08417712 +0x202:  mov    %eax,0x8(%esp)
08417716 +0x206:  movl   $"upDate charac_best_record set style=%d, technic=%d ,attacked=%d, rank=%d where charac_no=%d and dungeon_no=%d and difficulty=%d",0x4(%esp)
0841771e +0x20e:  mov    -0x20(%ebp),%eax
08417721 +0x211:  mov    %eax,(%esp)
08417724 +0x214:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08417729 +0x219:  movl   $0x1,0x4(%esp)
08417731 +0x221:  mov    -0x20(%ebp),%eax
08417734 +0x224:  mov    %eax,(%esp)
08417737 +0x227:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0841773c +0x22c:  xor    $0x1,%eax
0841773f +0x22f:  test   %al,%al
08417741 +0x231:  je     0841774a <+0x23a>
08417743 +0x233:  mov    $0x0,%eax
08417748 +0x238:  jmp    08417767 <+0x257>
0841774a +0x23a:  addl   $0x1,-0x1c(%ebp)
0841774e +0x23e:  mov    0xc(%ebp),%eax
08417751 +0x241:  mov    0x4(%eax),%eax
08417754 +0x244:  cmp    -0x1c(%ebp),%eax
08417757 +0x247:  setg   %al
0841775a +0x24a:  test   %al,%al
0841775c +0x24c:  jne    08417545 <+0x35>
08417762 +0x252:  mov    $0x1,%eax
08417767 +0x257:  add    $0x6c,%esp
0841776a +0x25a:  pop    %ebx
0841776b +0x25b:  pop    %esi
0841776c +0x25c:  pop    %edi
0841776d +0x25d:  pop    %ebp
0841776e +0x25e:  ret
0841776f +0x25f:  nop
```

## 反编译 C

```c
// DB_SaveRank::SaveRankAll @ 0x8417510

/* DB_SaveRank::SaveRankAll(SIG_SAVE_RANK*) */

undefined4 __thiscall DB_SaveRank::SaveRankAll(DB_SaveRank *this,SIG_SAVE_RANK *param_1)

{
  char cVar1;
  MySQL *this_00;
  int local_20;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  local_20 = 0;
  do {
    if (*(int *)(param_1 + 4) <= local_20) {
      return 1;
    }
    MySQL::set_query(this_00,
                     "inSert into charac_best_record (charac_no,dungeon_no,difficulty,style,technic,attacked,rank) values(%d,%d,%d,%d,%d,%d,%d)"
                     ,*(undefined4 *)param_1,*(undefined4 *)(param_1 + local_20 * 0x50 + 0xc),
                     (uint)(byte)param_1[local_20 * 0x50 + 0x10],
                     (uint)*(ushort *)(param_1 + local_20 * 0x50 + 0x48),
                     (uint)*(ushort *)(param_1 + local_20 * 0x50 + 0x4a),
                     *(undefined4 *)(param_1 + local_20 * 0x50 + 0x4c),
                     (uint)*(ushort *)(param_1 + local_20 * 0x50 + 0x50));
    cVar1 = MySQL::exec(this_00,true);
    if (cVar1 != '\x01') {
      MySQL::set_query(this_00,
                       "upDate charac_best_record set style=%d, technic=%d ,attacked=%d, rank=%d where charac_no=%d and dungeon_no=%d and difficulty=%d"
                       ,(uint)*(ushort *)(param_1 + local_20 * 0x50 + 0x48),
                       (uint)*(ushort *)(param_1 + local_20 * 0x50 + 0x4a),
                       *(undefined4 *)(param_1 + local_20 * 0x50 + 0x4c),
                       (uint)*(ushort *)(param_1 + local_20 * 0x50 + 0x50),*(undefined4 *)param_1,
                       *(undefined4 *)(param_1 + local_20 * 0x50 + 0xc),
                       (uint)(byte)param_1[local_20 * 0x50 + 0x10]);
      cVar1 = MySQL::exec(this_00,true);
      if (cVar1 != '\x01') {
        return 0;
      }
    }
    local_20 = local_20 + 1;
  } while( true );
}
```
