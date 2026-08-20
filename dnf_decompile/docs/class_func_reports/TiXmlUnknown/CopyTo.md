# CopyTo

`_ZNK12TiXmlUnknown6CopyToEPS_`

`TiXmlUnknown::CopyTo(TiXmlUnknown*) const`

| 类 | 地址 |
|---|---|
| `TiXmlUnknown` | `0x087e2380` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e2380  _ZNK12TiXmlUnknown6CopyToEPS_
#           TiXmlUnknown::CopyTo(TiXmlUnknown*) const
# range [0x087e2380, 0x087e23d9]
087e2380 +0x00:  push   %ebp
087e2381 +0x01:  mov    %esp,%ebp
087e2383 +0x03:  sub    $0x28,%esp
087e2386 +0x06:  mov    %esi,-0x8(%ebp)
087e2389 +0x09:  mov    0x8(%ebp),%esi
087e238c +0x0c:  mov    %ebx,-0xc(%ebp)
087e238f +0x0f:  mov    0xc(%ebp),%ebx
087e2392 +0x12:  mov    %edi,-0x4(%ebp)
087e2395 +0x15:  mov    0x20(%esi),%edi
087e2398 +0x18:  mov    %edi,(%esp)
087e239b +0x1b:  call   0807e3b0 <_init+0xca8>
087e23a0 +0x20:  mov    %edi,0x4(%esp)
087e23a4 +0x24:  mov    %eax,0x8(%esp)
087e23a8 +0x28:  lea    0x20(%ebx),%eax
087e23ab +0x2b:  mov    %eax,(%esp)
087e23ae +0x2e:  call   087085a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x21b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x21b0
087e23b3 +0x33:  mov    0xc(%esi),%eax
087e23b6 +0x36:  mov    0x8(%esi),%edx
087e23b9 +0x39:  mov    %eax,0xc(%ebx)
087e23bc +0x3c:  mov    0x4(%esi),%eax
087e23bf +0x3f:  mov    %edx,0x8(%ebx)
087e23c2 +0x42:  mov    %eax,0x4(%ebx)
087e23c5 +0x45:  mov    -0xc(%ebp),%ebx
087e23c8 +0x48:  mov    -0x8(%ebp),%esi
087e23cb +0x4b:  mov    -0x4(%ebp),%edi
087e23ce +0x4e:  mov    %ebp,%esp
087e23d0 +0x50:  pop    %ebp
087e23d1 +0x51:  ret
087e23d2 +0x52:  lea    0x0(%esi,%eiz,1),%esi
087e23d9 +0x59:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TiXmlUnknown::CopyTo @ 0x87e2380

/* TiXmlUnknown::CopyTo(TiXmlUnknown*) const */

void __thiscall TiXmlUnknown::CopyTo(TiXmlUnknown *this,TiXmlUnknown *param_1)

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
