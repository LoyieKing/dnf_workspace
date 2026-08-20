# handleKillMonster

`_ZN8WongWork10CBossTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi`

`WongWork::CBossTower::handleKillMonster(CUser*, unsigned short, unsigned short, MSG_MONSTER_DIE const&, int*)`

| 类 | 地址 |
|---|---|
| `WongWork::CBossTower` | `0x08143ebc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08143ebc  _ZN8WongWork10CBossTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi
#           WongWork::CBossTower::handleKillMonster(CUser*, unsigned short, unsigned short, MSG_MONSTER_DIE const&, int*)
# range [0x08143ebc, 0x08143f69]
08143ebc +0x00:  push   %ebp
08143ebd +0x01:  mov    %esp,%ebp
08143ebf +0x03:  push   %ebx
08143ec0 +0x04:  sub    $0x44,%esp
08143ec3 +0x07:  mov    0x10(%ebp),%edx
08143ec6 +0x0a:  mov    0x14(%ebp),%eax
08143ec9 +0x0d:  mov    %dx,-0x1c(%ebp)
08143ecd +0x11:  mov    %ax,-0x20(%ebp)
08143ed1 +0x15:  movzwl -0x20(%ebp),%ecx
08143ed5 +0x19:  movzwl -0x1c(%ebp),%edx
08143ed9 +0x1d:  mov    0x8(%ebp),%eax
08143edc +0x20:  mov    0x1c(%ebp),%ebx
08143edf +0x23:  mov    %ebx,0x14(%esp)
08143ee3 +0x27:  mov    0x18(%ebp),%ebx
08143ee6 +0x2a:  mov    %ebx,0x10(%esp)
08143eea +0x2e:  mov    %ecx,0xc(%esp)
08143eee +0x32:  mov    %edx,0x8(%esp)
08143ef2 +0x36:  mov    0xc(%ebp),%edx
08143ef5 +0x39:  mov    %edx,0x4(%esp)
08143ef9 +0x3d:  mov    %eax,(%esp)
08143efc +0x40:  call   08150388 <_ZN8WongWork10CBossStage17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi>  ; WongWork::CBossStage::handleKillMonster(CUser*, unsigned short, unsigned short, MSG_MONSTER_DIE const&, int*)
08143f01 +0x45:  mov    %al,-0x9(%ebp)
08143f04 +0x48:  movzbl -0x9(%ebp),%eax
08143f08 +0x4c:  xor    $0x1,%eax
08143f0b +0x4f:  test   %al,%al
08143f0d +0x51:  je     08143f16 <+0x5a>
08143f0f +0x53:  mov    $0x0,%eax
08143f14 +0x58:  jmp    08143f63 <+0xa7>
08143f16 +0x5a:  mov    0x8(%ebp),%eax
08143f19 +0x5d:  add    $0xa00,%eax
08143f1e +0x62:  mov    %eax,(%esp)
08143f21 +0x65:  call   081459ba <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x43d>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x43d
08143f26 +0x6a:  test   %al,%al
08143f28 +0x6c:  je     08143f5e <+0xa2>
08143f2a +0x6e:  mov    0x8(%ebp),%eax
08143f2d +0x71:  mov    %eax,(%esp)
08143f30 +0x74:  call   081440b2 <_ZN8WongWork10CBossTower13onFinishStageEv>  ; WongWork::CBossTower::onFinishStage()
08143f35 +0x79:  mov    0x8(%ebp),%eax
08143f38 +0x7c:  mov    0xae0(%eax),%edx
08143f3e +0x82:  mov    0x8(%ebp),%eax
08143f41 +0x85:  mov    0xae4(%eax),%eax
08143f47 +0x8b:  cmp    %eax,%edx
08143f49 +0x8d:  jb     08143f5e <+0xa2>
08143f4b +0x8f:  movl   $0x1,0x4(%esp)
08143f53 +0x97:  mov    0x8(%ebp),%eax
08143f56 +0x9a:  mov    %eax,(%esp)
08143f59 +0x9d:  call   08142d24 <_ZN8WongWork10CBossTower21_onPrepareFinishTowerEb>  ; WongWork::CBossTower::_onPrepareFinishTower(bool)
08143f5e +0xa2:  mov    $0x1,%eax
08143f63 +0xa7:  add    $0x44,%esp
08143f66 +0xaa:  pop    %ebx
08143f67 +0xab:  pop    %ebp
08143f68 +0xac:  ret
08143f69 +0xad:  nop
```

## 反编译 C

```c
// WongWork::CBossTower::handleKillMonster @ 0x8143ebc

/* WongWork::CBossTower::handleKillMonster(CUser*, unsigned short, unsigned short, MSG_MONSTER_DIE
   const&, int*) */

undefined4
WongWork::CBossTower::handleKillMonster
          (CUser *param_1,ushort param_2,ushort param_3,MSG_MONSTER_DIE *param_4,int *param_5)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = CBossStage::handleKillMonster
                    (param_1,param_2,param_3,(MSG_MONSTER_DIE *)((uint)param_4 & 0xffff),param_5);
  if (cVar1 == '\x01') {
    cVar1 = std::
            map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::
            empty((map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>
                   *)(param_1 + 0xa00));
    if (cVar1 != '\0') {
      onFinishStage((CBossTower *)param_1);
      if (*(uint *)(param_1 + 0xae4) <= *(uint *)(param_1 + 0xae0)) {
        _onPrepareFinishTower((CBossTower *)param_1,true);
      }
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
