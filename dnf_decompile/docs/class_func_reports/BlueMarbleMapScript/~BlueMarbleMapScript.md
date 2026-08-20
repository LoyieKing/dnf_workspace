# ~BlueMarbleMapScript

`_ZN19BlueMarbleMapScriptD1Ev`

`BlueMarbleMapScript::~BlueMarbleMapScript()`

| 类 | 地址 |
|---|---|
| `BlueMarbleMapScript` | `0x088d5418` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088d5418  _ZN19BlueMarbleMapScriptD1Ev
#           BlueMarbleMapScript::~BlueMarbleMapScript()
# range [0x088d5418, 0x088d54cd]
088d5418 +0x00:  push   %ebp
088d5419 +0x01:  mov    %esp,%ebp
088d541b +0x03:  push   %esi
088d541c +0x04:  push   %ebx
088d541d +0x05:  sub    $0x20,%esp
088d5420 +0x08:  movl   $0x0,-0xc(%ebp)
088d5427 +0x0f:  jmp    088d547e <+0x66>
088d5429 +0x11:  mov    0x8(%ebp),%eax
088d542c +0x14:  mov    -0xc(%ebp),%edx
088d542f +0x17:  mov    %edx,0x4(%esp)
088d5433 +0x1b:  mov    %eax,(%esp)
088d5436 +0x1e:  call   088d680c <_GLOBAL__I__ZN20BlueMarbleTileScriptC2Ev+0x8e>  ; global constructors keyed to BlueMarbleTileScript::BlueMarbleTileScript()+0x8e
088d543b +0x23:  mov    (%eax),%eax
088d543d +0x25:  test   %eax,%eax
088d543f +0x27:  setne  %al
088d5442 +0x2a:  test   %al,%al
088d5444 +0x2c:  je     088d5462 <+0x4a>
088d5446 +0x2e:  mov    0x8(%ebp),%eax
088d5449 +0x31:  mov    -0xc(%ebp),%edx
088d544c +0x34:  mov    %edx,0x4(%esp)
088d5450 +0x38:  mov    %eax,(%esp)
088d5453 +0x3b:  call   088d680c <_GLOBAL__I__ZN20BlueMarbleTileScriptC2Ev+0x8e>  ; global constructors keyed to BlueMarbleTileScript::BlueMarbleTileScript()+0x8e
088d5458 +0x40:  mov    (%eax),%eax
088d545a +0x42:  mov    %eax,(%esp)
088d545d +0x45:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
088d5462 +0x4a:  mov    0x8(%ebp),%eax
088d5465 +0x4d:  mov    -0xc(%ebp),%edx
088d5468 +0x50:  mov    %edx,0x4(%esp)
088d546c +0x54:  mov    %eax,(%esp)
088d546f +0x57:  call   088d680c <_GLOBAL__I__ZN20BlueMarbleTileScriptC2Ev+0x8e>  ; global constructors keyed to BlueMarbleTileScript::BlueMarbleTileScript()+0x8e
088d5474 +0x5c:  movl   $0x0,(%eax)
088d547a +0x62:  addl   $0x1,-0xc(%ebp)
088d547e +0x66:  mov    0x8(%ebp),%eax
088d5481 +0x69:  mov    %eax,(%esp)
088d5484 +0x6c:  call   080da4e8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x685>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x685
088d5489 +0x71:  cmp    -0xc(%ebp),%eax
088d548c +0x74:  seta   %al
088d548f +0x77:  test   %al,%al
088d5491 +0x79:  jne    088d5429 <+0x11>
088d5493 +0x7b:  mov    0x8(%ebp),%eax
088d5496 +0x7e:  mov    %eax,(%esp)
088d5499 +0x81:  call   088d681e <_GLOBAL__I__ZN20BlueMarbleTileScriptC2Ev+0xa0>  ; global constructors keyed to BlueMarbleTileScript::BlueMarbleTileScript()+0xa0
088d549e +0x86:  jmp    088d54bb <+0xa3>
088d54a0 +0x88:  mov    %edx,%ebx
088d54a2 +0x8a:  mov    %eax,%esi
088d54a4 +0x8c:  mov    0x8(%ebp),%eax
088d54a7 +0x8f:  mov    %eax,(%esp)
088d54aa +0x92:  call   088d67ae <_GLOBAL__I__ZN20BlueMarbleTileScriptC2Ev+0x30>  ; global constructors keyed to BlueMarbleTileScript::BlueMarbleTileScript()+0x30
088d54af +0x97:  mov    %esi,%eax
088d54b1 +0x99:  mov    %ebx,%edx
088d54b3 +0x9b:  mov    %eax,(%esp)
088d54b6 +0x9e:  call   08ae3750 <_Unwind_Resume>
088d54bb +0xa3:  mov    0x8(%ebp),%eax
088d54be +0xa6:  mov    %eax,(%esp)
088d54c1 +0xa9:  call   088d67ae <_GLOBAL__I__ZN20BlueMarbleTileScriptC2Ev+0x30>  ; global constructors keyed to BlueMarbleTileScript::BlueMarbleTileScript()+0x30
088d54c6 +0xae:  add    $0x20,%esp
088d54c9 +0xb1:  pop    %ebx
088d54ca +0xb2:  pop    %esi
088d54cb +0xb3:  pop    %ebp
088d54cc +0xb4:  ret
088d54cd +0xb5:  nop
```

## 反编译 C

```c
// BlueMarbleMapScript::~BlueMarbleMapScript @ 0x88d5418

/* BlueMarbleMapScript::~BlueMarbleMapScript() */

void __thiscall BlueMarbleMapScript::~BlueMarbleMapScript(BlueMarbleMapScript *this)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 local_10;
  
  local_10 = 0;
  while( true ) {
    uVar3 = std::vector<BlueMarbleTileScript*,std::allocator<BlueMarbleTileScript*>>::size
                      ((vector<BlueMarbleTileScript*,std::allocator<BlueMarbleTileScript*>> *)this);
    if (uVar3 <= local_10) break;
    piVar1 = (int *)std::vector<BlueMarbleTileScript*,std::allocator<BlueMarbleTileScript*>>::
                    operator[]((vector<BlueMarbleTileScript*,std::allocator<BlueMarbleTileScript*>>
                                *)this,local_10);
    if (*piVar1 != 0) {
      puVar2 = (undefined4 *)
               std::vector<BlueMarbleTileScript*,std::allocator<BlueMarbleTileScript*>>::operator[]
                         ((vector<BlueMarbleTileScript*,std::allocator<BlueMarbleTileScript*>> *)
                          this,local_10);
      operator_delete((void *)*puVar2);
    }
    puVar2 = (undefined4 *)
             std::vector<BlueMarbleTileScript*,std::allocator<BlueMarbleTileScript*>>::operator[]
                       ((vector<BlueMarbleTileScript*,std::allocator<BlueMarbleTileScript*>> *)this,
                        local_10);
    *puVar2 = 0;
    local_10 = local_10 + 1;
  }
                    /* try { // try from 088d5499 to 088d549d has its CatchHandler @ 088d54a0 */
  std::vector<BlueMarbleTileScript*,std::allocator<BlueMarbleTileScript*>>::clear
            ((vector<BlueMarbleTileScript*,std::allocator<BlueMarbleTileScript*>> *)this);
  std::vector<BlueMarbleTileScript*,std::allocator<BlueMarbleTileScript*>>::~vector
            ((vector<BlueMarbleTileScript*,std::allocator<BlueMarbleTileScript*>> *)this);
  return;
}
```
