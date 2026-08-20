# getAssaultPriceChaospointWeight

`_ZN21ServerParameterScript31getAssaultPriceChaospointWeightEi`

`ServerParameterScript::getAssaultPriceChaospointWeight(int)`

| 类 | 地址 |
|---|---|
| `ServerParameterScript` | `0x08a8c668` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a8c668  _ZN21ServerParameterScript31getAssaultPriceChaospointWeightEi
#           ServerParameterScript::getAssaultPriceChaospointWeight(int)
# range [0x08a8c668, 0x08a8c803]
08a8c668 +0x000:  push   %ebp
08a8c669 +0x001:  mov    %esp,%ebp
08a8c66b +0x003:  sub    $0x58,%esp
08a8c66e +0x006:  mov    0x8(%ebp),%eax
08a8c671 +0x009:  add    $0x4e4,%eax
08a8c676 +0x00e:  mov    %eax,(%esp)
08a8c679 +0x011:  call   08a8dadc <_GLOBAL__I_ACTIVESTATUS_ATTACK_TAG+0xf53>  ; global constructors keyed to ACTIVESTATUS_ATTACK_TAG+0xf53
08a8c67e +0x016:  test   %al,%al
08a8c680 +0x018:  je     08a8c68c <+0x24>
08a8c682 +0x01a:  mov    $0x3f800000,%eax
08a8c687 +0x01f:  jmp    08a8c7fb <+0x193>
08a8c68c +0x024:  cmpl   $0x3e8,0xc(%ebp)
08a8c693 +0x02b:  jle    08a8c69c <+0x34>
08a8c695 +0x02d:  movl   $0x3e8,0xc(%ebp)
08a8c69c +0x034:  mov    0x8(%ebp),%eax
08a8c69f +0x037:  lea    0x4e4(%eax),%edx
08a8c6a5 +0x03d:  lea    -0x18(%ebp),%eax
08a8c6a8 +0x040:  mov    %edx,0x4(%esp)
08a8c6ac +0x044:  mov    %eax,(%esp)
08a8c6af +0x047:  call   08a8db20 <_GLOBAL__I_ACTIVESTATUS_ATTACK_TAG+0xf97>  ; global constructors keyed to ACTIVESTATUS_ATTACK_TAG+0xf97
08a8c6b4 +0x04c:  sub    $0x4,%esp
08a8c6b7 +0x04f:  lea    -0x28(%ebp),%eax
08a8c6ba +0x052:  mov    %eax,(%esp)
08a8c6bd +0x055:  call   08a8cd28 <_GLOBAL__I_ACTIVESTATUS_ATTACK_TAG+0x19f>  ; global constructors keyed to ACTIVESTATUS_ATTACK_TAG+0x19f
08a8c6c2 +0x05a:  jmp    08a8c73a <+0xd2>
08a8c6c4 +0x05c:  lea    -0x18(%ebp),%eax
08a8c6c7 +0x05f:  mov    %eax,(%esp)
08a8c6ca +0x062:  call   08a8db96 <_GLOBAL__I_ACTIVESTATUS_ATTACK_TAG+0x100d>  ; global constructors keyed to ACTIVESTATUS_ATTACK_TAG+0x100d
08a8c6cf +0x067:  mov    (%eax),%eax
08a8c6d1 +0x069:  cmp    0xc(%ebp),%eax
08a8c6d4 +0x06c:  jg     08a8c6f0 <+0x88>
08a8c6d6 +0x06e:  lea    -0x18(%ebp),%eax
08a8c6d9 +0x071:  mov    %eax,(%esp)
08a8c6dc +0x074:  call   08a8db96 <_GLOBAL__I_ACTIVESTATUS_ATTACK_TAG+0x100d>  ; global constructors keyed to ACTIVESTATUS_ATTACK_TAG+0x100d
08a8c6e1 +0x079:  mov    0x4(%eax),%eax
08a8c6e4 +0x07c:  cmp    0xc(%ebp),%eax
08a8c6e7 +0x07f:  jl     08a8c6f0 <+0x88>
08a8c6e9 +0x081:  mov    $0x1,%eax
08a8c6ee +0x086:  jmp    08a8c6f5 <+0x8d>
08a8c6f0 +0x088:  mov    $0x0,%eax
08a8c6f5 +0x08d:  test   %al,%al
08a8c6f7 +0x08f:  je     08a8c71d <+0xb5>
08a8c6f9 +0x091:  lea    -0x18(%ebp),%eax
08a8c6fc +0x094:  mov    %eax,(%esp)
08a8c6ff +0x097:  call   08a8dba0 <_GLOBAL__I_ACTIVESTATUS_ATTACK_TAG+0x1017>  ; global constructors keyed to ACTIVESTATUS_ATTACK_TAG+0x1017
08a8c704 +0x09c:  mov    (%eax),%edx
08a8c706 +0x09e:  mov    %edx,-0x28(%ebp)
08a8c709 +0x0a1:  mov    0x4(%eax),%edx
08a8c70c +0x0a4:  mov    %edx,-0x24(%ebp)
08a8c70f +0x0a7:  mov    0x8(%eax),%edx
08a8c712 +0x0aa:  mov    %edx,-0x20(%ebp)
08a8c715 +0x0ad:  mov    0xc(%eax),%eax
08a8c718 +0x0b0:  mov    %eax,-0x1c(%ebp)
08a8c71b +0x0b3:  jmp    08a8c76f <+0x107>
08a8c71d +0x0b5:  lea    -0x10(%ebp),%eax
08a8c720 +0x0b8:  movl   $0x0,0x8(%esp)
08a8c728 +0x0c0:  lea    -0x18(%ebp),%edx
08a8c72b +0x0c3:  mov    %edx,0x4(%esp)
08a8c72f +0x0c7:  mov    %eax,(%esp)
08a8c732 +0x0ca:  call   08a8dbaa <_GLOBAL__I_ACTIVESTATUS_ATTACK_TAG+0x1021>  ; global constructors keyed to ACTIVESTATUS_ATTACK_TAG+0x1021
08a8c737 +0x0cf:  sub    $0x4,%esp
08a8c73a +0x0d2:  mov    0x8(%ebp),%eax
08a8c73d +0x0d5:  lea    0x4e4(%eax),%edx
08a8c743 +0x0db:  lea    -0x14(%ebp),%eax
08a8c746 +0x0de:  mov    %edx,0x4(%esp)
08a8c74a +0x0e2:  mov    %eax,(%esp)
08a8c74d +0x0e5:  call   08a8db44 <_GLOBAL__I_ACTIVESTATUS_ATTACK_TAG+0xfbb>  ; global constructors keyed to ACTIVESTATUS_ATTACK_TAG+0xfbb
08a8c752 +0x0ea:  sub    $0x4,%esp
08a8c755 +0x0ed:  lea    -0x14(%ebp),%eax
08a8c758 +0x0f0:  mov    %eax,0x4(%esp)
08a8c75c +0x0f4:  lea    -0x18(%ebp),%eax
08a8c75f +0x0f7:  mov    %eax,(%esp)
08a8c762 +0x0fa:  call   08a8db6a <_GLOBAL__I_ACTIVESTATUS_ATTACK_TAG+0xfe1>  ; global constructors keyed to ACTIVESTATUS_ATTACK_TAG+0xfe1
08a8c767 +0x0ff:  test   %al,%al
08a8c769 +0x101:  jne    08a8c6c4 <+0x5c>
08a8c76f +0x107:  flds   -0x20(%ebp)
08a8c772 +0x10a:  fldz
08a8c774 +0x10c:  fxch   %st(1)
08a8c776 +0x10e:  fucompp
08a8c778 +0x110:  fnstsw %ax
08a8c77a +0x112:  sahf
08a8c77b +0x113:  jne    08a8c786 <+0x11e>
08a8c77d +0x115:  jp     08a8c786 <+0x11e>
08a8c77f +0x117:  mov    $0x3f800000,%eax
08a8c784 +0x11c:  jmp    08a8c7fb <+0x193>
08a8c786 +0x11e:  mov    $0x3f800000,%eax
08a8c78b +0x123:  mov    %eax,-0xc(%ebp)
08a8c78e +0x126:  flds   -0x20(%ebp)
08a8c791 +0x129:  flds   -0x1c(%ebp)
08a8c794 +0x12c:  flds   -0x20(%ebp)
08a8c797 +0x12f:  fsubrp %st,%st(1)
08a8c799 +0x131:  mov    -0x24(%ebp),%edx
08a8c79c +0x134:  mov    -0x28(%ebp),%eax
08a8c79f +0x137:  mov    %edx,%ecx
08a8c7a1 +0x139:  sub    %eax,%ecx
08a8c7a3 +0x13b:  mov    %ecx,%eax
08a8c7a5 +0x13d:  mov    %eax,-0x2c(%ebp)
08a8c7a8 +0x140:  fildl  -0x2c(%ebp)
08a8c7ab +0x143:  fdivrp %st,%st(1)
08a8c7ad +0x145:  mov    -0x28(%ebp),%eax
08a8c7b0 +0x148:  mov    0xc(%ebp),%edx
08a8c7b3 +0x14b:  mov    %edx,%ecx
08a8c7b5 +0x14d:  sub    %eax,%ecx
08a8c7b7 +0x14f:  mov    %ecx,%eax
08a8c7b9 +0x151:  mov    %eax,-0x2c(%ebp)
08a8c7bc +0x154:  fildl  -0x2c(%ebp)
08a8c7bf +0x157:  fmulp  %st,%st(1)
08a8c7c1 +0x159:  faddp  %st,%st(1)
08a8c7c3 +0x15b:  fstps  -0xc(%ebp)
08a8c7c6 +0x15e:  flds   -0x20(%ebp)
08a8c7c9 +0x161:  flds   -0xc(%ebp)
08a8c7cc +0x164:  fxch   %st(1)
08a8c7ce +0x166:  fucompp
08a8c7d0 +0x168:  fnstsw %ax
08a8c7d2 +0x16a:  sahf
08a8c7d3 +0x16b:  seta   %al
08a8c7d6 +0x16e:  test   %al,%al
08a8c7d8 +0x170:  je     08a8c7df <+0x177>
08a8c7da +0x172:  mov    -0x20(%ebp),%eax
08a8c7dd +0x175:  jmp    08a8c7fb <+0x193>
08a8c7df +0x177:  flds   -0x1c(%ebp)
08a8c7e2 +0x17a:  flds   -0xc(%ebp)
08a8c7e5 +0x17d:  fucompp
08a8c7e7 +0x17f:  fnstsw %ax
08a8c7e9 +0x181:  test   $0x45,%ah
08a8c7ec +0x184:  sete   %al
08a8c7ef +0x187:  test   %al,%al
08a8c7f1 +0x189:  je     08a8c7f8 <+0x190>
08a8c7f3 +0x18b:  mov    -0x1c(%ebp),%eax
08a8c7f6 +0x18e:  jmp    08a8c7fb <+0x193>
08a8c7f8 +0x190:  mov    -0xc(%ebp),%eax
08a8c7fb +0x193:  mov    %eax,-0x3c(%ebp)
08a8c7fe +0x196:  flds   -0x3c(%ebp)
08a8c801 +0x199:  leave
08a8c802 +0x19a:  ret
08a8c803 +0x19b:  nop
```

## 反编译 C

```c
// ServerParameterScript::getAssaultPriceChaospointWeight @ 0x8a8c668

