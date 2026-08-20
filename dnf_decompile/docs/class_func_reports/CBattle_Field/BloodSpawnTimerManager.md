# BloodSpawnTimerManager

`_ZN13CBattle_Field22BloodSpawnTimerManagerEbb`

`CBattle_Field::BloodSpawnTimerManager(bool, bool)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x08304dd2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08304dd2  _ZN13CBattle_Field22BloodSpawnTimerManagerEbb
#           CBattle_Field::BloodSpawnTimerManager(bool, bool)
# range [0x08304dd2, 0x08304f8d]
08304dd2 +0x000:  push   %ebp
08304dd3 +0x001:  mov    %esp,%ebp
08304dd5 +0x003:  sub    $0x48,%esp
08304dd8 +0x006:  mov    0xc(%ebp),%edx
08304ddb +0x009:  mov    0x10(%ebp),%eax
08304dde +0x00c:  mov    %dl,-0x1c(%ebp)
08304de1 +0x00f:  mov    %al,-0x20(%ebp)
08304de4 +0x012:  mov    0x8(%ebp),%eax
08304de7 +0x015:  add    $0x2ac,%eax
08304dec +0x01a:  mov    %eax,(%esp)
08304def +0x01d:  call   0830ebc2 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x7a7>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x7a7
08304df4 +0x022:  mov    %ax,-0x14(%ebp)
08304df8 +0x026:  mov    0x8(%ebp),%eax
08304dfb +0x029:  add    $0x2ac,%eax
08304e00 +0x02e:  mov    %eax,(%esp)
08304e03 +0x031:  call   0830ebce <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x7b3>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x7b3
08304e08 +0x036:  mov    %ax,-0x12(%ebp)
08304e0c +0x03a:  mov    0x8(%ebp),%eax
08304e0f +0x03d:  add    $0x2ac,%eax
08304e14 +0x042:  mov    %eax,(%esp)
08304e17 +0x045:  call   0830ebda <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x7bf>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x7bf
08304e1c +0x04a:  mov    %ax,-0x10(%ebp)
08304e20 +0x04e:  movzwl -0x12(%ebp),%eax
08304e24 +0x052:  cmp    -0x10(%ebp),%ax
08304e28 +0x056:  jg     08304f87 <+0x1b5>
08304e2e +0x05c:  movswl -0x12(%ebp),%eax
08304e32 +0x060:  mov    %eax,0x4(%esp)
08304e36 +0x064:  mov    0x8(%ebp),%eax
08304e39 +0x067:  mov    %eax,(%esp)
08304e3c +0x06a:  call   08306e32 <_ZN13CBattle_Field20checkBloodSpawnOrderEs>  ; CBattle_Field::checkBloodSpawnOrder(short)
08304e41 +0x06f:  xor    $0x1,%eax
08304e44 +0x072:  test   %al,%al
08304e46 +0x074:  je     08304e89 <+0xb7>
08304e48 +0x076:  movswl -0x12(%ebp),%edx
08304e4c +0x07a:  movswl -0x14(%ebp),%eax
08304e50 +0x07e:  mov    %edx,0x18(%esp)
08304e54 +0x082:  mov    %eax,0x14(%esp)
08304e58 +0x086:  movl   $"BLOOD_LOG : round_order_ (%d), small_round_order_ (%d) : SET ORDER ERROR!!\n",0x10(%esp)
08304e60 +0x08e:  movl   $0xd0c,0xc(%esp)
08304e68 +0x096:  movl   $&_ZZN13CBattle_Field22BloodSpawnTimerManagerEbbE19__PRETTY_FUNCTION__,0x8(%esp)
08304e70 +0x09e:  movl   $"battle_field.cpp",0x4(%esp)
08304e78 +0x0a6:  movl   $0x1,(%esp)
08304e7f +0x0ad:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08304e84 +0x0b2:  jmp    08304f8b <+0x1b9>
08304e89 +0x0b7:  movb   $0x0,-0xd(%ebp)
08304e8d +0x0bb:  cmpw   $0x0,-0x12(%ebp)
08304e92 +0x0c0:  jne    08304e98 <+0xc6>
08304e94 +0x0c2:  movb   $0x1,-0xd(%ebp)
08304e98 +0x0c6:  movswl -0x12(%ebp),%eax
08304e9c +0x0ca:  mov    %eax,0x4(%esp)
08304ea0 +0x0ce:  mov    0x8(%ebp),%eax
08304ea3 +0x0d1:  mov    %eax,(%esp)
08304ea6 +0x0d4:  call   083066ea <_ZN13CBattle_Field36get_blood_spawn_small_round_intervalEs>  ; CBattle_Field::get_blood_spawn_small_round_interval(short)
08304eab +0x0d9:  mov    %eax,-0xc(%ebp)
08304eae +0x0dc:  cmpl   $0x0,-0xc(%ebp)
08304eb2 +0x0e0:  jg     08304eed <+0x11b>
08304eb4 +0x0e2:  movswl -0x12(%ebp),%eax
08304eb8 +0x0e6:  mov    %eax,0x14(%esp)
08304ebc +0x0ea:  movl   $"BLOOD_LOG : small_round_order_ (%d) : ABNOMAL ORDER!!\n",0x10(%esp)
08304ec4 +0x0f2:  movl   $0xd19,0xc(%esp)
08304ecc +0x0fa:  movl   $&_ZZN13CBattle_Field22BloodSpawnTimerManagerEbbE19__PRETTY_FUNCTION__,0x8(%esp)
08304ed4 +0x102:  movl   $"battle_field.cpp",0x4(%esp)
08304edc +0x10a:  movl   $0x1,(%esp)
08304ee3 +0x111:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08304ee8 +0x116:  jmp    08304f8b <+0x1b9>
08304eed +0x11b:  cmpb   $0x0,-0x1c(%ebp)
08304ef1 +0x11f:  je     08304efe <+0x12c>
08304ef3 +0x121:  movzbl -0x20(%ebp),%eax
08304ef7 +0x125:  xor    $0x1,%eax
08304efa +0x128:  test   %al,%al
08304efc +0x12a:  jne    08304f04 <+0x132>
08304efe +0x12c:  cmpb   $0x0,-0xd(%ebp)
08304f02 +0x130:  je     08304f34 <+0x162>
08304f04 +0x132:  cmpb   $0x0,-0x1c(%ebp)
08304f08 +0x136:  mov    0x8(%ebp),%eax
08304f0b +0x139:  mov    (%eax),%eax
08304f0d +0x13b:  add    $0xddc,%eax
08304f12 +0x140:  mov    %eax,(%esp)
08304f15 +0x143:  call   08306faa <_ZN13CBattle_Field21CBloodClearRewardData17onStartBloodRoundEv>  ; CBattle_Field::CBloodClearRewardData::onStartBloodRound()
08304f1a +0x148:  movswl -0x14(%ebp),%eax
08304f1e +0x14c:  mov    -0xc(%ebp),%edx
08304f21 +0x14f:  mov    %edx,0x8(%esp)
08304f25 +0x153:  mov    %eax,0x4(%esp)
08304f29 +0x157:  mov    0x8(%ebp),%eax
08304f2c +0x15a:  mov    %eax,(%esp)
08304f2f +0x15d:  call   08305e9c <_ZN13CBattle_Field24BloodRoundIntervalPacketEsi>  ; CBattle_Field::BloodRoundIntervalPacket(short, int)
08304f34 +0x162:  movswl -0x12(%ebp),%eax
08304f38 +0x166:  mov    %eax,0x4(%esp)
08304f3c +0x16a:  mov    0x8(%ebp),%eax
08304f3f +0x16d:  mov    %eax,(%esp)
08304f42 +0x170:  call   083053d2 <_ZN13CBattle_Field29BloodPhaseSpawnTimerResgisterEs>  ; CBattle_Field::BloodPhaseSpawnTimerResgister(short)
08304f47 +0x175:  cmp    $0xffffffff,%eax
08304f4a +0x178:  sete   %al
08304f4d +0x17b:  test   %al,%al
08304f4f +0x17d:  je     08304f8a <+0x1b8>
08304f51 +0x17f:  movswl -0x12(%ebp),%eax
08304f55 +0x183:  mov    %eax,0x14(%esp)
08304f59 +0x187:  movl   $"BLOOD_LOG : small_round_order_ (%d) : ABNOMAL ORDER!!\n",0x10(%esp)
08304f61 +0x18f:  movl   $0xd2b,0xc(%esp)
08304f69 +0x197:  movl   $&_ZZN13CBattle_Field22BloodSpawnTimerManagerEbbE19__PRETTY_FUNCTION__,0x8(%esp)
08304f71 +0x19f:  movl   $"battle_field.cpp",0x4(%esp)
08304f79 +0x1a7:  movl   $0x1,(%esp)
08304f80 +0x1ae:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08304f85 +0x1b3:  jmp    08304f8b <+0x1b9>
08304f87 +0x1b5:  nop
08304f88 +0x1b6:  jmp    08304f8b <+0x1b9>
08304f8a +0x1b8:  nop
08304f8b +0x1b9:  leave
08304f8c +0x1ba:  ret
08304f8d +0x1bb:  nop
```

