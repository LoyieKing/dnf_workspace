# reset

`_ZN12advancealtar9ProcStage18ProcSummonObjectMs5resetEv`

`advancealtar::ProcStage::ProcSummonObjectMs::reset()`

| 类 | 地址 |
|---|---|
| `advancealtar::ProcStage::ProcSummonObjectMs` | `0x0812d43c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812d43c  _ZN12advancealtar9ProcStage18ProcSummonObjectMs5resetEv
#           advancealtar::ProcStage::ProcSummonObjectMs::reset()
# range [0x0812d43c, 0x0812d509]
0812d43c +0x00:  push   %ebp
0812d43d +0x01:  mov    %esp,%ebp
0812d43f +0x03:  sub    $0x28,%esp
0812d442 +0x06:  mov    0x8(%ebp),%eax
0812d445 +0x09:  movl   $0x0,(%eax)
0812d44b +0x0f:  mov    0x8(%ebp),%eax
0812d44e +0x12:  movl   $0x0,0x28(%eax)
0812d455 +0x19:  mov    0x8(%ebp),%eax
0812d458 +0x1c:  movl   $0x0,0x2c(%eax)
0812d45f +0x23:  mov    0x8(%ebp),%eax
0812d462 +0x26:  lea    0x4(%eax),%edx
0812d465 +0x29:  lea    -0x14(%ebp),%eax
0812d468 +0x2c:  mov    %edx,0x4(%esp)
0812d46c +0x30:  mov    %eax,(%esp)
0812d46f +0x33:  call   08135054 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0xc5b>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0xc5b
0812d474 +0x38:  sub    $0x4,%esp
0812d477 +0x3b:  lea    -0x14(%ebp),%eax
0812d47a +0x3e:  mov    %eax,0x4(%esp)
0812d47e +0x42:  lea    -0x18(%ebp),%eax
0812d481 +0x45:  mov    %eax,(%esp)
0812d484 +0x48:  call   08135078 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0xc7f>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0xc7f
0812d489 +0x4d:  jmp    0812d4bd <+0x81>
0812d48b +0x4f:  lea    -0x18(%ebp),%eax
0812d48e +0x52:  mov    %eax,(%esp)
0812d491 +0x55:  call   08135118 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0xd1f>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0xd1f
0812d496 +0x5a:  mov    (%eax),%eax
0812d498 +0x5c:  mov    %eax,(%esp)
0812d49b +0x5f:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0812d4a0 +0x64:  lea    -0xc(%ebp),%eax
0812d4a3 +0x67:  movl   $0x0,0x8(%esp)
0812d4ab +0x6f:  lea    -0x18(%ebp),%edx
0812d4ae +0x72:  mov    %edx,0x4(%esp)
0812d4b2 +0x76:  mov    %eax,(%esp)
0812d4b5 +0x79:  call   081350e4 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0xceb>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0xceb
0812d4ba +0x7e:  sub    $0x4,%esp
0812d4bd +0x81:  mov    0x8(%ebp),%eax
0812d4c0 +0x84:  lea    0x4(%eax),%edx
0812d4c3 +0x87:  lea    -0x10(%ebp),%eax
0812d4c6 +0x8a:  mov    %edx,0x4(%esp)
0812d4ca +0x8e:  mov    %eax,(%esp)
0812d4cd +0x91:  call   08135092 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0xc99>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0xc99
0812d4d2 +0x96:  sub    $0x4,%esp
0812d4d5 +0x99:  lea    -0x10(%ebp),%eax
0812d4d8 +0x9c:  mov    %eax,0x4(%esp)
0812d4dc +0xa0:  lea    -0x18(%ebp),%eax
0812d4df +0xa3:  mov    %eax,(%esp)
0812d4e2 +0xa6:  call   081350b8 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0xcbf>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0xcbf
0812d4e7 +0xab:  test   %al,%al
0812d4e9 +0xad:  jne    0812d48b <+0x4f>
0812d4eb +0xaf:  mov    0x8(%ebp),%eax
0812d4ee +0xb2:  add    $0x10,%eax
0812d4f1 +0xb5:  mov    %eax,(%esp)
0812d4f4 +0xb8:  call   08135122 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0xd29>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0xd29
0812d4f9 +0xbd:  mov    0x8(%ebp),%eax
0812d4fc +0xc0:  add    $0x4,%eax
0812d4ff +0xc3:  mov    %eax,(%esp)
0812d502 +0xc6:  call   08135136 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0xd3d>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0xd3d
0812d507 +0xcb:  leave
0812d508 +0xcc:  ret
0812d509 +0xcd:  nop
```

## 反编译 C

```c
// advancealtar::ProcStage::ProcSummonObjectMs::reset @ 0x812d43c

/* advancealtar::ProcStage::ProcSummonObjectMs::reset() */

void __thiscall advancealtar::ProcStage::ProcSummonObjectMs::reset(ProcSummonObjectMs *this)

{
  bool bVar1;
  undefined4 *puVar2;
  __normal_iterator<advancealtar::_SummonObjectMs*const*,std::vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>>
  local_1c [4];
  __normal_iterator local_18 [4];
  __normal_iterator local_14 [4];
  __normal_iterator<advancealtar::_SummonObjectMs*const*,std::vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>>
  local_10 [12];
  
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  std::vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>::begin
            ();
  __gnu_cxx::
  __normal_iterator<advancealtar::_SummonObjectMs*const*,std::vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>>
  ::__normal_iterator<advancealtar::_SummonObjectMs**>(local_1c,local_18);
  while( true ) {
    std::vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>::end
              ();
    bVar1 = __gnu_cxx::operator!=(local_1c,local_14);
    if (!bVar1) break;
    puVar2 = (undefined4 *)
             __gnu_cxx::
             __normal_iterator<advancealtar::_SummonObjectMs*const*,std::vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>>
             ::operator*(local_1c);
    operator_delete((void *)*puVar2);
    __gnu_cxx::
    __normal_iterator<advancealtar::_SummonObjectMs*const*,std::vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>>
    ::operator++(local_10,(int)local_1c);
  }
  std::
  map<short,advancealtar::_SummonObjectMs*,std::less<short>,std::allocator<std::pair<short_const,advancealtar::_SummonObjectMs*>>>
  ::clear((map<short,advancealtar::_SummonObjectMs*,std::less<short>,std::allocator<std::pair<short_const,advancealtar::_SummonObjectMs*>>>
           *)(this + 0x10));
  std::vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>::clear
            ((vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>
              *)(this + 4));
  return;
}
```
