# CDollController

`_ZN10expert_job15CDollControllerC1Ev`

`expert_job::CDollController::CDollController()`

| 类 | 地址 |
|---|---|
| `expert_job::CDollController` | `0x085d45b4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d45b4  _ZN10expert_job15CDollControllerC1Ev
#           expert_job::CDollController::CDollController()
# range [0x085d45b4, 0x085d45cf]
085d45b4 +0x00:  push   %ebp
085d45b5 +0x01:  mov    %esp,%ebp
085d45b7 +0x03:  sub    $0x18,%esp
085d45ba +0x06:  mov    0x8(%ebp),%eax
085d45bd +0x09:  mov    %eax,(%esp)
085d45c0 +0x0c:  call   0849f2b4 <_GLOBAL__I__ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0xe5>  ; global constructors keyed to expert_job::CExpertJob::IncreaseExpertJobExp(CUser*, int)+0xe5
085d45c5 +0x11:  mov    0x8(%ebp),%eax
085d45c8 +0x14:  movl   $&_ZTVN10expert_job15CDollControllerE+0x8,(%eax)
085d45ce +0x1a:  leave
085d45cf +0x1b:  ret
```

## 反编译 C

```c
// expert_job::CDollController::CDollController @ 0x85d45b4

/* expert_job::CDollController::CDollController() */

void __thiscall expert_job::CDollController::CDollController(CDollController *this)

{
  CExpertJob::CExpertJob((CExpertJob *)this);
  *(undefined ***)this = &PTR___cxa_pure_virtual_08cc08e8;
  return;
}
```
