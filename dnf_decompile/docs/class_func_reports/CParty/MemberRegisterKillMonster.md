# MemberRegisterKillMonster

`_ZN6CParty25MemberRegisterKillMonsterER11map_monsterh`

`CParty::MemberRegisterKillMonster(map_monster&, unsigned char)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085bae6e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085bae6e  _ZN6CParty25MemberRegisterKillMonsterER11map_monsterh
#           CParty::MemberRegisterKillMonster(map_monster&, unsigned char)
# range [0x085bae6e, 0x085bb0ab]
085bae6e +0x000:  push   %ebp
085bae6f +0x001:  mov    %esp,%ebp
085bae71 +0x003:  sub    $0x58,%esp
085bae74 +0x006:  mov    0x10(%ebp),%eax
085bae77 +0x009:  mov    %al,-0x3c(%ebp)
085bae7a +0x00c:  mov    0xc(%ebp),%eax
085bae7d +0x00f:  movzbl 0x8(%eax),%eax
085bae81 +0x013:  cmp    $0x3,%al
085bae83 +0x015:  jne    085baf35 <+0xc7>
085bae89 +0x01b:  movl   $0x1,-0x2c(%ebp)
085bae90 +0x022:  jmp    085baf21 <+0xb3>
085bae95 +0x027:  mov    -0x2c(%ebp),%eax
085bae98 +0x02a:  mov    %eax,0x4(%esp)
085bae9c +0x02e:  mov    0x8(%ebp),%eax
085bae9f +0x031:  mov    %eax,(%esp)
085baea2 +0x034:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
085baea7 +0x039:  xor    $0x1,%eax
085baeaa +0x03c:  test   %al,%al
085baeac +0x03e:  jne    085baf1c <+0xae>
085baeae +0x040:  mov    -0x2c(%ebp),%eax
085baeb1 +0x043:  mov    %eax,0x4(%esp)
085baeb5 +0x047:  mov    0x8(%ebp),%eax
085baeb8 +0x04a:  mov    %eax,(%esp)
085baebb +0x04d:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
085baec0 +0x052:  mov    %eax,-0x28(%ebp)
085baec3 +0x055:  movl   $0xc,0x4(%esp)
085baecb +0x05d:  mov    -0x28(%ebp),%eax
085baece +0x060:  mov    %eax,(%esp)
085baed1 +0x063:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
085baed6 +0x068:  mov    %eax,-0x24(%ebp)
085baed9 +0x06b:  movzbl -0x3c(%ebp),%edx
085baedd +0x06f:  mov    0xc(%ebp),%eax
085baee0 +0x072:  mov    0xc(%eax),%eax
085baee3 +0x075:  mov    %edx,0x8(%esp)
085baee7 +0x079:  mov    %eax,0x4(%esp)
085baeeb +0x07d:  mov    -0x24(%ebp),%eax
085baeee +0x080:  mov    %eax,(%esp)
085baef1 +0x083:  call   0854d184 <_ZN16CKillMonsterInfo13CheckBossKillEjh>  ; CKillMonsterInfo::CheckBossKill(unsigned int, unsigned char)
085baef6 +0x088:  xor    $0x1,%eax
085baef9 +0x08b:  test   %al,%al
085baefb +0x08d:  je     085baf1d <+0xaf>
085baefd +0x08f:  movzbl -0x3c(%ebp),%edx
085baf01 +0x093:  mov    0xc(%ebp),%eax
085baf04 +0x096:  mov    0xc(%eax),%eax
085baf07 +0x099:  mov    %edx,0x8(%esp)
085baf0b +0x09d:  mov    %eax,0x4(%esp)
085baf0f +0x0a1:  mov    -0x24(%ebp),%eax
085baf12 +0x0a4:  mov    %eax,(%esp)
085baf15 +0x0a7:  call   0854d418 <_ZN16CKillMonsterInfo16RegisterBossKillEjh>  ; CKillMonsterInfo::RegisterBossKill(unsigned int, unsigned char)
085baf1a +0x0ac:  jmp    085baf1d <+0xaf>
085baf1c +0x0ae:  nop
085baf1d +0x0af:  addl   $0x1,-0x2c(%ebp)
085baf21 +0x0b3:  cmpl   $0x3,-0x2c(%ebp)
085baf25 +0x0b7:  setle  %al
085baf28 +0x0ba:  test   %al,%al
085baf2a +0x0bc:  jne    085bae95 <+0x27>
085baf30 +0x0c2:  jmp    085bb0aa <+0x23c>
085baf35 +0x0c7:  mov    0xc(%ebp),%eax
085baf38 +0x0ca:  movzbl 0x8(%eax),%eax
085baf3c +0x0ce:  cmp    $0x8,%al
085baf3e +0x0d0:  jne    085baff0 <+0x182>
085baf44 +0x0d6:  movl   $0x1,-0x20(%ebp)
085baf4b +0x0dd:  jmp    085bafdc <+0x16e>
085baf50 +0x0e2:  mov    -0x20(%ebp),%eax
085baf53 +0x0e5:  mov    %eax,0x4(%esp)
085baf57 +0x0e9:  mov    0x8(%ebp),%eax
085baf5a +0x0ec:  mov    %eax,(%esp)
085baf5d +0x0ef:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
085baf62 +0x0f4:  xor    $0x1,%eax
085baf65 +0x0f7:  test   %al,%al
085baf67 +0x0f9:  jne    085bafd7 <+0x169>
085baf69 +0x0fb:  mov    -0x20(%ebp),%eax
085baf6c +0x0fe:  mov    %eax,0x4(%esp)
085baf70 +0x102:  mov    0x8(%ebp),%eax
085baf73 +0x105:  mov    %eax,(%esp)
085baf76 +0x108:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
085baf7b +0x10d:  mov    %eax,-0x1c(%ebp)
085baf7e +0x110:  movl   $0xc,0x4(%esp)
085baf86 +0x118:  mov    -0x1c(%ebp),%eax
085baf89 +0x11b:  mov    %eax,(%esp)
085baf8c +0x11e:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
085baf91 +0x123:  mov    %eax,-0x18(%ebp)
085baf94 +0x126:  movzbl -0x3c(%ebp),%edx
085baf98 +0x12a:  mov    0xc(%ebp),%eax
085baf9b +0x12d:  mov    0xc(%eax),%eax
085baf9e +0x130:  mov    %edx,0x8(%esp)
085bafa2 +0x134:  mov    %eax,0x4(%esp)
085bafa6 +0x138:  mov    -0x18(%ebp),%eax
085bafa9 +0x13b:  mov    %eax,(%esp)
085bafac +0x13e:  call   0854d1e8 <_ZN16CKillMonsterInfo16CheckAPCBossKillEjh>  ; CKillMonsterInfo::CheckAPCBossKill(unsigned int, unsigned char)
085bafb1 +0x143:  xor    $0x1,%eax
085bafb4 +0x146:  test   %al,%al
085bafb6 +0x148:  je     085bafd8 <+0x16a>
085bafb8 +0x14a:  movzbl -0x3c(%ebp),%edx
085bafbc +0x14e:  mov    0xc(%ebp),%eax
085bafbf +0x151:  mov    0xc(%eax),%eax
085bafc2 +0x154:  mov    %edx,0x8(%esp)
085bafc6 +0x158:  mov    %eax,0x4(%esp)
085bafca +0x15c:  mov    -0x18(%ebp),%eax
085bafcd +0x15f:  mov    %eax,(%esp)
085bafd0 +0x162:  call   0854d48c <_ZN16CKillMonsterInfo19RegisterAPCBossKillEjh>  ; CKillMonsterInfo::RegisterAPCBossKill(unsigned int, unsigned char)
085bafd5 +0x167:  jmp    085bafd8 <+0x16a>
085bafd7 +0x169:  nop
085bafd8 +0x16a:  addl   $0x1,-0x20(%ebp)
085bafdc +0x16e:  cmpl   $0x3,-0x20(%ebp)
085bafe0 +0x172:  setle  %al
085bafe3 +0x175:  test   %al,%al
085bafe5 +0x177:  jne    085baf50 <+0xe2>
085bafeb +0x17d:  jmp    085bb0aa <+0x23c>
085baff0 +0x182:  mov    0xc(%ebp),%eax
085baff3 +0x185:  mov    %eax,(%esp)
085baff6 +0x188:  call   08151182 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xab7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xab7
085baffb +0x18d:  test   %al,%al
085baffd +0x18f:  je     085bb0aa <+0x23c>
085bb003 +0x195:  movl   $0x1,-0x14(%ebp)
085bb00a +0x19c:  jmp    085bb09b <+0x22d>
085bb00f +0x1a1:  mov    -0x14(%ebp),%eax
085bb012 +0x1a4:  mov    %eax,0x4(%esp)
085bb016 +0x1a8:  mov    0x8(%ebp),%eax
085bb019 +0x1ab:  mov    %eax,(%esp)
085bb01c +0x1ae:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
085bb021 +0x1b3:  xor    $0x1,%eax
085bb024 +0x1b6:  test   %al,%al
085bb026 +0x1b8:  jne    085bb096 <+0x228>
085bb028 +0x1ba:  mov    -0x14(%ebp),%eax
085bb02b +0x1bd:  mov    %eax,0x4(%esp)
085bb02f +0x1c1:  mov    0x8(%ebp),%eax
085bb032 +0x1c4:  mov    %eax,(%esp)
085bb035 +0x1c7:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
085bb03a +0x1cc:  mov    %eax,-0x10(%ebp)
085bb03d +0x1cf:  movl   $0xc,0x4(%esp)
085bb045 +0x1d7:  mov    -0x10(%ebp),%eax
085bb048 +0x1da:  mov    %eax,(%esp)
085bb04b +0x1dd:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
085bb050 +0x1e2:  mov    %eax,-0xc(%ebp)
085bb053 +0x1e5:  movzbl -0x3c(%ebp),%edx
085bb057 +0x1e9:  mov    0xc(%ebp),%eax
085bb05a +0x1ec:  mov    0xc(%eax),%eax
085bb05d +0x1ef:  mov    %edx,0x8(%esp)
085bb061 +0x1f3:  mov    %eax,0x4(%esp)
085bb065 +0x1f7:  mov    -0xc(%ebp),%eax
085bb068 +0x1fa:  mov    %eax,(%esp)
085bb06b +0x1fd:  call   0854d1b6 <_ZN16CKillMonsterInfo14CheckNamedKillEjh>  ; CKillMonsterInfo::CheckNamedKill(unsigned int, unsigned char)
085bb070 +0x202:  xor    $0x1,%eax
085bb073 +0x205:  test   %al,%al
085bb075 +0x207:  je     085bb097 <+0x229>
085bb077 +0x209:  movzbl -0x3c(%ebp),%edx
085bb07b +0x20d:  mov    0xc(%ebp),%eax
085bb07e +0x210:  mov    0xc(%eax),%eax
085bb081 +0x213:  mov    %edx,0x8(%esp)
085bb085 +0x217:  mov    %eax,0x4(%esp)
085bb089 +0x21b:  mov    -0xc(%ebp),%eax
085bb08c +0x21e:  mov    %eax,(%esp)
085bb08f +0x221:  call   0854d452 <_ZN16CKillMonsterInfo17RegisterNamedKillEjh>  ; CKillMonsterInfo::RegisterNamedKill(unsigned int, unsigned char)
085bb094 +0x226:  jmp    085bb097 <+0x229>
085bb096 +0x228:  nop
085bb097 +0x229:  addl   $0x1,-0x14(%ebp)
085bb09b +0x22d:  cmpl   $0x3,-0x14(%ebp)
085bb09f +0x231:  setle  %al
085bb0a2 +0x234:  test   %al,%al
085bb0a4 +0x236:  jne    085bb00f <+0x1a1>
085bb0aa +0x23c:  leave
085bb0ab +0x23d:  ret
```

