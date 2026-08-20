# ProcessInitLethe

`_ZN25DB_UpdateOneDayLetheSkill16ProcessInitLetheEP35SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD`

`DB_UpdateOneDayLetheSkill::ProcessInitLethe(SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateOneDayLetheSkill` | `0x0843410c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843410c  _ZN25DB_UpdateOneDayLetheSkill16ProcessInitLetheEP35SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD
#           DB_UpdateOneDayLetheSkill::ProcessInitLethe(SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD*)
# range [0x0843410c, 0x084341fb]
0843410c +0x00:  push   %ebp
0843410d +0x01:  mov    %esp,%ebp
0843410f +0x03:  push   %esi
08434110 +0x04:  push   %ebx
08434111 +0x05:  sub    $0x30,%esp
08434114 +0x08:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08434119 +0x0d:  movl   $0x0,0x8(%esp)
08434121 +0x15:  movl   $0x3,0x4(%esp)
08434129 +0x1d:  mov    %eax,(%esp)
0843412c +0x20:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08434131 +0x25:  mov    %eax,-0xc(%ebp)
08434134 +0x28:  mov    0xc(%ebp),%eax
08434137 +0x2b:  movzbl 0x1a6(%eax),%eax
0843413e +0x32:  cmp    $0xff,%al
08434140 +0x34:  je     08434150 <+0x44>
08434142 +0x36:  mov    0xc(%ebp),%eax
08434145 +0x39:  movzbl 0x1a6(%eax),%eax
0843414c +0x40:  test   %al,%al
0843414e +0x42:  jne    08434190 <+0x84>
08434150 +0x44:  mov    0xc(%ebp),%eax
08434153 +0x47:  mov    0x4(%eax),%esi
08434156 +0x4a:  mov    0xc(%ebp),%eax
08434159 +0x4d:  movzbl 0x1a5(%eax),%eax
08434160 +0x54:  movzbl %al,%ebx
08434163 +0x57:  movl   $0x0,(%esp)
0843416a +0x5e:  call   083fbdc6 <_Z20get_skill_table_nameb>  ; get_skill_table_name(bool)
0843416f +0x63:  mov    %esi,0x10(%esp)
08434173 +0x67:  mov    %ebx,0xc(%esp)
08434177 +0x6b:  mov    %eax,0x8(%esp)
0843417b +0x6f:  movl   $"upDate %s set lethe_flag=%u where charac_no=%u",0x4(%esp)
08434183 +0x77:  mov    -0xc(%ebp),%eax
08434186 +0x7a:  mov    %eax,(%esp)
08434189 +0x7d:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0843418e +0x82:  jmp    084341ce <+0xc2>
08434190 +0x84:  mov    0xc(%ebp),%eax
08434193 +0x87:  mov    0x4(%eax),%esi
08434196 +0x8a:  mov    0xc(%ebp),%eax
08434199 +0x8d:  movzbl 0x1a5(%eax),%eax
084341a0 +0x94:  movzbl %al,%ebx
084341a3 +0x97:  movl   $0x0,(%esp)
084341aa +0x9e:  call   083fbdc6 <_Z20get_skill_table_nameb>  ; get_skill_table_name(bool)
084341af +0xa3:  mov    %esi,0x10(%esp)
084341b3 +0xa7:  mov    %ebx,0xc(%esp)
084341b7 +0xab:  mov    %eax,0x8(%esp)
084341bb +0xaf:  movl   $"upDate %s set lethe_flag_2nd=%u where charac_no=%u",0x4(%esp)
084341c3 +0xb7:  mov    -0xc(%ebp),%eax
084341c6 +0xba:  mov    %eax,(%esp)
084341c9 +0xbd:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084341ce +0xc2:  movl   $0x1,0x4(%esp)
084341d6 +0xca:  mov    -0xc(%ebp),%eax
084341d9 +0xcd:  mov    %eax,(%esp)
084341dc +0xd0:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084341e1 +0xd5:  xor    $0x1,%eax
084341e4 +0xd8:  test   %al,%al
084341e6 +0xda:  je     084341ef <+0xe3>
084341e8 +0xdc:  mov    $0x0,%eax
084341ed +0xe1:  jmp    084341f4 <+0xe8>
084341ef +0xe3:  mov    $0x1,%eax
084341f4 +0xe8:  add    $0x30,%esp
084341f7 +0xeb:  pop    %ebx
084341f8 +0xec:  pop    %esi
084341f9 +0xed:  pop    %ebp
084341fa +0xee:  ret
084341fb +0xef:  nop
```

## 反编译 C

```c
// DB_UpdateOneDayLetheSkill::ProcessInitLethe @ 0x843410c

/* DB_UpdateOneDayLetheSkill::ProcessInitLethe(SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD*) */

bool __thiscall
DB_UpdateOneDayLetheSkill::ProcessInitLethe
          (DB_UpdateOneDayLetheSkill *this,SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD *param_1)

{
  SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD SVar1;
  undefined4 uVar2;
  char cVar3;
  MySQL *this_00;
  undefined4 uVar4;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  if ((param_1[0x1a6] == (SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD)0xff) ||
     (param_1[0x1a6] == (SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD)0x0)) {
    uVar2 = *(undefined4 *)(param_1 + 4);
    SVar1 = param_1[0x1a5];
    uVar4 = get_skill_table_name(false);
    MySQL::set_query(this_00,"upDate %s set lethe_flag=%u where charac_no=%u",uVar4,
                     (uint)(byte)SVar1,uVar2);
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 4);
    SVar1 = param_1[0x1a5];
    uVar4 = get_skill_table_name(false);
    MySQL::set_query(this_00,"upDate %s set lethe_flag_2nd=%u where charac_no=%u",uVar4,
                     (uint)(byte)SVar1,uVar2);
  }
  cVar3 = MySQL::exec(this_00,true);
  return cVar3 == '\x01';
}
```
