# ProcessInitLetheSkill

`_ZN25DB_UpdateOneDayLetheSkill21ProcessInitLetheSkillEP35SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD`

`DB_UpdateOneDayLetheSkill::ProcessInitLetheSkill(SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateOneDayLetheSkill` | `0x084345a4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084345a4  _ZN25DB_UpdateOneDayLetheSkill21ProcessInitLetheSkillEP35SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD
#           DB_UpdateOneDayLetheSkill::ProcessInitLetheSkill(SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD*)
# range [0x084345a4, 0x08434717]
084345a4 +0x000:  push   %ebp
084345a5 +0x001:  mov    %esp,%ebp
084345a7 +0x003:  push   %edi
084345a8 +0x004:  push   %esi
084345a9 +0x005:  push   %ebx
084345aa +0x006:  sub    $0x4c,%esp
084345ad +0x009:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
084345b2 +0x00e:  movl   $0x0,0x8(%esp)
084345ba +0x016:  movl   $0x3,0x4(%esp)
084345c2 +0x01e:  mov    %eax,(%esp)
084345c5 +0x021:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
084345ca +0x026:  mov    %eax,-0x1c(%ebp)
084345cd +0x029:  movl   $0x0,-0x30(%ebp)
084345d4 +0x030:  mov    0xc(%ebp),%eax
084345d7 +0x033:  add    $0xd,%eax
084345da +0x036:  lea    -0x30(%ebp),%edx
084345dd +0x039:  mov    %edx,0x10(%esp)
084345e1 +0x03d:  movl   $0x198,0xc(%esp)
084345e9 +0x045:  mov    %eax,0x8(%esp)
084345ed +0x049:  movl   $0x0,0x4(%esp)
084345f5 +0x051:  mov    -0x1c(%ebp),%eax
084345f8 +0x054:  mov    %eax,(%esp)
084345fb +0x057:  call   083fbd06 <_Z24put_compressed_blob_dataP5MySQLiPciPS1_>  ; put_compressed_blob_data(MySQL*, int, char*, int, char**)
08434600 +0x05c:  xor    $0x1,%eax
08434603 +0x05f:  test   %al,%al
08434605 +0x061:  je     08434611 <+0x6d>
08434607 +0x063:  mov    $0x0,%eax
0843460c +0x068:  jmp    0843470f <+0x16b>
08434611 +0x06d:  mov    0xc(%ebp),%eax
08434614 +0x070:  movzbl 0x1a6(%eax),%eax
0843461b +0x077:  cmp    $0xff,%al
0843461d +0x079:  je     0843462d <+0x89>
0843461f +0x07b:  mov    0xc(%ebp),%eax
08434622 +0x07e:  movzbl 0x1a6(%eax),%eax
08434629 +0x085:  test   %al,%al
0843462b +0x087:  jne    08434671 <+0xcd>
0843462d +0x089:  mov    0xc(%ebp),%eax
08434630 +0x08c:  mov    0x4(%eax),%edi
08434633 +0x08f:  movzbl &_ZN20CPremiumLetheManager15USE_LETHE_STATEE,%eax
0843463a +0x096:  movzbl %al,%esi
0843463d +0x099:  mov    -0x30(%ebp),%ebx
08434640 +0x09c:  movl   $0x0,(%esp)
08434647 +0x0a3:  call   083fbdc6 <_Z20get_skill_table_nameb>  ; get_skill_table_name(bool)
0843464c +0x0a8:  mov    %edi,0x14(%esp)
08434650 +0x0ac:  mov    %esi,0x10(%esp)
08434654 +0x0b0:  mov    %ebx,0xc(%esp)
08434658 +0x0b4:  mov    %eax,0x8(%esp)
0843465c +0x0b8:  movl   $"upDate %s set skill_slot_lethe='%s', lethe_flag=%u where charac_no=%u",0x4(%esp)
08434664 +0x0c0:  mov    -0x1c(%ebp),%eax
08434667 +0x0c3:  mov    %eax,(%esp)
0843466a +0x0c6:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0843466f +0x0cb:  jmp    084346b3 <+0x10f>
08434671 +0x0cd:  mov    0xc(%ebp),%eax
08434674 +0x0d0:  mov    0x4(%eax),%edi
08434677 +0x0d3:  movzbl &_ZN20CPremiumLetheManager15USE_LETHE_STATEE,%eax
0843467e +0x0da:  movzbl %al,%esi
08434681 +0x0dd:  mov    -0x30(%ebp),%ebx
08434684 +0x0e0:  movl   $0x0,(%esp)
0843468b +0x0e7:  call   083fbdc6 <_Z20get_skill_table_nameb>  ; get_skill_table_name(bool)
08434690 +0x0ec:  mov    %edi,0x14(%esp)
08434694 +0x0f0:  mov    %esi,0x10(%esp)
08434698 +0x0f4:  mov    %ebx,0xc(%esp)
0843469c +0x0f8:  mov    %eax,0x8(%esp)
084346a0 +0x0fc:  movl   $"upDate %s set skill_slot_lethe_2nd='%s', lethe_flag_2nd=%u where charac_no=%u",0x4(%esp)
084346a8 +0x104:  mov    -0x1c(%ebp),%eax
084346ab +0x107:  mov    %eax,(%esp)
084346ae +0x10a:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084346b3 +0x10f:  movl   $0x1,0x4(%esp)
084346bb +0x117:  mov    -0x1c(%ebp),%eax
084346be +0x11a:  mov    %eax,(%esp)
084346c1 +0x11d:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084346c6 +0x122:  xor    $0x1,%eax
084346c9 +0x125:  test   %al,%al
084346cb +0x127:  je     084346d4 <+0x130>
084346cd +0x129:  mov    $0x0,%eax
084346d2 +0x12e:  jmp    0843470f <+0x16b>
084346d4 +0x130:  movl   $0x0,0xc(%esp)
084346dc +0x138:  movl   $0x7d49,0x8(%esp)
084346e4 +0x140:  movl   $&_ZZN25DB_UpdateOneDayLetheSkill21ProcessInitLetheSkillEP35SIG_RESULT_PREMIUM_LETHE_SKILL_LOADE19__PRETTY_FUNCTION__,0x4(%esp)
084346ec +0x148:  lea    -0x2c(%ebp),%eax
084346ef +0x14b:  mov    %eax,(%esp)
084346f2 +0x14e:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084346f7 +0x153:  movl   $"ONE_DAY_LETHE : DB_INIT_LETHE_SKILL",0x4(%esp)
084346ff +0x15b:  lea    -0x2c(%ebp),%eax
08434702 +0x15e:  mov    %eax,(%esp)
08434705 +0x161:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0843470a +0x166:  mov    $0x1,%eax
0843470f +0x16b:  add    $0x4c,%esp
08434712 +0x16e:  pop    %ebx
08434713 +0x16f:  pop    %esi
08434714 +0x170:  pop    %edi
08434715 +0x171:  pop    %ebp
08434716 +0x172:  ret
08434717 +0x173:  nop
```

