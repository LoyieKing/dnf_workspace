# ~CNRDScriptData

`_ZN14CNRDScriptDataD1Ev`

`CNRDScriptData::~CNRDScriptData()`

| 类 | 地址 |
|---|---|
| `CNRDScriptData` | `0x0807f966` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0807f966  _ZN14CNRDScriptDataD1Ev
#           CNRDScriptData::~CNRDScriptData()
# range [0x0807f966, 0x0807fa57]
0807f966 +0x00:  push   %ebp
0807f967 +0x01:  mov    %esp,%ebp
0807f969 +0x03:  push   %esi
0807f96a +0x04:  push   %ebx
0807f96b +0x05:  sub    $0x10,%esp
0807f96e +0x08:  mov    0x8(%ebp),%eax
0807f971 +0x0b:  mov    %eax,(%esp)
0807f974 +0x0e:  call   0807fac2 <_ZN14CNRDScriptData7destroyEv>  ; CNRDScriptData::destroy()
0807f979 +0x13:  mov    0x8(%ebp),%eax
0807f97c +0x16:  add    $0x84,%eax
0807f981 +0x1b:  mov    %eax,(%esp)
0807f984 +0x1e:  call   080804fe <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x524>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x524
0807f989 +0x23:  jmp    0807f9a3 <+0x3d>
0807f98b +0x25:  mov    %edx,%ebx
0807f98d +0x27:  mov    %eax,%esi
0807f98f +0x29:  mov    0x8(%ebp),%eax
0807f992 +0x2c:  add    $0x64,%eax
0807f995 +0x2f:  mov    %eax,(%esp)
0807f998 +0x32:  call   08080458 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x47e>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x47e
0807f99d +0x37:  mov    %esi,%eax
0807f99f +0x39:  mov    %ebx,%edx
0807f9a1 +0x3b:  jmp    0807f9b3 <+0x4d>
0807f9a3 +0x3d:  mov    0x8(%ebp),%eax
0807f9a6 +0x40:  add    $0x64,%eax
0807f9a9 +0x43:  mov    %eax,(%esp)
0807f9ac +0x46:  call   08080458 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x47e>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x47e
0807f9b1 +0x4b:  jmp    0807f9cb <+0x65>
0807f9b3 +0x4d:  mov    %edx,%ebx
0807f9b5 +0x4f:  mov    %eax,%esi
0807f9b7 +0x51:  mov    0x8(%ebp),%eax
0807f9ba +0x54:  add    $0x44,%eax
0807f9bd +0x57:  mov    %eax,(%esp)
0807f9c0 +0x5a:  call   080803b2 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x3d8>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x3d8
0807f9c5 +0x5f:  mov    %esi,%eax
0807f9c7 +0x61:  mov    %ebx,%edx
0807f9c9 +0x63:  jmp    0807f9db <+0x75>
0807f9cb +0x65:  mov    0x8(%ebp),%eax
0807f9ce +0x68:  add    $0x44,%eax
0807f9d1 +0x6b:  mov    %eax,(%esp)
0807f9d4 +0x6e:  call   080803b2 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x3d8>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x3d8
0807f9d9 +0x73:  jmp    0807f9f3 <+0x8d>
0807f9db +0x75:  mov    %edx,%ebx
0807f9dd +0x77:  mov    %eax,%esi
0807f9df +0x79:  mov    0x8(%ebp),%eax
0807f9e2 +0x7c:  add    $0x24,%eax
0807f9e5 +0x7f:  mov    %eax,(%esp)
0807f9e8 +0x82:  call   08080458 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x47e>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x47e
0807f9ed +0x87:  mov    %esi,%eax
0807f9ef +0x89:  mov    %ebx,%edx
0807f9f1 +0x8b:  jmp    0807fa03 <+0x9d>
0807f9f3 +0x8d:  mov    0x8(%ebp),%eax
0807f9f6 +0x90:  add    $0x24,%eax
0807f9f9 +0x93:  mov    %eax,(%esp)
0807f9fc +0x96:  call   08080458 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x47e>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x47e
0807fa01 +0x9b:  jmp    0807fa1b <+0xb5>
0807fa03 +0x9d:  mov    %edx,%ebx
0807fa05 +0x9f:  mov    %eax,%esi
0807fa07 +0xa1:  mov    0x8(%ebp),%eax
0807fa0a +0xa4:  add    $0x4,%eax
0807fa0d +0xa7:  mov    %eax,(%esp)
0807fa10 +0xaa:  call   080803b2 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x3d8>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x3d8
0807fa15 +0xaf:  mov    %esi,%eax
0807fa17 +0xb1:  mov    %ebx,%edx
0807fa19 +0xb3:  jmp    0807fa2b <+0xc5>
0807fa1b +0xb5:  mov    0x8(%ebp),%eax
0807fa1e +0xb8:  add    $0x4,%eax
0807fa21 +0xbb:  mov    %eax,(%esp)
0807fa24 +0xbe:  call   080803b2 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x3d8>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x3d8
0807fa29 +0xc3:  jmp    0807fa46 <+0xe0>
0807fa2b +0xc5:  mov    %edx,%ebx
0807fa2d +0xc7:  mov    %eax,%esi
0807fa2f +0xc9:  mov    0x8(%ebp),%eax
0807fa32 +0xcc:  mov    %eax,(%esp)
0807fa35 +0xcf:  call   08ad6bba <_ZN10CharStringD1Ev>  ; CharString::~CharString()
0807fa3a +0xd4:  mov    %esi,%eax
0807fa3c +0xd6:  mov    %ebx,%edx
0807fa3e +0xd8:  mov    %eax,(%esp)
0807fa41 +0xdb:  call   08ae3750 <_Unwind_Resume>
0807fa46 +0xe0:  mov    0x8(%ebp),%eax
0807fa49 +0xe3:  mov    %eax,(%esp)
0807fa4c +0xe6:  call   08ad6bba <_ZN10CharStringD1Ev>  ; CharString::~CharString()
0807fa51 +0xeb:  add    $0x10,%esp
0807fa54 +0xee:  pop    %ebx
0807fa55 +0xef:  pop    %esi
0807fa56 +0xf0:  pop    %ebp
0807fa57 +0xf1:  ret
```

## 反编译 C

```c
// CNRDScriptData::~CNRDScriptData @ 0x807f966

