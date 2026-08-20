# _getPostalReward

`_ZN12CAchievement16_getPostalRewardEP14stTitleSection`

`CAchievement::_getPostalReward(stTitleSection*)`

| 类 | 地址 |
|---|---|
| `CAchievement` | `0x0828bd5e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0828bd5e  _ZN12CAchievement16_getPostalRewardEP14stTitleSection
#           CAchievement::_getPostalReward(stTitleSection*)
# range [0x0828bd5e, 0x0828bdc5]
0828bd5e +0x00:  push   %ebp
0828bd5f +0x01:  mov    %esp,%ebp
0828bd61 +0x03:  sub    $0x28,%esp
0828bd64 +0x06:  movl   $0x0,-0x14(%ebp)
0828bd6b +0x0d:  movl   $0x0,-0x10(%ebp)
0828bd72 +0x14:  jmp    0828bda7 <+0x49>
0828bd74 +0x16:  mov    0xc(%ebp),%eax
0828bd77 +0x19:  lea    0x34(%eax),%edx
0828bd7a +0x1c:  mov    -0x10(%ebp),%eax
0828bd7d +0x1f:  mov    %eax,0x4(%esp)
0828bd81 +0x23:  mov    %edx,(%esp)
0828bd84 +0x26:  call   0828dd04 <_GLOBAL__I__ZN12CAchievementC2Ev+0x4b1>  ; global constructors keyed to CAchievement::CAchievement()+0x4b1
0828bd89 +0x2b:  mov    (%eax),%eax
0828bd8b +0x2d:  mov    %eax,-0xc(%ebp)
0828bd8e +0x30:  cmpl   $0x0,-0xc(%ebp)
0828bd92 +0x34:  je     0828bda3 <+0x45>
0828bd94 +0x36:  mov    -0xc(%ebp),%eax
0828bd97 +0x39:  mov    (%eax),%eax
0828bd99 +0x3b:  cmp    $0x3,%eax
0828bd9c +0x3e:  jne    0828bda3 <+0x45>
0828bd9e +0x40:  mov    -0xc(%ebp),%eax
0828bda1 +0x43:  jmp    0828bdc4 <+0x66>
0828bda3 +0x45:  addl   $0x1,-0x10(%ebp)
0828bda7 +0x49:  mov    0xc(%ebp),%eax
0828bdaa +0x4c:  add    $0x34,%eax
0828bdad +0x4f:  mov    %eax,(%esp)
0828bdb0 +0x52:  call   0828dce8 <_GLOBAL__I__ZN12CAchievementC2Ev+0x495>  ; global constructors keyed to CAchievement::CAchievement()+0x495
0828bdb5 +0x57:  cmp    -0x10(%ebp),%eax
0828bdb8 +0x5a:  seta   %al
0828bdbb +0x5d:  test   %al,%al
0828bdbd +0x5f:  jne    0828bd74 <+0x16>
0828bdbf +0x61:  mov    $0x0,%eax
0828bdc4 +0x66:  leave
0828bdc5 +0x67:  ret
```

## 反编译 C

```c
// CAchievement::_getPostalReward @ 0x828bd5e

/* CAchievement::_getPostalReward(stTitleSection*) */

int * __thiscall CAchievement::_getPostalReward(CAchievement *this,stTitleSection *param_1)

{
  int *piVar1;
  uint uVar2;
  uint local_14;
  
  local_14 = 0;
  while( true ) {
    uVar2 = std::vector<stTitleRewardBasis*,std::allocator<stTitleRewardBasis*>>::size
                      ((vector<stTitleRewardBasis*,std::allocator<stTitleRewardBasis*>> *)
                       (param_1 + 0x34));
    if (uVar2 <= local_14) {
      return (int *)0x0;
    }
    piVar1 = (int *)std::vector<stTitleRewardBasis*,std::allocator<stTitleRewardBasis*>>::operator[]
                              ((vector<stTitleRewardBasis*,std::allocator<stTitleRewardBasis*>> *)
                               (param_1 + 0x34),local_14);
    piVar1 = (int *)*piVar1;
    if ((piVar1 != (int *)0x0) && (*piVar1 == 3)) break;
    local_14 = local_14 + 1;
  }
  return piVar1;
}
```
