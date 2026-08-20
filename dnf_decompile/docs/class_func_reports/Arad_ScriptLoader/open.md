# open

`_ZN17Arad_ScriptLoader4openEPKc`

`Arad_ScriptLoader::open(char const*)`

| 类 | 地址 |
|---|---|
| `Arad_ScriptLoader` | `0x081a1eec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081a1eec  _ZN17Arad_ScriptLoader4openEPKc
#           Arad_ScriptLoader::open(char const*)
# range [0x081a1eec, 0x081a1fcd]
081a1eec +0x00:  push   %ebp
081a1eed +0x01:  mov    %esp,%ebp
081a1eef +0x03:  sub    $0x28,%esp
081a1ef2 +0x06:  mov    0xc(%ebp),%eax
081a1ef5 +0x09:  mov    %eax,0x4(%esp)
081a1ef9 +0x0d:  movl   $"",(%esp)
081a1f00 +0x14:  call   088bbd29 <_Z18loadRDARScriptFilePKcS0_>  ; loadRDARScriptFile(char const*, char const*)
081a1f05 +0x19:  xor    $0x1,%eax
081a1f08 +0x1c:  test   %al,%al
081a1f0a +0x1e:  je     081a1f16 <+0x2a>
081a1f0c +0x20:  mov    $0x10,%eax
081a1f11 +0x25:  jmp    081a1fcc <+0xe0>
081a1f16 +0x2a:  movl   $&g_dnfLex,(%esp)
081a1f1d +0x31:  call   08ace930 <_ZN13DNFLexWrapper18getInputStreamSizeEv>  ; DNFLexWrapper::getInputStreamSize()
081a1f22 +0x36:  mov    %eax,-0x14(%ebp)
081a1f25 +0x39:  mov    -0x14(%ebp),%eax
081a1f28 +0x3c:  add    $0x1,%eax
081a1f2b +0x3f:  mov    %eax,(%esp)
081a1f2e +0x42:  call   08722dc0 <_Znaj>  ; operator new[](unsigned int)
081a1f33 +0x47:  mov    %eax,-0x10(%ebp)
081a1f36 +0x4a:  mov    -0x14(%ebp),%eax
081a1f39 +0x4d:  add    $0x1,%eax
081a1f3c +0x50:  mov    %eax,0x8(%esp)
081a1f40 +0x54:  movl   $0x0,0x4(%esp)
081a1f48 +0x5c:  mov    -0x10(%ebp),%eax
081a1f4b +0x5f:  mov    %eax,(%esp)
081a1f4e +0x62:  call   0807dcc0 <_init+0x5b8>
081a1f53 +0x67:  movl   $&g_dnfLex,(%esp)
081a1f5a +0x6e:  call   08ace900 <_ZN13DNFLexWrapper14getInputStreamEv>  ; DNFLexWrapper::getInputStream()
081a1f5f +0x73:  mov    -0x14(%ebp),%edx
081a1f62 +0x76:  mov    %edx,0x8(%esp)
081a1f66 +0x7a:  mov    -0x10(%ebp),%edx
081a1f69 +0x7d:  mov    %edx,0x4(%esp)
081a1f6d +0x81:  mov    %eax,(%esp)
081a1f70 +0x84:  call   086e5bf0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x5b50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x5b50
081a1f75 +0x89:  mov    -0x14(%ebp),%eax
081a1f78 +0x8c:  add    -0x10(%ebp),%eax
081a1f7b +0x8f:  movb   $0xff,(%eax)
081a1f7e +0x92:  mov    0x8(%ebp),%eax
081a1f81 +0x95:  mov    (%eax),%eax
081a1f83 +0x97:  add    $0x4,%eax
081a1f86 +0x9a:  mov    (%eax),%edx
081a1f88 +0x9c:  mov    -0x10(%ebp),%eax
081a1f8b +0x9f:  mov    %eax,0x4(%esp)
081a1f8f +0xa3:  mov    0x8(%ebp),%eax
081a1f92 +0xa6:  mov    %eax,(%esp)
081a1f95 +0xa9:  call   *%edx
081a1f97 +0xab:  mov    %eax,-0xc(%ebp)
081a1f9a +0xae:  cmpl   $0x0,-0xc(%ebp)
081a1f9e +0xb2:  je     081a1fb6 <+0xca>
081a1fa0 +0xb4:  cmpl   $0x0,-0x10(%ebp)
081a1fa4 +0xb8:  je     081a1fb1 <+0xc5>
081a1fa6 +0xba:  mov    -0x10(%ebp),%eax
081a1fa9 +0xbd:  mov    %eax,(%esp)
081a1fac +0xc0:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
081a1fb1 +0xc5:  mov    -0xc(%ebp),%eax
081a1fb4 +0xc8:  jmp    081a1fcc <+0xe0>
081a1fb6 +0xca:  cmpl   $0x0,-0x10(%ebp)
081a1fba +0xce:  je     081a1fc7 <+0xdb>
081a1fbc +0xd0:  mov    -0x10(%ebp),%eax
081a1fbf +0xd3:  mov    %eax,(%esp)
081a1fc2 +0xd6:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
081a1fc7 +0xdb:  mov    $0x0,%eax
081a1fcc +0xe0:  leave
081a1fcd +0xe1:  ret
```

## 反编译 C

```c
// Arad_ScriptLoader::open @ 0x81a1eec

/* Arad_ScriptLoader::open(char const*) */

int __thiscall Arad_ScriptLoader::open(Arad_ScriptLoader *this,char *param_1)

{
  char cVar1;
  int iVar2;
  char *__s;
  istream *this_00;
  
  cVar1 = loadRDARScriptFile("",param_1);
  if (cVar1 == '\x01') {
    iVar2 = DNFLexWrapper::getInputStreamSize((DNFLexWrapper *)g_dnfLex);
    __s = operator_new__(iVar2 + 1);
    memset(__s,0,iVar2 + 1);
    this_00 = DNFLexWrapper::getInputStream((DNFLexWrapper *)g_dnfLex);
    std::istream::read((istream *)this_00,__s,iVar2);
    __s[iVar2] = -1;
    iVar2 = (**(code **)(*(int *)this + 4))(this,__s);
    if (iVar2 == 0) {
      if (__s != (char *)0x0) {
        operator_delete__(__s);
      }
      iVar2 = 0;
    }
    else if (__s != (char *)0x0) {
      operator_delete__(__s);
    }
  }
  else {
    iVar2 = 0x10;
  }
  return iVar2;
}
```