/* CNRDScriptData::~CNRDScriptData() */

void __thiscall CNRDScriptData::~CNRDScriptData(CNRDScriptData *this)

{
  int in_stack_ffffffe8;
  
  destroy();
                    /* try { // try from 0807f984 to 0807f988 has its CatchHandler @ 0807f98b */
  StringUnorderedMap<CharStringHashTrait,std::string>::~StringUnorderedMap
            ((StringUnorderedMap<CharStringHashTrait,std::string> *)(this + 0x84));
                    /* try { // try from 0807f9ac to 0807f9b0 has its CatchHandler @ 0807f9b3 */
  StringUnorderedMap<CharStringHashTrait,float>::~StringUnorderedMap
            ((StringUnorderedMap<CharStringHashTrait,float> *)(this + 100));
                    /* try { // try from 0807f9d4 to 0807f9d8 has its CatchHandler @ 0807f9db */
  StringUnorderedMap<CharStringHashTrait,int>::~StringUnorderedMap
            ((StringUnorderedMap<CharStringHashTrait,int> *)(this + 0x44));
                    /* try { // try from 0807f9fc to 0807fa00 has its CatchHandler @ 0807fa03 */
  StringUnorderedMap<CharStringHashTrait,float>::~StringUnorderedMap
            ((StringUnorderedMap<CharStringHashTrait,float> *)(this + 0x24));
                    /* try { // try from 0807fa24 to 0807fa28 has its CatchHandler @ 0807fa2b */
  StringUnorderedMap<CharStringHashTrait,int>::~StringUnorderedMap
            ((StringUnorderedMap<CharStringHashTrait,int> *)(this + 4));
  CharString::~CharString((CharString *)this,in_stack_ffffffe8);
  return;
}
```
