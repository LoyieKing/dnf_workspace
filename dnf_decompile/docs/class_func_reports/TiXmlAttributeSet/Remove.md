# Remove

`_ZN17TiXmlAttributeSet6RemoveEP14TiXmlAttribute`

`TiXmlAttributeSet::Remove(TiXmlAttribute*)`

| 类 | 地址 |
|---|---|
| `TiXmlAttributeSet` | `0x087e03c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e03c0  _ZN17TiXmlAttributeSet6RemoveEP14TiXmlAttribute
#           TiXmlAttributeSet::Remove(TiXmlAttribute*)
# range [0x087e03c0, 0x087e0429]
087e03c0 +0x00:  push   %ebp
087e03c1 +0x01:  mov    %esp,%ebp
087e03c3 +0x03:  sub    $0x18,%esp
087e03c6 +0x06:  mov    0x8(%ebp),%ecx
087e03c9 +0x09:  mov    0xc(%ebp),%edx
087e03cc +0x0c:  mov    0x20(%ecx),%eax
087e03cf +0x0f:  cmp    %ecx,%eax
087e03d1 +0x11:  je     087e0402 <+0x42>
087e03d3 +0x13:  cmp    %edx,%eax
087e03d5 +0x15:  je     087e03e3 <+0x23>
087e03d7 +0x17:  nop
087e03d8 +0x18:  mov    0x20(%eax),%eax
087e03db +0x1b:  cmp    %ecx,%eax
087e03dd +0x1d:  je     087e0402 <+0x42>
087e03df +0x1f:  cmp    %eax,%edx
087e03e1 +0x21:  jne    087e03d8 <+0x18>
087e03e3 +0x23:  mov    0x1c(%edx),%eax
087e03e6 +0x26:  mov    0x20(%edx),%ecx
087e03e9 +0x29:  mov    %ecx,0x20(%eax)
087e03ec +0x2c:  mov    0x20(%edx),%ecx
087e03ef +0x2f:  movl   $0x0,0x20(%edx)
087e03f6 +0x36:  mov    %eax,0x1c(%ecx)
087e03f9 +0x39:  movl   $0x0,0x1c(%edx)
087e0400 +0x40:  leave
087e0401 +0x41:  ret
087e0402 +0x42:  movl   $&_ZZN17TiXmlAttributeSet6RemoveEP14TiXmlAttributeE19__PRETTY_FUNCTION__,0xc(%esp)
087e040a +0x4a:  movl   $0x608,0x8(%esp)
087e0412 +0x52:  movl   $"tinyxml.cpp",0x4(%esp)
087e041a +0x5a:  movl   $"0",(%esp)
087e0421 +0x61:  call   0807dc50 <_init+0x548>
087e0426 +0x66:  lea    0x0(%esi),%esi
087e0429 +0x69:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TiXmlAttributeSet::Remove @ 0x87e03c0

/* TiXmlAttributeSet::Remove(TiXmlAttribute*) */

void __thiscall TiXmlAttributeSet::Remove(TiXmlAttributeSet *this,TiXmlAttribute *param_1)

{
  TiXmlAttributeSet *pTVar1;
  int iVar2;
  int iVar3;
  
  pTVar1 = *(TiXmlAttributeSet **)(this + 0x20);
  while( true ) {
    if (pTVar1 == this) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("0","tinyxml.cpp",0x608,"void TiXmlAttributeSet::Remove(TiXmlAttribute*)");
    }
    if (pTVar1 == (TiXmlAttributeSet *)param_1) break;
    pTVar1 = *(TiXmlAttributeSet **)(pTVar1 + 0x20);
  }
  iVar2 = *(int *)(param_1 + 0x1c);
  *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)(param_1 + 0x20);
  iVar3 = *(int *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(int *)(iVar3 + 0x1c) = iVar2;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}
```
