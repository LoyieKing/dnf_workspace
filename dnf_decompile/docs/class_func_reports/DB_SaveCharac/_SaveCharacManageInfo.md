# _SaveCharacManageInfo

`_ZN13DB_SaveCharac21_SaveCharacManageInfoEP15SIG_SAVE_CHARAC`

`DB_SaveCharac::_SaveCharacManageInfo(SIG_SAVE_CHARAC*)`

| 类 | 地址 |
|---|---|
| `DB_SaveCharac` | `0x0841690e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0841690e  _ZN13DB_SaveCharac21_SaveCharacManageInfoEP15SIG_SAVE_CHARAC
#           DB_SaveCharac::_SaveCharacManageInfo(SIG_SAVE_CHARAC*)
# range [0x0841690e, 0x08416a41]
0841690e +0x000:  push   %ebp
0841690f +0x001:  mov    %esp,%ebp
08416911 +0x003:  push   %ebx
08416912 +0x004:  sub    $0x34,%esp
08416915 +0x007:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0841691a +0x00c:  movl   $0x0,0x8(%esp)
08416922 +0x014:  movl   $0x2,0x4(%esp)
0841692a +0x01c:  mov    %eax,(%esp)
0841692d +0x01f:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08416932 +0x024:  mov    %eax,-0x10(%ebp)
08416935 +0x027:  mov    0xc(%ebp),%eax
08416938 +0x02a:  movzwl 0x108(%eax),%eax
0841693f +0x031:  movzwl %ax,%ebx
08416942 +0x034:  mov    0xc(%ebp),%eax
08416945 +0x037:  movzbl 0x103(%eax),%eax
0841694c +0x03e:  movzbl %al,%ecx
0841694f +0x041:  mov    0xc(%ebp),%eax
08416952 +0x044:  mov    0x104(%eax),%edx
08416958 +0x04a:  mov    0xc(%ebp),%eax
0841695b +0x04d:  mov    (%eax),%eax
0841695d +0x04f:  mov    %ebx,0x14(%esp)
08416961 +0x053:  mov    %ecx,0x10(%esp)
08416965 +0x057:  mov    %edx,0xc(%esp)
08416969 +0x05b:  mov    %eax,0x8(%esp)
0841696d +0x05f:  movl   $"inSert into charac_manage_info(charac_no, tag_charac_no, striker_skill_index, max_equip_level) values(%u,%u,%u,%u)",0x4(%esp)
08416975 +0x067:  mov    -0x10(%ebp),%eax
08416978 +0x06a:  mov    %eax,(%esp)
0841697b +0x06d:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08416980 +0x072:  movl   $0x1,0x4(%esp)
08416988 +0x07a:  mov    -0x10(%ebp),%eax
0841698b +0x07d:  mov    %eax,(%esp)
0841698e +0x080:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08416993 +0x085:  mov    %al,-0x9(%ebp)
08416996 +0x088:  movzbl -0x9(%ebp),%eax
0841699a +0x08c:  xor    $0x1,%eax
0841699d +0x08f:  test   %al,%al
0841699f +0x091:  je     08416a36 <+0x128>
084169a5 +0x097:  mov    -0x10(%ebp),%eax
084169a8 +0x09a:  mov    %eax,(%esp)
084169ab +0x09d:  call   0811b97a <_GLOBAL__I_events+0x1d>  ; global constructors keyed to events+0x1d
084169b0 +0x0a2:  cmp    $0x426,%eax
084169b5 +0x0a7:  sete   %al
084169b8 +0x0aa:  test   %al,%al
084169ba +0x0ac:  je     08416a2f <+0x121>
084169bc +0x0ae:  mov    0xc(%ebp),%eax
084169bf +0x0b1:  mov    (%eax),%ebx
084169c1 +0x0b3:  mov    0xc(%ebp),%eax
084169c4 +0x0b6:  movzwl 0x108(%eax),%eax
084169cb +0x0bd:  movzwl %ax,%ecx
084169ce +0x0c0:  mov    0xc(%ebp),%eax
084169d1 +0x0c3:  movzbl 0x103(%eax),%eax
084169d8 +0x0ca:  movzbl %al,%edx
084169db +0x0cd:  mov    0xc(%ebp),%eax
084169de +0x0d0:  mov    0x104(%eax),%eax
084169e4 +0x0d6:  mov    %ebx,0x14(%esp)
084169e8 +0x0da:  mov    %ecx,0x10(%esp)
084169ec +0x0de:  mov    %edx,0xc(%esp)
084169f0 +0x0e2:  mov    %eax,0x8(%esp)
084169f4 +0x0e6:  movl   $"upDate charac_manage_info set tag_charac_no=%u, striker_skill_index=%u, max_equip_level=%u where charac_no=%u",0x4(%esp)
084169fc +0x0ee:  mov    -0x10(%ebp),%eax
084169ff +0x0f1:  mov    %eax,(%esp)
08416a02 +0x0f4:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08416a07 +0x0f9:  movl   $0x1,0x4(%esp)
08416a0f +0x101:  mov    -0x10(%ebp),%eax
08416a12 +0x104:  mov    %eax,(%esp)
08416a15 +0x107:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08416a1a +0x10c:  mov    %al,-0x9(%ebp)
08416a1d +0x10f:  movzbl -0x9(%ebp),%eax
08416a21 +0x113:  xor    $0x1,%eax
08416a24 +0x116:  test   %al,%al
08416a26 +0x118:  je     08416a36 <+0x128>
08416a28 +0x11a:  mov    $0x0,%eax
08416a2d +0x11f:  jmp    08416a3b <+0x12d>
08416a2f +0x121:  mov    $0x0,%eax
08416a34 +0x126:  jmp    08416a3b <+0x12d>
08416a36 +0x128:  mov    $0x1,%eax
08416a3b +0x12d:  add    $0x34,%esp
08416a3e +0x130:  pop    %ebx
08416a3f +0x131:  pop    %ebp
08416a40 +0x132:  ret
08416a41 +0x133:  nop
```

## 反编译 C

```c
// DB_SaveCharac::_SaveCharacManageInfo @ 0x841690e

/* DB_SaveCharac::_SaveCharacManageInfo(SIG_SAVE_CHARAC*) */

undefined4 __thiscall
DB_SaveCharac::_SaveCharacManageInfo(DB_SaveCharac *this,SIG_SAVE_CHARAC *param_1)

{
  char cVar1;
  MySQL *this_00;
  int iVar2;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  MySQL::set_query(this_00,
                   "inSert into charac_manage_info(charac_no, tag_charac_no, striker_skill_index, max_equip_level) values(%u,%u,%u,%u)"
                   ,*(undefined4 *)param_1,*(undefined4 *)(param_1 + 0x104),
                   (uint)(byte)param_1[0x103],(uint)*(ushort *)(param_1 + 0x108));
  cVar1 = MySQL::exec(this_00,true);
  if (cVar1 != '\x01') {
    iVar2 = MySQL::getDBError(this_00);
    if (iVar2 != 0x426) {
      return 0;
    }
    MySQL::set_query(this_00,
                     "upDate charac_manage_info set tag_charac_no=%u, striker_skill_index=%u, max_equip_level=%u where charac_no=%u"
                     ,*(undefined4 *)(param_1 + 0x104),(uint)(byte)param_1[0x103],
                     (uint)*(ushort *)(param_1 + 0x108),*(undefined4 *)param_1);
    cVar1 = MySQL::exec(this_00,true);
    if (cVar1 != '\x01') {
      return 0;
    }
  }
  return 1;
}
```
