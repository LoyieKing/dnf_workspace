# Attribute

`_ZNK12TiXmlElement9AttributeEPKc`

`TiXmlElement::Attribute(char const*) const`

| 类 | 地址 |
|---|---|
| `TiXmlElement` | `0x087e11e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e11e0  _ZNK12TiXmlElement9AttributeEPKc
#           TiXmlElement::Attribute(char const*) const
# range [0x087e11e0, 0x087e1239]
087e11e0 +0x00:  push   %ebp
087e11e1 +0x01:  mov    %esp,%ebp
087e11e3 +0x03:  push   %edi
087e11e4 +0x04:  push   %esi
087e11e5 +0x05:  push   %ebx
087e11e6 +0x06:  sub    $0x1c,%esp
087e11e9 +0x09:  mov    0x8(%ebp),%esi
087e11ec +0x0c:  mov    0xc(%ebp),%edi
087e11ef +0x0f:  mov    0x4c(%esi),%ebx
087e11f2 +0x12:  add    $0x2c,%esi
087e11f5 +0x15:  cmp    %esi,%ebx
087e11f7 +0x17:  jne    087e1207 <+0x27>
087e11f9 +0x19:  jmp    087e1228 <+0x48>
087e11fb +0x1b:  nop
087e11fc +0x1c:  lea    0x0(%esi,%eiz,1),%esi
087e1200 +0x20:  mov    0x20(%ebx),%ebx
087e1203 +0x23:  cmp    %esi,%ebx
087e1205 +0x25:  je     087e1228 <+0x48>
087e1207 +0x27:  mov    0x14(%ebx),%eax
087e120a +0x2a:  mov    %edi,0x4(%esp)
087e120e +0x2e:  mov    %eax,(%esp)
087e1211 +0x31:  call   0807e4e0 <_init+0xdd8>
087e1216 +0x36:  test   %eax,%eax
087e1218 +0x38:  jne    087e1200 <+0x20>
087e121a +0x3a:  mov    0x18(%ebx),%eax
087e121d +0x3d:  add    $0x1c,%esp
087e1220 +0x40:  pop    %ebx
087e1221 +0x41:  pop    %esi
087e1222 +0x42:  pop    %edi
087e1223 +0x43:  pop    %ebp
087e1224 +0x44:  ret
087e1225 +0x45:  lea    0x0(%esi),%esi
087e1228 +0x48:  add    $0x1c,%esp
087e122b +0x4b:  xor    %eax,%eax
087e122d +0x4d:  pop    %ebx
087e122e +0x4e:  pop    %esi
087e122f +0x4f:  pop    %edi
087e1230 +0x50:  pop    %ebp
087e1231 +0x51:  ret
087e1232 +0x52:  lea    0x0(%esi,%eiz,1),%esi
087e1239 +0x59:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TiXmlElement::Attribute @ 0x87e11e0

/* TiXmlElement::Attribute(char const*) const */

undefined4 __thiscall TiXmlElement::Attribute(TiXmlElement *this,char *param_1)

{
  TiXmlElement *pTVar1;
  int iVar2;
  
  pTVar1 = *(TiXmlElement **)(this + 0x4c);
  while( true ) {
    if (pTVar1 == this + 0x2c) {
      return 0;
    }
    iVar2 = strcmp(*(char **)(pTVar1 + 0x14),param_1);
    if (iVar2 == 0) break;
    pTVar1 = *(TiXmlElement **)(pTVar1 + 0x20);
  }
  return *(undefined4 *)(pTVar1 + 0x18);
}
```
