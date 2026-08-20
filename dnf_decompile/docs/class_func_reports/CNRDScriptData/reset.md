# reset

`_ZN14CNRDScriptData5resetEv`

`CNRDScriptData::reset()`

| 类 | 地址 |
|---|---|
| `CNRDScriptData` | `0x0807fac8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0807fac8  _ZN14CNRDScriptData5resetEv
#           CNRDScriptData::reset()
# range [0x0807fac8, 0x0807fb2b]
0807fac8 +0x00:  push   %ebp
0807fac9 +0x01:  mov    %esp,%ebp
0807facb +0x03:  sub    $0x18,%esp
0807face +0x06:  mov    0x8(%ebp),%eax
0807fad1 +0x09:  movl   $"",0x4(%esp)
0807fad9 +0x11:  mov    %eax,(%esp)
0807fadc +0x14:  call   08ad70c0 <_ZN10CharStringaSEPKc>  ; CharString::operator=(char const*)
0807fae1 +0x19:  mov    0x8(%ebp),%eax
0807fae4 +0x1c:  add    $0x4,%eax
0807fae7 +0x1f:  mov    %eax,(%esp)
0807faea +0x22:  call   08080966 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x98c>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x98c
0807faef +0x27:  mov    0x8(%ebp),%eax
0807faf2 +0x2a:  add    $0x24,%eax
0807faf5 +0x2d:  mov    %eax,(%esp)
0807faf8 +0x30:  call   0808097a <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9a0>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9a0
0807fafd +0x35:  mov    0x8(%ebp),%eax
0807fb00 +0x38:  add    $0x44,%eax
0807fb03 +0x3b:  mov    %eax,(%esp)
0807fb06 +0x3e:  call   08080966 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x98c>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x98c
0807fb0b +0x43:  mov    0x8(%ebp),%eax
0807fb0e +0x46:  add    $0x64,%eax
0807fb11 +0x49:  mov    %eax,(%esp)
0807fb14 +0x4c:  call   0808097a <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9a0>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9a0
0807fb19 +0x51:  mov    0x8(%ebp),%eax
0807fb1c +0x54:  add    $0x84,%eax
0807fb21 +0x59:  mov    %eax,(%esp)
0807fb24 +0x5c:  call   0808098e <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9b4>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9b4
0807fb29 +0x61:  leave
0807fb2a +0x62:  ret
0807fb2b +0x63:  nop
```

## 反编译 C

```c
// CNRDScriptData::reset @ 0x807fac8

/* CNRDScriptData::reset() */

void __thiscall CNRDScriptData::reset(CNRDScriptData *this)

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
