# insert_item_parts_set

`_ZN11sync_script11CSyncScript21insert_item_parts_setEiR23STEquipmentPartSetPiece`

`sync_script::CSyncScript::insert_item_parts_set(int, STEquipmentPartSetPiece&)`

| 类 | 地址 |
|---|---|
| `sync_script::CSyncScript` | `0x08622cdc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08622cdc  _ZN11sync_script11CSyncScript21insert_item_parts_setEiR23STEquipmentPartSetPiece
#           sync_script::CSyncScript::insert_item_parts_set(int, STEquipmentPartSetPiece&)
# range [0x08622cdc, 0x08622d91]
08622cdc +0x00:  push   %ebp
08622cdd +0x01:  mov    %esp,%ebp
08622cdf +0x03:  push   %edi
08622ce0 +0x04:  push   %esi
08622ce1 +0x05:  push   %ebx
08622ce2 +0x06:  sub    $0x3c,%esp
08622ce5 +0x09:  mov    0x8(%ebp),%eax
08622ce8 +0x0c:  movzbl (%eax),%eax
08622ceb +0x0f:  xor    $0x1,%eax
08622cee +0x12:  test   %al,%al
08622cf0 +0x14:  je     08622cfc <+0x20>
08622cf2 +0x16:  mov    $0x1,%eax
08622cf7 +0x1b:  jmp    08622d89 <+0xad>
08622cfc +0x20:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08622d01 +0x25:  movl   $0x0,0x8(%esp)
08622d09 +0x2d:  movl   $0x5,0x4(%esp)
08622d11 +0x35:  mov    %eax,(%esp)
08622d14 +0x38:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08622d19 +0x3d:  mov    %eax,-0x1c(%ebp)
08622d1c +0x40:  mov    0x10(%ebp),%eax
08622d1f +0x43:  mov    0xc(%eax),%edi
08622d22 +0x46:  mov    0x10(%ebp),%eax
08622d25 +0x49:  mov    0x8(%eax),%esi
08622d28 +0x4c:  mov    0x10(%ebp),%eax
08622d2b +0x4f:  mov    0x4(%eax),%ebx
08622d2e +0x52:  mov    0x10(%ebp),%eax
08622d31 +0x55:  mov    %eax,(%esp)
08622d34 +0x58:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08622d39 +0x5d:  mov    %edi,0x18(%esp)
08622d3d +0x61:  mov    %esi,0x14(%esp)
08622d41 +0x65:  mov    %ebx,0x10(%esp)
08622d45 +0x69:  mov    %eax,0xc(%esp)
08622d49 +0x6d:  mov    0xc(%ebp),%eax
08622d4c +0x70:  mov    %eax,0x8(%esp)
08622d50 +0x74:  movl   $"inSert into item_part_set(part_set_index, part_name, part_type, part_grade, part_rarity) values(%d, '%s',%d,%d,%d)",0x4(%esp)
08622d58 +0x7c:  mov    -0x1c(%ebp),%eax
08622d5b +0x7f:  mov    %eax,(%esp)
08622d5e +0x82:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08622d63 +0x87:  movl   $0x1,0x4(%esp)
08622d6b +0x8f:  mov    -0x1c(%ebp),%eax
08622d6e +0x92:  mov    %eax,(%esp)
08622d71 +0x95:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08622d76 +0x9a:  xor    $0x1,%eax
08622d79 +0x9d:  test   %al,%al
08622d7b +0x9f:  je     08622d84 <+0xa8>
08622d7d +0xa1:  mov    $0x0,%eax
08622d82 +0xa6:  jmp    08622d89 <+0xad>
08622d84 +0xa8:  mov    $0x1,%eax
08622d89 +0xad:  add    $0x3c,%esp
08622d8c +0xb0:  pop    %ebx
08622d8d +0xb1:  pop    %esi
08622d8e +0xb2:  pop    %edi
08622d8f +0xb3:  pop    %ebp
08622d90 +0xb4:  ret
08622d91 +0xb5:  nop
```

## 反编译 C

```c
// sync_script::CSyncScript::insert_item_parts_set @ 0x8622cdc

/* sync_script::CSyncScript::insert_item_parts_set(int, STEquipmentPartSetPiece&) */

undefined4 __thiscall
sync_script::CSyncScript::insert_item_parts_set
          (CSyncScript *this,int param_1,STEquipmentPartSetPiece *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 uVar4;
  MySQL *this_00;
  undefined4 uVar5;
  
  if (*this == (CSyncScript)0x1) {
    this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,5,0);
    uVar4 = *(undefined4 *)(param_2 + 0xc);
    uVar1 = *(undefined4 *)(param_2 + 8);
    uVar2 = *(undefined4 *)(param_2 + 4);
    uVar5 = std::string::c_str((string *)param_2);
    MySQL::set_query(this_00,
                     "inSert into item_part_set(part_set_index, part_name, part_type, part_grade, part_rarity) values(%d, \'%s\',%d,%d,%d)"
                     ,param_1,uVar5,uVar2,uVar1,uVar4);
    cVar3 = MySQL::exec(this_00,true);
    if (cVar3 == '\x01') {
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}
```
