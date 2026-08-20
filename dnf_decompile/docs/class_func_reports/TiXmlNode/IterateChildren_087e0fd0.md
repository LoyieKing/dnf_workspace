# IterateChildren

`_ZNK9TiXmlNode15IterateChildrenEPKcPKS_`

`TiXmlNode::IterateChildren(char const*, TiXmlNode const*) const`

| 类 | 地址 |
|---|---|
| `TiXmlNode` | `0x087e0fd0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e0fd0  _ZNK9TiXmlNode15IterateChildrenEPKcPKS_
#           TiXmlNode::IterateChildren(char const*, TiXmlNode const*) const
# range [0x087e0fd0, 0x087e104a]
087e0fd0 +0x00:  push   %ebp
087e0fd1 +0x01:  mov    %esp,%ebp
087e0fd3 +0x03:  push   %esi
087e0fd4 +0x04:  push   %ebx
087e0fd5 +0x05:  sub    $0x10,%esp
087e0fd8 +0x08:  mov    0x10(%ebp),%eax
087e0fdb +0x0b:  mov    0x8(%ebp),%edx
087e0fde +0x0e:  mov    0xc(%ebp),%esi
087e0fe1 +0x11:  test   %eax,%eax
087e0fe3 +0x13:  je     087e101b <+0x4b>
087e0fe5 +0x15:  cmp    %edx,0x10(%eax)
087e0fe8 +0x18:  jne    087e1026 <+0x56>
087e0fea +0x1a:  mov    0x28(%eax),%ebx
087e0fed +0x1d:  test   %ebx,%ebx
087e0fef +0x1f:  jne    087e0fff <+0x2f>
087e0ff1 +0x21:  jmp    087e1012 <+0x42>
087e0ff3 +0x23:  nop
087e0ff4 +0x24:  lea    0x0(%esi,%eiz,1),%esi
087e0ff8 +0x28:  mov    0x28(%ebx),%ebx
087e0ffb +0x2b:  test   %ebx,%ebx
087e0ffd +0x2d:  je     087e1012 <+0x42>
087e0fff +0x2f:  mov    0x20(%ebx),%eax
087e1002 +0x32:  mov    %esi,0x4(%esp)
087e1006 +0x36:  mov    %eax,(%esp)
087e1009 +0x39:  call   0807e4e0 <_init+0xdd8>
087e100e +0x3e:  test   %eax,%eax
087e1010 +0x40:  jne    087e0ff8 <+0x28>
087e1012 +0x42:  add    $0x10,%esp
087e1015 +0x45:  mov    %ebx,%eax
087e1017 +0x47:  pop    %ebx
087e1018 +0x48:  pop    %esi
087e1019 +0x49:  pop    %ebp
087e101a +0x4a:  ret
087e101b +0x4b:  add    $0x10,%esp
087e101e +0x4e:  pop    %ebx
087e101f +0x4f:  pop    %esi
087e1020 +0x50:  pop    %ebp
087e1021 +0x51:  jmp    087e0330 <_ZNK9TiXmlNode10FirstChildEPKc>  ; TiXmlNode::FirstChild(char const*) const
087e1026 +0x56:  movl   $&_ZZNK9TiXmlNode15IterateChildrenEPKcPKS_E19__PRETTY_FUNCTION__,0xc(%esp)
087e102e +0x5e:  movl   $0x197,0x8(%esp)
087e1036 +0x66:  movl   $"tinyxml.cpp",0x4(%esp)
087e103e +0x6e:  movl   $"previous->parent == this",(%esp)
087e1045 +0x75:  call   0807dc50 <_init+0x548>
087e104a +0x7a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// TiXmlNode::IterateChildren @ 0x87e0fd0

/* TiXmlNode::IterateChildren(char const*, TiXmlNode const*) const */

int __thiscall TiXmlNode::IterateChildren(TiXmlNode *this,char *param_1,TiXmlNode *param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == (TiXmlNode *)0x0) {
    iVar2 = FirstChild(this,param_1);
    return iVar2;
  }
  if (*(TiXmlNode **)(param_2 + 0x10) == this) {
    iVar2 = *(int *)(param_2 + 0x28);
    while ((iVar2 != 0 && (iVar1 = strcmp(*(char **)(iVar2 + 0x20),param_1), iVar1 != 0))) {
      iVar2 = *(int *)(iVar2 + 0x28);
    }
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("previous->parent == this","tinyxml.cpp",0x197,
                "const TiXmlNode* TiXmlNode::IterateChildren(const char*, const TiXmlNode*) const");
}
```
