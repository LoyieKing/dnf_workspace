# TiXmlComment

`_ZN12TiXmlCommentC1ERKS_`

`TiXmlComment::TiXmlComment(TiXmlComment const&)`

| 类 | 地址 |
|---|---|
| `TiXmlComment` | `0x087e2d40` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e2d40  _ZN12TiXmlCommentC1ERKS_
#           TiXmlComment::TiXmlComment(TiXmlComment const&)
# range [0x087e2d40, 0x087e2deb]
087e2d40 +0x00:  push   %ebp
087e2d41 +0x01:  mov    %esp,%ebp
087e2d43 +0x03:  sub    $0x28,%esp
087e2d46 +0x06:  mov    %ebx,-0xc(%ebp)
087e2d49 +0x09:  mov    0x8(%ebp),%ebx
087e2d4c +0x0c:  mov    %esi,-0x8(%ebp)
087e2d4f +0x0f:  mov    0xc(%ebp),%esi
087e2d52 +0x12:  mov    %edi,-0x4(%ebp)
087e2d55 +0x15:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,0x20(%ebx)
087e2d5c +0x1c:  mov    0x20(%esi),%edi
087e2d5f +0x1f:  movl   $0xffffffff,0x8(%ebx)
087e2d66 +0x26:  movl   $0xffffffff,0x4(%ebx)
087e2d6d +0x2d:  movl   $0x0,0xc(%ebx)
087e2d74 +0x34:  movl   $0x0,0x10(%ebx)
087e2d7b +0x3b:  movl   $0x2,0x14(%ebx)
087e2d82 +0x42:  movl   $0x0,0x18(%ebx)
087e2d89 +0x49:  movl   $0x0,0x1c(%ebx)
087e2d90 +0x50:  movl   $0x0,0x24(%ebx)
087e2d97 +0x57:  movl   $0x0,0x28(%ebx)
087e2d9e +0x5e:  movl   $&_ZTV12TiXmlComment+0x8,(%ebx)
087e2da4 +0x64:  mov    %edi,(%esp)
087e2da7 +0x67:  call   0807e3b0 <_init+0xca8>
087e2dac +0x6c:  mov    %edi,0x4(%esp)
087e2db0 +0x70:  mov    %eax,0x8(%esp)
087e2db4 +0x74:  lea    0x20(%ebx),%eax
087e2db7 +0x77:  mov    %eax,(%esp)
087e2dba +0x7a:  call   087085a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x21b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x21b0
087e2dbf +0x7f:  mov    0xc(%esi),%eax
087e2dc2 +0x82:  mov    0x8(%esi),%edx
087e2dc5 +0x85:  mov    %eax,0xc(%ebx)
087e2dc8 +0x88:  mov    0x4(%esi),%eax
087e2dcb +0x8b:  mov    %edx,0x8(%ebx)
087e2dce +0x8e:  mov    %eax,0x4(%ebx)
087e2dd1 +0x91:  mov    -0xc(%ebp),%ebx
087e2dd4 +0x94:  mov    -0x8(%ebp),%esi
087e2dd7 +0x97:  mov    -0x4(%ebp),%edi
087e2dda +0x9a:  mov    %ebp,%esp
087e2ddc +0x9c:  pop    %ebp
087e2ddd +0x9d:  ret
087e2dde +0x9e:  mov    %eax,%esi
087e2de0 +0xa0:  mov    %ebx,(%esp)
087e2de3 +0xa3:  call   087e2b70 <_ZN9TiXmlNodeD1Ev>  ; TiXmlNode::~TiXmlNode()
087e2de8 +0xa8:  mov    %esi,(%esp)
087e2deb +0xab:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// TiXmlComment::TiXmlComment @ 0x87e2d40

/* TiXmlComment::TiXmlComment(TiXmlComment const&) */

void __thiscall TiXmlComment::TiXmlComment(TiXmlComment *this,TiXmlComment *param_1)

{
  char *__s;
  undefined4 uVar1;
  undefined4 uVar2;
  size_t sVar3;
  
  *(undefined1 **)(this + 0x20) = &DAT_0948ccfc;
  __s = *(char **)(param_1 + 0x20);
  *(undefined4 *)(this + 8) = 0xffffffff;
  *(undefined4 *)(this + 4) = 0xffffffff;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined ***)this = &PTR__TiXmlComment_08de11c8;
  sVar3 = strlen(__s);
                    /* try { // try from 087e2dba to 087e2dbe has its CatchHandler @ 087e2dde */
  std::string::assign((string *)(this + 0x20),__s,sVar3);
  uVar1 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  return;
}
```
