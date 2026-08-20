# getExistEquipItem

`_ZN10CInventory17getExistEquipItemEiii`

`CInventory::getExistEquipItem(int, int, int)`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x08503418` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08503418  _ZN10CInventory17getExistEquipItemEiii
#           CInventory::getExistEquipItem(int, int, int)
# range [0x08503418, 0x085034ad]
08503418 +0x00:  push   %ebp
08503419 +0x01:  mov    %esp,%ebp
0850341b +0x03:  sub    $0x10,%esp
0850341e +0x06:  movl   $0x0,-0x8(%ebp)
08503425 +0x0d:  movl   $0x3,-0x4(%ebp)
0850342c +0x14:  jmp    08503499 <+0x81>
0850342e +0x16:  mov    -0x4(%ebp),%eax
08503431 +0x19:  cmp    0x14(%ebp),%eax
08503434 +0x1c:  je     0850348b <+0x73>
08503436 +0x1e:  mov    0x8(%ebp),%eax
08503439 +0x21:  mov    0x650(%eax),%edx
0850343f +0x27:  mov    -0x4(%ebp),%eax
08503442 +0x2a:  imul   $0x3d,%eax,%eax
08503445 +0x2d:  lea    (%edx,%eax,1),%eax
08503448 +0x30:  movzbl 0x1(%eax),%eax
0850344c +0x34:  cmp    $0x1,%al
0850344e +0x36:  jne    0850348e <+0x76>
08503450 +0x38:  mov    0x8(%ebp),%eax
08503453 +0x3b:  mov    0x650(%eax),%edx
08503459 +0x41:  mov    -0x4(%ebp),%eax
0850345c +0x44:  imul   $0x3d,%eax,%eax
0850345f +0x47:  lea    (%edx,%eax,1),%eax
08503462 +0x4a:  mov    0x2(%eax),%edx
08503465 +0x4d:  mov    0xc(%ebp),%eax
08503468 +0x50:  cmp    %eax,%edx
0850346a +0x52:  jne    08503491 <+0x79>
0850346c +0x54:  mov    0x8(%ebp),%eax
0850346f +0x57:  mov    0x650(%eax),%edx
08503475 +0x5d:  mov    -0x4(%ebp),%eax
08503478 +0x60:  imul   $0x3d,%eax,%eax
0850347b +0x63:  lea    (%edx,%eax,1),%eax
0850347e +0x66:  mov    0x7(%eax),%eax
08503481 +0x69:  cmp    0x10(%ebp),%eax
08503484 +0x6c:  jne    08503494 <+0x7c>
08503486 +0x6e:  mov    -0x4(%ebp),%eax
08503489 +0x71:  jmp    085034ac <+0x94>
0850348b +0x73:  nop
0850348c +0x74:  jmp    08503495 <+0x7d>
0850348e +0x76:  nop
0850348f +0x77:  jmp    08503495 <+0x7d>
08503491 +0x79:  nop
08503492 +0x7a:  jmp    08503495 <+0x7d>
08503494 +0x7c:  nop
08503495 +0x7d:  addl   $0x1,-0x4(%ebp)
08503499 +0x81:  cmpl   $0xc8,-0x4(%ebp)
085034a0 +0x88:  setle  %al
085034a3 +0x8b:  test   %al,%al
085034a5 +0x8d:  jne    0850342e <+0x16>
085034a7 +0x8f:  mov    $0xffffffff,%eax
085034ac +0x94:  leave
085034ad +0x95:  ret
```

## 反编译 C

```c
// CInventory::getExistEquipItem @ 0x8503418

/* CInventory::getExistEquipItem(int, int, int) */

int __thiscall CInventory::getExistEquipItem(CInventory *this,int param_1,int param_2,int param_3)

{
  int local_8;
  
  local_8 = 3;
  while( true ) {
    if (200 < local_8) {
      return -1;
    }
    if ((((local_8 != param_3) && (*(char *)(*(int *)(this + 0x650) + local_8 * 0x3d + 1) == '\x01')
         ) && (*(int *)(*(int *)(this + 0x650) + local_8 * 0x3d + 2) == param_1)) &&
       (*(int *)(*(int *)(this + 0x650) + local_8 * 0x3d + 7) == param_2)) break;
    local_8 = local_8 + 1;
  }
  return local_8;
}
```
