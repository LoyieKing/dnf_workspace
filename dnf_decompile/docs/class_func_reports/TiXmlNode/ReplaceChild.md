# ReplaceChild

`_ZN9TiXmlNode12ReplaceChildEPS_RKS_`

`TiXmlNode::ReplaceChild(TiXmlNode*, TiXmlNode const&)`

| 类 | 地址 |
|---|---|
| `TiXmlNode` | `0x087e09e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e09e0  _ZN9TiXmlNode12ReplaceChildEPS_RKS_
#           TiXmlNode::ReplaceChild(TiXmlNode*, TiXmlNode const&)
# range [0x087e09e0, 0x087e0a9e]
087e09e0 +0x00:  push   %ebp
087e09e1 +0x01:  mov    %esp,%ebp
087e09e3 +0x03:  sub    $0x48,%esp
087e09e6 +0x06:  mov    %ebx,-0xc(%ebp)
087e09e9 +0x09:  mov    0xc(%ebp),%ebx
087e09ec +0x0c:  mov    %esi,-0x8(%ebp)
087e09ef +0x0f:  mov    0x10(%ebp),%esi
087e09f2 +0x12:  mov    %edi,-0x4(%ebp)
087e09f5 +0x15:  test   %ebx,%ebx
087e09f7 +0x17:  jne    087e0a08 <+0x28>
087e09f9 +0x19:  xor    %eax,%eax
087e09fb +0x1b:  mov    -0xc(%ebp),%ebx
087e09fe +0x1e:  mov    -0x8(%ebp),%esi
087e0a01 +0x21:  mov    -0x4(%ebp),%edi
087e0a04 +0x24:  mov    %ebp,%esp
087e0a06 +0x26:  pop    %ebp
087e0a07 +0x27:  ret
087e0a08 +0x28:  mov    0x10(%ebx),%edi
087e0a0b +0x2b:  cmp    0x8(%ebp),%edi
087e0a0e +0x2e:  jne    087e09f9 <+0x19>
087e0a10 +0x30:  mov    (%esi),%eax
087e0a12 +0x32:  mov    %esi,(%esp)
087e0a15 +0x35:  call   *0x10(%eax)
087e0a18 +0x38:  test   %eax,%eax
087e0a1a +0x3a:  je     087e0a54 <+0x74>
087e0a1c +0x3c:  mov    %edi,(%esp)
087e0a1f +0x3f:  call   087dfed0 <_ZNK9TiXmlNode11GetDocumentEv>  ; TiXmlNode::GetDocument() const
087e0a24 +0x44:  test   %eax,%eax
087e0a26 +0x46:  je     087e09f9 <+0x19>
087e0a28 +0x48:  mov    %eax,(%esp)
087e0a2b +0x4b:  movl   $0x0,0x10(%esp)
087e0a33 +0x53:  movl   $0x0,0xc(%esp)
087e0a3b +0x5b:  movl   $0x0,0x8(%esp)
087e0a43 +0x63:  movl   $0xf,0x4(%esp)
087e0a4b +0x6b:  call   087e6d30 <_ZN13TiXmlDocument8SetErrorEiPKcP16TiXmlParsingData13TiXmlEncoding>  ; TiXmlDocument::SetError(int, char const*, TiXmlParsingData*, TiXmlEncoding)
087e0a50 +0x70:  xor    %eax,%eax
087e0a52 +0x72:  jmp    087e09fb <+0x1b>
087e0a54 +0x74:  mov    (%esi),%eax
087e0a56 +0x76:  mov    %esi,(%esp)
087e0a59 +0x79:  call   *0x40(%eax)
087e0a5c +0x7c:  test   %eax,%eax
087e0a5e +0x7e:  je     087e09fb <+0x1b>
087e0a60 +0x80:  mov    0x28(%ebx),%edx
087e0a63 +0x83:  mov    %edx,0x28(%eax)
087e0a66 +0x86:  mov    0x24(%ebx),%edx
087e0a69 +0x89:  mov    %edx,0x24(%eax)
087e0a6c +0x8c:  mov    0x28(%ebx),%edx
087e0a6f +0x8f:  test   %edx,%edx
087e0a71 +0x91:  je     087e0a96 <+0xb6>
087e0a73 +0x93:  mov    %eax,0x24(%edx)
087e0a76 +0x96:  mov    0x24(%ebx),%edx
087e0a79 +0x99:  test   %edx,%edx
087e0a7b +0x9b:  je     087e0a9b <+0xbb>
087e0a7d +0x9d:  mov    %eax,0x28(%edx)
087e0a80 +0xa0:  mov    (%ebx),%edx
087e0a82 +0xa2:  mov    %eax,-0x1c(%ebp)
087e0a85 +0xa5:  mov    %ebx,(%esp)
087e0a88 +0xa8:  call   *0x4(%edx)
087e0a8b +0xab:  mov    -0x1c(%ebp),%eax
087e0a8e +0xae:  mov    %edi,0x10(%eax)
087e0a91 +0xb1:  jmp    087e09fb <+0x1b>
087e0a96 +0xb6:  mov    %eax,0x1c(%edi)
087e0a99 +0xb9:  jmp    087e0a76 <+0x96>
087e0a9b +0xbb:  mov    %eax,0x18(%edi)
087e0a9e +0xbe:  jmp    087e0a80 <+0xa0>
```

## 反编译 C

```c
// TiXmlNode::ReplaceChild @ 0x87e09e0

/* TiXmlNode::ReplaceChild(TiXmlNode*, TiXmlNode const&) */

int __thiscall TiXmlNode::ReplaceChild(TiXmlNode *this,TiXmlNode *param_1,TiXmlNode *param_2)

{
  TiXmlNode *this_00;
  int iVar1;
  TiXmlDocument *pTVar2;
  
  if ((param_1 != (TiXmlNode *)0x0) && (this_00 = *(TiXmlNode **)(param_1 + 0x10), this_00 == this))
  {
    iVar1 = (**(code **)(*(int *)param_2 + 0x10))(param_2);
    if (iVar1 == 0) {
      iVar1 = (**(code **)(*(int *)param_2 + 0x40))(param_2);
      if (iVar1 == 0) {
        return 0;
      }
      *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(param_1 + 0x28);
      *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(param_1 + 0x24);
      if (*(int *)(param_1 + 0x28) == 0) {
        *(int *)(this_00 + 0x1c) = iVar1;
      }
      else {
        *(int *)(*(int *)(param_1 + 0x28) + 0x24) = iVar1;
      }
      if (*(int *)(param_1 + 0x24) == 0) {
        *(int *)(this_00 + 0x18) = iVar1;
      }
      else {
        *(int *)(*(int *)(param_1 + 0x24) + 0x28) = iVar1;
      }
      (**(code **)(*(int *)param_1 + 4))(param_1);
      *(TiXmlNode **)(iVar1 + 0x10) = this_00;
      return iVar1;
    }
    pTVar2 = (TiXmlDocument *)GetDocument(this_00);
    if (pTVar2 != (TiXmlDocument *)0x0) {
      TiXmlDocument::SetError(pTVar2,0xf,0,0,0);
      return 0;
    }
  }
  return 0;
}
```
