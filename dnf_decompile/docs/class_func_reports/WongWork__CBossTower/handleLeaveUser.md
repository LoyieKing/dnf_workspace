# handleLeaveUser

`_ZN8WongWork10CBossTower15handleLeaveUserEP5CUser`

`WongWork::CBossTower::handleLeaveUser(CUser*)`

| 类 | 地址 |
|---|---|
| `WongWork::CBossTower` | `0x08143ae2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08143ae2  _ZN8WongWork10CBossTower15handleLeaveUserEP5CUser
#           WongWork::CBossTower::handleLeaveUser(CUser*)
# range [0x08143ae2, 0x08143d2b]
08143ae2 +0x000:  push   %ebp
08143ae3 +0x001:  mov    %esp,%ebp
08143ae5 +0x003:  push   %edi
08143ae6 +0x004:  push   %esi
08143ae7 +0x005:  push   %ebx
08143ae8 +0x006:  sub    $0x13c,%esp
08143aee +0x00c:  cmpl   $0x0,0xc(%ebp)
08143af2 +0x010:  jne    08143afe <+0x1c>
08143af4 +0x012:  mov    $0x0,%eax
08143af9 +0x017:  jmp    08143d20 <+0x23e>
08143afe +0x01c:  mov    0x8(%ebp),%eax
08143b01 +0x01f:  mov    0xc(%ebp),%edx
08143b04 +0x022:  mov    %edx,0x4(%esp)
08143b08 +0x026:  mov    %eax,(%esp)
08143b0b +0x029:  call   08149724 <_ZN8WongWork9CBossPlay15handleLeaveUserEP5CUser>  ; WongWork::CBossPlay::handleLeaveUser(CUser*)
08143b10 +0x02e:  test   %al,%al
08143b12 +0x030:  je     08143d1b <+0x239>
08143b18 +0x036:  lea    -0x11d(%ebp),%edx
08143b1e +0x03c:  mov    $0xff,%ebx
08143b23 +0x041:  mov    $0x0,%eax
08143b28 +0x046:  mov    %edx,%ecx
08143b2a +0x048:  and    $0x1,%ecx
08143b2d +0x04b:  test   %ecx,%ecx
08143b2f +0x04d:  je     08143b39 <+0x57>
08143b31 +0x04f:  mov    %al,(%edx)
08143b33 +0x051:  add    $0x1,%edx
08143b36 +0x054:  sub    $0x1,%ebx
08143b39 +0x057:  mov    %edx,%ecx
08143b3b +0x059:  and    $0x2,%ecx
08143b3e +0x05c:  test   %ecx,%ecx
08143b40 +0x05e:  je     08143b4b <+0x69>
08143b42 +0x060:  mov    %ax,(%edx)
08143b45 +0x063:  add    $0x2,%edx
08143b48 +0x066:  sub    $0x2,%ebx
08143b4b +0x069:  mov    %ebx,%ecx
08143b4d +0x06b:  shr    $0x2,%ecx
08143b50 +0x06e:  mov    %edx,%edi
08143b52 +0x070:  rep stos %eax,%es:(%edi)
08143b54 +0x072:  mov    %edi,%edx
08143b56 +0x074:  mov    %ebx,%ecx
08143b58 +0x076:  and    $0x2,%ecx
08143b5b +0x079:  test   %ecx,%ecx
08143b5d +0x07b:  je     08143b65 <+0x83>
08143b5f +0x07d:  mov    %ax,(%edx)
08143b62 +0x080:  add    $0x2,%edx
08143b65 +0x083:  mov    %ebx,%ecx
08143b67 +0x085:  and    $0x1,%ecx
08143b6a +0x088:  test   %ecx,%ecx
08143b6c +0x08a:  je     08143b73 <+0x91>
08143b6e +0x08c:  mov    %al,(%edx)
08143b70 +0x08e:  add    $0x1,%edx
08143b73 +0x091:  mov    0x8(%ebp),%eax
08143b76 +0x094:  mov    0x4(%eax),%eax
08143b79 +0x097:  mov    0xcd8(%eax),%eax
08143b7f +0x09d:  mov    %al,-0x1d(%ebp)
08143b82 +0x0a0:  mov    0x8(%ebp),%eax
08143b85 +0x0a3:  mov    0x4(%eax),%eax
08143b88 +0x0a6:  lea    -0x11d(%ebp),%edx
08143b8e +0x0ac:  mov    %edx,0x4(%esp)
08143b92 +0x0b0:  mov    %eax,(%esp)
08143b95 +0x0b3:  call   08145882 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x305>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x305
08143b9a +0x0b8:  movsbl -0x1d(%ebp),%esi
08143b9e +0x0bc:  mov    0x8(%ebp),%eax
08143ba1 +0x0bf:  mov    0xae8(%eax),%eax
08143ba7 +0x0c5:  mov    %eax,%ebx
08143ba9 +0x0c7:  mov    0x8(%ebp),%eax
08143bac +0x0ca:  mov    0x9f0(%eax),%eax
08143bb2 +0x0d0:  mov    %eax,(%esp)
08143bb5 +0x0d3:  call   081455a6 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x29>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x29
08143bba +0x0d8:  mov    0xc(%ebp),%edx
08143bbd +0x0db:  lea    0x79700(%edx),%ecx
08143bc3 +0x0e1:  mov    %esi,0x10(%esp)
08143bc7 +0x0e5:  lea    -0x11d(%ebp),%edx
08143bcd +0x0eb:  mov    %edx,0xc(%esp)
08143bd1 +0x0ef:  mov    %ebx,0x8(%esp)
08143bd5 +0x0f3:  mov    %eax,0x4(%esp)
08143bd9 +0x0f7:  mov    %ecx,(%esp)
08143bdc +0x0fa:  call   086849dc <_ZN15cUserHistoryLog12LeaveDungeonEPKciS1_i>  ; cUserHistoryLog::LeaveDungeon(char const*, int, char const*, int)
08143be1 +0x0ff:  mov    0x8(%ebp),%eax
08143be4 +0x102:  mov    0x4(%eax),%eax
08143be7 +0x105:  mov    %eax,(%esp)
08143bea +0x108:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
08143bef +0x10d:  mov    %eax,0x8(%esp)
08143bf3 +0x111:  movl   $"member_count : %d",0x4(%esp)
08143bfb +0x119:  lea    -0x1e(%ebp),%eax
08143bfe +0x11c:  mov    %eax,(%esp)
08143c01 +0x11f:  call   0854f990 <_ZN13cHistoryTraceclEPKcz>  ; cHistoryTrace::operator()(char const*, ...)
08143c06 +0x124:  mov    0x8(%ebp),%eax
08143c09 +0x127:  mov    0x4(%eax),%eax
08143c0c +0x12a:  test   %eax,%eax
08143c0e +0x12c:  je     08143c22 <+0x140>
08143c10 +0x12e:  mov    0x8(%ebp),%eax
08143c13 +0x131:  mov    0x4(%eax),%eax
08143c16 +0x134:  mov    %eax,(%esp)
08143c19 +0x137:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
08143c1e +0x13c:  test   %eax,%eax
08143c20 +0x13e:  jg     08143c29 <+0x147>
08143c22 +0x140:  mov    $0x1,%eax
08143c27 +0x145:  jmp    08143c2e <+0x14c>
08143c29 +0x147:  mov    $0x0,%eax
08143c2e +0x14c:  test   %al,%al
08143c30 +0x14e:  je     08143c47 <+0x165>
08143c32 +0x150:  mov    0x8(%ebp),%eax
08143c35 +0x153:  mov    %eax,(%esp)
08143c38 +0x156:  call   08142b36 <_ZN8WongWork10CBossTower8_destroyEv>  ; WongWork::CBossTower::_destroy()
08143c3d +0x15b:  mov    $0x0,%eax
08143c42 +0x160:  jmp    08143d20 <+0x23e>
08143c47 +0x165:  mov    0x8(%ebp),%eax
08143c4a +0x168:  mov    0x4(%eax),%eax
08143c4d +0x16b:  test   %eax,%eax
08143c4f +0x16d:  je     08143c79 <+0x197>
08143c51 +0x16f:  mov    0x8(%ebp),%eax
08143c54 +0x172:  mov    0x4(%eax),%eax
08143c57 +0x175:  mov    %eax,(%esp)
08143c5a +0x178:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
08143c5f +0x17d:  test   %eax,%eax
08143c61 +0x17f:  jle    08143c80 <+0x19e>
08143c63 +0x181:  mov    0x8(%ebp),%eax
08143c66 +0x184:  mov    (%eax),%eax
08143c68 +0x186:  add    $0x8,%eax
08143c6b +0x189:  mov    (%eax),%edx
08143c6d +0x18b:  mov    0x8(%ebp),%eax
08143c70 +0x18e:  mov    %eax,(%esp)
08143c73 +0x191:  call   *%edx
08143c75 +0x193:  test   %al,%al
08143c77 +0x195:  je     08143c80 <+0x19e>
08143c79 +0x197:  mov    $0x1,%eax
08143c7e +0x19c:  jmp    08143c85 <+0x1a3>
08143c80 +0x19e:  mov    $0x0,%eax
08143c85 +0x1a3:  test   %al,%al
08143c87 +0x1a5:  je     08143ca9 <+0x1c7>
08143c89 +0x1a7:  mov    0x8(%ebp),%eax
08143c8c +0x1aa:  mov    %eax,(%esp)
08143c8f +0x1ad:  call   081440b2 <_ZN8WongWork10CBossTower13onFinishStageEv>  ; WongWork::CBossTower::onFinishStage()
08143c94 +0x1b2:  movl   $0x0,0x4(%esp)
08143c9c +0x1ba:  mov    0x8(%ebp),%eax
08143c9f +0x1bd:  mov    %eax,(%esp)
08143ca2 +0x1c0:  call   08142d24 <_ZN8WongWork10CBossTower21_onPrepareFinishTowerEb>  ; WongWork::CBossTower::_onPrepareFinishTower(bool)
08143ca7 +0x1c5:  jmp    08143d14 <+0x232>
08143ca9 +0x1c7:  mov    0x8(%ebp),%eax
08143cac +0x1ca:  mov    0x4(%eax),%eax
08143caf +0x1cd:  mov    %eax,(%esp)
08143cb2 +0x1d0:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
08143cb7 +0x1d5:  mov    %eax,-0x1c(%ebp)
08143cba +0x1d8:  mov    -0x1c(%ebp),%eax
08143cbd +0x1db:  cmp    $0x2,%eax
08143cc0 +0x1de:  je     08143ce9 <+0x207>
08143cc2 +0x1e0:  cmp    $0x2,%eax
08143cc5 +0x1e3:  jg     08143cce <+0x1ec>
08143cc7 +0x1e5:  cmp    $0x1,%eax
08143cca +0x1e8:  je     08143cda <+0x1f8>
08143ccc +0x1ea:  jmp    08143d14 <+0x232>
08143cce +0x1ec:  cmp    $0x3,%eax
08143cd1 +0x1ef:  je     08143cf8 <+0x216>
08143cd3 +0x1f1:  cmp    $0x4,%eax
08143cd6 +0x1f4:  je     08143d07 <+0x225>
08143cd8 +0x1f6:  jmp    08143d14 <+0x232>
08143cda +0x1f8:  mov    0x8(%ebp),%eax
08143cdd +0x1fb:  movl   $0x0,0xae8(%eax)
08143ce7 +0x205:  jmp    08143d14 <+0x232>
08143ce9 +0x207:  mov    0x8(%ebp),%eax
08143cec +0x20a:  movl   $0x1,0xae8(%eax)
08143cf6 +0x214:  jmp    08143d14 <+0x232>
08143cf8 +0x216:  mov    0x8(%ebp),%eax
08143cfb +0x219:  movl   $0x2,0xae8(%eax)
08143d05 +0x223:  jmp    08143d14 <+0x232>
08143d07 +0x225:  mov    0x8(%ebp),%eax
08143d0a +0x228:  movl   $0x3,0xae8(%eax)
08143d14 +0x232:  mov    $0x1,%eax
08143d19 +0x237:  jmp    08143d20 <+0x23e>
08143d1b +0x239:  mov    $0x0,%eax
08143d20 +0x23e:  add    $0x13c,%esp
08143d26 +0x244:  pop    %ebx
08143d27 +0x245:  pop    %esi
08143d28 +0x246:  pop    %edi
08143d29 +0x247:  pop    %ebp
08143d2a +0x248:  ret
08143d2b +0x249:  nop
```

