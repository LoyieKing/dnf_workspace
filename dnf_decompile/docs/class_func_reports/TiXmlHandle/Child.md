# Child

`_ZNK11TiXmlHandle5ChildEi`

`TiXmlHandle::Child(int) const`

| 类 | 地址 |
|---|---|
| `TiXmlHandle` | `0x087e0170` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e0170  _ZNK11TiXmlHandle5ChildEi
#           TiXmlHandle::Child(int) const
# range [0x087e0170, 0x087e01ca]
087e0170 +0x00:  push   %ebp
087e0171 +0x01:  mov    %esp,%ebp
087e0173 +0x03:  mov    0xc(%ebp),%edx
087e0176 +0x06:  push   %ebx
087e0177 +0x07:  mov    0x8(%ebp),%eax
087e017a +0x0a:  mov    0x10(%ebp),%ebx
087e017d +0x0d:  mov    (%edx),%edx
087e017f +0x0f:  test   %edx,%edx
087e0181 +0x11:  je     087e01b8 <+0x48>
087e0183 +0x13:  test   %ebx,%ebx
087e0185 +0x15:  mov    0x18(%edx),%edx
087e0188 +0x18:  jle    087e01a6 <+0x36>
087e018a +0x1a:  test   %edx,%edx
087e018c +0x1c:  je     087e01b8 <+0x48>
087e018e +0x1e:  xor    %ecx,%ecx
087e0190 +0x20:  jmp    087e019c <+0x2c>
087e0192 +0x22:  lea    0x0(%esi),%esi
087e0198 +0x28:  test   %edx,%edx
087e019a +0x2a:  je     087e01b8 <+0x48>
087e019c +0x2c:  add    $0x1,%ecx
087e019f +0x2f:  mov    0x28(%edx),%edx
087e01a2 +0x32:  cmp    %ecx,%ebx
087e01a4 +0x34:  jg     087e0198 <+0x28>
087e01a6 +0x36:  test   %edx,%edx
087e01a8 +0x38:  je     087e01b8 <+0x48>
087e01aa +0x3a:  mov    %edx,(%eax)
087e01ac +0x3c:  pop    %ebx
087e01ad +0x3d:  pop    %ebp
087e01ae +0x3e:  ret    $0x4
087e01b1 +0x41:  lea    0x0(%esi,%eiz,1),%esi
087e01b8 +0x48:  movl   $0x0,(%eax)
087e01be +0x4e:  pop    %ebx
087e01bf +0x4f:  pop    %ebp
087e01c0 +0x50:  ret    $0x4
087e01c3 +0x53:  nop
087e01c4 +0x54:  lea    0x0(%esi),%esi
087e01ca +0x5a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// TiXmlHandle::Child @ 0x87e0170

/* TiXmlHandle::Child(int) const */

void TiXmlHandle::Child(int param_1)

{
  int iVar1;
  int iVar2;
  int *in_stack_00000008;
  int in_stack_0000000c;
  
  if (*in_stack_00000008 != 0) {
    iVar2 = *(int *)(*in_stack_00000008 + 0x18);
    if (in_stack_0000000c < 1) {
LAB_087e01a6:
      if (iVar2 != 0) {
        *(int *)param_1 = iVar2;
        return;
      }
    }
    else if (iVar2 != 0) {
      iVar1 = 0;
      do {
        iVar1 = iVar1 + 1;
        iVar2 = *(int *)(iVar2 + 0x28);
        if (in_stack_0000000c <= iVar1) goto LAB_087e01a6;
      } while (iVar2 != 0);
    }
  }
  *(undefined4 *)param_1 = 0;
  return;
}
```
