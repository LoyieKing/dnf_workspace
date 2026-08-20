# LoadComboSkill

`_ZN10DB_LoadEtc14LoadComboSkillEP12SIG_LOAD_ETC20ENUM_SKILL_TREE_KIND`

`DB_LoadEtc::LoadComboSkill(SIG_LOAD_ETC*, ENUM_SKILL_TREE_KIND)`

| 类 | 地址 |
|---|---|
| `DB_LoadEtc` | `0x0844a47a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0844a47a  _ZN10DB_LoadEtc14LoadComboSkillEP12SIG_LOAD_ETC20ENUM_SKILL_TREE_KIND
#           DB_LoadEtc::LoadComboSkill(SIG_LOAD_ETC*, ENUM_SKILL_TREE_KIND)
# range [0x0844a47a, 0x0844a703]
0844a47a +0x000:  push   %ebp
0844a47b +0x001:  mov    %esp,%ebp
0844a47d +0x003:  push   %esi
0844a47e +0x004:  push   %ebx
0844a47f +0x005:  sub    $0x70,%esp
0844a482 +0x008:  mov    0x10(%ebp),%eax
0844a485 +0x00b:  test   %eax,%eax
0844a487 +0x00d:  je     0844a4e2 <+0x68>
0844a489 +0x00f:  mov    0x10(%ebp),%eax
0844a48c +0x012:  cmp    $0x1,%eax
0844a48f +0x015:  je     0844a4e2 <+0x68>
0844a491 +0x017:  mov    0xc(%ebp),%eax
0844a494 +0x01a:  mov    0x4(%eax),%esi
0844a497 +0x01d:  mov    0x10(%ebp),%ebx
0844a49a +0x020:  movl   $0x5,0xc(%esp)
0844a4a2 +0x028:  movl   $0xbac4,0x8(%esp)
0844a4aa +0x030:  movl   $&_ZZN10DB_LoadEtc14LoadComboSkillEP12SIG_LOAD_ETC20ENUM_SKILL_TREE_KINDE19__PRETTY_FUNCTION__,0x4(%esp)
0844a4b2 +0x038:  lea    -0x54(%ebp),%eax
0844a4b5 +0x03b:  mov    %eax,(%esp)
0844a4b8 +0x03e:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0844a4bd +0x043:  mov    %esi,0xc(%esp)
0844a4c1 +0x047:  mov    %ebx,0x8(%esp)
0844a4c5 +0x04b:  movl   $"DB_LoadEtc::LoadComboSkill kind(%d) error characNo(%u)",0x4(%esp)
0844a4cd +0x053:  lea    -0x54(%ebp),%eax
0844a4d0 +0x056:  mov    %eax,(%esp)
0844a4d3 +0x059:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0844a4d8 +0x05e:  mov    $0x0,%eax
0844a4dd +0x063:  jmp    0844a6fc <+0x282>
0844a4e2 +0x068:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0844a4e7 +0x06d:  movl   $0x0,0x8(%esp)
0844a4ef +0x075:  movl   $0x3,0x4(%esp)
0844a4f7 +0x07d:  mov    %eax,(%esp)
0844a4fa +0x080:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0844a4ff +0x085:  mov    %eax,-0x14(%ebp)
0844a502 +0x088:  cmpl   $0x0,-0x14(%ebp)
0844a506 +0x08c:  jne    0844a512 <+0x98>
0844a508 +0x08e:  mov    $0x0,%eax
0844a50d +0x093:  jmp    0844a6fc <+0x282>
0844a512 +0x098:  mov    0xc(%ebp),%eax
0844a515 +0x09b:  mov    0x4(%eax),%ebx
0844a518 +0x09e:  mov    0x10(%ebp),%eax
0844a51b +0x0a1:  mov    %eax,(%esp)
0844a51e +0x0a4:  call   0844a38b <_Z22getComboSkillTableName20ENUM_SKILL_TREE_KIND>  ; getComboSkillTableName(ENUM_SKILL_TREE_KIND)
0844a523 +0x0a9:  mov    %ebx,0xc(%esp)
0844a527 +0x0ad:  mov    %eax,0x8(%esp)
0844a52b +0x0b1:  movl   $"seLect combo_idx, value1, value2, value3, value4, value5, value6 from %s where charac_no=%u",0x4(%esp)
0844a533 +0x0b9:  mov    -0x14(%ebp),%eax
0844a536 +0x0bc:  mov    %eax,(%esp)
0844a539 +0x0bf:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0844a53e +0x0c4:  movl   $0x1,0x4(%esp)
0844a546 +0x0cc:  mov    -0x14(%ebp),%eax
0844a549 +0x0cf:  mov    %eax,(%esp)
0844a54c +0x0d2:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0844a551 +0x0d7:  mov    %al,-0xd(%ebp)
0844a554 +0x0da:  movzbl -0xd(%ebp),%eax
0844a558 +0x0de:  xor    $0x1,%eax
0844a55b +0x0e1:  test   %al,%al
0844a55d +0x0e3:  je     0844a5a9 <+0x12f>
0844a55f +0x0e5:  mov    0xc(%ebp),%eax
0844a562 +0x0e8:  mov    0x4(%eax),%ebx
0844a565 +0x0eb:  movl   $0x5,0xc(%esp)
0844a56d +0x0f3:  movl   $0xbad4,0x8(%esp)
0844a575 +0x0fb:  movl   $&_ZZN10DB_LoadEtc14LoadComboSkillEP12SIG_LOAD_ETC20ENUM_SKILL_TREE_KINDE19__PRETTY_FUNCTION__,0x4(%esp)
0844a57d +0x103:  lea    -0x44(%ebp),%eax
0844a580 +0x106:  mov    %eax,(%esp)
0844a583 +0x109:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0844a588 +0x10e:  mov    %ebx,0x8(%esp)
0844a58c +0x112:  movl   $"DB_LoadEtc::LoadComboSkill, exec() ERROR charac_no=%u",0x4(%esp)
0844a594 +0x11a:  lea    -0x44(%ebp),%eax
0844a597 +0x11d:  mov    %eax,(%esp)
0844a59a +0x120:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0844a59f +0x125:  mov    $0x0,%eax
0844a5a4 +0x12a:  jmp    0844a6fc <+0x282>
0844a5a9 +0x12f:  mov    -0x14(%ebp),%eax
0844a5ac +0x132:  mov    %eax,(%esp)
0844a5af +0x135:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0844a5b4 +0x13a:  mov    %eax,-0xc(%ebp)
0844a5b7 +0x13d:  cmpl   $0x0,-0xc(%ebp)
0844a5bb +0x141:  jne    0844a5c7 <+0x14d>
0844a5bd +0x143:  mov    $0x1,%eax
0844a5c2 +0x148:  jmp    0844a6fc <+0x282>
0844a5c7 +0x14d:  mov    0x10(%ebp),%eax
0844a5ca +0x150:  test   %eax,%eax
0844a5cc +0x152:  jne    0844a5de <+0x164>
0844a5ce +0x154:  mov    -0xc(%ebp),%eax
0844a5d1 +0x157:  mov    %eax,%edx
0844a5d3 +0x159:  mov    0xc(%ebp),%eax
0844a5d6 +0x15c:  mov    %dl,&_ZL14gUnicodeBuffer+0xa582(%eax)
0844a5dc +0x162:  jmp    0844a5f4 <+0x17a>
0844a5de +0x164:  mov    0x10(%ebp),%eax
0844a5e1 +0x167:  cmp    $0x1,%eax
0844a5e4 +0x16a:  jne    0844a5f4 <+0x17a>
0844a5e6 +0x16c:  mov    -0xc(%ebp),%eax
0844a5e9 +0x16f:  mov    %eax,%edx
0844a5eb +0x171:  mov    0xc(%ebp),%eax
0844a5ee +0x174:  mov    %dl,&_ZL14gUnicodeBuffer+0xa583(%eax)
0844a5f4 +0x17a:  mov    0x10(%ebp),%eax
0844a5f7 +0x17d:  test   %eax,%eax
0844a5f9 +0x17f:  jne    0844a678 <+0x1fe>
0844a5fb +0x181:  mov    0xc(%ebp),%eax
0844a5fe +0x184:  lea    &_ZL14gUnicodeBuffer+0xa588(%eax),%edx
0844a604 +0x18a:  mov    0xc(%ebp),%eax
0844a607 +0x18d:  mov    0x4(%eax),%eax
0844a60a +0x190:  mov    %edx,0x10(%esp)
0844a60e +0x194:  mov    -0xc(%ebp),%edx
0844a611 +0x197:  mov    %edx,0xc(%esp)
0844a615 +0x19b:  mov    %eax,0x8(%esp)
0844a619 +0x19f:  mov    -0x14(%ebp),%eax
0844a61c +0x1a2:  mov    %eax,0x4(%esp)
0844a620 +0x1a6:  mov    0x8(%ebp),%eax
0844a623 +0x1a9:  mov    %eax,(%esp)
0844a626 +0x1ac:  call   0844a704 <_ZN10DB_LoadEtc13getComboSkillEP5MySQLjiP15comoboSkillData>  ; DB_LoadEtc::getComboSkill(MySQL*, unsigned int, int, comoboSkillData*)
0844a62b +0x1b1:  xor    $0x1,%eax
0844a62e +0x1b4:  test   %al,%al
0844a630 +0x1b6:  je     0844a6f7 <+0x27d>
0844a636 +0x1bc:  mov    0xc(%ebp),%eax
0844a639 +0x1bf:  mov    0x4(%eax),%ebx
0844a63c +0x1c2:  movl   $0x5,0xc(%esp)
0844a644 +0x1ca:  movl   $0xbae7,0x8(%esp)
0844a64c +0x1d2:  movl   $&_ZZN10DB_LoadEtc14LoadComboSkillEP12SIG_LOAD_ETC20ENUM_SKILL_TREE_KINDE19__PRETTY_FUNCTION__,0x4(%esp)
0844a654 +0x1da:  lea    -0x34(%ebp),%eax
0844a657 +0x1dd:  mov    %eax,(%esp)
0844a65a +0x1e0:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0844a65f +0x1e5:  mov    %ebx,0x8(%esp)
0844a663 +0x1e9:  movl   $"DB_LoadEtc::LoadComboSkill, getComboSkill ERROR charac_no=%u",0x4(%esp)
0844a66b +0x1f1:  lea    -0x34(%ebp),%eax
0844a66e +0x1f4:  mov    %eax,(%esp)
0844a671 +0x1f7:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0844a676 +0x1fc:  jmp    0844a6f7 <+0x27d>
0844a678 +0x1fe:  mov    0x10(%ebp),%eax
0844a67b +0x201:  cmp    $0x1,%eax
0844a67e +0x204:  jne    0844a6f7 <+0x27d>
0844a680 +0x206:  mov    0xc(%ebp),%eax
0844a683 +0x209:  lea    &_ZL14gUnicodeBuffer+0xa5dc(%eax),%edx
0844a689 +0x20f:  mov    0xc(%ebp),%eax
0844a68c +0x212:  mov    0x4(%eax),%eax
0844a68f +0x215:  mov    %edx,0x10(%esp)
0844a693 +0x219:  mov    -0xc(%ebp),%edx
0844a696 +0x21c:  mov    %edx,0xc(%esp)
0844a69a +0x220:  mov    %eax,0x8(%esp)
0844a69e +0x224:  mov    -0x14(%ebp),%eax
0844a6a1 +0x227:  mov    %eax,0x4(%esp)
0844a6a5 +0x22b:  mov    0x8(%ebp),%eax
0844a6a8 +0x22e:  mov    %eax,(%esp)
0844a6ab +0x231:  call   0844a704 <_ZN10DB_LoadEtc13getComboSkillEP5MySQLjiP15comoboSkillData>  ; DB_LoadEtc::getComboSkill(MySQL*, unsigned int, int, comoboSkillData*)
0844a6b0 +0x236:  xor    $0x1,%eax
0844a6b3 +0x239:  test   %al,%al
0844a6b5 +0x23b:  je     0844a6f7 <+0x27d>
0844a6b7 +0x23d:  mov    0xc(%ebp),%eax
0844a6ba +0x240:  mov    0x4(%eax),%ebx
0844a6bd +0x243:  movl   $0x5,0xc(%esp)
0844a6c5 +0x24b:  movl   $0xbaef,0x8(%esp)
0844a6cd +0x253:  movl   $&_ZZN10DB_LoadEtc14LoadComboSkillEP12SIG_LOAD_ETC20ENUM_SKILL_TREE_KINDE19__PRETTY_FUNCTION__,0x4(%esp)
0844a6d5 +0x25b:  lea    -0x24(%ebp),%eax
0844a6d8 +0x25e:  mov    %eax,(%esp)
0844a6db +0x261:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0844a6e0 +0x266:  mov    %ebx,0x8(%esp)
0844a6e4 +0x26a:  movl   $"DB_LoadEtc::LoadComboSkill, getComboSkill ERROR charac_no=%u",0x4(%esp)
0844a6ec +0x272:  lea    -0x24(%ebp),%eax
0844a6ef +0x275:  mov    %eax,(%esp)
0844a6f2 +0x278:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0844a6f7 +0x27d:  mov    $0x1,%eax
0844a6fc +0x282:  add    $0x70,%esp
0844a6ff +0x285:  pop    %ebx
0844a700 +0x286:  pop    %esi
0844a701 +0x287:  pop    %ebp
0844a702 +0x288:  ret
0844a703 +0x289:  nop
```

