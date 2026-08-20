# CheckHellCoinLimint

`_ZN6CParty19CheckHellCoinLimintEi`

`CParty::CheckHellCoinLimint(int)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085a834a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085a834a  _ZN6CParty19CheckHellCoinLimintEi
#           CParty::CheckHellCoinLimint(int)
# range [0x085a834a, 0x085a83a1]
085a834a +0x00:  push   %ebp
085a834b +0x01:  mov    %esp,%ebp
085a834d +0x03:  sub    $0x18,%esp
085a8350 +0x06:  call   0830ed07 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x8ec>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x8ec
085a8355 +0x0b:  test   %al,%al
085a8357 +0x0d:  je     085a839a <+0x50>
085a8359 +0x0f:  mov    0x8(%ebp),%eax
085a835c +0x12:  mov    0xcd4(%eax),%eax
085a8362 +0x18:  cmp    $0x1,%eax
085a8365 +0x1b:  jne    085a839a <+0x50>
085a8367 +0x1d:  mov    0x8(%ebp),%eax
085a836a +0x20:  add    $0xb24,%eax
085a836f +0x25:  mov    %eax,(%esp)
085a8372 +0x28:  call   085bf250 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x7ae>  ; global constructors keyed to CParty::cMember::cMember()+0x7ae
085a8377 +0x2d:  xor    $0x1,%eax
085a837a +0x30:  test   %al,%al
085a837c +0x32:  je     085a839a <+0x50>
085a837e +0x34:  mov    0x8(%ebp),%eax
085a8381 +0x37:  mov    %eax,(%esp)
085a8384 +0x3a:  call   0822d8e8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2f92>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2f92
085a8389 +0x3f:  cmp    0xc(%ebp),%eax
085a838c +0x42:  setge  %al
085a838f +0x45:  test   %al,%al
085a8391 +0x47:  je     085a839a <+0x50>
085a8393 +0x49:  mov    $0x0,%eax
085a8398 +0x4e:  jmp    085a839f <+0x55>
085a839a +0x50:  mov    $0x1,%eax
085a839f +0x55:  leave
085a83a0 +0x56:  ret
085a83a1 +0x57:  nop
```

## 反编译 C

```c
// CParty::CheckHellCoinLimint @ 0x85a834a

/* CParty::CheckHellCoinLimint(int) */

undefined4 __thiscall CParty::CheckHellCoinLimint(CParty *this,int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = CBattle_Field::IsEnableHellDungeon();
  if ((((cVar1 != '\0') && (*(int *)(this + 0xcd4) == 1)) &&
      (cVar1 = CBattle_Field::IsKilledAllHellGruoups((CBattle_Field *)(this + 0xb24)),
      cVar1 != '\x01')) && (iVar2 = GetUsedCoinCount(this), param_1 <= iVar2)) {
    return 0;
  }
  return 1;
}
```
