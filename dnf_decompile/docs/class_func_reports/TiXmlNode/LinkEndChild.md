# LinkEndChild

`_ZN9TiXmlNode12LinkEndChildEPS_`

`TiXmlNode::LinkEndChild(TiXmlNode*)`

| 类 | 地址 |
|---|---|
| `TiXmlNode` | `0x087e2150` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e2150  _ZN9TiXmlNode12LinkEndChildEPS_
#           TiXmlNode::LinkEndChild(TiXmlNode*)
# range [0x087e2150, 0x087e22c9]
087e2150 +0x000:  push   %ebp
087e2151 +0x001:  mov    %esp,%ebp
087e2153 +0x003:  push   %edi
087e2154 +0x004:  push   %esi
087e2155 +0x005:  push   %ebx
087e2156 +0x006:  sub    $0x3c,%esp
087e2159 +0x009:  mov    0xc(%ebp),%esi
087e215c +0x00c:  mov    0x8(%ebp),%edi
087e215f +0x00f:  mov    0x10(%esi),%eax
087e2162 +0x012:  test   %eax,%eax
087e2164 +0x014:  je     087e216e <+0x1e>
087e2166 +0x016:  cmp    %edi,%eax
087e2168 +0x018:  jne    087e227d <+0x12d>
087e216e +0x01e:  mov    %esi,%ebx
087e2170 +0x020:  jmp    087e217f <+0x2f>
087e2172 +0x022:  lea    0x0(%esi),%esi
087e2178 +0x028:  mov    0x10(%ebx),%ebx
087e217b +0x02b:  test   %ebx,%ebx
087e217d +0x02d:  je     087e21ec <+0x9c>
087e217f +0x02f:  mov    (%ebx),%eax
087e2181 +0x031:  mov    %ebx,(%esp)
087e2184 +0x034:  call   *0x10(%eax)
087e2187 +0x037:  test   %eax,%eax
087e2189 +0x039:  je     087e2178 <+0x28>
087e218b +0x03b:  mov    (%ebx),%eax
087e218d +0x03d:  mov    %ebx,(%esp)
087e2190 +0x040:  call   *0x10(%eax)
087e2193 +0x043:  test   %eax,%eax
087e2195 +0x045:  je     087e21ec <+0x9c>
087e2197 +0x047:  mov    %esi,%ebx
087e2199 +0x049:  jmp    087e21a7 <+0x57>
087e219b +0x04b:  nop
087e219c +0x04c:  lea    0x0(%esi,%eiz,1),%esi
087e21a0 +0x050:  mov    0x10(%ebx),%ebx
087e21a3 +0x053:  test   %ebx,%ebx
087e21a5 +0x055:  je     087e2220 <+0xd0>
087e21a7 +0x057:  mov    (%ebx),%eax
087e21a9 +0x059:  mov    %ebx,(%esp)
087e21ac +0x05c:  call   *0x10(%eax)
087e21af +0x05f:  test   %eax,%eax
087e21b1 +0x061:  je     087e21a0 <+0x50>
087e21b3 +0x063:  mov    (%ebx),%eax
087e21b5 +0x065:  mov    %ebx,(%esp)
087e21b8 +0x068:  call   *0x10(%eax)
087e21bb +0x06b:  mov    %eax,-0x1c(%ebp)
087e21be +0x06e:  test   %edi,%edi
087e21c0 +0x070:  je     087e2218 <+0xc8>
087e21c2 +0x072:  mov    %edi,%ebx
087e21c4 +0x074:  jmp    087e21cf <+0x7f>
087e21c6 +0x076:  xchg   %ax,%ax
087e21c8 +0x078:  mov    0x10(%ebx),%ebx
087e21cb +0x07b:  test   %ebx,%ebx
087e21cd +0x07d:  je     087e2218 <+0xc8>
087e21cf +0x07f:  mov    (%ebx),%eax
087e21d1 +0x081:  mov    %ebx,(%esp)
087e21d4 +0x084:  call   *0x10(%eax)
087e21d7 +0x087:  test   %eax,%eax
087e21d9 +0x089:  je     087e21c8 <+0x78>
087e21db +0x08b:  mov    (%ebx),%eax
087e21dd +0x08d:  mov    %ebx,(%esp)
087e21e0 +0x090:  call   *0x10(%eax)
087e21e3 +0x093:  cmp    %eax,-0x1c(%ebp)
087e21e6 +0x096:  jne    087e22a1 <+0x151>
087e21ec +0x09c:  mov    0x14(%esi),%eax
087e21ef +0x09f:  test   %eax,%eax
087e21f1 +0x0a1:  je     087e2235 <+0xe5>
087e21f3 +0x0a3:  mov    0x1c(%edi),%eax
087e21f6 +0x0a6:  mov    %edi,0x10(%esi)
087e21f9 +0x0a9:  movl   $0x0,0x28(%esi)
087e2200 +0x0b0:  test   %eax,%eax
087e2202 +0x0b2:  mov    %eax,0x24(%esi)
087e2205 +0x0b5:  je     087e2230 <+0xe0>
087e2207 +0x0b7:  mov    %esi,0x28(%eax)
087e220a +0x0ba:  mov    %esi,0x1c(%edi)
087e220d +0x0bd:  add    $0x3c,%esp
087e2210 +0x0c0:  mov    %esi,%eax
087e2212 +0x0c2:  pop    %ebx
087e2213 +0x0c3:  pop    %esi
087e2214 +0x0c4:  pop    %edi
087e2215 +0x0c5:  pop    %ebp
087e2216 +0x0c6:  ret
087e2217 +0x0c7:  nop
087e2218 +0x0c8:  xor    %eax,%eax
087e221a +0x0ca:  jmp    087e21e3 <+0x93>
087e221c +0x0cc:  lea    0x0(%esi,%eiz,1),%esi
087e2220 +0x0d0:  movl   $0x0,-0x1c(%ebp)
087e2227 +0x0d7:  jmp    087e21be <+0x6e>
087e2229 +0x0d9:  lea    0x0(%esi,%eiz,1),%esi
087e2230 +0x0e0:  mov    %esi,0x18(%edi)
087e2233 +0x0e3:  jmp    087e220a <+0xba>
087e2235 +0x0e5:  mov    (%esi),%eax
087e2237 +0x0e7:  mov    %esi,(%esp)
087e223a +0x0ea:  xor    %esi,%esi
087e223c +0x0ec:  call   *0x4(%eax)
087e223f +0x0ef:  mov    %edi,(%esp)
087e2242 +0x0f2:  call   087dfed0 <_ZNK9TiXmlNode11GetDocumentEv>  ; TiXmlNode::GetDocument() const
087e2247 +0x0f7:  test   %eax,%eax
087e2249 +0x0f9:  je     087e220d <+0xbd>
087e224b +0x0fb:  mov    %edi,(%esp)
087e224e +0x0fe:  call   087dfed0 <_ZNK9TiXmlNode11GetDocumentEv>  ; TiXmlNode::GetDocument() const
087e2253 +0x103:  movl   $0x0,0x10(%esp)
087e225b +0x10b:  movl   $0x0,0xc(%esp)
087e2263 +0x113:  movl   $0x0,0x8(%esp)
087e226b +0x11b:  movl   $0xf,0x4(%esp)
087e2273 +0x123:  mov    %eax,(%esp)
087e2276 +0x126:  call   087e6d30 <_ZN13TiXmlDocument8SetErrorEiPKcP16TiXmlParsingData13TiXmlEncoding>  ; TiXmlDocument::SetError(int, char const*, TiXmlParsingData*, TiXmlEncoding)
087e227b +0x12b:  jmp    087e220d <+0xbd>
087e227d +0x12d:  movl   $&_ZZN9TiXmlNode12LinkEndChildEPS_E19__PRETTY_FUNCTION__,0xc(%esp)
087e2285 +0x135:  movl   $0xbc,0x8(%esp)
087e228d +0x13d:  movl   $"tinyxml.cpp",0x4(%esp)
087e2295 +0x145:  movl   $"node->parent == 0 || node->parent == this",(%esp)
087e229c +0x14c:  call   0807dc50 <_init+0x548>
087e22a1 +0x151:  movl   $&_ZZN9TiXmlNode12LinkEndChildEPS_E19__PRETTY_FUNCTION__,0xc(%esp)
087e22a9 +0x159:  movl   $0xbd,0x8(%esp)
087e22b1 +0x161:  movl   $"tinyxml.cpp",0x4(%esp)
087e22b9 +0x169:  movl   $"node->GetDocument() == 0 || node->GetDocument() == this->GetDocument()",(%esp)
087e22c0 +0x170:  call   0807dc50 <_init+0x548>
087e22c5 +0x175:  nop
087e22c6 +0x176:  lea    0x0(%esi),%esi
087e22c9 +0x179:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TiXmlNode::LinkEndChild @ 0x87e2150

