# CGuildWarEvent

`_GLOBAL__I__ZN14CGuildWarEventC2Ev`

`global constructors keyed to CGuildWarEvent::CGuildWarEvent()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CGuildWarEvent` | `0x0811d39c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811d39c  _GLOBAL__I__ZN14CGuildWarEventC2Ev
#           global constructors keyed to CGuildWarEvent::CGuildWarEvent()
# range [0x0811d39c, 0x0811d423]
0811d39c +0x00:  push   %ebp
0811d39d +0x01:  mov    %esp,%ebp
0811d39f +0x03:  sub    $0x18,%esp
0811d3a2 +0x06:  movl   $0xffff,0x4(%esp)
0811d3aa +0x0e:  movl   $0x1,(%esp)
0811d3b1 +0x15:  call   0811d35c <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0811d3b6 +0x1a:  leave
0811d3b7 +0x1b:  ret
0811d3b8 +0x1c:  push   %ebp
0811d3b9 +0x1d:  mov    %esp,%ebp
0811d3bb +0x1f:  sub    $0x10,%esp
0811d3be +0x22:  cmpl   $0x0,0xc(%ebp)
0811d3c2 +0x26:  jne    0811d3cc <+0x30>
0811d3c4 +0x28:  mov    0x8(%ebp),%eax
0811d3c7 +0x2b:  add    $0x10,%eax
0811d3ca +0x2e:  jmp    0811d422 <+0x86>
0811d3cc +0x30:  movl   $0x0,-0x4(%ebp)
0811d3d3 +0x37:  jmp    0811d40c <+0x70>
0811d3d5 +0x39:  mov    0x8(%ebp),%eax
0811d3d8 +0x3c:  mov    (%eax),%eax
0811d3da +0x3e:  test   %eax,%eax
0811d3dc +0x40:  je     0811d408 <+0x6c>
0811d3de +0x42:  mov    0x8(%ebp),%eax
0811d3e1 +0x45:  mov    (%eax),%eax
0811d3e3 +0x47:  mov    -0x4(%ebp),%edx
0811d3e6 +0x4a:  shl    $0x2,%edx
0811d3e9 +0x4d:  add    %edx,%eax
0811d3eb +0x4f:  mov    (%eax),%edx
0811d3ed +0x51:  mov    0xc(%ebp),%eax
0811d3f0 +0x54:  cmp    %eax,%edx
0811d3f2 +0x56:  jne    0811d408 <+0x6c>
0811d3f4 +0x58:  mov    0x8(%ebp),%eax
0811d3f7 +0x5b:  mov    0x4(%eax),%edx
0811d3fa +0x5e:  mov    -0x4(%ebp),%eax
0811d3fd +0x61:  imul   $&_ZL14gUnicodeBuffer+0x268f8,%eax,%eax
0811d403 +0x67:  lea    (%edx,%eax,1),%eax
0811d406 +0x6a:  jmp    0811d422 <+0x86>
0811d408 +0x6c:  addl   $0x1,-0x4(%ebp)
0811d40c +0x70:  mov    0x8(%ebp),%eax
0811d40f +0x73:  mov    0x8(%eax),%eax
0811d412 +0x76:  cmp    -0x4(%ebp),%eax
0811d415 +0x79:  setg   %al
0811d418 +0x7c:  test   %al,%al
0811d41a +0x7e:  jne    0811d3d5 <+0x39>
0811d41c +0x80:  mov    0x8(%ebp),%eax
0811d41f +0x83:  add    $0x10,%eax
0811d422 +0x86:  leave
0811d423 +0x87:  ret
```

## 反编译 C

```c
// <global>::global @ 0x811d39c

/* CGuildWarEvent::CGuildWarEvent() */

void CGuildWarEvent::_GLOBAL__I_CGuildWarEvent(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
