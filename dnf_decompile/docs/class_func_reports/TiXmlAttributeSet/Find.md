# Find

`_ZNK17TiXmlAttributeSet4FindEPKc`

`TiXmlAttributeSet::Find(char const*) const`

| 类 | 地址 |
|---|---|
| `TiXmlAttributeSet` | `0x087e0220` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e0220  _ZNK17TiXmlAttributeSet4FindEPKc
#           TiXmlAttributeSet::Find(char const*) const
# range [0x087e0220, 0x087e026c]
087e0220 +0x00:  push   %ebp
087e0221 +0x01:  mov    %esp,%ebp
087e0223 +0x03:  push   %edi
087e0224 +0x04:  push   %esi
087e0225 +0x05:  push   %ebx
087e0226 +0x06:  sub    $0x1c,%esp
087e0229 +0x09:  mov    0x8(%ebp),%esi
087e022c +0x0c:  mov    0xc(%ebp),%edi
087e022f +0x0f:  mov    0x20(%esi),%ebx
087e0232 +0x12:  cmp    %esi,%ebx
087e0234 +0x14:  jne    087e023f <+0x1f>
087e0236 +0x16:  jmp    087e0260 <+0x40>
087e0238 +0x18:  mov    0x20(%ebx),%ebx
087e023b +0x1b:  cmp    %esi,%ebx
087e023d +0x1d:  je     087e0260 <+0x40>
087e023f +0x1f:  mov    0x14(%ebx),%eax
087e0242 +0x22:  mov    %edi,0x4(%esp)
087e0246 +0x26:  mov    %eax,(%esp)
087e0249 +0x29:  call   0807e4e0 <_init+0xdd8>
087e024e +0x2e:  test   %eax,%eax
087e0250 +0x30:  jne    087e0238 <+0x18>
087e0252 +0x32:  add    $0x1c,%esp
087e0255 +0x35:  mov    %ebx,%eax
087e0257 +0x37:  pop    %ebx
087e0258 +0x38:  pop    %esi
087e0259 +0x39:  pop    %edi
087e025a +0x3a:  pop    %ebp
087e025b +0x3b:  ret
087e025c +0x3c:  lea    0x0(%esi,%eiz,1),%esi
087e0260 +0x40:  xor    %ebx,%ebx
087e0262 +0x42:  add    $0x1c,%esp
087e0265 +0x45:  mov    %ebx,%eax
087e0267 +0x47:  pop    %ebx
087e0268 +0x48:  pop    %esi
087e0269 +0x49:  pop    %edi
087e026a +0x4a:  pop    %ebp
087e026b +0x4b:  ret
087e026c +0x4c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TiXmlAttributeSet::Find @ 0x87e0220

/* TiXmlAttributeSet::Find(char const*) const */

TiXmlAttributeSet * __thiscall TiXmlAttributeSet::Find(TiXmlAttributeSet *this,char *param_1)

{
  TiXmlAttributeSet *pTVar1;
  int iVar2;
  
  pTVar1 = *(TiXmlAttributeSet **)(this + 0x20);
  while( true ) {
    if (pTVar1 == this) {
      return (TiXmlAttributeSet *)0x0;
    }
    iVar2 = strcmp(*(char **)(pTVar1 + 0x14),param_1);
    if (iVar2 == 0) break;
    pTVar1 = *(TiXmlAttributeSet **)(pTVar1 + 0x20);
  }
  return pTVar1;
}
```
