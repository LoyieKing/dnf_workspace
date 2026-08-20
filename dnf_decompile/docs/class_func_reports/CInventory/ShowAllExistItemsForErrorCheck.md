# ShowAllExistItemsForErrorCheck

`_ZNK10CInventory30ShowAllExistItemsForErrorCheckEv`

`CInventory::ShowAllExistItemsForErrorCheck() const`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x0850542a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850542a  _ZNK10CInventory30ShowAllExistItemsForErrorCheckEv
#           CInventory::ShowAllExistItemsForErrorCheck() const
# range [0x0850542a, 0x08505529]
0850542a +0x00:  push   %ebp
0850542b +0x01:  mov    %esp,%ebp
0850542d +0x03:  sub    $0x38,%esp
08505430 +0x06:  movl   $0x3,-0x10(%ebp)
08505437 +0x0d:  jmp    085054a2 <+0x78>
08505439 +0x0f:  mov    0x8(%ebp),%eax
0850543c +0x12:  mov    0x650(%eax),%edx
08505442 +0x18:  mov    -0x10(%ebp),%eax
08505445 +0x1b:  imul   $0x3d,%eax,%eax
08505448 +0x1e:  lea    (%edx,%eax,1),%eax
0850544b +0x21:  mov    0x2(%eax),%eax
0850544e +0x24:  test   %eax,%eax
08505450 +0x26:  je     0850549e <+0x74>
08505452 +0x28:  mov    0x8(%ebp),%eax
08505455 +0x2b:  mov    0x650(%eax),%edx
0850545b +0x31:  mov    -0x10(%ebp),%eax
0850545e +0x34:  imul   $0x3d,%eax,%eax
08505461 +0x37:  lea    (%edx,%eax,1),%eax
08505464 +0x3a:  mov    0x2(%eax),%eax
08505467 +0x3d:  mov    %eax,0x18(%esp)
0850546b +0x41:  mov    -0x10(%ebp),%eax
0850546e +0x44:  mov    %eax,0x14(%esp)
08505472 +0x48:  movl   $"Inventory(%d) : %d\n",0x10(%esp)
0850547a +0x50:  movl   $0x1af0,0xc(%esp)
08505482 +0x58:  movl   $&_ZZNK10CInventory30ShowAllExistItemsForErrorCheckEvE19__PRETTY_FUNCTION__,0x8(%esp)
0850548a +0x60:  movl   $"inventory.cpp",0x4(%esp)
08505492 +0x68:  movl   $0x1,(%esp)
08505499 +0x6f:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0850549e +0x74:  addl   $0x1,-0x10(%ebp)
085054a2 +0x78:  cmpl   $0x137,-0x10(%ebp)
085054a9 +0x7f:  setle  %al
085054ac +0x82:  test   %al,%al
085054ae +0x84:  jne    08505439 <+0xf>
085054b0 +0x86:  movl   $0x0,-0xc(%ebp)
085054b7 +0x8d:  jmp    0850551c <+0xf2>
085054b9 +0x8f:  mov    -0xc(%ebp),%eax
085054bc +0x92:  mov    0x8(%ebp),%edx
085054bf +0x95:  imul   $0x3d,%eax,%eax
085054c2 +0x98:  lea    (%edx,%eax,1),%eax
085054c5 +0x9b:  add    $0x10,%eax
085054c8 +0x9e:  mov    0xe(%eax),%eax
085054cb +0xa1:  test   %eax,%eax
085054cd +0xa3:  je     08505518 <+0xee>
085054cf +0xa5:  mov    -0xc(%ebp),%eax
085054d2 +0xa8:  mov    0x8(%ebp),%edx
085054d5 +0xab:  imul   $0x3d,%eax,%eax
085054d8 +0xae:  lea    (%edx,%eax,1),%eax
085054db +0xb1:  add    $0x10,%eax
085054de +0xb4:  mov    0xe(%eax),%eax
085054e1 +0xb7:  mov    %eax,0x18(%esp)
085054e5 +0xbb:  mov    -0xc(%ebp),%eax
085054e8 +0xbe:  mov    %eax,0x14(%esp)
085054ec +0xc2:  movl   $"Equip(%d) : %d\n",0x10(%esp)
085054f4 +0xca:  movl   $0x1af6,0xc(%esp)
085054fc +0xd2:  movl   $&_ZZNK10CInventory30ShowAllExistItemsForErrorCheckEvE19__PRETTY_FUNCTION__,0x8(%esp)
08505504 +0xda:  movl   $"inventory.cpp",0x4(%esp)
0850550c +0xe2:  movl   $0x1,(%esp)
08505513 +0xe9:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08505518 +0xee:  addl   $0x1,-0xc(%ebp)
0850551c +0xf2:  cmpl   $0x19,-0xc(%ebp)
08505520 +0xf6:  setle  %al
08505523 +0xf9:  test   %al,%al
08505525 +0xfb:  jne    085054b9 <+0x8f>
08505527 +0xfd:  leave
08505528 +0xfe:  ret
08505529 +0xff:  nop
```

## 反编译 C

```c
// CInventory::ShowAllExistItemsForErrorCheck @ 0x850542a

/* CInventory::ShowAllExistItemsForErrorCheck() const */

void __thiscall CInventory::ShowAllExistItemsForErrorCheck(CInventory *this)

{
  int local_14;
  int local_10;
  
  for (local_14 = 3; local_14 < 0x138; local_14 = local_14 + 1) {
    if (*(int *)(*(int *)(this + 0x650) + local_14 * 0x3d + 2) != 0) {
      LogManager::logFormat
                (1,"inventory.cpp","void CInventory::ShowAllExistItemsForErrorCheck() const",0x1af0,
                 "Inventory(%d) : %d\n",local_14,
                 *(undefined4 *)(*(int *)(this + 0x650) + local_14 * 0x3d + 2));
    }
  }
  for (local_10 = 0; local_10 < 0x1a; local_10 = local_10 + 1) {
    if (*(int *)(this + local_10 * 0x3d + 0x1e) != 0) {
      LogManager::logFormat
                (1,"inventory.cpp","void CInventory::ShowAllExistItemsForErrorCheck() const",0x1af6,
                 "Equip(%d) : %d\n",local_10,*(undefined4 *)(this + local_10 * 0x3d + 0x1e));
    }
  }
  return;
}
```
