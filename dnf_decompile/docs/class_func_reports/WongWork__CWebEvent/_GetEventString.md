# _GetEventString

`_ZN8WongWork9CWebEvent15_GetEventStringEi`

`WongWork::CWebEvent::_GetEventString(int)`

| 类 | 地址 |
|---|---|
| `WongWork::CWebEvent` | `0x086c1ba8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c1ba8  _ZN8WongWork9CWebEvent15_GetEventStringEi
#           WongWork::CWebEvent::_GetEventString(int)
# range [0x086c1ba8, 0x086c1bd3]
086c1ba8 +0x00:  push   %ebp
086c1ba9 +0x01:  mov    %esp,%ebp
086c1bab +0x03:  sub    $0x10,%esp
086c1bae +0x06:  movl   $0x0,-0x4(%ebp)
086c1bb5 +0x0d:  cmpl   $0xa,0x8(%ebp)
086c1bb9 +0x11:  jle    086c1bc0 <+0x18>
086c1bbb +0x13:  mov    -0x4(%ebp),%eax
086c1bbe +0x16:  jmp    086c1bd1 <+0x29>
086c1bc0 +0x18:  mov    0x8(%ebp),%edx
086c1bc3 +0x1b:  mov    %edx,%eax
086c1bc5 +0x1d:  shl    $0x3,%eax
086c1bc8 +0x20:  add    %edx,%eax
086c1bca +0x22:  add    %eax,%eax
086c1bcc +0x24:  add    $&_ZN8WongWork9CWebEvent14m_strEventNameE,%eax
086c1bd1 +0x29:  leave
086c1bd2 +0x2a:  ret
086c1bd3 +0x2b:  nop
```

## 反编译 C

```c
// WongWork::CWebEvent::_GetEventString @ 0x86c1ba8

/* WongWork::CWebEvent::_GetEventString(int) */

undefined * WongWork::CWebEvent::_GetEventString(int param_1)

{
  undefined *puVar1;
  
  if (param_1 < 0xb) {
    puVar1 = &m_strEventName + param_1 * 0x12;
  }
  else {
    puVar1 = (undefined *)0x0;
  }
  return puVar1;
}
```
