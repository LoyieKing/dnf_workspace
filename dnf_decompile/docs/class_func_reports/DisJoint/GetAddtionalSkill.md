# GetAddtionalSkill

`_ZN8DisJoint17GetAddtionalSkillEiiRiS0_`

`DisJoint::GetAddtionalSkill(int, int, int&, int&)`

| 类 | 地址 |
|---|---|
| `DisJoint` | `0x08473184` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08473184  _ZN8DisJoint17GetAddtionalSkillEiiRiS0_
#           DisJoint::GetAddtionalSkill(int, int, int&, int&)
# range [0x08473184, 0x08473223]
08473184 +0x00:  push   %ebp
08473185 +0x01:  mov    %esp,%ebp
08473187 +0x03:  sub    $0x38,%esp
0847318a +0x06:  lea    -0x1c(%ebp),%eax
0847318d +0x09:  mov    %eax,(%esp)
08473190 +0x0c:  call   084735fe <_GLOBAL__I__ZN8DisJoint12LoadDisJointEv+0x49>  ; global constructors keyed to DisJoint::LoadDisJoint()+0x49
08473195 +0x11:  movl   $0x0,-0xc(%ebp)
0847319c +0x18:  jmp    084731f5 <+0x71>
0847319e +0x1a:  mov    0x8(%ebp),%eax
084731a1 +0x1d:  lea    0xc0(%eax),%edx
084731a7 +0x23:  mov    -0xc(%ebp),%eax
084731aa +0x26:  mov    %eax,0x4(%esp)
084731ae +0x2a:  mov    %edx,(%esp)
084731b1 +0x2d:  call   0847363a <_GLOBAL__I__ZN8DisJoint12LoadDisJointEv+0x85>  ; global constructors keyed to DisJoint::LoadDisJoint()+0x85
084731b6 +0x32:  mov    (%eax),%edx
084731b8 +0x34:  mov    %edx,-0x1c(%ebp)
084731bb +0x37:  mov    0x4(%eax),%edx
084731be +0x3a:  mov    %edx,-0x18(%ebp)
084731c1 +0x3d:  mov    0x8(%eax),%edx
084731c4 +0x40:  mov    %edx,-0x14(%ebp)
084731c7 +0x43:  mov    0xc(%eax),%eax
084731ca +0x46:  mov    %eax,-0x10(%ebp)
084731cd +0x49:  mov    -0x1c(%ebp),%eax
084731d0 +0x4c:  cmp    0xc(%ebp),%eax
084731d3 +0x4f:  jne    084731f1 <+0x6d>
084731d5 +0x51:  mov    -0x18(%ebp),%eax
084731d8 +0x54:  cmp    0x10(%ebp),%eax
084731db +0x57:  jne    084731f1 <+0x6d>
084731dd +0x59:  mov    -0x14(%ebp),%edx
084731e0 +0x5c:  mov    0x14(%ebp),%eax
084731e3 +0x5f:  mov    %edx,(%eax)
084731e5 +0x61:  mov    -0x10(%ebp),%eax
084731e8 +0x64:  mov    %eax,%edx
084731ea +0x66:  mov    0x18(%ebp),%eax
084731ed +0x69:  mov    %edx,(%eax)
084731ef +0x6b:  jmp    08473221 <+0x9d>
084731f1 +0x6d:  addl   $0x1,-0xc(%ebp)
084731f5 +0x71:  mov    0x8(%ebp),%eax
084731f8 +0x74:  add    $0xc0,%eax
084731fd +0x79:  mov    %eax,(%esp)
08473200 +0x7c:  call   0847361e <_GLOBAL__I__ZN8DisJoint12LoadDisJointEv+0x69>  ; global constructors keyed to DisJoint::LoadDisJoint()+0x69
08473205 +0x81:  cmp    -0xc(%ebp),%eax
08473208 +0x84:  seta   %al
0847320b +0x87:  test   %al,%al
0847320d +0x89:  jne    0847319e <+0x1a>
0847320f +0x8b:  mov    0x14(%ebp),%eax
08473212 +0x8e:  movl   $0x0,(%eax)
08473218 +0x94:  mov    0x18(%ebp),%eax
0847321b +0x97:  movl   $0x0,(%eax)
08473221 +0x9d:  leave
08473222 +0x9e:  ret
08473223 +0x9f:  nop
```

## 反编译 C

```c
// DisJoint::GetAddtionalSkill @ 0x8473184

/* DisJoint::GetAddtionalSkill(int, int, int&, int&) */

void __thiscall
DisJoint::GetAddtionalSkill(DisJoint *this,int param_1,int param_2,int *param_3,int *param_4)

{
  int *piVar1;
  uint uVar2;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  
  DisjointSkillScript::DisjointSkillScript((DisjointSkillScript *)&local_20);
  local_10 = 0;
  while( true ) {
    uVar2 = std::vector<DisjointSkillScript,std::allocator<DisjointSkillScript>>::size
                      ((vector<DisjointSkillScript,std::allocator<DisjointSkillScript>> *)
                       (this + 0xc0));
    if (uVar2 <= local_10) {
      *param_3 = 0;
      *param_4 = 0;
      return;
    }
    piVar1 = (int *)std::vector<DisjointSkillScript,std::allocator<DisjointSkillScript>>::operator[]
                              ((vector<DisjointSkillScript,std::allocator<DisjointSkillScript>> *)
                               (this + 0xc0),local_10);
    local_20 = *piVar1;
    local_1c = piVar1[1];
    local_18 = piVar1[2];
    local_14 = piVar1[3];
    if ((local_20 == param_1) && (local_1c == param_2)) break;
    local_10 = local_10 + 1;
  }
  *param_3 = local_18;
  *param_4 = local_14;
  return;
}
```