/* TiXmlNode::LinkEndChild(TiXmlNode*) */

TiXmlNode * __thiscall TiXmlNode::LinkEndChild(TiXmlNode *this,TiXmlNode *param_1)

{
  TiXmlNode *pTVar1;
  TiXmlNode *pTVar2;
  int iVar3;
  TiXmlDocument *pTVar4;
  TiXmlNode *pTVar5;
  int local_20;
  
  pTVar5 = param_1;
  if ((*(TiXmlNode **)(param_1 + 0x10) != (TiXmlNode *)0x0) &&
     (*(TiXmlNode **)(param_1 + 0x10) != this)) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("node->parent == 0 || node->parent == this","tinyxml.cpp",0xbc,
                  "TiXmlNode* TiXmlNode::LinkEndChild(TiXmlNode*)");
  }
  do {
    iVar3 = (**(code **)(*(int *)pTVar5 + 0x10))(pTVar5);
    if (iVar3 != 0) {
      iVar3 = (**(code **)(*(int *)pTVar5 + 0x10))(pTVar5);
      pTVar5 = param_1;
      if (iVar3 != 0) goto LAB_087e21a7;
      break;
    }
    pTVar1 = pTVar5 + 0x10;
    pTVar5 = *(TiXmlNode **)pTVar1;
  } while (*(TiXmlNode **)pTVar1 != (TiXmlNode *)0x0);
  goto LAB_087e21ec;
  while (pTVar2 = pTVar5 + 0x10, pTVar5 = *(TiXmlNode **)pTVar2,
        *(TiXmlNode **)pTVar2 != (TiXmlNode *)0x0) {
LAB_087e21a7:
    iVar3 = (**(code **)(*(int *)pTVar5 + 0x10))(pTVar5);
    pTVar1 = this;
    if (iVar3 != 0) {
      local_20 = (**(code **)(*(int *)pTVar5 + 0x10))(pTVar5);
      goto joined_r0x087e21c0;
    }
  }
  local_20 = 0;
