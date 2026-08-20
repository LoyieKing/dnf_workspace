# dispatch

`_ZN30DB_SaveCerashopAddRestrictType8dispatchEiiP6Stream`

`DB_SaveCerashopAddRestrictType::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_SaveCerashopAddRestrictType` | `0x080e14f6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080e14f6  _ZN30DB_SaveCerashopAddRestrictType8dispatchEiiP6Stream
#           DB_SaveCerashopAddRestrictType::dispatch(int, int, Stream*)
# range [0x080e14f6, 0x080e17b9]
080e14f6 +0x000:  push   %ebp
080e14f7 +0x001:  mov    %esp,%ebp
080e14f9 +0x003:  push   %esi
080e14fa +0x004:  push   %ebx
080e14fb +0x005:  sub    $0x50,%esp
080e14fe +0x008:  movl   $0x0,-0x14(%ebp)
080e1505 +0x00f:  movl   $0x0,-0x18(%ebp)
080e150c +0x016:  movl   $0x0,-0x1c(%ebp)
080e1513 +0x01d:  movl   $0x0,-0x20(%ebp)
080e151a +0x024:  movl   $0x0,-0x24(%ebp)
080e1521 +0x02b:  lea    -0x14(%ebp),%eax
080e1524 +0x02e:  mov    %eax,0x4(%esp)
080e1528 +0x032:  mov    0x14(%ebp),%eax
080e152b +0x035:  mov    %eax,(%esp)
080e152e +0x038:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
080e1533 +0x03d:  lea    -0x18(%ebp),%eax
080e1536 +0x040:  mov    %eax,0x4(%esp)
080e153a +0x044:  mov    0x14(%ebp),%eax
080e153d +0x047:  mov    %eax,(%esp)
080e1540 +0x04a:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
080e1545 +0x04f:  lea    -0x1c(%ebp),%eax
080e1548 +0x052:  mov    %eax,0x4(%esp)
080e154c +0x056:  mov    0x14(%ebp),%eax
080e154f +0x059:  mov    %eax,(%esp)
080e1552 +0x05c:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
080e1557 +0x061:  lea    -0x20(%ebp),%eax
080e155a +0x064:  mov    %eax,0x4(%esp)
080e155e +0x068:  mov    0x14(%ebp),%eax
080e1561 +0x06b:  mov    %eax,(%esp)
080e1564 +0x06e:  call   0861c636 <_ZN6StreamrsERl>  ; Stream::operator>>(long&)
080e1569 +0x073:  lea    -0x24(%ebp),%eax
080e156c +0x076:  mov    %eax,0x4(%esp)
080e1570 +0x07a:  mov    0x14(%ebp),%eax
080e1573 +0x07d:  mov    %eax,(%esp)
080e1576 +0x080:  call   0861c636 <_ZN6StreamrsERl>  ; Stream::operator>>(long&)
080e157b +0x085:  mov    -0x14(%ebp),%eax
080e157e +0x088:  test   %eax,%eax
080e1580 +0x08a:  je     080e1590 <+0x9a>
080e1582 +0x08c:  cmp    $0x1,%eax
080e1585 +0x08f:  je     080e16a4 <+0x1ae>
080e158b +0x095:  jmp    080e17ae <+0x2b8>
080e1590 +0x09a:  movl   $0x0,-0x28(%ebp)
080e1597 +0x0a1:  lea    -0x28(%ebp),%eax
080e159a +0x0a4:  mov    %eax,0x4(%esp)
080e159e +0x0a8:  mov    0x14(%ebp),%eax
080e15a1 +0x0ab:  mov    %eax,(%esp)
080e15a4 +0x0ae:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
080e15a9 +0x0b3:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
080e15ae +0x0b8:  movl   $0x0,0x8(%esp)
080e15b6 +0x0c0:  movl   $0x1,0x4(%esp)
080e15be +0x0c8:  mov    %eax,(%esp)
080e15c1 +0x0cb:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
080e15c6 +0x0d0:  mov    %eax,-0x10(%ebp)
080e15c9 +0x0d3:  cmpl   $0x0,-0x10(%ebp)
080e15cd +0x0d7:  jne    080e15d9 <+0xe3>
080e15cf +0x0d9:  mov    $0x0,%eax
080e15d4 +0x0de:  jmp    080e17b3 <+0x2bd>
080e15d9 +0x0e3:  mov    -0x18(%ebp),%ebx
080e15dc +0x0e6:  mov    -0x28(%ebp),%ecx
080e15df +0x0e9:  mov    -0x20(%ebp),%edx
080e15e2 +0x0ec:  mov    -0x1c(%ebp),%eax
080e15e5 +0x0ef:  mov    %ebx,0x14(%esp)
080e15e9 +0x0f3:  mov    %ecx,0x10(%esp)
080e15ed +0x0f7:  mov    %edx,0xc(%esp)
080e15f1 +0x0fb:  mov    %eax,0x8(%esp)
080e15f5 +0x0ff:  movl   $"upDate account_cerashop_restrict set count=%u, next_date=%d, last_access_date=UNIX_TIMESTAMP() where m_id = %u and ipg_no=%u",0x4(%esp)
080e15fd +0x107:  mov    -0x10(%ebp),%eax
080e1600 +0x10a:  mov    %eax,(%esp)
080e1603 +0x10d:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
080e1608 +0x112:  movl   $0x1,0x4(%esp)
080e1610 +0x11a:  mov    -0x10(%ebp),%eax
080e1613 +0x11d:  mov    %eax,(%esp)
080e1616 +0x120:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
080e161b +0x125:  xor    $0x1,%eax
080e161e +0x128:  test   %al,%al
080e1620 +0x12a:  je     080e162c <+0x136>
080e1622 +0x12c:  mov    $0x0,%eax
080e1627 +0x131:  jmp    080e17b3 <+0x2bd>
080e162c +0x136:  mov    -0x10(%ebp),%eax
080e162f +0x139:  mov    %eax,(%esp)
080e1632 +0x13c:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
080e1637 +0x141:  or     %edx,%eax
080e1639 +0x143:  test   %eax,%eax
080e163b +0x145:  sete   %al
080e163e +0x148:  test   %al,%al
080e1640 +0x14a:  je     080e17aa <+0x2b4>
080e1646 +0x150:  mov    -0x24(%ebp),%esi
080e1649 +0x153:  mov    -0x20(%ebp),%ebx
080e164c +0x156:  mov    -0x1c(%ebp),%ecx
080e164f +0x159:  mov    -0x18(%ebp),%edx
080e1652 +0x15c:  mov    -0x28(%ebp),%eax
080e1655 +0x15f:  mov    %esi,0x18(%esp)
080e1659 +0x163:  mov    %ebx,0x14(%esp)
080e165d +0x167:  mov    %ecx,0x10(%esp)
080e1661 +0x16b:  mov    %edx,0xc(%esp)
080e1665 +0x16f:  mov    %eax,0x8(%esp)
080e1669 +0x173:  movl   $"inSert into account_cerashop_restrict(m_id, ipg_no, count, next_date, end_date, last_access_date) values(%u, %u, %u, %d, %d, UNIX_TIMESTAMP())",0x4(%esp)
080e1671 +0x17b:  mov    -0x10(%ebp),%eax
080e1674 +0x17e:  mov    %eax,(%esp)
080e1677 +0x181:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
080e167c +0x186:  movl   $0x1,0x4(%esp)
080e1684 +0x18e:  mov    -0x10(%ebp),%eax
080e1687 +0x191:  mov    %eax,(%esp)
080e168a +0x194:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
080e168f +0x199:  xor    $0x1,%eax
080e1692 +0x19c:  test   %al,%al
080e1694 +0x19e:  je     080e17ad <+0x2b7>
080e169a +0x1a4:  mov    $0x0,%eax
080e169f +0x1a9:  jmp    080e17b3 <+0x2bd>
080e16a4 +0x1ae:  movl   $0x0,-0x2c(%ebp)
080e16ab +0x1b5:  lea    -0x2c(%ebp),%eax
080e16ae +0x1b8:  mov    %eax,0x4(%esp)
080e16b2 +0x1bc:  mov    0x14(%ebp),%eax
080e16b5 +0x1bf:  mov    %eax,(%esp)
080e16b8 +0x1c2:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
080e16bd +0x1c7:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
080e16c2 +0x1cc:  movl   $0x0,0x8(%esp)
080e16ca +0x1d4:  movl   $0x2,0x4(%esp)
080e16d2 +0x1dc:  mov    %eax,(%esp)
080e16d5 +0x1df:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
080e16da +0x1e4:  mov    %eax,-0xc(%ebp)
080e16dd +0x1e7:  cmpl   $0x0,-0xc(%ebp)
080e16e1 +0x1eb:  jne    080e16ed <+0x1f7>
080e16e3 +0x1ed:  mov    $0x0,%eax
080e16e8 +0x1f2:  jmp    080e17b3 <+0x2bd>
080e16ed +0x1f7:  mov    -0x18(%ebp),%ebx
080e16f0 +0x1fa:  mov    -0x2c(%ebp),%ecx
080e16f3 +0x1fd:  mov    -0x20(%ebp),%edx
080e16f6 +0x200:  mov    -0x1c(%ebp),%eax
080e16f9 +0x203:  mov    %ebx,0x14(%esp)
080e16fd +0x207:  mov    %ecx,0x10(%esp)
080e1701 +0x20b:  mov    %edx,0xc(%esp)
080e1705 +0x20f:  mov    %eax,0x8(%esp)
080e1709 +0x213:  movl   $"upDate charac_cerashop_restrict set count=%u, next_date=%d, last_access_date=UNIX_TIMESTAMP() where charac_no = %u and ipg_no=%u",0x4(%esp)
080e1711 +0x21b:  mov    -0xc(%ebp),%eax
080e1714 +0x21e:  mov    %eax,(%esp)
080e1717 +0x221:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
080e171c +0x226:  movl   $0x1,0x4(%esp)
080e1724 +0x22e:  mov    -0xc(%ebp),%eax
080e1727 +0x231:  mov    %eax,(%esp)
080e172a +0x234:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
080e172f +0x239:  xor    $0x1,%eax
080e1732 +0x23c:  test   %al,%al
080e1734 +0x23e:  je     080e173d <+0x247>
080e1736 +0x240:  mov    $0x0,%eax
080e173b +0x245:  jmp    080e17b3 <+0x2bd>
080e173d +0x247:  mov    -0xc(%ebp),%eax
080e1740 +0x24a:  mov    %eax,(%esp)
080e1743 +0x24d:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
080e1748 +0x252:  or     %edx,%eax
080e174a +0x254:  test   %eax,%eax
080e174c +0x256:  sete   %al
080e174f +0x259:  test   %al,%al
080e1751 +0x25b:  je     080e17ae <+0x2b8>
080e1753 +0x25d:  mov    -0x24(%ebp),%esi
080e1756 +0x260:  mov    -0x20(%ebp),%ebx
080e1759 +0x263:  mov    -0x1c(%ebp),%ecx
080e175c +0x266:  mov    -0x18(%ebp),%edx
080e175f +0x269:  mov    -0x2c(%ebp),%eax
080e1762 +0x26c:  mov    %esi,0x18(%esp)
080e1766 +0x270:  mov    %ebx,0x14(%esp)
080e176a +0x274:  mov    %ecx,0x10(%esp)
080e176e +0x278:  mov    %edx,0xc(%esp)
080e1772 +0x27c:  mov    %eax,0x8(%esp)
080e1776 +0x280:  movl   $"inSert into charac_cerashop_restrict(charac_no, ipg_no, count, next_date, end_date, last_access_date) values(%u, %u, %u, %d, %d, UNIX_TIMESTAMP())",0x4(%esp)
080e177e +0x288:  mov    -0xc(%ebp),%eax
080e1781 +0x28b:  mov    %eax,(%esp)
080e1784 +0x28e:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
080e1789 +0x293:  movl   $0x1,0x4(%esp)
080e1791 +0x29b:  mov    -0xc(%ebp),%eax
080e1794 +0x29e:  mov    %eax,(%esp)
080e1797 +0x2a1:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
080e179c +0x2a6:  xor    $0x1,%eax
080e179f +0x2a9:  test   %al,%al
080e17a1 +0x2ab:  je     080e17ae <+0x2b8>
080e17a3 +0x2ad:  mov    $0x0,%eax
080e17a8 +0x2b2:  jmp    080e17b3 <+0x2bd>
080e17aa +0x2b4:  nop
080e17ab +0x2b5:  jmp    080e17ae <+0x2b8>
080e17ad +0x2b7:  nop
080e17ae +0x2b8:  mov    $0x1,%eax
080e17b3 +0x2bd:  add    $0x50,%esp
080e17b6 +0x2c0:  pop    %ebx
080e17b7 +0x2c1:  pop    %esi
080e17b8 +0x2c2:  pop    %ebp
080e17b9 +0x2c3:  ret
```

