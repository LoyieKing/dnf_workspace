# CopyTo

`_ZNK9TiXmlNode6CopyToEPS_`

`TiXmlNode::CopyTo(TiXmlNode*) const`

| 类 | 地址 |
|---|---|
| `TiXmlNode` | `0x087e1e30` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e1e30  _ZNK9TiXmlNode6CopyToEPS_
#           TiXmlNode::CopyTo(TiXmlNode*) const
# range [0x087e1e30, 0x087e1e89]
087e1e30 +0x00:  push   %ebp
087e1e31 +0x01:  mov    %esp,%ebp
087e1e33 +0x03:  sub    $0x28,%esp
087e1e36 +0x06:  mov    %esi,-0x8(%ebp)
087e1e39 +0x09:  mov    0x8(%ebp),%esi
087e1e3c +0x0c:  mov    %ebx,-0xc(%ebp)
087e1e3f +0x0f:  mov    0xc(%ebp),%ebx
087e1e42 +0x12:  mov    %edi,-0x4(%ebp)
087e1e45 +0x15:  mov    0x20(%esi),%edi
087e1e48 +0x18:  mov    %edi,(%esp)
087e1e4b +0x1b:  call   0807e3b0 <_init+0xca8>
087e1e50 +0x20:  mov    %edi,0x4(%esp)
087e1e54 +0x24:  mov    %eax,0x8(%esp)
087e1e58 +0x28:  lea    0x20(%ebx),%eax
087e1e5b +0x2b:  mov    %eax,(%esp)
087e1e5e +0x2e:  call   087085a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x21b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x21b0
087e1e63 +0x33:  mov    0xc(%esi),%eax
087e1e66 +0x36:  mov    0x8(%esi),%edx
087e1e69 +0x39:  mov    %eax,0xc(%ebx)
087e1e6c +0x3c:  mov    0x4(%esi),%eax
087e1e6f +0x3f:  mov    %edx,0x8(%ebx)
087e1e72 +0x42:  mov    %eax,0x4(%ebx)
087e1e75 +0x45:  mov    -0xc(%ebp),%ebx
087e1e78 +0x48:  mov    -0x8(%ebp),%esi
087e1e7b +0x4b:  mov    -0x4(%ebp),%edi
087e1e7e +0x4e:  mov    %ebp,%esp
087e1e80 +0x50:  pop    %ebp
087e1e81 +0x51:  ret
087e1e82 +0x52:  lea    0x0(%esi,%eiz,1),%esi
087e1e89 +0x59:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TiXmlNode::CopyTo @ 0x87e1e30

/* TiXmlNode::CopyTo(TiXmlNode*) const */

void __thiscall TiXmlNode::CopyTo(TiXmlNode *this,TiXmlNode *param_1)

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
