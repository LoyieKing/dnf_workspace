# _GetEventIPGCode

`_ZN8WongWork9CWebEvent16_GetEventIPGCodeEi`

`WongWork::CWebEvent::_GetEventIPGCode(int)`

| 类 | 地址 |
|---|---|
| `WongWork::CWebEvent` | `0x086c1bd4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c1bd4  _ZN8WongWork9CWebEvent16_GetEventIPGCodeEi
#           WongWork::CWebEvent::_GetEventIPGCode(int)
# range [0x086c1bd4, 0x086c1c20]
086c1bd4 +0x00:  push   %ebp
086c1bd5 +0x01:  mov    %esp,%ebp
086c1bd7 +0x03:  sub    $0x10,%esp
086c1bda +0x06:  movl   $0x0,-0x4(%ebp)
086c1be1 +0x0d:  cmpl   $0x9,0x8(%ebp)
086c1be5 +0x11:  jle    086c1bec <+0x18>
086c1be7 +0x13:  mov    -0x4(%ebp),%eax
086c1bea +0x16:  jmp    086c1c1f <+0x4b>
086c1bec +0x18:  mov    0x8(%ebp),%edx
086c1bef +0x1b:  mov    %edx,%eax
086c1bf1 +0x1d:  shl    $0x2,%eax
086c1bf4 +0x20:  add    %edx,%eax
086c1bf6 +0x22:  add    %eax,%eax
086c1bf8 +0x24:  add    %edx,%eax
086c1bfa +0x26:  movzbl &_ZN8WongWork9CWebEvent17m_strEventIPGCodeE(%eax),%eax
086c1c01 +0x2d:  test   %al,%al
086c1c03 +0x2f:  jne    086c1c0c <+0x38>
086c1c05 +0x31:  mov    $0x0,%eax
086c1c0a +0x36:  jmp    086c1c1f <+0x4b>
086c1c0c +0x38:  mov    0x8(%ebp),%edx
086c1c0f +0x3b:  mov    %edx,%eax
086c1c11 +0x3d:  shl    $0x2,%eax
086c1c14 +0x40:  add    %edx,%eax
086c1c16 +0x42:  add    %eax,%eax
086c1c18 +0x44:  add    %edx,%eax
086c1c1a +0x46:  add    $&_ZN8WongWork9CWebEvent17m_strEventIPGCodeE,%eax
086c1c1f +0x4b:  leave
086c1c20 +0x4c:  ret
```

## 反编译 C

```c
// WongWork::CWebEvent::_GetEventIPGCode @ 0x86c1bd4

/* WongWork::CWebEvent::_GetEventIPGCode(int) */

undefined * WongWork::CWebEvent::_GetEventIPGCode(int param_1)

{
  undefined *puVar1;
  
  if (param_1 < 10) {
    if ((&m_strEventIPGCode)[param_1 * 0xb] == '\0') {
      puVar1 = (undefined *)0x0;
    }
    else {
      puVar1 = &m_strEventIPGCode + param_1 * 0xb;
    }
  }
  else {
    puVar1 = (undefined *)0x0;
  }
  return puVar1;
}
```
