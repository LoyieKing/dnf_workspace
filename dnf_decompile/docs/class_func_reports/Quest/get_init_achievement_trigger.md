# get_init_achievement_trigger

`_ZNK5Quest28get_init_achievement_triggerERtS0_S0_`

`Quest::get_init_achievement_trigger(unsigned short&, unsigned short&, unsigned short&) const`

| 类 | 地址 |
|---|---|
| `Quest` | `0x08352fb4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08352fb4  _ZNK5Quest28get_init_achievement_triggerERtS0_S0_
#           Quest::get_init_achievement_trigger(unsigned short&, unsigned short&, unsigned short&) const
# range [0x08352fb4, 0x08353081]
08352fb4 +0x00:  push   %ebp
08352fb5 +0x01:  mov    %esp,%ebp
08352fb7 +0x03:  push   %ebx
08352fb8 +0x04:  sub    $0x24,%esp
08352fbb +0x07:  mov    0x8(%ebp),%eax
08352fbe +0x0a:  mov    0x8(%eax),%eax
08352fc1 +0x0d:  cmp    $0x7,%eax
08352fc4 +0x10:  je     08352fd0 <+0x1c>
08352fc6 +0x12:  mov    $0x0,%eax
08352fcb +0x17:  jmp    0835307b <+0xc7>
08352fd0 +0x1c:  movl   $0x0,-0x18(%ebp)
08352fd7 +0x23:  movl   $0x0,-0x14(%ebp)
08352fde +0x2a:  movl   $0x0,-0x10(%ebp)
08352fe5 +0x31:  mov    0xc(%ebp),%eax
08352fe8 +0x34:  mov    %eax,-0x18(%ebp)
08352feb +0x37:  mov    0x10(%ebp),%eax
08352fee +0x3a:  mov    %eax,-0x14(%ebp)
08352ff1 +0x3d:  mov    0x14(%ebp),%eax
08352ff4 +0x40:  mov    %eax,-0x10(%ebp)
08352ff7 +0x43:  mov    -0x18(%ebp),%eax
08352ffa +0x46:  movw   $0x1,(%eax)
08352fff +0x4b:  mov    -0x14(%ebp),%eax
08353002 +0x4e:  movw   $0x0,(%eax)
08353007 +0x53:  mov    -0x10(%ebp),%eax
0835300a +0x56:  movw   $0x0,(%eax)
0835300f +0x5b:  movl   $0x0,-0xc(%ebp)
08353016 +0x62:  jmp    08353040 <+0x8c>
08353018 +0x64:  mov    -0xc(%ebp),%eax
0835301b +0x67:  mov    -0x18(%ebp,%eax,4),%ebx
0835301f +0x6b:  mov    0x8(%ebp),%eax
08353022 +0x6e:  lea    0x90(%eax),%edx
08353028 +0x74:  mov    -0xc(%ebp),%eax
0835302b +0x77:  mov    %eax,0x4(%esp)
0835302f +0x7b:  mov    %edx,(%esp)
08353032 +0x7e:  call   080ea574 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x1ad>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x1ad
08353037 +0x83:  mov    (%eax),%eax
08353039 +0x85:  mov    %ax,(%ebx)
0835303c +0x88:  addl   $0x1,-0xc(%ebp)
08353040 +0x8c:  mov    0x8(%ebp),%eax
08353043 +0x8f:  add    $0x90,%eax
08353048 +0x94:  mov    %eax,(%esp)
0835304b +0x97:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
08353050 +0x9c:  cmp    $0x2,%eax
08353053 +0x9f:  ja     08353067 <+0xb3>
08353055 +0xa1:  mov    0x8(%ebp),%eax
08353058 +0xa4:  add    $0x90,%eax
0835305d +0xa9:  mov    %eax,(%esp)
08353060 +0xac:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
08353065 +0xb1:  jmp    0835306c <+0xb8>
08353067 +0xb3:  mov    $0x3,%eax
0835306c +0xb8:  cmp    -0xc(%ebp),%eax
0835306f +0xbb:  seta   %al
08353072 +0xbe:  test   %al,%al
08353074 +0xc0:  jne    08353018 <+0x64>
08353076 +0xc2:  mov    $0x1,%eax
0835307b +0xc7:  add    $0x24,%esp
0835307e +0xca:  pop    %ebx
0835307f +0xcb:  pop    %ebp
08353080 +0xcc:  ret
08353081 +0xcd:  nop
```

## 反编译 C

```c
// Quest::get_init_achievement_trigger @ 0x8352fb4

/* Quest::get_init_achievement_trigger(unsigned short&, unsigned short&, unsigned short&) const */

undefined4 __thiscall
Quest::get_init_achievement_trigger(Quest *this,ushort *param_1,ushort *param_2,ushort *param_3)

{
  ushort *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  ushort *local_1c [3];
  uint local_10;
  
  if (*(int *)(this + 8) == 7) {
    local_1c[0] = param_1;
    local_1c[1] = param_2;
    local_1c[2] = param_3;
    *param_1 = 1;
    *param_2 = 0;
    *param_3 = 0;
    local_10 = 0;
    while( true ) {
      uVar4 = std::vector<int,std::allocator<int>>::size
                        ((vector<int,std::allocator<int>> *)(this + 0x90));
      if (uVar4 < 3) {
        uVar4 = std::vector<int,std::allocator<int>>::size
                          ((vector<int,std::allocator<int>> *)(this + 0x90));
      }
      else {
        uVar4 = 3;
      }
      if (uVar4 <= local_10) break;
      puVar1 = local_1c[local_10];
      puVar3 = (undefined4 *)
               std::vector<int,std::allocator<int>>::operator[]
                         ((vector<int,std::allocator<int>> *)(this + 0x90),local_10);
      *puVar1 = (ushort)*puVar3;
      local_10 = local_10 + 1;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
