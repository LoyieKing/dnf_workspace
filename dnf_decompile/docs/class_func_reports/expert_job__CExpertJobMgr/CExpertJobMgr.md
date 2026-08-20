# CExpertJobMgr

`_ZN10expert_job13CExpertJobMgrC1Ev`

`expert_job::CExpertJobMgr::CExpertJobMgr()`

| 类 | 地址 |
|---|---|
| `expert_job::CExpertJobMgr` | `0x0849e102` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0849e102  _ZN10expert_job13CExpertJobMgrC1Ev
#           expert_job::CExpertJobMgr::CExpertJobMgr()
# range [0x0849e102, 0x0849e1ab]
0849e102 +0x00:  push   %ebp
0849e103 +0x01:  mov    %esp,%ebp
0849e105 +0x03:  push   %edi
0849e106 +0x04:  push   %esi
0849e107 +0x05:  push   %ebx
0849e108 +0x06:  sub    $0x2c,%esp
0849e10b +0x09:  mov    0x8(%ebp),%eax
0849e10e +0x0c:  movl   $0x0,(%eax)
0849e114 +0x12:  movl   $&_ZSt7nothrow,0x4(%esp)
0849e11c +0x1a:  movl   $0x60,(%esp)
0849e123 +0x21:  call   08725b50 <_ZnwjRKSt9nothrow_t>  ; operator new(unsigned int, std::nothrow_t const&)
0849e128 +0x26:  mov    %eax,%ebx
0849e12a +0x28:  mov    %ebx,%eax
0849e12c +0x2a:  test   %eax,%eax
0849e12e +0x2c:  je     0849e177 <+0x75>
0849e130 +0x2e:  mov    %ebx,-0x1c(%ebp)
0849e133 +0x31:  mov    -0x1c(%ebp),%esi
0849e136 +0x34:  mov    $0x0,%eax
0849e13b +0x39:  mov    $0x18,%edx
0849e140 +0x3e:  mov    %esi,%edi
0849e142 +0x40:  mov    %edx,%ecx
0849e144 +0x42:  rep stos %eax,%es:(%edi)
0849e146 +0x44:  mov    -0x1c(%ebp),%eax
0849e149 +0x47:  mov    %eax,(%esp)
0849e14c +0x4a:  call   0849f68c <_GLOBAL__I__ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0x4bd>  ; global constructors keyed to expert_job::CExpertJob::IncreaseExpertJobExp(CUser*, int)+0x4bd
0849e151 +0x4f:  jmp    0849e173 <+0x71>
0849e153 +0x51:  mov    %edx,%esi
0849e155 +0x53:  mov    %eax,%edi
0849e157 +0x55:  movl   $&_ZSt7nothrow,0x4(%esp)
0849e15f +0x5d:  mov    %ebx,(%esp)
0849e162 +0x60:  call   087247e0 <_ZdlPvRKSt9nothrow_t>  ; operator delete(void*, std::nothrow_t const&)
0849e167 +0x65:  mov    %edi,%eax
0849e169 +0x67:  mov    %esi,%edx
0849e16b +0x69:  mov    %eax,(%esp)
0849e16e +0x6c:  call   08ae3750 <_Unwind_Resume>
0849e173 +0x71:  mov    %ebx,%eax
0849e175 +0x73:  jmp    0849e179 <+0x77>
0849e177 +0x75:  mov    %ebx,%eax
0849e179 +0x77:  mov    0x8(%ebp),%edx
0849e17c +0x7a:  mov    %eax,(%edx)
0849e17e +0x7c:  mov    0x8(%ebp),%eax
0849e181 +0x7f:  mov    (%eax),%eax
0849e183 +0x81:  test   %eax,%eax
0849e185 +0x83:  jne    0849e1a3 <+0xa1>
0849e187 +0x85:  movl   $0x57f,0x8(%esp)
0849e18f +0x8d:  movl   $&_ZZN10expert_job13CExpertJobMgrC1EvE19__PRETTY_FUNCTION__,0x4(%esp)
0849e197 +0x95:  movl   $"memory error func(%s) line(%d)",(%esp)
0849e19e +0x9c:  call   0807db60 <_init+0x458>
0849e1a3 +0xa1:  add    $0x2c,%esp
0849e1a6 +0xa4:  pop    %ebx
0849e1a7 +0xa5:  pop    %esi
0849e1a8 +0xa6:  pop    %edi
0849e1a9 +0xa7:  pop    %ebp
0849e1aa +0xa8:  ret
0849e1ab +0xa9:  nop
```

## 反编译 C

```c
// expert_job::CExpertJobMgr::CExpertJobMgr @ 0x849e102

/* expert_job::CExpertJobMgr::CExpertJobMgr() */

void __thiscall expert_job::CExpertJobMgr::CExpertJobMgr(CExpertJobMgr *this)

{
  CExpertJobFactory *this_00;
  int iVar1;
  CExpertJobFactory *pCVar2;
  byte bVar3;
  
  bVar3 = 0;
  *(undefined4 *)this = 0;
  this_00 = operator_new(0x60,(nothrow_t *)&std::nothrow);
  if (this_00 != (CExpertJobFactory *)0x0) {
    pCVar2 = this_00;
    for (iVar1 = 0x18; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)pCVar2 = 0;
      pCVar2 = pCVar2 + (uint)bVar3 * -8 + 4;
    }
                    /* try { // try from 0849e14c to 0849e150 has its CatchHandler @ 0849e153 */
    CExpertJobFactory::CExpertJobFactory(this_00);
  }
  *(CExpertJobFactory **)this = this_00;
  if (*(int *)this == 0) {
    printf("memory error func(%s) line(%d)","expert_job::CExpertJobMgr::CExpertJobMgr()",0x57f);
  }
  return;
}
```
