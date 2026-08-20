# get_appearmap

`_ZNK5Quest13get_appearmapEii`

`Quest::get_appearmap(int, int) const`

| 类 | 地址 |
|---|---|
| `Quest` | `0x083536f2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083536f2  _ZNK5Quest13get_appearmapEii
#           Quest::get_appearmap(int, int) const
# range [0x083536f2, 0x08353775]
083536f2 +0x00:  push   %ebp
083536f3 +0x01:  mov    %esp,%ebp
083536f5 +0x03:  push   %ebx
083536f6 +0x04:  sub    $0x14,%esp
083536f9 +0x07:  mov    0x8(%ebp),%eax
083536fc +0x0a:  mov    0x64(%eax),%eax
083536ff +0x0d:  cmp    $0xffffffff,%eax
08353702 +0x10:  jne    08353732 <+0x40>
08353704 +0x12:  mov    0x8(%ebp),%eax
08353707 +0x15:  mov    0x60(%eax),%eax
0835370a +0x18:  cmp    0xc(%ebp),%eax
0835370d +0x1b:  jne    0835376b <+0x79>
0835370f +0x1d:  mov    0x8(%ebp),%eax
08353712 +0x20:  mov    0x6c(%eax),%ebx
08353715 +0x23:  movl   $0x64,(%esp)
0835371c +0x2a:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
08353721 +0x2f:  cmp    %eax,%ebx
08353723 +0x31:  setge  %al
08353726 +0x34:  test   %al,%al
08353728 +0x36:  je     0835376b <+0x79>
0835372a +0x38:  mov    0x8(%ebp),%eax
0835372d +0x3b:  mov    0x68(%eax),%eax
08353730 +0x3e:  jmp    08353770 <+0x7e>
08353732 +0x40:  mov    0x8(%ebp),%eax
08353735 +0x43:  mov    0x64(%eax),%eax
08353738 +0x46:  cmp    0xc(%ebp),%eax
0835373b +0x49:  jne    0835376b <+0x79>
0835373d +0x4b:  mov    0x8(%ebp),%eax
08353740 +0x4e:  mov    0x64(%eax),%eax
08353743 +0x51:  cmp    0x10(%ebp),%eax
08353746 +0x54:  jne    0835376b <+0x79>
08353748 +0x56:  mov    0x8(%ebp),%eax
0835374b +0x59:  mov    0x6c(%eax),%ebx
0835374e +0x5c:  movl   $0x64,(%esp)
08353755 +0x63:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
0835375a +0x68:  cmp    %eax,%ebx
0835375c +0x6a:  setge  %al
0835375f +0x6d:  test   %al,%al
08353761 +0x6f:  je     0835376b <+0x79>
08353763 +0x71:  mov    0x8(%ebp),%eax
08353766 +0x74:  mov    0x68(%eax),%eax
08353769 +0x77:  jmp    08353770 <+0x7e>
0835376b +0x79:  mov    $0x0,%eax
08353770 +0x7e:  add    $0x14,%esp
08353773 +0x81:  pop    %ebx
08353774 +0x82:  pop    %ebp
08353775 +0x83:  ret
```

## 反编译 C

```c
// Quest::get_appearmap @ 0x83536f2

/* Quest::get_appearmap(int, int) const */

undefined4 __thiscall Quest::get_appearmap(Quest *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(this + 100) == -1) {
    if ((*(int *)(this + 0x60) == param_1) &&
       (iVar1 = *(int *)(this + 0x6c), iVar2 = get_rand_int(100), iVar2 <= iVar1)) {
      return *(undefined4 *)(this + 0x68);
    }
  }
  else if (((*(int *)(this + 100) == param_1) && (*(int *)(this + 100) == param_2)) &&
          (iVar1 = *(int *)(this + 0x6c), iVar2 = get_rand_int(100), iVar2 <= iVar1)) {
    return *(undefined4 *)(this + 0x68);
  }
  return 0;
}
```
