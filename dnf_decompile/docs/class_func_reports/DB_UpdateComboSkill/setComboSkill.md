# setComboSkill

`_ZN19DB_UpdateComboSkill13setComboSkillEP5MySQLjhP15comoboSkillData20ENUM_SKILL_TREE_KIND`

`DB_UpdateComboSkill::setComboSkill(MySQL*, unsigned int, unsigned char, comoboSkillData*, ENUM_SKILL_TREE_KIND)`

| 类 | 地址 |
|---|---|
| `DB_UpdateComboSkill` | `0x0844aa4c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0844aa4c  _ZN19DB_UpdateComboSkill13setComboSkillEP5MySQLjhP15comoboSkillData20ENUM_SKILL_TREE_KIND
#           DB_UpdateComboSkill::setComboSkill(MySQL*, unsigned int, unsigned char, comoboSkillData*, ENUM_SKILL_TREE_KIND)
# range [0x0844aa4c, 0x0844adbf]
0844aa4c +0x000:  push   %ebp
0844aa4d +0x001:  mov    %esp,%ebp
0844aa4f +0x003:  push   %edi
0844aa50 +0x004:  push   %esi
0844aa51 +0x005:  push   %ebx
0844aa52 +0x006:  sub    $0x8c,%esp
0844aa58 +0x00c:  mov    0x14(%ebp),%eax
0844aa5b +0x00f:  mov    %al,-0x3c(%ebp)
0844aa5e +0x012:  cmpl   $0x0,0xc(%ebp)
0844aa62 +0x016:  je     0844aa6a <+0x1e>
0844aa64 +0x018:  cmpl   $0x0,0x18(%ebp)
0844aa68 +0x01c:  jne    0844aa74 <+0x28>
0844aa6a +0x01e:  mov    $0x0,%eax
0844aa6f +0x023:  jmp    0844adb4 <+0x368>
0844aa74 +0x028:  mov    0x1c(%ebp),%eax
0844aa77 +0x02b:  test   %eax,%eax
0844aa79 +0x02d:  je     0844aad1 <+0x85>
0844aa7b +0x02f:  mov    0x1c(%ebp),%eax
0844aa7e +0x032:  cmp    $0x1,%eax
0844aa81 +0x035:  je     0844aad1 <+0x85>
0844aa83 +0x037:  mov    0x1c(%ebp),%ebx
0844aa86 +0x03a:  movl   $0x5,0xc(%esp)
0844aa8e +0x042:  movl   $0xbb42,0x8(%esp)
0844aa96 +0x04a:  movl   $&_ZZN19DB_UpdateComboSkill13setComboSkillEP5MySQLjhP15comoboSkillData20ENUM_SKILL_TREE_KINDE19__PRETTY_FUNCTION__,0x4(%esp)
0844aa9e +0x052:  lea    -0x2c(%ebp),%eax
0844aaa1 +0x055:  mov    %eax,(%esp)
0844aaa4 +0x058:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0844aaa9 +0x05d:  mov    0x10(%ebp),%eax
0844aaac +0x060:  mov    %eax,0xc(%esp)
0844aab0 +0x064:  mov    %ebx,0x8(%esp)
0844aab4 +0x068:  movl   $"DB_UpdateComboSkill::setComboSkill kind(%d) error characNo(%u)",0x4(%esp)
0844aabc +0x070:  lea    -0x2c(%ebp),%eax
0844aabf +0x073:  mov    %eax,(%esp)
0844aac2 +0x076:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0844aac7 +0x07b:  mov    $0x0,%eax
0844aacc +0x080:  jmp    0844adb4 <+0x368>
0844aad1 +0x085:  movl   $0x0,-0x1c(%ebp)
0844aad8 +0x08c:  jmp    0844ad8c <+0x340>
0844aadd +0x091:  mov    -0x1c(%ebp),%eax
0844aae0 +0x094:  add    %eax,%eax
0844aae2 +0x096:  lea    0x0(,%eax,8),%edx
0844aae9 +0x09d:  mov    %edx,%ecx
0844aaeb +0x09f:  sub    %eax,%ecx
0844aaed +0x0a1:  mov    %ecx,%eax
0844aaef +0x0a3:  add    0x18(%ebp),%eax
0844aaf2 +0x0a6:  movzwl (%eax),%eax
0844aaf5 +0x0a9:  movswl %ax,%esi
0844aaf8 +0x0ac:  mov    -0x1c(%ebp),%eax
0844aafb +0x0af:  add    %eax,%eax
0844aafd +0x0b1:  lea    0x0(,%eax,8),%edx
0844ab04 +0x0b8:  mov    %edx,%ecx
0844ab06 +0x0ba:  sub    %eax,%ecx
0844ab08 +0x0bc:  mov    %ecx,%eax
0844ab0a +0x0be:  add    0x18(%ebp),%eax
0844ab0d +0x0c1:  movzwl 0xc(%eax),%eax
0844ab11 +0x0c5:  cwtl
0844ab12 +0x0c6:  mov    %eax,-0x5c(%ebp)
0844ab15 +0x0c9:  mov    -0x1c(%ebp),%eax
0844ab18 +0x0cc:  add    %eax,%eax
0844ab1a +0x0ce:  lea    0x0(,%eax,8),%edx
0844ab21 +0x0d5:  mov    %edx,%ecx
0844ab23 +0x0d7:  sub    %eax,%ecx
0844ab25 +0x0d9:  mov    %ecx,%eax
0844ab27 +0x0db:  add    0x18(%ebp),%eax
0844ab2a +0x0de:  movzwl 0xa(%eax),%eax
0844ab2e +0x0e2:  cwtl
0844ab2f +0x0e3:  mov    %eax,-0x58(%ebp)
0844ab32 +0x0e6:  mov    -0x1c(%ebp),%eax
0844ab35 +0x0e9:  add    %eax,%eax
0844ab37 +0x0eb:  lea    0x0(,%eax,8),%edx
0844ab3e +0x0f2:  mov    %edx,%ecx
0844ab40 +0x0f4:  sub    %eax,%ecx
0844ab42 +0x0f6:  mov    %ecx,%eax
0844ab44 +0x0f8:  add    0x18(%ebp),%eax
0844ab47 +0x0fb:  movzwl 0x8(%eax),%eax
0844ab4b +0x0ff:  cwtl
0844ab4c +0x100:  mov    %eax,-0x54(%ebp)
0844ab4f +0x103:  mov    -0x1c(%ebp),%eax
0844ab52 +0x106:  add    %eax,%eax
0844ab54 +0x108:  lea    0x0(,%eax,8),%edx
0844ab5b +0x10f:  mov    %edx,%ecx
0844ab5d +0x111:  sub    %eax,%ecx
0844ab5f +0x113:  mov    %ecx,%eax
0844ab61 +0x115:  add    0x18(%ebp),%eax
0844ab64 +0x118:  movzwl 0x6(%eax),%eax
0844ab68 +0x11c:  cwtl
0844ab69 +0x11d:  mov    %eax,-0x50(%ebp)
0844ab6c +0x120:  mov    -0x1c(%ebp),%eax
0844ab6f +0x123:  add    %eax,%eax
0844ab71 +0x125:  lea    0x0(,%eax,8),%edx
0844ab78 +0x12c:  mov    %edx,%ecx
0844ab7a +0x12e:  sub    %eax,%ecx
0844ab7c +0x130:  mov    %ecx,%eax
0844ab7e +0x132:  add    0x18(%ebp),%eax
0844ab81 +0x135:  movzwl 0x4(%eax),%eax
0844ab85 +0x139:  movswl %ax,%edi
0844ab88 +0x13c:  mov    -0x1c(%ebp),%eax
0844ab8b +0x13f:  add    %eax,%eax
0844ab8d +0x141:  lea    0x0(,%eax,8),%edx
0844ab94 +0x148:  mov    %edx,%ecx
0844ab96 +0x14a:  sub    %eax,%ecx
0844ab98 +0x14c:  mov    %ecx,%eax
0844ab9a +0x14e:  add    0x18(%ebp),%eax
0844ab9d +0x151:  movzwl 0x2(%eax),%eax
0844aba1 +0x155:  movswl %ax,%ebx
0844aba4 +0x158:  mov    0x1c(%ebp),%eax
0844aba7 +0x15b:  mov    %eax,(%esp)
0844abaa +0x15e:  call   0844a38b <_Z22getComboSkillTableName20ENUM_SKILL_TREE_KIND>  ; getComboSkillTableName(ENUM_SKILL_TREE_KIND)
0844abaf +0x163:  mov    %eax,%edx
0844abb1 +0x165:  mov    %esi,0x28(%esp)
0844abb5 +0x169:  mov    0x10(%ebp),%eax
0844abb8 +0x16c:  mov    %eax,0x24(%esp)
0844abbc +0x170:  mov    -0x5c(%ebp),%eax
0844abbf +0x173:  mov    %eax,0x20(%esp)
0844abc3 +0x177:  mov    -0x58(%ebp),%ecx
0844abc6 +0x17a:  mov    %ecx,0x1c(%esp)
0844abca +0x17e:  mov    -0x54(%ebp),%eax
0844abcd +0x181:  mov    %eax,0x18(%esp)
0844abd1 +0x185:  mov    -0x50(%ebp),%ecx
0844abd4 +0x188:  mov    %ecx,0x14(%esp)
0844abd8 +0x18c:  mov    %edi,0x10(%esp)
0844abdc +0x190:  mov    %ebx,0xc(%esp)
0844abe0 +0x194:  mov    %edx,0x8(%esp)
0844abe4 +0x198:  movl   $"upDate %s set value1 = %d, value2 = %d, value3 = %d, value4 = %d, value5 = %d, value6 = %d where charac_no = %u and combo_idx = %d",0x4(%esp)
0844abec +0x1a0:  mov    0xc(%ebp),%eax
0844abef +0x1a3:  mov    %eax,(%esp)
0844abf2 +0x1a6:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0844abf7 +0x1ab:  movl   $0x1,0x4(%esp)
0844abff +0x1b3:  mov    0xc(%ebp),%eax
0844ac02 +0x1b6:  mov    %eax,(%esp)
0844ac05 +0x1b9:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0844ac0a +0x1be:  xor    $0x1,%eax
0844ac0d +0x1c1:  test   %al,%al
0844ac0f +0x1c3:  je     0844ac1b <+0x1cf>
0844ac11 +0x1c5:  mov    $0x0,%eax
0844ac16 +0x1ca:  jmp    0844adb4 <+0x368>
0844ac1b +0x1cf:  mov    0xc(%ebp),%eax
0844ac1e +0x1d2:  mov    %eax,(%esp)
0844ac21 +0x1d5:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
0844ac26 +0x1da:  or     %edx,%eax
0844ac28 +0x1dc:  test   %eax,%eax
0844ac2a +0x1de:  sete   %al
0844ac2d +0x1e1:  test   %al,%al
0844ac2f +0x1e3:  je     0844ad88 <+0x33c>
0844ac35 +0x1e9:  mov    -0x1c(%ebp),%eax
0844ac38 +0x1ec:  add    %eax,%eax
0844ac3a +0x1ee:  lea    0x0(,%eax,8),%edx
0844ac41 +0x1f5:  mov    %edx,%ecx
0844ac43 +0x1f7:  sub    %eax,%ecx
0844ac45 +0x1f9:  mov    %ecx,%eax
0844ac47 +0x1fb:  add    0x18(%ebp),%eax
0844ac4a +0x1fe:  movzwl 0xc(%eax),%eax
0844ac4e +0x202:  movswl %ax,%edi
0844ac51 +0x205:  mov    -0x1c(%ebp),%eax
0844ac54 +0x208:  add    %eax,%eax
0844ac56 +0x20a:  lea    0x0(,%eax,8),%edx
0844ac5d +0x211:  mov    %edx,%ecx
0844ac5f +0x213:  sub    %eax,%ecx
0844ac61 +0x215:  mov    %ecx,%eax
0844ac63 +0x217:  add    0x18(%ebp),%eax
0844ac66 +0x21a:  movzwl 0xa(%eax),%eax
0844ac6a +0x21e:  cwtl
0844ac6b +0x21f:  mov    %eax,-0x4c(%ebp)
0844ac6e +0x222:  mov    -0x1c(%ebp),%eax
0844ac71 +0x225:  add    %eax,%eax
0844ac73 +0x227:  lea    0x0(,%eax,8),%edx
0844ac7a +0x22e:  mov    %edx,%ecx
0844ac7c +0x230:  sub    %eax,%ecx
0844ac7e +0x232:  mov    %ecx,%eax
0844ac80 +0x234:  add    0x18(%ebp),%eax
0844ac83 +0x237:  movzwl 0x8(%eax),%eax
0844ac87 +0x23b:  cwtl
0844ac88 +0x23c:  mov    %eax,-0x48(%ebp)
0844ac8b +0x23f:  mov    -0x1c(%ebp),%eax
0844ac8e +0x242:  add    %eax,%eax
0844ac90 +0x244:  lea    0x0(,%eax,8),%edx
0844ac97 +0x24b:  mov    %edx,%ecx
0844ac99 +0x24d:  sub    %eax,%ecx
0844ac9b +0x24f:  mov    %ecx,%eax
0844ac9d +0x251:  add    0x18(%ebp),%eax
0844aca0 +0x254:  movzwl 0x6(%eax),%eax
0844aca4 +0x258:  cwtl
0844aca5 +0x259:  mov    %eax,-0x44(%ebp)
0844aca8 +0x25c:  mov    -0x1c(%ebp),%eax
0844acab +0x25f:  add    %eax,%eax
0844acad +0x261:  lea    0x0(,%eax,8),%edx
0844acb4 +0x268:  mov    %edx,%ecx
0844acb6 +0x26a:  sub    %eax,%ecx
0844acb8 +0x26c:  mov    %ecx,%eax
0844acba +0x26e:  add    0x18(%ebp),%eax
0844acbd +0x271:  movzwl 0x4(%eax),%eax
0844acc1 +0x275:  cwtl
0844acc2 +0x276:  mov    %eax,-0x40(%ebp)
0844acc5 +0x279:  mov    -0x1c(%ebp),%eax
0844acc8 +0x27c:  add    %eax,%eax
0844acca +0x27e:  lea    0x0(,%eax,8),%edx
0844acd1 +0x285:  mov    %edx,%ecx
0844acd3 +0x287:  sub    %eax,%ecx
0844acd5 +0x289:  mov    %ecx,%eax
0844acd7 +0x28b:  add    0x18(%ebp),%eax
0844acda +0x28e:  movzwl 0x2(%eax),%eax
0844acde +0x292:  movswl %ax,%esi
0844ace1 +0x295:  mov    -0x1c(%ebp),%eax
0844ace4 +0x298:  add    %eax,%eax
0844ace6 +0x29a:  lea    0x0(,%eax,8),%edx
0844aced +0x2a1:  mov    %edx,%ecx
0844acef +0x2a3:  sub    %eax,%ecx
0844acf1 +0x2a5:  mov    %ecx,%eax
0844acf3 +0x2a7:  add    0x18(%ebp),%eax
0844acf6 +0x2aa:  movzwl (%eax),%eax
0844acf9 +0x2ad:  movswl %ax,%ebx
0844acfc +0x2b0:  mov    0x1c(%ebp),%eax
0844acff +0x2b3:  mov    %eax,(%esp)
0844ad02 +0x2b6:  call   0844a38b <_Z22getComboSkillTableName20ENUM_SKILL_TREE_KIND>  ; getComboSkillTableName(ENUM_SKILL_TREE_KIND)
0844ad07 +0x2bb:  mov    %eax,%edx
0844ad09 +0x2bd:  mov    %edi,0x28(%esp)
0844ad0d +0x2c1:  mov    -0x4c(%ebp),%eax
0844ad10 +0x2c4:  mov    %eax,0x24(%esp)
0844ad14 +0x2c8:  mov    -0x48(%ebp),%ecx
0844ad17 +0x2cb:  mov    %ecx,0x20(%esp)
0844ad1b +0x2cf:  mov    -0x44(%ebp),%eax
0844ad1e +0x2d2:  mov    %eax,0x1c(%esp)
0844ad22 +0x2d6:  mov    -0x40(%ebp),%ecx
0844ad25 +0x2d9:  mov    %ecx,0x18(%esp)
0844ad29 +0x2dd:  mov    %esi,0x14(%esp)
0844ad2d +0x2e1:  mov    %ebx,0x10(%esp)
0844ad31 +0x2e5:  mov    0x10(%ebp),%eax
0844ad34 +0x2e8:  mov    %eax,0xc(%esp)
0844ad38 +0x2ec:  mov    %edx,0x8(%esp)
0844ad3c +0x2f0:  movl   $"inSert into %s(charac_no, combo_idx, value1, value2, value3, value4, value5, value6) values(%u, %d, %d, %d, %d, %d, %d, %d)",0x4(%esp)
0844ad44 +0x2f8:  mov    0xc(%ebp),%eax
0844ad47 +0x2fb:  mov    %eax,(%esp)
0844ad4a +0x2fe:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0844ad4f +0x303:  movl   $0x1,0x4(%esp)
0844ad57 +0x30b:  mov    0xc(%ebp),%eax
0844ad5a +0x30e:  mov    %eax,(%esp)
0844ad5d +0x311:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0844ad62 +0x316:  xor    $0x1,%eax
0844ad65 +0x319:  test   %al,%al
0844ad67 +0x31b:  je     0844ad88 <+0x33c>
0844ad69 +0x31d:  mov    0xc(%ebp),%eax
0844ad6c +0x320:  mov    %eax,(%esp)
0844ad6f +0x323:  call   0811b97a <_GLOBAL__I_events+0x1d>  ; global constructors keyed to events+0x1d
0844ad74 +0x328:  cmp    $0x426,%eax
0844ad79 +0x32d:  sete   %al
0844ad7c +0x330:  test   %al,%al
0844ad7e +0x332:  jne    0844ad87 <+0x33b>
0844ad80 +0x334:  mov    $0x0,%eax
0844ad85 +0x339:  jmp    0844adb4 <+0x368>
0844ad87 +0x33b:  nop
0844ad88 +0x33c:  addl   $0x1,-0x1c(%ebp)
0844ad8c +0x340:  movzbl -0x3c(%ebp),%eax
0844ad90 +0x344:  cmp    -0x1c(%ebp),%eax
0844ad93 +0x347:  jle    0844ada2 <+0x356>
0844ad95 +0x349:  cmpl   $0x5,-0x1c(%ebp)
0844ad99 +0x34d:  jg     0844ada2 <+0x356>
0844ad9b +0x34f:  mov    $0x1,%eax
0844ada0 +0x354:  jmp    0844ada7 <+0x35b>
0844ada2 +0x356:  mov    $0x0,%eax
0844ada7 +0x35b:  test   %al,%al
0844ada9 +0x35d:  jne    0844aadd <+0x91>
0844adaf +0x363:  mov    $0x1,%eax
0844adb4 +0x368:  add    $0x8c,%esp
0844adba +0x36e:  pop    %ebx
0844adbb +0x36f:  pop    %esi
0844adbc +0x370:  pop    %edi
0844adbd +0x371:  pop    %ebp
0844adbe +0x372:  ret
0844adbf +0x373:  nop
```

