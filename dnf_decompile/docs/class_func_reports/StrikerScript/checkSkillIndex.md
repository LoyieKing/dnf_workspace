# checkSkillIndex

`_ZN13StrikerScript15checkSkillIndexEssi`

`StrikerScript::checkSkillIndex(short, short, int)`

| 类 | 地址 |
|---|---|
| `StrikerScript` | `0x08a9e868` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a9e868  _ZN13StrikerScript15checkSkillIndexEssi
#           StrikerScript::checkSkillIndex(short, short, int)
# range [0x08a9e868, 0x08a9e979]
08a9e868 +0x000:  push   %ebp
08a9e869 +0x001:  mov    %esp,%ebp
08a9e86b +0x003:  sub    $0x48,%esp
08a9e86e +0x006:  mov    0xc(%ebp),%edx
08a9e871 +0x009:  mov    0x10(%ebp),%eax
08a9e874 +0x00c:  mov    %dx,-0x2c(%ebp)
08a9e878 +0x010:  mov    %ax,-0x30(%ebp)
08a9e87c +0x014:  movl   $0x0,-0x10(%ebp)
08a9e883 +0x01b:  movl   $0x0,-0xc(%ebp)
08a9e88a +0x022:  jmp    08a9e964 <+0xfc>
08a9e88f +0x027:  cmpl   $0x0,-0xc(%ebp)
08a9e893 +0x02b:  jne    08a9e8b5 <+0x4d>
08a9e895 +0x02d:  movswl -0x30(%ebp),%edx
08a9e899 +0x031:  movswl -0x2c(%ebp),%eax
08a9e89d +0x035:  mov    %edx,0x8(%esp)
08a9e8a1 +0x039:  mov    %eax,0x4(%esp)
08a9e8a5 +0x03d:  mov    0x8(%ebp),%eax
08a9e8a8 +0x040:  mov    %eax,(%esp)
08a9e8ab +0x043:  call   08a9e7e0 <_ZN13StrikerScript21getStrikerSkillVectorEss>  ; StrikerScript::getStrikerSkillVector(short, short)
08a9e8b0 +0x048:  mov    %eax,-0x10(%ebp)
08a9e8b3 +0x04b:  jmp    08a9e8d3 <+0x6b>
08a9e8b5 +0x04d:  movswl -0x2c(%ebp),%eax
08a9e8b9 +0x051:  movl   $0x0,0x8(%esp)
08a9e8c1 +0x059:  mov    %eax,0x4(%esp)
08a9e8c5 +0x05d:  mov    0x8(%ebp),%eax
08a9e8c8 +0x060:  mov    %eax,(%esp)
08a9e8cb +0x063:  call   08a9e7e0 <_ZN13StrikerScript21getStrikerSkillVectorEss>  ; StrikerScript::getStrikerSkillVector(short, short)
08a9e8d0 +0x068:  mov    %eax,-0x10(%ebp)
08a9e8d3 +0x06b:  cmpl   $0x0,-0x10(%ebp)
08a9e8d7 +0x06f:  jne    08a9e8e3 <+0x7b>
08a9e8d9 +0x071:  mov    $0x0,%eax
08a9e8de +0x076:  jmp    08a9e978 <+0x110>
08a9e8e3 +0x07b:  lea    -0x1c(%ebp),%eax
08a9e8e6 +0x07e:  mov    -0x10(%ebp),%edx
08a9e8e9 +0x081:  mov    %edx,0x4(%esp)
08a9e8ed +0x085:  mov    %eax,(%esp)
08a9e8f0 +0x088:  call   08a9f66e <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x981>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x981
08a9e8f5 +0x08d:  sub    $0x4,%esp
08a9e8f8 +0x090:  jmp    08a9e935 <+0xcd>
08a9e8fa +0x092:  lea    -0x1c(%ebp),%eax
08a9e8fd +0x095:  mov    %eax,(%esp)
08a9e900 +0x098:  call   08a9f6e4 <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x9f7>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x9f7
08a9e905 +0x09d:  mov    (%eax),%eax
08a9e907 +0x09f:  cmp    0x14(%ebp),%eax
08a9e90a +0x0a2:  sete   %al
08a9e90d +0x0a5:  test   %al,%al
08a9e90f +0x0a7:  je     08a9e918 <+0xb0>
08a9e911 +0x0a9:  mov    $0x1,%eax
08a9e916 +0x0ae:  jmp    08a9e978 <+0x110>
08a9e918 +0x0b0:  lea    -0x14(%ebp),%eax
08a9e91b +0x0b3:  movl   $0x0,0x8(%esp)
08a9e923 +0x0bb:  lea    -0x1c(%ebp),%edx
08a9e926 +0x0be:  mov    %edx,0x4(%esp)
08a9e92a +0x0c2:  mov    %eax,(%esp)
08a9e92d +0x0c5:  call   08a9f6ee <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0xa01>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0xa01
08a9e932 +0x0ca:  sub    $0x4,%esp
08a9e935 +0x0cd:  lea    -0x18(%ebp),%eax
08a9e938 +0x0d0:  mov    -0x10(%ebp),%edx
08a9e93b +0x0d3:  mov    %edx,0x4(%esp)
08a9e93f +0x0d7:  mov    %eax,(%esp)
08a9e942 +0x0da:  call   08a9f692 <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x9a5>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x9a5
08a9e947 +0x0df:  sub    $0x4,%esp
08a9e94a +0x0e2:  lea    -0x18(%ebp),%eax
08a9e94d +0x0e5:  mov    %eax,0x4(%esp)
08a9e951 +0x0e9:  lea    -0x1c(%ebp),%eax
08a9e954 +0x0ec:  mov    %eax,(%esp)
08a9e957 +0x0ef:  call   08a9f6b8 <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x9cb>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x9cb
08a9e95c +0x0f4:  test   %al,%al
08a9e95e +0x0f6:  jne    08a9e8fa <+0x92>
08a9e960 +0x0f8:  addl   $0x1,-0xc(%ebp)
08a9e964 +0x0fc:  cmpl   $0x1,-0xc(%ebp)
08a9e968 +0x100:  setle  %al
08a9e96b +0x103:  test   %al,%al
08a9e96d +0x105:  jne    08a9e88f <+0x27>
08a9e973 +0x10b:  mov    $0x0,%eax
08a9e978 +0x110:  leave
08a9e979 +0x111:  ret
```

## 反编译 C

```c
// StrikerScript::checkSkillIndex @ 0x8a9e868

