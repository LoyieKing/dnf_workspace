# ~TiXmlNode

`_ZN9TiXmlNodeD1Ev`

`TiXmlNode::~TiXmlNode()`

| 类 | 地址 |
|---|---|
| `TiXmlNode` | `0x087e2b70` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e2b70  _ZN9TiXmlNodeD1Ev
#           TiXmlNode::~TiXmlNode()
# range [0x087e2b70, 0x087e2c09]
087e2b70 +0x00:  push   %ebp
087e2b71 +0x01:  mov    %esp,%ebp
087e2b73 +0x03:  push   %esi
087e2b74 +0x04:  push   %ebx
087e2b75 +0x05:  sub    $0x20,%esp
087e2b78 +0x08:  mov    0x8(%ebp),%esi
087e2b7b +0x0b:  mov    0x18(%esi),%eax
087e2b7e +0x0e:  movl   $&_ZTV9TiXmlNode+0x8,(%esi)
087e2b84 +0x14:  test   %eax,%eax
087e2b86 +0x16:  jne    087e2b92 <+0x22>
087e2b88 +0x18:  jmp    087e2ba1 <+0x31>
087e2b8a +0x1a:  lea    0x0(%esi),%esi
087e2b90 +0x20:  mov    %ebx,%eax
087e2b92 +0x22:  mov    (%eax),%edx
087e2b94 +0x24:  mov    0x28(%eax),%ebx
087e2b97 +0x27:  mov    %eax,(%esp)
087e2b9a +0x2a:  call   *0x4(%edx)
087e2b9d +0x2d:  test   %ebx,%ebx
087e2b9f +0x2f:  jne    087e2b90 <+0x20>
087e2ba1 +0x31:  mov    0x20(%esi),%eax
087e2ba4 +0x34:  sub    $0xc,%eax
087e2ba7 +0x37:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
087e2bac +0x3c:  jne    087e2bd6 <+0x66>
087e2bae +0x3e:  movl   $&_ZTV9TiXmlBase+0x8,(%esi)
087e2bb4 +0x44:  add    $0x20,%esp
087e2bb7 +0x47:  pop    %ebx
087e2bb8 +0x48:  pop    %esi
087e2bb9 +0x49:  pop    %ebp
087e2bba +0x4a:  ret
087e2bbb +0x4b:  mov    %eax,%ebx
087e2bbd +0x4d:  lea    0x20(%esi),%eax
087e2bc0 +0x50:  mov    %eax,(%esp)
087e2bc3 +0x53:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
087e2bc8 +0x58:  movl   $&_ZTV9TiXmlBase+0x8,(%esi)
087e2bce +0x5e:  mov    %ebx,(%esp)
087e2bd1 +0x61:  call   08ae3750 <_Unwind_Resume>
087e2bd6 +0x66:  mov    $&data#bb92cc41(.plt),%edx
087e2bdb +0x6b:  test   %edx,%edx
087e2bdd +0x6d:  je     087e2bfc <+0x8c>
087e2bdf +0x6f:  or     $0xffffffff,%edx
087e2be2 +0x72:  lock xadd %edx,0x8(%eax)
087e2be7 +0x77:  test   %edx,%edx
087e2be9 +0x79:  jg     087e2bae <+0x3e>
087e2beb +0x7b:  lea    -0x9(%ebp),%edx
087e2bee +0x7e:  mov    %edx,0x4(%esp)
087e2bf2 +0x82:  mov    %eax,(%esp)
087e2bf5 +0x85:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
087e2bfa +0x8a:  jmp    087e2bae <+0x3e>
087e2bfc +0x8c:  mov    0x8(%eax),%edx
087e2bff +0x8f:  lea    -0x1(%edx),%ecx
087e2c02 +0x92:  mov    %ecx,0x8(%eax)
087e2c05 +0x95:  jmp    087e2be7 <+0x77>
087e2c07 +0x97:  nop
087e2c08 +0x98:  nop
087e2c09 +0x99:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TiXmlNode::~TiXmlNode @ 0x87e2b70

/* WARNING: Removing unreachable block (ram,0x087e2bfc) */
/* TiXmlNode::~TiXmlNode() */

void __thiscall TiXmlNode::~TiXmlNode(TiXmlNode *this)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  allocator *paVar4;
  
  *(undefined ***)this = &PTR__TiXmlNode_08de1288;
  piVar1 = *(int **)(this + 0x18);
  while (piVar1 != (int *)0x0) {
    piVar3 = (int *)piVar1[10];
                    /* try { // try from 087e2b9a to 087e2b9c has its CatchHandler @ 087e2bbb */
    (**(code **)(*piVar1 + 4))(piVar1);
    piVar1 = piVar3;
  }
  paVar4 = (allocator *)(*(int *)(this + 0x20) + -0xc);
  if (paVar4 != (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
    LOCK();
    piVar1 = (int *)(*(int *)(this + 0x20) + -4);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 1) {
      std::string::_Rep::_M_destroy(paVar4);
    }
  }
  *(undefined ***)this = &PTR__TiXmlBase_08de13f8;
  return;
}
```
