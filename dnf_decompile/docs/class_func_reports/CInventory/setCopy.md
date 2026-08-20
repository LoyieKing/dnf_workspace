# setCopy

`_ZN10CInventory7setCopyERKS_`

`CInventory::setCopy(CInventory const&)`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x084fa314` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084fa314  _ZN10CInventory7setCopyERKS_
#           CInventory::setCopy(CInventory const&)
# range [0x084fa314, 0x084fa4ab]
084fa314 +0x000:  push   %ebp
084fa315 +0x001:  mov    %esp,%ebp
084fa317 +0x003:  sub    $0x28,%esp
084fa31a +0x006:  mov    0xc(%ebp),%eax
084fa31d +0x009:  mov    (%eax),%edx
084fa31f +0x00b:  mov    0x8(%ebp),%eax
084fa322 +0x00e:  mov    %edx,(%eax)
084fa324 +0x010:  mov    0xc(%ebp),%eax
084fa327 +0x013:  mov    0x4(%eax),%edx
084fa32a +0x016:  mov    0x8(%ebp),%eax
084fa32d +0x019:  mov    %edx,0x4(%eax)
084fa330 +0x01c:  mov    0xc(%ebp),%eax
084fa333 +0x01f:  mov    0x8(%eax),%edx
084fa336 +0x022:  mov    0x8(%ebp),%eax
084fa339 +0x025:  mov    %edx,0x8(%eax)
084fa33c +0x028:  mov    0xc(%ebp),%eax
084fa33f +0x02b:  mov    0xc(%eax),%edx
084fa342 +0x02e:  mov    0x8(%ebp),%eax
084fa345 +0x031:  mov    %edx,0xc(%eax)
084fa348 +0x034:  mov    0xc(%ebp),%eax
084fa34b +0x037:  mov    0x10(%eax),%edx
084fa34e +0x03a:  mov    0x8(%ebp),%eax
084fa351 +0x03d:  mov    %edx,0x10(%eax)
084fa354 +0x040:  mov    0xc(%ebp),%eax
084fa357 +0x043:  mov    0x14(%eax),%edx
084fa35a +0x046:  mov    0x8(%ebp),%eax
084fa35d +0x049:  mov    %edx,0x14(%eax)
084fa360 +0x04c:  movl   $0x0,-0x18(%ebp)
084fa367 +0x053:  jmp    084fa397 <+0x83>
084fa369 +0x055:  mov    -0x18(%ebp),%eax
084fa36c +0x058:  imul   $0x3d,%eax,%eax
084fa36f +0x05b:  add    $0x10,%eax
084fa372 +0x05e:  add    0xc(%ebp),%eax
084fa375 +0x061:  lea    0xc(%eax),%edx
084fa378 +0x064:  mov    -0x18(%ebp),%eax
084fa37b +0x067:  imul   $0x3d,%eax,%eax
084fa37e +0x06a:  add    $0x10,%eax
084fa381 +0x06d:  add    0x8(%ebp),%eax
084fa384 +0x070:  add    $0xc,%eax
084fa387 +0x073:  mov    %edx,0x4(%esp)
084fa38b +0x077:  mov    %eax,(%esp)
084fa38e +0x07a:  call   0814a62e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x3cd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x3cd
084fa393 +0x07f:  addl   $0x1,-0x18(%ebp)
084fa397 +0x083:  cmpl   $0x19,-0x18(%ebp)
084fa39b +0x087:  setle  %al
084fa39e +0x08a:  test   %al,%al
084fa3a0 +0x08c:  jne    084fa369 <+0x55>
084fa3a2 +0x08e:  movl   $0x0,-0x14(%ebp)
084fa3a9 +0x095:  jmp    084fa3de <+0xca>
084fa3ab +0x097:  mov    0xc(%ebp),%eax
084fa3ae +0x09a:  mov    0x650(%eax),%edx
084fa3b4 +0x0a0:  mov    -0x14(%ebp),%eax
084fa3b7 +0x0a3:  imul   $0x3d,%eax,%eax
084fa3ba +0x0a6:  add    %eax,%edx
084fa3bc +0x0a8:  mov    0x8(%ebp),%eax
084fa3bf +0x0ab:  mov    0x650(%eax),%ecx
084fa3c5 +0x0b1:  mov    -0x14(%ebp),%eax
084fa3c8 +0x0b4:  imul   $0x3d,%eax,%eax
084fa3cb +0x0b7:  lea    (%ecx,%eax,1),%eax
084fa3ce +0x0ba:  mov    %edx,0x4(%esp)
084fa3d2 +0x0be:  mov    %eax,(%esp)
084fa3d5 +0x0c1:  call   0814a62e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x3cd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x3cd
084fa3da +0x0c6:  addl   $0x1,-0x14(%ebp)
084fa3de +0x0ca:  cmpl   $0x137,-0x14(%ebp)
084fa3e5 +0x0d1:  setle  %al
084fa3e8 +0x0d4:  test   %al,%al
084fa3ea +0x0d6:  jne    084fa3ab <+0x97>
084fa3ec +0x0d8:  movl   $0x0,-0x10(%ebp)
084fa3f3 +0x0df:  jmp    084fa428 <+0x114>
084fa3f5 +0x0e1:  mov    0xc(%ebp),%eax
084fa3f8 +0x0e4:  mov    0x654(%eax),%edx
084fa3fe +0x0ea:  mov    -0x10(%ebp),%eax
084fa401 +0x0ed:  imul   $0x3d,%eax,%eax
084fa404 +0x0f0:  add    %eax,%edx
084fa406 +0x0f2:  mov    0x8(%ebp),%eax
084fa409 +0x0f5:  mov    0x654(%eax),%ecx
084fa40f +0x0fb:  mov    -0x10(%ebp),%eax
084fa412 +0x0fe:  imul   $0x3d,%eax,%eax
084fa415 +0x101:  lea    (%ecx,%eax,1),%eax
084fa418 +0x104:  mov    %edx,0x4(%esp)
084fa41c +0x108:  mov    %eax,(%esp)
084fa41f +0x10b:  call   0814a62e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x3cd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x3cd
084fa424 +0x110:  addl   $0x1,-0x10(%ebp)
084fa428 +0x114:  cmpl   $0x68,-0x10(%ebp)
084fa42c +0x118:  setle  %al
084fa42f +0x11b:  test   %al,%al
084fa431 +0x11d:  jne    084fa3f5 <+0xe1>
084fa433 +0x11f:  mov    0x8(%ebp),%eax
084fa436 +0x122:  mov    (%eax),%eax
084fa438 +0x124:  mov    0x8(%ebp),%edx
084fa43b +0x127:  add    $0x6e8,%edx
084fa441 +0x12d:  mov    %eax,0x4(%esp)
084fa445 +0x131:  mov    %edx,(%esp)
084fa448 +0x134:  call   0822d39a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2a44>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2a44
084fa44d +0x139:  movl   $0x0,-0xc(%ebp)
084fa454 +0x140:  jmp    084fa489 <+0x175>
084fa456 +0x142:  mov    0xc(%ebp),%eax
084fa459 +0x145:  mov    0x6e4(%eax),%edx
084fa45f +0x14b:  mov    -0xc(%ebp),%eax
084fa462 +0x14e:  imul   $0x3d,%eax,%eax
084fa465 +0x151:  add    %eax,%edx
084fa467 +0x153:  mov    0x8(%ebp),%eax
084fa46a +0x156:  mov    0x6e4(%eax),%ecx
084fa470 +0x15c:  mov    -0xc(%ebp),%eax
084fa473 +0x15f:  imul   $0x3d,%eax,%eax
084fa476 +0x162:  lea    (%ecx,%eax,1),%eax
084fa479 +0x165:  mov    %edx,0x4(%esp)
084fa47d +0x169:  mov    %eax,(%esp)
084fa480 +0x16c:  call   0814a62e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x3cd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x3cd
084fa485 +0x171:  addl   $0x1,-0xc(%ebp)
084fa489 +0x175:  cmpl   $0xf1,-0xc(%ebp)
084fa490 +0x17c:  setle  %al
084fa493 +0x17f:  test   %al,%al
084fa495 +0x181:  jne    084fa456 <+0x142>
084fa497 +0x183:  mov    0xc(%ebp),%eax
084fa49a +0x186:  mov    %eax,(%esp)
084fa49d +0x189:  call   0822d6fc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2da6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2da6
084fa4a2 +0x18e:  mov    %eax,%edx
084fa4a4 +0x190:  mov    0x8(%ebp),%eax
084fa4a7 +0x193:  mov    %edx,0x18(%eax)
084fa4aa +0x196:  leave
084fa4ab +0x197:  ret
```

