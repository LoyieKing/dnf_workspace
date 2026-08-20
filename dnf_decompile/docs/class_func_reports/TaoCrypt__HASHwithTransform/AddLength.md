# AddLength

`_ZN8TaoCrypt17HASHwithTransform9AddLengthEj`

`TaoCrypt::HASHwithTransform::AddLength(unsigned int)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::HASHwithTransform` | `0x08758bf0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08758bf0  _ZN8TaoCrypt17HASHwithTransform9AddLengthEj
#           TaoCrypt::HASHwithTransform::AddLength(unsigned int)
# range [0x08758bf0, 0x08758c1f]
08758bf0 +0x00:  push   %ebp
08758bf1 +0x01:  mov    %esp,%ebp
08758bf3 +0x03:  mov    0x8(%ebp),%eax
08758bf6 +0x06:  mov    0xc(%ebp),%edx
08758bf9 +0x09:  mov    0x8(%eax),%ecx
08758bfc +0x0c:  add    %ecx,%edx
08758bfe +0x0e:  cmp    %edx,%ecx
08758c00 +0x10:  mov    %edx,0x8(%eax)
08758c03 +0x13:  jbe    08758c18 <+0x28>
08758c05 +0x15:  mov    0xc(%eax),%edx
08758c08 +0x18:  add    $0x1,%edx
08758c0b +0x1b:  mov    %edx,0xc(%eax)
08758c0e +0x1e:  mov    %edx,0xc(%eax)
08758c11 +0x21:  pop    %ebp
08758c12 +0x22:  ret
08758c13 +0x23:  nop
08758c14 +0x24:  lea    0x0(%esi,%eiz,1),%esi
08758c18 +0x28:  mov    0xc(%eax),%edx
08758c1b +0x2b:  mov    %edx,0xc(%eax)
08758c1e +0x2e:  pop    %ebp
08758c1f +0x2f:  ret
```

## 反编译 C

```c
// TaoCrypt::HASHwithTransform::AddLength @ 0x8758bf0

/* TaoCrypt::HASHwithTransform::AddLength(unsigned int) */

void __thiscall TaoCrypt::HASHwithTransform::AddLength(HASHwithTransform *this,uint param_1)

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
