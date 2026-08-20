# loadData

`_ZN10expert_job16CCharacExpertJob8loadDataEP5CUserPc`

`expert_job::CCharacExpertJob::loadData(CUser*, char*)`

| 类 | 地址 |
|---|---|
| `expert_job::CCharacExpertJob` | `0x0832b1fe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0832b1fe  _ZN10expert_job16CCharacExpertJob8loadDataEP5CUserPc
#           expert_job::CCharacExpertJob::loadData(CUser*, char*)
# range [0x0832b1fe, 0x0832b263]
0832b1fe +0x00:  push   %ebp
0832b1ff +0x01:  mov    %esp,%ebp
0832b201 +0x03:  sub    $0x10,%esp
0832b204 +0x06:  mov    0x10(%ebp),%eax
0832b207 +0x09:  mov    %eax,-0x8(%ebp)
0832b20a +0x0c:  mov    -0x8(%ebp),%eax
0832b20d +0x0f:  movzwl 0x4(%eax),%edx
0832b211 +0x13:  mov    0x8(%ebp),%eax
0832b214 +0x16:  mov    %dx,0x6(%eax)
0832b218 +0x1a:  mov    -0x8(%ebp),%eax
0832b21b +0x1d:  mov    0x8(%eax),%edx
0832b21e +0x20:  mov    0x8(%ebp),%eax
0832b221 +0x23:  mov    %edx,0x8(%eax)
0832b224 +0x26:  mov    -0x8(%ebp),%eax
0832b227 +0x29:  mov    0xc(%eax),%edx
0832b22a +0x2c:  mov    0x8(%ebp),%eax
0832b22d +0x2f:  mov    %edx,0xc(%eax)
0832b230 +0x32:  movl   $0x0,-0x4(%ebp)
0832b237 +0x39:  jmp    0832b252 <+0x54>
0832b239 +0x3b:  mov    -0x4(%ebp),%eax
0832b23c +0x3e:  mov    -0x4(%ebp),%edx
0832b23f +0x41:  mov    -0x8(%ebp),%ecx
0832b242 +0x44:  movzbl 0x10(%ecx,%edx,1),%ecx
0832b247 +0x49:  mov    0x8(%ebp),%edx
0832b24a +0x4c:  mov    %cl,0x10(%edx,%eax,1)
0832b24e +0x50:  addl   $0x1,-0x4(%ebp)
0832b252 +0x54:  cmpl   $0x1d,-0x4(%ebp)
0832b256 +0x58:  setle  %al
0832b259 +0x5b:  test   %al,%al
0832b25b +0x5d:  jne    0832b239 <+0x3b>
0832b25d +0x5f:  mov    $0x1,%eax
0832b262 +0x64:  leave
0832b263 +0x65:  ret
```

## 反编译 C

```c
// expert_job::CCharacExpertJob::loadData @ 0x832b1fe

/* expert_job::CCharacExpertJob::loadData(CUser*, char*) */

undefined4 __thiscall
expert_job::CCharacExpertJob::loadData(CCharacExpertJob *this,CUser *param_1,char *param_2)

{
  int local_8;
  
  *(undefined2 *)(this + 6) = *(undefined2 *)(param_2 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_2 + 0xc);
  for (local_8 = 0; local_8 < 0x1e; local_8 = local_8 + 1) {
    this[local_8 + 0x10] = *(CCharacExpertJob *)(param_2 + local_8 + 0x10);
  }
  return 1;
}
```
