# getSortedKeyArray

`_ZN10CInventory17getSortedKeyArrayEPmi`

`CInventory::getSortedKeyArray(unsigned long*, int)`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x084fa68a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084fa68a  _ZN10CInventory17getSortedKeyArrayEPmi
#           CInventory::getSortedKeyArray(unsigned long*, int)
# range [0x084fa68a, 0x084fa91b]
084fa68a +0x000:  push   %ebp
084fa68b +0x001:  mov    %esp,%ebp
084fa68d +0x003:  push   %ebx
084fa68e +0x004:  sub    $0x34,%esp
084fa691 +0x007:  movl   $0x0,-0x20(%ebp)
084fa698 +0x00e:  movl   $0x0,-0x20(%ebp)
084fa69f +0x015:  jmp    084fa6b4 <+0x2a>
084fa6a1 +0x017:  mov    -0x20(%ebp),%eax
084fa6a4 +0x01a:  shl    $0x2,%eax
084fa6a7 +0x01d:  add    0xc(%ebp),%eax
084fa6aa +0x020:  movl   $0x0,(%eax)
084fa6b0 +0x026:  addl   $0x1,-0x20(%ebp)
084fa6b4 +0x02a:  mov    -0x20(%ebp),%eax
084fa6b7 +0x02d:  cmp    0x10(%ebp),%eax
084fa6ba +0x030:  setl   %al
084fa6bd +0x033:  test   %al,%al
084fa6bf +0x035:  jne    084fa6a1 <+0x17>
084fa6c1 +0x037:  movl   $0x0,-0x1c(%ebp)
084fa6c8 +0x03e:  movl   $0x0,-0x20(%ebp)
084fa6cf +0x045:  jmp    084fa73f <+0xb5>
084fa6d1 +0x047:  mov    -0x20(%ebp),%eax
084fa6d4 +0x04a:  imul   $0x3d,%eax,%eax
084fa6d7 +0x04d:  add    $0x10,%eax
084fa6da +0x050:  add    0x8(%ebp),%eax
084fa6dd +0x053:  add    $0xc,%eax
084fa6e0 +0x056:  mov    %eax,-0x18(%ebp)
084fa6e3 +0x059:  mov    -0x18(%ebp),%eax
084fa6e6 +0x05c:  mov    0x2(%eax),%eax
084fa6e9 +0x05f:  test   %eax,%eax
084fa6eb +0x061:  je     084fa73b <+0xb1>
084fa6ed +0x063:  mov    -0x1c(%ebp),%eax
084fa6f0 +0x066:  shl    $0x2,%eax
084fa6f3 +0x069:  mov    %eax,%ebx
084fa6f5 +0x06b:  add    0xc(%ebp),%ebx
084fa6f8 +0x06e:  mov    -0x18(%ebp),%eax
084fa6fb +0x071:  mov    %eax,(%esp)
084fa6fe +0x074:  call   0850d14e <_GLOBAL__I_g_emptySlot+0x83>  ; global constructors keyed to g_emptySlot+0x83
084fa703 +0x079:  mov    %eax,(%ebx)
084fa705 +0x07b:  addl   $0x1,-0x1c(%ebp)
084fa709 +0x07f:  mov    0x10(%ebp),%eax
084fa70c +0x082:  cmp    -0x1c(%ebp),%eax
084fa70f +0x085:  jg     084fa73b <+0xb1>
084fa711 +0x087:  mov    -0x1c(%ebp),%eax
084fa714 +0x08a:  movl   $&_Z25my_compare_unsigned_shortPKvS0_,0xc(%esp)
084fa71c +0x092:  movl   $0x4,0x8(%esp)
084fa724 +0x09a:  mov    %eax,0x4(%esp)
084fa728 +0x09e:  mov    0xc(%ebp),%eax
084fa72b +0x0a1:  mov    %eax,(%esp)
084fa72e +0x0a4:  call   0807e870 <_init+0x1168>
084fa733 +0x0a9:  mov    -0x1c(%ebp),%eax
084fa736 +0x0ac:  jmp    084fa916 <+0x28c>
084fa73b +0x0b1:  addl   $0x1,-0x20(%ebp)
084fa73f +0x0b5:  cmpl   $0x19,-0x20(%ebp)
084fa743 +0x0b9:  setle  %al
084fa746 +0x0bc:  test   %al,%al
084fa748 +0x0be:  jne    084fa6d1 <+0x47>
084fa74a +0x0c0:  movl   $0x0,-0x20(%ebp)
084fa751 +0x0c7:  movl   $0x0,-0x20(%ebp)
084fa758 +0x0ce:  jmp    084fa7cb <+0x141>
084fa75a +0x0d0:  mov    0x8(%ebp),%eax
084fa75d +0x0d3:  mov    0x650(%eax),%edx
084fa763 +0x0d9:  mov    -0x20(%ebp),%eax
084fa766 +0x0dc:  imul   $0x3d,%eax,%eax
084fa769 +0x0df:  lea    (%edx,%eax,1),%eax
084fa76c +0x0e2:  mov    %eax,-0x14(%ebp)
084fa76f +0x0e5:  mov    -0x14(%ebp),%eax
084fa772 +0x0e8:  mov    0x2(%eax),%eax
084fa775 +0x0eb:  test   %eax,%eax
084fa777 +0x0ed:  je     084fa7c7 <+0x13d>
084fa779 +0x0ef:  mov    -0x1c(%ebp),%eax
084fa77c +0x0f2:  shl    $0x2,%eax
084fa77f +0x0f5:  mov    %eax,%ebx
084fa781 +0x0f7:  add    0xc(%ebp),%ebx
084fa784 +0x0fa:  mov    -0x14(%ebp),%eax
084fa787 +0x0fd:  mov    %eax,(%esp)
084fa78a +0x100:  call   0850d14e <_GLOBAL__I_g_emptySlot+0x83>  ; global constructors keyed to g_emptySlot+0x83
084fa78f +0x105:  mov    %eax,(%ebx)
084fa791 +0x107:  addl   $0x1,-0x1c(%ebp)
084fa795 +0x10b:  mov    0x10(%ebp),%eax
084fa798 +0x10e:  cmp    -0x1c(%ebp),%eax
084fa79b +0x111:  jg     084fa7c7 <+0x13d>
084fa79d +0x113:  mov    -0x1c(%ebp),%eax
084fa7a0 +0x116:  movl   $&_Z25my_compare_unsigned_shortPKvS0_,0xc(%esp)
084fa7a8 +0x11e:  movl   $0x4,0x8(%esp)
084fa7b0 +0x126:  mov    %eax,0x4(%esp)
084fa7b4 +0x12a:  mov    0xc(%ebp),%eax
084fa7b7 +0x12d:  mov    %eax,(%esp)
084fa7ba +0x130:  call   0807e870 <_init+0x1168>
084fa7bf +0x135:  mov    -0x1c(%ebp),%eax
084fa7c2 +0x138:  jmp    084fa916 <+0x28c>
084fa7c7 +0x13d:  addl   $0x1,-0x20(%ebp)
084fa7cb +0x141:  cmpl   $0x137,-0x20(%ebp)
084fa7d2 +0x148:  setle  %al
084fa7d5 +0x14b:  test   %al,%al
084fa7d7 +0x14d:  jne    084fa75a <+0xd0>
084fa7d9 +0x14f:  movl   $0x0,-0x20(%ebp)
084fa7e0 +0x156:  movl   $0x0,-0x20(%ebp)
084fa7e7 +0x15d:  jmp    084fa85a <+0x1d0>
084fa7e9 +0x15f:  mov    0x8(%ebp),%eax
084fa7ec +0x162:  mov    0x654(%eax),%edx
084fa7f2 +0x168:  mov    -0x20(%ebp),%eax
084fa7f5 +0x16b:  imul   $0x3d,%eax,%eax
084fa7f8 +0x16e:  lea    (%edx,%eax,1),%eax
084fa7fb +0x171:  mov    %eax,-0x10(%ebp)
084fa7fe +0x174:  mov    -0x10(%ebp),%eax
084fa801 +0x177:  mov    0x2(%eax),%eax
084fa804 +0x17a:  test   %eax,%eax
084fa806 +0x17c:  je     084fa856 <+0x1cc>
084fa808 +0x17e:  mov    -0x1c(%ebp),%eax
084fa80b +0x181:  shl    $0x2,%eax
084fa80e +0x184:  mov    %eax,%ebx
084fa810 +0x186:  add    0xc(%ebp),%ebx
084fa813 +0x189:  mov    -0x10(%ebp),%eax
084fa816 +0x18c:  mov    %eax,(%esp)
084fa819 +0x18f:  call   0850d14e <_GLOBAL__I_g_emptySlot+0x83>  ; global constructors keyed to g_emptySlot+0x83
084fa81e +0x194:  mov    %eax,(%ebx)
084fa820 +0x196:  addl   $0x1,-0x1c(%ebp)
084fa824 +0x19a:  mov    0x10(%ebp),%eax
084fa827 +0x19d:  cmp    -0x1c(%ebp),%eax
084fa82a +0x1a0:  jg     084fa856 <+0x1cc>
084fa82c +0x1a2:  mov    -0x1c(%ebp),%eax
084fa82f +0x1a5:  movl   $&_Z25my_compare_unsigned_shortPKvS0_,0xc(%esp)
084fa837 +0x1ad:  movl   $0x4,0x8(%esp)
084fa83f +0x1b5:  mov    %eax,0x4(%esp)
084fa843 +0x1b9:  mov    0xc(%ebp),%eax
084fa846 +0x1bc:  mov    %eax,(%esp)
084fa849 +0x1bf:  call   0807e870 <_init+0x1168>
084fa84e +0x1c4:  mov    -0x1c(%ebp),%eax
084fa851 +0x1c7:  jmp    084fa916 <+0x28c>
084fa856 +0x1cc:  addl   $0x1,-0x20(%ebp)
084fa85a +0x1d0:  cmpl   $0x68,-0x20(%ebp)
084fa85e +0x1d4:  setle  %al
084fa861 +0x1d7:  test   %al,%al
084fa863 +0x1d9:  jne    084fa7e9 <+0x15f>
084fa865 +0x1db:  movl   $0x0,-0x20(%ebp)
084fa86c +0x1e2:  movl   $0x0,-0x20(%ebp)
084fa873 +0x1e9:  jmp    084fa8e3 <+0x259>
084fa875 +0x1eb:  mov    0x8(%ebp),%eax
084fa878 +0x1ee:  mov    0x6e4(%eax),%edx
084fa87e +0x1f4:  mov    -0x20(%ebp),%eax
084fa881 +0x1f7:  imul   $0x3d,%eax,%eax
084fa884 +0x1fa:  lea    (%edx,%eax,1),%eax
084fa887 +0x1fd:  mov    %eax,-0xc(%ebp)
084fa88a +0x200:  mov    -0xc(%ebp),%eax
084fa88d +0x203:  mov    0x2(%eax),%eax
084fa890 +0x206:  test   %eax,%eax
084fa892 +0x208:  je     084fa8df <+0x255>
084fa894 +0x20a:  mov    -0x1c(%ebp),%eax
084fa897 +0x20d:  shl    $0x2,%eax
084fa89a +0x210:  mov    %eax,%ebx
084fa89c +0x212:  add    0xc(%ebp),%ebx
084fa89f +0x215:  mov    -0xc(%ebp),%eax
084fa8a2 +0x218:  mov    %eax,(%esp)
084fa8a5 +0x21b:  call   0850d14e <_GLOBAL__I_g_emptySlot+0x83>  ; global constructors keyed to g_emptySlot+0x83
084fa8aa +0x220:  mov    %eax,(%ebx)
084fa8ac +0x222:  addl   $0x1,-0x1c(%ebp)
084fa8b0 +0x226:  mov    0x10(%ebp),%eax
084fa8b3 +0x229:  cmp    -0x1c(%ebp),%eax
084fa8b6 +0x22c:  jg     084fa8df <+0x255>
084fa8b8 +0x22e:  mov    -0x1c(%ebp),%eax
084fa8bb +0x231:  movl   $&_Z25my_compare_unsigned_shortPKvS0_,0xc(%esp)
084fa8c3 +0x239:  movl   $0x4,0x8(%esp)
084fa8cb +0x241:  mov    %eax,0x4(%esp)
084fa8cf +0x245:  mov    0xc(%ebp),%eax
084fa8d2 +0x248:  mov    %eax,(%esp)
084fa8d5 +0x24b:  call   0807e870 <_init+0x1168>
084fa8da +0x250:  mov    -0x1c(%ebp),%eax
084fa8dd +0x253:  jmp    084fa916 <+0x28c>
084fa8df +0x255:  addl   $0x1,-0x20(%ebp)
084fa8e3 +0x259:  cmpl   $0xf1,-0x20(%ebp)
084fa8ea +0x260:  setle  %al
084fa8ed +0x263:  test   %al,%al
084fa8ef +0x265:  jne    084fa875 <+0x1eb>
084fa8f1 +0x267:  mov    -0x1c(%ebp),%eax
084fa8f4 +0x26a:  movl   $&_Z25my_compare_unsigned_shortPKvS0_,0xc(%esp)
084fa8fc +0x272:  movl   $0x4,0x8(%esp)
084fa904 +0x27a:  mov    %eax,0x4(%esp)
084fa908 +0x27e:  mov    0xc(%ebp),%eax
084fa90b +0x281:  mov    %eax,(%esp)
084fa90e +0x284:  call   0807e870 <_init+0x1168>
084fa913 +0x289:  mov    -0x1c(%ebp),%eax
084fa916 +0x28c:  add    $0x34,%esp
084fa919 +0x28f:  pop    %ebx
084fa91a +0x290:  pop    %ebp
084fa91b +0x291:  ret
```

## 反编译 C

```c
// CInventory::getSortedKeyArray @ 0x84fa68a

