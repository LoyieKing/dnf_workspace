# _IsExistEquipItem

`_ZN6CCargo17_IsExistEquipItemEii`

`CCargo::_IsExistEquipItem(int, int)`

| 类 | 地址 |
|---|---|
| `CCargo` | `0x0850c7b2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850c7b2  _ZN6CCargo17_IsExistEquipItemEii
#           CCargo::_IsExistEquipItem(int, int)
# range [0x0850c7b2, 0x0850c835]
0850c7b2 +0x00:  push   %ebp
0850c7b3 +0x01:  mov    %esp,%ebp
0850c7b5 +0x03:  sub    $0x28,%esp
0850c7b8 +0x06:  movl   $0x0,-0xc(%ebp)
0850c7bf +0x0d:  jmp    0850c821 <+0x6f>
0850c7c1 +0x0f:  mov    0x8(%ebp),%eax
0850c7c4 +0x12:  mov    0x4(%eax),%edx
0850c7c7 +0x15:  mov    -0xc(%ebp),%eax
0850c7ca +0x18:  imul   $0x3d,%eax,%eax
0850c7cd +0x1b:  lea    (%edx,%eax,1),%eax
0850c7d0 +0x1e:  mov    %eax,(%esp)
0850c7d3 +0x21:  call   08150812 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x147>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x147
0850c7d8 +0x26:  xor    $0x1,%eax
0850c7db +0x29:  test   %al,%al
0850c7dd +0x2b:  jne    0850c816 <+0x64>
0850c7df +0x2d:  mov    0x8(%ebp),%eax
0850c7e2 +0x30:  mov    0x4(%eax),%edx
0850c7e5 +0x33:  mov    -0xc(%ebp),%eax
0850c7e8 +0x36:  imul   $0x3d,%eax,%eax
0850c7eb +0x39:  lea    (%edx,%eax,1),%eax
0850c7ee +0x3c:  mov    0x2(%eax),%edx
0850c7f1 +0x3f:  mov    0xc(%ebp),%eax
0850c7f4 +0x42:  cmp    %eax,%edx
0850c7f6 +0x44:  jne    0850c819 <+0x67>
0850c7f8 +0x46:  mov    0x8(%ebp),%eax
0850c7fb +0x49:  mov    0x4(%eax),%edx
0850c7fe +0x4c:  mov    -0xc(%ebp),%eax
0850c801 +0x4f:  imul   $0x3d,%eax,%eax
0850c804 +0x52:  lea    (%edx,%eax,1),%eax
0850c807 +0x55:  mov    0x7(%eax),%eax
0850c80a +0x58:  cmp    0x10(%ebp),%eax
0850c80d +0x5b:  jne    0850c81c <+0x6a>
0850c80f +0x5d:  mov    $0x1,%eax
0850c814 +0x62:  jmp    0850c834 <+0x82>
0850c816 +0x64:  nop
0850c817 +0x65:  jmp    0850c81d <+0x6b>
0850c819 +0x67:  nop
0850c81a +0x68:  jmp    0850c81d <+0x6b>
0850c81c +0x6a:  nop
0850c81d +0x6b:  addl   $0x1,-0xc(%ebp)
0850c821 +0x6f:  cmpl   $0x97,-0xc(%ebp)
0850c828 +0x76:  setle  %al
0850c82b +0x79:  test   %al,%al
0850c82d +0x7b:  jne    0850c7c1 <+0xf>
0850c82f +0x7d:  mov    $0x0,%eax
0850c834 +0x82:  leave
0850c835 +0x83:  ret
```

## 反编译 C

```c
// CCargo::_IsExistEquipItem @ 0x850c7b2

/* CCargo::_IsExistEquipItem(int, int) */

undefined4 __thiscall CCargo::_IsExistEquipItem(CCargo *this,int param_1,int param_2)

{
  char cVar1;
  int local_10;
  
  local_10 = 0;
  while( true ) {
    if (0x97 < local_10) {
      return 0;
    }
    cVar1 = Inven_Item::isEquipableItemType((Inven_Item *)(*(int *)(this + 4) + local_10 * 0x3d));
    if (((cVar1 == '\x01') && (*(int *)(*(int *)(this + 4) + local_10 * 0x3d + 2) == param_1)) &&
       (*(int *)(*(int *)(this + 4) + local_10 * 0x3d + 7) == param_2)) break;
    local_10 = local_10 + 1;
  }
  return 1;
}
```