## 反编译 C

```c
// CInventory::setCopy @ 0x84fa314

/* CInventory::setCopy(CInventory const&) */

void __thiscall CInventory::setCopy(CInventory *this,CInventory *param_1)

{
  undefined4 uVar1;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  for (local_1c = 0; local_1c < 0x1a; local_1c = local_1c + 1) {
    Inven_Item::setCopy((Inven_Item *)(this + local_1c * 0x3d + 0x1c),
                        (Inven_Item *)(param_1 + local_1c * 0x3d + 0x1c));
  }
  for (local_18 = 0; local_18 < 0x138; local_18 = local_18 + 1) {
    Inven_Item::setCopy((Inven_Item *)(*(int *)(this + 0x650) + local_18 * 0x3d),
                        (Inven_Item *)(*(int *)(param_1 + 0x650) + local_18 * 0x3d));
  }
  for (local_14 = 0; local_14 < 0x69; local_14 = local_14 + 1) {
    Inven_Item::setCopy((Inven_Item *)(*(int *)(this + 0x654) + local_14 * 0x3d),
                        (Inven_Item *)(*(int *)(param_1 + 0x654) + local_14 * 0x3d));
  }
  user_creature::CCreatureMgr::SetUser((CCreatureMgr *)(this + 0x6e8),*(CUser **)this);
  for (local_10 = 0; local_10 < 0xf2; local_10 = local_10 + 1) {
    Inven_Item::setCopy((Inven_Item *)(*(int *)(this + 0x6e4) + local_10 * 0x3d),
                        (Inven_Item *)(*(int *)(param_1 + 0x6e4) + local_10 * 0x3d));
  }
  uVar1 = get_inventory_capacity(param_1);
  *(undefined4 *)(this + 0x18) = uVar1;
  return;
}
```
