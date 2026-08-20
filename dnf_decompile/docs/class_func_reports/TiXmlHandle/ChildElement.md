# ChildElement

`_ZNK11TiXmlHandle12ChildElementEi`

`TiXmlHandle::ChildElement(int) const`

| 类 | 地址 |
|---|---|
| `TiXmlHandle` | `0x087e1990` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e1990  _ZNK11TiXmlHandle12ChildElementEi
#           TiXmlHandle::ChildElement(int) const
# range [0x087e1990, 0x087e1a4a]
087e1990 +0x00:  push   %ebp
087e1991 +0x01:  mov    %esp,%ebp
087e1993 +0x03:  push   %edi
087e1994 +0x04:  push   %esi
087e1995 +0x05:  push   %ebx
087e1996 +0x06:  sub    $0x2c,%esp
087e1999 +0x09:  mov    0xc(%ebp),%eax
087e199c +0x0c:  mov    0x8(%ebp),%edi
087e199f +0x0f:  mov    0x10(%ebp),%esi
087e19a2 +0x12:  mov    (%eax),%eax
087e19a4 +0x14:  test   %eax,%eax
087e19a6 +0x16:  je     087e1a38 <+0xa8>
087e19ac +0x1c:  mov    0x18(%eax),%ebx
087e19af +0x1f:  test   %ebx,%ebx
087e19b1 +0x21:  jne    087e19bf <+0x2f>
087e19b3 +0x23:  jmp    087e1a38 <+0xa8>
087e19b8 +0x28:  mov    0x28(%ebx),%ebx
087e19bb +0x2b:  test   %ebx,%ebx
087e19bd +0x2d:  je     087e1a38 <+0xa8>
087e19bf +0x2f:  mov    (%ebx),%eax
087e19c1 +0x31:  mov    %ebx,(%esp)
087e19c4 +0x34:  call   *0x14(%eax)
087e19c7 +0x37:  test   %eax,%eax
087e19c9 +0x39:  je     087e19b8 <+0x28>
087e19cb +0x3b:  mov    (%ebx),%eax
087e19cd +0x3d:  mov    %ebx,(%esp)
087e19d0 +0x40:  call   *0x14(%eax)
087e19d3 +0x43:  test   %eax,%eax
087e19d5 +0x45:  je     087e1a38 <+0xa8>
087e19d7 +0x47:  test   %esi,%esi
087e19d9 +0x49:  jle    087e1a20 <+0x90>
087e19db +0x4b:  movl   $0x0,-0x1c(%ebp)
087e19e2 +0x52:  lea    0x0(%esi),%esi
087e19e8 +0x58:  mov    0x28(%eax),%ebx
087e19eb +0x5b:  test   %ebx,%ebx
087e19ed +0x5d:  jne    087e19ff <+0x6f>
087e19ef +0x5f:  jmp    087e1a38 <+0xa8>
087e19f1 +0x61:  lea    0x0(%esi,%eiz,1),%esi
087e19f8 +0x68:  mov    0x28(%ebx),%ebx
087e19fb +0x6b:  test   %ebx,%ebx
087e19fd +0x6d:  je     087e1a38 <+0xa8>
087e19ff +0x6f:  mov    (%ebx),%eax
087e1a01 +0x71:  mov    %ebx,(%esp)
087e1a04 +0x74:  call   *0x14(%eax)
087e1a07 +0x77:  test   %eax,%eax
087e1a09 +0x79:  je     087e19f8 <+0x68>
087e1a0b +0x7b:  mov    (%ebx),%eax
087e1a0d +0x7d:  mov    %ebx,(%esp)
087e1a10 +0x80:  call   *0x14(%eax)
087e1a13 +0x83:  addl   $0x1,-0x1c(%ebp)
087e1a17 +0x87:  test   %eax,%eax
087e1a19 +0x89:  je     087e1a38 <+0xa8>
087e1a1b +0x8b:  cmp    -0x1c(%ebp),%esi
087e1a1e +0x8e:  jg     087e19e8 <+0x58>
087e1a20 +0x90:  test   %eax,%eax
087e1a22 +0x92:  je     087e1a38 <+0xa8>
087e1a24 +0x94:  mov    %eax,(%edi)
087e1a26 +0x96:  add    $0x2c,%esp
087e1a29 +0x99:  mov    %edi,%eax
087e1a2b +0x9b:  pop    %ebx
087e1a2c +0x9c:  pop    %esi
087e1a2d +0x9d:  pop    %edi
087e1a2e +0x9e:  pop    %ebp
087e1a2f +0x9f:  ret    $0x4
087e1a32 +0xa2:  lea    0x0(%esi),%esi
087e1a38 +0xa8:  movl   $0x0,(%edi)
087e1a3e +0xae:  mov    %edi,%eax
087e1a40 +0xb0:  add    $0x2c,%esp
087e1a43 +0xb3:  pop    %ebx
087e1a44 +0xb4:  pop    %esi
087e1a45 +0xb5:  pop    %edi
087e1a46 +0xb6:  pop    %ebp
087e1a47 +0xb7:  ret    $0x4
087e1a4a +0xba:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// TiXmlHandle::ChildElement @ 0x87e1990

/* TiXmlHandle::ChildElement(int) const */

int TiXmlHandle::ChildElement(int param_1)

{
  int *piVar1;
  int iVar2;
  int *in_stack_00000008;
  int in_stack_0000000c;
  int local_20;
  
  if (*in_stack_00000008 != 0) {
    for (piVar1 = *(int **)(*in_stack_00000008 + 0x18); piVar1 != (int *)0x0;
        piVar1 = (int *)piVar1[10]) {
      iVar2 = (**(code **)(*piVar1 + 0x14))(piVar1);
      if (iVar2 != 0) {
        iVar2 = (**(code **)(*piVar1 + 0x14))(piVar1);
        if (iVar2 != 0) {
          if (in_stack_0000000c < 1) goto LAB_087e1a20;
          local_20 = 0;
          goto LAB_087e19e8;
        }
        break;
      }
    }
  }
  goto LAB_087e1a38;
  while (local_20 < in_stack_0000000c) {
LAB_087e19e8:
    piVar1 = *(int **)(iVar2 + 0x28);
    while( true ) {
      if (piVar1 == (int *)0x0) goto LAB_087e1a38;
      iVar2 = (**(code **)(*piVar1 + 0x14))(piVar1);
      if (iVar2 != 0) break;
      piVar1 = (int *)piVar1[10];
    }
    iVar2 = (**(code **)(*piVar1 + 0x14))(piVar1);
    local_20 = local_20 + 1;
    if (iVar2 == 0) goto LAB_087e1a38;
  }
LAB_087e1a20:
  if (iVar2 != 0) {
    *(int *)param_1 = iVar2;
    return param_1;
  }
LAB_087e1a38:
  *(undefined4 *)param_1 = 0;
  return param_1;
}
```