/* ServerParameterScript::getAssaultPriceChaospointWeight(int) */

longdouble __thiscall
ServerParameterScript::getAssaultPriceChaospointWeight(ServerParameterScript *this,int param_1)

{
  float fVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  int local_2c;
  int local_28;
  float local_24;
  float local_20;
  __normal_iterator<stAssaultChaosPointWeight*,std::vector<stAssaultChaosPointWeight,std::allocator<stAssaultChaosPointWeight>>>
  local_1c [4];
  __normal_iterator local_18 [4];
  __normal_iterator<stAssaultChaosPointWeight*,std::vector<stAssaultChaosPointWeight,std::allocator<stAssaultChaosPointWeight>>>
  local_14 [16];
  
  cVar2 = std::vector<stAssaultChaosPointWeight,std::allocator<stAssaultChaosPointWeight>>::empty();
  if (cVar2 == '\0') {
    if (1000 < param_1) {
      param_1 = 1000;
    }
    std::vector<stAssaultChaosPointWeight,std::allocator<stAssaultChaosPointWeight>>::begin();
    stAssaultChaosPointWeight::stAssaultChaosPointWeight((stAssaultChaosPointWeight *)&local_2c);
    while( true ) {
      std::vector<stAssaultChaosPointWeight,std::allocator<stAssaultChaosPointWeight>>::end();
      bVar3 = __gnu_cxx::operator!=(local_1c,local_18);
      if (!bVar3) break;
      piVar4 = (int *)__gnu_cxx::
                      __normal_iterator<stAssaultChaosPointWeight*,std::vector<stAssaultChaosPointWeight,std::allocator<stAssaultChaosPointWeight>>>
                      ::operator->(local_1c);
      if ((param_1 < *piVar4) ||
         (iVar5 = __gnu_cxx::
                  __normal_iterator<stAssaultChaosPointWeight*,std::vector<stAssaultChaosPointWeight,std::allocator<stAssaultChaosPointWeight>>>
                  ::operator->(local_1c), *(int *)(iVar5 + 4) < param_1)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        piVar4 = (int *)__gnu_cxx::
                        __normal_iterator<stAssaultChaosPointWeight*,std::vector<stAssaultChaosPointWeight,std::allocator<stAssaultChaosPointWeight>>>
                        ::operator*(local_1c);
        local_2c = *piVar4;
        local_28 = piVar4[1];
        local_24 = (float)piVar4[2];
        local_20 = (float)piVar4[3];
        break;
      }
      __gnu_cxx::
      __normal_iterator<stAssaultChaosPointWeight*,std::vector<stAssaultChaosPointWeight,std::allocator<stAssaultChaosPointWeight>>>
      ::operator++(local_14,(int)local_1c);
    }
    if ((local_24 != 0.0) || (NAN(local_24))) {
      fVar1 = (float)(param_1 - local_2c) * ((local_20 - local_24) / (float)(local_28 - local_2c)) +
              local_24;
      if ((local_24 <= fVar1) && (local_24 = fVar1, local_20 < fVar1)) {
        local_24 = local_20;
      }
    }
    else {
      local_24 = 1.0;
    }
  }
  else {
    local_24 = 1.0;
  }
  return (longdouble)local_24;
}
```
