# FirstChildElement

`_ZNK9TiXmlNode17FirstChildElementEv`

`TiXmlNode::FirstChildElement() const`

| 类 | 地址 |
|---|---|
| `TiXmlNode` | `0x087dfe30` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087dfe30  _ZNK9TiXmlNode17FirstChildElementEv
#           TiXmlNode::FirstChildElement() const
# range [0x087dfe30, 0x087dfe79]
087dfe30 +0x00:  push   %ebp
087dfe31 +0x01:  mov    %esp,%ebp
087dfe33 +0x03:  push   %ebx
087dfe34 +0x04:  sub    $0x14,%esp
087dfe37 +0x07:  mov    0x8(%ebp),%eax
087dfe3a +0x0a:  mov    0x18(%eax),%ebx
087dfe3d +0x0d:  test   %ebx,%ebx
087dfe3f +0x0f:  jne    087dfe4f <+0x1f>
087dfe41 +0x11:  jmp    087dfe70 <+0x40>
087dfe43 +0x13:  nop
087dfe44 +0x14:  lea    0x0(%esi,%eiz,1),%esi
087dfe48 +0x18:  mov    0x28(%ebx),%ebx
087dfe4b +0x1b:  test   %ebx,%ebx
087dfe4d +0x1d:  je     087dfe70 <+0x40>
087dfe4f +0x1f:  mov    (%ebx),%eax
087dfe51 +0x21:  mov    %ebx,(%esp)
087dfe54 +0x24:  call   *0x14(%eax)
087dfe57 +0x27:  test   %eax,%eax
087dfe59 +0x29:  je     087dfe48 <+0x18>
087dfe5b +0x2b:  mov    (%ebx),%eax
087dfe5d +0x2d:  mov    %ebx,0x8(%ebp)
087dfe60 +0x30:  mov    0x14(%eax),%eax
087dfe63 +0x33:  add    $0x14,%esp
087dfe66 +0x36:  pop    %ebx
087dfe67 +0x37:  pop    %ebp
087dfe68 +0x38:  jmp    *%eax
087dfe6a +0x3a:  lea    0x0(%esi),%esi
087dfe70 +0x40:  add    $0x14,%esp
087dfe73 +0x43:  xor    %eax,%eax
087dfe75 +0x45:  pop    %ebx
087dfe76 +0x46:  pop    %ebp
087dfe77 +0x47:  ret
087dfe78 +0x48:  nop
087dfe79 +0x49:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TiXmlNode::FirstChildElement @ 0x87dfe30

/* TiXmlNode::FirstChildElement() const */

undefined4 __thiscall TiXmlNode::FirstChildElement(TiXmlNode *this)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = *(int **)(this + 0x18);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    iVar2 = (**(code **)(*piVar1 + 0x14))(piVar1);
    if (iVar2 != 0) break;
    piVar1 = (int *)piVar1[10];
  }
                    /* WARNING: Could not recover jumptable at 0x087dfe68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*piVar1 + 0x14))();
  return uVar3;
}
```
