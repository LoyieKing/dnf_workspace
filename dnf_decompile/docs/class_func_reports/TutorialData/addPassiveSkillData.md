# addPassiveSkillData

`_ZN12TutorialData19addPassiveSkillDataEiii`

`TutorialData::addPassiveSkillData(int, int, int)`

| 类 | 地址 |
|---|---|
| `TutorialData` | `0x08ab8944` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ab8944  _ZN12TutorialData19addPassiveSkillDataEiii
#           TutorialData::addPassiveSkillData(int, int, int)
# range [0x08ab8944, 0x08ab89a5]
08ab8944 +0x00:  push   %ebp
08ab8945 +0x01:  mov    %esp,%ebp
08ab8947 +0x03:  sub    $0x28,%esp
08ab894a +0x06:  cmpl   $0x3,0xc(%ebp)
08ab894e +0x0a:  jg     08ab89a2 <+0x5e>
08ab8950 +0x0c:  movl   $0xc,(%esp)
08ab8957 +0x13:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08ab895c +0x18:  mov    %eax,-0xc(%ebp)
08ab895f +0x1b:  mov    -0xc(%ebp),%eax
08ab8962 +0x1e:  mov    0x14(%ebp),%edx
08ab8965 +0x21:  mov    %edx,0x4(%eax)
08ab8968 +0x24:  mov    -0xc(%ebp),%eax
08ab896b +0x27:  mov    0x10(%ebp),%edx
08ab896e +0x2a:  mov    %edx,(%eax)
08ab8970 +0x2c:  mov    -0xc(%ebp),%eax
08ab8973 +0x2f:  movl   $0xffffffff,0x8(%eax)
08ab897a +0x36:  mov    0xc(%ebp),%edx
08ab897d +0x39:  mov    %edx,%eax
08ab897f +0x3b:  add    %eax,%eax
08ab8981 +0x3d:  add    %edx,%eax
08ab8983 +0x3f:  shl    $0x2,%eax
08ab8986 +0x42:  add    $0xf0,%eax
08ab898b +0x47:  add    0x8(%ebp),%eax
08ab898e +0x4a:  lea    0x4(%eax),%edx
08ab8991 +0x4d:  lea    -0xc(%ebp),%eax
08ab8994 +0x50:  mov    %eax,0x4(%esp)
08ab8998 +0x54:  mov    %edx,(%esp)
08ab899b +0x57:  call   08ab9dec <_GLOBAL__I__ZN12TutorialDataC2Ev+0x627>  ; global constructors keyed to TutorialData::TutorialData()+0x627
08ab89a0 +0x5c:  jmp    08ab89a3 <+0x5f>
08ab89a2 +0x5e:  nop
08ab89a3 +0x5f:  leave
08ab89a4 +0x60:  ret
08ab89a5 +0x61:  nop
```

## 反编译 C

```c
// TutorialData::addPassiveSkillData @ 0x8ab8944

/* TutorialData::addPassiveSkillData(int, int, int) */

void __thiscall
TutorialData::addPassiveSkillData(TutorialData *this,int param_1,int param_2,int param_3)

{
  SkillData *local_10 [3];
  
  if (param_1 < 4) {
    local_10[0] = operator_new(0xc);
    *(int *)(local_10[0] + 4) = param_3;
    *(int *)local_10[0] = param_2;
    *(int *)(local_10[0] + 8) = -1;
    std::vector<TutorialData::SkillData*,std::allocator<TutorialData::SkillData*>>::push_back
              ((vector<TutorialData::SkillData*,std::allocator<TutorialData::SkillData*>> *)
               (this + param_1 * 0xc + 0xf4),local_10);
  }
  return;
}
```
