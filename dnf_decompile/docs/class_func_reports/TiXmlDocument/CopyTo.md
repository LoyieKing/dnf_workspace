# CopyTo

`_ZNK13TiXmlDocument6CopyToEPS_`

`TiXmlDocument::CopyTo(TiXmlDocument*) const`

| 类 | 地址 |
|---|---|
| `TiXmlDocument` | `0x087e22d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e22d0  _ZNK13TiXmlDocument6CopyToEPS_
#           TiXmlDocument::CopyTo(TiXmlDocument*) const
# range [0x087e22d0, 0x087e237a]
087e22d0 +0x00:  push   %ebp
087e22d1 +0x01:  mov    %esp,%ebp
087e22d3 +0x03:  push   %edi
087e22d4 +0x04:  push   %esi
087e22d5 +0x05:  push   %ebx
087e22d6 +0x06:  sub    $0x1c,%esp
087e22d9 +0x09:  mov    0x8(%ebp),%ebx
087e22dc +0x0c:  mov    0xc(%ebp),%esi
087e22df +0x0f:  mov    0x20(%ebx),%edi
087e22e2 +0x12:  mov    %edi,(%esp)
087e22e5 +0x15:  call   0807e3b0 <_init+0xca8>
087e22ea +0x1a:  mov    %edi,0x4(%esp)
087e22ee +0x1e:  mov    %eax,0x8(%esp)
087e22f2 +0x22:  lea    0x20(%esi),%eax
087e22f5 +0x25:  mov    %eax,(%esp)
087e22f8 +0x28:  call   087085a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x21b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x21b0
087e22fd +0x2d:  mov    0xc(%ebx),%eax
087e2300 +0x30:  mov    0x8(%ebx),%edx
087e2303 +0x33:  mov    %eax,0xc(%esi)
087e2306 +0x36:  mov    0x4(%ebx),%eax
087e2309 +0x39:  mov    %edx,0x8(%esi)
087e230c +0x3c:  mov    %eax,0x4(%esi)
087e230f +0x3f:  movzbl 0x2c(%ebx),%eax
087e2313 +0x43:  mov    %al,0x2c(%esi)
087e2316 +0x46:  mov    0x30(%ebx),%eax
087e2319 +0x49:  mov    %eax,0x30(%esi)
087e231c +0x4c:  lea    0x34(%ebx),%eax
087e231f +0x4f:  mov    %eax,0x4(%esp)
087e2323 +0x53:  lea    0x34(%esi),%eax
087e2326 +0x56:  mov    %eax,(%esp)
087e2329 +0x59:  call   08707c30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1840>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1840
087e232e +0x5e:  mov    0x38(%ebx),%eax
087e2331 +0x61:  mov    0x40(%ebx),%edx
087e2334 +0x64:  mov    %eax,0x38(%esi)
087e2337 +0x67:  mov    0x3c(%ebx),%eax
087e233a +0x6a:  mov    %edx,0x40(%esi)
087e233d +0x6d:  mov    %eax,0x3c(%esi)
087e2340 +0x70:  movzbl 0x44(%ebx),%eax
087e2344 +0x74:  mov    0x18(%ebx),%ebx
087e2347 +0x77:  mov    %al,0x44(%esi)
087e234a +0x7a:  test   %ebx,%ebx
087e234c +0x7c:  je     087e236b <+0x9b>
087e234e +0x7e:  xchg   %ax,%ax
087e2350 +0x80:  mov    (%ebx),%eax
087e2352 +0x82:  mov    %ebx,(%esp)
087e2355 +0x85:  call   *0x40(%eax)
087e2358 +0x88:  mov    %esi,(%esp)
087e235b +0x8b:  mov    %eax,0x4(%esp)
087e235f +0x8f:  call   087e2150 <_ZN9TiXmlNode12LinkEndChildEPS_>  ; TiXmlNode::LinkEndChild(TiXmlNode*)
087e2364 +0x94:  mov    0x28(%ebx),%ebx
087e2367 +0x97:  test   %ebx,%ebx
087e2369 +0x99:  jne    087e2350 <+0x80>
087e236b +0x9b:  add    $0x1c,%esp
087e236e +0x9e:  pop    %ebx
087e236f +0x9f:  pop    %esi
087e2370 +0xa0:  pop    %edi
087e2371 +0xa1:  pop    %ebp
087e2372 +0xa2:  ret
087e2373 +0xa3:  nop
087e2374 +0xa4:  lea    0x0(%esi),%esi
087e237a +0xaa:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// TiXmlDocument::CopyTo @ 0x87e22d0

/* TiXmlDocument::CopyTo(TiXmlDocument*) const */

void __thiscall TiXmlDocument::CopyTo(TiXmlDocument *this,TiXmlDocument *param_1)

{
  char *__s;
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  size_t sVar4;
  TiXmlNode *pTVar5;
  
  __s = *(char **)(this + 0x20);
  sVar4 = strlen(__s);
  std::string::assign((string *)(param_1 + 0x20),__s,sVar4);
  uVar1 = *(undefined4 *)(this + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(this + 0xc);
  uVar2 = *(undefined4 *)(this + 4);
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 4) = uVar2;
  param_1[0x2c] = this[0x2c];
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(this + 0x30);
  std::string::assign((string *)(param_1 + 0x34),(string *)(this + 0x34));
  uVar1 = *(undefined4 *)(this + 0x40);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(this + 0x38);
  uVar2 = *(undefined4 *)(this + 0x3c);
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  piVar3 = *(int **)(this + 0x18);
  param_1[0x44] = this[0x44];
  for (; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[10]) {
    pTVar5 = (TiXmlNode *)(**(code **)(*piVar3 + 0x40))(piVar3);
    TiXmlNode::LinkEndChild((TiXmlNode *)param_1,pTVar5);
  }
  return;
}
```
