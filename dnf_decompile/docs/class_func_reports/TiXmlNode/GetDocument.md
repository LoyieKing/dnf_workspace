# GetDocument

`_ZNK9TiXmlNode11GetDocumentEv`

`TiXmlNode::GetDocument() const`

| 类 | 地址 |
|---|---|
| `TiXmlNode` | `0x087dfed0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087dfed0  _ZNK9TiXmlNode11GetDocumentEv
#           TiXmlNode::GetDocument() const
# range [0x087dfed0, 0x087dff0f]
087dfed0 +0x00:  push   %ebp
087dfed1 +0x01:  mov    %esp,%ebp
087dfed3 +0x03:  push   %ebx
087dfed4 +0x04:  sub    $0x14,%esp
087dfed7 +0x07:  mov    0x8(%ebp),%ebx
087dfeda +0x0a:  test   %ebx,%ebx
087dfedc +0x0c:  jne    087dfee7 <+0x17>
087dfede +0x0e:  jmp    087dff08 <+0x38>
087dfee0 +0x10:  mov    0x10(%ebx),%ebx
087dfee3 +0x13:  test   %ebx,%ebx
087dfee5 +0x15:  je     087dff08 <+0x38>
087dfee7 +0x17:  mov    (%ebx),%eax
087dfee9 +0x19:  mov    %ebx,(%esp)
087dfeec +0x1c:  call   *0x10(%eax)
087dfeef +0x1f:  test   %eax,%eax
087dfef1 +0x21:  je     087dfee0 <+0x10>
087dfef3 +0x23:  mov    (%ebx),%eax
087dfef5 +0x25:  mov    %ebx,0x8(%ebp)
087dfef8 +0x28:  mov    0x10(%eax),%eax
087dfefb +0x2b:  add    $0x14,%esp
087dfefe +0x2e:  pop    %ebx
087dfeff +0x2f:  pop    %ebp
087dff00 +0x30:  jmp    *%eax
087dff02 +0x32:  lea    0x0(%esi),%esi
087dff08 +0x38:  add    $0x14,%esp
087dff0b +0x3b:  xor    %eax,%eax
087dff0d +0x3d:  pop    %ebx
087dff0e +0x3e:  pop    %ebp
087dff0f +0x3f:  ret
```

## 反编译 C

```c
// TiXmlNode::GetDocument @ 0x87dfed0

/* TiXmlNode::GetDocument() const */

undefined4 __thiscall TiXmlNode::GetDocument(TiXmlNode *this)

{
  int iVar1;
  undefined4 uVar2;
  
  while( true ) {
    if (this == (TiXmlNode *)0x0) {
      return 0;
    }
    iVar1 = (**(code **)(*(int *)this + 0x10))(this);
    if (iVar1 != 0) break;
    this = *(TiXmlNode **)(this + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x087dff00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*(int *)this + 0x10))();
  return uVar2;
}
```