/* StrikerScript::checkSkillIndex(short, short, int) */

undefined4 __thiscall
StrikerScript::checkSkillIndex(StrikerScript *this,short param_1,short param_2,int param_3)

{
  bool bVar1;
  int *piVar2;
  __normal_iterator<StrikerSkill*,std::vector<StrikerSkill,std::allocator<StrikerSkill>>>
  local_20 [4];
  __normal_iterator local_1c [4];
  __normal_iterator<StrikerSkill*,std::vector<StrikerSkill,std::allocator<StrikerSkill>>>
  local_18 [4];
  int local_14;
  int local_10;
  
  local_14 = 0;
  local_10 = 0;
  while( true ) {
    if (1 < local_10) {
      return 0;
    }
    if (local_10 == 0) {
      local_14 = getStrikerSkillVector(this,param_1,param_2);
    }
    else {
      local_14 = getStrikerSkillVector(this,param_1,0);
    }
    if (local_14 == 0) break;
    std::vector<StrikerSkill,std::allocator<StrikerSkill>>::begin();
    while( true ) {
      std::vector<StrikerSkill,std::allocator<StrikerSkill>>::end();
      bVar1 = __gnu_cxx::operator!=(local_20,local_1c);
      if (!bVar1) break;
      piVar2 = (int *)__gnu_cxx::
                      __normal_iterator<StrikerSkill*,std::vector<StrikerSkill,std::allocator<StrikerSkill>>>
                      ::operator->(local_20);
      if (*piVar2 == param_3) {
        return 1;
      }
      __gnu_cxx::
      __normal_iterator<StrikerSkill*,std::vector<StrikerSkill,std::allocator<StrikerSkill>>>::
      operator++(local_18,(int)local_20);
    }
    local_10 = local_10 + 1;
  }
  return 0;
}
```
