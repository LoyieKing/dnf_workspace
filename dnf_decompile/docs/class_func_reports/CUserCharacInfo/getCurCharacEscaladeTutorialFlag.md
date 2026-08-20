# getCurCharacEscaladeTutorialFlag

`_ZN15CUserCharacInfo32getCurCharacEscaladeTutorialFlagEj`

`CUserCharacInfo::getCurCharacEscaladeTutorialFlag(unsigned int)`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x0864751e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864751e  _ZN15CUserCharacInfo32getCurCharacEscaladeTutorialFlagEj
#           CUserCharacInfo::getCurCharacEscaladeTutorialFlag(unsigned int)
# range [0x0864751e, 0x086475d7]
0864751e +0x00:  push   %ebp
0864751f +0x01:  mov    %esp,%ebp
08647521 +0x03:  push   %esi
08647522 +0x04:  push   %ebx
08647523 +0x05:  sub    $0x10,%esp
08647526 +0x08:  mov    0x8(%ebp),%eax
08647529 +0x0b:  mov    0x10(%eax),%eax
0864752c +0x0e:  test   %eax,%eax
0864752e +0x10:  je     086475cc <+0xae>
08647534 +0x16:  cmpl   $0x1f,0xc(%ebp)
08647538 +0x1a:  ja     08647560 <+0x42>
0864753a +0x1c:  mov    0x8(%ebp),%eax
0864753d +0x1f:  mov    0x10(%eax),%eax
08647540 +0x22:  mov    0x51(%eax),%edx
08647543 +0x25:  mov    0xc(%ebp),%eax
08647546 +0x28:  mov    $0x1,%ebx
0864754b +0x2d:  mov    %ebx,%esi
0864754d +0x2f:  mov    %eax,%ecx
0864754f +0x31:  shl    %cl,%esi
08647551 +0x33:  mov    %esi,%eax
08647553 +0x35:  and    %edx,%eax
08647555 +0x37:  test   %eax,%eax
08647557 +0x39:  je     086475cc <+0xae>
08647559 +0x3b:  mov    $0x1,%eax
0864755e +0x40:  jmp    086475d1 <+0xb3>
08647560 +0x42:  cmpl   $0x7f,0xc(%ebp)
08647564 +0x46:  ja     086475cc <+0xae>
08647566 +0x48:  mov    0xc(%ebp),%eax
08647569 +0x4b:  sub    $0x20,%eax
0864756c +0x4e:  mov    %eax,-0x14(%ebp)
0864756f +0x51:  mov    -0x14(%ebp),%eax
08647572 +0x54:  mov    %eax,%edx
08647574 +0x56:  sar    $0x1f,%edx
08647577 +0x59:  shr    $0x1d,%edx
0864757a +0x5c:  lea    (%edx,%eax,1),%eax
0864757d +0x5f:  sar    $0x3,%eax
08647580 +0x62:  mov    %eax,-0x10(%ebp)
08647583 +0x65:  mov    -0x14(%ebp),%eax
08647586 +0x68:  mov    %eax,%edx
08647588 +0x6a:  sar    $0x1f,%edx
0864758b +0x6d:  shr    $0x1d,%edx
0864758e +0x70:  add    %edx,%eax
08647590 +0x72:  and    $0x7,%eax
08647593 +0x75:  sub    %edx,%eax
08647595 +0x77:  mov    %eax,-0xc(%ebp)
08647598 +0x7a:  cmpl   $0x0,-0x10(%ebp)
0864759c +0x7e:  js     086475a4 <+0x86>
0864759e +0x80:  cmpl   $0xf,-0x10(%ebp)
086475a2 +0x84:  jle    086475ab <+0x8d>
086475a4 +0x86:  mov    $0x0,%eax
086475a9 +0x8b:  jmp    086475d1 <+0xb3>
086475ab +0x8d:  mov    0x8(%ebp),%eax
086475ae +0x90:  mov    0x10(%eax),%edx
086475b1 +0x93:  mov    -0x10(%ebp),%eax
086475b4 +0x96:  movzbl 0x55(%edx,%eax,1),%eax
086475b9 +0x9b:  movsbl %al,%edx
086475bc +0x9e:  mov    -0xc(%ebp),%eax
086475bf +0xa1:  mov    %edx,%ebx
086475c1 +0xa3:  mov    %eax,%ecx
086475c3 +0xa5:  sar    %cl,%ebx
086475c5 +0xa7:  mov    %ebx,%eax
086475c7 +0xa9:  and    $0x1,%eax
086475ca +0xac:  jmp    086475d1 <+0xb3>
086475cc +0xae:  mov    $0x0,%eax
086475d1 +0xb3:  add    $0x10,%esp
086475d4 +0xb6:  pop    %ebx
086475d5 +0xb7:  pop    %esi
086475d6 +0xb8:  pop    %ebp
086475d7 +0xb9:  ret
```

## 反编译 C

```c
// CUserCharacInfo::getCurCharacEscaladeTutorialFlag @ 0x864751e

/* CUserCharacInfo::getCurCharacEscaladeTutorialFlag(unsigned int) */

uint __thiscall
CUserCharacInfo::getCurCharacEscaladeTutorialFlag(CUserCharacInfo *this,uint param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(this + 0x10) != 0) {
    if (param_1 < 0x20) {
      if ((1 << ((byte)param_1 & 0x1f) & *(uint *)(*(int *)(this + 0x10) + 0x51)) != 0) {
        return 1;
      }
    }
    else if (param_1 < 0x80) {
      iVar1 = param_1 - 0x20;
      iVar2 = (int)(((uint)(iVar1 >> 0x1f) >> 0x1d) + iVar1) >> 3;
      if ((-1 < iVar2) && (iVar2 < 0x10)) {
        return (int)*(char *)(*(int *)(this + 0x10) + 0x55 + iVar2) >> ((byte)(iVar1 % 8) & 0x1f) &
               1;
      }
      return 0;
    }
  }
  return 0;
}
```
