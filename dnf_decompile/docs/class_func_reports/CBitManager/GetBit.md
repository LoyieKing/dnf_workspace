# GetBit

`_ZN11CBitManager6GetBitEiii`

`CBitManager::GetBit(int, int, int)`

| 类 | 地址 |
|---|---|
| `CBitManager` | `0x0831c2fc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0831c2fc  _ZN11CBitManager6GetBitEiii
#           CBitManager::GetBit(int, int, int)
# range [0x0831c2fc, 0x0831c36e]
0831c2fc +0x00:  push   %ebp
0831c2fd +0x01:  mov    %esp,%ebp
0831c2ff +0x03:  sub    $0x10,%esp
0831c302 +0x06:  movl   $0x0,-0x8(%ebp)
0831c309 +0x0d:  movb   $0x0,-0x2(%ebp)
0831c30d +0x11:  movb   $0x0,-0x1(%ebp)
0831c311 +0x15:  movb   $0x1,-0x10(%ebp)
0831c315 +0x19:  movb   $0x2,-0xf(%ebp)
0831c319 +0x1d:  movb   $0x4,-0xe(%ebp)
0831c31d +0x21:  movb   $0x8,-0xd(%ebp)
0831c321 +0x25:  movb   $0x10,-0xc(%ebp)
0831c325 +0x29:  movb   $0x20,-0xb(%ebp)
0831c329 +0x2d:  movb   $0x40,-0xa(%ebp)
0831c32d +0x31:  movb   $0x80,-0x9(%ebp)
0831c331 +0x35:  mov    0x10(%ebp),%eax
0831c334 +0x38:  mov    %eax,-0x8(%ebp)
0831c337 +0x3b:  jmp    0831c348 <+0x4c>
0831c339 +0x3d:  mov    -0x8(%ebp),%eax
0831c33c +0x40:  movzbl -0x10(%ebp,%eax,1),%eax
0831c341 +0x45:  or     %al,-0x2(%ebp)
0831c344 +0x48:  addl   $0x1,-0x8(%ebp)
0831c348 +0x4c:  mov    -0x8(%ebp),%eax
0831c34b +0x4f:  cmp    0x14(%ebp),%eax
0831c34e +0x52:  setle  %al
0831c351 +0x55:  test   %al,%al
0831c353 +0x57:  jne    0831c339 <+0x3d>
0831c355 +0x59:  mov    0x8(%ebp),%eax
0831c358 +0x5c:  mov    (%eax),%edx
0831c35a +0x5e:  mov    0xc(%ebp),%eax
0831c35d +0x61:  lea    (%edx,%eax,1),%eax
0831c360 +0x64:  movzbl (%eax),%eax
0831c363 +0x67:  and    -0x2(%ebp),%al
0831c366 +0x6a:  mov    %al,-0x1(%ebp)
0831c369 +0x6d:  movzbl -0x1(%ebp),%eax
0831c36d +0x71:  leave
0831c36e +0x72:  ret
```

## 反编译 C

```c
// CBitManager::GetBit @ 0x831c2fc

/* CBitManager::GetBit(int, int, int) */

byte __thiscall CBitManager::GetBit(CBitManager *this,int param_1,int param_2,int param_3)

{
  byte local_14 [8];
  int local_c;
  byte local_6;
  undefined1 local_5;
  
  local_6 = 0;
  local_5 = 0;
  local_14[0] = 1;
  local_14[1] = 2;
  local_14[2] = 4;
  local_14[3] = 8;
  local_14[4] = 0x10;
  local_14[5] = 0x20;
  local_14[6] = 0x40;
  local_14[7] = 0x80;
  for (local_c = param_2; local_c <= param_3; local_c = local_c + 1) {
    local_6 = local_6 | local_14[local_c];
  }
  return *(byte *)(*(int *)this + param_1) & local_6;
}
```
