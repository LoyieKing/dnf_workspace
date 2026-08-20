# _UpdateSchoolCharac

`_ZN13DB_LoadCharac19_UpdateSchoolCharacEP15SIG_LOAD_CHARAC`

`DB_LoadCharac::_UpdateSchoolCharac(SIG_LOAD_CHARAC*)`

| 类 | 地址 |
|---|---|
| `DB_LoadCharac` | `0x08408c30` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08408c30  _ZN13DB_LoadCharac19_UpdateSchoolCharacEP15SIG_LOAD_CHARAC
#           DB_LoadCharac::_UpdateSchoolCharac(SIG_LOAD_CHARAC*)
# range [0x08408c30, 0x08408cf3]
08408c30 +0x00:  push   %ebp
08408c31 +0x01:  mov    %esp,%ebp
08408c33 +0x03:  push   %edi
08408c34 +0x04:  push   %esi
08408c35 +0x05:  push   %ebx
08408c36 +0x06:  sub    $0x3c,%esp
08408c39 +0x09:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08408c3e +0x0e:  movl   $0x0,0x8(%esp)
08408c46 +0x16:  movl   $0x10,0x4(%esp)
08408c4e +0x1e:  mov    %eax,(%esp)
08408c51 +0x21:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08408c56 +0x26:  mov    %eax,-0x1c(%ebp)
08408c59 +0x29:  mov    0xc(%ebp),%eax
08408c5c +0x2c:  mov    0x4(%eax),%edi
08408c5f +0x2f:  mov    0xc(%ebp),%eax
08408c62 +0x32:  mov    (%eax),%eax
08408c64 +0x34:  movl   $0x0,0x4(%esp)
08408c6c +0x3c:  mov    %eax,(%esp)
08408c6f +0x3f:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08408c74 +0x44:  mov    0xc(%ebp),%edx
08408c77 +0x47:  mov    0x682(%edx),%esi
08408c7d +0x4d:  mov    0xc(%ebp),%edx
08408c80 +0x50:  movzwl 0x31(%edx),%edx
08408c84 +0x54:  movswl %dx,%ebx
08408c87 +0x57:  mov    0xc(%ebp),%edx
08408c8a +0x5a:  movzbl 0x33(%edx),%edx
08408c8e +0x5e:  movsbl %dl,%ecx
08408c91 +0x61:  mov    0xc(%ebp),%edx
08408c94 +0x64:  movzbl 0x30(%edx),%edx
08408c98 +0x68:  movsbl %dl,%edx
08408c9b +0x6b:  mov    %edi,0x1c(%esp)
08408c9f +0x6f:  mov    %eax,0x18(%esp)
08408ca3 +0x73:  mov    %esi,0x14(%esp)
08408ca7 +0x77:  mov    %ebx,0x10(%esp)
08408cab +0x7b:  mov    %ecx,0xc(%esp)
08408caf +0x7f:  mov    %edx,0x8(%esp)
08408cb3 +0x83:  movl   $"upDate school_member set job=%d,grow_type=%d,lev=%d where school_id=%d and m_id=%s and charac_no=%d",0x4(%esp)
08408cbb +0x8b:  mov    -0x1c(%ebp),%eax
08408cbe +0x8e:  mov    %eax,(%esp)
08408cc1 +0x91:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08408cc6 +0x96:  movl   $0x1,0x4(%esp)
08408cce +0x9e:  mov    -0x1c(%ebp),%eax
08408cd1 +0xa1:  mov    %eax,(%esp)
08408cd4 +0xa4:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08408cd9 +0xa9:  xor    $0x1,%eax
08408cdc +0xac:  test   %al,%al
08408cde +0xae:  je     08408ce7 <+0xb7>
08408ce0 +0xb0:  mov    $0x0,%eax
08408ce5 +0xb5:  jmp    08408cec <+0xbc>
08408ce7 +0xb7:  mov    $0x1,%eax
08408cec +0xbc:  add    $0x3c,%esp
08408cef +0xbf:  pop    %ebx
08408cf0 +0xc0:  pop    %esi
08408cf1 +0xc1:  pop    %edi
08408cf2 +0xc2:  pop    %ebp
08408cf3 +0xc3:  ret
```

## 反编译 C

```c
// DB_LoadCharac::_UpdateSchoolCharac @ 0x8408c30

/* DB_LoadCharac::_UpdateSchoolCharac(SIG_LOAD_CHARAC*) */

bool __thiscall DB_LoadCharac::_UpdateSchoolCharac(DB_LoadCharac *this,SIG_LOAD_CHARAC *param_1)

{
  undefined4 uVar1;
  char cVar2;
  MySQL *this_00;
  undefined4 uVar3;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,0x10,0);
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar3 = NumberToString(*(uint *)param_1,0);
  MySQL::set_query(this_00,
                   "upDate school_member set job=%d,grow_type=%d,lev=%d where school_id=%d and m_id=%s and charac_no=%d"
                   ,(int)(char)param_1[0x30],(int)(char)param_1[0x33],
                   (int)*(short *)(param_1 + 0x31),*(undefined4 *)(param_1 + 0x682),uVar3,uVar1);
  cVar2 = MySQL::exec(this_00,true);
  return cVar2 == '\x01';
}
```
