# CAlchemist

`_ZN10expert_job10CAlchemistC1Ev`

`expert_job::CAlchemist::CAlchemist()`

| 类 | 地址 |
|---|---|
| `expert_job::CAlchemist` | `0x085d11b4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d11b4  _ZN10expert_job10CAlchemistC1Ev
#           expert_job::CAlchemist::CAlchemist()
# range [0x085d11b4, 0x085d11cf]
085d11b4 +0x00:  push   %ebp
085d11b5 +0x01:  mov    %esp,%ebp
085d11b7 +0x03:  sub    $0x18,%esp
085d11ba +0x06:  mov    0x8(%ebp),%eax
085d11bd +0x09:  mov    %eax,(%esp)
085d11c0 +0x0c:  call   0849f2b4 <_GLOBAL__I__ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0xe5>  ; global constructors keyed to expert_job::CExpertJob::IncreaseExpertJobExp(CUser*, int)+0xe5
085d11c5 +0x11:  mov    0x8(%ebp),%eax
085d11c8 +0x14:  movl   $&_ZTVN10expert_job10CAlchemistE+0x8,(%eax)
085d11ce +0x1a:  leave
085d11cf +0x1b:  ret
```

## 反编译 C

```c
// expert_job::CAlchemist::CAlchemist @ 0x85d11b4

/* expert_job::CAlchemist::CAlchemist() */

void __thiscall expert_job::CAlchemist::CAlchemist(CAlchemist *this)

{
  CExpertJob::CExpertJob((CExpertJob *)this);
  *(undefined ***)this = &PTR___cxa_pure_virtual_08cbfa48;
  return;
}
```
