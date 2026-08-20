# NextSiblingElement

`_ZNK9TiXmlNode18NextSiblingElementEPKc`

`TiXmlNode::NextSiblingElement(char const*) const`

| 类 | 地址 |
|---|---|
| `TiXmlNode` | `0x087e10f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e10f0  _ZNK9TiXmlNode18NextSiblingElementEPKc
#           TiXmlNode::NextSiblingElement(char const*) const
# range [0x087e10f0, 0x087e116c]
087e10f0 +0x00:  push   %ebp
087e10f1 +0x01:  mov    %esp,%ebp
087e10f3 +0x03:  push   %esi
087e10f4 +0x04:  push   %ebx
087e10f5 +0x05:  sub    $0x10,%esp
087e10f8 +0x08:  mov    0x8(%ebp),%eax
087e10fb +0x0b:  mov    0xc(%ebp),%esi
087e10fe +0x0e:  mov    0x28(%eax),%ebx
087e1101 +0x11:  test   %ebx,%ebx
087e1103 +0x13:  jne    087e110f <+0x1f>
087e1105 +0x15:  jmp    087e1152 <+0x62>
087e1107 +0x17:  nop
087e1108 +0x18:  mov    0x28(%ebx),%ebx
087e110b +0x1b:  test   %ebx,%ebx
087e110d +0x1d:  je     087e1152 <+0x62>
087e110f +0x1f:  mov    0x20(%ebx),%eax
087e1112 +0x22:  mov    %esi,0x4(%esp)
087e1116 +0x26:  mov    %eax,(%esp)
087e1119 +0x29:  call   0807e4e0 <_init+0xdd8>
087e111e +0x2e:  test   %eax,%eax
087e1120 +0x30:  jne    087e1108 <+0x18>
087e1122 +0x32:  lea    0x0(%esi),%esi
087e1128 +0x38:  mov    (%ebx),%eax
087e112a +0x3a:  mov    %ebx,(%esp)
087e112d +0x3d:  call   *0x14(%eax)
087e1130 +0x40:  test   %eax,%eax
087e1132 +0x42:  je     087e114b <+0x5b>
087e1134 +0x44:  jmp    087e115b <+0x6b>
087e1136 +0x46:  xchg   %ax,%ax
087e1138 +0x48:  mov    0x20(%ebx),%eax
087e113b +0x4b:  mov    %esi,0x4(%esp)
087e113f +0x4f:  mov    %eax,(%esp)
087e1142 +0x52:  call   0807e4e0 <_init+0xdd8>
087e1147 +0x57:  test   %eax,%eax
087e1149 +0x59:  je     087e1128 <+0x38>
087e114b +0x5b:  mov    0x28(%ebx),%ebx
087e114e +0x5e:  test   %ebx,%ebx
087e1150 +0x60:  jne    087e1138 <+0x48>
087e1152 +0x62:  add    $0x10,%esp
087e1155 +0x65:  xor    %eax,%eax
087e1157 +0x67:  pop    %ebx
087e1158 +0x68:  pop    %esi
087e1159 +0x69:  pop    %ebp
087e115a +0x6a:  ret
087e115b +0x6b:  mov    (%ebx),%eax
087e115d +0x6d:  mov    %ebx,0x8(%ebp)
087e1160 +0x70:  mov    0x14(%eax),%eax
087e1163 +0x73:  add    $0x10,%esp
087e1166 +0x76:  pop    %ebx
087e1167 +0x77:  pop    %esi
087e1168 +0x78:  pop    %ebp
087e1169 +0x79:  jmp    *%eax
087e116b +0x7b:  nop
087e116c +0x7c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TiXmlNode::NextSiblingElement @ 0x87e10f0

/* TiXmlNode::NextSiblingElement(char const*) const */

undefined4 __thiscall TiXmlNode::NextSiblingElement(TiXmlNode *this,char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  piVar3 = *(int **)(this + 0x28);
  while( true ) {
    if (piVar3 == (int *)0x0) {
      return 0;
    }
    iVar1 = strcmp((char *)piVar3[8],param_1);
    if (iVar1 == 0) break;
    piVar3 = (int *)piVar3[10];
  }
  do {
    iVar1 = (**(code **)(*piVar3 + 0x14))(piVar3);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x087e1169. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*piVar3 + 0x14))();
      return uVar2;
    }
    do {
      piVar3 = (int *)piVar3[10];
      if (piVar3 == (int *)0x0) {
        return 0;
      }
      iVar1 = strcmp((char *)piVar3[8],param_1);
    } while (iVar1 != 0);
  } while( true );
}
```