## 反编译 C

```c
// DB_LoadEtc::LoadComboSkill @ 0x844a47a

/* DB_LoadEtc::LoadComboSkill(SIG_LOAD_ETC*, ENUM_SKILL_TREE_KIND) */

undefined4 __thiscall DB_LoadEtc::LoadComboSkill(DB_LoadEtc *this,int param_1,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  cMyTrace local_58 [16];
  cMyTrace local_48 [16];
  cMyTrace local_38 [16];
  cMyTrace local_28 [16];
  MySQL *local_18;
  char local_11;
  int local_10;
  
  if ((param_3 == 0) || (param_3 == 1)) {
    local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
    if (local_18 == (MySQL *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(param_1 + 4);
      uVar3 = getComboSkillTableName(param_3);
      MySQL::set_query(local_18,
                       "seLect combo_idx, value1, value2, value3, value4, value5, value6 from %s where charac_no=%u"
                       ,uVar3,uVar2);
      local_11 = MySQL::exec(local_18,true);
      if (local_11 == '\x01') {
        local_10 = MySQL::get_n_rows(local_18);
        if (local_10 == 0) {
          uVar2 = 1;
        }
        else {
          if (param_3 == 0) {
            *(char *)(param_1 + 0x14aae) = (char)local_10;
          }
          else if (param_3 == 1) {
            *(char *)(param_1 + 0x14aaf) = (char)local_10;
          }
          if (param_3 == 0) {
            cVar1 = getComboSkill(this,local_18,*(uint *)(param_1 + 4),local_10,
                                  (comoboSkillData *)(param_1 + 0x14ab4));
            if (cVar1 != '\x01') {
              uVar2 = *(undefined4 *)(param_1 + 4);
              cMyTrace::cMyTrace(local_38,
                                 "bool DB_LoadEtc::LoadComboSkill(SIG_LOAD_ETC*, ENUM_SKILL_TREE_KIND)"
                                 ,0xbae7,5);
              cMyTrace::operator()
                        (local_38,"DB_LoadEtc::LoadComboSkill, getComboSkill ERROR charac_no=%u",
                         uVar2);
            }
          }
          else if (param_3 == 1) {
            cVar1 = getComboSkill(this,local_18,*(uint *)(param_1 + 4),local_10,
                                  (comoboSkillData *)(param_1 + 0x14b08));
            if (cVar1 != '\x01') {
              uVar2 = *(undefined4 *)(param_1 + 4);
              cMyTrace::cMyTrace(local_28,
                                 "bool DB_LoadEtc::LoadComboSkill(SIG_LOAD_ETC*, ENUM_SKILL_TREE_KIND)"
                                 ,0xbaef,5);
              cMyTrace::operator()
                        (local_28,"DB_LoadEtc::LoadComboSkill, getComboSkill ERROR charac_no=%u",
                         uVar2);
            }
          }
          uVar2 = 1;
        }
      }
      else {
        uVar2 = *(undefined4 *)(param_1 + 4);
        cMyTrace::cMyTrace(local_48,
                           "bool DB_LoadEtc::LoadComboSkill(SIG_LOAD_ETC*, ENUM_SKILL_TREE_KIND)",
                           0xbad4,5);
        cMyTrace::operator()(local_48,"DB_LoadEtc::LoadComboSkill, exec() ERROR charac_no=%u",uVar2)
        ;
        uVar2 = 0;
      }
    }
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 4);
    cMyTrace::cMyTrace(local_58,
                       "bool DB_LoadEtc::LoadComboSkill(SIG_LOAD_ETC*, ENUM_SKILL_TREE_KIND)",0xbac4
                       ,5);
    cMyTrace::operator()
              (local_58,"DB_LoadEtc::LoadComboSkill kind(%d) error characNo(%u)",param_3,uVar2);
    uVar2 = 0;
  }
  return uVar2;
}
```
