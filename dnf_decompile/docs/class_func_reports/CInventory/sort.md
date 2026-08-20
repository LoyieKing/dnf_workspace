# sort

`_ZN10CInventory4sortE10INVEN_TYPE`

`CInventory::sort(INVEN_TYPE)`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x08504d80` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08504d80  _ZN10CInventory4sortE10INVEN_TYPE
#           CInventory::sort(INVEN_TYPE)
# range [0x08504d80, 0x08504f23]
08504d80 +0x000:  push   %ebp
08504d81 +0x001:  mov    %esp,%ebp
08504d83 +0x003:  sub    $0x38,%esp
08504d86 +0x006:  cmpl   $0x1,0xc(%ebp)
08504d8a +0x00a:  jne    08504e89 <+0x109>
08504d90 +0x010:  movl   $0x1,-0x10(%ebp)
08504d97 +0x017:  jmp    08504e08 <+0x88>
08504d99 +0x019:  movl   $0x0,-0x14(%ebp)
08504da0 +0x020:  movl   $0x0,-0x18(%ebp)
08504da7 +0x027:  mov    -0x10(%ebp),%eax
08504daa +0x02a:  lea    -0x18(%ebp),%edx
08504dad +0x02d:  mov    %edx,0xc(%esp)
08504db1 +0x031:  lea    -0x14(%ebp),%edx
08504db4 +0x034:  mov    %edx,0x8(%esp)
08504db8 +0x038:  mov    %eax,0x4(%esp)
08504dbc +0x03c:  mov    0x8(%ebp),%eax
08504dbf +0x03f:  mov    %eax,(%esp)
08504dc2 +0x042:  call   08501886 <_ZNK10CInventory11StartEndPosEN10Inven_Item9ITEM_TYPEERiS2_>  ; CInventory::StartEndPos(Inven_Item::ITEM_TYPE, int&, int&) const
08504dc7 +0x047:  mov    -0x18(%ebp),%edx
08504dca +0x04a:  mov    -0x14(%ebp),%eax
08504dcd +0x04d:  mov    %edx,%ecx
08504dcf +0x04f:  sub    %eax,%ecx
08504dd1 +0x051:  mov    %ecx,%eax
08504dd3 +0x053:  add    $0x1,%eax
08504dd6 +0x056:  mov    0x8(%ebp),%edx
08504dd9 +0x059:  mov    0x650(%edx),%ecx
08504ddf +0x05f:  mov    -0x14(%ebp),%edx
08504de2 +0x062:  imul   $0x3d,%edx,%edx
08504de5 +0x065:  lea    (%ecx,%edx,1),%edx
08504de8 +0x068:  movl   $&_Z12_CompareSlotPKvS0_,0xc(%esp)
08504df0 +0x070:  movl   $0x3d,0x8(%esp)
08504df8 +0x078:  mov    %eax,0x4(%esp)
08504dfc +0x07c:  mov    %edx,(%esp)
08504dff +0x07f:  call   0807e870 <_init+0x1168>
08504e04 +0x084:  addl   $0x1,-0x10(%ebp)
08504e08 +0x088:  cmpl   $0x4,-0x10(%ebp)
08504e0c +0x08c:  setle  %al
08504e0f +0x08f:  test   %al,%al
08504e11 +0x091:  jne    08504d99 <+0x19>
08504e13 +0x093:  movl   $0x0,-0x1c(%ebp)
08504e1a +0x09a:  movl   $0x0,-0x20(%ebp)
08504e21 +0x0a1:  lea    -0x20(%ebp),%eax
08504e24 +0x0a4:  mov    %eax,0xc(%esp)
08504e28 +0x0a8:  lea    -0x1c(%ebp),%eax
08504e2b +0x0ab:  mov    %eax,0x8(%esp)
08504e2f +0x0af:  movl   $0xa,0x4(%esp)
08504e37 +0x0b7:  mov    0x8(%ebp),%eax
08504e3a +0x0ba:  mov    %eax,(%esp)
08504e3d +0x0bd:  call   08501886 <_ZNK10CInventory11StartEndPosEN10Inven_Item9ITEM_TYPEERiS2_>  ; CInventory::StartEndPos(Inven_Item::ITEM_TYPE, int&, int&) const
08504e42 +0x0c2:  mov    -0x20(%ebp),%edx
08504e45 +0x0c5:  mov    -0x1c(%ebp),%eax
08504e48 +0x0c8:  mov    %edx,%ecx
08504e4a +0x0ca:  sub    %eax,%ecx
08504e4c +0x0cc:  mov    %ecx,%eax
08504e4e +0x0ce:  add    $0x1,%eax
08504e51 +0x0d1:  mov    0x8(%ebp),%edx
08504e54 +0x0d4:  mov    0x650(%edx),%ecx
08504e5a +0x0da:  mov    -0x1c(%ebp),%edx
08504e5d +0x0dd:  imul   $0x3d,%edx,%edx
08504e60 +0x0e0:  lea    (%ecx,%edx,1),%edx
08504e63 +0x0e3:  movl   $&_Z12_CompareSlotPKvS0_,0xc(%esp)
08504e6b +0x0eb:  movl   $0x3d,0x8(%esp)
08504e73 +0x0f3:  mov    %eax,0x4(%esp)
08504e77 +0x0f7:  mov    %edx,(%esp)
08504e7a +0x0fa:  call   0807e870 <_init+0x1168>
08504e7f +0x0ff:  mov    $0x0,%eax
08504e84 +0x104:  jmp    08504f22 <+0x1a2>
08504e89 +0x109:  cmpl   $0x3,0xc(%ebp)
08504e8d +0x10d:  jne    08504f1d <+0x19d>
08504e93 +0x113:  movl   $0x6,-0xc(%ebp)
08504e9a +0x11a:  jmp    08504f0b <+0x18b>
08504e9c +0x11c:  movl   $0x0,-0x24(%ebp)
08504ea3 +0x123:  movl   $0x0,-0x28(%ebp)
08504eaa +0x12a:  mov    -0xc(%ebp),%eax
08504ead +0x12d:  lea    -0x28(%ebp),%edx
08504eb0 +0x130:  mov    %edx,0xc(%esp)
08504eb4 +0x134:  lea    -0x24(%ebp),%edx
08504eb7 +0x137:  mov    %edx,0x8(%esp)
08504ebb +0x13b:  mov    %eax,0x4(%esp)
08504ebf +0x13f:  mov    0x8(%ebp),%eax
08504ec2 +0x142:  mov    %eax,(%esp)
08504ec5 +0x145:  call   08501886 <_ZNK10CInventory11StartEndPosEN10Inven_Item9ITEM_TYPEERiS2_>  ; CInventory::StartEndPos(Inven_Item::ITEM_TYPE, int&, int&) const
08504eca +0x14a:  mov    -0x28(%ebp),%edx
08504ecd +0x14d:  mov    -0x24(%ebp),%eax
08504ed0 +0x150:  mov    %edx,%ecx
08504ed2 +0x152:  sub    %eax,%ecx
08504ed4 +0x154:  mov    %ecx,%eax
08504ed6 +0x156:  add    $0x1,%eax
08504ed9 +0x159:  mov    0x8(%ebp),%edx
08504edc +0x15c:  mov    0x6e4(%edx),%ecx
08504ee2 +0x162:  mov    -0x24(%ebp),%edx
08504ee5 +0x165:  imul   $0x3d,%edx,%edx
08504ee8 +0x168:  lea    (%ecx,%edx,1),%edx
08504eeb +0x16b:  movl   $&_Z12_CompareSlotPKvS0_,0xc(%esp)
08504ef3 +0x173:  movl   $0x3d,0x8(%esp)
08504efb +0x17b:  mov    %eax,0x4(%esp)
08504eff +0x17f:  mov    %edx,(%esp)
08504f02 +0x182:  call   0807e870 <_init+0x1168>
08504f07 +0x187:  addl   $0x1,-0xc(%ebp)
08504f0b +0x18b:  cmpl   $0x7,-0xc(%ebp)
08504f0f +0x18f:  setle  %al
08504f12 +0x192:  test   %al,%al
08504f14 +0x194:  jne    08504e9c <+0x11c>
08504f16 +0x196:  mov    $0x0,%eax
08504f1b +0x19b:  jmp    08504f22 <+0x1a2>
08504f1d +0x19d:  mov    $0x1,%eax
08504f22 +0x1a2:  leave
08504f23 +0x1a3:  ret
```