## 反编译 C

```c
// DB_UpdateOneDayLetheSkill::ProcessInitLetheSkill @ 0x84345a4

/* DB_UpdateOneDayLetheSkill::ProcessInitLetheSkill(SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD*) */

undefined4 __thiscall
DB_UpdateOneDayLetheSkill::ProcessInitLetheSkill
          (DB_UpdateOneDayLetheSkill *this,SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD *param_1)

{
  char *pcVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  char *local_34;
  cMyTrace local_30 [16];
  MySQL *local_20;
  
  local_20 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  local_34 = (char *)0x0;
  cVar2 = put_compressed_blob_data(local_20,0,(char *)(param_1 + 0xd),0x198,&local_34);
  pcVar1 = local_34;
  if (cVar2 == '\x01') {
    if ((param_1[0x1a6] == (SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD)0xff) ||
       (param_1[0x1a6] == (SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD)0x0)) {
      uVar3 = *(undefined4 *)(param_1 + 4);
      uVar4 = (uint)CPremiumLetheManager::USE_LETHE_STATE;
      uVar5 = get_skill_table_name(false);
      MySQL::set_query(local_20,
                       "upDate %s set skill_slot_lethe=\'%s\', lethe_flag=%u where charac_no=%u",
                       uVar5,pcVar1,uVar4,uVar3);
    }
    else {
      uVar3 = *(undefined4 *)(param_1 + 4);
      uVar4 = (uint)CPremiumLetheManager::USE_LETHE_STATE;
      uVar5 = get_skill_table_name(false);
      MySQL::set_query(local_20,
                       "upDate %s set skill_slot_lethe_2nd=\'%s\', lethe_flag_2nd=%u where charac_no=%u"
                       ,uVar5,pcVar1,uVar4,uVar3);
    }
    cVar2 = MySQL::exec(local_20,true);
    if (cVar2 == '\x01') {
      cMyTrace::cMyTrace(local_30,
                         "bool DB_UpdateOneDayLetheSkill::ProcessInitLetheSkill(SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD*)"
                         ,0x7d49,0);
      cMyTrace::operator()(local_30,"ONE_DAY_LETHE : DB_INIT_LETHE_SKILL");
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