/* CInventory::getSortedKeyArray(unsigned long*, int) */

size_t __thiscall CInventory::getSortedKeyArray(CInventory *this,ulong *param_1,int param_2)

{
  Inven_Item *pIVar1;
  ulong uVar2;
  int local_24;
  size_t local_20;
  
  for (local_24 = 0; local_24 < param_2; local_24 = local_24 + 1) {
    param_1[local_24] = 0;
  }
  local_20 = 0;
  for (local_24 = 0; local_24 < 0x1a; local_24 = local_24 + 1) {
    if (*(int *)(this + local_24 * 0x3d + 0x1e) != 0) {
      uVar2 = Inven_Item::getKey((Inven_Item *)(this + local_24 * 0x3d + 0x1c));
      param_1[local_20] = uVar2;
      local_20 = local_20 + 1;
      if (param_2 <= (int)local_20) {
        qsort(param_1,local_20,4,my_compare_unsigned_short);
        return local_20;
      }
    }
  }
  for (local_24 = 0; local_24 < 0x138; local_24 = local_24 + 1) {
    pIVar1 = (Inven_Item *)(*(int *)(this + 0x650) + local_24 * 0x3d);
    if (*(int *)(pIVar1 + 2) != 0) {
      uVar2 = Inven_Item::getKey(pIVar1);
      param_1[local_20] = uVar2;
      local_20 = local_20 + 1;
      if (param_2 <= (int)local_20) {
        qsort(param_1,local_20,4,my_compare_unsigned_short);
        return local_20;
      }
    }
  }
  for (local_24 = 0; local_24 < 0x69; local_24 = local_24 + 1) {
    pIVar1 = (Inven_Item *)(*(int *)(this + 0x654) + local_24 * 0x3d);
    if (*(int *)(pIVar1 + 2) != 0) {
      uVar2 = Inven_Item::getKey(pIVar1);
      param_1[local_20] = uVar2;
      local_20 = local_20 + 1;
      if (param_2 <= (int)local_20) {
        qsort(param_1,local_20,4,my_compare_unsigned_short);
        return local_20;
      }
    }
  }
  local_24 = 0;
  do {
    if (0xf1 < local_24) {
      qsort(param_1,local_20,4,my_compare_unsigned_short);
      return local_20;
    }
    pIVar1 = (Inven_Item *)(*(int *)(this + 0x6e4) + local_24 * 0x3d);
    if (*(int *)(pIVar1 + 2) != 0) {
      uVar2 = Inven_Item::getKey(pIVar1);
      param_1[local_20] = uVar2;
      local_20 = local_20 + 1;
      if (param_2 <= (int)local_20) {
        qsort(param_1,local_20,4,my_compare_unsigned_short);
        return local_20;
      }
    }
    local_24 = local_24 + 1;
  } while( true );
}
```
