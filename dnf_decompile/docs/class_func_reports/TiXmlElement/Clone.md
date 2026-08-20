# Clone

`_ZNK12TiXmlElement5CloneEv`

`TiXmlElement::Clone() const`

| 类 | 地址 |
|---|---|
| `TiXmlElement` | `0x087e3de0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e3de0  _ZNK12TiXmlElement5CloneEv
#           TiXmlElement::Clone() const
# range [0x087e3de0, 0x087e3e49]
087e3de0 +0x00:  push   %ebp
087e3de1 +0x01:  mov    %esp,%ebp
087e3de3 +0x03:  sub    $0x28,%esp
087e3de6 +0x06:  mov    %esi,-0x8(%ebp)
087e3de9 +0x09:  mov    0x8(%ebp),%esi
087e3dec +0x0c:  mov    %ebx,-0xc(%ebp)
087e3def +0x0f:  mov    %edi,-0x4(%ebp)
087e3df2 +0x12:  mov    0x20(%esi),%edi
087e3df5 +0x15:  movl   $0x50,(%esp)
087e3dfc +0x1c:  call   08724450 <_Znwj>  ; operator new(unsigned int)
087e3e01 +0x21:  mov    %edi,0x4(%esp)
087e3e05 +0x25:  mov    %eax,%ebx
087e3e07 +0x27:  mov    %eax,(%esp)
087e3e0a +0x2a:  call   087e3640 <_ZN12TiXmlElementC1EPKc>  ; TiXmlElement::TiXmlElement(char const*)
087e3e0f +0x2f:  xor    %eax,%eax
087e3e11 +0x31:  test   %ebx,%ebx
087e3e13 +0x33:  je     087e3e23 <+0x43>
087e3e15 +0x35:  mov    %ebx,0x4(%esp)
087e3e19 +0x39:  mov    %esi,(%esp)
087e3e1c +0x3c:  call   087e3c20 <_ZNK12TiXmlElement6CopyToEPS_>  ; TiXmlElement::CopyTo(TiXmlElement*) const
087e3e21 +0x41:  mov    %ebx,%eax
087e3e23 +0x43:  mov    -0xc(%ebp),%ebx
087e3e26 +0x46:  mov    -0x8(%ebp),%esi
087e3e29 +0x49:  mov    -0x4(%ebp),%edi
087e3e2c +0x4c:  mov    %ebp,%esp
087e3e2e +0x4e:  pop    %ebp
087e3e2f +0x4f:  ret
087e3e30 +0x50:  mov    %eax,%esi
087e3e32 +0x52:  mov    %ebx,(%esp)
087e3e35 +0x55:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
087e3e3a +0x5a:  mov    %esi,(%esp)
087e3e3d +0x5d:  call   08ae3750 <_Unwind_Resume>
087e3e42 +0x62:  lea    0x0(%esi,%eiz,1),%esi
087e3e49 +0x69:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TiXmlElement::Clone @ 0x87e3de0

/* TiXmlElement::Clone() const */

TiXmlElement * __thiscall TiXmlElement::Clone(TiXmlElement *this)

{
  char *pcVar1;
  TiXmlElement *this_00;
  TiXmlElement *pTVar2;
  
  pcVar1 = *(char **)(this + 0x20);
  this_00 = operator_new(0x50);
                    /* try { // try from 087e3e0a to 087e3e0e has its CatchHandler @ 087e3e30 */
  TiXmlElement(this_00,pcVar1);
  pTVar2 = (TiXmlElement *)0x0;
  if (this_00 != (TiXmlElement *)0x0) {
    CopyTo(this,this_00);
    pTVar2 = this_00;
  }
  return pTVar2;
}
```