## 反编译 C

```c
// WongWork::CBossTower::handleLeaveUser @ 0x8143ae2

/* WongWork::CBossTower::handleLeaveUser(CUser*) */

undefined4 __thiscall WongWork::CBossTower::handleLeaveUser(CBossTower *this,CUser *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  byte bVar9;
  char local_121;
  char local_120 [254];
  cHistoryTrace local_22;
  char local_21;
  
  bVar9 = 0;
  if (param_1 == (CUser *)0x0) {
    uVar2 = 0;
  }
  else {
    cVar1 = CBossPlay::handleLeaveUser((CBossPlay *)this,param_1);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      pcVar5 = &local_121;
      uVar6 = 0xff;
      bVar8 = ((uint)pcVar5 & 1) != 0;
      if (bVar8) {
        local_121 = '\0';
        pcVar5 = local_120;
        uVar6 = 0xfe;
      }
      if (((uint)pcVar5 & 2) != 0) {
        pcVar5[0] = '\0';
        pcVar5[1] = '\0';
        pcVar5 = pcVar5 + 2;
        uVar6 = uVar6 - 2;
      }
      for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        pcVar5[0] = '\0';
        pcVar5[1] = '\0';
        pcVar5[2] = '\0';
        pcVar5[3] = '\0';
        pcVar5 = pcVar5 + ((uint)bVar9 * -2 + 1) * 4;
      }
      if ((uVar6 & 2) != 0) {
        pcVar5[0] = '\0';
        pcVar5[1] = '\0';
        pcVar5 = pcVar5 + 2;
      }
      if (!bVar8) {
        *pcVar5 = '\0';
      }
      local_21 = (char)*(undefined4 *)(*(int *)(this + 4) + 0xcd8);
      CParty::getMemberNames(*(CParty **)(this + 4),&local_121);
      iVar7 = (int)local_21;
      iVar3 = *(int *)(this + 0xae8);
      pcVar5 = (char *)CDungeon::GetDungeonName(*(CDungeon **)(this + 0x9f0));
      cUserHistoryLog::LeaveDungeon
                ((cUserHistoryLog *)(param_1 + 0x79700),pcVar5,iVar3,&local_121,iVar7);
      uVar2 = CParty::get_member_count(*(CParty **)(this + 4));
      cHistoryTrace::operator()(&local_22,"member_count : %d",uVar2);
      if ((*(int *)(this + 4) == 0) ||
         (iVar3 = CParty::get_member_count(*(CParty **)(this + 4)), iVar3 < 1)) {
        bVar8 = true;
      }
      else {
        bVar8 = false;
      }
      if (bVar8) {
        _destroy(this);
        uVar2 = 0;
      }
      else {
        if ((*(int *)(this + 4) == 0) ||
           ((iVar3 = CParty::get_member_count(*(CParty **)(this + 4)), 0 < iVar3 &&
            (cVar1 = (**(code **)(*(int *)this + 8))(this), cVar1 != '\0')))) {
          bVar8 = true;
        }
        else {
          bVar8 = false;
        }
        if (bVar8) {
          onFinishStage(this);
          _onPrepareFinishTower(this,false);
        }
        else {
          iVar3 = CParty::get_member_count(*(CParty **)(this + 4));
          if (iVar3 == 2) {
            *(undefined4 *)(this + 0xae8) = 1;
          }
          else if (iVar3 < 3) {
            if (iVar3 == 1) {
              *(undefined4 *)(this + 0xae8) = 0;
            }
          }
          else if (iVar3 == 3) {
            *(undefined4 *)(this + 0xae8) = 2;
          }
          else if (iVar3 == 4) {
            *(undefined4 *)(this + 0xae8) = 3;
          }
        }
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}
```