## 反编译 C

```c
// DB_UpdateComboSkill::setComboSkill @ 0x844aa4c

/* DB_UpdateComboSkill::setComboSkill(MySQL*, unsigned int, unsigned char, comoboSkillData*,
   ENUM_SKILL_TREE_KIND) */

undefined4 __thiscall
DB_UpdateComboSkill::setComboSkill
          (undefined4 this,MySQL *param_1,undefined4 param_2,uint param_3,int param_4,int param_6)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  bool bVar8;
  char cVar9;
  undefined4 uVar10;
  int iVar11;
  longlong lVar12;
  cMyTrace local_30 [16];
  int local_20;
  
  if ((param_1 != (MySQL *)0x0) && (param_4 != 0)) {
    if ((param_6 == 0) || (param_6 == 1)) {
      local_20 = 0;
      while( true ) {
        if ((local_20 < (int)(param_3 & 0xff)) && (local_20 < 6)) {
          bVar8 = true;
        }
        else {
          bVar8 = false;
        }
        if (!bVar8) break;
        sVar1 = *(short *)(local_20 * 0xe + param_4);
        sVar2 = *(short *)(local_20 * 0xe + param_4 + 0xc);
        sVar3 = *(short *)(local_20 * 0xe + param_4 + 10);
        sVar4 = *(short *)(local_20 * 0xe + param_4 + 8);
        sVar5 = *(short *)(local_20 * 0xe + param_4 + 6);
        sVar6 = *(short *)(local_20 * 0xe + param_4 + 4);
        sVar7 = *(short *)(local_20 * 0xe + param_4 + 2);
        uVar10 = getComboSkillTableName(param_6);
        MySQL::set_query(param_1,
                         "upDate %s set value1 = %d, value2 = %d, value3 = %d, value4 = %d, value5 = %d, value6 = %d where charac_no = %u and combo_idx = %d"
                         ,uVar10,(int)sVar7,(int)sVar6,(int)sVar5,(int)sVar4,(int)sVar3,(int)sVar2,
                         param_2,(int)sVar1);
        cVar9 = MySQL::exec(param_1,true);
        if (cVar9 != '\x01') {
          return 0;
        }
        lVar12 = MySQL::getAffectedRowCount(param_1);
        if (lVar12 == 0) {
          sVar1 = *(short *)(local_20 * 0xe + param_4 + 0xc);
          sVar2 = *(short *)(local_20 * 0xe + param_4 + 10);
          sVar3 = *(short *)(local_20 * 0xe + param_4 + 8);
          sVar4 = *(short *)(local_20 * 0xe + param_4 + 6);
          sVar5 = *(short *)(local_20 * 0xe + param_4 + 4);
          sVar6 = *(short *)(local_20 * 0xe + param_4 + 2);
          sVar7 = *(short *)(local_20 * 0xe + param_4);
          uVar10 = getComboSkillTableName(param_6);
          MySQL::set_query(param_1,
                           "inSert into %s(charac_no, combo_idx, value1, value2, value3, value4, value5, value6) values(%u, %d, %d, %d, %d, %d, %d, %d)"
                           ,uVar10,param_2,(int)sVar7,(int)sVar6,(int)sVar5,(int)sVar4,(int)sVar3,
                           (int)sVar2,(int)sVar1);
          cVar9 = MySQL::exec(param_1,true);
          if ((cVar9 != '\x01') && (iVar11 = MySQL::getDBError(param_1), iVar11 != 0x426)) {
            return 0;
          }
        }
        local_20 = local_20 + 1;
      }
      return 1;
    }
    cMyTrace::cMyTrace(local_30,
                       "bool DB_UpdateComboSkill::setComboSkill(MySQL*, unsigned int, unsigned char, comoboSkillData*, ENUM_SKILL_TREE_KIND)"
                       ,0xbb42,5);
    cMyTrace::operator()
              (local_30,"DB_UpdateComboSkill::setComboSkill kind(%d) error characNo(%u)",param_6,
               param_2);
  }
  return 0;
}
```
