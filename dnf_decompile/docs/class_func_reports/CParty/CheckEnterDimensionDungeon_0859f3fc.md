# CheckEnterDimensionDungeon

`_ZN6CParty26CheckEnterDimensionDungeonEPK8CDungeon`

`CParty::CheckEnterDimensionDungeon(CDungeon const*)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x0859f3fc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859f3fc  _ZN6CParty26CheckEnterDimensionDungeonEPK8CDungeon
#           CParty::CheckEnterDimensionDungeon(CDungeon const*)
# range [0x0859f3fc, 0x0859f581]
0859f3fc +0x000:  push   %ebp
0859f3fd +0x001:  mov    %esp,%ebp
0859f3ff +0x003:  sub    $0x28,%esp
0859f402 +0x006:  mov    0x8(%ebp),%eax
0859f405 +0x009:  mov    0xcac(%eax),%eax
0859f40b +0x00f:  mov    %eax,(%esp)
0859f40e +0x012:  call   0826b938 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x206>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x206
0859f413 +0x017:  test   %al,%al
0859f415 +0x019:  setle  %al
0859f418 +0x01c:  test   %al,%al
0859f41a +0x01e:  je     0859f426 <+0x2a>
0859f41c +0x020:  mov    $0x0,%eax
0859f421 +0x025:  jmp    0859f580 <+0x184>
0859f426 +0x02a:  mov    0x8(%ebp),%eax
0859f429 +0x02d:  mov    %eax,(%esp)
0859f42c +0x030:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
0859f431 +0x035:  mov    %eax,-0x14(%ebp)
0859f434 +0x038:  mov    0xc(%ebp),%eax
0859f437 +0x03b:  mov    %eax,(%esp)
0859f43a +0x03e:  call   0826b938 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x206>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x206
0859f43f +0x043:  movsbl %al,%eax
0859f442 +0x046:  sub    $0x1,%eax
0859f445 +0x049:  mov    %eax,-0x10(%ebp)
0859f448 +0x04c:  mov    0x8(%ebp),%eax
0859f44b +0x04f:  mov    0xcc4(%eax),%eax
0859f451 +0x055:  movsbl %al,%edx
0859f454 +0x058:  mov    0x8(%ebp),%eax
0859f457 +0x05b:  mov    0xcd8(%eax),%eax
0859f45d +0x061:  movsbl %al,%eax
0859f460 +0x064:  movl   $0xffffffff,0xc(%esp)
0859f468 +0x06c:  mov    %edx,0x8(%esp)
0859f46c +0x070:  mov    %eax,0x4(%esp)
0859f470 +0x074:  lea    -0x17(%ebp),%eax
0859f473 +0x077:  mov    %eax,(%esp)
0859f476 +0x07a:  call   085beabe <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x1c>  ; global constructors keyed to CParty::cMember::cMember()+0x1c
0859f47b +0x07f:  lea    -0x17(%ebp),%eax
0859f47e +0x082:  mov    %eax,0x4(%esp)
0859f482 +0x086:  mov    0xc(%ebp),%eax
0859f485 +0x089:  mov    %eax,(%esp)
0859f488 +0x08c:  call   0834d220 <_ZNK8CDungeon26get_dimension_member_countER19DimensionPartyCount>  ; CDungeon::get_dimension_member_count(DimensionPartyCount&) const
0859f48d +0x091:  test   %al,%al
0859f48f +0x093:  je     0859f4a7 <+0xab>
0859f491 +0x095:  movzbl -0x15(%ebp),%eax
0859f495 +0x099:  movsbl %al,%eax
0859f498 +0x09c:  cmp    -0x14(%ebp),%eax
0859f49b +0x09f:  jle    0859f4c9 <+0xcd>
0859f49d +0x0a1:  mov    $0xab,%eax
0859f4a2 +0x0a6:  jmp    0859f580 <+0x184>
0859f4a7 +0x0ab:  mov    0xc(%ebp),%eax
0859f4aa +0x0ae:  mov    %eax,(%esp)
0859f4ad +0x0b1:  call   0826b944 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x212>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x212
0859f4b2 +0x0b6:  movsbl %al,%eax
0859f4b5 +0x0b9:  cmp    -0x14(%ebp),%eax
0859f4b8 +0x0bc:  setg   %al
0859f4bb +0x0bf:  test   %al,%al
0859f4bd +0x0c1:  je     0859f4c9 <+0xcd>
0859f4bf +0x0c3:  mov    $0xab,%eax
0859f4c4 +0x0c8:  jmp    0859f580 <+0x184>
0859f4c9 +0x0cd:  movl   $0x0,-0xc(%ebp)
0859f4d0 +0x0d4:  jmp    0859f56c <+0x170>
0859f4d5 +0x0d9:  mov    -0xc(%ebp),%eax
0859f4d8 +0x0dc:  mov    %eax,0x4(%esp)
0859f4dc +0x0e0:  mov    0x8(%ebp),%eax
0859f4df +0x0e3:  mov    %eax,(%esp)
0859f4e2 +0x0e6:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
0859f4e7 +0x0eb:  xor    $0x1,%eax
0859f4ea +0x0ee:  test   %al,%al
0859f4ec +0x0f0:  jne    0859f567 <+0x16b>
0859f4ee +0x0f2:  mov    -0xc(%ebp),%edx
0859f4f1 +0x0f5:  mov    0x8(%ebp),%ecx
0859f4f4 +0x0f8:  mov    %edx,%eax
0859f4f6 +0x0fa:  add    %eax,%eax
0859f4f8 +0x0fc:  add    %edx,%eax
0859f4fa +0x0fe:  shl    $0x3,%eax
0859f4fd +0x101:  lea    (%ecx,%eax,1),%eax
0859f500 +0x104:  add    $0x78,%eax
0859f503 +0x107:  mov    (%eax),%eax
0859f505 +0x109:  mov    %eax,(%esp)
0859f508 +0x10c:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0859f50d +0x111:  mov    -0x10(%ebp),%edx
0859f510 +0x114:  movzbl 0xeb9(%eax,%edx,1),%eax
0859f518 +0x11c:  test   %al,%al
0859f51a +0x11e:  jg     0859f557 <+0x15b>
0859f51c +0x120:  mov    0x8(%ebp),%eax
0859f51f +0x123:  mov    0xcd8(%eax),%eax
0859f525 +0x129:  cmp    $0x1,%eax
0859f528 +0x12c:  je     0859f557 <+0x15b>
0859f52a +0x12e:  mov    -0xc(%ebp),%edx
0859f52d +0x131:  mov    0x8(%ebp),%ecx
0859f530 +0x134:  mov    %edx,%eax
0859f532 +0x136:  add    %eax,%eax
0859f534 +0x138:  add    %edx,%eax
0859f536 +0x13a:  shl    $0x3,%eax
0859f539 +0x13d:  lea    (%ecx,%eax,1),%eax
0859f53c +0x140:  add    $0x78,%eax
0859f53f +0x143:  mov    (%eax),%eax
0859f541 +0x145:  mov    %eax,(%esp)
0859f544 +0x148:  call   0814589c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x31f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x31f
0859f549 +0x14d:  xor    $0x1,%eax
0859f54c +0x150:  test   %al,%al
0859f54e +0x152:  je     0859f557 <+0x15b>
0859f550 +0x154:  mov    $0x1,%eax
0859f555 +0x159:  jmp    0859f55c <+0x160>
0859f557 +0x15b:  mov    $0x0,%eax
0859f55c +0x160:  test   %al,%al
0859f55e +0x162:  je     0859f568 <+0x16c>
0859f560 +0x164:  mov    $0xad,%eax
0859f565 +0x169:  jmp    0859f580 <+0x184>
0859f567 +0x16b:  nop
0859f568 +0x16c:  addl   $0x1,-0xc(%ebp)
0859f56c +0x170:  cmpl   $0x3,-0xc(%ebp)
0859f570 +0x174:  setle  %al
0859f573 +0x177:  test   %al,%al
0859f575 +0x179:  jne    0859f4d5 <+0xd9>
0859f57b +0x17f:  mov    $0x0,%eax
0859f580 +0x184:  leave
0859f581 +0x185:  ret
```