## 反编译 C

```c
// CBattle_Field::BloodSpawnTimerManager @ 0x8304dd2

/* CBattle_Field::BloodSpawnTimerManager(bool, bool) */

void __thiscall CBattle_Field::BloodSpawnTimerManager(CBattle_Field *this,bool param_1,bool param_2)

{
  char cVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  
  sVar2 = CBloodRound::getBloodRoundOrder((CBloodRound *)(this + 0x2ac));
  sVar3 = CBloodRound::getBloodSmallRoundOrder((CBloodRound *)(this + 0x2ac));
  sVar4 = CBloodRound::getBloodLastSmallRoundOrder((CBloodRound *)(this + 0x2ac));
  if (sVar3 <= sVar4) {
    cVar1 = checkBloodSpawnOrder(this,sVar3);
    if (cVar1 == '\x01') {
      iVar5 = get_blood_spawn_small_round_interval(this,sVar3);
      if (iVar5 < 1) {
        LogManager::logFormat
                  (1,"battle_field.cpp","void CBattle_Field::BloodSpawnTimerManager(bool, bool)",
                   0xd19,"BLOOD_LOG : small_round_order_ (%d) : ABNOMAL ORDER!!\n",(int)sVar3);
      }
      else {
        if (((param_1) && (!param_2)) || (sVar3 == 0)) {
          CBloodClearRewardData::onStartBloodRound((CBloodClearRewardData *)(*(int *)this + 0xddc));
          BloodRoundIntervalPacket(this,sVar2,iVar5);
        }
        iVar5 = BloodPhaseSpawnTimerResgister(this,sVar3);
        if (iVar5 == -1) {
          LogManager::logFormat
                    (1,"battle_field.cpp","void CBattle_Field::BloodSpawnTimerManager(bool, bool)",
                     0xd2b,"BLOOD_LOG : small_round_order_ (%d) : ABNOMAL ORDER!!\n",(int)sVar3);
        }
      }
    }
    else {
      LogManager::logFormat
                (1,"battle_field.cpp","void CBattle_Field::BloodSpawnTimerManager(bool, bool)",0xd0c
                 ,"BLOOD_LOG : round_order_ (%d), small_round_order_ (%d) : SET ORDER ERROR!!\n",
                 (int)sVar2,(int)sVar3);
    }
  }
  return;
}
```
