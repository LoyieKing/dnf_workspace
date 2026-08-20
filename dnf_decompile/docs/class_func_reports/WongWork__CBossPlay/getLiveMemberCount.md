# getLiveMemberCount

`_ZN8WongWork9CBossPlay18getLiveMemberCountEv`

`WongWork::CBossPlay::getLiveMemberCount()`

| 类 | 地址 |
|---|---|
| `WongWork::CBossPlay` | `0x08149466` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08149466  _ZN8WongWork9CBossPlay18getLiveMemberCountEv
#           WongWork::CBossPlay::getLiveMemberCount()
# range [0x08149466, 0x081494a3]
08149466 +0x00:  push   %ebp
08149467 +0x01:  mov    %esp,%ebp
08149469 +0x03:  sub    $0x10,%esp
0814946c +0x06:  movl   $0x0,-0x8(%ebp)
08149473 +0x0d:  movl   $0x0,-0x4(%ebp)
0814947a +0x14:  jmp    08149493 <+0x2d>
0814947c +0x16:  mov    -0x4(%ebp),%eax
0814947f +0x19:  mov    0x8(%ebp),%edx
08149482 +0x1c:  movzbl 0xd(%edx,%eax,1),%eax
08149487 +0x21:  test   %al,%al
08149489 +0x23:  je     0814948f <+0x29>
0814948b +0x25:  addl   $0x1,-0x8(%ebp)
0814948f +0x29:  addl   $0x1,-0x4(%ebp)
08149493 +0x2d:  cmpl   $0x3,-0x4(%ebp)
08149497 +0x31:  setle  %al
0814949a +0x34:  test   %al,%al
0814949c +0x36:  jne    0814947c <+0x16>
0814949e +0x38:  mov    -0x8(%ebp),%eax
081494a1 +0x3b:  leave
081494a2 +0x3c:  ret
081494a3 +0x3d:  nop
```

## 反编译 C

```c
// WongWork::CBossPlay::getLiveMemberCount @ 0x8149466

/* WongWork::CBossPlay::getLiveMemberCount() */

int __thiscall WongWork::CBossPlay::getLiveMemberCount(CBossPlay *this)

{
  int local_c;
  int local_8;
  
  local_c = 0;
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    if (this[local_8 + 0xd] != (CBossPlay)0x0) {
      local_c = local_c + 1;
    }
  }
  return local_c;
}
```
