# NextSiblingElement

`_ZNK9TiXmlNode18NextSiblingElementEv`

`TiXmlNode::NextSiblingElement() const`

| 类 | 地址 |
|---|---|
| `TiXmlNode` | `0x087dfe80` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087dfe80  _ZNK9TiXmlNode18NextSiblingElementEv
#           TiXmlNode::NextSiblingElement() const
# range [0x087dfe80, 0x087dfec9]
087dfe80 +0x00:  push   %ebp
087dfe81 +0x01:  mov    %esp,%ebp
087dfe83 +0x03:  push   %ebx
087dfe84 +0x04:  sub    $0x14,%esp
087dfe87 +0x07:  mov    0x8(%ebp),%eax
087dfe8a +0x0a:  mov    0x28(%eax),%ebx
087dfe8d +0x0d:  test   %ebx,%ebx
087dfe8f +0x0f:  jne    087dfe9f <+0x1f>
087dfe91 +0x11:  jmp    087dfec0 <+0x40>
087dfe93 +0x13:  nop
087dfe94 +0x14:  lea    0x0(%esi,%eiz,1),%esi
087dfe98 +0x18:  mov    0x28(%ebx),%ebx
087dfe9b +0x1b:  test   %ebx,%ebx
087dfe9d +0x1d:  je     087dfec0 <+0x40>
087dfe9f +0x1f:  mov    (%ebx),%eax
087dfea1 +0x21:  mov    %ebx,(%esp)
087dfea4 +0x24:  call   *0x14(%eax)
087dfea7 +0x27:  test   %eax,%eax
087dfea9 +0x29:  je     087dfe98 <+0x18>
087dfeab +0x2b:  mov    (%ebx),%eax
087dfead +0x2d:  mov    %ebx,0x8(%ebp)
087dfeb0 +0x30:  mov    0x14(%eax),%eax
087dfeb3 +0x33:  add    $0x14,%esp
087dfeb6 +0x36:  pop    %ebx
087dfeb7 +0x37:  pop    %ebp
087dfeb8 +0x38:  jmp    *%eax
087dfeba +0x3a:  lea    0x0(%esi),%esi
087dfec0 +0x40:  add    $0x14,%esp
087dfec3 +0x43:  xor    %eax,%eax
087dfec5 +0x45:  pop    %ebx
087dfec6 +0x46:  pop    %ebp
087dfec7 +0x47:  ret
087dfec8 +0x48:  nop
087dfec9 +0x49:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TiXmlNode::NextSiblingElement @ 0x87dfe80

/* TiXmlNode::NextSiblingElement() const */

undefined4 __thiscall TiXmlNode::NextSiblingElement(TiXmlNode *this)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = *(int **)(this + 0x28);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    iVar2 = (**(code **)(*piVar1 + 0x14))(piVar1);
    if (iVar2 != 0) break;
    piVar1 = (int *)piVar1[10];
  }
                    /* WARNING: Could not recover jumptable at 0x087dfeb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*piVar1 + 0x14))();
  return uVar3;
}
```
