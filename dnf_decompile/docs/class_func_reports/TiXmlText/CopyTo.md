# CopyTo

`_ZNK9TiXmlText6CopyToEPS_`

`TiXmlText::CopyTo(TiXmlText*) const`

| 类 | 地址 |
|---|---|
| `TiXmlText` | `0x087e2490` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e2490  _ZNK9TiXmlText6CopyToEPS_
#           TiXmlText::CopyTo(TiXmlText*) const
# range [0x087e2490, 0x087e24ea]
087e2490 +0x00:  push   %ebp
087e2491 +0x01:  mov    %esp,%ebp
087e2493 +0x03:  sub    $0x28,%esp
087e2496 +0x06:  mov    %esi,-0x8(%ebp)
087e2499 +0x09:  mov    0x8(%ebp),%esi
087e249c +0x0c:  mov    %ebx,-0xc(%ebp)
087e249f +0x0f:  mov    0xc(%ebp),%ebx
087e24a2 +0x12:  mov    %edi,-0x4(%ebp)
087e24a5 +0x15:  mov    0x20(%esi),%edi
087e24a8 +0x18:  mov    %edi,(%esp)
087e24ab +0x1b:  call   0807e3b0 <_init+0xca8>
087e24b0 +0x20:  mov    %edi,0x4(%esp)
087e24b4 +0x24:  mov    %eax,0x8(%esp)
087e24b8 +0x28:  lea    0x20(%ebx),%eax
087e24bb +0x2b:  mov    %eax,(%esp)
087e24be +0x2e:  call   087085a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x21b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x21b0
087e24c3 +0x33:  mov    0xc(%esi),%eax
087e24c6 +0x36:  mov    0x8(%esi),%edx
087e24c9 +0x39:  mov    %eax,0xc(%ebx)
087e24cc +0x3c:  mov    0x4(%esi),%eax
087e24cf +0x3f:  mov    %edx,0x8(%ebx)
087e24d2 +0x42:  mov    %eax,0x4(%ebx)
087e24d5 +0x45:  movzbl 0x2c(%esi),%eax
087e24d9 +0x49:  mov    %al,0x2c(%ebx)
087e24dc +0x4c:  mov    -0xc(%ebp),%ebx
087e24df +0x4f:  mov    -0x8(%ebp),%esi
087e24e2 +0x52:  mov    -0x4(%ebp),%edi
087e24e5 +0x55:  mov    %ebp,%esp
087e24e7 +0x57:  pop    %ebp
087e24e8 +0x58:  ret
087e24e9 +0x59:  nop
087e24ea +0x5a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// TiXmlText::CopyTo @ 0x87e2490

/* TiXmlText::CopyTo(TiXmlText*) const */

void __thiscall TiXmlText::CopyTo(TiXmlText *this,TiXmlText *param_1)

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
  param_1[0x2c] = this[0x2c];
  return;
}
```
