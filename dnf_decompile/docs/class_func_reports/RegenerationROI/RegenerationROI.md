# RegenerationROI

`_ZN15RegenerationROIC1Ev`

`RegenerationROI::RegenerationROI()`

| 类 | 地址 |
|---|---|
| `RegenerationROI` | `0x085f8496` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085f8496  _ZN15RegenerationROIC1Ev
#           RegenerationROI::RegenerationROI()
# range [0x085f8496, 0x085f8501]
085f8496 +0x00:  push   %ebp
085f8497 +0x01:  mov    %esp,%ebp
085f8499 +0x03:  push   %edi
085f849a +0x04:  push   %esi
085f849b +0x05:  push   %ebx
085f849c +0x06:  sub    $0x1c,%esp
085f849f +0x09:  mov    0x8(%ebp),%eax
085f84a2 +0x0c:  add    $0x4,%eax
085f84a5 +0x0f:  mov    %eax,(%esp)
085f84a8 +0x12:  call   085f9712 <_GLOBAL__I__Z16_GetRandomOptionv+0x44>  ; global constructors keyed to _GetRandomOption()+0x44
085f84ad +0x17:  movl   $0x9c8,(%esp)
085f84b4 +0x1e:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085f84b9 +0x23:  mov    %eax,%ebx
085f84bb +0x25:  mov    %ebx,%eax
085f84bd +0x27:  mov    %eax,(%esp)
085f84c0 +0x2a:  call   080d9f48 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0xe5>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0xe5
085f84c5 +0x2f:  jmp    085f84d9 <+0x43>
085f84c7 +0x31:  mov    %edx,%esi
085f84c9 +0x33:  mov    %eax,%edi
085f84cb +0x35:  mov    %ebx,(%esp)
085f84ce +0x38:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
085f84d3 +0x3d:  mov    %edi,%eax
085f84d5 +0x3f:  mov    %esi,%edx
085f84d7 +0x41:  jmp    085f84e8 <+0x52>
085f84d9 +0x43:  mov    %ebx,%edx
085f84db +0x45:  mov    0x8(%ebp),%eax
085f84de +0x48:  mov    %edx,(%eax)
085f84e0 +0x4a:  add    $0x1c,%esp
085f84e3 +0x4d:  pop    %ebx
085f84e4 +0x4e:  pop    %esi
085f84e5 +0x4f:  pop    %edi
085f84e6 +0x50:  pop    %ebp
085f84e7 +0x51:  ret
085f84e8 +0x52:  mov    %edx,%ebx
085f84ea +0x54:  mov    %eax,%esi
085f84ec +0x56:  mov    0x8(%ebp),%eax
085f84ef +0x59:  add    $0x4,%eax
085f84f2 +0x5c:  mov    %eax,(%esp)
085f84f5 +0x5f:  call   085f97e2 <_GLOBAL__I__Z16_GetRandomOptionv+0x114>  ; global constructors keyed to _GetRandomOption()+0x114
085f84fa +0x64:  mov    %esi,%eax
085f84fc +0x66:  mov    %ebx,%edx
085f84fe +0x68:  mov    %eax,(%esp)
085f8501 +0x6b:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// RegenerationROI::RegenerationROI @ 0x85f8496

/* RegenerationROI::RegenerationROI() */

void __thiscall RegenerationROI::RegenerationROI(RegenerationROI *this)

{
  CMTRand *this_00;
  
  RandomOptionItem_Regenerator::RandomOptionItem_Regenerator
            ((RandomOptionItem_Regenerator *)(this + 4));
                    /* try { // try from 085f84b4 to 085f84b8 has its CatchHandler @ 085f84e8 */
  this_00 = operator_new(0x9c8);
                    /* try { // try from 085f84c0 to 085f84c4 has its CatchHandler @ 085f84c7 */
  CMTRand::CMTRand(this_00);
  *(CMTRand **)this = this_00;
  return;
}
```
