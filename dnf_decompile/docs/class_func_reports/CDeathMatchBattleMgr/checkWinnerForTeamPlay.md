# checkWinnerForTeamPlay

`_ZN20CDeathMatchBattleMgr22checkWinnerForTeamPlayEPP5CUserPbPhR12PvpUserTable`

`CDeathMatchBattleMgr::checkWinnerForTeamPlay(CUser**, bool*, unsigned char*, PvpUserTable&)`

| 类 | 地址 |
|---|---|
| `CDeathMatchBattleMgr` | `0x085df296` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085df296  _ZN20CDeathMatchBattleMgr22checkWinnerForTeamPlayEPP5CUserPbPhR12PvpUserTable
#           CDeathMatchBattleMgr::checkWinnerForTeamPlay(CUser**, bool*, unsigned char*, PvpUserTable&)
# range [0x085df296, 0x085df489]
085df296 +0x000:  push   %ebp
085df297 +0x001:  mov    %esp,%ebp
085df299 +0x003:  sub    $0x48,%esp
085df29c +0x006:  movl   $0x0,-0x1c(%ebp)
085df2a3 +0x00d:  movl   $0x0,-0x18(%ebp)
085df2aa +0x014:  movl   $0x0,-0x14(%ebp)
085df2b1 +0x01b:  jmp    085df347 <+0xb1>
085df2b6 +0x020:  mov    -0x14(%ebp),%eax
085df2b9 +0x023:  shl    $0x2,%eax
085df2bc +0x026:  add    0xc(%ebp),%eax
085df2bf +0x029:  mov    (%eax),%eax
085df2c1 +0x02b:  test   %eax,%eax
085df2c3 +0x02d:  je     085df342 <+0xac>
085df2c5 +0x02f:  mov    -0x14(%ebp),%eax
085df2c8 +0x032:  add    0x14(%ebp),%eax
085df2cb +0x035:  movzbl (%eax),%eax
085df2ce +0x038:  cmp    $0x1,%al
085df2d0 +0x03a:  jne    085df2e1 <+0x4b>
085df2d2 +0x03c:  mov    -0x14(%ebp),%edx
085df2d5 +0x03f:  mov    0x8(%ebp),%eax
085df2d8 +0x042:  mov    0x4(%eax,%edx,4),%eax
085df2dc +0x046:  add    %eax,-0x1c(%ebp)
085df2df +0x049:  jmp    085df343 <+0xad>
085df2e1 +0x04b:  mov    -0x14(%ebp),%eax
085df2e4 +0x04e:  add    0x14(%ebp),%eax
085df2e7 +0x051:  movzbl (%eax),%eax
085df2ea +0x054:  cmp    $0x2,%al
085df2ec +0x056:  jne    085df2fd <+0x67>
085df2ee +0x058:  mov    -0x14(%ebp),%edx
085df2f1 +0x05b:  mov    0x8(%ebp),%eax
085df2f4 +0x05e:  mov    0x4(%eax,%edx,4),%eax
085df2f8 +0x062:  add    %eax,-0x18(%ebp)
085df2fb +0x065:  jmp    085df343 <+0xad>
085df2fd +0x067:  mov    -0x14(%ebp),%eax
085df300 +0x06a:  add    0x14(%ebp),%eax
085df303 +0x06d:  movzbl (%eax),%eax
085df306 +0x070:  movzbl %al,%eax
085df309 +0x073:  mov    %eax,0x18(%esp)
085df30d +0x077:  mov    -0x14(%ebp),%eax
085df310 +0x07a:  mov    %eax,0x14(%esp)
085df314 +0x07e:  movl   $"CDeathMatchBattleMgr::checkWinnerForTeamPlay , ERROR, bTeamState[%d] = %d",0x10(%esp)
085df31c +0x086:  movl   $0x1617,0xc(%esp)
085df324 +0x08e:  movl   $&_ZZN20CDeathMatchBattleMgr22checkWinnerForTeamPlayEPP5CUserPbPhR12PvpUserTableE19__PRETTY_FUNCTION__,0x8(%esp)
085df32c +0x096:  movl   $"pvp.cpp",0x4(%esp)
085df334 +0x09e:  movl   $0x1,(%esp)
085df33b +0x0a5:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
085df340 +0x0aa:  jmp    085df343 <+0xad>
085df342 +0x0ac:  nop
085df343 +0x0ad:  addl   $0x1,-0x14(%ebp)
085df347 +0x0b1:  cmpl   $0x7,-0x14(%ebp)
085df34b +0x0b5:  setle  %al
085df34e +0x0b8:  test   %al,%al
085df350 +0x0ba:  jne    085df2b6 <+0x20>
085df356 +0x0c0:  movl   $0x0,-0x24(%ebp)
085df35d +0x0c7:  movl   $0x0,-0x20(%ebp)
085df364 +0x0ce:  movl   $0x0,-0x10(%ebp)
085df36b +0x0d5:  movl   $0x0,-0x14(%ebp)
085df372 +0x0dc:  jmp    085df3c9 <+0x133>
085df374 +0x0de:  mov    -0x14(%ebp),%eax
085df377 +0x0e1:  add    0x10(%ebp),%eax
085df37a +0x0e4:  movzbl (%eax),%eax
085df37d +0x0e7:  test   %al,%al
085df37f +0x0e9:  je     085df3c5 <+0x12f>
085df381 +0x0eb:  mov    -0x14(%ebp),%eax
085df384 +0x0ee:  shl    $0x2,%eax
085df387 +0x0f1:  add    0xc(%ebp),%eax
085df38a +0x0f4:  mov    (%eax),%eax
085df38c +0x0f6:  test   %eax,%eax
085df38e +0x0f8:  je     085df3be <+0x128>
085df390 +0x0fa:  mov    -0x14(%ebp),%eax
085df393 +0x0fd:  add    0x14(%ebp),%eax
085df396 +0x100:  movzbl (%eax),%eax
085df399 +0x103:  movzbl %al,%eax
085df39c +0x106:  sub    $0x1,%eax
085df39f +0x109:  mov    %eax,-0x10(%ebp)
085df3a2 +0x10c:  cmpl   $0x0,-0x10(%ebp)
085df3a6 +0x110:  js     085df3c1 <+0x12b>
085df3a8 +0x112:  cmpl   $0x1,-0x10(%ebp)
085df3ac +0x116:  jg     085df3c4 <+0x12e>
085df3ae +0x118:  mov    -0x10(%ebp),%eax
085df3b1 +0x11b:  mov    -0x24(%ebp,%eax,4),%edx
085df3b5 +0x11f:  add    $0x1,%edx
085df3b8 +0x122:  mov    %edx,-0x24(%ebp,%eax,4)
085df3bc +0x126:  jmp    085df3c5 <+0x12f>
085df3be +0x128:  nop
085df3bf +0x129:  jmp    085df3c5 <+0x12f>
085df3c1 +0x12b:  nop
085df3c2 +0x12c:  jmp    085df3c5 <+0x12f>
085df3c4 +0x12e:  nop
085df3c5 +0x12f:  addl   $0x1,-0x14(%ebp)
085df3c9 +0x133:  cmpl   $0x7,-0x14(%ebp)
085df3cd +0x137:  setle  %al
085df3d0 +0x13a:  test   %al,%al
085df3d2 +0x13c:  jne    085df374 <+0xde>
085df3d4 +0x13e:  mov    -0x1c(%ebp),%eax
085df3d7 +0x141:  cmp    -0x18(%ebp),%eax
085df3da +0x144:  jge    085df3e2 <+0x14c>
085df3dc +0x146:  movb   $0x2,-0x9(%ebp)
085df3e0 +0x14a:  jmp    085df42b <+0x195>
085df3e2 +0x14c:  mov    -0x1c(%ebp),%eax
085df3e5 +0x14f:  cmp    -0x18(%ebp),%eax
085df3e8 +0x152:  jle    085df3f0 <+0x15a>
085df3ea +0x154:  movb   $0x1,-0x9(%ebp)
085df3ee +0x158:  jmp    085df42b <+0x195>
085df3f0 +0x15a:  mov    -0x24(%ebp),%edx
085df3f3 +0x15d:  mov    -0x20(%ebp),%eax
085df3f6 +0x160:  cmp    %eax,%edx
085df3f8 +0x162:  jle    085df400 <+0x16a>
085df3fa +0x164:  movb   $0x1,-0x9(%ebp)
085df3fe +0x168:  jmp    085df42b <+0x195>
085df400 +0x16a:  mov    -0x20(%ebp),%edx
085df403 +0x16d:  mov    -0x24(%ebp),%eax
085df406 +0x170:  cmp    %eax,%edx
085df408 +0x172:  jle    085df410 <+0x17a>
085df40a +0x174:  movb   $0x2,-0x9(%ebp)
085df40e +0x178:  jmp    085df42b <+0x195>
085df410 +0x17a:  call   0807dca0 <_init+0x598>
085df415 +0x17f:  and    $0x1,%eax
085df418 +0x182:  test   %al,%al
085df41a +0x184:  je     085df423 <+0x18d>
085df41c +0x186:  mov    $0x2,%eax
085df421 +0x18b:  jmp    085df428 <+0x192>
085df423 +0x18d:  mov    $0x1,%eax
085df428 +0x192:  mov    %al,-0x9(%ebp)
085df42b +0x195:  movl   $0x8,0x8(%esp)
085df433 +0x19d:  movl   $0x0,0x4(%esp)
085df43b +0x1a5:  mov    0x10(%ebp),%eax
085df43e +0x1a8:  mov    %eax,(%esp)
085df441 +0x1ab:  call   0807dcc0 <_init+0x5b8>
085df446 +0x1b0:  movl   $0x0,-0x14(%ebp)
085df44d +0x1b7:  jmp    085df46a <+0x1d4>
085df44f +0x1b9:  mov    -0x14(%ebp),%eax
085df452 +0x1bc:  add    0x14(%ebp),%eax
085df455 +0x1bf:  movzbl (%eax),%eax
085df458 +0x1c2:  cmp    -0x9(%ebp),%al
085df45b +0x1c5:  jne    085df466 <+0x1d0>
085df45d +0x1c7:  mov    -0x14(%ebp),%eax
085df460 +0x1ca:  add    0x10(%ebp),%eax
085df463 +0x1cd:  movb   $0x1,(%eax)
085df466 +0x1d0:  addl   $0x1,-0x14(%ebp)
085df46a +0x1d4:  cmpl   $0x7,-0x14(%ebp)
085df46e +0x1d8:  setle  %al
085df471 +0x1db:  test   %al,%al
085df473 +0x1dd:  jne    085df44f <+0x1b9>
085df475 +0x1df:  movzbl -0x9(%ebp),%eax
085df479 +0x1e3:  mov    %eax,0x4(%esp)
085df47d +0x1e7:  mov    0x18(%ebp),%eax
085df480 +0x1ea:  mov    %eax,(%esp)
085df483 +0x1ed:  call   085d585e <_ZN12PvpUserTable10SetWinTeamEi>  ; PvpUserTable::SetWinTeam(int)
085df488 +0x1f2:  leave
085df489 +0x1f3:  ret
```

## 反编译 C

```c
// CDeathMatchBattleMgr::checkWinnerForTeamPlay @ 0x85df296

