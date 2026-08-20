# LoadFile

`_ZN13TiXmlDocument8LoadFileE13TiXmlEncoding`

`TiXmlDocument::LoadFile(TiXmlEncoding)`

| 类 | 地址 |
|---|---|
| `TiXmlDocument` | `0x087e2b40` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e2b40  _ZN13TiXmlDocument8LoadFileE13TiXmlEncoding
#           TiXmlDocument::LoadFile(TiXmlEncoding)
# range [0x087e2b40, 0x087e2b69]
087e2b40 +0x00:  push   %ebp
087e2b41 +0x01:  mov    %esp,%ebp
087e2b43 +0x03:  sub    $0x18,%esp
087e2b46 +0x06:  mov    0x8(%ebp),%eax
087e2b49 +0x09:  mov    0xc(%ebp),%edx
087e2b4c +0x0c:  mov    %edx,0x8(%esp)
087e2b50 +0x10:  mov    0x20(%eax),%edx
087e2b53 +0x13:  mov    %eax,(%esp)
087e2b56 +0x16:  mov    %edx,0x4(%esp)
087e2b5a +0x1a:  call   087e2a30 <_ZN13TiXmlDocument8LoadFileEPKc13TiXmlEncoding>  ; TiXmlDocument::LoadFile(char const*, TiXmlEncoding)
087e2b5f +0x1f:  leave
087e2b60 +0x20:  ret
087e2b61 +0x21:  nop
087e2b62 +0x22:  lea    0x0(%esi,%eiz,1),%esi
087e2b69 +0x29:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TiXmlDocument::LoadFile @ 0x87e2b40

/* TiXmlDocument::LoadFile(TiXmlEncoding) */

void __thiscall TiXmlDocument::LoadFile(TiXmlDocument *this,undefined4 param_2)

{
  LoadFile(this,*(undefined4 *)(this + 0x20),param_2);
  return;
}
```
