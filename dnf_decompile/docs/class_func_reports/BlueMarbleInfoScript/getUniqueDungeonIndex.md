# getUniqueDungeonIndex

`_ZN20BlueMarbleInfoScript21getUniqueDungeonIndexEi`

`BlueMarbleInfoScript::getUniqueDungeonIndex(int)`

| 类 | 地址 |
|---|---|
| `BlueMarbleInfoScript` | `0x088d5fde` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088d5fde  _ZN20BlueMarbleInfoScript21getUniqueDungeonIndexEi
#           BlueMarbleInfoScript::getUniqueDungeonIndex(int)
# range [0x088d5fde, 0x088d6081]
088d5fde +0x00:  push   %ebp
088d5fdf +0x01:  mov    %esp,%ebp
088d5fe1 +0x03:  push   %edi
088d5fe2 +0x04:  push   %esi
088d5fe3 +0x05:  push   %ebx
088d5fe4 +0x06:  sub    $0x2c,%esp
088d5fe7 +0x09:  mov    0x8(%ebp),%ebx
088d5fea +0x0c:  mov    %ebx,%eax
088d5fec +0x0e:  mov    %eax,(%esp)
088d5fef +0x11:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
088d5ff4 +0x16:  movl   $0x0,-0x20(%ebp)
088d5ffb +0x1d:  jmp    088d6042 <+0x64>
088d5ffd +0x1f:  mov    0xc(%ebp),%eax
088d6000 +0x22:  lea    0x5c(%eax),%edx
088d6003 +0x25:  mov    -0x20(%ebp),%eax
088d6006 +0x28:  mov    %eax,0x4(%esp)
088d600a +0x2c:  mov    %edx,(%esp)
088d600d +0x2f:  call   088d6c04 <_GLOBAL__I__ZN20BlueMarbleTileScriptC2Ev+0x486>  ; global constructors keyed to BlueMarbleTileScript::BlueMarbleTileScript()+0x486
088d6012 +0x34:  mov    %eax,-0x1c(%ebp)
088d6015 +0x37:  mov    -0x1c(%ebp),%eax
088d6018 +0x3a:  mov    (%eax),%eax
088d601a +0x3c:  cmp    0x10(%ebp),%eax
088d601d +0x3f:  jg     088d603e <+0x60>
088d601f +0x41:  mov    -0x1c(%ebp),%eax
088d6022 +0x44:  mov    0x4(%eax),%eax
088d6025 +0x47:  cmp    0x10(%ebp),%eax
088d6028 +0x4a:  jl     088d603e <+0x60>
088d602a +0x4c:  mov    -0x1c(%ebp),%eax
088d602d +0x4f:  lea    0x8(%eax),%edx
088d6030 +0x52:  mov    %ebx,%eax
088d6032 +0x54:  mov    %edx,0x4(%esp)
088d6036 +0x58:  mov    %eax,(%esp)
088d6039 +0x5b:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
088d603e +0x60:  addl   $0x1,-0x20(%ebp)
088d6042 +0x64:  mov    0xc(%ebp),%eax
088d6045 +0x67:  add    $0x5c,%eax
088d6048 +0x6a:  mov    %eax,(%esp)
088d604b +0x6d:  call   088d6be2 <_GLOBAL__I__ZN20BlueMarbleTileScriptC2Ev+0x464>  ; global constructors keyed to BlueMarbleTileScript::BlueMarbleTileScript()+0x464
088d6050 +0x72:  cmp    -0x20(%ebp),%eax
088d6053 +0x75:  seta   %al
088d6056 +0x78:  test   %al,%al
088d6058 +0x7a:  jne    088d5ffd <+0x1f>
088d605a +0x7c:  jmp    088d6076 <+0x98>
088d605c +0x7e:  mov    %edx,%esi
088d605e +0x80:  mov    %eax,%edi
088d6060 +0x82:  mov    %ebx,%eax
088d6062 +0x84:  mov    %eax,(%esp)
088d6065 +0x87:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
088d606a +0x8c:  mov    %edi,%eax
088d606c +0x8e:  mov    %esi,%edx
088d606e +0x90:  mov    %eax,(%esp)
088d6071 +0x93:  call   08ae3750 <_Unwind_Resume>
088d6076 +0x98:  mov    %ebx,%eax
088d6078 +0x9a:  mov    %ebx,%eax
088d607a +0x9c:  add    $0x2c,%esp
088d607d +0x9f:  pop    %ebx
088d607e +0xa0:  pop    %esi
088d607f +0xa1:  pop    %edi
088d6080 +0xa2:  pop    %ebp
088d6081 +0xa3:  ret    $0x4
```

## 反编译 C

```c
// BlueMarbleInfoScript::getUniqueDungeonIndex @ 0x88d5fde

/* BlueMarbleInfoScript::getUniqueDungeonIndex(int) */

int BlueMarbleInfoScript::getUniqueDungeonIndex(int param_1)

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
                 (in_stack_00000008 + 0x5c));
    if (uVar2 <= local_24) break;
    piVar1 = (int *)std::
                    vector<BlueMarbleRandomDungeonInfo,std::allocator<BlueMarbleRandomDungeonInfo>>
                    ::operator[]((vector<BlueMarbleRandomDungeonInfo,std::allocator<BlueMarbleRandomDungeonInfo>>
                                  *)(in_stack_00000008 + 0x5c),local_24);
    if ((*piVar1 <= in_stack_0000000c) && (in_stack_0000000c <= piVar1[1])) {
                    /* try { // try from 088d6039 to 088d603d has its CatchHandler @ 088d605c */
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)param_1,piVar1 + 2);
    }
    local_24 = local_24 + 1;
  }
  return param_1;
}
```
