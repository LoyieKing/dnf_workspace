# _CheckMatrix

`_ZN11pvp_assault18CStaticDisposition12_CheckMatrixEPSt6vectorI7MapAreaSaIS2_EERNS_7Point2dE`

`pvp_assault::CStaticDisposition::_CheckMatrix(std::vector<MapArea, std::allocator<MapArea> >*, pvp_assault::Point2d&)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CStaticDisposition` | `0x082e64f2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e64f2  _ZN11pvp_assault18CStaticDisposition12_CheckMatrixEPSt6vectorI7MapAreaSaIS2_EERNS_7Point2dE
#           pvp_assault::CStaticDisposition::_CheckMatrix(std::vector<MapArea, std::allocator<MapArea> >*, pvp_assault::Point2d&)
# range [0x082e64f2, 0x082e6587]
082e64f2 +0x00:  push   %ebp
082e64f3 +0x01:  mov    %esp,%ebp
082e64f5 +0x03:  push   %ebx
082e64f6 +0x04:  sub    $0x34,%esp
082e64f9 +0x07:  movl   $0x0,-0xc(%ebp)
082e6500 +0x0e:  jmp    082e653f <+0x4d>
082e6502 +0x10:  mov    -0xc(%ebp),%edx
082e6505 +0x13:  mov    %edx,%eax
082e6507 +0x15:  add    %eax,%eax
082e6509 +0x17:  add    %edx,%eax
082e650b +0x19:  shl    $0x2,%eax
082e650e +0x1c:  add    $0x10,%eax
082e6511 +0x1f:  add    0x8(%ebp),%eax
082e6514 +0x22:  lea    0x4(%eax),%edx
082e6517 +0x25:  mov    0x10(%ebp),%eax
082e651a +0x28:  mov    %eax,0x8(%esp)
082e651e +0x2c:  mov    0xc(%ebp),%eax
082e6521 +0x2f:  mov    %eax,0x4(%esp)
082e6525 +0x33:  mov    %edx,(%esp)
082e6528 +0x36:  call   082e5b4e <_ZN11pvp_assault12CExtraMatrix10CheckPointEPSt6vectorI7MapAreaSaIS2_EERNS_7Point2dE>  ; pvp_assault::CExtraMatrix::CheckPoint(std::vector<MapArea, std::allocator<MapArea> >*, pvp_assault::Point2d&)
082e652d +0x3b:  xor    $0x1,%eax
082e6530 +0x3e:  test   %al,%al
082e6532 +0x40:  je     082e653b <+0x49>
082e6534 +0x42:  mov    $0x0,%eax
082e6539 +0x47:  jmp    082e6582 <+0x90>
082e653b +0x49:  addl   $0x1,-0xc(%ebp)
082e653f +0x4d:  cmpl   $0x1,-0xc(%ebp)
082e6543 +0x51:  setle  %al
082e6546 +0x54:  test   %al,%al
082e6548 +0x56:  jne    082e6502 <+0x10>
082e654a +0x58:  mov    0x10(%ebp),%eax
082e654d +0x5b:  lea    0x4(%eax),%ebx
082e6550 +0x5e:  mov    0x10(%ebp),%ecx
082e6553 +0x61:  mov    0x8(%ebp),%eax
082e6556 +0x64:  mov    0x10(%eax),%edx
082e6559 +0x67:  mov    0x8(%ebp),%eax
082e655c +0x6a:  mov    0xc(%eax),%eax
082e655f +0x6d:  movl   $0x0,0x14(%esp)
082e6567 +0x75:  mov    %ebx,0x10(%esp)
082e656b +0x79:  mov    %ecx,0xc(%esp)
082e656f +0x7d:  mov    %edx,0x8(%esp)
082e6573 +0x81:  mov    %eax,0x4(%esp)
082e6577 +0x85:  mov    0xc(%ebp),%eax
082e657a +0x88:  mov    %eax,(%esp)
082e657d +0x8b:  call   082e5a0b <_ZN11pvp_assault25IsIncludeVirtualMoveAreasEPSt6vectorI7MapAreaSaIS1_EEiiRiS5_i>  ; pvp_assault::IsIncludeVirtualMoveAreas(std::vector<MapArea, std::allocator<MapArea> >*, int, int, int&, int&, int)
082e6582 +0x90:  add    $0x34,%esp
082e6585 +0x93:  pop    %ebx
082e6586 +0x94:  pop    %ebp
082e6587 +0x95:  ret
```

## 反编译 C

```c
// pvp_assault::CStaticDisposition::_CheckMatrix @ 0x82e64f2

/* pvp_assault::CStaticDisposition::_CheckMatrix(std::vector<MapArea, std::allocator<MapArea> >*,
   pvp_assault::Point2d&) */

undefined4 __thiscall
pvp_assault::CStaticDisposition::_CheckMatrix
          (CStaticDisposition *this,vector *param_1,Point2d *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int local_10;
  
  local_10 = 0;
  while( true ) {
    if (1 < local_10) {
      uVar2 = IsIncludeVirtualMoveAreas
                        (param_1,*(int *)(this + 0xc),*(int *)(this + 0x10),(int *)param_2,
                         (int *)(param_2 + 4),0);
      return uVar2;
    }
    cVar1 = CExtraMatrix::CheckPoint((CExtraMatrix *)(this + local_10 * 0xc + 0x14),param_1,param_2)
    ;
    if (cVar1 != '\x01') break;
    local_10 = local_10 + 1;
  }
  return 0;
}
```
