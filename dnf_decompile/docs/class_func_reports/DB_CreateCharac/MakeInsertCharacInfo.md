# MakeInsertCharacInfo

`_ZN15DB_CreateCharac20MakeInsertCharacInfoEP5MySQLP17SIG_CREATE_CHARACPKc`

`DB_CreateCharac::MakeInsertCharacInfo(MySQL*, SIG_CREATE_CHARAC*, char const*)`

| 类 | 地址 |
|---|---|
| `DB_CreateCharac` | `0x080ec2a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080ec2a0  _ZN15DB_CreateCharac20MakeInsertCharacInfoEP5MySQLP17SIG_CREATE_CHARACPKc
#           DB_CreateCharac::MakeInsertCharacInfo(MySQL*, SIG_CREATE_CHARAC*, char const*)
# range [0x080ec2a0, 0x080ec4a9]
080ec2a0 +0x000:  push   %ebp
080ec2a1 +0x001:  mov    %esp,%ebp
080ec2a3 +0x003:  push   %edi
080ec2a4 +0x004:  push   %esi
080ec2a5 +0x005:  push   %ebx
080ec2a6 +0x006:  sub    $0xcc,%esp
080ec2ac +0x00c:  mov    0x10(%ebp),%eax
080ec2af +0x00f:  movzbl 0x23(%eax),%eax
080ec2b3 +0x013:  movsbl %al,%eax
080ec2b6 +0x016:  mov    %eax,-0x64(%ebp)
080ec2b9 +0x019:  mov    0x10(%ebp),%eax
080ec2bc +0x01c:  movzbl 0x25(%eax),%eax
080ec2c0 +0x020:  movsbl %al,%eax
080ec2c3 +0x023:  mov    %eax,-0x60(%ebp)
080ec2c6 +0x026:  mov    &DEFAULT_MAX_FATIGUE,%eax
080ec2cb +0x02b:  mov    %eax,-0x5c(%ebp)
080ec2ce +0x02e:  mov    0x10(%ebp),%eax
080ec2d1 +0x031:  mov    0x74(%eax),%eax
080ec2d4 +0x034:  mov    %eax,-0x58(%ebp)
080ec2d7 +0x037:  mov    0x10(%ebp),%eax
080ec2da +0x03a:  movzwl 0x72(%eax),%eax
080ec2de +0x03e:  cwtl
080ec2df +0x03f:  mov    %eax,-0x54(%ebp)
080ec2e2 +0x042:  mov    0x10(%ebp),%eax
080ec2e5 +0x045:  movzwl 0x70(%eax),%eax
080ec2e9 +0x049:  cwtl
080ec2ea +0x04a:  mov    %eax,-0x50(%ebp)
080ec2ed +0x04d:  mov    0x10(%ebp),%eax
080ec2f0 +0x050:  movzwl 0x6e(%eax),%eax
080ec2f4 +0x054:  movzwl %ax,%eax
080ec2f7 +0x057:  mov    %eax,-0x4c(%ebp)
080ec2fa +0x05a:  mov    0x10(%ebp),%eax
080ec2fd +0x05d:  movzwl 0x6c(%eax),%eax
080ec301 +0x061:  movzwl %ax,%eax
080ec304 +0x064:  mov    %eax,-0x48(%ebp)
080ec307 +0x067:  mov    0x10(%ebp),%eax
080ec30a +0x06a:  mov    0x68(%eax),%eax
080ec30d +0x06d:  mov    %eax,-0x44(%ebp)
080ec310 +0x070:  mov    0x10(%ebp),%eax
080ec313 +0x073:  movzwl 0x66(%eax),%eax
080ec317 +0x077:  cwtl
080ec318 +0x078:  mov    %eax,-0x40(%ebp)
080ec31b +0x07b:  mov    0x10(%ebp),%eax
080ec31e +0x07e:  movzwl 0x64(%eax),%eax
080ec322 +0x082:  cwtl
080ec323 +0x083:  mov    %eax,-0x3c(%ebp)
080ec326 +0x086:  mov    0x10(%ebp),%eax
080ec329 +0x089:  mov    0x60(%eax),%eax
080ec32c +0x08c:  mov    %eax,-0x38(%ebp)
080ec32f +0x08f:  mov    0x10(%ebp),%eax
080ec332 +0x092:  add    $0x3e,%eax
080ec335 +0x095:  movl   $0x22,0xc(%esp)
080ec33d +0x09d:  mov    %eax,0x8(%esp)
080ec341 +0x0a1:  movl   $0x1,0x4(%esp)
080ec349 +0x0a9:  mov    0xc(%ebp),%eax
080ec34c +0x0ac:  mov    %eax,(%esp)
080ec34f +0x0af:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
080ec354 +0x0b4:  mov    %eax,-0x34(%ebp)
080ec357 +0x0b7:  mov    0x10(%ebp),%eax
080ec35a +0x0ba:  add    $0x36,%eax
080ec35d +0x0bd:  movl   $0x8,0xc(%esp)
080ec365 +0x0c5:  mov    %eax,0x8(%esp)
080ec369 +0x0c9:  movl   $0x0,0x4(%esp)
080ec371 +0x0d1:  mov    0xc(%ebp),%eax
080ec374 +0x0d4:  mov    %eax,(%esp)
080ec377 +0x0d7:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
080ec37c +0x0dc:  mov    %eax,-0x30(%ebp)
080ec37f +0x0df:  mov    0x10(%ebp),%eax
080ec382 +0x0e2:  movzwl 0x34(%eax),%eax
080ec386 +0x0e6:  movzwl %ax,%eax
080ec389 +0x0e9:  mov    %eax,-0x2c(%ebp)
080ec38c +0x0ec:  mov    0x10(%ebp),%eax
080ec38f +0x0ef:  movzwl 0x32(%eax),%eax
080ec393 +0x0f3:  movzwl %ax,%eax
080ec396 +0x0f6:  mov    %eax,-0x28(%ebp)
080ec399 +0x0f9:  mov    0x10(%ebp),%eax
080ec39c +0x0fc:  movzwl 0x30(%eax),%eax
080ec3a0 +0x100:  movzwl %ax,%eax
080ec3a3 +0x103:  mov    %eax,-0x24(%ebp)
080ec3a6 +0x106:  mov    0x10(%ebp),%eax
080ec3a9 +0x109:  movzwl 0x2e(%eax),%eax
080ec3ad +0x10d:  movzwl %ax,%eax
080ec3b0 +0x110:  mov    %eax,-0x20(%ebp)
080ec3b3 +0x113:  mov    0x10(%ebp),%eax
080ec3b6 +0x116:  mov    0x2a(%eax),%eax
080ec3b9 +0x119:  mov    %eax,-0x1c(%ebp)
080ec3bc +0x11c:  mov    0x10(%ebp),%eax
080ec3bf +0x11f:  mov    0x26(%eax),%edi
080ec3c2 +0x122:  mov    0x10(%ebp),%eax
080ec3c5 +0x125:  movzbl 0x534c(%eax),%eax
080ec3cc +0x12c:  movsbl %al,%esi
080ec3cf +0x12f:  mov    0x10(%ebp),%eax
080ec3d2 +0x132:  movzbl 0x22(%eax),%eax
080ec3d6 +0x136:  movsbl %al,%ebx
080ec3d9 +0x139:  mov    0x10(%ebp),%eax
080ec3dc +0x13c:  mov    (%eax),%eax
080ec3de +0x13e:  movl   $0x0,0x4(%esp)
080ec3e6 +0x146:  mov    %eax,(%esp)
080ec3e9 +0x149:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
080ec3ee +0x14e:  mov    %eax,%edx
080ec3f0 +0x150:  mov    -0x64(%ebp),%eax
080ec3f3 +0x153:  mov    %eax,0x64(%esp)
080ec3f7 +0x157:  mov    -0x60(%ebp),%eax
080ec3fa +0x15a:  mov    %eax,0x60(%esp)
080ec3fe +0x15e:  mov    -0x5c(%ebp),%eax
080ec401 +0x161:  mov    %eax,0x5c(%esp)
080ec405 +0x165:  mov    -0x58(%ebp),%eax
080ec408 +0x168:  mov    %eax,0x58(%esp)
080ec40c +0x16c:  mov    -0x54(%ebp),%eax
080ec40f +0x16f:  mov    %eax,0x54(%esp)
080ec413 +0x173:  mov    -0x50(%ebp),%eax
080ec416 +0x176:  mov    %eax,0x50(%esp)
080ec41a +0x17a:  mov    -0x4c(%ebp),%eax
080ec41d +0x17d:  mov    %eax,0x4c(%esp)
080ec421 +0x181:  mov    -0x48(%ebp),%eax
080ec424 +0x184:  mov    %eax,0x48(%esp)
080ec428 +0x188:  mov    -0x44(%ebp),%eax
080ec42b +0x18b:  mov    %eax,0x44(%esp)
080ec42f +0x18f:  mov    -0x40(%ebp),%eax
080ec432 +0x192:  mov    %eax,0x40(%esp)
080ec436 +0x196:  mov    -0x3c(%ebp),%eax
080ec439 +0x199:  mov    %eax,0x3c(%esp)
080ec43d +0x19d:  mov    -0x38(%ebp),%eax
080ec440 +0x1a0:  mov    %eax,0x38(%esp)
080ec444 +0x1a4:  mov    -0x34(%ebp),%eax
080ec447 +0x1a7:  mov    %eax,0x34(%esp)
080ec44b +0x1ab:  mov    -0x30(%ebp),%eax
080ec44e +0x1ae:  mov    %eax,0x30(%esp)
080ec452 +0x1b2:  mov    -0x2c(%ebp),%eax
080ec455 +0x1b5:  mov    %eax,0x2c(%esp)
080ec459 +0x1b9:  mov    -0x28(%ebp),%eax
080ec45c +0x1bc:  mov    %eax,0x28(%esp)
080ec460 +0x1c0:  mov    -0x24(%ebp),%eax
080ec463 +0x1c3:  mov    %eax,0x24(%esp)
080ec467 +0x1c7:  mov    -0x20(%ebp),%eax
080ec46a +0x1ca:  mov    %eax,0x20(%esp)
080ec46e +0x1ce:  mov    -0x1c(%ebp),%eax
080ec471 +0x1d1:  mov    %eax,0x1c(%esp)
080ec475 +0x1d5:  mov    %edi,0x18(%esp)
080ec479 +0x1d9:  mov    %esi,0x14(%esp)
080ec47d +0x1dd:  mov    %ebx,0x10(%esp)
080ec481 +0x1e1:  mov    0x14(%ebp),%eax
080ec484 +0x1e4:  mov    %eax,0xc(%esp)
080ec488 +0x1e8:  mov    %edx,0x8(%esp)
080ec48c +0x1ec:  movl   $"inSert into charac_info (m_id,charac_name,job,sex,maxHP,maxMP,phy_attack,phy_defense,mag_attack,mag_defense,element_resist,spec_property,inven_weight,hp_regen,mp_regen,move_speed,attack_speed,cast_speed,hit_recovery,jump,charac_weight,max_fatigue,create_time,expert_job,event_charac_level) values(%s,'%s',%d,%d,%d,%u,%d,%d,%d,%d,'%s','%s',%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,NOW(),%d,%d)",0x4(%esp)
080ec494 +0x1f4:  mov    0xc(%ebp),%eax
080ec497 +0x1f7:  mov    %eax,(%esp)
080ec49a +0x1fa:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
080ec49f +0x1ff:  add    $0xcc,%esp
080ec4a5 +0x205:  pop    %ebx
080ec4a6 +0x206:  pop    %esi
080ec4a7 +0x207:  pop    %edi
080ec4a8 +0x208:  pop    %ebp
080ec4a9 +0x209:  ret
```

