# Clone

`_ZNK12TiXmlComment5CloneEv`

`TiXmlComment::Clone() const`

| 类 | 地址 |
|---|---|
| `TiXmlComment` | `0x087e28b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e28b0  _ZNK12TiXmlComment5CloneEv
#           TiXmlComment::Clone() const
# range [0x087e28b0, 0x087e295c]
087e28b0 +0x00:  push   %ebp
087e28b1 +0x01:  mov    %esp,%ebp
087e28b3 +0x03:  sub    $0x28,%esp
087e28b6 +0x06:  movl   $0x2c,(%esp)
087e28bd +0x0d:  mov    %ebx,-0xc(%ebp)
087e28c0 +0x10:  mov    %esi,-0x8(%ebp)
087e28c3 +0x13:  mov    0x8(%ebp),%esi
087e28c6 +0x16:  mov    %edi,-0x4(%ebp)
087e28c9 +0x19:  call   08724450 <_Znwj>  ; operator new(unsigned int)
087e28ce +0x1e:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,0x20(%eax)
087e28d5 +0x25:  mov    0x20(%esi),%edi
087e28d8 +0x28:  mov    %eax,%ebx
087e28da +0x2a:  movl   $0xffffffff,0x8(%eax)
087e28e1 +0x31:  movl   $0xffffffff,0x4(%eax)
087e28e8 +0x38:  movl   $0x0,0xc(%eax)
087e28ef +0x3f:  movl   $0x0,0x10(%eax)
087e28f6 +0x46:  movl   $0x2,0x14(%eax)
087e28fd +0x4d:  movl   $0x0,0x18(%eax)
087e2904 +0x54:  movl   $0x0,0x1c(%eax)
087e290b +0x5b:  movl   $0x0,0x24(%eax)
087e2912 +0x62:  movl   $0x0,0x28(%eax)
087e2919 +0x69:  movl   $&_ZTV12TiXmlComment+0x8,(%eax)
087e291f +0x6f:  mov    %edi,(%esp)
087e2922 +0x72:  call   0807e3b0 <_init+0xca8>
087e2927 +0x77:  mov    %edi,0x4(%esp)
087e292b +0x7b:  mov    %eax,0x8(%esp)
087e292f +0x7f:  lea    0x20(%ebx),%eax
087e2932 +0x82:  mov    %eax,(%esp)
087e2935 +0x85:  call   087085a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x21b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x21b0
087e293a +0x8a:  mov    0xc(%esi),%eax
087e293d +0x8d:  mov    0x8(%esi),%edx
087e2940 +0x90:  mov    %eax,0xc(%ebx)
087e2943 +0x93:  mov    0x4(%esi),%eax
087e2946 +0x96:  mov    %edx,0x8(%ebx)
087e2949 +0x99:  mov    %eax,0x4(%ebx)
087e294c +0x9c:  mov    %ebx,%eax
087e294e +0x9e:  mov    -0x8(%ebp),%esi
087e2951 +0xa1:  mov    -0xc(%ebp),%ebx
087e2954 +0xa4:  mov    -0x4(%ebp),%edi
087e2957 +0xa7:  mov    %ebp,%esp
087e2959 +0xa9:  pop    %ebp
087e295a +0xaa:  ret
087e295b +0xab:  nop
087e295c +0xac:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TiXmlComment::Clone @ 0x87e28b0

/* TiXmlComment::Clone() const */

undefined4 * __thiscall TiXmlComment::Clone(TiXmlComment *this)

{
  char *__s;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  size_t sVar4;
  
  puVar3 = operator_new(0x2c);
  puVar3[8] = &DAT_0948ccfc;
  __s = *(char **)(this + 0x20);
  puVar3[2] = 0xffffffff;
  puVar3[1] = 0xffffffff;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 2;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  *puVar3 = &PTR__TiXmlComment_08de11c8;
  sVar4 = strlen(__s);
  std::string::assign((string *)(puVar3 + 8),__s,sVar4);
  uVar1 = *(undefined4 *)(this + 8);
  puVar3[3] = *(undefined4 *)(this + 0xc);
  uVar2 = *(undefined4 *)(this + 4);
  puVar3[2] = uVar1;
  puVar3[1] = uVar2;
  return puVar3;
}
```
