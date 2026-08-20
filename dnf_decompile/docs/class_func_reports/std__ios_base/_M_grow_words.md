# _M_grow_words

`_ZNSt8ios_base13_M_grow_wordsEib`

`std::ios_base::_M_grow_words(int, bool)`

| 类 | 地址 |
|---|---|
| `std::ios_base` | `0x08726eb0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08726eb0  _ZNSt8ios_base13_M_grow_wordsEib
#           std::ios_base::_M_grow_words(int, bool)
# range [0x08726eb0, 0x0872702f]
08726eb0 +0x000:  push   %ebp
08726eb1 +0x001:  mov    %esp,%ebp
08726eb3 +0x003:  push   %edi
08726eb4 +0x004:  push   %esi
08726eb5 +0x005:  push   %ebx
08726eb6 +0x006:  sub    $0x2c,%esp
08726eb9 +0x009:  mov    0x8(%ebp),%ebx
08726ebc +0x00c:  cmpl   $0x7,0xc(%ebp)
08726ec0 +0x010:  movzbl 0x10(%ebp),%esi
08726ec4 +0x014:  movl   $0x8,-0x20(%ebp)
08726ecb +0x01b:  lea    0x24(%ebx),%eax
08726ece +0x01e:  mov    %eax,-0x24(%ebp)
08726ed1 +0x021:  mov    %eax,-0x1c(%ebp)
08726ed4 +0x024:  jle    08726f68 <+0xb8>
08726eda +0x02a:  cmpl   $0x7fffffff,0xc(%ebp)
08726ee1 +0x031:  je     08726f88 <+0xd8>
08726ee7 +0x037:  mov    0xc(%ebp),%edx
08726eea +0x03a:  add    $0x1,%edx
08726eed +0x03d:  mov    %edx,%eax
08726eef +0x03f:  shl    $0x3,%eax
08726ef2 +0x042:  mov    %edx,-0x20(%ebp)
08726ef5 +0x045:  mov    %eax,(%esp)
08726ef8 +0x048:  call   08722dc0 <_Znaj>  ; operator new[](unsigned int)
08726efd +0x04d:  mov    -0x20(%ebp),%ecx
08726f00 +0x050:  mov    %eax,-0x1c(%ebp)
08726f03 +0x053:  test   %ecx,%ecx
08726f05 +0x055:  je     08726f28 <+0x78>
08726f07 +0x057:  mov    0xc(%ebp),%ecx
08726f0a +0x05a:  mov    %eax,%edx
08726f0c +0x05c:  lea    0x0(%esi,%eiz,1),%esi
08726f10 +0x060:  sub    $0x1,%ecx
08726f13 +0x063:  movl   $0x0,(%edx)
08726f19 +0x069:  movl   $0x0,0x4(%edx)
08726f20 +0x070:  add    $0x8,%edx
08726f23 +0x073:  cmp    $0xffffffff,%ecx
08726f26 +0x076:  jne    08726f10 <+0x60>
08726f28 +0x078:  mov    0x64(%ebx),%edx
08726f2b +0x07b:  test   %edx,%edx
08726f2d +0x07d:  jle    08726fb9 <+0x109>
08726f33 +0x083:  mov    0x68(%ebx),%ecx
08726f36 +0x086:  xor    %edx,%edx
08726f38 +0x088:  mov    (%ecx,%edx,8),%esi
08726f3b +0x08b:  mov    0x4(%ecx,%edx,8),%edi
08726f3f +0x08f:  mov    %esi,(%eax,%edx,8)
08726f42 +0x092:  mov    %edi,0x4(%eax,%edx,8)
08726f46 +0x096:  add    $0x1,%edx
08726f49 +0x099:  cmp    %edx,0x64(%ebx)
08726f4c +0x09c:  jg     08726f38 <+0x88>
08726f4e +0x09e:  test   %ecx,%ecx
08726f50 +0x0a0:  je     08726f68 <+0xb8>
08726f52 +0x0a2:  cmp    %ecx,-0x24(%ebp)
08726f55 +0x0a5:  je     08726f68 <+0xb8>
08726f57 +0x0a7:  mov    %ecx,(%esp)
08726f5a +0x0aa:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
08726f5f +0x0af:  movl   $0x0,0x68(%ebx)
08726f66 +0x0b6:  xchg   %ax,%ax
08726f68 +0x0b8:  mov    -0x20(%ebp),%ecx
08726f6b +0x0bb:  mov    -0x1c(%ebp),%edx
08726f6e +0x0be:  mov    %ecx,0x64(%ebx)
08726f71 +0x0c1:  mov    0xc(%ebp),%ecx
08726f74 +0x0c4:  mov    %edx,0x68(%ebx)
08726f77 +0x0c7:  lea    (%edx,%ecx,8),%eax
08726f7a +0x0ca:  add    $0x2c,%esp
08726f7d +0x0cd:  pop    %ebx
08726f7e +0x0ce:  pop    %esi
08726f7f +0x0cf:  pop    %edi
08726f80 +0x0d0:  pop    %ebp
08726f81 +0x0d1:  ret
08726f82 +0x0d2:  lea    0x0(%esi),%esi
08726f88 +0x0d8:  mov    0x14(%ebx),%eax
08726f8b +0x0db:  or     $0x1,%eax
08726f8e +0x0de:  test   %eax,0x10(%ebx)
08726f91 +0x0e1:  mov    %eax,0x14(%ebx)
08726f94 +0x0e4:  jne    08726ff1 <+0x141>
08726f96 +0x0e6:  mov    %esi,%eax
08726f98 +0x0e8:  test   %al,%al
08726f9a +0x0ea:  jne    08726fb0 <+0x100>
08726f9c +0x0ec:  movl   $0x0,0x1c(%ebx)
08726fa3 +0x0f3:  add    $0x2c,%esp
08726fa6 +0x0f6:  lea    0x1c(%ebx),%eax
08726fa9 +0x0f9:  pop    %ebx
08726faa +0x0fa:  pop    %esi
08726fab +0x0fb:  pop    %edi
08726fac +0x0fc:  pop    %ebp
08726fad +0x0fd:  ret
08726fae +0x0fe:  xchg   %ax,%ax
08726fb0 +0x100:  movl   $0x0,0x20(%ebx)
08726fb7 +0x107:  jmp    08726fa3 <+0xf3>
08726fb9 +0x109:  mov    0x68(%ebx),%ecx
08726fbc +0x10c:  jmp    08726f4e <+0x9e>
08726fbe +0x10e:  mov    %eax,(%esp)
08726fc1 +0x111:  call   08725ce0 <__cxa_begin_catch>
08726fc6 +0x116:  mov    0x14(%ebx),%eax
08726fc9 +0x119:  or     $0x1,%eax
08726fcc +0x11c:  test   %eax,0x10(%ebx)
08726fcf +0x11f:  mov    %eax,0x14(%ebx)
08726fd2 +0x122:  jne    08727006 <+0x156>
08726fd4 +0x124:  mov    %esi,%ecx
08726fd6 +0x126:  test   %cl,%cl
08726fd8 +0x128:  je     08726ffd <+0x14d>
08726fda +0x12a:  movl   $0x0,0x20(%ebx)
08726fe1 +0x131:  lea    0x1c(%ebx),%eax
08726fe4 +0x134:  mov    %eax,-0x28(%ebp)
08726fe7 +0x137:  call   08725c30 <__cxa_end_catch>
08726fec +0x13c:  mov    -0x28(%ebp),%eax
08726fef +0x13f:  jmp    08726f7a <+0xca>
08726ff1 +0x141:  movl   $"ios_base::_M_grow_words is not valid",(%esp)
08726ff8 +0x148:  call   086d9780 <_ZSt19__throw_ios_failurePKc>  ; std::__throw_ios_failure(char const*)
08726ffd +0x14d:  movl   $0x0,0x1c(%ebx)
08727004 +0x154:  jmp    08726fe1 <+0x131>
08727006 +0x156:  movl   $"ios_base::_M_grow_words allocation failed",(%esp)
0872700d +0x15d:  call   086d9780 <_ZSt19__throw_ios_failurePKc>  ; std::__throw_ios_failure(char const*)
08727012 +0x162:  mov    %eax,-0x28(%ebp)
08727015 +0x165:  call   08725c30 <__cxa_end_catch>
0872701a +0x16a:  mov    -0x28(%ebp),%eax
0872701d +0x16d:  mov    %eax,(%esp)
08727020 +0x170:  call   08ae3750 <_Unwind_Resume>
08727025 +0x175:  nop
08727026 +0x176:  nop
08727027 +0x177:  nop
08727028 +0x178:  nop
08727029 +0x179:  nop
0872702a +0x17a:  nop
0872702b +0x17b:  nop
0872702c +0x17c:  nop
0872702d +0x17d:  nop
0872702e +0x17e:  nop
0872702f +0x17f:  nop
```

