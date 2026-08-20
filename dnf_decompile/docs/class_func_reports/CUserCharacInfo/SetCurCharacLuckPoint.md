# SetCurCharacLuckPoint

`_ZN15CUserCharacInfo21SetCurCharacLuckPointEi`

`CUserCharacInfo::SetCurCharacLuckPoint(int)`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x0864670a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864670a  _ZN15CUserCharacInfo21SetCurCharacLuckPointEi
#           CUserCharacInfo::SetCurCharacLuckPoint(int)
# range [0x0864670a, 0x0864679f]
0864670a +0x00:  push   %ebp
0864670b +0x01:  mov    %esp,%ebp
0864670d +0x03:  mov    0x8(%ebp),%eax
08646710 +0x06:  mov    0x10(%eax),%eax
08646713 +0x09:  test   %eax,%eax
08646715 +0x0b:  je     0864679d <+0x93>
0864671b +0x11:  mov    0x8(%ebp),%eax
0864671e +0x14:  mov    0x10(%eax),%eax
08646721 +0x17:  mov    0xe71(%eax),%eax
08646727 +0x1d:  mov    0xc(%ebp),%edx
0864672a +0x20:  mov    %edx,%ecx
0864672c +0x22:  sub    %eax,%ecx
0864672e +0x24:  mov    %ecx,%eax
08646730 +0x26:  cmp    $&_ZL14gUnicodeBuffer+0xe174,%eax
08646735 +0x2b:  jne    08646749 <+0x3f>
08646737 +0x2d:  mov    0x8(%ebp),%eax
0864673a +0x30:  mov    0x10(%eax),%eax
0864673d +0x33:  movl   $&_ZL14gUnicodeBuffer+0xe174,0xe71(%eax)
08646747 +0x3d:  jmp    0864679d <+0x93>
08646749 +0x3f:  mov    0x8(%ebp),%eax
0864674c +0x42:  mov    0x10(%eax),%eax
0864674f +0x45:  mov    0xc(%ebp),%edx
08646752 +0x48:  mov    %edx,0xe71(%eax)
08646758 +0x4e:  mov    0x8(%ebp),%eax
0864675b +0x51:  mov    0x10(%eax),%eax
0864675e +0x54:  mov    0xe71(%eax),%eax
08646764 +0x5a:  test   %eax,%eax
08646766 +0x5c:  jns    0864677a <+0x70>
08646768 +0x5e:  mov    0x8(%ebp),%eax
0864676b +0x61:  mov    0x10(%eax),%eax
0864676e +0x64:  movl   $0x0,0xe71(%eax)
08646778 +0x6e:  jmp    0864679d <+0x93>
0864677a +0x70:  mov    0x8(%ebp),%eax
0864677d +0x73:  mov    0x10(%eax),%eax
08646780 +0x76:  mov    0xe71(%eax),%eax
08646786 +0x7c:  cmp    $&_ZL14gUnicodeBuffer+0xe173,%eax
0864678b +0x81:  jle    0864679d <+0x93>
0864678d +0x83:  mov    0x8(%ebp),%eax
08646790 +0x86:  mov    0x10(%eax),%eax
08646793 +0x89:  movl   $&_ZL14gUnicodeBuffer+0xe173,0xe71(%eax)
0864679d +0x93:  pop    %ebp
0864679e +0x94:  ret
0864679f +0x95:  nop
```

## 反编译 C

```c
// CUserCharacInfo::SetCurCharacLuckPoint @ 0x864670a

/* CUserCharacInfo::SetCurCharacLuckPoint(int) */

void __thiscall CUserCharacInfo::SetCurCharacLuckPoint(CUserCharacInfo *this,int param_1)

{
  if (*(int *)(this + 0x10) != 0) {
    if (param_1 - *(int *)(*(int *)(this + 0x10) + 0xe71) == 100000) {
      *(undefined4 *)(*(int *)(this + 0x10) + 0xe71) = 100000;
    }
    else {
      *(int *)(*(int *)(this + 0x10) + 0xe71) = param_1;
      if (*(int *)(*(int *)(this + 0x10) + 0xe71) < 0) {
        *(undefined4 *)(*(int *)(this + 0x10) + 0xe71) = 0;
      }
      else if (99999 < *(int *)(*(int *)(this + 0x10) + 0xe71)) {
        *(undefined4 *)(*(int *)(this + 0x10) + 0xe71) = 99999;
      }
    }
  }
  return;
}
```
