# isAnyExpiredAvatarItem

`_ZNK10CInventory22isAnyExpiredAvatarItemEv`

`CInventory::isAnyExpiredAvatarItem() const`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x0850937e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850937e  _ZNK10CInventory22isAnyExpiredAvatarItemEv
#           CInventory::isAnyExpiredAvatarItem() const
# range [0x0850937e, 0x08509465]
0850937e +0x00:  push   %ebp
0850937f +0x01:  mov    %esp,%ebp
08509381 +0x03:  sub    $0x18,%esp
08509384 +0x06:  call   0858c802 <_ZN6OS_API15GetDateTimeTickEv>  ; OS_API::GetDateTimeTick()
08509389 +0x0b:  mov    %eax,-0x14(%ebp)
0850938c +0x0e:  movl   $0x0,-0x10(%ebp)
08509393 +0x15:  jmp    085093e7 <+0x69>
08509395 +0x17:  mov    -0x10(%ebp),%eax
08509398 +0x1a:  mov    0x8(%ebp),%edx
0850939b +0x1d:  imul   $0x3d,%eax,%eax
0850939e +0x20:  lea    (%edx,%eax,1),%eax
085093a1 +0x23:  add    $0x10,%eax
085093a4 +0x26:  mov    0xe(%eax),%eax
085093a7 +0x29:  test   %eax,%eax
085093a9 +0x2b:  je     085093e2 <+0x64>
085093ab +0x2d:  mov    -0x10(%ebp),%eax
085093ae +0x30:  mov    0x8(%ebp),%edx
085093b1 +0x33:  imul   $0x3d,%eax,%eax
085093b4 +0x36:  lea    (%edx,%eax,1),%eax
085093b7 +0x39:  add    $0x10,%eax
085093ba +0x3c:  mov    0x13(%eax),%eax
085093bd +0x3f:  test   %eax,%eax
085093bf +0x41:  je     085093e3 <+0x65>
085093c1 +0x43:  mov    -0x10(%ebp),%eax
085093c4 +0x46:  mov    0x8(%ebp),%edx
085093c7 +0x49:  imul   $0x3d,%eax,%eax
085093ca +0x4c:  lea    (%edx,%eax,1),%eax
085093cd +0x4f:  add    $0x10,%eax
085093d0 +0x52:  mov    0x13(%eax),%eax
085093d3 +0x55:  cmp    -0x14(%ebp),%eax
085093d6 +0x58:  jge    085093e3 <+0x65>
085093d8 +0x5a:  mov    $0x1,%eax
085093dd +0x5f:  jmp    08509463 <+0xe5>
085093e2 +0x64:  nop
085093e3 +0x65:  addl   $0x1,-0x10(%ebp)
085093e7 +0x69:  cmpl   $0x9,-0x10(%ebp)
085093eb +0x6d:  setle  %al
085093ee +0x70:  test   %al,%al
085093f0 +0x72:  jne    08509395 <+0x17>
085093f2 +0x74:  movl   $0x0,-0xc(%ebp)
085093f9 +0x7b:  jmp    08509453 <+0xd5>
085093fb +0x7d:  mov    0x8(%ebp),%eax
085093fe +0x80:  mov    0x654(%eax),%edx
08509404 +0x86:  mov    -0xc(%ebp),%eax
08509407 +0x89:  imul   $0x3d,%eax,%eax
0850940a +0x8c:  lea    (%edx,%eax,1),%eax
0850940d +0x8f:  mov    0x2(%eax),%eax
08509410 +0x92:  test   %eax,%eax
08509412 +0x94:  je     0850944e <+0xd0>
08509414 +0x96:  mov    0x8(%ebp),%eax
08509417 +0x99:  mov    0x654(%eax),%edx
0850941d +0x9f:  mov    -0xc(%ebp),%eax
08509420 +0xa2:  imul   $0x3d,%eax,%eax
08509423 +0xa5:  lea    (%edx,%eax,1),%eax
08509426 +0xa8:  mov    0x7(%eax),%eax
08509429 +0xab:  test   %eax,%eax
0850942b +0xad:  je     0850944f <+0xd1>
0850942d +0xaf:  mov    0x8(%ebp),%eax
08509430 +0xb2:  mov    0x654(%eax),%edx
08509436 +0xb8:  mov    -0xc(%ebp),%eax
08509439 +0xbb:  imul   $0x3d,%eax,%eax
0850943c +0xbe:  lea    (%edx,%eax,1),%eax
0850943f +0xc1:  mov    0x7(%eax),%eax
08509442 +0xc4:  cmp    -0x14(%ebp),%eax
08509445 +0xc7:  jge    0850944f <+0xd1>
08509447 +0xc9:  mov    $0x1,%eax
0850944c +0xce:  jmp    08509463 <+0xe5>
0850944e +0xd0:  nop
0850944f +0xd1:  addl   $0x1,-0xc(%ebp)
08509453 +0xd5:  cmpl   $0x68,-0xc(%ebp)
08509457 +0xd9:  setle  %al
0850945a +0xdc:  test   %al,%al
0850945c +0xde:  jne    085093fb <+0x7d>
0850945e +0xe0:  mov    $0x0,%eax
08509463 +0xe5:  leave
08509464 +0xe6:  ret
08509465 +0xe7:  nop
```

## 反编译 C

```c
// CInventory::isAnyExpiredAvatarItem @ 0x850937e

/* CInventory::isAnyExpiredAvatarItem() const */

undefined4 __thiscall CInventory::isAnyExpiredAvatarItem(CInventory *this)

{
  int iVar1;
  int local_14;
  int local_10;
  
  iVar1 = OS_API::GetDateTimeTick();
  local_14 = 0;
  while( true ) {
    if (9 < local_14) {
      local_10 = 0;
      while( true ) {
        if (0x68 < local_10) {
          return 0;
        }
        if (((*(int *)(*(int *)(this + 0x654) + local_10 * 0x3d + 2) != 0) &&
            (*(int *)(*(int *)(this + 0x654) + local_10 * 0x3d + 7) != 0)) &&
           (*(int *)(*(int *)(this + 0x654) + local_10 * 0x3d + 7) < iVar1)) break;
        local_10 = local_10 + 1;
      }
      return 1;
    }
    if (((*(int *)(this + local_14 * 0x3d + 0x1e) != 0) &&
        (*(int *)(this + local_14 * 0x3d + 0x23) != 0)) &&
       (*(int *)(this + local_14 * 0x3d + 0x23) < iVar1)) break;
    local_14 = local_14 + 1;
  }
  return 1;
}
```
