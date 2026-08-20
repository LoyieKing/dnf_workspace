# CNRDScriptData

`_ZN14CNRDScriptDataC1Ev`

`CNRDScriptData::CNRDScriptData()`

| 类 | 地址 |
|---|---|
| `CNRDScriptData` | `0x0807f858` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0807f858  _ZN14CNRDScriptDataC1Ev
#           CNRDScriptData::CNRDScriptData()
# range [0x0807f858, 0x0807f965]
0807f858 +0x000:  push   %ebp
0807f859 +0x001:  mov    %esp,%ebp
0807f85b +0x003:  push   %esi
0807f85c +0x004:  push   %ebx
0807f85d +0x005:  sub    $0x10,%esp
0807f860 +0x008:  mov    0x8(%ebp),%eax
0807f863 +0x00b:  mov    %eax,(%esp)
0807f866 +0x00e:  call   08ad69aa <_ZN10CharStringC1Ev>  ; CharString::CharString()
0807f86b +0x013:  mov    0x8(%ebp),%eax
0807f86e +0x016:  add    $0x4,%eax
0807f871 +0x019:  mov    %eax,(%esp)
0807f874 +0x01c:  call   08080348 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x36e>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x36e
0807f879 +0x021:  mov    0x8(%ebp),%eax
0807f87c +0x024:  add    $0x24,%eax
0807f87f +0x027:  mov    %eax,(%esp)
0807f882 +0x02a:  call   080803ee <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x414>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x414
0807f887 +0x02f:  mov    0x8(%ebp),%eax
0807f88a +0x032:  add    $0x44,%eax
0807f88d +0x035:  mov    %eax,(%esp)
0807f890 +0x038:  call   08080348 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x36e>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x36e
0807f895 +0x03d:  mov    0x8(%ebp),%eax
0807f898 +0x040:  add    $0x64,%eax
0807f89b +0x043:  mov    %eax,(%esp)
0807f89e +0x046:  call   080803ee <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x414>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x414
0807f8a3 +0x04b:  mov    0x8(%ebp),%eax
0807f8a6 +0x04e:  add    $0x84,%eax
0807f8ab +0x053:  mov    %eax,(%esp)
0807f8ae +0x056:  call   08080494 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x4ba>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x4ba
0807f8b3 +0x05b:  mov    0x8(%ebp),%eax
0807f8b6 +0x05e:  mov    %eax,(%esp)
0807f8b9 +0x061:  call   0807fa58 <_ZN14CNRDScriptData5clearEv>  ; CNRDScriptData::clear()
0807f8be +0x066:  mov    0x8(%ebp),%eax
0807f8c1 +0x069:  mov    %eax,(%esp)
0807f8c4 +0x06c:  call   0807fabc <_ZN14CNRDScriptData6createEv>  ; CNRDScriptData::create()
0807f8c9 +0x071:  add    $0x10,%esp
0807f8cc +0x074:  pop    %ebx
0807f8cd +0x075:  pop    %esi
0807f8ce +0x076:  pop    %ebp
0807f8cf +0x077:  ret
0807f8d0 +0x078:  mov    %edx,%ebx
0807f8d2 +0x07a:  mov    %eax,%esi
0807f8d4 +0x07c:  mov    0x8(%ebp),%eax
0807f8d7 +0x07f:  add    $0x84,%eax
0807f8dc +0x084:  mov    %eax,(%esp)
0807f8df +0x087:  call   080804fe <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x524>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x524
0807f8e4 +0x08c:  mov    %esi,%eax
0807f8e6 +0x08e:  mov    %ebx,%edx
0807f8e8 +0x090:  jmp    0807f8ea <+0x92>
0807f8ea +0x092:  mov    %edx,%ebx
0807f8ec +0x094:  mov    %eax,%esi
0807f8ee +0x096:  mov    0x8(%ebp),%eax
0807f8f1 +0x099:  add    $0x64,%eax
0807f8f4 +0x09c:  mov    %eax,(%esp)
0807f8f7 +0x09f:  call   08080458 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x47e>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x47e
0807f8fc +0x0a4:  mov    %esi,%eax
0807f8fe +0x0a6:  mov    %ebx,%edx
0807f900 +0x0a8:  jmp    0807f902 <+0xaa>
0807f902 +0x0aa:  mov    %edx,%ebx
0807f904 +0x0ac:  mov    %eax,%esi
0807f906 +0x0ae:  mov    0x8(%ebp),%eax
0807f909 +0x0b1:  add    $0x44,%eax
0807f90c +0x0b4:  mov    %eax,(%esp)
0807f90f +0x0b7:  call   080803b2 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x3d8>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x3d8
0807f914 +0x0bc:  mov    %esi,%eax
0807f916 +0x0be:  mov    %ebx,%edx
0807f918 +0x0c0:  jmp    0807f91a <+0xc2>
0807f91a +0x0c2:  mov    %edx,%ebx
0807f91c +0x0c4:  mov    %eax,%esi
0807f91e +0x0c6:  mov    0x8(%ebp),%eax
0807f921 +0x0c9:  add    $0x24,%eax
0807f924 +0x0cc:  mov    %eax,(%esp)
0807f927 +0x0cf:  call   08080458 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x47e>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x47e
0807f92c +0x0d4:  mov    %esi,%eax
0807f92e +0x0d6:  mov    %ebx,%edx
0807f930 +0x0d8:  jmp    0807f932 <+0xda>
0807f932 +0x0da:  mov    %edx,%ebx
0807f934 +0x0dc:  mov    %eax,%esi
0807f936 +0x0de:  mov    0x8(%ebp),%eax
0807f939 +0x0e1:  add    $0x4,%eax
0807f93c +0x0e4:  mov    %eax,(%esp)
0807f93f +0x0e7:  call   080803b2 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x3d8>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x3d8
0807f944 +0x0ec:  mov    %esi,%eax
0807f946 +0x0ee:  mov    %ebx,%edx
0807f948 +0x0f0:  jmp    0807f94a <+0xf2>
0807f94a +0x0f2:  mov    %edx,%ebx
0807f94c +0x0f4:  mov    %eax,%esi
0807f94e +0x0f6:  mov    0x8(%ebp),%eax
0807f951 +0x0f9:  mov    %eax,(%esp)
0807f954 +0x0fc:  call   08ad6bba <_ZN10CharStringD1Ev>  ; CharString::~CharString()
0807f959 +0x101:  mov    %esi,%eax
0807f95b +0x103:  mov    %ebx,%edx
0807f95d +0x105:  mov    %eax,(%esp)
0807f960 +0x108:  call   08ae3750 <_Unwind_Resume>
0807f965 +0x10d:  nop
```

## 反编译 C

```c
// CNRDScriptData::CNRDScriptData @ 0x807f858

