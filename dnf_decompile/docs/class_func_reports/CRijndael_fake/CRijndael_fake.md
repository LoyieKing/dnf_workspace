# CRijndael_fake

`_ZN14CRijndael_fakeC1Ev`

`CRijndael_fake::CRijndael_fake()`

| 类 | 地址 |
|---|---|
| `CRijndael_fake` | `0x080b824c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080b824c  _ZN14CRijndael_fakeC1Ev
#           CRijndael_fake::CRijndael_fake()
# range [0x080b824c, 0x080b82c7]
080b824c +0x00:  push   %ebp
080b824d +0x01:  mov    %esp,%ebp
080b824f +0x03:  push   %esi
080b8250 +0x04:  push   %ebx
080b8251 +0x05:  sub    $0x20,%esp
080b8254 +0x08:  mov    0x8(%ebp),%eax
080b8257 +0x0b:  movl   $&_ZTV14CRijndael_fake+0x8,(%eax)
080b825d +0x11:  mov    0x8(%ebp),%eax
080b8260 +0x14:  movl   $0x0,0x4(%eax)
080b8267 +0x1b:  mov    0x8(%ebp),%eax
080b826a +0x1e:  movl   $0xa321bcde,0x8(%eax)
080b8271 +0x25:  mov    0x8(%ebp),%eax
080b8274 +0x28:  mov    0x8(%eax),%ebx
080b8277 +0x2b:  call   0807dca0 <_init+0x598>
080b827c +0x30:  mov    %eax,%esi
080b827e +0x32:  shl    $0x10,%esi
080b8281 +0x35:  call   0807dca0 <_init+0x598>
080b8286 +0x3a:  or     %esi,%eax
080b8288 +0x3c:  mov    %ebx,%edx
080b828a +0x3e:  xor    %eax,%edx
080b828c +0x40:  mov    0x8(%ebp),%eax
080b828f +0x43:  mov    %edx,0x8(%eax)
080b8292 +0x46:  movl   $0x268,(%esp)
080b8299 +0x4d:  call   08724450 <_Znwj>  ; operator new(unsigned int)
080b829e +0x52:  mov    %eax,-0xc(%ebp)
080b82a1 +0x55:  lea    -0xc(%ebp),%eax
080b82a4 +0x58:  mov    (%eax),%edx
080b82a6 +0x5a:  mov    0x8(%ebp),%eax
080b82a9 +0x5d:  mov    %edx,0x4(%eax)
080b82ac +0x60:  mov    0x8(%ebp),%eax
080b82af +0x63:  mov    0x4(%eax),%edx
080b82b2 +0x66:  mov    0x8(%ebp),%eax
080b82b5 +0x69:  mov    0x8(%eax),%eax
080b82b8 +0x6c:  xor    %eax,%edx
080b82ba +0x6e:  mov    0x8(%ebp),%eax
080b82bd +0x71:  mov    %edx,0x4(%eax)
080b82c0 +0x74:  add    $0x20,%esp
080b82c3 +0x77:  pop    %ebx
080b82c4 +0x78:  pop    %esi
080b82c5 +0x79:  pop    %ebp
080b82c6 +0x7a:  ret
080b82c7 +0x7b:  nop
```

## 反编译 C

```c
// CRijndael_fake::CRijndael_fake @ 0x80b824c

/* CRijndael_fake::CRijndael_fake() */

void __thiscall CRijndael_fake::CRijndael_fake(CRijndael_fake *this)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  
  *(undefined ***)this = &PTR__CRijndael_fake_08b22fa0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0xa321bcde;
  uVar1 = *(uint *)(this + 8);
  iVar2 = rand();
  uVar3 = rand();
  *(uint *)(this + 8) = uVar1 ^ (uVar3 | iVar2 << 0x10);
  pvVar4 = operator_new(0x268);
  *(void **)(this + 4) = pvVar4;
  *(uint *)(this + 4) = *(uint *)(this + 4) ^ *(uint *)(this + 8);
  return;
}
```
