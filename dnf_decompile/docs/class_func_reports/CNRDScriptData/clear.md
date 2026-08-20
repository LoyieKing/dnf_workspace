# clear

`_ZN14CNRDScriptData5clearEv`

`CNRDScriptData::clear()`

| 类 | 地址 |
|---|---|
| `CNRDScriptData` | `0x0807fa58` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0807fa58  _ZN14CNRDScriptData5clearEv
#           CNRDScriptData::clear()
# range [0x0807fa58, 0x0807fabb]
0807fa58 +0x00:  push   %ebp
0807fa59 +0x01:  mov    %esp,%ebp
0807fa5b +0x03:  sub    $0x18,%esp
0807fa5e +0x06:  mov    0x8(%ebp),%eax
0807fa61 +0x09:  movl   $"",0x4(%esp)
0807fa69 +0x11:  mov    %eax,(%esp)
0807fa6c +0x14:  call   08ad70c0 <_ZN10CharStringaSEPKc>  ; CharString::operator=(char const*)
0807fa71 +0x19:  mov    0x8(%ebp),%eax
0807fa74 +0x1c:  add    $0x4,%eax
0807fa77 +0x1f:  mov    %eax,(%esp)
0807fa7a +0x22:  call   08080966 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x98c>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x98c
0807fa7f +0x27:  mov    0x8(%ebp),%eax
0807fa82 +0x2a:  add    $0x24,%eax
0807fa85 +0x2d:  mov    %eax,(%esp)
0807fa88 +0x30:  call   0808097a <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9a0>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9a0
0807fa8d +0x35:  mov    0x8(%ebp),%eax
0807fa90 +0x38:  add    $0x44,%eax
0807fa93 +0x3b:  mov    %eax,(%esp)
0807fa96 +0x3e:  call   08080966 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x98c>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x98c
0807fa9b +0x43:  mov    0x8(%ebp),%eax
0807fa9e +0x46:  add    $0x64,%eax
0807faa1 +0x49:  mov    %eax,(%esp)
0807faa4 +0x4c:  call   0808097a <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9a0>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9a0
0807faa9 +0x51:  mov    0x8(%ebp),%eax
0807faac +0x54:  add    $0x84,%eax
0807fab1 +0x59:  mov    %eax,(%esp)
0807fab4 +0x5c:  call   0808098e <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9b4>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9b4
0807fab9 +0x61:  leave
0807faba +0x62:  ret
0807fabb +0x63:  nop
```

## 反编译 C

```c
// CNRDScriptData::clear @ 0x807fa58

/* CNRDScriptData::clear() */

void __thiscall CNRDScriptData::clear(CNRDScriptData *this)

{
  CharString::operator=((CharString *)this,"");
  StringUnorderedMap<CharStringHashTrait,int>::clear
            ((StringUnorderedMap<CharStringHashTrait,int> *)(this + 4));
  StringUnorderedMap<CharStringHashTrait,float>::clear
            ((StringUnorderedMap<CharStringHashTrait,float> *)(this + 0x24));
  StringUnorderedMap<CharStringHashTrait,int>::clear
            ((StringUnorderedMap<CharStringHashTrait,int> *)(this + 0x44));
  StringUnorderedMap<CharStringHashTrait,float>::clear
            ((StringUnorderedMap<CharStringHashTrait,float> *)(this + 100));
  StringUnorderedMap<CharStringHashTrait,std::string>::clear
            ((StringUnorderedMap<CharStringHashTrait,std::string> *)(this + 0x84));
  return;
}
```
