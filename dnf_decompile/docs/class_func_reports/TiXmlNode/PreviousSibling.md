# PreviousSibling

`_ZNK9TiXmlNode15PreviousSiblingEPKc`

`TiXmlNode::PreviousSibling(char const*) const`

| 类 | 地址 |
|---|---|
| `TiXmlNode` | `0x087e0270` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e0270  _ZNK9TiXmlNode15PreviousSiblingEPKc
#           TiXmlNode::PreviousSibling(char const*) const
# range [0x087e0270, 0x087e02ac]
087e0270 +0x00:  push   %ebp
087e0271 +0x01:  mov    %esp,%ebp
087e0273 +0x03:  push   %esi
087e0274 +0x04:  push   %ebx
087e0275 +0x05:  sub    $0x10,%esp
087e0278 +0x08:  mov    0x8(%ebp),%eax
087e027b +0x0b:  mov    0xc(%ebp),%esi
087e027e +0x0e:  mov    0x24(%eax),%ebx
087e0281 +0x11:  test   %ebx,%ebx
087e0283 +0x13:  jne    087e028f <+0x1f>
087e0285 +0x15:  jmp    087e02a2 <+0x32>
087e0287 +0x17:  nop
087e0288 +0x18:  mov    0x24(%ebx),%ebx
087e028b +0x1b:  test   %ebx,%ebx
087e028d +0x1d:  je     087e02a2 <+0x32>
087e028f +0x1f:  mov    0x20(%ebx),%eax
087e0292 +0x22:  mov    %esi,0x4(%esp)
087e0296 +0x26:  mov    %eax,(%esp)
087e0299 +0x29:  call   0807e4e0 <_init+0xdd8>
087e029e +0x2e:  test   %eax,%eax
087e02a0 +0x30:  jne    087e0288 <+0x18>
087e02a2 +0x32:  add    $0x10,%esp
087e02a5 +0x35:  mov    %ebx,%eax
087e02a7 +0x37:  pop    %ebx
087e02a8 +0x38:  pop    %esi
087e02a9 +0x39:  pop    %ebp
087e02aa +0x3a:  ret
087e02ab +0x3b:  nop
087e02ac +0x3c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TiXmlNode::PreviousSibling @ 0x87e0270

/* TiXmlNode::PreviousSibling(char const*) const */

int __thiscall TiXmlNode::PreviousSibling(TiXmlNode *this,char *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(this + 0x24);
  while ((iVar1 != 0 && (iVar2 = strcmp(*(char **)(iVar1 + 0x20),param_1), iVar2 != 0))) {
    iVar1 = *(int *)(iVar1 + 0x24);
  }
  return iVar1;
}
```