/* CDeathMatchBattleMgr::checkWinnerForTeamPlay(CUser**, bool*, unsigned char*, PvpUserTable&) */

void __thiscall
CDeathMatchBattleMgr::checkWinnerForTeamPlay
          (CDeathMatchBattleMgr *this,CUser **param_1,bool *param_2,uchar *param_3,
          PvpUserTable *param_4)

{
  uint uVar1;
  int aiStack_2c [7];
  byte local_d;
  
  aiStack_2c[3] = 0;
  aiStack_2c[4] = 0;
  for (aiStack_2c[5] = 0; aiStack_2c[5] < 8; aiStack_2c[5] = aiStack_2c[5] + 1) {
    if (param_1[aiStack_2c[5]] != (CUser *)0x0) {
      if (param_3[aiStack_2c[5]] == '\x01') {
        aiStack_2c[3] = aiStack_2c[3] + *(int *)(this + aiStack_2c[5] * 4 + 4);
      }
      else if (param_3[aiStack_2c[5]] == '\x02') {
        aiStack_2c[4] = aiStack_2c[4] + *(int *)(this + aiStack_2c[5] * 4 + 4);
      }
      else {
        LogManager::logFormat
                  (1,"pvp.cpp",
                   "void CDeathMatchBattleMgr::checkWinnerForTeamPlay(CUser**, bool*, unsigned char*, PvpUserTable&)"
                   ,0x1617,
                   "CDeathMatchBattleMgr::checkWinnerForTeamPlay , ERROR, bTeamState[%d] = %d",
                   aiStack_2c[5],(uint)param_3[aiStack_2c[5]]);
      }
    }
  }
  aiStack_2c[1] = 0;
  aiStack_2c[2] = 0;
  aiStack_2c[6] = 0;
  for (aiStack_2c[5] = 0; aiStack_2c[5] < 8; aiStack_2c[5] = aiStack_2c[5] + 1) {
    if ((((param_2[aiStack_2c[5]] != false) && (param_1[aiStack_2c[5]] != (CUser *)0x0)) &&
        (uVar1 = (uint)param_3[aiStack_2c[5]], aiStack_2c[6] = uVar1 - 1, -1 < aiStack_2c[6])) &&
       (aiStack_2c[6] < 2)) {
      aiStack_2c[uVar1] = aiStack_2c[uVar1] + 1;
    }
  }
  if (aiStack_2c[3] < aiStack_2c[4]) {
    local_d = 2;
  }
  else if (aiStack_2c[4] < aiStack_2c[3]) {
    local_d = 1;
  }
  else if (aiStack_2c[2] < aiStack_2c[1]) {
    local_d = 1;
  }
  else if (aiStack_2c[1] < aiStack_2c[2]) {
    local_d = 2;
  }
  else {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      local_d = 1;
    }
    else {
      local_d = 2;
    }
  }
  memset(param_2,0,8);
  for (aiStack_2c[5] = 0; aiStack_2c[5] < 8; aiStack_2c[5] = aiStack_2c[5] + 1) {
    if (param_3[aiStack_2c[5]] == local_d) {
      param_2[aiStack_2c[5]] = true;
    }
  }
  PvpUserTable::SetWinTeam(param_4,(uint)local_d);
  return;
}
```
