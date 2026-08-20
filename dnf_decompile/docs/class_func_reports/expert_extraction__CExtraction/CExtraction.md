# CExtraction

`_ZN17expert_extraction11CExtractionC1Ev`

`expert_extraction::CExtraction::CExtraction()`

| 类 | 地址 |
|---|---|
| `expert_extraction::CExtraction` | `0x084a2938` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a2938  _ZN17expert_extraction11CExtractionC1Ev
#           expert_extraction::CExtraction::CExtraction()
# range [0x084a2938, 0x084a29a1]
084a2938 +0x00:  push   %ebp
084a2939 +0x01:  mov    %esp,%ebp
084a293b +0x03:  push   %edi
084a293c +0x04:  push   %esi
084a293d +0x05:  push   %ebx
084a293e +0x06:  sub    $0x2c,%esp
084a2941 +0x09:  mov    0x8(%ebp),%eax
084a2944 +0x0c:  movl   $&_ZTVN17expert_extraction11CExtractionE+0x8,(%eax)
084a294a +0x12:  movl   $0x0,(%esp)
084a2951 +0x19:  call   0807d750 <_init+0x48>
084a2956 +0x1e:  mov    %eax,-0x1c(%ebp)
084a2959 +0x21:  lea    -0x1c(%ebp),%esi
084a295c +0x24:  movl   $0x9c8,(%esp)
084a2963 +0x2b:  call   08724450 <_Znwj>  ; operator new(unsigned int)
084a2968 +0x30:  mov    %eax,%ebx
084a296a +0x32:  mov    %ebx,%eax
084a296c +0x34:  mov    %esi,0x4(%esp)
084a2970 +0x38:  mov    %eax,(%esp)
084a2973 +0x3b:  call   080cba2a <_GLOBAL__I__ZN10BingoEventC2Ev+0x877>  ; global constructors keyed to BingoEvent::BingoEvent()+0x877
084a2978 +0x40:  jmp    084a2992 <+0x5a>
084a297a +0x42:  mov    %edx,%esi
084a297c +0x44:  mov    %eax,%edi
084a297e +0x46:  mov    %ebx,(%esp)
084a2981 +0x49:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
084a2986 +0x4e:  mov    %edi,%eax
084a2988 +0x50:  mov    %esi,%edx
084a298a +0x52:  mov    %eax,(%esp)
084a298d +0x55:  call   08ae3750 <_Unwind_Resume>
084a2992 +0x5a:  mov    %ebx,%edx
084a2994 +0x5c:  mov    0x8(%ebp),%eax
084a2997 +0x5f:  mov    %edx,0x4(%eax)
084a299a +0x62:  add    $0x2c,%esp
084a299d +0x65:  pop    %ebx
084a299e +0x66:  pop    %esi
084a299f +0x67:  pop    %edi
084a29a0 +0x68:  pop    %ebp
084a29a1 +0x69:  ret
```

## 反编译 C

```c
// expert_extraction::CExtraction::CExtraction @ 0x84a2938

/* expert_extraction::CExtraction::CExtraction() */

void __thiscall expert_extraction::CExtraction::CExtraction(CExtraction *this)

{
  CMTRand *this_00;
  ulong local_20 [4];
  
  *(undefined ***)this = &PTR__CExtraction_08c7ddc8;
  local_20[0] = time((time_t *)0x0);
  this_00 = operator_new(0x9c8);
                    /* try { // try from 084a2973 to 084a2977 has its CatchHandler @ 084a297a */
  CMTRand::CMTRand(this_00,local_20);
  *(CMTRand **)(this + 4) = this_00;
  return;
}
```
