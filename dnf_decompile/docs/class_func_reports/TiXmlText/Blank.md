# Blank

`_ZNK9TiXmlText5BlankEv`

`TiXmlText::Blank() const`

| 类 | 地址 |
|---|---|
| `TiXmlText` | `0x087e6290` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e6290  _ZNK9TiXmlText5BlankEv
#           TiXmlText::Blank() const
# range [0x087e6290, 0x087e62e9]
087e6290 +0x00:  push   %ebp
087e6291 +0x01:  mov    %esp,%ebp
087e6293 +0x03:  push   %edi
087e6294 +0x04:  push   %esi
087e6295 +0x05:  push   %ebx
087e6296 +0x06:  sub    $0x2c,%esp
087e6299 +0x09:  mov    0x8(%ebp),%eax
087e629c +0x0c:  mov    0x20(%eax),%edi
087e629f +0x0f:  mov    -0xc(%edi),%eax
087e62a2 +0x12:  test   %eax,%eax
087e62a4 +0x14:  mov    %eax,-0x1c(%ebp)
087e62a7 +0x17:  je     087e62e0 <+0x50>
087e62a9 +0x19:  xor    %esi,%esi
087e62ab +0x1b:  nop
087e62ac +0x1c:  lea    0x0(%esi,%eiz,1),%esi
087e62b0 +0x20:  movzbl (%edi,%esi,1),%ebx
087e62b4 +0x24:  movzbl %bl,%eax
087e62b7 +0x27:  mov    %eax,(%esp)
087e62ba +0x2a:  call   0807e280 <_init+0xb78>
087e62bf +0x2f:  cmp    $0xa,%bl
087e62c2 +0x32:  je     087e62d8 <+0x48>
087e62c4 +0x34:  test   %eax,%eax
087e62c6 +0x36:  jne    087e62d8 <+0x48>
087e62c8 +0x38:  cmp    $0xd,%bl
087e62cb +0x3b:  je     087e62d8 <+0x48>
087e62cd +0x3d:  add    $0x2c,%esp
087e62d0 +0x40:  pop    %ebx
087e62d1 +0x41:  pop    %esi
087e62d2 +0x42:  pop    %edi
087e62d3 +0x43:  pop    %ebp
087e62d4 +0x44:  ret
087e62d5 +0x45:  lea    0x0(%esi),%esi
087e62d8 +0x48:  add    $0x1,%esi
087e62db +0x4b:  cmp    -0x1c(%ebp),%esi
087e62de +0x4e:  jb     087e62b0 <+0x20>
087e62e0 +0x50:  mov    $0x1,%eax
087e62e5 +0x55:  jmp    087e62cd <+0x3d>
087e62e7 +0x57:  nop
087e62e8 +0x58:  nop
087e62e9 +0x59:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TiXmlText::Blank @ 0x87e6290

/* TiXmlText::Blank() const */

undefined4 __thiscall TiXmlText::Blank(TiXmlText *this)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  iVar2 = *(int *)(this + 0x20);
  uVar3 = *(uint *)(iVar2 + -0xc);
  if (uVar3 != 0) {
    uVar5 = 0;
    do {
      bVar1 = *(byte *)(iVar2 + uVar5);
      iVar4 = isspace((uint)bVar1);
      if (((bVar1 != 10) && (iVar4 == 0)) && (bVar1 != 0xd)) {
        return 0;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  return 1;
}
```
