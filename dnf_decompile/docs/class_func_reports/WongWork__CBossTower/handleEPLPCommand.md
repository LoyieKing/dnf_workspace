# handleEPLPCommand

`_ZN8WongWork10CBossTower17handleEPLPCommandEi`

`WongWork::CBossTower::handleEPLPCommand(int)`

| 类 | 地址 |
|---|---|
| `WongWork::CBossTower` | `0x08142b72` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08142b72  _ZN8WongWork10CBossTower17handleEPLPCommandEi
#           WongWork::CBossTower::handleEPLPCommand(int)
# range [0x08142b72, 0x08142cdd]
08142b72 +0x000:  push   %ebp
08142b73 +0x001:  mov    %esp,%ebp
08142b75 +0x003:  push   %edi
08142b76 +0x004:  push   %ebx
08142b77 +0x005:  sub    $0x130,%esp
08142b7d +0x00b:  mov    0x8(%ebp),%eax
08142b80 +0x00e:  mov    0x4(%eax),%eax
08142b83 +0x011:  test   %eax,%eax
08142b85 +0x013:  je     08142b99 <+0x27>
08142b87 +0x015:  mov    0x8(%ebp),%eax
08142b8a +0x018:  mov    0x4(%eax),%eax
08142b8d +0x01b:  mov    %eax,(%esp)
08142b90 +0x01e:  call   0814581c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x29f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x29f
08142b95 +0x023:  cmp    $0x2,%al
08142b97 +0x025:  je     08142ba0 <+0x2e>
08142b99 +0x027:  mov    $0x1,%eax
08142b9e +0x02c:  jmp    08142ba5 <+0x33>
08142ba0 +0x02e:  mov    $0x0,%eax
08142ba5 +0x033:  test   %al,%al
08142ba7 +0x035:  je     08142bb3 <+0x41>
08142ba9 +0x037:  mov    $0x0,%eax
08142bae +0x03c:  jmp    08142cd4 <+0x162>
08142bb3 +0x041:  mov    0xc(%ebp),%eax
08142bb6 +0x044:  add    $0x0,%eax
08142bb9 +0x047:  cmp    $0x2,%eax
08142bbc +0x04a:  ja     08142cc4 <+0x152>
08142bc2 +0x050:  lea    -0x110(%ebp),%edx
08142bc8 +0x056:  mov    $0x0,%eax
08142bcd +0x05b:  mov    $0x3f,%ecx
08142bd2 +0x060:  mov    %edx,%edi
08142bd4 +0x062:  rep stos %eax,%es:(%edi)
08142bd6 +0x064:  mov    %edi,%edx
08142bd8 +0x066:  mov    %ax,(%edx)
08142bdb +0x069:  add    $0x2,%edx
08142bde +0x06c:  mov    %al,(%edx)
08142be0 +0x06e:  add    $0x1,%edx
08142be3 +0x071:  mov    0x8(%ebp),%eax
08142be6 +0x074:  mov    0x4(%eax),%eax
08142be9 +0x077:  mov    0xcd8(%eax),%eax
08142bef +0x07d:  mov    %al,-0x11(%ebp)
08142bf2 +0x080:  mov    0x8(%ebp),%eax
08142bf5 +0x083:  mov    0x4(%eax),%eax
08142bf8 +0x086:  lea    -0x110(%ebp),%edx
08142bfe +0x08c:  mov    %edx,0x4(%esp)
08142c02 +0x090:  mov    %eax,(%esp)
08142c05 +0x093:  call   08145882 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x305>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x305
08142c0a +0x098:  movl   $0x0,-0x10(%ebp)
08142c11 +0x09f:  jmp    08142ca7 <+0x135>
08142c16 +0x0a4:  mov    0x8(%ebp),%eax
08142c19 +0x0a7:  mov    0x4(%eax),%eax
08142c1c +0x0aa:  mov    -0x10(%ebp),%edx
08142c1f +0x0ad:  mov    %edx,0x4(%esp)
08142c23 +0x0b1:  mov    %eax,(%esp)
08142c26 +0x0b4:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
08142c2b +0x0b9:  mov    %eax,-0xc(%ebp)
08142c2e +0x0bc:  cmpl   $0x0,-0xc(%ebp)
08142c32 +0x0c0:  je     08142c50 <+0xde>
08142c34 +0x0c2:  mov    0x8(%ebp),%eax
08142c37 +0x0c5:  mov    0x4(%eax),%eax
08142c3a +0x0c8:  mov    -0x10(%ebp),%edx
08142c3d +0x0cb:  mov    %edx,0x4(%esp)
08142c41 +0x0cf:  mov    %eax,(%esp)
08142c44 +0x0d2:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
08142c49 +0x0d7:  xor    $0x1,%eax
08142c4c +0x0da:  test   %al,%al
08142c4e +0x0dc:  je     08142c57 <+0xe5>
08142c50 +0x0de:  mov    $0x1,%eax
08142c55 +0x0e3:  jmp    08142c5c <+0xea>
08142c57 +0x0e5:  mov    $0x0,%eax
08142c5c +0x0ea:  test   %al,%al
08142c5e +0x0ec:  jne    08142ca2 <+0x130>
08142c60 +0x0ee:  movsbl -0x11(%ebp),%ebx
08142c64 +0x0f2:  mov    0x8(%ebp),%eax
08142c67 +0x0f5:  mov    0x9f0(%eax),%eax
08142c6d +0x0fb:  mov    %eax,(%esp)
08142c70 +0x0fe:  call   081455a6 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x29>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x29
08142c75 +0x103:  mov    -0xc(%ebp),%edx
08142c78 +0x106:  lea    0x79700(%edx),%ecx
08142c7e +0x10c:  mov    %ebx,0x10(%esp)
08142c82 +0x110:  lea    -0x110(%ebp),%edx
08142c88 +0x116:  mov    %edx,0xc(%esp)
08142c8c +0x11a:  movl   $0x0,0x8(%esp)
08142c94 +0x122:  mov    %eax,0x4(%esp)
08142c98 +0x126:  mov    %ecx,(%esp)
08142c9b +0x129:  call   086849dc <_ZN15cUserHistoryLog12LeaveDungeonEPKciS1_i>  ; cUserHistoryLog::LeaveDungeon(char const*, int, char const*, int)
08142ca0 +0x12e:  jmp    08142ca3 <+0x131>
08142ca2 +0x130:  nop
08142ca3 +0x131:  addl   $0x1,-0x10(%ebp)
08142ca7 +0x135:  cmpl   $0x3,-0x10(%ebp)
08142cab +0x139:  setle  %al
08142cae +0x13c:  test   %al,%al
08142cb0 +0x13e:  jne    08142c16 <+0xa4>
08142cb6 +0x144:  mov    0x8(%ebp),%eax
08142cb9 +0x147:  mov    0x4(%eax),%eax
08142cbc +0x14a:  mov    %eax,(%esp)
08142cbf +0x14d:  call   085aca60 <_ZN6CParty15ReturnToVillageEv>  ; CParty::ReturnToVillage()
08142cc4 +0x152:  mov    0x8(%ebp),%eax
08142cc7 +0x155:  mov    %eax,(%esp)
08142cca +0x158:  call   08142b36 <_ZN8WongWork10CBossTower8_destroyEv>  ; WongWork::CBossTower::_destroy()
08142ccf +0x15d:  mov    $0x1,%eax
08142cd4 +0x162:  add    $0x130,%esp
08142cda +0x168:  pop    %ebx
08142cdb +0x169:  pop    %edi
08142cdc +0x16a:  pop    %ebp
08142cdd +0x16b:  ret
```

## 反编译 C

```c
// WongWork::CBossTower::handleEPLPCommand @ 0x8142b72