## 反编译 C

```c
// std::ios_base::_M_grow_words @ 0x8726eb0

/* std::ios_base::_M_grow_words(int, bool) */

ios_base * __thiscall std::ios_base::_M_grow_words(ios_base *this,int param_1,bool param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  ios_base *piVar4;
  int local_24;
  ios_base *local_20;
  
  local_24 = 8;
  local_20 = this + 0x24;
  if (7 < param_1) {
    if (param_1 == 0x7fffffff) {
      uVar2 = *(uint *)(this + 0x14);
      *(uint *)(this + 0x14) = uVar2 | 1;
      if ((*(uint *)(this + 0x10) & (uVar2 | 1)) != 0) {
                    /* WARNING: Subroutine does not return */
        __throw_ios_failure("ios_base::_M_grow_words is not valid");
      }
      if (param_2) {
        *(undefined4 *)(this + 0x20) = 0;
      }
      else {
        *(undefined4 *)(this + 0x1c) = 0;
      }
      return this + 0x1c;
    }
    local_24 = param_1 + 1;
                    /* try { // try from 08726ef8 to 08726efc has its CatchHandler @ 08726fbe */
    local_20 = operator_new__(local_24 * 8);
    iVar3 = param_1;
    piVar4 = local_20;
    if (local_24 != 0) {
      do {
        iVar3 = iVar3 + -1;
        *(undefined4 *)piVar4 = 0;
        *(undefined4 *)(piVar4 + 4) = 0;
        piVar4 = piVar4 + 8;
      } while (iVar3 != -1);
    }
    if (*(int *)(this + 100) < 1) {
      piVar4 = *(ios_base **)(this + 0x68);
    }
    else {
      piVar4 = *(ios_base **)(this + 0x68);
      iVar3 = 0;
      do {
        uVar1 = *(undefined4 *)(piVar4 + iVar3 * 8 + 4);
        *(undefined4 *)(local_20 + iVar3 * 8) = *(undefined4 *)(piVar4 + iVar3 * 8);
        *(undefined4 *)(local_20 + iVar3 * 8 + 4) = uVar1;
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(this + 100));
    }
    if ((piVar4 != (ios_base *)0x0) && (this + 0x24 != piVar4)) {
      operator_delete__(piVar4);
      *(undefined4 *)(this + 0x68) = 0;
    }
  }
  *(int *)(this + 100) = local_24;
  *(ios_base **)(this + 0x68) = local_20;
  return local_20 + param_1 * 8;
}
```
