# CExtractionMgr

`_ZN17expert_extraction14CExtractionMgrC1Ev`

`expert_extraction::CExtractionMgr::CExtractionMgr()`

| 类 | 地址 |
|---|---|
| `expert_extraction::CExtractionMgr` | `0x084a302e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a302e  _ZN17expert_extraction14CExtractionMgrC1Ev
#           expert_extraction::CExtractionMgr::CExtractionMgr()
# range [0x084a302e, 0x084a3119]
084a302e +0x00:  push   %ebp
084a302f +0x01:  mov    %esp,%ebp
084a3031 +0x03:  push   %edi
084a3032 +0x04:  push   %esi
084a3033 +0x05:  push   %ebx
084a3034 +0x06:  sub    $0x1c,%esp
084a3037 +0x09:  movl   $0x8,(%esp)
084a303e +0x10:  call   08724450 <_Znwj>  ; operator new(unsigned int)
084a3043 +0x15:  mov    %eax,%ebx
084a3045 +0x17:  mov    %ebx,%eax
084a3047 +0x19:  movl   $0x0,(%eax)
084a304d +0x1f:  movl   $0x0,0x4(%eax)
084a3054 +0x26:  mov    %eax,(%esp)
084a3057 +0x29:  call   084a463c <_GLOBAL__I__ZN17expert_extraction16GetExtracterTypeE20ENUM_EXPERT_JOB_TYPE+0x1a3>  ; global constructors keyed to expert_extraction::GetExtracterType(ENUM_EXPERT_JOB_TYPE)+0x1a3
084a305c +0x2e:  jmp    084a3076 <+0x48>
084a305e +0x30:  mov    %edx,%esi
084a3060 +0x32:  mov    %eax,%edi
084a3062 +0x34:  mov    %ebx,(%esp)
084a3065 +0x37:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
084a306a +0x3c:  mov    %edi,%eax
084a306c +0x3e:  mov    %esi,%edx
084a306e +0x40:  mov    %eax,(%esp)
084a3071 +0x43:  call   08ae3750 <_Unwind_Resume>
084a3076 +0x48:  mov    %ebx,%eax
084a3078 +0x4a:  mov    %eax,%edx
084a307a +0x4c:  mov    0x8(%ebp),%eax
084a307d +0x4f:  mov    %edx,(%eax)
084a307f +0x51:  movl   $0x8,(%esp)
084a3086 +0x58:  call   08724450 <_Znwj>  ; operator new(unsigned int)
084a308b +0x5d:  mov    %eax,%ebx
084a308d +0x5f:  mov    %ebx,%eax
084a308f +0x61:  movl   $0x0,(%eax)
084a3095 +0x67:  movl   $0x0,0x4(%eax)
084a309c +0x6e:  mov    %eax,(%esp)
084a309f +0x71:  call   084a4658 <_GLOBAL__I__ZN17expert_extraction16GetExtracterTypeE20ENUM_EXPERT_JOB_TYPE+0x1bf>  ; global constructors keyed to expert_extraction::GetExtracterType(ENUM_EXPERT_JOB_TYPE)+0x1bf
084a30a4 +0x76:  jmp    084a30be <+0x90>
084a30a6 +0x78:  mov    %edx,%esi
084a30a8 +0x7a:  mov    %eax,%edi
084a30aa +0x7c:  mov    %ebx,(%esp)
084a30ad +0x7f:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
084a30b2 +0x84:  mov    %edi,%eax
084a30b4 +0x86:  mov    %esi,%edx
084a30b6 +0x88:  mov    %eax,(%esp)
084a30b9 +0x8b:  call   08ae3750 <_Unwind_Resume>
084a30be +0x90:  mov    %ebx,%eax
084a30c0 +0x92:  mov    %eax,%edx
084a30c2 +0x94:  mov    0x8(%ebp),%eax
084a30c5 +0x97:  mov    %edx,0x4(%eax)
084a30c8 +0x9a:  movl   $0x8,(%esp)
084a30cf +0xa1:  call   08724450 <_Znwj>  ; operator new(unsigned int)
084a30d4 +0xa6:  mov    %eax,%ebx
084a30d6 +0xa8:  mov    %ebx,%eax
084a30d8 +0xaa:  movl   $0x0,(%eax)
084a30de +0xb0:  movl   $0x0,0x4(%eax)
084a30e5 +0xb7:  mov    %eax,(%esp)
084a30e8 +0xba:  call   084a4674 <_GLOBAL__I__ZN17expert_extraction16GetExtracterTypeE20ENUM_EXPERT_JOB_TYPE+0x1db>  ; global constructors keyed to expert_extraction::GetExtracterType(ENUM_EXPERT_JOB_TYPE)+0x1db
084a30ed +0xbf:  jmp    084a3107 <+0xd9>
084a30ef +0xc1:  mov    %edx,%esi
084a30f1 +0xc3:  mov    %eax,%edi
084a30f3 +0xc5:  mov    %ebx,(%esp)
084a30f6 +0xc8:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
084a30fb +0xcd:  mov    %edi,%eax
084a30fd +0xcf:  mov    %esi,%edx
084a30ff +0xd1:  mov    %eax,(%esp)
084a3102 +0xd4:  call   08ae3750 <_Unwind_Resume>
084a3107 +0xd9:  mov    %ebx,%eax
084a3109 +0xdb:  mov    %eax,%edx
084a310b +0xdd:  mov    0x8(%ebp),%eax
084a310e +0xe0:  mov    %edx,0x8(%eax)
084a3111 +0xe3:  add    $0x1c,%esp
084a3114 +0xe6:  pop    %ebx
084a3115 +0xe7:  pop    %esi
084a3116 +0xe8:  pop    %edi
084a3117 +0xe9:  pop    %ebp
084a3118 +0xea:  ret
084a3119 +0xeb:  nop
```

## 反编译 C

```c
// expert_extraction::CExtractionMgr::CExtractionMgr @ 0x84a302e

/* expert_extraction::CExtractionMgr::CExtractionMgr() */

void __thiscall expert_extraction::CExtractionMgr::CExtractionMgr(CExtractionMgr *this)

{
  CAlchemistExtraction *this_00;
  CEnchanterExtraction *this_01;
  CDollControllerExtraction *this_02;
  
  this_00 = operator_new(8);
  *(undefined4 *)this_00 = 0;
  *(undefined4 *)(this_00 + 4) = 0;
                    /* try { // try from 084a3057 to 084a305b has its CatchHandler @ 084a305e */
  CAlchemistExtraction::CAlchemistExtraction(this_00);
  *(CAlchemistExtraction **)this = this_00;
  this_01 = operator_new(8);
  *(undefined4 *)this_01 = 0;
  *(undefined4 *)(this_01 + 4) = 0;
                    /* try { // try from 084a309f to 084a30a3 has its CatchHandler @ 084a30a6 */
  CEnchanterExtraction::CEnchanterExtraction(this_01);
  *(CEnchanterExtraction **)(this + 4) = this_01;
  this_02 = operator_new(8);
  *(undefined4 *)this_02 = 0;
  *(undefined4 *)(this_02 + 4) = 0;
                    /* try { // try from 084a30e8 to 084a30ec has its CatchHandler @ 084a30ef */
  CDollControllerExtraction::CDollControllerExtraction(this_02);
  *(CDollControllerExtraction **)(this + 8) = this_02;
  return;
}
```
