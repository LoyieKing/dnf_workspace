# Obfuscate2

`_ZN11CObfuscator10Obfuscate2Ev`

`CObfuscator::Obfuscate2()`

| 类 | 地址 |
|---|---|
| `CObfuscator` | `0x08585be4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08585be4  _ZN11CObfuscator10Obfuscate2Ev
#           CObfuscator::Obfuscate2()
# range [0x08585be4, 0x08585d2d]
08585be4 +0x000:  push   %ebp
08585be5 +0x001:  mov    %esp,%ebp
08585be7 +0x003:  push   %ebx
08585be8 +0x004:  sub    $0x34,%esp
08585beb +0x007:  movl   $0x0,-0x1c(%ebp)
08585bf2 +0x00e:  movl   $0x0,-0x18(%ebp)
08585bf9 +0x015:  movl   $0x6,-0x14(%ebp)
08585c00 +0x01c:  mov    0x8(%ebp),%eax
08585c03 +0x01f:  mov    0x8(%eax),%eax
08585c06 +0x022:  shl    $0x3,%eax
08585c09 +0x025:  mov    %eax,-0x10(%ebp)
08585c0c +0x028:  mov    0x8(%ebp),%eax
08585c0f +0x02b:  mov    0x8(%eax),%eax
08585c12 +0x02e:  sub    $0x1,%eax
08585c15 +0x031:  mov    %eax,-0x1c(%ebp)
08585c18 +0x034:  jmp    08585d13 <+0x12f>
08585c1d +0x039:  mov    0x8(%ebp),%eax
08585c20 +0x03c:  mov    -0x14(%ebp),%edx
08585c23 +0x03f:  mov    %edx,0xc(%esp)
08585c27 +0x043:  movl   $0x0,0x8(%esp)
08585c2f +0x04b:  mov    -0x1c(%ebp),%edx
08585c32 +0x04e:  mov    %edx,0x4(%esp)
08585c36 +0x052:  mov    %eax,(%esp)
08585c39 +0x055:  call   0831c2fc <_ZN11CBitManager6GetBitEiii>  ; CBitManager::GetBit(int, int, int)
08585c3e +0x05a:  mov    %al,-0x9(%ebp)
08585c41 +0x05d:  movzbl -0x9(%ebp),%edx
08585c45 +0x061:  mov    $0x7,%eax
08585c4a +0x066:  sub    -0x14(%ebp),%eax
08585c4d +0x069:  mov    %edx,%ebx
08585c4f +0x06b:  mov    %eax,%ecx
08585c51 +0x06d:  shl    %cl,%ebx
08585c53 +0x06f:  mov    %ebx,%eax
08585c55 +0x071:  mov    %al,-0x9(%ebp)
08585c58 +0x074:  mov    0x8(%ebp),%eax
08585c5b +0x077:  mov    0x4(%eax),%edx
08585c5e +0x07a:  mov    0x8(%ebp),%eax
08585c61 +0x07d:  mov    0x8(%eax),%eax
08585c64 +0x080:  sub    $0x1,%eax
08585c67 +0x083:  add    %eax,%edx
08585c69 +0x085:  movzbl -0x9(%ebp),%eax
08585c6d +0x089:  mov    %al,(%edx)
08585c6f +0x08b:  mov    -0x14(%ebp),%eax
08585c72 +0x08e:  lea    0x1(%eax),%edx
08585c75 +0x091:  mov    0x8(%ebp),%eax
08585c78 +0x094:  movl   $0x7,0xc(%esp)
08585c80 +0x09c:  mov    %edx,0x8(%esp)
08585c84 +0x0a0:  mov    -0x1c(%ebp),%edx
08585c87 +0x0a3:  mov    %edx,0x4(%esp)
08585c8b +0x0a7:  mov    %eax,(%esp)
08585c8e +0x0aa:  call   0831c2fc <_ZN11CBitManager6GetBitEiii>  ; CBitManager::GetBit(int, int, int)
08585c93 +0x0af:  mov    %al,-0x9(%ebp)
08585c96 +0x0b2:  movzbl -0x9(%ebp),%edx
08585c9a +0x0b6:  mov    -0x14(%ebp),%eax
08585c9d +0x0b9:  add    $0x1,%eax
08585ca0 +0x0bc:  mov    %edx,%ebx
08585ca2 +0x0be:  mov    %eax,%ecx
08585ca4 +0x0c0:  sar    %cl,%ebx
08585ca6 +0x0c2:  mov    %ebx,%eax
08585ca8 +0x0c4:  mov    %al,-0x9(%ebp)
08585cab +0x0c7:  mov    0x8(%ebp),%eax
08585cae +0x0ca:  mov    0x4(%eax),%edx
08585cb1 +0x0cd:  mov    0x8(%ebp),%eax
08585cb4 +0x0d0:  mov    0x8(%eax),%eax
08585cb7 +0x0d3:  sub    $0x1,%eax
08585cba +0x0d6:  add    %eax,%edx
08585cbc +0x0d8:  mov    0x8(%ebp),%eax
08585cbf +0x0db:  mov    0x4(%eax),%ecx
08585cc2 +0x0de:  mov    0x8(%ebp),%eax
08585cc5 +0x0e1:  mov    0x8(%eax),%eax
08585cc8 +0x0e4:  sub    $0x1,%eax
08585ccb +0x0e7:  lea    (%ecx,%eax,1),%eax
08585cce +0x0ea:  movzbl (%eax),%eax
08585cd1 +0x0ed:  or     -0x9(%ebp),%al
08585cd4 +0x0f0:  mov    %al,(%edx)
08585cd6 +0x0f2:  mov    0x8(%ebp),%eax
08585cd9 +0x0f5:  mov    0x4(%eax),%edx
08585cdc +0x0f8:  mov    -0x18(%ebp),%eax
08585cdf +0x0fb:  add    %eax,%edx
08585ce1 +0x0fd:  mov    0x8(%ebp),%eax
08585ce4 +0x100:  mov    0x4(%eax),%ecx
08585ce7 +0x103:  mov    0x8(%ebp),%eax
08585cea +0x106:  mov    0x8(%eax),%eax
08585ced +0x109:  sub    $0x1,%eax
08585cf0 +0x10c:  lea    (%ecx,%eax,1),%eax
08585cf3 +0x10f:  movzbl (%eax),%eax
08585cf6 +0x112:  mov    %al,(%edx)
08585cf8 +0x114:  addl   $0x1,-0x18(%ebp)
08585cfc +0x118:  cmpl   $0x0,-0x14(%ebp)
08585d00 +0x11c:  jne    08585d0b <+0x127>
08585d02 +0x11e:  movl   $0x6,-0x14(%ebp)
08585d09 +0x125:  jmp    08585d0f <+0x12b>
08585d0b +0x127:  subl   $0x1,-0x14(%ebp)
08585d0f +0x12b:  subl   $0x1,-0x1c(%ebp)
08585d13 +0x12f:  mov    -0x1c(%ebp),%eax
08585d16 +0x132:  not    %eax
08585d18 +0x134:  shr    $0x1f,%eax
08585d1b +0x137:  test   %al,%al
08585d1d +0x139:  jne    08585c1d <+0x39>
08585d23 +0x13f:  mov    $0x0,%eax
08585d28 +0x144:  add    $0x34,%esp
08585d2b +0x147:  pop    %ebx
08585d2c +0x148:  pop    %ebp
08585d2d +0x149:  ret
```

