# UpdateCurCharacVisibleToCharacViewMemory

`_ZN5CUser40UpdateCurCharacVisibleToCharacViewMemoryEv`

`CUser::UpdateCurCharacVisibleToCharacViewMemory()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08651628` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08651628  _ZN5CUser40UpdateCurCharacVisibleToCharacViewMemoryEv
#           CUser::UpdateCurCharacVisibleToCharacViewMemory()
# range [0x08651628, 0x0865173f]
08651628 +0x000:  push   %ebp
08651629 +0x001:  mov    %esp,%ebp
0865162b +0x003:  push   %ebx
0865162c +0x004:  sub    $0x34,%esp
0865162f +0x007:  mov    0x8(%ebp),%eax
08651632 +0x00a:  mov    %eax,(%esp)
08651635 +0x00d:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0865163a +0x012:  mov    %eax,-0x1c(%ebp)
0865163d +0x015:  cmpl   $0x0,-0x1c(%ebp)
08651641 +0x019:  je     08651739 <+0x111>
08651647 +0x01f:  movl   $0x0,-0x18(%ebp)
0865164e +0x026:  jmp    08651728 <+0x100>
08651653 +0x02b:  mov    -0x18(%ebp),%eax
08651656 +0x02e:  imul   $0x3d,%eax,%eax
08651659 +0x031:  add    $0x10,%eax
0865165c +0x034:  add    -0x1c(%ebp),%eax
0865165f +0x037:  add    $0xc,%eax
08651662 +0x03a:  mov    %eax,-0x14(%ebp)
08651665 +0x03d:  mov    -0x18(%ebp),%eax
08651668 +0x040:  add    $0xd0,%eax
0865166d +0x045:  shl    $0x3,%eax
08651670 +0x048:  add    -0x1c(%ebp),%eax
08651673 +0x04b:  add    $0x4,%eax
08651676 +0x04e:  mov    %eax,-0x10(%ebp)
08651679 +0x051:  mov    -0x14(%ebp),%eax
0865167c +0x054:  mov    0x2(%eax),%eax
0865167f +0x057:  test   %eax,%eax
08651681 +0x059:  je     0865170b <+0xe3>
08651687 +0x05f:  mov    -0x18(%ebp),%eax
0865168a +0x062:  mov    %eax,0x4(%esp)
0865168e +0x066:  mov    -0x1c(%ebp),%eax
08651691 +0x069:  mov    %eax,(%esp)
08651694 +0x06c:  call   0850d374 <_GLOBAL__I_g_emptySlot+0x2a9>  ; global constructors keyed to g_emptySlot+0x2a9
08651699 +0x071:  test   %eax,%eax
0865169b +0x073:  setne  %al
0865169e +0x076:  test   %al,%al
086516a0 +0x078:  je     086516bb <+0x93>
086516a2 +0x07a:  mov    -0x18(%ebp),%eax
086516a5 +0x07d:  mov    %eax,0x4(%esp)
086516a9 +0x081:  mov    -0x1c(%ebp),%eax
086516ac +0x084:  mov    %eax,(%esp)
086516af +0x087:  call   0850d374 <_GLOBAL__I_g_emptySlot+0x2a9>  ; global constructors keyed to g_emptySlot+0x2a9
086516b4 +0x08c:  mov    -0x10(%ebp),%edx
086516b7 +0x08f:  mov    %eax,(%edx)
086516b9 +0x091:  jmp    086516c8 <+0xa0>
086516bb +0x093:  mov    -0x14(%ebp),%eax
086516be +0x096:  mov    0x2(%eax),%eax
086516c1 +0x099:  mov    %eax,%edx
086516c3 +0x09b:  mov    -0x10(%ebp),%eax
086516c6 +0x09e:  mov    %edx,(%eax)
086516c8 +0x0a0:  mov    -0x14(%ebp),%eax
086516cb +0x0a3:  mov    0x7(%eax),%ebx
086516ce +0x0a6:  mov    -0x1c(%ebp),%eax
086516d1 +0x0a9:  mov    %eax,(%esp)
086516d4 +0x0ac:  call   080dd576 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xbf>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xbf
086516d9 +0x0b1:  mov    %ebx,0x4(%esp)
086516dd +0x0b5:  mov    %eax,(%esp)
086516e0 +0x0b8:  call   082f992e <_ZNK8WongWork14CAvatarItemMgr16GetExpansionInfoEi>  ; WongWork::CAvatarItemMgr::GetExpansionInfo(int) const
086516e5 +0x0bd:  mov    %eax,-0xc(%ebp)
086516e8 +0x0c0:  cmpl   $0x0,-0xc(%ebp)
086516ec +0x0c4:  je     08651724 <+0xfc>
086516ee +0x0c6:  mov    -0xc(%ebp),%eax
086516f1 +0x0c9:  movzwl (%eax),%edx
086516f4 +0x0cc:  mov    -0x10(%ebp),%eax
086516f7 +0x0cf:  mov    %dx,0x4(%eax)
086516fb +0x0d3:  mov    -0xc(%ebp),%eax
086516fe +0x0d6:  movzwl 0x2(%eax),%edx
08651702 +0x0da:  mov    -0x10(%ebp),%eax
08651705 +0x0dd:  mov    %dx,0x6(%eax)
08651709 +0x0e1:  jmp    08651724 <+0xfc>
0865170b +0x0e3:  mov    -0x18(%ebp),%eax
0865170e +0x0e6:  add    $0xd0,%eax
08651713 +0x0eb:  shl    $0x3,%eax
08651716 +0x0ee:  add    -0x1c(%ebp),%eax
08651719 +0x0f1:  add    $0x4,%eax
0865171c +0x0f4:  mov    %eax,(%esp)
0865171f +0x0f7:  call   0850d348 <_GLOBAL__I_g_emptySlot+0x27d>  ; global constructors keyed to g_emptySlot+0x27d
08651724 +0x0fc:  addl   $0x1,-0x18(%ebp)
08651728 +0x100:  cmpl   $0xb,-0x18(%ebp)
0865172c +0x104:  setle  %al
0865172f +0x107:  test   %al,%al
08651731 +0x109:  jne    08651653 <+0x2b>
08651737 +0x10f:  jmp    0865173a <+0x112>
08651739 +0x111:  nop
0865173a +0x112:  add    $0x34,%esp
0865173d +0x115:  pop    %ebx
0865173e +0x116:  pop    %ebp
0865173f +0x117:  ret
```

## 反编译 C

```c
// CUser::UpdateCurCharacVisibleToCharacViewMemory @ 0x8651628

