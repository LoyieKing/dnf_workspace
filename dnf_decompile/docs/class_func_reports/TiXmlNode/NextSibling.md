# NextSibling

`_ZNK9TiXmlNode11NextSiblingEPKc`

`TiXmlNode::NextSibling(char const*) const`

| 类 | 地址 |
|---|---|
| `TiXmlNode` | `0x087e02b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e02b0  _ZNK9TiXmlNode11NextSiblingEPKc
#           TiXmlNode::NextSibling(char const*) const
# range [0x087e02b0, 0x087e02ec]
087e02b0 +0x00:  push   %ebp
087e02b1 +0x01:  mov    %esp,%ebp
087e02b3 +0x03:  push   %esi
087e02b4 +0x04:  push   %ebx
087e02b5 +0x05:  sub    $0x10,%esp
087e02b8 +0x08:  mov    0x8(%ebp),%eax
087e02bb +0x0b:  mov    0xc(%ebp),%esi
087e02be +0x0e:  mov    0x28(%eax),%ebx
087e02c1 +0x11:  test   %ebx,%ebx
087e02c3 +0x13:  jne    087e02cf <+0x1f>
087e02c5 +0x15:  jmp    087e02e2 <+0x32>
087e02c7 +0x17:  nop
087e02c8 +0x18:  mov    0x28(%ebx),%ebx
087e02cb +0x1b:  test   %ebx,%ebx
087e02cd +0x1d:  je     087e02e2 <+0x32>
087e02cf +0x1f:  mov    0x20(%ebx),%eax
087e02d2 +0x22:  mov    %esi,0x4(%esp)
087e02d6 +0x26:  mov    %eax,(%esp)
087e02d9 +0x29:  call   0807e4e0 <_init+0xdd8>
087e02de +0x2e:  test   %eax,%eax
087e02e0 +0x30:  jne    087e02c8 <+0x18>
087e02e2 +0x32:  add    $0x10,%esp
087e02e5 +0x35:  mov    %ebx,%eax
087e02e7 +0x37:  pop    %ebx
087e02e8 +0x38:  pop    %esi
087e02e9 +0x39:  pop    %ebp
087e02ea +0x3a:  ret
087e02eb +0x3b:  nop
087e02ec +0x3c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TiXmlNode::NextSibling @ 0x87e02b0

/* TiXmlNode::NextSibling(char const*) const */

int __thiscall TiXmlNode::NextSibling(TiXmlNode *this,char *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(this + 0x28);
  while ((iVar1 != 0 && (iVar2 = strcmp(*(char **)(iVar1 + 0x20),param_1), iVar2 != 0))) {
    iVar1 = *(int *)(iVar1 + 0x28);
  }
  return iVar1;
}
```
