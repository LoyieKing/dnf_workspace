# insert_artifact_info_to_db

`_ZN11sync_script11CSyncScript26insert_artifact_info_to_dbEP17STEquipmentScript`

`sync_script::CSyncScript::insert_artifact_info_to_db(STEquipmentScript*)`

| 类 | 地址 |
|---|---|
| `sync_script::CSyncScript` | `0x08624b8e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08624b8e  _ZN11sync_script11CSyncScript26insert_artifact_info_to_dbEP17STEquipmentScript
#           sync_script::CSyncScript::insert_artifact_info_to_db(STEquipmentScript*)
# range [0x08624b8e, 0x08624c95]
08624b8e +0x000:  push   %ebp
08624b8f +0x001:  mov    %esp,%ebp
08624b91 +0x003:  push   %ebx
08624b92 +0x004:  sub    $0x64,%esp
08624b95 +0x007:  mov    0x8(%ebp),%eax
08624b98 +0x00a:  movzbl (%eax),%eax
08624b9b +0x00d:  xor    $0x1,%eax
08624b9e +0x010:  test   %al,%al
08624ba0 +0x012:  je     08624bac <+0x1e>
08624ba2 +0x014:  mov    $0x1,%eax
08624ba7 +0x019:  jmp    08624c90 <+0x102>
08624bac +0x01e:  mov    0xc(%ebp),%eax
08624baf +0x021:  add    $0x738,%eax
08624bb4 +0x026:  mov    %eax,-0x10(%ebp)
08624bb7 +0x029:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08624bbc +0x02e:  movl   $0x0,0x8(%esp)
08624bc4 +0x036:  movl   $0x5,0x4(%esp)
08624bcc +0x03e:  mov    %eax,(%esp)
08624bcf +0x041:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08624bd4 +0x046:  mov    %eax,-0xc(%ebp)
08624bd7 +0x049:  mov    -0x10(%ebp),%eax
08624bda +0x04c:  flds   0x24(%eax)
08624bdd +0x04f:  mov    -0x10(%ebp),%eax
08624be0 +0x052:  flds   0x20(%eax)
08624be3 +0x055:  mov    -0x10(%ebp),%eax
08624be6 +0x058:  flds   0x1c(%eax)
08624be9 +0x05b:  mov    -0x10(%ebp),%eax
08624bec +0x05e:  flds   0x18(%eax)
08624bef +0x061:  mov    -0x10(%ebp),%eax
08624bf2 +0x064:  flds   0x14(%eax)
08624bf5 +0x067:  mov    -0x10(%ebp),%eax
08624bf8 +0x06a:  flds   0x10(%eax)
08624bfb +0x06d:  mov    -0x10(%ebp),%eax
08624bfe +0x070:  flds   0xc(%eax)
08624c01 +0x073:  fxch   %st(6)
08624c03 +0x075:  mov    -0x10(%ebp),%eax
08624c06 +0x078:  mov    0x8(%eax),%ebx
08624c09 +0x07b:  mov    -0x10(%ebp),%eax
08624c0c +0x07e:  mov    0x4(%eax),%ecx
08624c0f +0x081:  mov    -0x10(%ebp),%eax
08624c12 +0x084:  mov    (%eax),%edx
08624c14 +0x086:  mov    0xc(%ebp),%eax
08624c17 +0x089:  mov    (%eax),%eax
08624c19 +0x08b:  fstpl  0x48(%esp)
08624c1d +0x08f:  fxch   %st(4)
08624c1f +0x091:  fstpl  0x40(%esp)
08624c23 +0x095:  fxch   %st(2)
08624c25 +0x097:  fstpl  0x38(%esp)
08624c29 +0x09b:  fstpl  0x30(%esp)
08624c2d +0x09f:  fstpl  0x28(%esp)
08624c31 +0x0a3:  fstpl  0x20(%esp)
08624c35 +0x0a7:  fstpl  0x18(%esp)
08624c39 +0x0ab:  mov    %ebx,0x14(%esp)
08624c3d +0x0af:  mov    %ecx,0x10(%esp)
08624c41 +0x0b3:  mov    %edx,0xc(%esp)
08624c45 +0x0b7:  mov    %eax,0x8(%esp)
08624c49 +0x0bb:  movl   $"inSert into dnf_artifact_info(it_id, creature_min_level, physical_attack, magical_attack, skill_consume_mp_rate, skill_charge_time_rate, skill_overcharge_time_rate, experience_amount, physical_critical_hit, magical_critical_hit, stuck) values(%d, %d, %d, %d, %f, %f, %f, %f, %f, %f, %f)",0x4(%esp)
08624c51 +0x0c3:  mov    -0xc(%ebp),%eax
08624c54 +0x0c6:  mov    %eax,(%esp)
08624c57 +0x0c9:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08624c5c +0x0ce:  xor    $0x1,%eax
08624c5f +0x0d1:  test   %al,%al
08624c61 +0x0d3:  je     08624c6a <+0xdc>
08624c63 +0x0d5:  mov    $0x0,%eax
08624c68 +0x0da:  jmp    08624c90 <+0x102>
08624c6a +0x0dc:  movl   $0x1,0x4(%esp)
08624c72 +0x0e4:  mov    -0xc(%ebp),%eax
08624c75 +0x0e7:  mov    %eax,(%esp)
08624c78 +0x0ea:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08624c7d +0x0ef:  xor    $0x1,%eax
08624c80 +0x0f2:  test   %al,%al
08624c82 +0x0f4:  je     08624c8b <+0xfd>
08624c84 +0x0f6:  mov    $0x0,%eax
08624c89 +0x0fb:  jmp    08624c90 <+0x102>
08624c8b +0x0fd:  mov    $0x1,%eax
08624c90 +0x102:  add    $0x64,%esp
08624c93 +0x105:  pop    %ebx
08624c94 +0x106:  pop    %ebp
08624c95 +0x107:  ret
```

## 反编译 C

```c
// sync_script::CSyncScript::insert_artifact_info_to_db @ 0x8624b8e

/* sync_script::CSyncScript::insert_artifact_info_to_db(STEquipmentScript*) */

undefined4 __thiscall
sync_script::CSyncScript::insert_artifact_info_to_db(CSyncScript *this,STEquipmentScript *param_1)

{
  char cVar1;
  undefined4 uVar2;
  MySQL *this_00;
  
  if (*this == (CSyncScript)0x1) {
    this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,5,0);
    cVar1 = MySQL::set_query(this_00,
                             "inSert into dnf_artifact_info(it_id, creature_min_level, physical_attack, magical_attack, skill_consume_mp_rate, skill_charge_time_rate, skill_overcharge_time_rate, experience_amount, physical_critical_hit, magical_critical_hit, stuck) values(%d, %d, %d, %d, %f, %f, %f, %f, %f, %f, %f)"
                             ,*(undefined4 *)param_1,*(undefined4 *)(param_1 + 0x738),
                             *(undefined4 *)(param_1 + 0x73c),*(undefined4 *)(param_1 + 0x740),
                             (double)*(float *)(param_1 + 0x744),(double)*(float *)(param_1 + 0x748)
                             ,(double)*(float *)(param_1 + 0x74c),
                             (double)*(float *)(param_1 + 0x750),(double)*(float *)(param_1 + 0x754)
                             ,(double)*(float *)(param_1 + 0x758),
                             (double)*(float *)(param_1 + 0x75c));
    if (cVar1 == '\x01') {
      cVar1 = MySQL::exec(this_00,true);
      if (cVar1 == '\x01') {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
```
