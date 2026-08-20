# GetSetPlayResultCount

`_ZN6CParty21GetSetPlayResultCountEv`

`CParty::GetSetPlayResultCount()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b231e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b231e  _ZN6CParty21GetSetPlayResultCountEv
#           CParty::GetSetPlayResultCount()
# range [0x085b231e, 0x085b2383]
085b231e +0x00:  push   %ebp
085b231f +0x01:  mov    %esp,%ebp
085b2321 +0x03:  sub    $0x10,%esp
085b2324 +0x06:  movl   $0x0,-0x8(%ebp)
085b232b +0x0d:  movl   $0x0,-0x4(%ebp)
085b2332 +0x14:  jmp    085b2374 <+0x56>
085b2334 +0x16:  mov    -0x4(%ebp),%edx
085b2337 +0x19:  mov    0x8(%ebp),%ecx
085b233a +0x1c:  mov    %edx,%eax
085b233c +0x1e:  add    %eax,%eax
085b233e +0x20:  add    %edx,%eax
085b2340 +0x22:  shl    $0x3,%eax
085b2343 +0x25:  lea    (%ecx,%eax,1),%eax
085b2346 +0x28:  add    $0x78,%eax
085b2349 +0x2b:  mov    (%eax),%eax
085b234b +0x2d:  test   %eax,%eax
085b234d +0x2f:  je     085b2370 <+0x52>
085b234f +0x31:  mov    -0x4(%ebp),%edx
085b2352 +0x34:  mov    0x8(%ebp),%ecx
085b2355 +0x37:  mov    %edx,%eax
085b2357 +0x39:  add    %eax,%eax
085b2359 +0x3b:  add    %edx,%eax
085b235b +0x3d:  shl    $0x3,%eax
085b235e +0x40:  lea    (%ecx,%eax,1),%eax
085b2361 +0x43:  add    $0x70,%eax
085b2364 +0x46:  movzbl 0xc(%eax),%eax
085b2368 +0x4a:  test   %al,%al
085b236a +0x4c:  je     085b2370 <+0x52>
085b236c +0x4e:  addl   $0x1,-0x8(%ebp)
085b2370 +0x52:  addl   $0x1,-0x4(%ebp)
085b2374 +0x56:  cmpl   $0x3,-0x4(%ebp)
085b2378 +0x5a:  setle  %al
085b237b +0x5d:  test   %al,%al
085b237d +0x5f:  jne    085b2334 <+0x16>
085b237f +0x61:  mov    -0x8(%ebp),%eax
085b2382 +0x64:  leave
085b2383 +0x65:  ret
```

## 反编译 C

```c
// CParty::GetSetPlayResultCount @ 0x85b231e

/* CParty::GetSetPlayResultCount() */

int __thiscall CParty::GetSetPlayResultCount(CParty *this)

{
  int local_c;
  int local_8;
  
  local_c = 0;
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    if ((*(int *)(this + local_8 * 0x18 + 0x78) != 0) &&
       (this[local_8 * 0x18 + 0x7c] != (CParty)0x0)) {
      local_c = local_c + 1;
    }
  }
  return local_c;
}
```