/* CUser::UpdateCurCharacVisibleToCharacViewMemory() */

void __thiscall CUser::UpdateCurCharacVisibleToCharacViewMemory(CUser *this)

{
  CInventory *this_00;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  CAvatarItemMgr *this_01;
  undefined2 *puVar4;
  int local_1c;
  
  this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
  if (this_00 != (CInventory *)0x0) {
    for (local_1c = 0; local_1c < 0xc; local_1c = local_1c + 1) {
      iVar1 = local_1c + 0xd0;
      if (*(int *)(this_00 + local_1c * 0x3d + 0x1e) == 0) {
        CInventory::AvatarVisibleData::init
                  ((AvatarVisibleData *)(this_00 + (local_1c + 0xd0) * 8 + 4));
      }
      else {
        iVar2 = CInventory::GetClearAvatar(this_00,local_1c);
        if (iVar2 == 0) {
          *(undefined4 *)(this_00 + iVar1 * 8 + 4) =
               *(undefined4 *)(this_00 + local_1c * 0x3d + 0x1e);
        }
        else {
          uVar3 = CInventory::GetClearAvatar(this_00,local_1c);
          *(undefined4 *)(this_00 + iVar1 * 8 + 4) = uVar3;
        }
        iVar2 = *(int *)(this_00 + local_1c * 0x3d + 0x23);
        this_01 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(this_00);
        puVar4 = (undefined2 *)WongWork::CAvatarItemMgr::GetExpansionInfo(this_01,iVar2);
        if (puVar4 != (undefined2 *)0x0) {
          *(undefined2 *)(this_00 + iVar1 * 8 + 8) = *puVar4;
          *(undefined2 *)(this_00 + iVar1 * 8 + 10) = puVar4[1];
        }
      }
    }
  }
  return;
}
```