## 反编译 C

```c
// DB_SaveCerashopAddRestrictType::dispatch @ 0x80e14f6

/* DB_SaveCerashopAddRestrictType::dispatch(int, int, Stream*) */

undefined4 DB_SaveCerashopAddRestrictType::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  longlong lVar2;
  Stream *in_stack_00000010;
  uint local_30;
  uint local_2c;
  long local_28;
  long local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  MySQL *local_14;
  MySQL *local_10;
  
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  Stream::operator>>(in_stack_00000010,&local_18);
  Stream::operator>>(in_stack_00000010,&local_1c);
  Stream::operator>>(in_stack_00000010,&local_20);
  Stream::operator>>(in_stack_00000010,&local_24);
  Stream::operator>>(in_stack_00000010,&local_28);
  if (local_18 == 0) {
    local_2c = 0;
    Stream::operator>>(in_stack_00000010,&local_2c);
    local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
    if (local_14 == (MySQL *)0x0) {
      return 0;
    }
    MySQL::set_query(local_14,
                     "upDate account_cerashop_restrict set count=%u, next_date=%d, last_access_date=UNIX_TIMESTAMP() where m_id = %u and ipg_no=%u"
                     ,local_20,local_24,local_2c,local_1c);
    cVar1 = MySQL::exec(local_14,true);
    if (cVar1 != '\x01') {
      return 0;
    }
    lVar2 = MySQL::getAffectedRowCount(local_14);
    if (lVar2 == 0) {
      MySQL::set_query(local_14,
                       "inSert into account_cerashop_restrict(m_id, ipg_no, count, next_date, end_date, last_access_date) values(%u, %u, %u, %d, %d, UNIX_TIMESTAMP())"
                       ,local_2c,local_1c,local_20,local_24,local_28);
      cVar1 = MySQL::exec(local_14,true);
      if (cVar1 != '\x01') {
        return 0;
      }
    }
  }
  else if (local_18 == 1) {
    local_30 = 0;
    Stream::operator>>(in_stack_00000010,&local_30);
    local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
    if (local_10 == (MySQL *)0x0) {
      return 0;
    }
    MySQL::set_query(local_10,
                     "upDate charac_cerashop_restrict set count=%u, next_date=%d, last_access_date=UNIX_TIMESTAMP() where charac_no = %u and ipg_no=%u"
                     ,local_20,local_24,local_30,local_1c);
    cVar1 = MySQL::exec(local_10,true);
    if (cVar1 != '\x01') {
      return 0;
    }
    lVar2 = MySQL::getAffectedRowCount(local_10);
    if (lVar2 == 0) {
      MySQL::set_query(local_10,
                       "inSert into charac_cerashop_restrict(charac_no, ipg_no, count, next_date, end_date, last_access_date) values(%u, %u, %u, %d, %d, UNIX_TIMESTAMP())"
                       ,local_30,local_1c,local_20,local_24,local_28);
      cVar1 = MySQL::exec(local_10,true);
      if (cVar1 != '\x01') {
        return 0;
      }
    }
  }
  return 1;
}
```
