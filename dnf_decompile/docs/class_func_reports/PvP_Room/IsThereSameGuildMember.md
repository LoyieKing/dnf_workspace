# IsThereSameGuildMember

`_ZN8PvP_Room22IsThereSameGuildMemberEv`

`PvP_Room::IsThereSameGuildMember()`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085da5f4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085da5f4  _ZN8PvP_Room22IsThereSameGuildMemberEv
#           PvP_Room::IsThereSameGuildMember()
# range [0x085da5f4, 0x085da7cb]
085da5f4 +0x000:  push   %ebp
085da5f5 +0x001:  mov    %esp,%ebp
085da5f7 +0x003:  push   %ebx
085da5f8 +0x004:  sub    $0x64,%esp
085da5fb +0x007:  mov    0x8(%ebp),%eax
085da5fe +0x00a:  mov    0x4(%eax),%eax
085da601 +0x00d:  cmp    $0x2,%eax
085da604 +0x010:  je     085da615 <+0x21>
085da606 +0x012:  mov    0x8(%ebp),%eax
085da609 +0x015:  mov    0x4(%eax),%eax
085da60c +0x018:  cmp    $0x3,%eax
085da60f +0x01b:  jne    085da760 <+0x16c>
085da615 +0x021:  movl   $0x4,-0x2c(%ebp)
085da61c +0x028:  movl   $0x0,-0x28(%ebp)
085da623 +0x02f:  movl   $0x0,-0x24(%ebp)
085da62a +0x036:  movl   $0x0,-0x40(%ebp)
085da631 +0x03d:  movl   $0x0,-0x3c(%ebp)
085da638 +0x044:  movl   $0x0,-0x38(%ebp)
085da63f +0x04b:  movl   $0x0,-0x34(%ebp)
085da646 +0x052:  movl   $0x0,-0x50(%ebp)
085da64d +0x059:  movl   $0x0,-0x4c(%ebp)
085da654 +0x060:  movl   $0x0,-0x48(%ebp)
085da65b +0x067:  movl   $0x0,-0x44(%ebp)
085da662 +0x06e:  movl   $0x0,-0x20(%ebp)
085da669 +0x075:  jmp    085da6e9 <+0xf5>
085da66b +0x077:  mov    -0x20(%ebp),%edx
085da66e +0x07a:  mov    0x8(%ebp),%eax
085da671 +0x07d:  add    $0x14,%edx
085da674 +0x080:  mov    (%eax,%edx,4),%eax
085da677 +0x083:  cmp    $0x1,%eax
085da67a +0x086:  jne    085da6a9 <+0xb5>
085da67c +0x088:  mov    -0x20(%ebp),%edx
085da67f +0x08b:  mov    0x8(%ebp),%eax
085da682 +0x08e:  add    $0xc,%edx
085da685 +0x091:  mov    (%eax,%edx,4),%eax
085da688 +0x094:  mov    %eax,-0x30(%ebp)
085da68b +0x097:  cmpl   $0x0,-0x30(%ebp)
085da68f +0x09b:  je     085da6e5 <+0xf1>
085da691 +0x09d:  mov    -0x28(%ebp),%ebx
085da694 +0x0a0:  mov    -0x30(%ebp),%eax
085da697 +0x0a3:  mov    %eax,(%esp)
085da69a +0x0a6:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
085da69f +0x0ab:  mov    %eax,-0x40(%ebp,%ebx,4)
085da6a3 +0x0af:  addl   $0x1,-0x28(%ebp)
085da6a7 +0x0b3:  jmp    085da6e5 <+0xf1>
085da6a9 +0x0b5:  mov    -0x20(%ebp),%edx
085da6ac +0x0b8:  mov    0x8(%ebp),%eax
085da6af +0x0bb:  add    $0x14,%edx
085da6b2 +0x0be:  mov    (%eax,%edx,4),%eax
085da6b5 +0x0c1:  cmp    $0x2,%eax
085da6b8 +0x0c4:  jne    085da6e5 <+0xf1>
085da6ba +0x0c6:  mov    -0x20(%ebp),%edx
085da6bd +0x0c9:  mov    0x8(%ebp),%eax
085da6c0 +0x0cc:  add    $0xc,%edx
085da6c3 +0x0cf:  mov    (%eax,%edx,4),%eax
085da6c6 +0x0d2:  mov    %eax,-0x30(%ebp)
085da6c9 +0x0d5:  cmpl   $0x0,-0x30(%ebp)
085da6cd +0x0d9:  je     085da6e5 <+0xf1>
085da6cf +0x0db:  mov    -0x24(%ebp),%ebx
085da6d2 +0x0de:  mov    -0x30(%ebp),%eax
085da6d5 +0x0e1:  mov    %eax,(%esp)
085da6d8 +0x0e4:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
085da6dd +0x0e9:  mov    %eax,-0x50(%ebp,%ebx,4)
085da6e1 +0x0ed:  addl   $0x1,-0x24(%ebp)
085da6e5 +0x0f1:  addl   $0x1,-0x20(%ebp)
085da6e9 +0x0f5:  cmpl   $0x7,-0x20(%ebp)
085da6ed +0x0f9:  setle  %al
085da6f0 +0x0fc:  test   %al,%al
085da6f2 +0x0fe:  jne    085da66b <+0x77>
085da6f8 +0x104:  cmpl   $0x0,-0x28(%ebp)
085da6fc +0x108:  je     085da704 <+0x110>
085da6fe +0x10a:  cmpl   $0x0,-0x24(%ebp)
085da702 +0x10e:  jne    085da70e <+0x11a>
085da704 +0x110:  mov    $0x0,%eax
085da709 +0x115:  jmp    085da7c5 <+0x1d1>
085da70e +0x11a:  movl   $0x0,-0x1c(%ebp)
085da715 +0x121:  jmp    085da751 <+0x15d>
085da717 +0x123:  movl   $0x0,-0x18(%ebp)
085da71e +0x12a:  jmp    085da740 <+0x14c>
085da720 +0x12c:  mov    -0x1c(%ebp),%eax
085da723 +0x12f:  mov    -0x40(%ebp,%eax,4),%edx
085da727 +0x133:  mov    -0x18(%ebp),%eax
085da72a +0x136:  mov    -0x50(%ebp,%eax,4),%eax
085da72e +0x13a:  cmp    %eax,%edx
085da730 +0x13c:  jne    085da73c <+0x148>
085da732 +0x13e:  mov    $0x1,%eax
085da737 +0x143:  jmp    085da7c5 <+0x1d1>
085da73c +0x148:  addl   $0x1,-0x18(%ebp)
085da740 +0x14c:  mov    -0x18(%ebp),%eax
085da743 +0x14f:  cmp    -0x24(%ebp),%eax
085da746 +0x152:  setl   %al
085da749 +0x155:  test   %al,%al
085da74b +0x157:  jne    085da720 <+0x12c>
085da74d +0x159:  addl   $0x1,-0x1c(%ebp)
085da751 +0x15d:  mov    -0x1c(%ebp),%eax
085da754 +0x160:  cmp    -0x28(%ebp),%eax
085da757 +0x163:  setl   %al
085da75a +0x166:  test   %al,%al
085da75c +0x168:  jne    085da717 <+0x123>
085da75e +0x16a:  jmp    085da7c0 <+0x1cc>
085da760 +0x16c:  movl   $0x0,-0x14(%ebp)
085da767 +0x173:  movl   $0x0,-0xc(%ebp)
085da76e +0x17a:  jmp    085da7b5 <+0x1c1>
085da770 +0x17c:  mov    -0xc(%ebp),%edx
085da773 +0x17f:  mov    0x8(%ebp),%eax
085da776 +0x182:  add    $0xc,%edx
085da779 +0x185:  mov    (%eax,%edx,4),%eax
085da77c +0x188:  mov    %eax,-0x30(%ebp)
085da77f +0x18b:  cmpl   $0x0,-0x30(%ebp)
085da783 +0x18f:  je     085da7b1 <+0x1bd>
085da785 +0x191:  mov    -0x30(%ebp),%eax
085da788 +0x194:  mov    %eax,(%esp)
085da78b +0x197:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
085da790 +0x19c:  mov    %eax,-0x10(%ebp)
085da793 +0x19f:  cmpl   $0x0,-0x10(%ebp)
085da797 +0x1a3:  je     085da7b0 <+0x1bc>
085da799 +0x1a5:  mov    -0x14(%ebp),%eax
085da79c +0x1a8:  cmp    -0x10(%ebp),%eax
085da79f +0x1ab:  jne    085da7a8 <+0x1b4>
085da7a1 +0x1ad:  mov    $0x1,%eax
085da7a6 +0x1b2:  jmp    085da7c5 <+0x1d1>
085da7a8 +0x1b4:  mov    -0x10(%ebp),%eax
085da7ab +0x1b7:  mov    %eax,-0x14(%ebp)
085da7ae +0x1ba:  jmp    085da7b1 <+0x1bd>
085da7b0 +0x1bc:  nop
085da7b1 +0x1bd:  addl   $0x1,-0xc(%ebp)
085da7b5 +0x1c1:  cmpl   $0x7,-0xc(%ebp)
085da7b9 +0x1c5:  setle  %al
085da7bc +0x1c8:  test   %al,%al
085da7be +0x1ca:  jne    085da770 <+0x17c>
085da7c0 +0x1cc:  mov    $0x0,%eax
085da7c5 +0x1d1:  add    $0x64,%esp
085da7c8 +0x1d4:  pop    %ebx
085da7c9 +0x1d5:  pop    %ebp
085da7ca +0x1d6:  ret
085da7cb +0x1d7:  nop
```

## 反编译 C

```c
// PvP_Room::IsThereSameGuildMember @ 0x85da5f4

