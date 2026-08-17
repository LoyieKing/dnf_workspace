# expert_extraction__CExtractionMgr

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## CExtractionMgr

```asm
// === 084a302e expert_extraction::CExtractionMgr::CExtractionMgr  [0x084a302e-0x84a3119] ===
 84a302e:	55                   	push   %ebp
 84a302f:	89 e5                	mov    %esp,%ebp
 84a3031:	57                   	push   %edi
 84a3032:	56                   	push   %esi
 84a3033:	53                   	push   %ebx
 84a3034:	83 ec 1c             	sub    $0x1c,%esp
 84a3037:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 84a303e:	e8 0d 14 28 00       	call   8724450 <_Znwj>
 84a3043:	89 c3                	mov    %eax,%ebx
 84a3045:	89 d8                	mov    %ebx,%eax
 84a3047:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 84a304d:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 84a3054:	89 04 24             	mov    %eax,(%esp)
 84a3057:	e8 e0 15 00 00       	call   84a463c <_ZN17expert_extraction20CAlchemistExtractionC1Ev>
 84a305c:	eb 18                	jmp    84a3076 <_ZN17expert_extraction14CExtractionMgrC1Ev+0x48>
 84a305e:	89 d6                	mov    %edx,%esi
 84a3060:	89 c7                	mov    %eax,%edi
 84a3062:	89 1c 24             	mov    %ebx,(%esp)
 84a3065:	e8 86 14 28 00       	call   87244f0 <_ZdlPv>
 84a306a:	89 f8                	mov    %edi,%eax
 84a306c:	89 f2                	mov    %esi,%edx
 84a306e:	89 04 24             	mov    %eax,(%esp)
 84a3071:	e8 da 06 64 00       	call   8ae3750 <_Unwind_Resume>
 84a3076:	89 d8                	mov    %ebx,%eax
 84a3078:	89 c2                	mov    %eax,%edx
 84a307a:	8b 45 08             	mov    0x8(%ebp),%eax
 84a307d:	89 10                	mov    %edx,(%eax)
 84a307f:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 84a3086:	e8 c5 13 28 00       	call   8724450 <_Znwj>
 84a308b:	89 c3                	mov    %eax,%ebx
 84a308d:	89 d8                	mov    %ebx,%eax
 84a308f:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 84a3095:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 84a309c:	89 04 24             	mov    %eax,(%esp)
 84a309f:	e8 b4 15 00 00       	call   84a4658 <_ZN17expert_extraction20CEnchanterExtractionC1Ev>
 84a30a4:	eb 18                	jmp    84a30be <_ZN17expert_extraction14CExtractionMgrC1Ev+0x90>
 84a30a6:	89 d6                	mov    %edx,%esi
 84a30a8:	89 c7                	mov    %eax,%edi
 84a30aa:	89 1c 24             	mov    %ebx,(%esp)
 84a30ad:	e8 3e 14 28 00       	call   87244f0 <_ZdlPv>
 84a30b2:	89 f8                	mov    %edi,%eax
 84a30b4:	89 f2                	mov    %esi,%edx
 84a30b6:	89 04 24             	mov    %eax,(%esp)
 84a30b9:	e8 92 06 64 00       	call   8ae3750 <_Unwind_Resume>
 84a30be:	89 d8                	mov    %ebx,%eax
 84a30c0:	89 c2                	mov    %eax,%edx
 84a30c2:	8b 45 08             	mov    0x8(%ebp),%eax
 84a30c5:	89 50 04             	mov    %edx,0x4(%eax)
 84a30c8:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 84a30cf:	e8 7c 13 28 00       	call   8724450 <_Znwj>
 84a30d4:	89 c3                	mov    %eax,%ebx
 84a30d6:	89 d8                	mov    %ebx,%eax
 84a30d8:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 84a30de:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 84a30e5:	89 04 24             	mov    %eax,(%esp)
 84a30e8:	e8 87 15 00 00       	call   84a4674 <_ZN17expert_extraction25CDollControllerExtractionC1Ev>
 84a30ed:	eb 18                	jmp    84a3107 <_ZN17expert_extraction14CExtractionMgrC1Ev+0xd9>
 84a30ef:	89 d6                	mov    %edx,%esi
 84a30f1:	89 c7                	mov    %eax,%edi
 84a30f3:	89 1c 24             	mov    %ebx,(%esp)
 84a30f6:	e8 f5 13 28 00       	call   87244f0 <_ZdlPv>
 84a30fb:	89 f8                	mov    %edi,%eax
 84a30fd:	89 f2                	mov    %esi,%edx
 84a30ff:	89 04 24             	mov    %eax,(%esp)
 84a3102:	e8 49 06 64 00       	call   8ae3750 <_Unwind_Resume>
 84a3107:	89 d8                	mov    %ebx,%eax
 84a3109:	89 c2                	mov    %eax,%edx
 84a310b:	8b 45 08             	mov    0x8(%ebp),%eax
 84a310e:	89 50 08             	mov    %edx,0x8(%eax)
 84a3111:	83 c4 1c             	add    $0x1c,%esp
 84a3114:	5b                   	pop    %ebx
 84a3115:	5e                   	pop    %esi
 84a3116:	5f                   	pop    %edi
 84a3117:	5d                   	pop    %ebp
 84a3118:	c3                   	ret
 84a3119:	90                   	nop

```

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

