# TiXmlElement

`_ZN12TiXmlElementC1ERKS_`

`TiXmlElement::TiXmlElement(TiXmlElement const&)`

| 类 | 地址 |
|---|---|
| `TiXmlElement` | `0x087e3ee0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e3ee0  _ZN12TiXmlElementC1ERKS_
#           TiXmlElement::TiXmlElement(TiXmlElement const&)
# range [0x087e3ee0, 0x087e3fa9]
087e3ee0 +0x00:  push   %ebp
087e3ee1 +0x01:  mov    %esp,%ebp
087e3ee3 +0x03:  push   %esi
087e3ee4 +0x04:  push   %ebx
087e3ee5 +0x05:  sub    $0x20,%esp
087e3ee8 +0x08:  mov    0x8(%ebp),%ebx
087e3eeb +0x0b:  mov    0xc(%ebp),%eax
087e3eee +0x0e:  lea    0x2c(%ebx),%esi
087e3ef1 +0x11:  movl   $0xffffffff,0x8(%ebx)
087e3ef8 +0x18:  movl   $0xffffffff,0x4(%ebx)
087e3eff +0x1f:  movl   $0x0,0xc(%ebx)
087e3f06 +0x26:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,0x20(%ebx)
087e3f0d +0x2d:  movl   $0x0,0x10(%ebx)
087e3f14 +0x34:  movl   $0x1,0x14(%ebx)
087e3f1b +0x3b:  movl   $0x0,0x24(%ebx)
087e3f22 +0x42:  movl   $0x0,0x28(%ebx)
087e3f29 +0x49:  movl   $&_ZTV12TiXmlElement+0x8,(%ebx)
087e3f2f +0x4f:  movl   $0xffffffff,0x34(%ebx)
087e3f36 +0x56:  movl   $0xffffffff,0x30(%ebx)
087e3f3d +0x5d:  movl   $0x0,0x38(%ebx)
087e3f44 +0x64:  movl   $&_ZTV14TiXmlAttribute+0x8,0x2c(%ebx)
087e3f4b +0x6b:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,0x40(%ebx)
087e3f52 +0x72:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,0x44(%ebx)
087e3f59 +0x79:  movl   $0x0,0x3c(%ebx)
087e3f60 +0x80:  mov    %esi,0x4c(%ebx)
087e3f63 +0x83:  mov    %esi,0x48(%ebx)
087e3f66 +0x86:  movl   $0x0,0x1c(%ebx)
087e3f6d +0x8d:  movl   $0x0,0x18(%ebx)
087e3f74 +0x94:  mov    %ebx,0x4(%esp)
087e3f78 +0x98:  mov    %eax,(%esp)
087e3f7b +0x9b:  call   087e3c20 <_ZNK12TiXmlElement6CopyToEPS_>  ; TiXmlElement::CopyTo(TiXmlElement*) const
087e3f80 +0xa0:  add    $0x20,%esp
087e3f83 +0xa3:  pop    %ebx
087e3f84 +0xa4:  pop    %esi
087e3f85 +0xa5:  pop    %ebp
087e3f86 +0xa6:  ret
087e3f87 +0xa7:  mov    %eax,-0xc(%ebp)
087e3f8a +0xaa:  mov    %esi,(%esp)
087e3f8d +0xad:  call   087e1cd0 <_ZN17TiXmlAttributeSetD1Ev>  ; TiXmlAttributeSet::~TiXmlAttributeSet()
087e3f92 +0xb2:  mov    %ebx,(%esp)
087e3f95 +0xb5:  call   087e2b70 <_ZN9TiXmlNodeD1Ev>  ; TiXmlNode::~TiXmlNode()
087e3f9a +0xba:  mov    -0xc(%ebp),%eax
087e3f9d +0xbd:  mov    %eax,(%esp)
087e3fa0 +0xc0:  call   08ae3750 <_Unwind_Resume>
087e3fa5 +0xc5:  nop
087e3fa6 +0xc6:  lea    0x0(%esi),%esi
087e3fa9 +0xc9:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TiXmlElement::TiXmlElement @ 0x87e3ee0

/* TiXmlElement::TiXmlElement(TiXmlElement const&) */

void __thiscall TiXmlElement::TiXmlElement(TiXmlElement *this,TiXmlElement *param_1)

{
  *(undefined4 *)(this + 8) = 0xffffffff;
  *(undefined4 *)(this + 4) = 0xffffffff;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined1 **)(this + 0x20) = &DAT_0948ccfc;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 1;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined ***)this = &PTR__TiXmlElement_08de1228;
  *(undefined4 *)(this + 0x34) = 0xffffffff;
  *(undefined4 *)(this + 0x30) = 0xffffffff;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined ***)(this + 0x2c) = &PTR__TiXmlAttribute_08de2028;
  *(undefined1 **)(this + 0x40) = &DAT_0948ccfc;
  *(undefined1 **)(this + 0x44) = &DAT_0948ccfc;
  *(undefined4 *)(this + 0x3c) = 0;
  *(TiXmlElement **)(this + 0x4c) = this + 0x2c;
  *(TiXmlElement **)(this + 0x48) = this + 0x2c;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x18) = 0;
                    /* try { // try from 087e3f7b to 087e3f7f has its CatchHandler @ 087e3f87 */
  CopyTo(param_1,this);
  return;
}
```
