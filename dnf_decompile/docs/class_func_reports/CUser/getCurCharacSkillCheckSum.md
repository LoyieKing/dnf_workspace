# getCurCharacSkillCheckSum

`_ZNK5CUser25getCurCharacSkillCheckSumEv`

`CUser::getCurCharacSkillCheckSum() const`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0864e114` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864e114  _ZNK5CUser25getCurCharacSkillCheckSumEv
#           CUser::getCurCharacSkillCheckSum() const
# range [0x0864e114, 0x0864e15d]
0864e114 +0x00:  push   %ebp
0864e115 +0x01:  mov    %esp,%ebp
0864e117 +0x03:  push   %ebx
0864e118 +0x04:  sub    $0x14,%esp
0864e11b +0x07:  mov    0x8(%ebp),%eax
0864e11e +0x0a:  mov    %eax,(%esp)
0864e121 +0x0d:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0864e126 +0x12:  test   %eax,%eax
0864e128 +0x14:  sete   %al
0864e12b +0x17:  test   %al,%al
0864e12d +0x19:  je     0864e136 <+0x22>
0864e12f +0x1b:  mov    $0x0,%eax
0864e134 +0x20:  jmp    0864e158 <+0x44>
0864e136 +0x22:  mov    0x8(%ebp),%eax
0864e139 +0x25:  mov    0x796e0(%eax),%eax
0864e13f +0x2b:  mov    %eax,%ebx
0864e141 +0x2d:  mov    0x8(%ebp),%eax
0864e144 +0x30:  mov    %eax,(%esp)
0864e147 +0x33:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0864e14c +0x38:  mov    %ebx,0x4(%esp)
0864e150 +0x3c:  mov    %eax,(%esp)
0864e153 +0x3f:  call   086066f2 <_ZNK9SkillSlot12makeCheckSumEi>  ; SkillSlot::makeCheckSum(int) const
0864e158 +0x44:  add    $0x14,%esp
0864e15b +0x47:  pop    %ebx
0864e15c +0x48:  pop    %ebp
0864e15d +0x49:  ret
```

## 反编译 C

```c
// CUser::getCurCharacSkillCheckSum @ 0x864e114

/* CUser::getCurCharacSkillCheckSum() const */

undefined4 __thiscall CUser::getCurCharacSkillCheckSum(CUser *this)

{
  int iVar1;
  undefined4 uVar2;
  SkillSlot *this_00;
  
  iVar1 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = *(int *)(this + 0x796e0);
    this_00 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
    uVar2 = SkillSlot::makeCheckSum(this_00,iVar1);
  }
  return uVar2;
}
```