/* PvP_Room::IsThereSameGuildMember() */

undefined4 __thiscall PvP_Room::IsThereSameGuildMember(PvP_Room *this)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int local_54 [8];
  CUserCharacInfo *local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  if ((*(int *)(this + 4) == 2) || (*(int *)(this + 4) == 3)) {
    local_30 = 4;
    local_2c = 0;
    local_28 = 0;
    local_54[4] = 0;
    local_54[5] = 0;
    local_54[6] = 0;
    local_54[7] = 0;
    local_54[0] = 0;
    local_54[1] = 0;
    local_54[2] = 0;
    local_54[3] = 0;
    for (local_24 = 0; iVar1 = local_28, iVar2 = local_2c, local_24 < 8; local_24 = local_24 + 1) {
      if (*(int *)(this + (local_24 + 0x14) * 4) == 1) {
        local_34 = *(CUserCharacInfo **)(this + (local_24 + 0xc) * 4);
        if (local_34 != (CUserCharacInfo *)0x0) {
          iVar1 = CUserCharacInfo::get_charac_guildkey(local_34);
          local_54[iVar2 + 4] = iVar1;
          local_2c = local_2c + 1;
        }
      }
      else if (*(int *)(this + (local_24 + 0x14) * 4) == 2) {
        local_34 = *(CUserCharacInfo **)(this + (local_24 + 0xc) * 4);
        if (local_34 != (CUserCharacInfo *)0x0) {
          iVar2 = CUserCharacInfo::get_charac_guildkey(local_34);
          local_54[iVar1] = iVar2;
          local_28 = local_28 + 1;
        }
      }
    }
    if ((local_2c == 0) || (local_28 == 0)) {
      return 0;
    }
    for (local_20 = 0; local_20 < local_2c; local_20 = local_20 + 1) {
      for (local_1c = 0; local_1c < local_28; local_1c = local_1c + 1) {
        if (local_54[local_20 + 4] == local_54[local_1c]) {
          return 1;
        }
      }
    }
  }
  else {
    local_18 = 0;
    for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
      local_34 = *(CUserCharacInfo **)(this + (local_10 + 0xc) * 4);
      if (((local_34 != (CUserCharacInfo *)0x0) &&
          (local_14 = CUserCharacInfo::get_charac_guildkey(local_34), local_14 != 0)) &&
         (bVar3 = local_18 == local_14, local_18 = local_14, bVar3)) {
        return 1;
      }
    }
  }
  return 0;
}
```
