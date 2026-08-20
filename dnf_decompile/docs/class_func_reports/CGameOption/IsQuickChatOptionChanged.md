# IsQuickChatOptionChanged

`_ZN11CGameOption24IsQuickChatOptionChangedERK20CQuickChattingOptionj`

`CGameOption::IsQuickChatOptionChanged(CQuickChattingOption const&, unsigned int)`

| 类 | 地址 |
|---|---|
| `CGameOption` | `0x084b6f84` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b6f84  _ZN11CGameOption24IsQuickChatOptionChangedERK20CQuickChattingOptionj
#           CGameOption::IsQuickChatOptionChanged(CQuickChattingOption const&, unsigned int)
# range [0x084b6f84, 0x084b6fdf]
084b6f84 +0x00:  push   %ebp
084b6f85 +0x01:  mov    %esp,%ebp
084b6f87 +0x03:  sub    $0x28,%esp
084b6f8a +0x06:  cmpl   $0x0,0x10(%ebp)
084b6f8e +0x0a:  je     084b6f96 <+0x12>
084b6f90 +0x0c:  cmpl   $0x1,0x10(%ebp)
084b6f94 +0x10:  jne    084b6fd8 <+0x54>
084b6f96 +0x12:  mov    0x10(%ebp),%eax
084b6f99 +0x15:  imul   $0x12c,%eax,%eax
084b6f9f +0x1b:  add    $0x1c0,%eax
084b6fa4 +0x20:  add    0x8(%ebp),%eax
084b6fa7 +0x23:  lea    0x2(%eax),%edx
084b6faa +0x26:  movl   $0x12c,0x8(%esp)
084b6fb2 +0x2e:  mov    0xc(%ebp),%eax
084b6fb5 +0x31:  mov    %eax,0x4(%esp)
084b6fb9 +0x35:  mov    %edx,(%esp)
084b6fbc +0x38:  call   0807dc90 <_init+0x588>
084b6fc1 +0x3d:  mov    %eax,-0xc(%ebp)
084b6fc4 +0x40:  cmpl   $0x0,-0xc(%ebp)
084b6fc8 +0x44:  jne    084b6fd1 <+0x4d>
084b6fca +0x46:  mov    $0x0,%eax
084b6fcf +0x4b:  jmp    084b6fdd <+0x59>
084b6fd1 +0x4d:  mov    $0x1,%eax
084b6fd6 +0x52:  jmp    084b6fdd <+0x59>
084b6fd8 +0x54:  mov    $0x0,%eax
084b6fdd +0x59:  leave
084b6fde +0x5a:  ret
084b6fdf +0x5b:  nop
```

## 反编译 C

```c
// CGameOption::IsQuickChatOptionChanged @ 0x84b6f84

/* CGameOption::IsQuickChatOptionChanged(CQuickChattingOption const&, unsigned int) */

undefined4 __thiscall
CGameOption::IsQuickChatOptionChanged(CGameOption *this,CQuickChattingOption *param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_2 == 0) || (param_2 == 1)) {
    iVar1 = memcmp(this + param_2 * 300 + 0x1c2,param_1,300);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
