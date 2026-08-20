# pbackfail

`_ZNSt12strstreambuf9pbackfailEi`

`std::strstreambuf::pbackfail(int)`

| 类 | 地址 |
|---|---|
| `std::strstreambuf` | `0x086dd4c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086dd4c0  _ZNSt12strstreambuf9pbackfailEi
#           std::strstreambuf::pbackfail(int)
# range [0x086dd4c0, 0x086dd53f]
086dd4c0 +0x00:  push   %ebp
086dd4c1 +0x01:  mov    %esp,%ebp
086dd4c3 +0x03:  sub    $0x8,%esp
086dd4c6 +0x06:  mov    0x8(%ebp),%edx
086dd4c9 +0x09:  mov    %ebx,(%esp)
086dd4cc +0x0c:  mov    0xc(%ebp),%eax
086dd4cf +0x0f:  mov    %esi,0x4(%esp)
086dd4d3 +0x13:  mov    0x8(%edx),%ecx
086dd4d6 +0x16:  cmp    0x4(%edx),%ecx
086dd4d9 +0x19:  je     086dd520 <+0x60>
086dd4db +0x1b:  cmp    $0xffffffff,%eax
086dd4de +0x1e:  je     086dd500 <+0x40>
086dd4e0 +0x20:  movzbl -0x1(%ecx),%ebx
086dd4e4 +0x24:  lea    -0x1(%ecx),%esi
086dd4e7 +0x27:  cmp    %ebx,%eax
086dd4e9 +0x29:  jne    086dd518 <+0x58>
086dd4eb +0x2b:  mov    %esi,0x8(%edx)
086dd4ee +0x2e:  mov    (%esp),%ebx
086dd4f1 +0x31:  mov    0x4(%esp),%esi
086dd4f5 +0x35:  mov    %ebp,%esp
086dd4f7 +0x37:  pop    %ebp
086dd4f8 +0x38:  ret
086dd4f9 +0x39:  lea    0x0(%esi,%eiz,1),%esi
086dd500 +0x40:  sub    $0x1,%ecx
086dd503 +0x43:  xor    %eax,%eax
086dd505 +0x45:  mov    %ecx,0x8(%edx)
086dd508 +0x48:  mov    (%esp),%ebx
086dd50b +0x4b:  mov    0x4(%esp),%esi
086dd50f +0x4f:  mov    %ebp,%esp
086dd511 +0x51:  pop    %ebp
086dd512 +0x52:  ret
086dd513 +0x53:  nop
086dd514 +0x54:  lea    0x0(%esi,%eiz,1),%esi
086dd518 +0x58:  testb  $0x4,0x28(%edx)
086dd51c +0x5c:  je     086dd530 <+0x70>
086dd51e +0x5e:  xchg   %ax,%ax
086dd520 +0x60:  mov    $0xffffffff,%eax
086dd525 +0x65:  mov    (%esp),%ebx
086dd528 +0x68:  mov    0x4(%esp),%esi
086dd52c +0x6c:  mov    %ebp,%esp
086dd52e +0x6e:  pop    %ebp
086dd52f +0x6f:  ret
086dd530 +0x70:  mov    %esi,0x8(%edx)
086dd533 +0x73:  mov    %al,-0x1(%ecx)
086dd536 +0x76:  jmp    086dd4ee <+0x2e>
086dd538 +0x78:  nop
086dd539 +0x79:  nop
086dd53a +0x7a:  nop
086dd53b +0x7b:  nop
086dd53c +0x7c:  nop
086dd53d +0x7d:  nop
086dd53e +0x7e:  nop
086dd53f +0x7f:  nop
```

## 反编译 C

```c
// std::strstreambuf::pbackfail @ 0x86dd4c0

/* std::strstreambuf::pbackfail(int) */

int __thiscall std::strstreambuf::pbackfail(strstreambuf *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 8);
  if (iVar1 == *(int *)(this + 4)) {
    return -1;
  }
  if (param_1 != -1) {
    if (param_1 == (uint)*(byte *)(iVar1 + -1)) {
      *(int *)(this + 8) = iVar1 + -1;
    }
    else {
      if (((byte)this[0x28] & 4) != 0) {
        return -1;
      }
      *(int *)(this + 8) = iVar1 + -1;
      *(char *)(iVar1 + -1) = (char)param_1;
    }
    return param_1;
  }
  *(int *)(this + 8) = iVar1 + -1;
  return 0;
}
```
