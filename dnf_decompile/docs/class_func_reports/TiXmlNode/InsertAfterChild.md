# InsertAfterChild

`_ZN9TiXmlNode16InsertAfterChildEPS_RKS_`

`TiXmlNode::InsertAfterChild(TiXmlNode*, TiXmlNode const&)`

| 类 | 地址 |
|---|---|
| `TiXmlNode` | `0x087e0aa0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e0aa0  _ZN9TiXmlNode16InsertAfterChildEPS_RKS_
#           TiXmlNode::InsertAfterChild(TiXmlNode*, TiXmlNode const&)
# range [0x087e0aa0, 0x087e0b79]
087e0aa0 +0x00:  push   %ebp
087e0aa1 +0x01:  mov    %esp,%ebp
087e0aa3 +0x03:  sub    $0x28,%esp
087e0aa6 +0x06:  mov    %ebx,-0x8(%ebp)
087e0aa9 +0x09:  mov    0xc(%ebp),%ebx
087e0aac +0x0c:  mov    %esi,-0x4(%ebp)
087e0aaf +0x0f:  mov    0x10(%ebp),%eax
087e0ab2 +0x12:  test   %ebx,%ebx
087e0ab4 +0x14:  jne    087e0ac8 <+0x28>
087e0ab6 +0x16:  xor    %eax,%eax
087e0ab8 +0x18:  mov    -0x8(%ebp),%ebx
087e0abb +0x1b:  mov    -0x4(%ebp),%esi
087e0abe +0x1e:  mov    %ebp,%esp
087e0ac0 +0x20:  pop    %ebp
087e0ac1 +0x21:  ret
087e0ac2 +0x22:  lea    0x0(%esi),%esi
087e0ac8 +0x28:  mov    0x10(%ebx),%esi
087e0acb +0x2b:  cmp    0x8(%ebp),%esi
087e0ace +0x2e:  jne    087e0ab6 <+0x16>
087e0ad0 +0x30:  mov    0x14(%eax),%ecx
087e0ad3 +0x33:  test   %ecx,%ecx
087e0ad5 +0x35:  je     087e0b00 <+0x60>
087e0ad7 +0x37:  mov    (%eax),%edx
087e0ad9 +0x39:  mov    %eax,(%esp)
087e0adc +0x3c:  call   *0x40(%edx)
087e0adf +0x3f:  test   %eax,%eax
087e0ae1 +0x41:  je     087e0ab8 <+0x18>
087e0ae3 +0x43:  mov    0x28(%ebx),%edx
087e0ae6 +0x46:  mov    %esi,0x10(%eax)
087e0ae9 +0x49:  mov    %ebx,0x24(%eax)
087e0aec +0x4c:  mov    %edx,0x28(%eax)
087e0aef +0x4f:  mov    0x28(%ebx),%edx
087e0af2 +0x52:  test   %edx,%edx
087e0af4 +0x54:  je     087e0b43 <+0xa3>
087e0af6 +0x56:  mov    %eax,0x24(%edx)
087e0af9 +0x59:  mov    %eax,0x28(%ebx)
087e0afc +0x5c:  jmp    087e0ab8 <+0x18>
087e0afe +0x5e:  xchg   %ax,%ax
087e0b00 +0x60:  mov    %esi,(%esp)
087e0b03 +0x63:  call   087dfed0 <_ZNK9TiXmlNode11GetDocumentEv>  ; TiXmlNode::GetDocument() const
087e0b08 +0x68:  test   %eax,%eax
087e0b0a +0x6a:  je     087e0ab6 <+0x16>
087e0b0c +0x6c:  mov    %esi,(%esp)
087e0b0f +0x6f:  call   087dfed0 <_ZNK9TiXmlNode11GetDocumentEv>  ; TiXmlNode::GetDocument() const
087e0b14 +0x74:  movl   $0x0,0x10(%esp)
087e0b1c +0x7c:  movl   $0x0,0xc(%esp)
087e0b24 +0x84:  movl   $0x0,0x8(%esp)
087e0b2c +0x8c:  movl   $0xf,0x4(%esp)
087e0b34 +0x94:  mov    %eax,(%esp)
087e0b37 +0x97:  call   087e6d30 <_ZN13TiXmlDocument8SetErrorEiPKcP16TiXmlParsingData13TiXmlEncoding>  ; TiXmlDocument::SetError(int, char const*, TiXmlParsingData*, TiXmlEncoding)
087e0b3c +0x9c:  xor    %eax,%eax
087e0b3e +0x9e:  jmp    087e0ab8 <+0x18>
087e0b43 +0xa3:  cmp    %ebx,0x1c(%esi)
087e0b46 +0xa6:  jne    087e0b4d <+0xad>
087e0b48 +0xa8:  mov    %eax,0x1c(%esi)
087e0b4b +0xab:  jmp    087e0af9 <+0x59>
087e0b4d +0xad:  movl   $&_ZZN9TiXmlNode16InsertAfterChildEPS_RKS_E19__PRETTY_FUNCTION__,0xc(%esp)
087e0b55 +0xb5:  movl   $0x120,0x8(%esp)
087e0b5d +0xbd:  movl   $"tinyxml.cpp",0x4(%esp)
087e0b65 +0xc5:  movl   $"lastChild == afterThis",(%esp)
087e0b6c +0xcc:  call   0807dc50 <_init+0x548>
087e0b71 +0xd1:  nop
087e0b72 +0xd2:  lea    0x0(%esi,%eiz,1),%esi
087e0b79 +0xd9:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TiXmlNode::InsertAfterChild @ 0x87e0aa0

/* TiXmlNode::InsertAfterChild(TiXmlNode*, TiXmlNode const&) */

int __thiscall TiXmlNode::InsertAfterChild(TiXmlNode *this,TiXmlNode *param_1,TiXmlNode *param_2)

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
      uVar1 = *(undefined4 *)(param_1 + 0x28);
      *(TiXmlNode **)(iVar2 + 0x10) = this_00;
      *(TiXmlNode **)(iVar2 + 0x24) = param_1;
      *(undefined4 *)(iVar2 + 0x28) = uVar1;
      if (*(int *)(param_1 + 0x28) == 0) {
        if (*(TiXmlNode **)(this_00 + 0x1c) != param_1) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("lastChild == afterThis","tinyxml.cpp",0x120,
                        "TiXmlNode* TiXmlNode::InsertAfterChild(TiXmlNode*, const TiXmlNode&)");
        }
        *(int *)(this_00 + 0x1c) = iVar2;
      }
      else {
        *(int *)(*(int *)(param_1 + 0x28) + 0x24) = iVar2;
      }
      *(int *)(param_1 + 0x28) = iVar2;
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