## 反编译 C

```c
// DB_CreateCharac::MakeInsertCharacInfo @ 0x80ec2a0

/* DB_CreateCharac::MakeInsertCharacInfo(MySQL*, SIG_CREATE_CHARAC*, char const*) */

void __thiscall
DB_CreateCharac::MakeInsertCharacInfo
          (DB_CreateCharac *this,MySQL *param_1,SIG_CREATE_CHARAC *param_2,char *param_3)

{
  SIG_CREATE_CHARAC SVar1;
  SIG_CREATE_CHARAC SVar2;
  SIG_CREATE_CHARAC SVar3;
  SIG_CREATE_CHARAC SVar4;
  short sVar5;
  short sVar6;
  ushort uVar7;
  ushort uVar8;
  short sVar9;
  short sVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  
  uVar20 = DEFAULT_MAX_FATIGUE;
  SVar1 = param_2[0x23];
  SVar2 = param_2[0x25];
  uVar15 = *(undefined4 *)(param_2 + 0x74);
  sVar5 = *(short *)(param_2 + 0x72);
  sVar6 = *(short *)(param_2 + 0x70);
  uVar7 = *(ushort *)(param_2 + 0x6e);
  uVar8 = *(ushort *)(param_2 + 0x6c);
  uVar16 = *(undefined4 *)(param_2 + 0x68);
  sVar9 = *(short *)(param_2 + 0x66);
  sVar10 = *(short *)(param_2 + 100);
  uVar17 = *(undefined4 *)(param_2 + 0x60);
  uVar21 = MySQL::blob_to_str(param_1,1,param_2 + 0x3e,0x22);
  uVar22 = MySQL::blob_to_str(param_1,0,param_2 + 0x36,8);
  uVar11 = *(ushort *)(param_2 + 0x34);
  uVar12 = *(ushort *)(param_2 + 0x32);
  uVar13 = *(ushort *)(param_2 + 0x30);
  uVar14 = *(ushort *)(param_2 + 0x2e);
  uVar18 = *(undefined4 *)(param_2 + 0x2a);
  uVar19 = *(undefined4 *)(param_2 + 0x26);
  SVar3 = param_2[0x534c];
  SVar4 = param_2[0x22];
  uVar23 = NumberToString(*(uint *)param_2,0);
  MySQL::set_query(param_1,
                   "inSert into charac_info (m_id,charac_name,job,sex,maxHP,maxMP,phy_attack,phy_defense,mag_attack,mag_defense,element_resist,spec_property,inven_weight,hp_regen,mp_regen,move_speed,attack_speed,cast_speed,hit_recovery,jump,charac_weight,max_fatigue,create_time,expert_job,event_charac_level) values(%s,\'%s\',%d,%d,%d,%u,%d,%d,%d,%d,\'%s\',\'%s\',%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,NOW(),%d,%d)"
                   ,uVar23,param_3,(int)(char)SVar4,(int)(char)SVar3,uVar19,uVar18,(uint)uVar14,
                   (uint)uVar13,(uint)uVar12,(uint)uVar11,uVar22,uVar21,uVar17,(int)sVar10,
                   (int)sVar9,uVar16,(uint)uVar8,(uint)uVar7,(int)sVar6,(int)sVar5,uVar15,uVar20,
                   (int)(char)SVar2,(int)(char)SVar1);
  return;
}
```
