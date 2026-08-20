# Reset

`_ZN10expert_job10CEnchanter5ResetEv`

`expert_job::CEnchanter::Reset()`

| 类 | 地址 |
|---|---|
| `expert_job::CEnchanter` | `0x0849c71e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0849c71e  _ZN10expert_job10CEnchanter5ResetEv
#           expert_job::CEnchanter::Reset()
# range [0x0849c71e, 0x0849c7b5]
0849c71e +0x00:  push   %ebp
0849c71f +0x01:  mov    %esp,%ebp
0849c721 +0x03:  sub    $0x28,%esp
0849c724 +0x06:  movl   $0x0,-0xc(%ebp)
0849c72b +0x0d:  jmp    0849c745 <+0x27>
0849c72d +0x0f:  mov    -0xc(%ebp),%eax
0849c730 +0x12:  shl    $0x4,%eax
0849c733 +0x15:  add    0x8(%ebp),%eax
0849c736 +0x18:  add    $0x8,%eax
0849c739 +0x1b:  mov    %eax,(%esp)
0849c73c +0x1e:  call   0849f252 <_GLOBAL__I__ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0x83>  ; global constructors keyed to expert_job::CExpertJob::IncreaseExpertJobExp(CUser*, int)+0x83
0849c741 +0x23:  addl   $0x1,-0xc(%ebp)
0849c745 +0x27:  cmpl   $0x1,-0xc(%ebp)
0849c749 +0x2b:  setle  %al
0849c74c +0x2e:  test   %al,%al
0849c74e +0x30:  jne    0849c72d <+0xf>
0849c750 +0x32:  mov    0x8(%ebp),%eax
0849c753 +0x35:  movl   $0x0,0x28(%eax)
0849c75a +0x3c:  mov    0x8(%ebp),%eax
0849c75d +0x3f:  movl   $0x0,0x2c(%eax)
0849c764 +0x46:  mov    0x8(%ebp),%eax
0849c767 +0x49:  movl   $0x0,0x30(%eax)
0849c76e +0x50:  mov    0x8(%ebp),%eax
0849c771 +0x53:  movl   $0x0,0x34(%eax)
0849c778 +0x5a:  mov    0x8(%ebp),%eax
0849c77b +0x5d:  movl   $0x0,0x38(%eax)
0849c782 +0x64:  mov    0x8(%ebp),%eax
0849c785 +0x67:  movl   $0x1,0x4(%esp)
0849c78d +0x6f:  mov    %eax,(%esp)
0849c790 +0x72:  call   0849f1ec <_GLOBAL__I__ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0x1d>  ; global constructors keyed to expert_job::CExpertJob::IncreaseExpertJobExp(CUser*, int)+0x1d
0849c795 +0x77:  mov    0x8(%ebp),%eax
0849c798 +0x7a:  movl   $0x0,0x3c(%eax)
0849c79f +0x81:  mov    0x8(%ebp),%eax
0849c7a2 +0x84:  movl   $0x0,0x44(%eax)
0849c7a9 +0x8b:  mov    0x8(%ebp),%eax
0849c7ac +0x8e:  movl   $0x0,0x40(%eax)
0849c7b3 +0x95:  leave
0849c7b4 +0x96:  ret
0849c7b5 +0x97:  nop
```

## 反编译 C

```c
// expert_job::CEnchanter::Reset @ 0x849c71e

/* expert_job::CEnchanter::Reset() */

void __thiscall expert_job::CEnchanter::Reset(CEnchanter *this)

{
  int local_10;
  
  for (local_10 = 0; local_10 < 2; local_10 = local_10 + 1) {
    ExpertJobMaterial::Reset((ExpertJobMaterial *)(this + local_10 * 0x10 + 8));
  }
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  CExpertJob::SetType((CExpertJob *)this,1);
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  return;
}
```