## 反编译 C

```c
// CObfuscator::Obfuscate2 @ 0x8585be4

/* CObfuscator::Obfuscate2() */

undefined4 __thiscall CObfuscator::Obfuscate2(CObfuscator *this)

{
  char cVar1;
  byte bVar2;
  int local_20;
  int local_1c;
  int local_18;
  
  local_1c = 0;
  local_18 = 6;
  local_20 = *(int *)(this + 8);
  while (local_20 = local_20 + -1, -1 < local_20) {
    cVar1 = CBitManager::GetBit((CBitManager *)this,local_20,0,local_18);
    *(char *)(*(int *)(this + 4) + *(int *)(this + 8) + -1) = cVar1 << (7U - (char)local_18 & 0x1f);
    bVar2 = CBitManager::GetBit((CBitManager *)this,local_20,local_18 + 1,7);
    *(byte *)(*(int *)(this + 4) + *(int *)(this + 8) + -1) =
         *(byte *)(*(int *)(this + 4) + *(int *)(this + 8) + -1) |
         (byte)((int)(uint)bVar2 >> ((char)local_18 + 1U & 0x1f));
    *(undefined1 *)(*(int *)(this + 4) + local_1c) =
         *(undefined1 *)(*(int *)(this + 4) + *(int *)(this + 8) + -1);
    local_1c = local_1c + 1;
    if (local_18 == 0) {
      local_18 = 6;
    }
    else {
      local_18 = local_18 + -1;
    }
  }
  return 0;
}
```