---

## get_extracter

```asm
// === 084a3166 expert_extraction::CExtractionMgr::get_extracter  [0x084a3166-0x84a3181] ===
 84a3166:	55                   	push   %ebp
 84a3167:	89 e5                	mov    %esp,%ebp
 84a3169:	83 7d 0c 02          	cmpl   $0x2,0xc(%ebp)
 84a316d:	76 07                	jbe    84a3176 <_ZN17expert_extraction14CExtractionMgr13get_extracterEj+0x10>
 84a316f:	b8 00 00 00 00       	mov    $0x0,%eax
 84a3174:	eb 09                	jmp    84a317f <_ZN17expert_extraction14CExtractionMgr13get_extracterEj+0x19>
 84a3176:	8b 55 0c             	mov    0xc(%ebp),%edx
 84a3179:	8b 45 08             	mov    0x8(%ebp),%eax
 84a317c:	8b 04 90             	mov    (%eax,%edx,4),%eax
 84a317f:	5d                   	pop    %ebp
 84a3180:	c3                   	ret
 84a3181:	90                   	nop

```

```c
// expert_extraction::CExtractionMgr::get_extracter @ 0x84a3166

/* expert_extraction::CExtractionMgr::get_extracter(unsigned int) */

undefined4 __thiscall
expert_extraction::CExtractionMgr::get_extracter(CExtractionMgr *this,uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 3) {
    uVar1 = *(undefined4 *)(this + param_1 * 4);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## ~CExtractionMgr

```asm
// === 084a311a expert_extraction::CExtractionMgr::~CExtractionMgr  [0x084a311a-0x84a3165] ===
 84a311a:	55                   	push   %ebp
 84a311b:	89 e5                	mov    %esp,%ebp
 84a311d:	83 ec 28             	sub    $0x28,%esp
 84a3120:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 84a3127:	eb 2f                	jmp    84a3158 <_ZN17expert_extraction14CExtractionMgrD1Ev+0x3e>
 84a3129:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84a312c:	8b 45 08             	mov    0x8(%ebp),%eax
 84a312f:	8b 04 90             	mov    (%eax,%edx,4),%eax
 84a3132:	85 c0                	test   %eax,%eax
 84a3134:	74 1e                	je     84a3154 <_ZN17expert_extraction14CExtractionMgrD1Ev+0x3a>
 84a3136:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84a3139:	8b 45 08             	mov    0x8(%ebp),%eax
 84a313c:	8b 04 90             	mov    (%eax,%edx,4),%eax
 84a313f:	8b 00                	mov    (%eax),%eax
 84a3141:	83 c0 04             	add    $0x4,%eax
 84a3144:	8b 08                	mov    (%eax),%ecx
 84a3146:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84a3149:	8b 45 08             	mov    0x8(%ebp),%eax
 84a314c:	8b 04 90             	mov    (%eax,%edx,4),%eax
 84a314f:	89 04 24             	mov    %eax,(%esp)
 84a3152:	ff d1                	call   *%ecx
 84a3154:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84a3158:	83 7d f4 02          	cmpl   $0x2,-0xc(%ebp)
 84a315c:	0f 9e c0             	setle  %al
 84a315f:	84 c0                	test   %al,%al
 84a3161:	75 c6                	jne    84a3129 <_ZN17expert_extraction14CExtractionMgrD1Ev+0xf>
 84a3163:	c9                   	leave
 84a3164:	c3                   	ret
 84a3165:	90                   	nop

```

```c
// expert_extraction::CExtractionMgr::~CExtractionMgr @ 0x84a311a

/* expert_extraction::CExtractionMgr::~CExtractionMgr() */

void __thiscall expert_extraction::CExtractionMgr::~CExtractionMgr(CExtractionMgr *this)

{
  int local_10;
  
  for (local_10 = 0; local_10 < 3; local_10 = local_10 + 1) {
    if (*(int *)(this + local_10 * 4) != 0) {
      (**(code **)(**(int **)(this + local_10 * 4) + 4))(*(undefined4 *)(this + local_10 * 4));
    }
  }
  return;
}

```

