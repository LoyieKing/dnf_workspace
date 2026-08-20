# IsHotKeyOptionChanged

`_ZN11CGameOption21IsHotKeyOptionChangedEhR13CHotkeyOption`

`CGameOption::IsHotKeyOptionChanged(unsigned char, CHotkeyOption&)`

| 类 | 地址 |
|---|---|
| `CGameOption` | `0x084b6da0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b6da0  _ZN11CGameOption21IsHotKeyOptionChangedEhR13CHotkeyOption
#           CGameOption::IsHotKeyOptionChanged(unsigned char, CHotkeyOption&)
# range [0x084b6da0, 0x084b6df3]
084b6da0 +0x00:  push   %ebp
084b6da1 +0x01:  mov    %esp,%ebp
084b6da3 +0x03:  sub    $0x38,%esp
084b6da6 +0x06:  mov    0xc(%ebp),%eax
084b6da9 +0x09:  mov    %al,-0x1c(%ebp)
084b6dac +0x0c:  cmpb   $0x1,-0x1c(%ebp)
084b6db0 +0x10:  jbe    084b6db9 <+0x19>
084b6db2 +0x12:  mov    $0x0,%eax
084b6db7 +0x17:  jmp    084b6df2 <+0x52>
084b6db9 +0x19:  movzbl -0x1c(%ebp),%eax
084b6dbd +0x1d:  imul   $0xbc,%eax,%eax
084b6dc3 +0x23:  add    0x8(%ebp),%eax
084b6dc6 +0x26:  movl   $0xbc,0x8(%esp)
084b6dce +0x2e:  mov    0x10(%ebp),%edx
084b6dd1 +0x31:  mov    %edx,0x4(%esp)
084b6dd5 +0x35:  mov    %eax,(%esp)
084b6dd8 +0x38:  call   0807dc90 <_init+0x588>
084b6ddd +0x3d:  mov    %eax,-0xc(%ebp)
084b6de0 +0x40:  cmpl   $0x0,-0xc(%ebp)
084b6de4 +0x44:  jne    084b6ded <+0x4d>
084b6de6 +0x46:  mov    $0x0,%eax
084b6deb +0x4b:  jmp    084b6df2 <+0x52>
084b6ded +0x4d:  mov    $0x1,%eax
084b6df2 +0x52:  leave
084b6df3 +0x53:  ret
```

## 反编译 C

```c
// CGameOption::IsHotKeyOptionChanged @ 0x84b6da0

/* CGameOption::IsHotKeyOptionChanged(unsigned char, CHotkeyOption&) */

undefined4 __thiscall
CGameOption::IsHotKeyOptionChanged(CGameOption *this,uchar param_1,CHotkeyOption *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 < 2) {
    iVar2 = memcmp(this + (uint)param_1 * 0xbc,param_2,0xbc);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
