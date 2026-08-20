# LastChild

`_ZNK9TiXmlNode9LastChildEPKc`

`TiXmlNode::LastChild(char const*) const`

| 类 | 地址 |
|---|---|
| `TiXmlNode` | `0x087e02f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e02f0  _ZNK9TiXmlNode9LastChildEPKc
#           TiXmlNode::LastChild(char const*) const
# range [0x087e02f0, 0x087e032c]
087e02f0 +0x00:  push   %ebp
087e02f1 +0x01:  mov    %esp,%ebp
087e02f3 +0x03:  push   %esi
087e02f4 +0x04:  push   %ebx
087e02f5 +0x05:  sub    $0x10,%esp
087e02f8 +0x08:  mov    0x8(%ebp),%eax
087e02fb +0x0b:  mov    0xc(%ebp),%esi
087e02fe +0x0e:  mov    0x1c(%eax),%ebx
087e0301 +0x11:  test   %ebx,%ebx
087e0303 +0x13:  jne    087e030f <+0x1f>
087e0305 +0x15:  jmp    087e0322 <+0x32>
087e0307 +0x17:  nop
087e0308 +0x18:  mov    0x24(%ebx),%ebx
087e030b +0x1b:  test   %ebx,%ebx
087e030d +0x1d:  je     087e0322 <+0x32>
087e030f +0x1f:  mov    0x20(%ebx),%eax
087e0312 +0x22:  mov    %esi,0x4(%esp)
087e0316 +0x26:  mov    %eax,(%esp)
087e0319 +0x29:  call   0807e4e0 <_init+0xdd8>
087e031e +0x2e:  test   %eax,%eax
087e0320 +0x30:  jne    087e0308 <+0x18>
087e0322 +0x32:  add    $0x10,%esp
087e0325 +0x35:  mov    %ebx,%eax
087e0327 +0x37:  pop    %ebx
087e0328 +0x38:  pop    %esi
087e0329 +0x39:  pop    %ebp
087e032a +0x3a:  ret
087e032b +0x3b:  nop
087e032c +0x3c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TiXmlNode::LastChild @ 0x87e02f0

/* TiXmlNode::LastChild(char const*) const */

int __thiscall TiXmlNode::LastChild(TiXmlNode *this,char *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(this + 0x1c);
  while ((iVar1 != 0 && (iVar2 = strcmp(*(char **)(iVar1 + 0x20),param_1), iVar2 != 0))) {
    iVar1 = *(int *)(iVar1 + 0x24);
  }
  return iVar1;
}
```