/* CNRDScriptData::CNRDScriptData() */

void __thiscall CNRDScriptData::CNRDScriptData(CNRDScriptData *this)

{
  CharString::CharString((CharString *)this);
                    /* try { // try from 0807f874 to 0807f878 has its CatchHandler @ 0807f94a */
  StringUnorderedMap<CharStringHashTrait,int>::StringUnorderedMap
            ((StringUnorderedMap<CharStringHashTrait,int> *)(this + 4));
                    /* try { // try from 0807f882 to 0807f886 has its CatchHandler @ 0807f932 */
  StringUnorderedMap<CharStringHashTrait,float>::StringUnorderedMap
            ((StringUnorderedMap<CharStringHashTrait,float> *)(this + 0x24));
                    /* try { // try from 0807f890 to 0807f894 has its CatchHandler @ 0807f91a */
  StringUnorderedMap<CharStringHashTrait,int>::StringUnorderedMap
            ((StringUnorderedMap<CharStringHashTrait,int> *)(this + 0x44));
                    /* try { // try from 0807f89e to 0807f8a2 has its CatchHandler @ 0807f902 */
  StringUnorderedMap<CharStringHashTrait,float>::StringUnorderedMap
            ((StringUnorderedMap<CharStringHashTrait,float> *)(this + 100));
                    /* try { // try from 0807f8ae to 0807f8b2 has its CatchHandler @ 0807f8ea */
  StringUnorderedMap<CharStringHashTrait,std::string>::StringUnorderedMap
            ((StringUnorderedMap<CharStringHashTrait,std::string> *)(this + 0x84));
                    /* try { // try from 0807f8b9 to 0807f8bd has its CatchHandler @ 0807f8d0 */
  clear(this);
  create();
  return;
}
```
