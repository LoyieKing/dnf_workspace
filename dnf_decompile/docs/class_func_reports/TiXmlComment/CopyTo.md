# CopyTo

`_ZNK12TiXmlComment6CopyToEPS_`

`TiXmlComment::CopyTo(TiXmlComment*) const`

| 类 | 地址 |
|---|---|
| `TiXmlComment` | `0x087e25a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e25a0  _ZNK12TiXmlComment6CopyToEPS_
#           TiXmlComment::CopyTo(TiXmlComment*) const
# range [0x087e25a0, 0x087e25f9]
087e25a0 +0x00:  push   %ebp
087e25a1 +0x01:  mov    %esp,%ebp
087e25a3 +0x03:  sub    $0x28,%esp
087e25a6 +0x06:  mov    %esi,-0x8(%ebp)
087e25a9 +0x09:  mov    0x8(%ebp),%esi
087e25ac +0x0c:  mov    %ebx,-0xc(%ebp)
087e25af +0x0f:  mov    0xc(%ebp),%ebx
087e25b2 +0x12:  mov    %edi,-0x4(%ebp)
087e25b5 +0x15:  mov    0x20(%esi),%edi
087e25b8 +0x18:  mov    %edi,(%esp)
087e25bb +0x1b:  call   0807e3b0 <_init+0xca8>
087e25c0 +0x20:  mov    %edi,0x4(%esp)
087e25c4 +0x24:  mov    %eax,0x8(%esp)
087e25c8 +0x28:  lea    0x20(%ebx),%eax
087e25cb +0x2b:  mov    %eax,(%esp)
087e25ce +0x2e:  call   087085a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x21b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x21b0
087e25d3 +0x33:  mov    0xc(%esi),%eax
087e25d6 +0x36:  mov    0x8(%esi),%edx
087e25d9 +0x39:  mov    %eax,0xc(%ebx)
087e25dc +0x3c:  mov    0x4(%esi),%eax
087e25df +0x3f:  mov    %edx,0x8(%ebx)
087e25e2 +0x42:  mov    %eax,0x4(%ebx)
087e25e5 +0x45:  mov    -0xc(%ebp),%ebx
087e25e8 +0x48:  mov    -0x8(%ebp),%esi
087e25eb +0x4b:  mov    -0x4(%ebp),%edi
087e25ee +0x4e:  mov    %ebp,%esp
087e25f0 +0x50:  pop    %ebp
087e25f1 +0x51:  ret
087e25f2 +0x52:  lea    0x0(%esi,%eiz,1),%esi
087e25f9 +0x59:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TiXmlComment::CopyTo @ 0x87e25a0

/* TiXmlComment::CopyTo(TiXmlComment*) const */

void __thiscall TiXmlComment::CopyTo(TiXmlComment *this,TiXmlComment *param_1)

{
  char *__s;
  undefined4 uVar1;
  undefined4 uVar2;
  size_t sVar3;
  
  __s = *(char **)(this + 0x20);
  sVar3 = strlen(__s);
  std::string::assign((string *)(param_1 + 0x20),__s,sVar3);
  uVar1 = *(undefined4 *)(this + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(this + 0xc);
  uVar2 = *(undefined4 *)(this + 4);
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 4) = uVar2;
  return;
}
```
