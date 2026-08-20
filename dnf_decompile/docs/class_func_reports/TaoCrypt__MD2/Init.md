# Init

`_ZN8TaoCrypt3MD24InitEv`

`TaoCrypt::MD2::Init()`

| 类 | 地址 |
|---|---|
| `TaoCrypt::MD2` | `0x08764e50` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08764e50  _ZN8TaoCrypt3MD24InitEv
#           TaoCrypt::MD2::Init()
# range [0x08764e50, 0x08764f09]
08764e50 +0x00:  push   %ebp
08764e51 +0x01:  mov    %esp,%ebp
08764e53 +0x03:  mov    0x8(%ebp),%edx
08764e56 +0x06:  push   %edi
08764e57 +0x07:  push   %esi
08764e58 +0x08:  mov    $0x30,%esi
08764e5d +0x0d:  mov    0x8(%edx),%edi
08764e60 +0x10:  test   $0x1,%edi
08764e66 +0x16:  jne    08764ee0 <+0x90>
08764e68 +0x18:  test   $0x2,%edi
08764e6e +0x1e:  jne    08764ef8 <+0xa8>
08764e74 +0x24:  mov    %esi,%ecx
08764e76 +0x26:  xor    %eax,%eax
08764e78 +0x28:  shr    $0x2,%ecx
08764e7b +0x2b:  test   $0x2,%esi
08764e81 +0x31:  rep stos %eax,%es:(%edi)
08764e83 +0x33:  je     08764e8d <+0x3d>
08764e85 +0x35:  movw   $0x0,(%edi)
08764e8a +0x3a:  add    $0x2,%edi
08764e8d +0x3d:  and    $0x1,%esi
08764e90 +0x40:  je     08764e95 <+0x45>
08764e92 +0x42:  movb   $0x0,(%edi)
08764e95 +0x45:  mov    0x14(%edx),%eax
08764e98 +0x48:  movl   $0x0,(%eax)
08764e9e +0x4e:  movl   $0x0,0x4(%eax)
08764ea5 +0x55:  movl   $0x0,0x8(%eax)
08764eac +0x5c:  movl   $0x0,0xc(%eax)
08764eb3 +0x63:  mov    0x20(%edx),%eax
08764eb6 +0x66:  movl   $0x0,(%eax)
08764ebc +0x6c:  movl   $0x0,0x4(%eax)
08764ec3 +0x73:  movl   $0x0,0x8(%eax)
08764eca +0x7a:  movl   $0x0,0xc(%eax)
08764ed1 +0x81:  movl   $0x0,0x28(%edx)
08764ed8 +0x88:  pop    %esi
08764ed9 +0x89:  pop    %edi
08764eda +0x8a:  pop    %ebp
08764edb +0x8b:  ret
08764edc +0x8c:  lea    0x0(%esi,%eiz,1),%esi
08764ee0 +0x90:  movb   $0x0,(%edi)
08764ee3 +0x93:  add    $0x1,%edi
08764ee6 +0x96:  mov    $0x2f,%si
08764eea +0x9a:  test   $0x2,%edi
08764ef0 +0xa0:  je     08764e74 <+0x24>
08764ef2 +0xa2:  lea    0x0(%esi),%esi
08764ef8 +0xa8:  movw   $0x0,(%edi)
08764efd +0xad:  sub    $0x2,%esi
08764f00 +0xb0:  add    $0x2,%edi
08764f03 +0xb3:  jmp    08764e74 <+0x24>
08764f08 +0xb8:  nop
08764f09 +0xb9:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::MD2::Init @ 0x8764e50

/* TaoCrypt::MD2::Init() */

void __thiscall TaoCrypt::MD2::Init(MD2 *this)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  bool bVar4;
  
  uVar2 = 0x30;
  puVar3 = *(undefined4 **)(this + 8);
  bVar4 = ((uint)puVar3 & 1) != 0;
  if (bVar4) {
    *(undefined1 *)puVar3 = 0;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
    uVar2 = 0x2f;
  }
  if (((uint)puVar3 & 2) != 0) {
    *(undefined2 *)puVar3 = 0;
    uVar2 = uVar2 - 2;
    puVar3 = (undefined4 *)((int)puVar3 + 2);
  }
  for (uVar1 = uVar2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  if ((uVar2 & 2) != 0) {
    *(undefined2 *)puVar3 = 0;
    puVar3 = (undefined4 *)((int)puVar3 + 2);
  }
  if (bVar4) {
    *(undefined1 *)puVar3 = 0;
  }
  puVar3 = *(undefined4 **)(this + 0x14);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3 = *(undefined4 **)(this + 0x20);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *(undefined4 *)(this + 0x28) = 0;
  return;
}
```
