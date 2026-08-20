# OnStartVillageAttacked

`_ZN16village_attacked18CVillageMonsterMgr22OnStartVillageAttackedEv`

`village_attacked::CVillageMonsterMgr::OnStartVillageAttacked()`

| 类 | 地址 |
|---|---|
| `village_attacked::CVillageMonsterMgr` | `0x086b4a20` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086b4a20  _ZN16village_attacked18CVillageMonsterMgr22OnStartVillageAttackedEv
#           village_attacked::CVillageMonsterMgr::OnStartVillageAttacked()
# range [0x086b4a20, 0x086b4a4b]
086b4a20 +0x00:  push   %ebp
086b4a21 +0x01:  mov    %esp,%ebp
086b4a23 +0x03:  sub    $0x18,%esp
086b4a26 +0x06:  mov    0x8(%ebp),%eax
086b4a29 +0x09:  mov    0x4(%eax),%eax
086b4a2c +0x0c:  cmp    $0x1,%eax
086b4a2f +0x0f:  je     086b4a48 <+0x28>
086b4a31 +0x11:  mov    0x8(%ebp),%eax
086b4a34 +0x14:  mov    %eax,(%esp)
086b4a37 +0x17:  call   086b4280 <_ZN16village_attacked18CVillageMonsterMgr22OnCreateVillageMonsterEv>  ; village_attacked::CVillageMonsterMgr::OnCreateVillageMonster()
086b4a3c +0x1c:  mov    0x8(%ebp),%eax
086b4a3f +0x1f:  movl   $0x1,0x4(%eax)
086b4a46 +0x26:  jmp    086b4a49 <+0x29>
086b4a48 +0x28:  nop
086b4a49 +0x29:  leave
086b4a4a +0x2a:  ret
086b4a4b +0x2b:  nop
```

## 反编译 C

```c
// village_attacked::CVillageMonsterMgr::OnStartVillageAttacked @ 0x86b4a20

/* village_attacked::CVillageMonsterMgr::OnStartVillageAttacked() */

void __thiscall
village_attacked::CVillageMonsterMgr::OnStartVillageAttacked(CVillageMonsterMgr *this)

{
  if (*(int *)(this + 4) != 1) {
    OnCreateVillageMonster(this);
    *(undefined4 *)(this + 4) = 1;
  }
  return;
}
```
