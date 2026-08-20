# CheckCompleteDBLoadStatueInfo

`_ZN13CPowerManager29CheckCompleteDBLoadStatueInfoEv`

`CPowerManager::CheckCompleteDBLoadStatueInfo()`

| 类 | 地址 |
|---|---|
| `CPowerManager` | `0x0847f1b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0847f1b0  _ZN13CPowerManager29CheckCompleteDBLoadStatueInfoEv
#           CPowerManager::CheckCompleteDBLoadStatueInfo()
# range [0x0847f1b0, 0x0847f1ff]
0847f1b0 +0x00:  push   %ebp
0847f1b1 +0x01:  mov    %esp,%ebp
0847f1b3 +0x03:  sub    $0x10,%esp
0847f1b6 +0x06:  movl   $0x0,-0x4(%ebp)
0847f1bd +0x0d:  jmp    0847f1eb <+0x3b>
0847f1bf +0x0f:  mov    -0x4(%ebp),%eax
0847f1c2 +0x12:  mov    0x8(%ebp),%edx
0847f1c5 +0x15:  shl    $0x2,%eax
0847f1c8 +0x18:  mov    %eax,%ecx
0847f1ca +0x1a:  shl    $0x5,%ecx
0847f1cd +0x1d:  add    %ecx,%eax
0847f1cf +0x1f:  lea    (%edx,%eax,1),%eax
0847f1d2 +0x22:  add    $0x20,%eax
0847f1d5 +0x25:  movzbl 0x8(%eax),%eax
0847f1d9 +0x29:  xor    $0x1,%eax
0847f1dc +0x2c:  test   %al,%al
0847f1de +0x2e:  je     0847f1e7 <+0x37>
0847f1e0 +0x30:  mov    $0x0,%eax
0847f1e5 +0x35:  jmp    0847f1fd <+0x4d>
0847f1e7 +0x37:  addl   $0x1,-0x4(%ebp)
0847f1eb +0x3b:  mov    -0x4(%ebp),%eax
0847f1ee +0x3e:  cmp    $0x2,%eax
0847f1f1 +0x41:  setbe  %al
0847f1f4 +0x44:  test   %al,%al
0847f1f6 +0x46:  jne    0847f1bf <+0xf>
0847f1f8 +0x48:  mov    $0x1,%eax
0847f1fd +0x4d:  leave
0847f1fe +0x4e:  ret
0847f1ff +0x4f:  nop
```

## 反编译 C

```c
// CPowerManager::CheckCompleteDBLoadStatueInfo @ 0x847f1b0

/* CPowerManager::CheckCompleteDBLoadStatueInfo() */

undefined4 __thiscall CPowerManager::CheckCompleteDBLoadStatueInfo(CPowerManager *this)

{
  uint local_8;
  
  local_8 = 0;
  while( true ) {
    if (2 < local_8) {
      return 1;
    }
    if (this[local_8 * 0x84 + 0x28] != (CPowerManager)0x1) break;
    local_8 = local_8 + 1;
  }
  return 0;
}
```
