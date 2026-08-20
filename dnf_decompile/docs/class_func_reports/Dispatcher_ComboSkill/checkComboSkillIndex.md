# checkComboSkillIndex

`_ZN21Dispatcher_ComboSkill20checkComboSkillIndexEs`

`Dispatcher_ComboSkill::checkComboSkillIndex(short)`

| 类 | 地址 |
|---|---|
| `Dispatcher_ComboSkill` | `0x0825f292` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0825f292  _ZN21Dispatcher_ComboSkill20checkComboSkillIndexEs
#           Dispatcher_ComboSkill::checkComboSkillIndex(short)
# range [0x0825f292, 0x0825f2fb]
0825f292 +0x00:  push   %ebp
0825f293 +0x01:  mov    %esp,%ebp
0825f295 +0x03:  push   %ebx
0825f296 +0x04:  sub    $0x34,%esp
0825f299 +0x07:  mov    0xc(%ebp),%eax
0825f29c +0x0a:  mov    %ax,-0x1c(%ebp)
0825f2a0 +0x0e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0825f2a5 +0x13:  mov    0x14(%eax),%eax
0825f2a8 +0x16:  add    $0x48fc,%eax
0825f2ad +0x1b:  mov    %eax,-0x10(%ebp)
0825f2b0 +0x1e:  movl   $0x0,-0xc(%ebp)
0825f2b7 +0x25:  jmp    0825f2e5 <+0x53>
0825f2b9 +0x27:  movswl -0x1c(%ebp),%ebx
0825f2bd +0x2b:  mov    -0xc(%ebp),%eax
0825f2c0 +0x2e:  mov    %eax,0x4(%esp)
0825f2c4 +0x32:  mov    -0x10(%ebp),%eax
0825f2c7 +0x35:  mov    %eax,(%esp)
0825f2ca +0x38:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
0825f2cf +0x3d:  mov    (%eax),%eax
0825f2d1 +0x3f:  cmp    %eax,%ebx
0825f2d3 +0x41:  sete   %al
0825f2d6 +0x44:  test   %al,%al
0825f2d8 +0x46:  je     0825f2e1 <+0x4f>
0825f2da +0x48:  mov    $0x1,%eax
0825f2df +0x4d:  jmp    0825f2f5 <+0x63>
0825f2e1 +0x4f:  addl   $0x1,-0xc(%ebp)
0825f2e5 +0x53:  cmpl   $0x5,-0xc(%ebp)
0825f2e9 +0x57:  setle  %al
0825f2ec +0x5a:  test   %al,%al
0825f2ee +0x5c:  jne    0825f2b9 <+0x27>
0825f2f0 +0x5e:  mov    $0x0,%eax
0825f2f5 +0x63:  add    $0x34,%esp
0825f2f8 +0x66:  pop    %ebx
0825f2f9 +0x67:  pop    %ebp
0825f2fa +0x68:  ret
0825f2fb +0x69:  nop
```

## 反编译 C

```c
// Dispatcher_ComboSkill::checkComboSkillIndex @ 0x825f292

/* Dispatcher_ComboSkill::checkComboSkillIndex(short) */

undefined4 __thiscall
Dispatcher_ComboSkill::checkComboSkillIndex(Dispatcher_ComboSkill *this,short param_1)

{
  int iVar1;
  int *piVar2;
  uint local_10;
  
  iVar1 = G_CDataManager();
  iVar1 = *(int *)(iVar1 + 0x14);
  local_10 = 0;
  while( true ) {
    if (5 < (int)local_10) {
      return 0;
    }
    piVar2 = (int *)std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                               (iVar1 + 0x48fc),local_10);
    if ((int)param_1 == *piVar2) break;
    local_10 = local_10 + 1;
  }
  return 1;
}
```
