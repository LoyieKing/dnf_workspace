# InitScript

`_ZN10expert_job16CCharacExpertJob10InitScriptEP17STExpertJobScript`

`expert_job::CCharacExpertJob::InitScript(STExpertJobScript*)`

| 类 | 地址 |
|---|---|
| `expert_job::CCharacExpertJob` | `0x0832b36c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0832b36c  _ZN10expert_job16CCharacExpertJob10InitScriptEP17STExpertJobScript
#           expert_job::CCharacExpertJob::InitScript(STExpertJobScript*)
# range [0x0832b36c, 0x0832b3bf]
0832b36c +0x00:  push   %ebp
0832b36d +0x01:  mov    %esp,%ebp
0832b36f +0x03:  sub    $0x28,%esp
0832b372 +0x06:  mov    0xc(%ebp),%eax
0832b375 +0x09:  mov    0x274(%eax),%edx
0832b37b +0x0f:  mov    0x8(%ebp),%eax
0832b37e +0x12:  mov    %edx,0x8(%eax)
0832b381 +0x15:  mov    0x8(%ebp),%eax
0832b384 +0x18:  movl   $0x0,0xc(%eax)
0832b38b +0x1f:  movl   $0x0,-0xc(%ebp)
0832b392 +0x26:  jmp    0832b3a3 <+0x37>
0832b394 +0x28:  mov    -0xc(%ebp),%eax
0832b397 +0x2b:  mov    0x8(%ebp),%edx
0832b39a +0x2e:  movb   $0x0,0x10(%edx,%eax,1)
0832b39f +0x33:  addl   $0x1,-0xc(%ebp)
0832b3a3 +0x37:  cmpl   $0x1d,-0xc(%ebp)
0832b3a7 +0x3b:  setle  %al
0832b3aa +0x3e:  test   %al,%al
0832b3ac +0x40:  jne    0832b394 <+0x28>
0832b3ae +0x42:  mov    0x8(%ebp),%eax
0832b3b1 +0x45:  mov    %eax,(%esp)
0832b3b4 +0x48:  call   080c8bc4 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1c
0832b3b9 +0x4d:  mov    $0x1,%eax
0832b3be +0x52:  leave
0832b3bf +0x53:  ret
```

## 反编译 C

```c
// expert_job::CCharacExpertJob::InitScript @ 0x832b36c

/* expert_job::CCharacExpertJob::InitScript(STExpertJobScript*) */

undefined4 __thiscall
expert_job::CCharacExpertJob::InitScript(CCharacExpertJob *this,STExpertJobScript *param_1)

{
  int local_10;
  
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 0x274);
  *(undefined4 *)(this + 0xc) = 0;
  for (local_10 = 0; local_10 < 0x1e; local_10 = local_10 + 1) {
    this[local_10 + 0x10] = (CCharacExpertJob)0x0;
  }
  charac_expand::CData::alter((CData *)this);
  return 1;
}
```