## 反编译 C

```c
// CParty::CheckEnterDimensionDungeon @ 0x859f3fc

/* CParty::CheckEnterDimensionDungeon(CDungeon const*) */

undefined4 __thiscall CParty::CheckEnterDimensionDungeon(CParty *this,CDungeon *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  DimensionPartyCount local_1b [2];
  char local_19;
  int local_18;
  int local_14;
  int local_10;
  
  cVar2 = CDungeon::get_dimension_possible(*(CDungeon **)(this + 0xcac));
  if ('\0' < cVar2) {
    local_18 = get_member_count(this);
    cVar2 = CDungeon::get_dimension_possible(param_1);
    local_14 = cVar2 + -1;
    DimensionPartyCount::DimensionPartyCount
              (local_1b,(char)*(undefined4 *)(this + 0xcd8),(char)*(undefined4 *)(this + 0xcc4),-1);
    cVar2 = CDungeon::get_dimension_member_count(param_1,local_1b);
    if (cVar2 == '\0') {
      cVar2 = CDungeon::get_dimension_min_partymem(param_1);
      if (local_18 < cVar2) {
        return 0xab;
      }
    }
    else if (local_18 < local_19) {
      return 0xab;
    }
    for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
      cVar2 = _checkValidUser(this,local_10);
      if (cVar2 == '\x01') {
        iVar3 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)(this + local_10 * 0x18 + 0x78))
        ;
        if (((*(char *)(iVar3 + 0xeb9 + local_14) < '\x01') && (*(int *)(this + 0xcd8) != 1)) &&
           (cVar2 = CUser::isGMUser(*(CUser **)(this + local_10 * 0x18 + 0x78)), cVar2 != '\x01')) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          return 0xad;
        }
      }
    }
  }
  return 0;
}
```
