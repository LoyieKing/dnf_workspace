# importParentLevelPenlaty

`_ZN13StrikerScript24importParentLevelPenlatyEv`

`StrikerScript::importParentLevelPenlaty()`

| 类 | 地址 |
|---|---|
| `StrikerScript` | `0x08a9e654` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a9e654  _ZN13StrikerScript24importParentLevelPenlatyEv
#           StrikerScript::importParentLevelPenlaty()
# range [0x08a9e654, 0x08a9e6cb]
08a9e654 +0x00:  push   %ebp
08a9e655 +0x01:  mov    %esp,%ebp
08a9e657 +0x03:  sub    $0x38,%esp
08a9e65a +0x06:  mov    0x8(%ebp),%eax
08a9e65d +0x09:  add    $0x6c,%eax
08a9e660 +0x0c:  mov    %eax,(%esp)
08a9e663 +0x0f:  call   08a9f56a <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x87d>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x87d
08a9e668 +0x14:  movb   $0x1,-0x9(%ebp)
08a9e66c +0x18:  lea    -0x9(%ebp),%eax
08a9e66f +0x1b:  mov    %eax,(%esp)
08a9e672 +0x1e:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08a9e677 +0x23:  mov    %eax,-0x1c(%ebp)
08a9e67a +0x26:  movzbl -0x9(%ebp),%eax
08a9e67e +0x2a:  xor    $0x1,%eax
08a9e681 +0x2d:  test   %al,%al
08a9e683 +0x2f:  jne    08a9e6c9 <+0x75>
08a9e685 +0x31:  movl   $0x0,(%esp)
08a9e68c +0x38:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08a9e691 +0x3d:  mov    %eax,-0x18(%ebp)
08a9e694 +0x40:  movl   $0x0,(%esp)
08a9e69b +0x47:  call   088bc4e5 <_Z9ScanFloatPb>  ; ScanFloat(bool*)
08a9e6a0 +0x4c:  fstps  -0x14(%ebp)
08a9e6a3 +0x4f:  movl   $0x0,(%esp)
08a9e6aa +0x56:  call   088bc4e5 <_Z9ScanFloatPb>  ; ScanFloat(bool*)
08a9e6af +0x5b:  fstps  -0x10(%ebp)
08a9e6b2 +0x5e:  mov    0x8(%ebp),%eax
08a9e6b5 +0x61:  lea    0x6c(%eax),%edx
08a9e6b8 +0x64:  lea    -0x1c(%ebp),%eax
08a9e6bb +0x67:  mov    %eax,0x4(%esp)
08a9e6bf +0x6b:  mov    %edx,(%esp)
08a9e6c2 +0x6e:  call   08a9f586 <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x899>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x899
08a9e6c7 +0x73:  jmp    08a9e66c <+0x18>
08a9e6c9 +0x75:  nop
08a9e6ca +0x76:  leave
08a9e6cb +0x77:  ret
```

## 反编译 C

```c
// StrikerScript::importParentLevelPenlaty @ 0x8a9e654

/* StrikerScript::importParentLevelPenlaty() */

void __thiscall StrikerScript::importParentLevelPenlaty(StrikerScript *this)

{
  longdouble lVar1;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  float local_14;
  bool local_d [9];
  
  std::vector<ParentLevelPenalty,std::allocator<ParentLevelPenalty>>::clear
            ((vector<ParentLevelPenalty,std::allocator<ParentLevelPenalty>> *)(this + 0x6c));
  local_d[0] = true;
  while( true ) {
    local_20 = ScanInt(local_d);
    if (local_d[0] != true) break;
    local_1c = ScanInt((bool *)0x0);
    lVar1 = (longdouble)ScanFloat((bool *)0x0);
    local_18 = (float)lVar1;
    lVar1 = (longdouble)ScanFloat((bool *)0x0);
    local_14 = (float)lVar1;
    std::vector<ParentLevelPenalty,std::allocator<ParentLevelPenalty>>::push_back
              ((vector<ParentLevelPenalty,std::allocator<ParentLevelPenalty>> *)(this + 0x6c),
               (ParentLevelPenalty *)&local_20);
  }
  return;
}
```
