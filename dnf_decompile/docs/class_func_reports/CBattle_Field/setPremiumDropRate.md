# setPremiumDropRate

`_ZN13CBattle_Field18setPremiumDropRateERN8WongWork19stGenerateRefData_tEi`

`CBattle_Field::setPremiumDropRate(WongWork::stGenerateRefData_t&, int)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x0830b848` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0830b848  _ZN13CBattle_Field18setPremiumDropRateERN8WongWork19stGenerateRefData_tEi
#           CBattle_Field::setPremiumDropRate(WongWork::stGenerateRefData_t&, int)
# range [0x0830b848, 0x0830b8cb]
0830b848 +0x00:  push   %ebp
0830b849 +0x01:  mov    %esp,%ebp
0830b84b +0x03:  sub    $0x18,%esp
0830b84e +0x06:  mov    0x8(%ebp),%eax
0830b851 +0x09:  mov    0x188(%eax),%eax
0830b857 +0x0f:  mov    %eax,(%esp)
0830b85a +0x12:  call   0826b928 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x1f6>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x1f6
0830b85f +0x17:  test   %al,%al
0830b861 +0x19:  jg     0830b892 <+0x4a>
0830b863 +0x1b:  mov    0x8(%ebp),%eax
0830b866 +0x1e:  mov    %eax,(%esp)
0830b869 +0x21:  call   0830aa46 <_ZN13CBattle_Field22getItemDropDungeonTypeEv>  ; CBattle_Field::getItemDropDungeonType()
0830b86e +0x26:  test   %al,%al
0830b870 +0x28:  jne    0830b892 <+0x4a>
0830b872 +0x2a:  mov    0x8(%ebp),%eax
0830b875 +0x2d:  mov    0x188(%eax),%eax
0830b87b +0x33:  mov    %eax,(%esp)
0830b87e +0x36:  call   0822b4fa <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xba4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xba4
0830b883 +0x3b:  test   %al,%al
0830b885 +0x3d:  jne    0830b892 <+0x4a>
0830b887 +0x3f:  mov    0xc(%ebp),%eax
0830b88a +0x42:  movzbl 0x40(%eax),%eax
0830b88e +0x46:  test   %al,%al
0830b890 +0x48:  je     0830b899 <+0x51>
0830b892 +0x4a:  mov    $0x1,%eax
0830b897 +0x4f:  jmp    0830b89e <+0x56>
0830b899 +0x51:  mov    $0x0,%eax
0830b89e +0x56:  test   %al,%al
0830b8a0 +0x58:  je     0830b8ae <+0x66>
0830b8a2 +0x5a:  mov    0xc(%ebp),%eax
0830b8a5 +0x5d:  movl   $0x0,0x20(%eax)
0830b8ac +0x64:  jmp    0830b8c9 <+0x81>
0830b8ae +0x66:  cmpl   $0x0,0x10(%ebp)
0830b8b2 +0x6a:  jne    0830b8c0 <+0x78>
0830b8b4 +0x6c:  mov    0xc(%ebp),%eax
0830b8b7 +0x6f:  movl   $0xffffffff,0x20(%eax)
0830b8be +0x76:  jmp    0830b8c9 <+0x81>
0830b8c0 +0x78:  mov    0xc(%ebp),%eax
0830b8c3 +0x7b:  mov    0x10(%ebp),%edx
0830b8c6 +0x7e:  mov    %edx,0x20(%eax)
0830b8c9 +0x81:  leave
0830b8ca +0x82:  ret
0830b8cb +0x83:  nop
```

## 反编译 C

```c
// CBattle_Field::setPremiumDropRate @ 0x830b848

/* CBattle_Field::setPremiumDropRate(WongWork::stGenerateRefData_t&, int) */

void __thiscall
CBattle_Field::setPremiumDropRate(CBattle_Field *this,stGenerateRefData_t *param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  
  cVar2 = CDungeon::get_blood_dungeon_type(*(CDungeon **)(this + 0x188));
  if (cVar2 < '\x01') {
    cVar2 = getItemDropDungeonType(this);
    if (cVar2 == '\0') {
      cVar2 = CDungeon::isTowerOfDespairDungeon(*(CDungeon **)(this + 0x188));
      if ((cVar2 == '\0') && (param_1[0x40] == (stGenerateRefData_t)0x0)) {
        bVar1 = false;
        goto LAB_0830b89e;
      }
    }
  }
  bVar1 = true;
LAB_0830b89e:
  if (bVar1) {
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  else if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  }
  else {
    *(int *)(param_1 + 0x20) = param_2;
  }
  return;
}
```