## 反编译 C

```c
// CInventory::sort @ 0x8504d80

/* CInventory::sort(INVEN_TYPE) */

undefined4 __thiscall CInventory::sort(CInventory *this,int param_2)

{
  undefined4 uVar1;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  if (param_2 == 1) {
    for (local_14 = 1; local_14 < 5; local_14 = local_14 + 1) {
      local_18 = 0;
      local_1c = 0;
      StartEndPos(this,local_14,&local_18,&local_1c);
      qsort((void *)(*(int *)(this + 0x650) + local_18 * 0x3d),(local_1c - local_18) + 1,0x3d,
            _CompareSlot);
    }
    local_20 = 0;
    local_24 = 0;
    StartEndPos(this,10,&local_20,&local_24);
    qsort((void *)(*(int *)(this + 0x650) + local_20 * 0x3d),(local_24 - local_20) + 1,0x3d,
          _CompareSlot);
    uVar1 = 0;
  }
  else if (param_2 == 3) {
    for (local_10 = 6; local_10 < 8; local_10 = local_10 + 1) {
      local_28 = 0;
      local_2c = 0;
      StartEndPos(this,local_10,&local_28,&local_2c);
      qsort((void *)(*(int *)(this + 0x6e4) + local_28 * 0x3d),(local_2c - local_28) + 1,0x3d,
            _CompareSlot);
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
```
