# InsertBeforeChild

`_ZN9TiXmlNode17InsertBeforeChildEPS_RKS_`

`TiXmlNode::InsertBeforeChild(TiXmlNode*, TiXmlNode const&)`

| 类 | 地址 |
|---|---|
| `TiXmlNode` | `0x087e0b80` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e0b80  _ZN9TiXmlNode17InsertBeforeChildEPS_RKS_
#           TiXmlNode::InsertBeforeChild(TiXmlNode*, TiXmlNode const&)
# range [0x087e0b80, 0x087e0c59]
087e0b80 +0x00:  push   %ebp
087e0b81 +0x01:  mov    %esp,%ebp
087e0b83 +0x03:  sub    $0x28,%esp
087e0b86 +0x06:  mov    %ebx,-0x8(%ebp)
087e0b89 +0x09:  mov    0xc(%ebp),%ebx
087e0b8c +0x0c:  mov    %esi,-0x4(%ebp)
087e0b8f +0x0f:  mov    0x10(%ebp),%eax
087e0b92 +0x12:  test   %ebx,%ebx
087e0b94 +0x14:  jne    087e0ba8 <+0x28>
087e0b96 +0x16:  xor    %eax,%eax
087e0b98 +0x18:  mov    -0x8(%ebp),%ebx
087e0b9b +0x1b:  mov    -0x4(%ebp),%esi
087e0b9e +0x1e:  mov    %ebp,%esp
087e0ba0 +0x20:  pop    %ebp
087e0ba1 +0x21:  ret
087e0ba2 +0x22:  lea    0x0(%esi),%esi
087e0ba8 +0x28:  mov    0x10(%ebx),%esi
087e0bab +0x2b:  cmp    0x8(%ebp),%esi
087e0bae +0x2e:  jne    087e0b96 <+0x16>
087e0bb0 +0x30:  mov    0x14(%eax),%edx
087e0bb3 +0x33:  test   %edx,%edx
087e0bb5 +0x35:  je     087e0be0 <+0x60>
087e0bb7 +0x37:  mov    (%eax),%edx
087e0bb9 +0x39:  mov    %eax,(%esp)
087e0bbc +0x3c:  call   *0x40(%edx)
087e0bbf +0x3f:  test   %eax,%eax
087e0bc1 +0x41:  je     087e0b98 <+0x18>
087e0bc3 +0x43:  mov    0x24(%ebx),%edx
087e0bc6 +0x46:  mov    %esi,0x10(%eax)
087e0bc9 +0x49:  mov    %ebx,0x28(%eax)
087e0bcc +0x4c:  mov    %edx,0x24(%eax)
087e0bcf +0x4f:  mov    0x24(%ebx),%edx
087e0bd2 +0x52:  test   %edx,%edx
087e0bd4 +0x54:  je     087e0c23 <+0xa3>
087e0bd6 +0x56:  mov    %eax,0x28(%edx)
087e0bd9 +0x59:  mov    %eax,0x24(%ebx)
087e0bdc +0x5c:  jmp    087e0b98 <+0x18>
087e0bde +0x5e:  xchg   %ax,%ax
087e0be0 +0x60:  mov    %esi,(%esp)
087e0be3 +0x63:  call   087dfed0 <_ZNK9TiXmlNode11GetDocumentEv>  ; TiXmlNode::GetDocument() const
087e0be8 +0x68:  test   %eax,%eax
087e0bea +0x6a:  je     087e0b96 <+0x16>
087e0bec +0x6c:  mov    %esi,(%esp)
087e0bef +0x6f:  call   087dfed0 <_ZNK9TiXmlNode11GetDocumentEv>  ; TiXmlNode::GetDocument() const
087e0bf4 +0x74:  movl   $0x0,0x10(%esp)
087e0bfc +0x7c:  movl   $0x0,0xc(%esp)
087e0c04 +0x84:  movl   $0x0,0x8(%esp)
087e0c0c +0x8c:  movl   $0xf,0x4(%esp)
087e0c14 +0x94:  mov    %eax,(%esp)
087e0c17 +0x97:  call   087e6d30 <_ZN13TiXmlDocument8SetErrorEiPKcP16TiXmlParsingData13TiXmlEncoding>  ; TiXmlDocument::SetError(int, char const*, TiXmlParsingData*, TiXmlEncoding)
087e0c1c +0x9c:  xor    %eax,%eax
087e0c1e +0x9e:  jmp    087e0b98 <+0x18>
087e0c23 +0xa3:  cmp    %ebx,0x18(%esi)
087e0c26 +0xa6:  jne    087e0c2d <+0xad>
087e0c28 +0xa8:  mov    %eax,0x18(%esi)
087e0c2b +0xab:  jmp    087e0bd9 <+0x59>
087e0c2d +0xad:  movl   $&_ZZN9TiXmlNode17InsertBeforeChildEPS_RKS_E19__PRETTY_FUNCTION__,0xc(%esp)
087e0c35 +0xb5:  movl   $0xff,0x8(%esp)
087e0c3d +0xbd:  movl   $"tinyxml.cpp",0x4(%esp)
087e0c45 +0xc5:  movl   $"firstChild == beforeThis",(%esp)
087e0c4c +0xcc:  call   0807dc50 <_init+0x548>
087e0c51 +0xd1:  nop
087e0c52 +0xd2:  lea    0x0(%esi,%eiz,1),%esi
087e0c59 +0xd9:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TiXmlNode::InsertBeforeChild @ 0x87e0b80

/* TiXmlNode::InsertBeforeChild(TiXmlNode*, TiXmlNode const&) */

int __thiscall TiXmlNode::InsertBeforeChild(TiXmlNode *this,TiXmlNode *param_1,TiXmlNode *param_2)

{
  TiXmlNode *this_00;
  undefined4 uVar1;
  int iVar2;
  TiXmlDocument *pTVar3;
  
  if ((param_1 != (TiXmlNode *)0x0) && (this_00 = *(TiXmlNode **)(param_1 + 0x10), this_00 == this))
  {
    if (*(int *)(param_2 + 0x14) != 0) {
      iVar2 = (**(code **)(*(int *)param_2 + 0x40))(param_2);
      if (iVar2 == 0) {
        return 0;
      }
      uVar1 = *(undefined4 *)(param_1 + 0x24);
      *(TiXmlNode **)(iVar2 + 0x10) = this_00;
      *(TiXmlNode **)(iVar2 + 0x28) = param_1;
      *(undefined4 *)(iVar2 + 0x24) = uVar1;
      if (*(int *)(param_1 + 0x24) == 0) {
        if (*(TiXmlNode **)(this_00 + 0x18) != param_1) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("firstChild == beforeThis","tinyxml.cpp",0xff,
                        "TiXmlNode* TiXmlNode::InsertBeforeChild(TiXmlNode*, const TiXmlNode&)");
        }
        *(int *)(this_00 + 0x18) = iVar2;
      }
      else {
        *(int *)(*(int *)(param_1 + 0x24) + 0x28) = iVar2;
      }
      *(int *)(param_1 + 0x24) = iVar2;
      return iVar2;
    }
    iVar2 = GetDocument(this_00);
    if (iVar2 != 0) {
      pTVar3 = (TiXmlDocument *)GetDocument(this_00);
      TiXmlDocument::SetError(pTVar3,0xf,0,0,0);
      return 0;
    }
  }
  return 0;
}
```
