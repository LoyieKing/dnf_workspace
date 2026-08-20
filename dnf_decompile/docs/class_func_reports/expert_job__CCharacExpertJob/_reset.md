# _reset

`_ZN10expert_job16CCharacExpertJob6_resetEv`

`expert_job::CCharacExpertJob::_reset()`

| 类 | 地址 |
|---|---|
| `expert_job::CCharacExpertJob` | `0x0832b064` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0832b064  _ZN10expert_job16CCharacExpertJob6_resetEv
#           expert_job::CCharacExpertJob::_reset()
# range [0x0832b064, 0x0832b0ab]
0832b064 +0x00:  push   %ebp
0832b065 +0x01:  mov    %esp,%ebp
0832b067 +0x03:  sub    $0x10,%esp
0832b06a +0x06:  mov    0x8(%ebp),%eax
0832b06d +0x09:  movw   $0x0,0x6(%eax)
0832b073 +0x0f:  mov    0x8(%ebp),%eax
0832b076 +0x12:  movl   $0x0,0x8(%eax)
0832b07d +0x19:  mov    0x8(%ebp),%eax
0832b080 +0x1c:  movl   $0x0,0xc(%eax)
0832b087 +0x23:  movl   $0x0,-0x4(%ebp)
0832b08e +0x2a:  jmp    0832b09f <+0x3b>
0832b090 +0x2c:  mov    -0x4(%ebp),%eax
0832b093 +0x2f:  mov    0x8(%ebp),%edx
0832b096 +0x32:  movb   $0x0,0x10(%edx,%eax,1)
0832b09b +0x37:  addl   $0x1,-0x4(%ebp)
0832b09f +0x3b:  cmpl   $0x1d,-0x4(%ebp)
0832b0a3 +0x3f:  setle  %al
0832b0a6 +0x42:  test   %al,%al
0832b0a8 +0x44:  jne    0832b090 <+0x2c>
0832b0aa +0x46:  leave
0832b0ab +0x47:  ret
```

## 反编译 C

```c
// expert_job::CCharacExpertJob::_reset @ 0x832b064

/* expert_job::CCharacExpertJob::_reset() */

void __thiscall expert_job::CCharacExpertJob::_reset(CCharacExpertJob *this)

{
  int local_8;
  
  *(undefined2 *)(this + 6) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  for (local_8 = 0; local_8 < 0x1e; local_8 = local_8 + 1) {
    this[local_8 + 0x10] = (CCharacExpertJob)0x0;
  }
  return;
}
```
