# UpdateGrowType

`_ZN17DB_UpdateGrowType14UpdateGrowTypeEP19SIG_UPDATE_GROWTYPE`

`DB_UpdateGrowType::UpdateGrowType(SIG_UPDATE_GROWTYPE*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateGrowType` | `0x084181ea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084181ea  _ZN17DB_UpdateGrowType14UpdateGrowTypeEP19SIG_UPDATE_GROWTYPE
#           DB_UpdateGrowType::UpdateGrowType(SIG_UPDATE_GROWTYPE*)
# range [0x084181ea, 0x08418269]
084181ea +0x00:  push   %ebp
084181eb +0x01:  mov    %esp,%ebp
084181ed +0x03:  sub    $0x28,%esp
084181f0 +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
084181f5 +0x0b:  movl   $0x0,0x8(%esp)
084181fd +0x13:  movl   $0x2,0x4(%esp)
08418205 +0x1b:  mov    %eax,(%esp)
08418208 +0x1e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0841820d +0x23:  mov    %eax,-0xc(%ebp)
08418210 +0x26:  mov    0xc(%ebp),%eax
08418213 +0x29:  mov    (%eax),%edx
08418215 +0x2b:  mov    0xc(%ebp),%eax
08418218 +0x2e:  movzbl 0x4(%eax),%eax
0841821c +0x32:  movsbl %al,%eax
0841821f +0x35:  mov    %edx,0xc(%esp)
08418223 +0x39:  mov    %eax,0x8(%esp)
08418227 +0x3d:  movl   $"upDate charac_info set grow_type=%d where charac_no=%u",0x4(%esp)
0841822f +0x45:  mov    -0xc(%ebp),%eax
08418232 +0x48:  mov    %eax,(%esp)
08418235 +0x4b:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0841823a +0x50:  movl   $0x1,0x4(%esp)
08418242 +0x58:  mov    -0xc(%ebp),%eax
08418245 +0x5b:  mov    %eax,(%esp)
08418248 +0x5e:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0841824d +0x63:  mov    %al,-0xd(%ebp)
08418250 +0x66:  movzbl -0xd(%ebp),%eax
08418254 +0x6a:  xor    $0x1,%eax
08418257 +0x6d:  test   %al,%al
08418259 +0x6f:  je     08418262 <+0x78>
0841825b +0x71:  mov    $0x0,%eax
08418260 +0x76:  jmp    08418267 <+0x7d>
08418262 +0x78:  mov    $0x1,%eax
08418267 +0x7d:  leave
08418268 +0x7e:  ret
08418269 +0x7f:  nop
```

## 反编译 C

```c
// DB_UpdateGrowType::UpdateGrowType @ 0x84181ea

/* DB_UpdateGrowType::UpdateGrowType(SIG_UPDATE_GROWTYPE*) */

bool __thiscall
DB_UpdateGrowType::UpdateGrowType(DB_UpdateGrowType *this,SIG_UPDATE_GROWTYPE *param_1)

{
  char cVar1;
  MySQL *this_00;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  MySQL::set_query(this_00,"upDate charac_info set grow_type=%d where charac_no=%u",
                   (int)(char)param_1[4],*(undefined4 *)param_1);
  cVar1 = MySQL::exec(this_00,true);
  return cVar1 == '\x01';
}
```
