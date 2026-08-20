# IsExistStackable

`_ZNK10CInventory16IsExistStackableEiN10Inven_Item9ITEM_TYPEE`

`CInventory::IsExistStackable(int, Inven_Item::ITEM_TYPE) const`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x0850a016` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850a016  _ZNK10CInventory16IsExistStackableEiN10Inven_Item9ITEM_TYPEE
#           CInventory::IsExistStackable(int, Inven_Item::ITEM_TYPE) const
# range [0x0850a016, 0x0850a081]
0850a016 +0x00:  push   %ebp
0850a017 +0x01:  mov    %esp,%ebp
0850a019 +0x03:  sub    $0x28,%esp
0850a01c +0x06:  lea    -0x14(%ebp),%eax
0850a01f +0x09:  mov    %eax,0xc(%esp)
0850a023 +0x0d:  lea    -0x10(%ebp),%eax
0850a026 +0x10:  mov    %eax,0x8(%esp)
0850a02a +0x14:  mov    0x10(%ebp),%eax
0850a02d +0x17:  mov    %eax,0x4(%esp)
0850a031 +0x1b:  mov    0x8(%ebp),%eax
0850a034 +0x1e:  mov    %eax,(%esp)
0850a037 +0x21:  call   08501886 <_ZNK10CInventory11StartEndPosEN10Inven_Item9ITEM_TYPEERiS2_>  ; CInventory::StartEndPos(Inven_Item::ITEM_TYPE, int&, int&) const
0850a03c +0x26:  mov    -0x10(%ebp),%eax
0850a03f +0x29:  mov    %eax,-0xc(%ebp)
0850a042 +0x2c:  jmp    0850a06d <+0x57>
0850a044 +0x2e:  mov    0x8(%ebp),%eax
0850a047 +0x31:  mov    0x650(%eax),%edx
0850a04d +0x37:  mov    -0xc(%ebp),%eax
0850a050 +0x3a:  imul   $0x3d,%eax,%eax
0850a053 +0x3d:  lea    (%edx,%eax,1),%eax
0850a056 +0x40:  mov    0x2(%eax),%edx
0850a059 +0x43:  mov    0xc(%ebp),%eax
0850a05c +0x46:  cmp    %eax,%edx
0850a05e +0x48:  je     0850a066 <+0x50>
0850a060 +0x4a:  addl   $0x1,-0xc(%ebp)
0850a064 +0x4e:  jmp    0850a06d <+0x57>
0850a066 +0x50:  mov    $0x1,%eax
0850a06b +0x55:  jmp    0850a07f <+0x69>
0850a06d +0x57:  mov    -0x14(%ebp),%eax
0850a070 +0x5a:  cmp    %eax,-0xc(%ebp)
0850a073 +0x5d:  setle  %al
0850a076 +0x60:  test   %al,%al
0850a078 +0x62:  jne    0850a044 <+0x2e>
0850a07a +0x64:  mov    $0x0,%eax
0850a07f +0x69:  leave
0850a080 +0x6a:  ret
0850a081 +0x6b:  nop
```

## 反编译 C

```c
// CInventory::IsExistStackable @ 0x850a016

/* CInventory::IsExistStackable(int, Inven_Item::ITEM_TYPE) const */

undefined4 __thiscall CInventory::IsExistStackable(CInventory *this,int param_1,undefined4 param_3)

{
  int local_18;
  int local_14;
  int local_10;
  
  StartEndPos(this,param_3,&local_14,&local_18);
  local_10 = local_14;
  while( true ) {
    if (local_18 < local_10) {
      return 0;
    }
    if (*(int *)(*(int *)(this + 0x650) + local_10 * 0x3d + 2) == param_1) break;
    local_10 = local_10 + 1;
  }
  return 1;
}
```