/* WongWork::CBossTower::handleEPLPCommand(int) */

undefined4 __thiscall WongWork::CBossTower::handleEPLPCommand(CBossTower *this,int param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  byte bVar6;
  char local_114 [255];
  char local_15;
  int local_14;
  int local_10;
  
  bVar6 = 0;
  if (*(int *)(this + 4) != 0) {
    cVar2 = CParty::GetEPLPState(*(CParty **)(this + 4));
    if (cVar2 == '\x02') {
      bVar1 = false;
      goto LAB_08142ba5;
    }
  }
  bVar1 = true;
LAB_08142ba5:
  if (bVar1) {
    uVar3 = 0;
  }
  else {
    if ((uint)param_1 < 3) {
      pcVar4 = local_114;
      for (iVar5 = 0x3f; iVar5 != 0; iVar5 = iVar5 + -1) {
        pcVar4[0] = '\0';
        pcVar4[1] = '\0';
        pcVar4[2] = '\0';
        pcVar4[3] = '\0';
        pcVar4 = pcVar4 + ((uint)bVar6 * -2 + 1) * 4;
      }
      pcVar4[0] = '\0';
      pcVar4[1] = '\0';
      pcVar4[2] = '\0';
      local_15 = (char)*(undefined4 *)(*(int *)(this + 4) + 0xcd8);
      CParty::getMemberNames(*(CParty **)(this + 4),local_114);
      for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
        local_10 = CParty::get_user(*(CParty **)(this + 4),local_14);
        if (local_10 == 0) {
LAB_08142c50:
          bVar1 = true;
        }
        else {
          cVar2 = CParty::checkValidUser(*(CParty **)(this + 4),local_14);
          if (cVar2 != '\x01') goto LAB_08142c50;
          bVar1 = false;
        }
        if (!bVar1) {
          iVar5 = (int)local_15;
          pcVar4 = (char *)CDungeon::GetDungeonName(*(CDungeon **)(this + 0x9f0));
          cUserHistoryLog::LeaveDungeon
                    ((cUserHistoryLog *)(local_10 + 0x79700),pcVar4,0,local_114,iVar5);
        }
      }
      CParty::ReturnToVillage(*(CParty **)(this + 4));
    }
    _destroy(this);
    uVar3 = 1;
  }
  return uVar3;
}
```
