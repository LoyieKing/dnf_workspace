# FirstChildElement

`_ZNK9TiXmlNode17FirstChildElementEPKc`

`TiXmlNode::FirstChildElement(char const*) const`

| 类 | 地址 |
|---|---|
| `TiXmlNode` | `0x087e0f50` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e0f50  _ZNK9TiXmlNode17FirstChildElementEPKc
#           TiXmlNode::FirstChildElement(char const*) const
# range [0x087e0f50, 0x087e0fcc]
087e0f50 +0x00:  push   %ebp
087e0f51 +0x01:  mov    %esp,%ebp
087e0f53 +0x03:  push   %esi
087e0f54 +0x04:  push   %ebx
087e0f55 +0x05:  sub    $0x10,%esp
087e0f58 +0x08:  mov    0x8(%ebp),%eax
087e0f5b +0x0b:  mov    0xc(%ebp),%esi
087e0f5e +0x0e:  mov    0x18(%eax),%ebx
087e0f61 +0x11:  test   %ebx,%ebx
087e0f63 +0x13:  jne    087e0f6f <+0x1f>
087e0f65 +0x15:  jmp    087e0fb2 <+0x62>
087e0f67 +0x17:  nop
087e0f68 +0x18:  mov    0x28(%ebx),%ebx
087e0f6b +0x1b:  test   %ebx,%ebx
087e0f6d +0x1d:  je     087e0fb2 <+0x62>
087e0f6f +0x1f:  mov    0x20(%ebx),%eax
087e0f72 +0x22:  mov    %esi,0x4(%esp)
087e0f76 +0x26:  mov    %eax,(%esp)
087e0f79 +0x29:  call   0807e4e0 <_init+0xdd8>
087e0f7e +0x2e:  test   %eax,%eax
087e0f80 +0x30:  jne    087e0f68 <+0x18>
087e0f82 +0x32:  lea    0x0(%esi),%esi
087e0f88 +0x38:  mov    (%ebx),%eax
087e0f8a +0x3a:  mov    %ebx,(%esp)
087e0f8d +0x3d:  call   *0x14(%eax)
087e0f90 +0x40:  test   %eax,%eax
087e0f92 +0x42:  je     087e0fab <+0x5b>
087e0f94 +0x44:  jmp    087e0fbb <+0x6b>
087e0f96 +0x46:  xchg   %ax,%ax
087e0f98 +0x48:  mov    0x20(%ebx),%eax
087e0f9b +0x4b:  mov    %esi,0x4(%esp)
087e0f9f +0x4f:  mov    %eax,(%esp)
087e0fa2 +0x52:  call   0807e4e0 <_init+0xdd8>
087e0fa7 +0x57:  test   %eax,%eax
087e0fa9 +0x59:  je     087e0f88 <+0x38>
087e0fab +0x5b:  mov    0x28(%ebx),%ebx
087e0fae +0x5e:  test   %ebx,%ebx
087e0fb0 +0x60:  jne    087e0f98 <+0x48>
087e0fb2 +0x62:  add    $0x10,%esp
087e0fb5 +0x65:  xor    %eax,%eax
087e0fb7 +0x67:  pop    %ebx
087e0fb8 +0x68:  pop    %esi
087e0fb9 +0x69:  pop    %ebp
087e0fba +0x6a:  ret
087e0fbb +0x6b:  mov    (%ebx),%eax
087e0fbd +0x6d:  mov    %ebx,0x8(%ebp)
087e0fc0 +0x70:  mov    0x14(%eax),%eax
087e0fc3 +0x73:  add    $0x10,%esp
087e0fc6 +0x76:  pop    %ebx
087e0fc7 +0x77:  pop    %esi
087e0fc8 +0x78:  pop    %ebp
087e0fc9 +0x79:  jmp    *%eax
087e0fcb +0x7b:  nop
087e0fcc +0x7c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TiXmlNode::FirstChildElement @ 0x87e0f50

/* TiXmlNode::FirstChildElement(char const*) const */

undefined4 __thiscall TiXmlNode::FirstChildElement(TiXmlNode *this,char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  piVar3 = *(int **)(this + 0x18);
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
                    /* WARNING: Could not recover jumptable at 0x087e0fc9. Too many branches */
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
