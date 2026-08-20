# IterateChildren

`_ZNK9TiXmlNode15IterateChildrenEPKS_`

`TiXmlNode::IterateChildren(TiXmlNode const*) const`

| 类 | 地址 |
|---|---|
| `TiXmlNode` | `0x087e0430` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e0430  _ZNK9TiXmlNode15IterateChildrenEPKS_
#           TiXmlNode::IterateChildren(TiXmlNode const*) const
# range [0x087e0430, 0x087e047a]
087e0430 +0x00:  push   %ebp
087e0431 +0x01:  mov    %esp,%ebp
087e0433 +0x03:  sub    $0x18,%esp
087e0436 +0x06:  mov    0xc(%ebp),%eax
087e0439 +0x09:  mov    0x8(%ebp),%edx
087e043c +0x0c:  test   %eax,%eax
087e043e +0x0e:  je     087e0450 <+0x20>
087e0440 +0x10:  cmp    %edx,0x10(%eax)
087e0443 +0x13:  jne    087e0455 <+0x25>
087e0445 +0x15:  mov    0x28(%eax),%eax
087e0448 +0x18:  leave
087e0449 +0x19:  ret
087e044a +0x1a:  lea    0x0(%esi),%esi
087e0450 +0x20:  mov    0x18(%edx),%eax
087e0453 +0x23:  leave
087e0454 +0x24:  ret
087e0455 +0x25:  movl   $&_ZZNK9TiXmlNode15IterateChildrenEPKS_E19__PRETTY_FUNCTION__,0xc(%esp)
087e045d +0x2d:  movl   $0x189,0x8(%esp)
087e0465 +0x35:  movl   $"tinyxml.cpp",0x4(%esp)
087e046d +0x3d:  movl   $"previous->parent == this",(%esp)
087e0474 +0x44:  call   0807dc50 <_init+0x548>
087e0479 +0x49:  nop
087e047a +0x4a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// TiXmlNode::IterateChildren @ 0x87e0430

/* TiXmlNode::IterateChildren(TiXmlNode const*) const */

undefined4 __thiscall TiXmlNode::IterateChildren(TiXmlNode *this,TiXmlNode *param_1)

{
  if (param_1 == (TiXmlNode *)0x0) {
    return *(undefined4 *)(this + 0x18);
  }
  if (*(TiXmlNode **)(param_1 + 0x10) == this) {
    return *(undefined4 *)(param_1 + 0x28);
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("previous->parent == this","tinyxml.cpp",0x189,
                "const TiXmlNode* TiXmlNode::IterateChildren(const TiXmlNode*) const");
}
```
