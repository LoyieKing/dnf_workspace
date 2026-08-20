# AddLength

`_ZN8TaoCrypt19HASH64withTransform9AddLengthEj`

`TaoCrypt::HASH64withTransform::AddLength(unsigned int)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::HASH64withTransform` | `0x08758c40` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08758c40  _ZN8TaoCrypt19HASH64withTransform9AddLengthEj
#           TaoCrypt::HASH64withTransform::AddLength(unsigned int)
# range [0x08758c40, 0x08758c6f]
08758c40 +0x00:  push   %ebp
08758c41 +0x01:  mov    %esp,%ebp
08758c43 +0x03:  mov    0x8(%ebp),%eax
08758c46 +0x06:  mov    0xc(%ebp),%edx
08758c49 +0x09:  mov    0x8(%eax),%ecx
08758c4c +0x0c:  add    %ecx,%edx
08758c4e +0x0e:  cmp    %edx,%ecx
08758c50 +0x10:  mov    %edx,0x8(%eax)
08758c53 +0x13:  jbe    08758c68 <+0x28>
08758c55 +0x15:  mov    0xc(%eax),%edx
08758c58 +0x18:  add    $0x1,%edx
08758c5b +0x1b:  mov    %edx,0xc(%eax)
08758c5e +0x1e:  mov    %edx,0xc(%eax)
08758c61 +0x21:  pop    %ebp
08758c62 +0x22:  ret
08758c63 +0x23:  nop
08758c64 +0x24:  lea    0x0(%esi,%eiz,1),%esi
08758c68 +0x28:  mov    0xc(%eax),%edx
08758c6b +0x2b:  mov    %edx,0xc(%eax)
08758c6e +0x2e:  pop    %ebp
08758c6f +0x2f:  ret
```

## 反编译 C

```c
// TaoCrypt::HASH64withTransform::AddLength @ 0x8758c40

/* TaoCrypt::HASH64withTransform::AddLength(unsigned int) */

void __thiscall TaoCrypt::HASH64withTransform::AddLength(HASH64withTransform *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(this + 8);
  uVar3 = param_1 + uVar1;
  *(uint *)(this + 8) = uVar3;
  if (uVar3 < uVar1) {
    iVar2 = *(int *)(this + 0xc);
    *(int *)(this + 0xc) = iVar2 + 1;
    *(int *)(this + 0xc) = iVar2 + 1;
    return;
  }
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(this + 0xc);
  return;
}
```
