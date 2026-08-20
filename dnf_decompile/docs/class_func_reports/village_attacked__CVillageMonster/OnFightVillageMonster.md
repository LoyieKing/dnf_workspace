# OnFightVillageMonster

`_ZN16village_attacked15CVillageMonster21OnFightVillageMonsterEP5CUserRiS3_`

`village_attacked::CVillageMonster::OnFightVillageMonster(CUser*, int&, int&)`

| 类 | 地址 |
|---|---|
| `village_attacked::CVillageMonster` | `0x086b3240` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086b3240  _ZN16village_attacked15CVillageMonster21OnFightVillageMonsterEP5CUserRiS3_
#           village_attacked::CVillageMonster::OnFightVillageMonster(CUser*, int&, int&)
# range [0x086b3240, 0x086b3309]
086b3240 +0x00:  push   %ebp
086b3241 +0x01:  mov    %esp,%ebp
086b3243 +0x03:  sub    $0x18,%esp
086b3246 +0x06:  mov    0x8(%ebp),%eax
086b3249 +0x09:  mov    0x14(%eax),%eax
086b324c +0x0c:  test   %eax,%eax
086b324e +0x0e:  je     086b325a <+0x1a>
086b3250 +0x10:  mov    $0x13,%eax
086b3255 +0x15:  jmp    086b3307 <+0xc7>
086b325a +0x1a:  mov    0xc(%ebp),%eax
086b325d +0x1d:  mov    %eax,(%esp)
086b3260 +0x20:  call   0813492c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x533>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x533
086b3265 +0x25:  movzwl %ax,%edx
086b3268 +0x28:  mov    0x8(%ebp),%eax
086b326b +0x2b:  mov    0x4(%eax),%eax
086b326e +0x2e:  mov    %edx,%ecx
086b3270 +0x30:  sub    %eax,%ecx
086b3272 +0x32:  mov    %ecx,%eax
086b3274 +0x34:  mov    %eax,%edx
086b3276 +0x36:  sar    $0x1f,%edx
086b3279 +0x39:  xor    %edx,%eax
086b327b +0x3b:  sub    %edx,%eax
086b327d +0x3d:  cmp    $0x12c,%eax
086b3282 +0x42:  jg     086b32ae <+0x6e>
086b3284 +0x44:  mov    0xc(%ebp),%eax
086b3287 +0x47:  mov    %eax,(%esp)
086b328a +0x4a:  call   0813493c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x543>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x543
086b328f +0x4f:  movzwl %ax,%edx
086b3292 +0x52:  mov    0x8(%ebp),%eax
086b3295 +0x55:  mov    0x8(%eax),%eax
086b3298 +0x58:  mov    %edx,%ecx
086b329a +0x5a:  sub    %eax,%ecx
086b329c +0x5c:  mov    %ecx,%eax
086b329e +0x5e:  mov    %eax,%edx
086b32a0 +0x60:  sar    $0x1f,%edx
086b32a3 +0x63:  xor    %edx,%eax
086b32a5 +0x65:  sub    %edx,%eax
086b32a7 +0x67:  cmp    $0x12c,%eax
086b32ac +0x6c:  jle    086b32b5 <+0x75>
086b32ae +0x6e:  mov    $0x1,%eax
086b32b3 +0x73:  jmp    086b32ba <+0x7a>
086b32b5 +0x75:  mov    $0x0,%eax
086b32ba +0x7a:  test   %al,%al
086b32bc +0x7c:  je     086b32c5 <+0x85>
086b32be +0x7e:  mov    $0x63,%eax
086b32c3 +0x83:  jmp    086b3307 <+0xc7>
086b32c5 +0x85:  movl   $0x1,0x4(%esp)
086b32cd +0x8d:  mov    0x8(%ebp),%eax
086b32d0 +0x90:  mov    %eax,(%esp)
086b32d3 +0x93:  call   086b35a0 <_ZN16village_attacked15CVillageMonster13OnChangeStateENS_26ENUM_VILLAGE_MONSTER_STATEE>  ; village_attacked::CVillageMonster::OnChangeState(village_attacked::ENUM_VILLAGE_MONSTER_STATE)
086b32d8 +0x98:  mov    0xc(%ebp),%eax
086b32db +0x9b:  mov    %eax,(%esp)
086b32de +0x9e:  call   0822fe4e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x54f8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x54f8
086b32e3 +0xa3:  movswl %ax,%edx
086b32e6 +0xa6:  mov    0x8(%ebp),%eax
086b32e9 +0xa9:  mov    %edx,0x18(%eax)
086b32ec +0xac:  mov    0x8(%ebp),%eax
086b32ef +0xaf:  mov    0x20(%eax),%edx
086b32f2 +0xb2:  mov    0x10(%ebp),%eax
086b32f5 +0xb5:  mov    %edx,(%eax)
086b32f7 +0xb7:  mov    0x8(%ebp),%eax
086b32fa +0xba:  mov    0x24(%eax),%edx
086b32fd +0xbd:  mov    0x14(%ebp),%eax
086b3300 +0xc0:  mov    %edx,(%eax)
086b3302 +0xc2:  mov    $0x0,%eax
086b3307 +0xc7:  leave
086b3308 +0xc8:  ret
086b3309 +0xc9:  nop
```

## 反编译 C

```c
// village_attacked::CVillageMonster::OnFightVillageMonster @ 0x86b3240

/* village_attacked::CVillageMonster::OnFightVillageMonster(CUser*, int&, int&) */

undefined4 __thiscall
village_attacked::CVillageMonster::OnFightVillageMonster
          (CVillageMonster *this,CUser *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  short sVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  
  if (*(int *)(this + 0x14) == 0) {
    uVar3 = CUser::get_posX(param_1);
    uVar3 = (uVar3 & 0xffff) - *(int *)(this + 4);
    uVar5 = (int)uVar3 >> 0x1f;
    if (((int)((uVar3 ^ uVar5) - uVar5) < 0x12d) &&
       (uVar3 = CUser::get_posY(param_1), uVar3 = (uVar3 & 0xffff) - *(int *)(this + 8),
       uVar5 = (int)uVar3 >> 0x1f, (int)((uVar3 ^ uVar5) - uVar5) < 0x12d)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar4 = 99;
    }
    else {
      OnChangeState(this,1);
      sVar2 = CUser::GetPartyIndex(param_1);
      *(int *)(this + 0x18) = (int)sVar2;
      *param_2 = *(int *)(this + 0x20);
      *param_3 = *(int *)(this + 0x24);
      uVar4 = 0;
    }
    return uVar4;
  }
  return 0x13;
}
```
