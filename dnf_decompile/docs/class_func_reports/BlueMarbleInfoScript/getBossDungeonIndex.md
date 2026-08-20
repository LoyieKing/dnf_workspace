# getBossDungeonIndex

`_ZN20BlueMarbleInfoScript19getBossDungeonIndexEi`

`BlueMarbleInfoScript::getBossDungeonIndex(int)`

| 类 | 地址 |
|---|---|
| `BlueMarbleInfoScript` | `0x088d5f38` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088d5f38  _ZN20BlueMarbleInfoScript19getBossDungeonIndexEi
#           BlueMarbleInfoScript::getBossDungeonIndex(int)
# range [0x088d5f38, 0x088d5fdb]
088d5f38 +0x00:  push   %ebp
088d5f39 +0x01:  mov    %esp,%ebp
088d5f3b +0x03:  push   %edi
088d5f3c +0x04:  push   %esi
088d5f3d +0x05:  push   %ebx
088d5f3e +0x06:  sub    $0x2c,%esp
088d5f41 +0x09:  mov    0x8(%ebp),%ebx
088d5f44 +0x0c:  mov    %ebx,%eax
088d5f46 +0x0e:  mov    %eax,(%esp)
088d5f49 +0x11:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
088d5f4e +0x16:  movl   $0x0,-0x20(%ebp)
088d5f55 +0x1d:  jmp    088d5f9c <+0x64>
088d5f57 +0x1f:  mov    0xc(%ebp),%eax
088d5f5a +0x22:  lea    0x50(%eax),%edx
088d5f5d +0x25:  mov    -0x20(%ebp),%eax
088d5f60 +0x28:  mov    %eax,0x4(%esp)
088d5f64 +0x2c:  mov    %edx,(%esp)
088d5f67 +0x2f:  call   088d6c04 <_GLOBAL__I__ZN20BlueMarbleTileScriptC2Ev+0x486>  ; global constructors keyed to BlueMarbleTileScript::BlueMarbleTileScript()+0x486
088d5f6c +0x34:  mov    %eax,-0x1c(%ebp)
088d5f6f +0x37:  mov    -0x1c(%ebp),%eax
088d5f72 +0x3a:  mov    (%eax),%eax
088d5f74 +0x3c:  cmp    0x10(%ebp),%eax
088d5f77 +0x3f:  jg     088d5f98 <+0x60>
088d5f79 +0x41:  mov    -0x1c(%ebp),%eax
088d5f7c +0x44:  mov    0x4(%eax),%eax
088d5f7f +0x47:  cmp    0x10(%ebp),%eax
088d5f82 +0x4a:  jl     088d5f98 <+0x60>
088d5f84 +0x4c:  mov    -0x1c(%ebp),%eax
088d5f87 +0x4f:  lea    0x8(%eax),%edx
088d5f8a +0x52:  mov    %ebx,%eax
088d5f8c +0x54:  mov    %edx,0x4(%esp)
088d5f90 +0x58:  mov    %eax,(%esp)
088d5f93 +0x5b:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
088d5f98 +0x60:  addl   $0x1,-0x20(%ebp)
088d5f9c +0x64:  mov    0xc(%ebp),%eax
088d5f9f +0x67:  add    $0x50,%eax
088d5fa2 +0x6a:  mov    %eax,(%esp)
088d5fa5 +0x6d:  call   088d6be2 <_GLOBAL__I__ZN20BlueMarbleTileScriptC2Ev+0x464>  ; global constructors keyed to BlueMarbleTileScript::BlueMarbleTileScript()+0x464
088d5faa +0x72:  cmp    -0x20(%ebp),%eax
088d5fad +0x75:  seta   %al
088d5fb0 +0x78:  test   %al,%al
088d5fb2 +0x7a:  jne    088d5f57 <+0x1f>
088d5fb4 +0x7c:  jmp    088d5fd0 <+0x98>
088d5fb6 +0x7e:  mov    %edx,%esi
088d5fb8 +0x80:  mov    %eax,%edi
088d5fba +0x82:  mov    %ebx,%eax
088d5fbc +0x84:  mov    %eax,(%esp)
088d5fbf +0x87:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
088d5fc4 +0x8c:  mov    %edi,%eax
088d5fc6 +0x8e:  mov    %esi,%edx
088d5fc8 +0x90:  mov    %eax,(%esp)
088d5fcb +0x93:  call   08ae3750 <_Unwind_Resume>
088d5fd0 +0x98:  mov    %ebx,%eax
088d5fd2 +0x9a:  mov    %ebx,%eax
088d5fd4 +0x9c:  add    $0x2c,%esp
088d5fd7 +0x9f:  pop    %ebx
088d5fd8 +0xa0:  pop    %esi
088d5fd9 +0xa1:  pop    %edi
088d5fda +0xa2:  pop    %ebp
088d5fdb +0xa3:  ret    $0x4
```

## 反编译 C

```c
// BlueMarbleInfoScript::getBossDungeonIndex @ 0x88d5f38

/* BlueMarbleInfoScript::getBossDungeonIndex(int) */

int BlueMarbleInfoScript::getBossDungeonIndex(int param_1)

{
  int *piVar1;
  uint uVar2;
  int in_stack_00000008;
  int in_stack_0000000c;
  uint local_24;
  
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)param_1);
  local_24 = 0;
  while( true ) {
    uVar2 = std::vector<BlueMarbleRandomDungeonInfo,std::allocator<BlueMarbleRandomDungeonInfo>>::
            size((vector<BlueMarbleRandomDungeonInfo,std::allocator<BlueMarbleRandomDungeonInfo>> *)
                 (in_stack_00000008 + 0x50));
    if (uVar2 <= local_24) break;
    piVar1 = (int *)std::
                    vector<BlueMarbleRandomDungeonInfo,std::allocator<BlueMarbleRandomDungeonInfo>>
                    ::operator[]((vector<BlueMarbleRandomDungeonInfo,std::allocator<BlueMarbleRandomDungeonInfo>>
                                  *)(in_stack_00000008 + 0x50),local_24);
    if ((*piVar1 <= in_stack_0000000c) && (in_stack_0000000c <= piVar1[1])) {
                    /* try { // try from 088d5f93 to 088d5f97 has its CatchHandler @ 088d5fb6 */
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)param_1,piVar1 + 2);
    }
    local_24 = local_24 + 1;
  }
  return param_1;
}
```