## 反编译 C

```c
// CParty::MemberRegisterKillMonster @ 0x85bae6e

/* CParty::MemberRegisterKillMonster(map_monster&, unsigned char) */

void __thiscall CParty::MemberRegisterKillMonster(CParty *this,map_monster *param_1,uchar param_2)

{
  char cVar1;
  CUser *pCVar2;
  CKillMonsterInfo *pCVar3;
  int local_30;
  int local_24;
  int local_18;
  
  if (param_1[8] == (map_monster)0x3) {
    for (local_30 = 1; local_30 < 4; local_30 = local_30 + 1) {
      cVar1 = checkValidUser(this,local_30);
      if (cVar1 == '\x01') {
        pCVar2 = (CUser *)get_user(this,local_30);
        pCVar3 = (CKillMonsterInfo *)CUser::GetCharacExpandData(pCVar2,0xc);
        cVar1 = CKillMonsterInfo::CheckBossKill(pCVar3,*(uint *)(param_1 + 0xc),param_2);
        if (cVar1 != '\x01') {
          CKillMonsterInfo::RegisterBossKill(pCVar3,*(uint *)(param_1 + 0xc),param_2);
        }
      }
    }
  }
  else if (param_1[8] == (map_monster)0x8) {
    for (local_24 = 1; local_24 < 4; local_24 = local_24 + 1) {
      cVar1 = checkValidUser(this,local_24);
      if (cVar1 == '\x01') {
        pCVar2 = (CUser *)get_user(this,local_24);
        pCVar3 = (CKillMonsterInfo *)CUser::GetCharacExpandData(pCVar2,0xc);
        cVar1 = CKillMonsterInfo::CheckAPCBossKill(pCVar3,*(uint *)(param_1 + 0xc),param_2);
        if (cVar1 != '\x01') {
          CKillMonsterInfo::RegisterAPCBossKill(pCVar3,*(uint *)(param_1 + 0xc),param_2);
        }
      }
    }
  }
  else {
    cVar1 = map_monster::isNamedMonster(param_1);
    if (cVar1 != '\0') {
      for (local_18 = 1; local_18 < 4; local_18 = local_18 + 1) {
        cVar1 = checkValidUser(this,local_18);
        if (cVar1 == '\x01') {
          pCVar2 = (CUser *)get_user(this,local_18);
          pCVar3 = (CKillMonsterInfo *)CUser::GetCharacExpandData(pCVar2,0xc);
          cVar1 = CKillMonsterInfo::CheckNamedKill(pCVar3,*(uint *)(param_1 + 0xc),param_2);
          if (cVar1 != '\x01') {
            CKillMonsterInfo::RegisterNamedKill(pCVar3,*(uint *)(param_1 + 0xc),param_2);
          }
        }
      }
    }
  }
  return;
}
```