joined_r0x087e21c0:
  do {
    if (pTVar1 == (TiXmlNode *)0x0) break;
    iVar3 = (**(code **)(*(int *)pTVar1 + 0x10))(pTVar1);
    if (iVar3 != 0) {
      iVar3 = (**(code **)(*(int *)pTVar1 + 0x10))(pTVar1);
      goto LAB_087e21e3;
    }
    pTVar1 = *(TiXmlNode **)(pTVar1 + 0x10);
  } while( true );
  iVar3 = 0;
LAB_087e21e3:
  if (local_20 != iVar3) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("node->GetDocument() == 0 || node->GetDocument() == this->GetDocument()",
                  "tinyxml.cpp",0xbd,"TiXmlNode* TiXmlNode::LinkEndChild(TiXmlNode*)");
  }
LAB_087e21ec:
  if (*(int *)(param_1 + 0x14) == 0) {
    pTVar5 = (TiXmlNode *)0x0;
    (**(code **)(*(int *)param_1 + 4))(param_1);
    iVar3 = GetDocument(this);
    if (iVar3 != 0) {
      pTVar4 = (TiXmlDocument *)GetDocument(this);
      TiXmlDocument::SetError(pTVar4,0xf,0,0,0);
    }
  }
  else {
    iVar3 = *(int *)(this + 0x1c);
    *(TiXmlNode **)(param_1 + 0x10) = this;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(int *)(param_1 + 0x24) = iVar3;
    if (iVar3 == 0) {
      *(TiXmlNode **)(this + 0x18) = param_1;
    }
    else {
      *(TiXmlNode **)(iVar3 + 0x28) = param_1;
    }
    *(TiXmlNode **)(this + 0x1c) = param_1;
    pTVar5 = param_1;
  }
  return pTVar5;
}
```
