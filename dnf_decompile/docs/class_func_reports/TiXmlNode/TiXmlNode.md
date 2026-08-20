# TiXmlNode

`_ZN9TiXmlNodeC1ENS_8NodeTypeE`

`TiXmlNode::TiXmlNode(TiXmlNode::NodeType)`

| 类 | 地址 |
|---|---|
| `TiXmlNode` | `0x087dfd90` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087dfd90  _ZN9TiXmlNodeC1ENS_8NodeTypeE
#           TiXmlNode::TiXmlNode(TiXmlNode::NodeType)
# range [0x087dfd90, 0x087dfdea]
087dfd90 +0x00:  push   %ebp
087dfd91 +0x01:  mov    %esp,%ebp
087dfd93 +0x03:  mov    0x8(%ebp),%eax
087dfd96 +0x06:  mov    0xc(%ebp),%edx
087dfd99 +0x09:  movl   $0xffffffff,0x8(%eax)
087dfda0 +0x10:  movl   $0xffffffff,0x4(%eax)
087dfda7 +0x17:  movl   $0x0,0xc(%eax)
087dfdae +0x1e:  movl   $&_ZTV9TiXmlNode+0x8,(%eax)
087dfdb4 +0x24:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,0x20(%eax)
087dfdbb +0x2b:  movl   $0x0,0x10(%eax)
087dfdc2 +0x32:  mov    %edx,0x14(%eax)
087dfdc5 +0x35:  movl   $0x0,0x18(%eax)
087dfdcc +0x3c:  movl   $0x0,0x1c(%eax)
087dfdd3 +0x43:  movl   $0x0,0x24(%eax)
087dfdda +0x4a:  movl   $0x0,0x28(%eax)
087dfde1 +0x51:  pop    %ebp
087dfde2 +0x52:  ret
087dfde3 +0x53:  nop
087dfde4 +0x54:  lea    0x0(%esi),%esi
087dfdea +0x5a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// TiXmlNode::TiXmlNode @ 0x87dfd90

/* TiXmlNode::TiXmlNode(TiXmlNode::NodeType) */

void __thiscall TiXmlNode::TiXmlNode(TiXmlNode *this,undefined4 param_2)

{
  *(undefined4 *)(this + 8) = 0xffffffff;
  *(undefined4 *)(this + 4) = 0xffffffff;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined ***)this = &PTR__TiXmlNode_08de1288;
  *(undefined1 **)(this + 0x20) = &DAT_0948ccfc;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = param_2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  return;
}
```
