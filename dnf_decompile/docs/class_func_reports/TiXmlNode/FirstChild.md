# FirstChild

`_ZNK9TiXmlNode10FirstChildEPKc`

`TiXmlNode::FirstChild(char const*) const`

| 类 | 地址 |
|---|---|
| `TiXmlNode` | `0x087e0330` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e0330  _ZNK9TiXmlNode10FirstChildEPKc
#           TiXmlNode::FirstChild(char const*) const
# range [0x087e0330, 0x087e036c]
087e0330 +0x00:  push   %ebp
087e0331 +0x01:  mov    %esp,%ebp
087e0333 +0x03:  push   %esi
087e0334 +0x04:  push   %ebx
087e0335 +0x05:  sub    $0x10,%esp
087e0338 +0x08:  mov    0x8(%ebp),%eax
087e033b +0x0b:  mov    0xc(%ebp),%esi
087e033e +0x0e:  mov    0x18(%eax),%ebx
087e0341 +0x11:  test   %ebx,%ebx
087e0343 +0x13:  jne    087e034f <+0x1f>
087e0345 +0x15:  jmp    087e0362 <+0x32>
087e0347 +0x17:  nop
087e0348 +0x18:  mov    0x28(%ebx),%ebx
087e034b +0x1b:  test   %ebx,%ebx
087e034d +0x1d:  je     087e0362 <+0x32>
087e034f +0x1f:  mov    0x20(%ebx),%eax
087e0352 +0x22:  mov    %esi,0x4(%esp)
087e0356 +0x26:  mov    %eax,(%esp)
087e0359 +0x29:  call   0807e4e0 <_init+0xdd8>
087e035e +0x2e:  test   %eax,%eax
087e0360 +0x30:  jne    087e0348 <+0x18>
087e0362 +0x32:  add    $0x10,%esp
087e0365 +0x35:  mov    %ebx,%eax
087e0367 +0x37:  pop    %ebx
087e0368 +0x38:  pop    %esi
087e0369 +0x39:  pop    %ebp
087e036a +0x3a:  ret
087e036b +0x3b:  nop
087e036c +0x3c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TiXmlNode::FirstChild @ 0x87e0330

/* TiXmlNode::FirstChild(char const*) const */

int __thiscall TiXmlNode::FirstChild(TiXmlNode *this,char *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(this + 0x18);
  while ((iVar1 != 0 && (iVar2 = strcmp(*(char **)(iVar1 + 0x20),param_1), iVar2 != 0))) {
    iVar1 = *(int *)(iVar1 + 0x28);
  }
  return iVar1;
}
```
